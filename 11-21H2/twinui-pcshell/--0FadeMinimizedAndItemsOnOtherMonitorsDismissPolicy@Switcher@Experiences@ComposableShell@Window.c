/*
 * XREFs of ??0FadeMinimizedAndItemsOnOtherMonitorsDismissPolicy@Switcher@Experiences@ComposableShell@WindowsInternal@@QE$AAA@PE$AAUIFilterAnimatable@1234@VRect@Foundation@Windows@@@Z @ 0x180600260
 * Callers:
 *     ?CreateSnapAssistControl@XamlSnapAssistViewHost@@AEAAPE$AAVSnapAssist@Switcher@Experiences@ComposableShell@WindowsInternal@@AEBURect@Foundation@Windows@winrt@@PEAUIImmersiveMonitor@@W4SNAP_ASSIST_VIEW_FLAGS@@@Z @ 0x1806017E0 (-CreateSnapAssistControl@XamlSnapAssistViewHost@@AEAAPE$AAVSnapAssist@Switcher@Experiences@Compo.c)
 * Callees:
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x1800F6658 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     ?__getActivationFactoryByPCWSTR@__winRT@@YAJPEAXAEAVGuid@Platform@@PEAPEAX@Z @ 0x18018E6A4 (-__getActivationFactoryByPCWSTR@__winRT@@YAJPEAXAEAVGuid@Platform@@PEAPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x18041F378 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 *     ?CreateInstance@__IFadeMinimizedAndItemsOnOtherMonitorsDismissPolicyFactory@Switcher@Experiences@ComposableShell@WindowsInternal@@UE$AAAPE$AAVFadeMinimizedAndItemsOnOtherMonitorsDismissPolicy@2345@PE$AAUIFilterAnimatable@2345@VRect@Foundation@Windows@@@Z @ 0x180601640 (-CreateInstance@__IFadeMinimizedAndItemsOnOtherMonitorsDismissPolicyFactory@Switcher@Experiences.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall WindowsInternal::ComposableShell::Experiences::Switcher::FadeMinimizedAndItemsOnOtherMonitorsDismissPolicy::FadeMinimizedAndItemsOnOtherMonitorsDismissPolicy(
        __int64 a1,
        __int64 a2,
        __int128 *a3,
        void **a4)
{
  int ActivationFactoryByPCWSTR; // eax
  __int64 v7; // rdi
  __int64 v8; // rbx
  __int64 v9; // rdi
  _DWORD v11[4]; // [rsp+20h] [rbp-20h] BYREF
  __int128 v12; // [rsp+30h] [rbp-10h] BYREF
  void *v13; // [rsp+50h] [rbp+10h] BYREF
  __int64 v14; // [rsp+68h] [rbp+28h]

  v11[0] = -760652143;
  v11[1] = 996295664;
  v11[2] = 722911376;
  v11[3] = 2014975596;
  v13 = 0LL;
  ActivationFactoryByPCWSTR = __winRT::__getActivationFactoryByPCWSTR(
                                (__winRT *)L"WindowsInternal.ComposableShell.Experiences.Switcher.FadeMinimizedAndItemsOnO"
                                            "therMonitorsDismissPolicy",
                                (struct Platform::Guid *)v11,
                                &v13,
                                a4);
  if ( ActivationFactoryByPCWSTR < 0 )
  {
    __abi_WinRTraiseException(ActivationFactoryByPCWSTR);
    __debugbreak();
  }
  v12 = *a3;
  v7 = WindowsInternal::ComposableShell::Experiences::Switcher::__IFadeMinimizedAndItemsOnOtherMonitorsDismissPolicyFactory::CreateInstance(
         v13,
         a2,
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
