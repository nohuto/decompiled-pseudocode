/*
 * XREFs of ??1?$ComPtr@V?$ShellPositionerCallback@V_lambda_fc0143a4fb0c4cebe9d0a78f532496be_@@@Details@ShellPositionerHelpers@@@WRL@Microsoft@@QEAA@XZ @ 0x1804E9384
 * Callers:
 *     _ShellPositionerHelpers::PerformCallbackOnView__lambda_fc0143a4fb0c4cebe9d0a78f532496be____::_1_::dtor$2 @ 0x18022063D (_ShellPositionerHelpers--PerformCallbackOnView__lambda_fc0143a4fb0c4cebe9d0a78f532496be____--_1_.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIShellPositionerCallback@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180141380 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIShellPositioner.c)
 */

volatile signed __int32 *__fastcall Microsoft::WRL::ComPtr<ShellPositionerHelpers::Details::ShellPositionerCallback<_lambda_fc0143a4fb0c4cebe9d0a78f532496be_>>::~ComPtr<ShellPositionerHelpers::Details::ShellPositionerCallback<_lambda_fc0143a4fb0c4cebe9d0a78f532496be_>>(
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
