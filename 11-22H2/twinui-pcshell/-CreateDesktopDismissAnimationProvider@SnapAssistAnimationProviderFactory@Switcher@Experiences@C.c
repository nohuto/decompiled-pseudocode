/*
 * XREFs of ?CreateDesktopDismissAnimationProvider@SnapAssistAnimationProviderFactory@Switcher@Experiences@ComposableShell@WindowsInternal@@SAPE$AAUIAnimationProvider@2345@PE$AAUIDismissAnimationPolicy@2345@VAnimationProviderArgs@2345@@Z @ 0x18076B004
 * Callers:
 *     ?CreateSnapAssistControl@XamlSnapAssistViewHost@@AEAAPE$AAVSnapAssist@Switcher@Experiences@ComposableShell@WindowsInternal@@AEBURect@Foundation@Windows@winrt@@PEAUIImmersiveMonitor@@W4SNAP_ASSIST_VIEW_FLAGS@@@Z @ 0x18076B524 (-CreateSnapAssistControl@XamlSnapAssistViewHost@@AEAAPE$AAVSnapAssist@Switcher@Experiences@Compo.c)
 * Callees:
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x18010E5F4 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     ?__getActivationFactoryByPCWSTR@__winRT@@YAJPEAXAEAVGuid@Platform@@PEAPEAX@Z @ 0x1801CDA58 (-__getActivationFactoryByPCWSTR@__winRT@@YAJPEAXAEAVGuid@Platform@@PEAPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x1804FDE00 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 *     ?CreateDesktopDismissAnimationProvider@__ISnapAssistAnimationProviderFactoryStatics@Switcher@Experiences@ComposableShell@WindowsInternal@@UE$AAAPE$AAUIAnimationProvider@2345@PE$AAUIDismissAnimationPolicy@2345@VAnimationProviderArgs@2345@@Z @ 0x18076B134 (-CreateDesktopDismissAnimationProvider@__ISnapAssistAnimationProviderFactoryStatics@Switcher@Exp.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall WindowsInternal::ComposableShell::Experiences::Switcher::SnapAssistAnimationProviderFactory::CreateDesktopDismissAnimationProvider(
        __int64 a1,
        __int128 *a2,
        __int64 a3,
        void **a4)
{
  int ActivationFactoryByPCWSTR; // eax
  __int64 v7; // rdi
  __int64 v8; // rbx
  __int64 v9; // rdi
  _DWORD v11[4]; // [rsp+20h] [rbp-20h] BYREF
  __int128 v12; // [rsp+30h] [rbp-10h] BYREF
  void *v13; // [rsp+60h] [rbp+20h] BYREF
  __int64 v14; // [rsp+68h] [rbp+28h]

  v11[0] = 933236998;
  v11[1] = 809016145;
  v11[2] = 1730322588;
  v11[3] = 609234229;
  v13 = 0LL;
  ActivationFactoryByPCWSTR = __winRT::__getActivationFactoryByPCWSTR(
                                (__winRT *)L"WindowsInternal.ComposableShell.Experiences.Switcher.SnapAssistAnimationProviderFactory",
                                (struct Platform::Guid *)v11,
                                &v13,
                                a4);
  if ( ActivationFactoryByPCWSTR < 0 )
  {
    __abi_WinRTraiseException(ActivationFactoryByPCWSTR);
    __debugbreak();
  }
  v12 = *a2;
  v7 = WindowsInternal::ComposableShell::Experiences::Switcher::__ISnapAssistAnimationProviderFactoryStatics::CreateDesktopDismissAnimationProvider(
         v13,
         a1,
         &v12);
  v14 = v7;
  v8 = __abi_winrt_ptr_ctor(v7);
  v14 = v8;
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  v9 = __abi_winrt_ptr_ctor(v8);
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  if ( v13 )
    (*(void (__fastcall **)(void *))(*(_QWORD *)v13 + 16LL))(v13);
  return v9;
}
