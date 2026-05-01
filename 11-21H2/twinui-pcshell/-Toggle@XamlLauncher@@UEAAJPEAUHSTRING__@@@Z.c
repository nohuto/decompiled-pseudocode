/*
 * XREFs of ?Toggle@XamlLauncher@@UEAAJPEAUHSTRING__@@@Z @ 0x18044C340
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180033E60 (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$As@UIImmersiveLauncherCortana@@@?$ComPtr@UIXamlLauncherState@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIImmersiveLauncherCortana@@@WRL@Microsoft@@@Details@12@@Z @ 0x180114E28 (--$As@UIImmersiveLauncherCortana@@@-$ComPtr@UIXamlLauncherState@@@WRL@Microsoft@@QEBAJV-$ComPtrR.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?ShouldLaunchCortanaOnPPI@XamlLauncher@@AEAA_NPEAUHSTRING__@@@Z @ 0x18044BD10 (-ShouldLaunchCortanaOnPPI@XamlLauncher@@AEAA_NPEAUHSTRING__@@@Z.c)
 */

__int64 __fastcall XamlLauncher::Toggle(XamlLauncher *this, HSTRING a2)
{
  int v5; // eax
  int v6; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF

  if ( XamlLauncher::ShouldLaunchCortanaOnPPI(this, a2) )
  {
    if ( !*((_QWORD *)this + 35) )
      return 2147943568LL;
    v8 = 0LL;
    v5 = Microsoft::WRL::ComPtr<IXamlLauncherState>::As<IImmersiveLauncherCortana>(
           (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 35,
           &v8);
    v6 = v5;
    if ( v5 >= 0 )
    {
      v6 = (*(__int64 (__fastcall **)(__int64, HSTRING))(*(_QWORD *)v8 + 48LL))(v8, a2);
      if ( v6 >= 0 )
      {
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v8);
        return 0LL;
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x421,
        (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncher.cpp",
        (const char *)(unsigned int)v5);
    }
    Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(&v8);
    return (unsigned int)v6;
  }
  ShellExecuteW(0LL, L"open", L"https://www.bing.com/", 0LL, 0LL, 1);
  return 0LL;
}
