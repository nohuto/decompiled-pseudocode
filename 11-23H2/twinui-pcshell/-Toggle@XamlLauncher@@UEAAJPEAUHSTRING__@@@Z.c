/*
 * XREFs of ?Toggle@XamlLauncher@@UEAAJPEAUHSTRING__@@@Z @ 0x1805025D0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$As@UIImmersiveLauncherCortana@@@?$ComPtr@UIXamlLauncherState@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIImmersiveLauncherCortana@@@WRL@Microsoft@@@Details@12@@Z @ 0x180059C88 (--$As@UIImmersiveLauncherCortana@@@-$ComPtr@UIXamlLauncherState@@@WRL@Microsoft@@QEBAJV-$ComPtrR.c)
 *     _anonymous_namespace_::IsUndockingDisabled @ 0x1800A8784 (_anonymous_namespace_--IsUndockingDisabled.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?SearchToggleSkipped_UndockingDisabled@StartWindowTelemetry@@SAXXZ @ 0x180501C68 (-SearchToggleSkipped_UndockingDisabled@StartWindowTelemetry@@SAXXZ.c)
 *     ?ShouldLaunchCortanaOnPPI@XamlLauncher@@AEAA_NPEAUHSTRING__@@@Z @ 0x180501E30 (-ShouldLaunchCortanaOnPPI@XamlLauncher@@AEAA_NPEAUHSTRING__@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall XamlLauncher::Toggle(XamlLauncher *this, HSTRING a2)
{
  __int64 v5; // rcx
  int v6; // eax
  int v7; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF

  if ( XamlLauncher::ShouldLaunchCortanaOnPPI(this, a2) )
  {
    if ( !*((_QWORD *)this + 41) )
      return 2147943568LL;
    if ( !anonymous_namespace_::IsUndockingDisabled() )
    {
      v9 = 0LL;
      v6 = Microsoft::WRL::ComPtr<IXamlLauncherState>::As<IImmersiveLauncherCortana>(
             (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 41,
             &v9);
      v7 = v6;
      if ( v6 >= 0 )
      {
        v7 = (*(__int64 (__fastcall **)(__int64, HSTRING))(*(_QWORD *)v9 + 48LL))(v9, a2);
        if ( v7 >= 0 )
        {
          Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v9);
          return 0LL;
        }
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x4C1,
          (int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
          (const char *)(unsigned int)v6);
      }
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v9);
      return (unsigned int)v7;
    }
    StartWindowTelemetry::SearchToggleSkipped_UndockingDisabled(v5);
  }
  else
  {
    ShellExecuteW(0LL, L"open", L"https://www.bing.com/", 0LL, 0LL, 1);
  }
  return 0LL;
}
