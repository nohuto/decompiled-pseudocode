/*
 * XREFs of _UnhookWinEvent @ 0x1C00E5A2C
 * Callers:
 *     NtUserUnhookWinEvent @ 0x1C00E5900 (NtUserUnhookWinEvent.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     ?IsLockedExclusive@tagDomLock@@QEBA_NXZ @ 0x1C0072B84 (-IsLockedExclusive@tagDomLock@@QEBA_NXZ.c)
 *     ??0?$ObjectLockBase@$$V@?$DomainExclusiveBase@$$V@?$DomainSharedBase@VDLT_HANDLEMANAGER@@@@IEAA@XZ @ 0x1C0074278 (--0-$ObjectLockBase@$$V@-$DomainExclusiveBase@$$V@-$DomainSharedBase@VDLT_HANDLEMANAGER@@@@IEAA@.c)
 *     DestroyEventHook @ 0x1C00E5FC0 (DestroyEventHook.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 */

__int64 __fastcall UnhookWinEvent(void *a1)
{
  int v2; // edi
  char *v3; // rbx
  tagDomLock *v4; // rcx
  __int64 v5; // rdx
  tagDomLock *v7; // [rsp+20h] [rbp-48h] BYREF
  char v8; // [rsp+28h] [rbp-40h] BYREF
  char v9; // [rsp+48h] [rbp-20h]

  if ( !tagDomLock::IsLockedExclusive((PERESOURCE *)gDomainWinEventLock) )
    __int2c();
  DomainSharedBase<DLT_HANDLEMANAGER>::DomainExclusiveBase<>::ObjectLockBase<>::ObjectLockBase<>((__int64)&v7);
  if ( !v9 )
  {
    v2 = 0;
    v3 = &v8;
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
    v9 = 1;
  }
  if ( (*(_BYTE *)(_HMPheFromObject(a1) + 25) & 1) != 0
    || *((_QWORD *)a1 + 2) != W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) )
  {
    UserSetLastError(6LL, v5);
    if ( v9 && v7 )
    {
      if ( v8 )
        tagDomLock::UnLockExclusive(v7);
      else
        tagDomLock::UnLockShared(v7);
    }
    return 0LL;
  }
  else
  {
    if ( v9 && v7 )
    {
      if ( v8 )
        tagDomLock::UnLockExclusive(v7);
      else
        tagDomLock::UnLockShared(v7);
    }
    DestroyEventHook(a1);
    return 1LL;
  }
}
