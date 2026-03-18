/*
 * XREFs of ?DelayHookFree@@YAXPEAUtagHOOK@@@Z @ 0x1C01E0C64
 * Callers:
 *     FreeHook @ 0x1C0070000 (FreeHook.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     IS_USERCRIT_OWNED_SHAREDONLY @ 0x1C006D934 (IS_USERCRIT_OWNED_SHAREDONLY.c)
 *     ??0?$ObjectLockBase@$$V@?$DomainExclusiveBase@VDLT_HANDLEMANAGER@@@?$DomainSharedBase@$$V@@IEAA@XZ @ 0x1C0070328 (--0-$ObjectLockBase@$$V@-$DomainExclusiveBase@VDLT_HANDLEMANAGER@@@-$DomainSharedBase@$$V@@IEAA@.c)
 *     ?IsLockedShared@tagDomLock@@QEBA_NXZ @ 0x1C0072BA8 (-IsLockedShared@tagDomLock@@QEBA_NXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0147E84 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 */

void __fastcall DelayHookFree(struct tagHOOK *a1)
{
  int v2; // esi
  char *v3; // rdi
  tagDomLock *v4; // rcx
  int v5; // eax
  __int64 v6; // rax
  __int64 ThreadWin32Thread; // rax
  __int64 v8; // rcx
  tagDomLock *v9; // [rsp+20h] [rbp-48h] BYREF
  char v10; // [rsp+28h] [rbp-40h] BYREF
  char v11; // [rsp+48h] [rbp-20h]

  if ( !tagDomLock::IsLockedShared((PERESOURCE *)gDomainHookLock) )
    __int2c();
  DomainSharedBase<>::DomainExclusiveBase<DLT_HANDLEMANAGER>::ObjectLockBase<>::ObjectLockBase<>((__int64)&v9);
  if ( !v11 )
  {
    v2 = 0;
    v3 = &v10;
    do
    {
      v4 = (tagDomLock *)*((_QWORD *)v3 - 1);
      if ( v4 )
      {
        if ( *v3 )
          tagDomLock::LockExclusive(v4);
        else
          tagDomLock::LockShared(v4);
      }
      ++v2;
      v3 += 16;
    }
    while ( !v2 );
    v11 = 1;
  }
  if ( !gbInDestroyHandleTableObjects && !(unsigned int)IS_USERCRIT_OWNED_SHAREDONLY() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  if ( !W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  v5 = *((_DWORD *)a1 + 16);
  if ( (v5 & 0x1000) == 0 )
  {
    *((_DWORD *)a1 + 16) = v5 | 0x1000;
    _InterlockedIncrement((volatile signed __int32 *)a1 + 2);
    v6 = _HMPheFromObjectWorker(a1);
    *(_BYTE *)(v6 + 25) &= ~2u;
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    v8 = *(_QWORD *)(ThreadWin32Thread + 1040);
    if ( v8 )
      *((_QWORD *)a1 + 12) = v8;
    *(_QWORD *)(ThreadWin32Thread + 1040) = a1;
  }
  if ( v11 && v9 )
  {
    if ( v10 )
      tagDomLock::UnLockExclusive(v9);
    else
      tagDomLock::UnLockShared(v9);
  }
}
