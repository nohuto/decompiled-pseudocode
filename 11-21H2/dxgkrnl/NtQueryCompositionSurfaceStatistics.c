/*
 * XREFs of NtQueryCompositionSurfaceStatistics @ 0x1C0017990
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 */

__int64 __fastcall NtQueryCompositionSurfaceStatistics(HANDLE Handle, _OWORD *a2)
{
  char *v4; // r14
  char *v5; // rsi
  NTSTATUS v6; // ebx
  char *v7; // r15
  char *v8; // rsi
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rcx
  char v12; // cl
  char *v13; // rcx
  PVOID Object; // [rsp+38h] [rbp-80h] BYREF
  _OWORD v16[4]; // [rsp+40h] [rbp-78h] BYREF

  memset(v16, 0, sizeof(v16));
  KeEnterCriticalRegion();
  v4 = 0LL;
  v5 = 0LL;
  Object = 0LL;
  v6 = ObReferenceObjectByHandle(Handle, 1u, g_pDxgkCompositionObjectType, 1, &Object, 0LL);
  v7 = (char *)Object;
  if ( v6 >= 0 )
  {
    if ( (***((unsigned int (__fastcall ****)(_QWORD))Object + 2))(*((_QWORD *)Object + 2)) != 1 )
    {
      ObfDereferenceObject(v7);
      v6 = -1073741788;
      goto LABEL_6;
    }
    v5 = v7;
  }
  if ( v6 >= 0 )
    v4 = v5;
LABEL_6:
  if ( v6 >= 0 )
  {
    v8 = 0LL;
    v6 = ObReferenceObjectByPointer(v4, 3u, g_pDxgkCompositionObjectType, 0);
    if ( v6 >= 0 )
    {
      KeEnterCriticalRegion();
      ExAcquirePushLockSharedEx(v4 + 48, 0LL);
      v6 = 0;
      v8 = v4 + 40;
    }
    if ( v6 >= 0 )
    {
      v6 = -1073741823;
      v9 = *((_QWORD *)v8 + 13);
      if ( v9 )
      {
        v6 = (*(__int64 (__fastcall **)(__int64, _OWORD *))(*(_QWORD *)v9 + 48LL))(v9, v16);
        v9 = *((_QWORD *)v8 + 13);
      }
      if ( !v9 || v6 == -1073741637 )
      {
        v10 = 0LL;
        if ( *((_DWORD *)v8 + 22) )
        {
          v11 = *((_QWORD *)v8 + 9);
          if ( *(_BYTE *)(v11 + 16) )
            v10 = v11 - 24;
        }
        if ( v10 )
        {
          v12 = *(_BYTE *)(v10 + 41);
          if ( v12 )
          {
            v16[0] = *(_OWORD *)(v10 + 192);
            v16[1] = *(_OWORD *)(v10 + 208);
            v16[2] = *(_OWORD *)(v10 + 224);
            v16[3] = *(_OWORD *)(v10 + 240);
          }
          v6 = 0;
          if ( !v12 )
            v6 = -1073741823;
        }
      }
      if ( v6 < 0 )
        memset(v16, 0, sizeof(v16));
      v13 = v8 + 8;
      if ( KeGetCurrentThread() == *((struct _KTHREAD **)v8 + 2) )
      {
        *((_QWORD *)v8 + 2) = 0LL;
        ExReleasePushLockExclusiveEx(v13, 0LL);
      }
      else
      {
        ExReleasePushLockSharedEx(v13, 0LL);
      }
      KeLeaveCriticalRegion();
      ObfDereferenceObject(v8 - 40);
    }
    ObfDereferenceObject(v4);
  }
  if ( a2 )
  {
    if ( a2 + 4 < a2 || (unsigned __int64)(a2 + 4) > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    *a2 = v16[0];
    a2[1] = v16[1];
    a2[2] = v16[2];
    a2[3] = v16[3];
  }
  else
  {
    v6 = -1073741811;
  }
  KeLeaveCriticalRegion();
  return (unsigned int)v6;
}
