/*
 * XREFs of GreCancelSynchronizedWindowResize @ 0x1C026737C
 * Callers:
 *     ?ResizeTimerFunc@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01EA610 (-ResizeTimerFunc@@YAXPEAUtagWND@@I_K_J@Z.c)
 * Callees:
 *     ??0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z @ 0x1C00C89F8 (--0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z.c)
 *     IsDwmActive @ 0x1C00D4B60 (IsDwmActive.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00FA95C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013E000 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ?CheckAndProcessWindowResizeComplete@@YAXPEAVDWMSPRITE@@HPEAH@Z @ 0x1C0265774 (-CheckAndProcessWindowResizeComplete@@YAXPEAVDWMSPRITE@@HPEAH@Z.c)
 */

void __fastcall GreCancelSynchronizedWindowResize(Gre::Base *a1)
{
  struct Gre::Base::SESSION_GLOBALS *v2; // rdi
  Gre::Base *v3; // rcx
  Gre::Base *v4; // rcx
  struct DWMSPRITE *v5; // rbx
  _BYTE v6[32]; // [rsp+20h] [rbp-38h] BYREF
  struct DWMSPRITE *v7; // [rsp+40h] [rbp-18h]
  __int64 v8; // [rsp+68h] [rbp+10h] BYREF

  v2 = Gre::Base::Globals(a1);
  v8 = *((_QWORD *)v2 + 15);
  GreAcquireSemaphore(v8);
  if ( IsDwmActive(v3) )
  {
    GreAcquireSemaphore(*((_QWORD *)v2 + 9));
    EtwTraceGreLockAcquireSemaphoreExclusive(L"GreBaseGlobals.hsemDwmState", *((_QWORD *)v2 + 9), 7LL);
    if ( IsDwmActive(v4) )
    {
      DWMSPRITEREF::DWMSPRITEREF((DWMSPRITEREF *)v6, (HWND)a1);
      v5 = v7;
      if ( v7 )
      {
        if ( *((int *)v7 + 29) >= 1 )
        {
          CheckAndProcessWindowResizeComplete(v7, 1, 0LL);
          *((_DWORD *)v5 + 32) = 1;
          v5 = v7;
        }
        if ( v5 )
          _InterlockedDecrement((volatile signed __int32 *)v5 + 3);
      }
      v7 = 0LL;
      UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v6);
    }
    EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemDwmState");
    GreReleaseSemaphoreInternal(*((_QWORD *)v2 + 9));
  }
  SEMOBJ::vUnlock((SEMOBJ *)&v8);
}
