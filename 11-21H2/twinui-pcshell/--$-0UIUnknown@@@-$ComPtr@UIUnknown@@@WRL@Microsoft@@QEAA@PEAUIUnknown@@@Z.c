/*
 * XREFs of ??$?0UIUnknown@@@?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAA@PEAUIUnknown@@@Z @ 0x1802DB060
 * Callers:
 *     ?ViewLoaded@XamlAltTabViewHost@@UEAAJXZ @ 0x1805FDB00 (-ViewLoaded@XamlAltTabViewHost@@UEAAJXZ.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 *__fastcall Microsoft::WRL::ComPtr<IUnknown>::ComPtr<IUnknown>(__int64 *a1, __int64 a2)
{
  *a1 = a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(a1);
  return a1;
}
