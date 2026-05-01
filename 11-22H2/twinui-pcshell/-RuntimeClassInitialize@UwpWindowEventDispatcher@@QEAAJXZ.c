/*
 * XREFs of ?RuntimeClassInitialize@UwpWindowEventDispatcher@@QEAAJXZ @ 0x1800E62B8
 * Callers:
 *     ??$MakeAndInitialize@VUwpWindowEventDispatcher@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x18018FE8C (--$MakeAndInitialize@VUwpWindowEventDispatcher@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAU.c)
 * Callees:
 *     ?SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z @ 0x1800A8AF0 (-SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z.c)
 *     ?IsBamoEnabled@@YA_NXZ @ 0x1800D2E84 (-IsBamoEnabled@@YA_NXZ.c)
 *     ?RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z @ 0x18010BDB8 (-RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@VUwpWindowManagerBridge@@UIUwpWindowManagerBridge@@PEAVUwpWindowEventDispatcher@@@Details@WRL@Microsoft@@YAJPEAPEAUIUwpWindowManagerBridge@@$$QEAPEAVUwpWindowEventDispatcher@@@Z @ 0x180196184 (--$MakeAndInitialize@VUwpWindowManagerBridge@@UIUwpWindowManagerBridge@@PEAVUwpWindowEventDispat.c)
 *     _Init_thread_footer @ 0x1801C9108 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1801C9170 (_Init_thread_header.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z @ 0x18073D440 (-HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall UwpWindowEventDispatcher::RuntimeClassInitialize(void **this)
{
  unsigned int v2; // ebx
  CCriticalFailureHandler *v3; // rcx
  void *v4; // rcx
  CCriticalFailureHandler *v5; // rcx
  int v6; // ebx
  int v7; // eax
  LSTATUS DWORD; // eax
  unsigned __int64 *v10; // [rsp+20h] [rbp-18h]
  unsigned __int64 *v11; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  UwpWindowEventDispatcher *v13; // [rsp+40h] [rbp+8h] BYREF
  unsigned int v14; // [rsp+48h] [rbp+10h] BYREF

  if ( dword_18098F948 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 16LL) )
  {
    Init_thread_header(&dword_18098F948);
    if ( dword_18098F948 == -1 )
    {
      xmmword_18098D620 = SID_WindowEventDispatcher;
      xmmword_18098D630 = 0LL;
      xmmword_18098D640 = (__int128)SID_ViewEventDispatcher;
      xmmword_18098D650 = 0LL;
      xmmword_18098D660 = xmmword_180834A78;
      xmmword_18098D670 = 0LL;
      xmmword_18098D680 = (__int128)SID_ForegroundViewManager;
      xmmword_18098D690 = 0LL;
      Init_thread_footer(&dword_18098F948);
    }
  }
  v2 = CImmersiveShellComponent::RegisterServiceInformation(
         (CImmersiveShellComponent *)(this + 16),
         (const struct CImmersiveShellComponent::ISC_SERVICE *)&xmmword_18098D620,
         4u);
  LODWORD(v13) = v2;
  v3 = (CCriticalFailureHandler *)v2;
  if ( !CRVPrivate::cfhImmersiveShellStartup )
  {
    DWORD = SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", &v14);
    v3 = (CCriticalFailureHandler *)v2;
    if ( DWORD < 0 )
    {
LABEL_15:
      CRVPrivate::cfhImmersiveShellStartup = 1;
      goto LABEL_5;
    }
    switch ( v14 )
    {
      case 2u:
        v2 = -2023406815;
        break;
      case 3u:
        v2 = -2023406814;
        break;
      case 4u:
        v2 = -2147418094;
        break;
      case 5u:
        v2 = -2147022986;
        break;
      default:
        goto LABEL_15;
    }
    v3 = (CCriticalFailureHandler *)v2;
    LODWORD(v13) = v2;
    goto LABEL_15;
  }
LABEL_5:
  if ( (int)v3 < 0 && (_DWORD)v3 != -2147024882 && v2 != -2144862209 )
  {
    CCriticalFailureHandler::HandleFailure(
      v3,
      (int *)&v13,
      L"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
      0x38u,
      v10,
      v11);
    v2 = (unsigned int)v13;
  }
  if ( (v2 & 0x80000000) != 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x38,
      (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
      (const char *)v2,
      (int)v10);
  v13 = (UwpWindowEventDispatcher *)this;
  v4 = this[40];
  this[40] = 0LL;
  if ( v4 )
    (*(void (__fastcall **)(void *))(*(_QWORD *)v4 + 16LL))(v4);
  v6 = Microsoft::WRL::Details::MakeAndInitialize<UwpWindowManagerBridge,IUwpWindowManagerBridge,UwpWindowEventDispatcher *>(this + 40);
  LODWORD(v13) = v6;
  if ( !CRVPrivate::cfhImmersiveShellStartup )
  {
    if ( SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", &v14) < 0 )
    {
LABEL_17:
      CRVPrivate::cfhImmersiveShellStartup = 1;
      goto LABEL_10;
    }
    switch ( v14 )
    {
      case 2u:
        v6 = -2023406815;
        break;
      case 3u:
        v6 = -2023406814;
        break;
      case 4u:
        v6 = -2147418094;
        break;
      case 5u:
        v6 = -2147022986;
        break;
      default:
        goto LABEL_17;
    }
    LODWORD(v13) = v6;
    goto LABEL_17;
  }
LABEL_10:
  if ( v6 < 0 )
  {
    if ( v6 != -2147024882 && v6 != -2144862209 )
    {
      CCriticalFailureHandler::HandleFailure(
        v5,
        (int *)&v13,
        L"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
        0x3Cu,
        v10,
        v11);
      v6 = (int)v13;
    }
    if ( v6 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x3C,
        (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
        (const char *)(unsigned int)v6,
        (int)v10);
  }
  if ( IsBamoEnabled() )
  {
    v7 = (*(__int64 (__fastcall **)(void *))(*(_QWORD *)this[40] + 80LL))(this[40]);
    if ( v7 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x44,
        (unsigned int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
        (const char *)(unsigned int)v7,
        (int)v10);
  }
  return 0LL;
}
