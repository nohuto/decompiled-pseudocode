/*
 * XREFs of _lambda_b9b326c89cb8166a780ad4ef449f4933_::_lambda_b9b326c89cb8166a780ad4ef449f4933_ @ 0x18019B2B0
 * Callers:
 *     ?SetDrawingRegion@CUndockedSearchAppExperienceManagerConfig@@UEAAXPEAUHWND__@@AEBUtagRECT@@1@Z @ 0x180023F40 (-SetDrawingRegion@CUndockedSearchAppExperienceManagerConfig@@UEAAXPEAUHWND__@@AEBUtagRECT@@1@Z.c)
 * Callees:
 *     ??0?$ActivityBase@VSearchAppLauncherLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x18019B5FC (--0-$ActivityBase@VSearchAppLauncherLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_ea_18019B5FC.c)
 */

__int64 __fastcall lambda_b9b326c89cb8166a780ad4ef449f4933_::_lambda_b9b326c89cb8166a780ad4ef449f4933_(
        __int64 a1,
        _QWORD *a2,
        __int128 *a3,
        __int128 *a4,
        __int64 a5)
{
  __int128 v6; // xmm0
  __int128 v7; // xmm1

  v6 = *a3;
  v7 = *a4;
  *(_QWORD *)a1 = *a2;
  *(_OWORD *)(a1 + 8) = v6;
  *(_OWORD *)(a1 + 24) = v7;
  wil::ActivityBase<SearchAppLauncherLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<SearchAppLauncherLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
    a1 + 40,
    a5);
  *(_QWORD *)(a1 + 40) = &SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_SetWindowRgn::`vftable';
  return a1;
}
