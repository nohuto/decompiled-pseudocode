/*
 * XREFs of ?Show@XamlLauncher@@UEAAJPEAUHSTRING__@@@Z @ 0x180501EA0
 * Callers:
 *     XamlLauncher::SearchShowRequested$_ResumeCoro$1 @ 0x180200F70 (XamlLauncher--SearchShowRequested$_ResumeCoro$1.c)
 * Callees:
 *     ??$As@UIImmersiveLauncherCortana@@@?$ComPtr@UIXamlLauncherState@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIImmersiveLauncherCortana@@@WRL@Microsoft@@@Details@12@@Z @ 0x180059C88 (--$As@UIImmersiveLauncherCortana@@@-$ComPtr@UIXamlLauncherState@@@WRL@Microsoft@@QEBAJV-$ComPtrR.c)
 *     _anonymous_namespace_::IsUndockingDisabled @ 0x1800A8784 (_anonymous_namespace_--IsUndockingDisabled.c)
 *     ??1?$ComPtr@UICreatingProcess@@@WRL@Microsoft@@QEAA@XZ @ 0x1800B3438 (--1-$ComPtr@UICreatingProcess@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsStartMenuEnabled@XamlLauncher@@AEBA_NPEAW4Mode@LauncherTelemetry@@@Z @ 0x18019845C (-IsStartMenuEnabled@XamlLauncher@@AEBA_NPEAW4Mode@LauncherTelemetry@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?SearchInvokeSkipped_UndockingDisabled@StartWindowTelemetry@@SAXXZ @ 0x180501BD0 (-SearchInvokeSkipped_UndockingDisabled@StartWindowTelemetry@@SAXXZ.c)
 *     ?ShouldLaunchCortanaOnPPI@XamlLauncher@@AEAA_NPEAUHSTRING__@@@Z @ 0x180501E30 (-ShouldLaunchCortanaOnPPI@XamlLauncher@@AEAA_NPEAUHSTRING__@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall XamlLauncher::Show(XamlLauncher *this, HSTRING a2)
{
  XamlLauncher *v4; // rcx
  __int64 v6; // rcx
  int v7; // eax
  int v8; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF

  if ( !XamlLauncher::IsStartMenuEnabled((XamlLauncher *)((char *)this - 64), 0LL) )
    return 0LL;
  if ( XamlLauncher::ShouldLaunchCortanaOnPPI(v4, a2) )
  {
    if ( !*((_QWORD *)this + 41) )
      return 2147943568LL;
    if ( !anonymous_namespace_::IsUndockingDisabled() )
    {
      v10 = 0LL;
      v7 = Microsoft::WRL::ComPtr<IXamlLauncherState>::As<IImmersiveLauncherCortana>(
             (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 41,
             &v10);
      v8 = v7;
      if ( v7 >= 0 )
      {
        v8 = (*(__int64 (__fastcall **)(__int64, HSTRING))(*(_QWORD *)v10 + 32LL))(v10, a2);
        if ( v8 >= 0 )
        {
          Microsoft::WRL::ComPtr<ICreatingProcess>::~ComPtr<ICreatingProcess>(&v10);
          return 0LL;
        }
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x49D,
          (int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
          (const char *)(unsigned int)v7);
      }
      Microsoft::WRL::ComPtr<ICreatingProcess>::~ComPtr<ICreatingProcess>(&v10);
      return (unsigned int)v8;
    }
    StartWindowTelemetry::SearchInvokeSkipped_UndockingDisabled(v6);
  }
  else
  {
    ShellExecuteW(0LL, L"open", L"https://www.bing.com/", 0LL, 0LL, 1);
  }
  return 0LL;
}
