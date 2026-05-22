/*
 * XREFs of ?OnDeviceInput@GameControllerRawInputProvider@@UEAAXI_K0MW4GameInputKind@@PEBUGameInputRoutedInputBuffer@@PEBUGameInputGamepadState@@PEBUGameInputUiNavigationState@@@Z @ 0x1800DC210
 * Callers:
 *     <none>
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18005907C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180059DB0 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetGamepadInterceptionHelper@ISMStatics@@SAPEAVGamepadInterceptionHelper@@XZ @ 0x18005A90C (-GetGamepadInterceptionHelper@ISMStatics@@SAPEAVGamepadInterceptionHelper@@XZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_RestrictHIDGamepadDelegation@@@details@wil@@QEAA_NXZ @ 0x180061B68 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_RestrictHIDGamepadDelegation@@@de.c)
 *     ?IsGamepadInterceptionActive@GamepadInterceptionHelper@@QEAA_NXZ @ 0x18006A9D0 (-IsGamepadInterceptionActive@GamepadInterceptionHelper@@QEAA_NXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800793F0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?FreeInputBuffer@GameControllerRawInputProvider@@UEAAXPEBUGameInputRoutedInputBuffer@@@Z @ 0x1800DBEF0 (-FreeInputBuffer@GameControllerRawInputProvider@@UEAAXPEBUGameInputRoutedInputBuffer@@@Z.c)
 *     ?SetTimestampsFromInput@GameControllerRawInputProvider@@AEAAX_KPEAUInputInfo@@@Z @ 0x1800DCB24 (-SetTimestampsFromInput@GameControllerRawInputProvider@@AEAAX_KPEAUInputInfo@@@Z.c)
 */

void __fastcall GameControllerRawInputProvider::OnDeviceInput(
        GameControllerRawInputProvider *a1,
        int a2,
        __int64 a3,
        const char *a4,
        int a5,
        int a6,
        struct GameInputRoutedInputBuffer *a7,
        __int64 a8,
        _DWORD *a9)
{
  GamepadInterceptionHelper *GamepadInterceptionHelper; // rax
  int v11; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( *((_DWORD *)a7 - 21) != a2 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x1A6,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\gamecontroller\\lib\\gamecontrollerrawinputprovider.cpp",
      a4);
  *((_DWORD *)a7 - 22) = 64;
  *((_QWORD *)a7 - 7) = a3;
  *((_DWORD *)a7 - 12) = a5;
  *((_DWORD *)a7 - 11) = a6;
  GameControllerRawInputProvider::SetTimestampsFromInput(
    (GameControllerRawInputProvider *)((char *)a1 - 16),
    (unsigned __int64)a4,
    (struct GameInputRoutedInputBuffer *)((char *)a7 - 88));
  if ( a8 )
  {
    *(_OWORD *)((char *)a7 - 40) = *(_OWORD *)a8;
    *((_QWORD *)a7 - 3) = *(_QWORD *)(a8 + 16);
    *((_DWORD *)a7 - 4) = *(_DWORD *)(a8 + 24);
  }
  if ( a9 )
    *((_DWORD *)a7 - 3) = *a9;
  *((_BYTE *)a7 - 8) = (a6 & 0x10F0000) == 0x1000000;
  if ( !wil::details::FeatureImpl<__WilFeatureTraits_Feature_RestrictHIDGamepadDelegation>::__private_IsEnabled(`wil::Feature<__WilFeatureTraits_Feature_RestrictHIDGamepadDelegation>::GetImpl'::`2'::impl)
    || (GamepadInterceptionHelper = ISMStatics::GetGamepadInterceptionHelper(),
        !GamepadInterceptionHelper::IsGamepadInterceptionActive(GamepadInterceptionHelper))
    || a6 >= 0 )
  {
    v11 = (*(__int64 (__fastcall **)(_QWORD *, __int64 (__fastcall *)(void *), __int64, __int64))(**((_QWORD **)a1 + 5)
                                                                                                + 152LL))(
            *((_QWORD **)a1 + 5),
            GameControllerRawInputProvider::InputReportCallback,
            (__int64)a7 - 88,
            4LL);
    if ( v11 >= 0 )
      return;
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x1CA,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\gamecontroller\\lib\\gamecontrollerrawinputprovider.cpp",
      (const char *)(unsigned int)v11);
  }
  GameControllerRawInputProvider::FreeInputBuffer(a1, a7);
}
