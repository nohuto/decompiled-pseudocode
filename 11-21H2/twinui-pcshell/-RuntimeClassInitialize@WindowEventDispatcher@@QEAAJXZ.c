/*
 * XREFs of ?RuntimeClassInitialize@WindowEventDispatcher@@QEAAJXZ @ 0x180155168
 * Callers:
 *     ??$MakeAndInitialize@VWindowEventDispatcher@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x1801550BC (--$MakeAndInitialize@VWindowEventDispatcher@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUn.c)
 * Callees:
 *     ?RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z @ 0x1800B0B20 (-RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z.c)
 *     ?SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z @ 0x1800E6FEC (-SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$MakeAndInitialize@VWindowManagerBridge@@UIWindowManagerBridge@@PEAVWindowEventDispatcher@@@Details@WRL@Microsoft@@YAJPEAPEAUIWindowManagerBridge@@$$QEAPEAVWindowEventDispatcher@@@Z @ 0x180155324 (--$MakeAndInitialize@VWindowManagerBridge@@UIWindowManagerBridge@@PEAVWindowEventDispatcher@@@De.c)
 *     _Init_thread_footer @ 0x180189828 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x180189890 (_Init_thread_header.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z @ 0x1805E8BC0 (-HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall WindowEventDispatcher::RuntimeClassInitialize(void **this)
{
  unsigned int v2; // ebx
  CCriticalFailureHandler *v3; // rcx
  void *v4; // rcx
  CCriticalFailureHandler *v5; // rcx
  int v6; // ebx
  LSTATUS DWORD; // eax
  unsigned __int64 *v9; // [rsp+20h] [rbp-18h]
  unsigned __int64 *v10; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  WindowEventDispatcher *v12; // [rsp+40h] [rbp+8h] BYREF
  unsigned int v13; // [rsp+48h] [rbp+10h] BYREF

  if ( dword_1807B5218 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 16LL) )
  {
    Init_thread_header(&dword_1807B5218);
    if ( dword_1807B5218 == -1 )
    {
      xmmword_1807B3990 = SID_WindowEventDispatcher;
      xmmword_1807B39A0 = 0LL;
      xmmword_1807B39B0 = (__int128)SID_ViewEventDispatcher;
      xmmword_1807B39C0 = 0LL;
      xmmword_1807B39D0 = xmmword_180699F48;
      xmmword_1807B39E0 = 0LL;
      xmmword_1807B39F0 = (__int128)SID_ForegroundViewManager;
      xmmword_1807B3A00 = 0LL;
      Init_thread_footer(&dword_1807B5218);
    }
  }
  v2 = CImmersiveShellComponent::RegisterServiceInformation(
         (CImmersiveShellComponent *)(this + 16),
         (const struct CImmersiveShellComponent::ISC_SERVICE *)&xmmword_1807B3990,
         4uLL);
  LODWORD(v12) = v2;
  v3 = (CCriticalFailureHandler *)v2;
  if ( !CRVPrivate::cfhImmersiveShellStartup )
  {
    DWORD = SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", &v13);
    v3 = (CCriticalFailureHandler *)v2;
    if ( DWORD < 0 )
    {
LABEL_14:
      CRVPrivate::cfhImmersiveShellStartup = 1;
      goto LABEL_5;
    }
    switch ( v13 )
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
        goto LABEL_14;
    }
    v3 = (CCriticalFailureHandler *)v2;
    LODWORD(v12) = v2;
    goto LABEL_14;
  }
LABEL_5:
  if ( (int)v3 < 0 && (_DWORD)v3 != -2147024882 && (_DWORD)v3 != -2144862209 )
  {
    CCriticalFailureHandler::HandleFailure(
      v3,
      (int *)&v12,
      L"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      0x42u,
      v9,
      v10);
    v2 = (unsigned int)v12;
  }
  if ( (v2 & 0x80000000) != 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x43,
      (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      (const char *)v2,
      (int)v9);
  v12 = (WindowEventDispatcher *)this;
  v4 = this[39];
  this[39] = 0LL;
  if ( v4 )
    (*(void (__fastcall **)(void *))(*(_QWORD *)v4 + 16LL))(v4);
  v6 = Microsoft::WRL::Details::MakeAndInitialize<WindowManagerBridge,IWindowManagerBridge,WindowEventDispatcher *>(this + 39);
  LODWORD(v12) = v6;
  if ( !CRVPrivate::cfhImmersiveShellStartup )
  {
    if ( SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", &v13) < 0 )
    {
LABEL_16:
      CRVPrivate::cfhImmersiveShellStartup = 1;
      goto LABEL_10;
    }
    switch ( v13 )
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
        goto LABEL_16;
    }
    LODWORD(v12) = v6;
    goto LABEL_16;
  }
LABEL_10:
  if ( v6 < 0 && v6 != -2147024882 && v6 != -2144862209 )
  {
    CCriticalFailureHandler::HandleFailure(
      v5,
      (int *)&v12,
      L"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      0x48u,
      v9,
      v10);
    v6 = (int)v12;
  }
  if ( v6 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x49,
      (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\windoweventdispatcher.cpp",
      (const char *)(unsigned int)v6,
      (int)v9);
  return 0LL;
}
