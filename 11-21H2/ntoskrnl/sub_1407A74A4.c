/*
 * XREFs of sub_1407A74A4 @ 0x1407A74A4
 * Callers:
 *     sub_1407A56B0 @ 0x1407A56B0 (sub_1407A56B0.c)
 *     sub_1407A817C @ 0x1407A817C (sub_1407A817C.c)
 *     AlpcCreateSecurityContext @ 0x1409662A0 (AlpcCreateSecurityContext.c)
 * Callees:
 *     PsGetThreadProcess @ 0x1402321F0 (PsGetThreadProcess.c)
 *     ObfReferenceObjectWithTag @ 0x1402A6D50 (ObfReferenceObjectWithTag.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402AC910 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1402AD220 (ExAcquirePushLockSharedEx.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     ObfReferenceObject @ 0x140347CF0 (ObfReferenceObject.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     memset @ 0x140435E00 (memset.c)
 *     SeCreateClientSecurity @ 0x1407271D0 (SeCreateClientSecurity.c)
 *     sub_1407A5530 @ 0x1407A5530 (sub_1407A5530.c)
 *     sub_1407A5668 @ 0x1407A5668 (sub_1407A5668.c)
 *     sub_1407A5A54 @ 0x1407A5A54 (sub_1407A5A54.c)
 *     sub_1407A6950 @ 0x1407A6950 (sub_1407A6950.c)
 *     sub_1407A7378 @ 0x1407A7378 (sub_1407A7378.c)
 *     sub_1407A73B0 @ 0x1407A73B0 (sub_1407A73B0.c)
 *     sub_1407A7464 @ 0x1407A7464 (sub_1407A7464.c)
 *     sub_1407A7F84 @ 0x1407A7F84 (sub_1407A7F84.c)
 */

__int64 __fastcall sub_1407A74A4(
        volatile signed __int64 *Object,
        PETHREAD ClientThread,
        char a3,
        struct _SECURITY_QUALITY_OF_SERVICE *a4,
        ULONG_PTR *a5)
{
  PEPROCESS ThreadProcess; // rdi
  void *v10; // rax
  ULONG_PTR v11; // rbx
  int ClientSecurity; // ebp
  volatile signed __int64 *v14; // rdi
  __int64 v15; // rcx
  __int64 v16; // rax
  ULONG_PTR v17[7]; // [rsp+20h] [rbp-38h] BYREF

  ThreadProcess = PsGetThreadProcess(ClientThread);
  v10 = (void *)sub_1407A73B0((__int64)qword_140002E90, 112LL, 0);
  v11 = (ULONG_PTR)v10;
  if ( !v10 )
    return 3221225626LL;
  memset(v10, 0, 0x70uLL);
  *(_QWORD *)(v11 + 8) = -1LL;
  ClientSecurity = sub_1407A7464((__int64)ThreadProcess, 0xA0uLL);
  if ( ClientSecurity >= 0 )
  {
    ClientSecurity = SeCreateClientSecurity(ClientThread, a4, 0, (PSECURITY_CLIENT_CONTEXT)(v11 + 32));
    if ( ClientSecurity < 0 )
    {
      sub_1407A7378((__int64)ThreadProcess, 0xA0uLL);
    }
    else
    {
      ObfReferenceObjectWithTag(ThreadProcess, 0x63706C41u);
      *(_QWORD *)(v11 + 16) = ThreadProcess;
      if ( !a3 )
      {
LABEL_5:
        *a5 = v11;
        return 0LL;
      }
      v14 = Object + 44;
      ExAcquirePushLockSharedEx((ULONG_PTR)(Object + 44), 0LL);
      if ( (Object[52] & 0x20) == 0 )
      {
        ExAcquirePushLockExclusiveEx(v11 - 16, 0LL);
        *(_BYTE *)(v11 - 32) |= 4u;
        sub_1407A7F84(v11);
        v15 = *((_QWORD *)Object + 2) + 40LL;
        v17[0] = v11;
        *(_QWORD *)v11 = v15;
        v16 = sub_1407A5530(v15, v17);
        *(_QWORD *)(v11 + 8) = v16;
        if ( v16 != -1 )
        {
          ObfReferenceObject((PVOID)Object);
          *(_QWORD *)(v11 + 24) = Object;
          sub_1407A6950((__int64)Object, v11);
          if ( _InterlockedCompareExchange64(v14, 0LL, 17LL) != 17 )
            ExfReleasePushLockShared((signed __int64 *)Object + 44);
          sub_1402AFC00((ULONG_PTR)(Object + 44));
          sub_1407A5668(v11);
          goto LABEL_5;
        }
        if ( _InterlockedCompareExchange64(v14, 0LL, 17LL) != 17 )
          ExfReleasePushLockShared((signed __int64 *)Object + 44);
        sub_1402AFC00((ULONG_PTR)(Object + 44));
        *(_QWORD *)v11 = 0LL;
        sub_1407A5668(v11);
        sub_1407A5A54(v11, 2);
        return 3221225626LL;
      }
      if ( _InterlockedCompareExchange64(v14, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)Object + 44);
      sub_1402AFC00((ULONG_PTR)(Object + 44));
      ClientSecurity = -1073741670;
    }
  }
  sub_1407A5A54(v11, 1);
  return (unsigned int)ClientSecurity;
}
