/*
 * XREFs of _lambda_224ca2662a1dba27bb7ec196acbc4aa2_::_lambda_224ca2662a1dba27bb7ec196acbc4aa2_ @ 0x1801E7E98
 * Callers:
 *     ?ResetWindowRegionAsync@CUndockedSearchAppExperienceManagerConfig@@UEAAXPEAUHWND__@@@Z @ 0x180050350 (-ResetWindowRegionAsync@CUndockedSearchAppExperienceManagerConfig@@UEAAXPEAUHWND__@@@Z.c)
 * Callees:
 *     ??0?$ActivityBase@VSearchAppLauncherLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x1800BAF78 (--0-$ActivityBase@VSearchAppLauncherLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_ea_1800BAF78.c)
 */

_QWORD *__fastcall lambda_224ca2662a1dba27bb7ec196acbc4aa2_::_lambda_224ca2662a1dba27bb7ec196acbc4aa2_(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3)
{
  *a1 = *a2;
  wil::ActivityBase<SearchAppLauncherLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<SearchAppLauncherLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
    (__int64)(a1 + 1),
    a3);
  a1[1] = &SearchAppExperienceManagerTelemetry::UndockedSearchAppExperienceManager_ResetWindowRgn::`vftable';
  return a1;
}
