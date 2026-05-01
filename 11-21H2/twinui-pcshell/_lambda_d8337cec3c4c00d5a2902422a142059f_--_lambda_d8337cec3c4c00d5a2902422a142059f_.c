/*
 * XREFs of _lambda_d8337cec3c4c00d5a2902422a142059f_::_lambda_d8337cec3c4c00d5a2902422a142059f_ @ 0x1801E8C48
 * Callers:
 *     ?ViewLoaded@XamlAltTabViewHost@@UEAAJXZ @ 0x1805FDB00 (-ViewLoaded@XamlAltTabViewHost@@UEAAJXZ.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 *__fastcall lambda_d8337cec3c4c00d5a2902422a142059f_::_lambda_d8337cec3c4c00d5a2902422a142059f_(
        __int64 *a1,
        __int64 *a2,
        __int64 a3)
{
  __int64 *result; // rax

  *a1 = *a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(a1);
  result = a1;
  a1[1] = a3;
  return result;
}
