/*
 * XREFs of ?IgnoreRelativeToFocusedElementShowRequest@TabTipAdapterPolicy@KeyboardHosting@@AEAA_NAEBUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@@Z @ 0x180533914
 * Callers:
 *     ?VerifyInputAppRequestedShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@IEPEAIPEAURect@Foundation@8@PEAE@Z @ 0x180535540 (-VerifyInputAppRequestedShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJUCoreKeyboardPositionAndS.c)
 * Callees:
 *     ?IsRectNull@KeyboardHosting@@YA_NAEBURect@Foundation@Windows@@@Z @ 0x1800BE690 (-IsRectNull@KeyboardHosting@@YA_NAEBURect@Foundation@Windows@@@Z.c)
 *     ??$IgnoreRelativeToFocusedElementShowRequest@AEA_N_NAEAMAEAM@TouchKeyboardExperienceTelemetryLogger@@SAXAEA_N$$QEA_NAEAM2@Z @ 0x180530E54 (--$IgnoreRelativeToFocusedElementShowRequest@AEA_N_NAEAMAEAM@TouchKeyboardExperienceTelemetryLog.c)
 *     std::call_once__lambda_b845a5ef8d523a7a273348395baf5ff1___ @ 0x180531B78 (std--call_once__lambda_b845a5ef8d523a7a273348395baf5ff1___.c)
 *     ?PreferUseUIAToGetBoundingBox@UIAutomationHelpers@KeyboardHosting@@QEAA_NXZ @ 0x18053B508 (-PreferUseUIAToGetBoundingBox@UIAutomationHelpers@KeyboardHosting@@QEAA_NXZ.c)
 */

char __fastcall KeyboardHosting::TabTipAdapterPolicy::IgnoreRelativeToFocusedElementShowRequest(
        KeyboardHosting::TabTipAdapterPolicy *this,
        const struct Windows::UI::Internal::Text::Core::CoreKeyboardPositionAndSizeRequest *a2)
{
  KeyboardHosting::TabTipAdapterPolicy *v2; // rdi
  KeyboardHosting::TabTipAdapterPolicy *v3; // rsi
  char v4; // bl
  union _RTL_RUN_ONCE *v5; // rcx
  const char *v6; // r9
  bool BoundingBox; // al
  KeyboardHosting *v8; // rcx
  const struct Windows::Foundation::Rect *v9; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  bool v14; // [rsp+48h] [rbp+10h] BYREF
  KeyboardHosting::TabTipAdapterPolicy *v15; // [rsp+50h] [rbp+18h] BYREF
  KeyboardHosting::TabTipAdapterPolicy *v16; // [rsp+58h] [rbp+20h]

  v2 = this;
  v3 = this;
  v16 = this;
  v4 = 0;
  if ( *(_DWORD *)a2 == 6 )
  {
    v14 = 0;
    v15 = this;
    v5 = (union _RTL_RUN_ONCE *)((char *)this + 712);
    try
    {
      std::call_once__lambda_b845a5ef8d523a7a273348395baf5ff1___(v5, (__int64)&v15);
      BoundingBox = KeyboardHosting::UIAutomationHelpers::PreferUseUIAToGetBoundingBox(*((KeyboardHosting::UIAutomationHelpers **)v3
                                                                                       + 87));
      v14 = BoundingBox;
    }
    catch ( ... )
    {
      wil::details::in1diag3::Log_CaughtException(
        retaddr,
        (void *)0x541,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapterpolicy.cpp",
        v6);
      v4 = 0;
      v2 = this;
      BoundingBox = v14;
      v3 = v16;
    }
    v8 = (KeyboardHosting::TabTipAdapterPolicy *)((char *)v3 + 176);
    if ( !BoundingBox && !KeyboardHosting::IsRectNull(v8, v9) && *((float *)v2 + 38) < 1.0 && *((float *)v2 + 39) < 1.0 )
      v4 = 1;
    LOBYTE(v15) = KeyboardHosting::IsRectNull(v8, v9);
    TouchKeyboardExperienceTelemetryLogger::IgnoreRelativeToFocusedElementShowRequest<bool &,bool,float &,float &>(
      &v14,
      (char *)&v15,
      (int *)v2 + 38,
      (int *)v2 + 39);
  }
  return v4;
}
