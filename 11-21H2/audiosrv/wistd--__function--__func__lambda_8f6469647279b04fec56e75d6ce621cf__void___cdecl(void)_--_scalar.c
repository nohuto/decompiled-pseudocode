/*
 * XREFs of wistd::__function::__func__lambda_8f6469647279b04fec56e75d6ce621cf__void___cdecl(void)_::_scalar_deleting_destructor_ @ 0x1801536D0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180002C20 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18005EFB8 (--3@YAXPEAX_K@Z.c)
 */

__int64 *__fastcall wistd::__function::__func__lambda_8f6469647279b04fec56e75d6ce621cf__void___cdecl_void__::_scalar_deleting_destructor_(
        __int64 *a1,
        char a2)
{
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(a1 + 1);
  *a1 = (__int64)&wistd::__function::__base<void (enum wil::RegistryChangeKind)>::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
