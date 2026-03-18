/*
 * XREFs of zzzEndDeferWinEventNotify @ 0x1C0025058
 * Callers:
 *     xxxCreateCaret @ 0x1C000FD64 (xxxCreateCaret.c)
 *     xxxCapture @ 0x1C00117FC (xxxCapture.c)
 *     NtUserSetImeOwnerWindow @ 0x1C0024EF0 (NtUserSetImeOwnerWindow.c)
 *     EditionEndDeferWinEventNotify @ 0x1C0025040 (EditionEndDeferWinEventNotify.c)
 *     xxxDwmStopRedirection @ 0x1C0057060 (xxxDwmStopRedirection.c)
 *     ?zzzShowCursor@@YAH_N@Z @ 0x1C005AF60 (-zzzShowCursor@@YAH_N@Z.c)
 *     zzzEnableDwmPointerSupport @ 0x1C005B13C (zzzEnableDwmPointerSupport.c)
 *     zzzReattachThreads @ 0x1C005C0B8 (zzzReattachThreads.c)
 *     ?zzzRecalc2@@YAXPEAUtagQ@@@Z @ 0x1C005C4E0 (-zzzRecalc2@@YAXPEAUtagQ@@@Z.c)
 *     zzzLockWindowUpdate2 @ 0x1C005DC44 (zzzLockWindowUpdate2.c)
 *     xxxCreateDesktopEx @ 0x1C00683E4 (xxxCreateDesktopEx.c)
 *     xxxCreateWindowStation @ 0x1C006B42C (xxxCreateWindowStation.c)
 *     zzzCancelJournalling @ 0x1C006EED0 (zzzCancelJournalling.c)
 *     zzzUpdateWindowsAfterModeChange @ 0x1C008E138 (zzzUpdateWindowsAfterModeChange.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x1C00CF14C (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     xxxDestroyWindow @ 0x1C00E8400 (xxxDestroyWindow.c)
 *     ?zzzSetWindowCompositionCloak@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@K@Z @ 0x1C00F1010 (-zzzSetWindowCompositionCloak@@YAJPEAUtagWND@@PEBUtagWINDOWCOMPOSITIONATTRIBDATA_UNION@@K@Z.c)
 *     ?xxxFW_DestroyIMEWindowIfRequired@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@@Z @ 0x1C013C9A0 (-xxxFW_DestroyIMEWindowIfRequired@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@@Z.c)
 *     ShellWindowPos::_anonymous_namespace_::xxxSnapArrangeWindow @ 0x1C021F0A8 (ShellWindowPos--_anonymous_namespace_--xxxSnapArrangeWindow.c)
 *     ?zzzApplyShadow@@YAHPEAUtagWND@@0@Z @ 0x1C0221478 (-zzzApplyShadow@@YAHPEAUtagWND@@0@Z.c)
 *     xxxAddShadow @ 0x1C0221654 (xxxAddShadow.c)
 *     xxxHardErrorControl @ 0x1C0223D54 (xxxHardErrorControl.c)
 *     xxxScrollWindowEx @ 0x1C022EE20 (xxxScrollWindowEx.c)
 * Callees:
 *     xxxFlushDeferredWindowEvents @ 0x1C0025160 (xxxFlushDeferredWindowEvents.c)
 *     W32GetThreadWin32Thread @ 0x1C011E0CC (W32GetThreadWin32Thread.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 */

// write access to const memory has been detected, the output may be wrong!
void zzzEndDeferWinEventNotify()
{
  unsigned int DLT; // eax
  char *v1; // rbx
  int v2; // edi
  tagDomLock *v3; // rcx
  tagDomLock *DomainLockRef; // [rsp+20h] [rbp-48h]
  char v5; // [rsp+28h] [rbp-40h] BYREF
  __int64 v6; // [rsp+30h] [rbp-38h]
  char v7; // [rsp+38h] [rbp-30h]
  __int64 v8; // [rsp+40h] [rbp-28h]
  char v9; // [rsp+48h] [rbp-20h]

  DLT = DLT_WINEVENT::getDLT();
  v5 = 1;
  v1 = &v5;
  DomainLockRef = (tagDomLock *)GetDomainLockRef(DLT);
  v6 = gDomainDummyLock;
  v8 = 0LL;
  v2 = 0;
  v9 = 0;
  v7 = 0;
  do
  {
    v3 = (tagDomLock *)*((_QWORD *)v1 - 1);
    if ( v3 )
    {
      if ( *v1 )
        tagDomLock::LockExclusive(v3);
      else
        tagDomLock::LockShared(v3);
    }
    ++v2;
    v1 += 16;
  }
  while ( !v2 );
  v9 = 1;
  --gdwDeferWinEvent;
  if ( DomainLockRef )
  {
    if ( v5 )
      tagDomLock::UnLockExclusive(DomainLockRef);
    else
      tagDomLock::UnLockShared(DomainLockRef);
  }
}
