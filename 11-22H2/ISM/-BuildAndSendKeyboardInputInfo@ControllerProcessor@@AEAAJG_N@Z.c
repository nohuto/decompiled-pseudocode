/*
 * XREFs of ?BuildAndSendKeyboardInputInfo@ControllerProcessor@@AEAAJG_N@Z @ 0x1801A361C
 * Callers:
 *     ?LiftPressedVirtualKeys@ControllerProcessor@@AEAAJ_N@Z @ 0x1801A4A0C (-LiftPressedVirtualKeys@ControllerProcessor@@AEAAJ_N@Z.c)
 *     ?OnAutoRepeatTimer@ControllerProcessor@@AEAAJXZ @ 0x1801A4CFC (-OnAutoRepeatTimer@ControllerProcessor@@AEAAJXZ.c)
 *     ?SendChordedKeyBuffer@ControllerProcessor@@AEAAXAEAV?$vector@W4GameInputGamepadButtons@@V?$allocator@W4GameInputGamepadButtons@@@std@@@std@@@Z @ 0x1801A55D4 (-SendChordedKeyBuffer@ControllerProcessor@@AEAAXAEAV-$vector@W4GameInputGamepadButtons@@V-$alloc.c)
 *     ?StopAutoRepeatTimer@ControllerProcessor@@AEAAJXZ @ 0x1801A6704 (-StopAutoRepeatTimer@ControllerProcessor@@AEAAJXZ.c)
 *     ?TaskSwitcherInvokedCallback@ControllerProcessor@@AEAAJAEAV?$vector@U?$pair@G_N@std@@V?$allocator@U?$pair@G_N@std@@@2@@std@@_N@Z @ 0x1801A67C4 (-TaskSwitcherInvokedCallback@ControllerProcessor@@AEAAJAEAV-$vector@U-$pair@G_N@std@@V-$allocato.c)
 * Callees:
 *     ?IsEdition@@YA_N_K@Z @ 0x18003DD08 (-IsEdition@@YA_N_K@Z.c)
 *     memset_0 @ 0x180057418 (memset_0.c)
 *     __security_check_cookie @ 0x1800574C0 (__security_check_cookie.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180059D90 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetGamepadInterceptionHelper@ISMStatics@@SAPEAVGamepadInterceptionHelper@@XZ @ 0x18005A90C (-GetGamepadInterceptionHelper@ISMStatics@@SAPEAVGamepadInterceptionHelper@@XZ.c)
 *     ?InterceptGamepadInput@GamepadInterceptionHelper@@QEAAXG_N@Z @ 0x18006A8E4 (-InterceptGamepadInput@GamepadInterceptionHelper@@QEAAXG_N@Z.c)
 *     ?IsGamepadInterceptionActive@GamepadInterceptionHelper@@QEAA_NXZ @ 0x18006A9D0 (-IsGamepadInterceptionActive@GamepadInterceptionHelper@@QEAA_NXZ.c)
 *     ?IsProcessSubscribedToGamepadEvents@GamepadInterceptionHelper@@QEAA_NK@Z @ 0x18006A9E0 (-IsProcessSubscribedToGamepadEvents@GamepadInterceptionHelper@@QEAA_NK@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_GamepadVKeyRoutingOptIn@@@details@wil@@QEAA_NXZ @ 0x180072358 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_GamepadVKeyRoutingOptIn@@@details.c)
 *     ?GetControllerNavigationManager@ISMStatics@@SAPEAVControllerNavigationManager@@XZ @ 0x1800AB490 (-GetControllerNavigationManager@ISMStatics@@SAPEAVControllerNavigationManager@@XZ.c)
 *     ?Inject@KeyboardInjectionDevice@@QEAAJPEAUInputInfo@@@Z @ 0x1801A47CC (-Inject@KeyboardInjectionDevice@@QEAAJPEAUInputInfo@@@Z.c)
 */

__int64 __fastcall ControllerProcessor::BuildAndSendKeyboardInputInfo(
        ControllerProcessor *this,
        unsigned __int16 a2,
        char a3)
{
  GamepadInterceptionHelper *GamepadInterceptionHelper; // r15
  GamepadInterceptionHelper *v7; // rcx
  DWORD TickCount; // ebx
  unsigned int v10; // edx
  int v11; // eax
  int v12; // eax
  LARGE_INTEGER PerformanceCount; // [rsp+20h] [rbp-E0h] BYREF
  _DWORD v14[4]; // [rsp+30h] [rbp-D0h] BYREF
  LARGE_INTEGER v15; // [rsp+40h] [rbp-C0h]
  int v16; // [rsp+48h] [rbp-B8h]
  __int64 v17; // [rsp+50h] [rbp-B0h]
  unsigned __int16 v18; // [rsp+6Ch] [rbp-94h]
  __int16 v19; // [rsp+8Eh] [rbp-72h]
  wil::details::in1diag3 *retaddr; // [rsp+1D8h] [rbp+D8h]

  GamepadInterceptionHelper = ISMStatics::GetGamepadInterceptionHelper();
  if ( GamepadInterceptionHelper::IsGamepadInterceptionActive(GamepadInterceptionHelper) )
  {
    GamepadInterceptionHelper::InterceptGamepadInput(v7, a2, a3 ^ 1);
  }
  else
  {
    TickCount = GetTickCount();
    QueryPerformanceCounter(&PerformanceCount);
    memset_0(v14, 0, 0x170uLL);
    v15 = PerformanceCount;
    v17 = *((_QWORD *)this + 38);
    v19 = 64;
    v16 = 368;
    v14[0] = 4;
    v14[2] = TickCount;
    v18 = a2;
    if ( !a3 )
      v19 = 65;
    if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_GamepadVKeyRoutingOptIn>::__private_IsEnabled(`wil::Feature<__WilFeatureTraits_Feature_GamepadVKeyRoutingOptIn>::GetImpl'::`2'::impl) )
    {
      if ( a2 == 7
        || IsEdition(253345LL)
        || *((_BYTE *)ISMStatics::GetControllerNavigationManager() + 228)
        || (v10 = *((_DWORD *)this + 1953)) != 0
        && GamepadInterceptionHelper::IsProcessSubscribedToGamepadEvents(GamepadInterceptionHelper, v10) )
      {
        v11 = KeyboardInjectionDevice::Inject((ControllerProcessor *)((char *)this + 5952), (struct InputInfo *)v14);
        if ( v11 < 0 )
          wil::details::in1diag3::FailFast_Hr(
            retaddr,
            (void *)0x852,
            (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
            (const char *)(unsigned int)v11,
            PerformanceCount.LowPart);
      }
    }
    else if ( a2 == 7 || IsEdition(253345LL) || *((_BYTE *)ISMStatics::GetControllerNavigationManager() + 228) )
    {
      v12 = KeyboardInjectionDevice::Inject((ControllerProcessor *)((char *)this + 5952), (struct InputInfo *)v14);
      if ( v12 < 0 )
        wil::details::in1diag3::FailFast_Hr(
          retaddr,
          (void *)0x85E,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
          (const char *)(unsigned int)v12,
          PerformanceCount.LowPart);
    }
  }
  return 0LL;
}
