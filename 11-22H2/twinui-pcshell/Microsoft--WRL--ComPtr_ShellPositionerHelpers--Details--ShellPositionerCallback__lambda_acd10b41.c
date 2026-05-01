/*
 * XREFs of Microsoft::WRL::ComPtr_ShellPositionerHelpers::Details::ShellPositionerCallback__lambda_acd10b41a0cddad1ef38ef822c802fad_____::_ComPtr_ShellPositionerHelpers::Details::ShellPositionerCallback__lambda_acd10b41a0cddad1ef38ef822c802fad_____ @ 0x1801D0778
 * Callers:
 *     _ShellPositionerHelpers::PerformCallbackOnView__lambda_ce925e2c65fa70a9c2e11950913c80c9____::_1_::dtor$2 @ 0x1801D00D2 (_ShellPositionerHelpers--PerformCallbackOnView__lambda_ce925e2c65fa70a9c2e11950913c_ea_1801D00D2.c)
 *     _ShellPositionerHelpers::PerformCallbackOnView__lambda_3191f22cac41f41d34f0b7ce6d91de45____::_1_::dtor$2 @ 0x1801D8522 (_ShellPositionerHelpers--PerformCallbackOnView__lambda_3191f22cac41f41d34f0b7ce6d91_ea_1801D8522.c)
 *     _ShellPositionerHelpers::PerformCallbackOnView__lambda_8914cc4465c7915cfbd8b08b3bc0fff7____::_1_::dtor$2 @ 0x1801D869E (_ShellPositionerHelpers--PerformCallbackOnView__lambda_8914cc4465c7915cfbd8b08b3bc0_ea_1801D869E.c)
 *     _ShellPositionerHelpers::PerformCallbackOnView__lambda_acd10b41a0cddad1ef38ef822c802fad____::_1_::dtor$2 @ 0x1802BAFED (_ShellPositionerHelpers--PerformCallbackOnView__lambda_acd10b41a0cddad1ef38ef822c802fad____--_1_.c)
 *     _ShellPositionerHelpers::PerformCallbackOnView__lambda_fedc7e4f644c4c51595793f53b0e36e3____::_1_::dtor$2 @ 0x1803AB472 (_ShellPositionerHelpers--PerformCallbackOnView__lambda_fedc7e4f644c4c51595793f53b0e_ea_1803AB472.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIShellPositionerCallback@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800E0A90 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIShellPositioner.c)
 */

volatile signed __int32 *__fastcall Microsoft::WRL::ComPtr_ShellPositionerHelpers::Details::ShellPositionerCallback__lambda_acd10b41a0cddad1ef38ef822c802fad_____::_ComPtr_ShellPositionerHelpers::Details::ShellPositionerCallback__lambda_acd10b41a0cddad1ef38ef822c802fad_____(
        volatile signed __int32 **a1)
{
  volatile signed __int32 *result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return (volatile signed __int32 *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IShellPositionerCallback,Microsoft::WRL::FtmBase>::Release(result);
  }
  return result;
}
