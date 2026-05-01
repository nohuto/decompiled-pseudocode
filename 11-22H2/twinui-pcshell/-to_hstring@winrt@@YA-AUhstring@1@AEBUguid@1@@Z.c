/*
 * XREFs of ?to_hstring@winrt@@YA?AUhstring@1@AEBUguid@1@@Z @ 0x180045DE4
 * Callers:
 *     ?StartFullActivationTest@UndockedSearchAppExperienceManager@@AEAAXW4FullActivationTestSource@@W4CortanaAppTransitionType@Experience@Shell@Internal@Windows@@@Z @ 0x180045AFC (-StartFullActivationTest@UndockedSearchAppExperienceManager@@AEAAXW4FullActivationTestSource@@W4.c)
 *     ?SignalGamepadConnect@GamingOverlayExperienceManager@@AEAAXUhstring@winrt@@0@Z @ 0x180407698 (-SignalGamepadConnect@GamingOverlayExperienceManager@@AEAAXUhstring@winrt@@0@Z.c)
 *     ?on_result@?$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip2@@EEAAXAEBUTipReportingInfo@@@Z @ 0x18046D4C0 (-on_result@-$merged_data@U_tip_SearchFullActivationTest@@U1@@details@tip2@@EEAAXAEBUTipReporting.c)
 *     ?InvokeSwitchItem@?QIXamlMultitaskingViewController@@XamlAltTabViewController@@UE$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x180779AA0 (-InvokeSwitchItem@-QIXamlMultitaskingViewController@@XamlAltTabViewController@@UE$AAAXPE$AAUISwi.c)
 *     ?HandleMoveToCommand@XamlAllUpViewController@@AE$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@I@Z @ 0x180780480 (-HandleMoveToCommand@XamlAllUpViewController@@AE$AAAXPE$AAUISwitchItem@Multitasking@ComposableSh.c)
 *     ?HandlePinningCommand@XamlAllUpViewController@@AE$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@I@Z @ 0x180780A8C (-HandlePinningCommand@XamlAllUpViewController@@AE$AAAXPE$AAUISwitchItem@Multitasking@ComposableS.c)
 *     ?InvokeSwitchItem@?QIXamlMultitaskingViewController@@XamlAllUpViewController@@UE$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x180781460 (-InvokeSwitchItem@-QIXamlMultitaskingViewController@@XamlAllUpViewController@@UE$AAAXPE$AAUISwit.c)
 * Callees:
 *     ??$swprintf_s@$0CI@@@YAHAEAY0CI@GPEBGZZ @ 0x180046000 (--$swprintf_s@$0CI@@@YAHAEAY0CI@GPEBGZZ.c)
 *     ??0hstring@winrt@@QEAA@PEBG@Z @ 0x1800D20DC (--0hstring@winrt@@QEAA@PEBG@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

winrt::hstring *__fastcall winrt::to_hstring(winrt::hstring *a1, unsigned int *a2)
{
  int v4; // [rsp+20h] [rbp-D8h]
  int v5; // [rsp+28h] [rbp-D0h]
  int v6; // [rsp+30h] [rbp-C8h]
  int v7; // [rsp+38h] [rbp-C0h]
  int v8; // [rsp+40h] [rbp-B8h]
  int v9; // [rsp+48h] [rbp-B0h]
  int v10; // [rsp+50h] [rbp-A8h]
  int v11; // [rsp+58h] [rbp-A0h]
  int v12; // [rsp+60h] [rbp-98h]
  unsigned __int16 v13[40]; // [rsp+80h] [rbp-78h] BYREF

  v12 = *((unsigned __int8 *)a2 + 15);
  v11 = *((unsigned __int8 *)a2 + 14);
  v10 = *((unsigned __int8 *)a2 + 13);
  v9 = *((unsigned __int8 *)a2 + 12);
  v8 = *((unsigned __int8 *)a2 + 11);
  v7 = *((unsigned __int8 *)a2 + 10);
  v6 = *((unsigned __int8 *)a2 + 9);
  v5 = *((unsigned __int8 *)a2 + 8);
  v4 = *((unsigned __int16 *)a2 + 3);
  swprintf_s<40>(
    v13,
    L"{%08x-%04hx-%04hx-%02hhx%02hhx-%02hhx%02hhx%02hhx%02hhx%02hhx%02hhx}",
    *a2,
    *((unsigned __int16 *)a2 + 2),
    v4,
    v5,
    v6,
    v7,
    v8,
    v9,
    v10,
    v11,
    v12);
  winrt::hstring::hstring(a1, v13);
  return a1;
}
