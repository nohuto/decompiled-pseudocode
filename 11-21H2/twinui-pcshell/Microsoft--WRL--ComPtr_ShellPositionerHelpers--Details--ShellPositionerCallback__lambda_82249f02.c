/*
 * XREFs of Microsoft::WRL::ComPtr_ShellPositionerHelpers::Details::ShellPositionerCallback__lambda_82249f02e51292d5ce9028c294c0a72e_____::_ComPtr_ShellPositionerHelpers::Details::ShellPositionerCallback__lambda_82249f02e51292d5ce9028c294c0a72e_____ @ 0x1802DF6E0
 * Callers:
 *     _ShellPositionerHelpers::PerformCallbackOnView__lambda_82249f02e51292d5ce9028c294c0a72e____::_1_::dtor$2 @ 0x18021567F (_ShellPositionerHelpers--PerformCallbackOnView__lambda_82249f02e51292d5ce9028c294c0a72e____--_1_.c)
 *     _ShellPositionerHelpers::PerformCallbackOnView__lambda_ec65a9fd59a71953153588e5bb4df1aa____::_1_::dtor$2 @ 0x1802DD7F0 (_ShellPositionerHelpers--PerformCallbackOnView__lambda_ec65a9fd59a71953153588e5bb4d_ea_1802DD7F0.c)
 *     _ShellPositionerHelpers::PerformCallbackOnView__lambda_5df9a5d4ba38bb669e81df66bead270a____::_1_::dtor$2 @ 0x1802F2B94 (_ShellPositionerHelpers--PerformCallbackOnView__lambda_5df9a5d4ba38bb669e81df66bead_ea_1802F2B94.c)
 *     _ShellPositionerHelpers::PerformCallbackOnView__lambda_b5b57993037fc12f38ba60be13c6908e____::_1_::dtor$2 @ 0x18030F148 (_ShellPositionerHelpers--PerformCallbackOnView__lambda_b5b57993037fc12f38ba60be13c6_ea_18030F148.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIShellPositionerCallback@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180141380 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIShellPositioner.c)
 */

volatile signed __int32 *__fastcall Microsoft::WRL::ComPtr_ShellPositionerHelpers::Details::ShellPositionerCallback__lambda_82249f02e51292d5ce9028c294c0a72e_____::_ComPtr_ShellPositionerHelpers::Details::ShellPositionerCallback__lambda_82249f02e51292d5ce9028c294c0a72e_____(
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
