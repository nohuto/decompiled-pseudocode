/*
 * XREFs of ?RuntimeClassInitialize@UwpWindowEventDispatcher@@QEAAJXZ @ 0x1803F10B8
 * Callers:
 *     ??$MakeAndInitialize@VUwpWindowEventDispatcher@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIUnknown@@@Z @ 0x1803E9080 (--$MakeAndInitialize@VUwpWindowEventDispatcher@@UIUnknown@@$$V@Details@WRL@Microsoft@@YAJPEAPEAU.c)
 * Callees:
 *     ?RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z @ 0x1800B0B20 (-RegisterServiceInformation@CImmersiveShellComponent@@QEAAJPEBUISC_SERVICE@1@I@Z.c)
 *     ?SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z @ 0x1800E6FEC (-SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _Init_thread_footer @ 0x180189828 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x180189890 (_Init_thread_header.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$MakeAndInitialize@VUwpWindowManagerBridge@@UIUwpWindowManagerBridge@@PEAVUwpWindowEventDispatcher@@@Details@WRL@Microsoft@@YAJPEAPEAUIUwpWindowManagerBridge@@$$QEAPEAVUwpWindowEventDispatcher@@@Z @ 0x1803E916C (--$MakeAndInitialize@VUwpWindowManagerBridge@@UIUwpWindowManagerBridge@@PEAVUwpWindowEventDispat.c)
 *     ?HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z @ 0x1805E8BC0 (-HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall UwpWindowEventDispatcher::RuntimeClassInitialize(UwpWindowEventDispatcher *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  CCriticalFailureHandler *v4; // rcx
  LSTATUS DWORD; // eax
  __int64 v6; // rcx
  CCriticalFailureHandler *v7; // rcx
  int v8; // ebx
  const char *v9; // r9
  __int64 result; // rax
  unsigned __int64 *v11; // [rsp+20h] [rbp-18h]
  unsigned __int64 *v12; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  UwpWindowEventDispatcher *v14; // [rsp+40h] [rbp+8h] BYREF
  unsigned int v15; // [rsp+48h] [rbp+10h] BYREF

  v2 = *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index) + 16LL);
  if ( dword_1807B7520 > v2 )
  {
    Init_thread_header(&dword_1807B7520);
    if ( dword_1807B7520 == -1 )
    {
      xmmword_1807B6510 = SID_WindowEventDispatcher;
      xmmword_1807B6520 = 0LL;
      xmmword_1807B6530 = (__int128)SID_ViewEventDispatcher;
      xmmword_1807B6540 = 0LL;
      xmmword_1807B6550 = xmmword_1806E1EA8;
      xmmword_1807B6560 = 0LL;
      xmmword_1807B6570 = (__int128)SID_ForegroundViewManager;
      xmmword_1807B6580 = 0LL;
      Init_thread_footer(&dword_1807B7520);
    }
  }
  try
  {
    v3 = CImmersiveShellComponent::RegisterServiceInformation(
           (UwpWindowEventDispatcher *)((char *)this + 128),
           (const struct CImmersiveShellComponent::ISC_SERVICE *)&xmmword_1807B6510,
           4uLL);
    LODWORD(v14) = v3;
    v4 = (CCriticalFailureHandler *)v3;
    if ( CRVPrivate::cfhImmersiveShellStartup )
    {
LABEL_17:
      if ( (int)v4 < 0 && (_DWORD)v4 != -2147024882 && (_DWORD)v4 != -2144862209 )
      {
        CCriticalFailureHandler::HandleFailure(
          v4,
          (int *)&v14,
          L"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
          0x37u,
          v11,
          v12);
        v3 = (unsigned int)v14;
      }
      if ( (v3 & 0x80000000) != 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0x37,
          (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
          (const char *)v3,
          (int)v11);
      v14 = this;
      v6 = *((_QWORD *)this + 39);
      *((_QWORD *)this + 39) = 0LL;
      if ( v6 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
      v8 = Microsoft::WRL::Details::MakeAndInitialize<UwpWindowManagerBridge,IUwpWindowManagerBridge,UwpWindowEventDispatcher *>(
             (_QWORD *)this + 39,
             &v14);
      LODWORD(v14) = v8;
      if ( CRVPrivate::cfhImmersiveShellStartup )
        goto LABEL_37;
      if ( SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", &v15) >= 0 )
      {
        switch ( v15 )
        {
          case 2u:
            v8 = -2023406815;
            goto LABEL_35;
          case 3u:
            v8 = -2023406814;
            goto LABEL_35;
          case 4u:
            v8 = -2147418094;
            goto LABEL_35;
          case 5u:
            v8 = -2147022986;
LABEL_35:
            LODWORD(v14) = v8;
            break;
        }
      }
      CRVPrivate::cfhImmersiveShellStartup = 1;
LABEL_37:
      if ( v8 < 0 )
      {
        if ( v8 != -2147024882 && v8 != -2144862209 )
        {
          CCriticalFailureHandler::HandleFailure(
            v7,
            (int *)&v14,
            L"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
            0x3Bu,
            v11,
            v12);
          v8 = (int)v14;
        }
        if ( v8 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            (void *)0x3B,
            (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
            (const char *)(unsigned int)v8,
            (int)v11);
      }
      return 0LL;
    }
    DWORD = SHRegGetDWORD(HKEY_LOCAL_MACHINE, lpSubKey, L"FakeFailure", &v15);
    v4 = (CCriticalFailureHandler *)v3;
    if ( DWORD >= 0 )
    {
      switch ( v15 )
      {
        case 2u:
          v3 = -2023406815;
          goto LABEL_15;
        case 3u:
          v3 = -2023406814;
          goto LABEL_15;
        case 4u:
          v3 = -2147418094;
          goto LABEL_15;
        case 5u:
          v3 = -2147022986;
LABEL_15:
          v4 = (CCriticalFailureHandler *)v3;
          LODWORD(v14) = v3;
          break;
      }
    }
    CRVPrivate::cfhImmersiveShellStartup = 1;
    goto LABEL_17;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x3F,
                           (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindoweventdispatcher.cpp",
                           v9);
  }
  return result;
}
