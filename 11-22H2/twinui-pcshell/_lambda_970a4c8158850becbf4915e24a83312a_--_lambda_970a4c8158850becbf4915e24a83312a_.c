/*
 * XREFs of _lambda_970a4c8158850becbf4915e24a83312a_::_lambda_970a4c8158850becbf4915e24a83312a_ @ 0x180201E74
 * Callers:
 *     ?CompleteStartShowTelemetry@XamlLauncherState@@AEAAXJPEAVLauncherInvokeActivity@CommonStartTelemetry@@@Z @ 0x18002CB84 (-CompleteStartShowTelemetry@XamlLauncherState@@AEAAXJPEAVLauncherInvokeActivity@CommonStartTelem.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@VXamlLauncherState@@@WRL@Microsoft@@IEBAXXZ @ 0x180505E7C (-InternalAddRef@-$ComPtr@VXamlLauncherState@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 __fastcall lambda_970a4c8158850becbf4915e24a83312a_::_lambda_970a4c8158850becbf4915e24a83312a_(
        _QWORD *a1,
        _QWORD *a2)
{
  __int64 v2; // r8

  *a1 = *a2;
  Microsoft::WRL::ComPtr<XamlLauncherState>::InternalAddRef(a1, a2, a1);
  return v2;
}
