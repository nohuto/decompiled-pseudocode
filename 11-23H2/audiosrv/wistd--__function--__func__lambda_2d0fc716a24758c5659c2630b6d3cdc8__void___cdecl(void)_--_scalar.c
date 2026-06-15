/*
 * XREFs of wistd::__function::__func__lambda_2d0fc716a24758c5659c2630b6d3cdc8__void___cdecl(void)_::_scalar_deleting_destructor_ @ 0x18015A810
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x18003F314 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x180067038 (--3@YAXPEAX_K@Z.c)
 */

__int64 *__fastcall wistd::__function::__func__lambda_2d0fc716a24758c5659c2630b6d3cdc8__void___cdecl_void__::_scalar_deleting_destructor_(
        __int64 *a1,
        char a2)
{
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(a1 + 1);
  *a1 = (__int64)&wistd::__function::__base<void (enum wil::RegistryChangeKind)>::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
