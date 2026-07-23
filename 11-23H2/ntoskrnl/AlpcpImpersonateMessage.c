/*
 * XREFs of AlpcpImpersonateMessage @ 0x14071D000
 * Callers:
 *     NtAlpcImpersonateClientOfPort @ 0x14071CDA0 (NtAlpcImpersonateClientOfPort.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140231120 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x140231660 (ObfDereferenceObject.c)
 *     ExfTryToWakePushLock @ 0x1402BDBF0 (ExfTryToWakePushLock.c)
 *     __security_check_cookie @ 0x1403D7EC0 (__security_check_cookie.c)
 *     memset @ 0x140435E00 (memset.c)
 *     AlpcpReferenceConnectedPort @ 0x14071D2C8 (AlpcpReferenceConnectedPort.c)
 *     SeDeleteClientSecurity @ 0x14071D380 (SeDeleteClientSecurity.c)
 *     SeCreateClientSecurityEx @ 0x14071D3B0 (SeCreateClientSecurityEx.c)
 *     SeCreateClientSecurity @ 0x14071D550 (SeCreateClientSecurity.c)
 *     PsImpersonateClient @ 0x140734C20 (PsImpersonateClient.c)
 */

__int64 __fastcall AlpcpImpersonateMessage(__int64 a1, __int64 a2, int a3, int a4, SECURITY_IMPERSONATION_LEVEL a5)
{
  int v8; // r15d
  void *v9; // r14
  struct _SECURITY_CLIENT_CONTEXT *p_ClientContext; // rbx
  __int64 v11; // rcx
  __int64 v12; // rbp
  _DWORD *v13; // rax
  struct _KTHREAD *v14; // rcx
  struct _SECURITY_QUALITY_OF_SERVICE *v15; // rdx
  NTSTATUS ClientSecurity; // eax
  unsigned int v17; // edi
  BOOLEAN v18; // dh
  int v20; // eax
  SECURITY_IMPERSONATION_LEVEL ImpersonationLevel[4]; // [rsp+40h] [rbp-E8h]
  PACCESS_TOKEN Token[2]; // [rsp+50h] [rbp-D8h]
  struct _SECURITY_CLIENT_CONTEXT ClientContext; // [rsp+90h] [rbp-98h] BYREF

  memset(&ClientContext, 0, 0x44uLL);
  v8 = 0;
  v9 = 0LL;
  p_ClientContext = 0LL;
  if ( (*(_BYTE *)(a2 + 40) & 7) != 3 )
    return (unsigned int)-1073741790;
  if ( _bittest16((const signed __int16 *)(a2 + 244), 0xEu) )
    return (unsigned int)-1073741790;
  v11 = *(_QWORD *)(a2 + 16);
  if ( v11 != a1 && ((*(_BYTE *)(a1 + 416) & 6) != 6 || v11 != **(_QWORD **)(a1 + 16)) )
    return (unsigned int)-1073741790;
  v12 = *(_QWORD *)(a2 + 136);
  if ( !v12 )
  {
    v13 = (_DWORD *)AlpcpReferenceConnectedPort(a1);
    v9 = v13;
    if ( v13 )
    {
      if ( (v13[64] & 0x10000) != 0 )
      {
        if ( (v13[104] & 0x400) == 0 )
        {
          p_ClientContext = (struct _SECURITY_CLIENT_CONTEXT *)(v13 + 16);
          goto LABEL_16;
        }
        v14 = *(struct _KTHREAD **)(a2 + 32);
        if ( v14 )
        {
          if ( a4 && v13[66] < a5 )
          {
            v17 = -1073741790;
            goto LABEL_21;
          }
          v15 = (struct _SECURITY_QUALITY_OF_SERVICE *)(v13 + 65);
          if ( a3 )
            ClientSecurity = SeCreateClientSecurityEx(v14, v15, 0LL);
          else
            ClientSecurity = SeCreateClientSecurity(v14, v15, 0, &ClientContext);
          v17 = ClientSecurity;
          if ( ClientSecurity < 0 )
            goto LABEL_21;
          p_ClientContext = &ClientContext;
          v8 = 1;
LABEL_16:
          *(_OWORD *)ImpersonationLevel = *(_OWORD *)&p_ClientContext->SecurityQos.Length;
          *(_OWORD *)Token = *(_OWORD *)&p_ClientContext->ClientToken;
          if ( a4 )
          {
            if ( a5 > p_ClientContext->SecurityQos.ImpersonationLevel )
            {
              v17 = -1073741790;
              goto LABEL_20;
            }
            ImpersonationLevel[1] = a5;
          }
          if ( LOBYTE(Token[1]) )
            v18 = BYTE1(*(_QWORD *)&p_ClientContext->DirectlyAccessClientToken);
          else
            v18 = BYTE1(*(_QWORD *)&p_ClientContext->SecurityQos.ContextTrackingMode);
          v17 = PsImpersonateClient(KeGetCurrentThread(), Token[0], 1u, v18, ImpersonationLevel[1]);
LABEL_20:
          if ( !v9 )
            goto LABEL_22;
          goto LABEL_21;
        }
        v17 = -1073741790;
      }
      else
      {
        v17 = -1073741790;
      }
LABEL_21:
      ObfDereferenceObject(v9);
LABEL_22:
      if ( v8 )
        SeDeleteClientSecurity(p_ClientContext);
      return v17;
    }
    return (unsigned int)-1073741790;
  }
  ExAcquirePushLockExclusiveEx(v12 - 16, 0LL);
  v20 = *(_DWORD *)(v12 + 104);
  if ( (v20 & 1) == 0 )
  {
    *(_DWORD *)(v12 + 104) = v20 | 2;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v12 - 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v12 - 16));
    KeAbPostRelease(v12 - 16);
    p_ClientContext = (struct _SECURITY_CLIENT_CONTEXT *)(v12 + 32);
    goto LABEL_16;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v12 - 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(v12 - 16));
  KeAbPostRelease(v12 - 16);
  return 3221225506LL;
}
