/*
 * XREFs of std::_Func_impl_no_alloc__lambda_b23d6f9d7655be589c0ae99ef9363a00__void_Microsoft::WRL::ComPtr_BamoInputSystemInternalProxy__&_::_Delete_this @ 0x1800B2410
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@VInputProcess@@@WRL@Microsoft@@IEAAKXZ @ 0x180080348 (-InternalRelease@-$ComPtr@VInputProcess@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$_Deallocate@$07$0A@@std@@YAXPEAX_K@Z @ 0x180086CFC (--$_Deallocate@$07$0A@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::_Func_impl_no_alloc__lambda_b23d6f9d7655be589c0ae99ef9363a00__void_Microsoft::WRL::ComPtr_BamoInputSystemInternalProxy____::_Delete_this(
        __int64 *a1,
        char a2)
{
  Microsoft::WRL::ComPtr<InputProcess>::InternalRelease(a1 + 1);
  if ( a2 )
    std::_Deallocate<8,0>(a1, 0x10uLL);
}
