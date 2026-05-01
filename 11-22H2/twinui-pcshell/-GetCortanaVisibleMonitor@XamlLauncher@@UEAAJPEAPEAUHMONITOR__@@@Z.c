/*
 * XREFs of ?GetCortanaVisibleMonitor@XamlLauncher@@UEAAJPEAPEAUHMONITOR__@@@Z @ 0x180059B70
 * Callers:
 *     ?OnSearchAppVisibilityChanged@XamlLauncher@@UEAAX_N@Z @ 0x180057B70 (-OnSearchAppVisibilityChanged@XamlLauncher@@UEAAX_N@Z.c)
 *     ?PearlRectMayHaveChanged@XamlLauncher@@UEAAJPEAUHMONITOR__@@@Z @ 0x1800DE470 (-PearlRectMayHaveChanged@XamlLauncher@@UEAAJPEAUHMONITOR__@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$As@UIImmersiveLauncherCortana@@@?$ComPtr@UIXamlLauncherState@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIImmersiveLauncherCortana@@@WRL@Microsoft@@@Details@12@@Z @ 0x180059C88 (--$As@UIImmersiveLauncherCortana@@@-$ComPtr@UIXamlLauncherState@@@WRL@Microsoft@@QEBAJV-$ComPtrR.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall XamlLauncher::GetCortanaVisibleMonitor(XamlLauncher *this, HMONITOR *a2)
{
  _QWORD *v3; // rcx
  int v4; // eax
  unsigned int v5; // ebx
  __int64 v7; // rdx
  int v8; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  *a2 = 0LL;
  v3 = (_QWORD *)((char *)this + 328);
  if ( *v3 )
  {
    v10 = 0LL;
    v4 = Microsoft::WRL::ComPtr<IXamlLauncherState>::As<IImmersiveLauncherCortana>(v3, &v10);
    v5 = v4;
    if ( v4 < 0 )
    {
      v7 = 1239LL;
    }
    else
    {
      v4 = (*(__int64 (__fastcall **)(__int64, HMONITOR *))(*(_QWORD *)v10 + 64LL))(v10, a2);
      v5 = v4;
      if ( v4 >= 0 )
      {
LABEL_4:
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v10);
        return v5;
      }
      v7 = 1240LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (unsigned int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
      (const char *)(unsigned int)v4,
      v8);
    goto LABEL_4;
  }
  return 2147943568LL;
}
