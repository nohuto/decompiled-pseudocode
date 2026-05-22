/*
 * XREFs of ?BuildAndSendKeyboardInputInfo@ControllerProcessor@@AEAAJG_N@Z @ 0x1801957B8
 * Callers:
 *     ?LiftPressedVirtualKeys@ControllerProcessor@@AEAAJ_N@Z @ 0x180196AFC (-LiftPressedVirtualKeys@ControllerProcessor@@AEAAJ_N@Z.c)
 *     ?OnAutoRepeatTimer@ControllerProcessor@@AEAAJXZ @ 0x180196DEC (-OnAutoRepeatTimer@ControllerProcessor@@AEAAJXZ.c)
 *     ?SendChordedKeyBuffer@ControllerProcessor@@AEAAXAEAV?$vector@W4GameInputGamepadButtons@@V?$allocator@W4GameInputGamepadButtons@@@std@@@std@@@Z @ 0x180197694 (-SendChordedKeyBuffer@ControllerProcessor@@AEAAXAEAV-$vector@W4GameInputGamepadButtons@@V-$alloc.c)
 *     ?StopAutoRepeatTimer@ControllerProcessor@@AEAAJXZ @ 0x180198720 (-StopAutoRepeatTimer@ControllerProcessor@@AEAAJXZ.c)
 *     ?TaskSwitcherInvokedCallback@ControllerProcessor@@AEAAJAEAV?$vector@U?$pair@G_N@std@@V?$allocator@U?$pair@G_N@std@@@2@@std@@_N@Z @ 0x1801987E0 (-TaskSwitcherInvokedCallback@ControllerProcessor@@AEAAJAEAV-$vector@U-$pair@G_N@std@@V-$allocato.c)
 * Callees:
 *     ?IsEdition@@YA_N_K@Z @ 0x180037964 (-IsEdition@@YA_N_K@Z.c)
 *     memset_0 @ 0x180056688 (memset_0.c)
 *     __security_check_cookie @ 0x180056730 (__security_check_cookie.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180058998 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetControllerNavigationManager@ISMStatics@@SAPEAVControllerNavigationManager@@XZ @ 0x180098EB0 (-GetControllerNavigationManager@ISMStatics@@SAPEAVControllerNavigationManager@@XZ.c)
 *     ?Inject@KeyboardInjectionDevice@@QEAAJPEAUInputInfo@@@Z @ 0x1801968BC (-Inject@KeyboardInjectionDevice@@QEAAJPEAUInputInfo@@@Z.c)
 */

__int64 __fastcall ControllerProcessor::BuildAndSendKeyboardInputInfo(ControllerProcessor *this, __int16 a2, char a3)
{
  DWORD TickCount; // ebx
  int v7; // eax
  LARGE_INTEGER PerformanceCount; // [rsp+20h] [rbp-E0h] BYREF
  _DWORD v10[4]; // [rsp+30h] [rbp-D0h] BYREF
  LARGE_INTEGER v11; // [rsp+40h] [rbp-C0h]
  int v12; // [rsp+48h] [rbp-B8h]
  __int64 v13; // [rsp+50h] [rbp-B0h]
  __int16 v14; // [rsp+6Ch] [rbp-94h]
  __int16 v15; // [rsp+8Eh] [rbp-72h]
  wil::details::in1diag3 *retaddr; // [rsp+1C8h] [rbp+C8h]

  TickCount = GetTickCount();
  QueryPerformanceCounter(&PerformanceCount);
  memset_0(v10, 0, 0x170uLL);
  v11 = PerformanceCount;
  v13 = *((_QWORD *)this + 38);
  v15 = 64;
  v12 = 368;
  v10[0] = 4;
  v10[2] = TickCount;
  v14 = a2;
  if ( !a3 )
    v15 = 65;
  if ( a2 == 7 || IsEdition(253345LL) || *((_BYTE *)ISMStatics::GetControllerNavigationManager() + 228) )
  {
    v7 = KeyboardInjectionDevice::Inject((ControllerProcessor *)((char *)this + 5952), (struct InputInfo *)v10);
    if ( v7 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x845,
        (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
        (const char *)(unsigned int)v7,
        PerformanceCount.LowPart);
  }
  return 0LL;
}
