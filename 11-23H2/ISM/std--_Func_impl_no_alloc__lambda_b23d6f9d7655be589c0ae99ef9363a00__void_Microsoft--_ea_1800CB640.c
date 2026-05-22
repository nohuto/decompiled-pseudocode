/*
 * XREFs of std::_Func_impl_no_alloc__lambda_b23d6f9d7655be589c0ae99ef9363a00__void_Microsoft::WRL::ComPtr_BamoInputSystemInternalProxy__&_::_Delete_this @ 0x1800CB640
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1800569E0 (--3@YAXPEAX_K@Z.c)
 *     ?InternalRelease@?$ComPtr@VInputProcess@@@WRL@Microsoft@@IEAAKXZ @ 0x1800972B0 (-InternalRelease@-$ComPtr@VInputProcess@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall std::_Func_impl_no_alloc__lambda_b23d6f9d7655be589c0ae99ef9363a00__void_Microsoft::WRL::ComPtr_BamoInputSystemInternalProxy____::_Delete_this(
        __int64 *a1,
        char a2)
{
  Microsoft::WRL::ComPtr<InputProcess>::InternalRelease(a1 + 1);
  if ( a2 )
    operator delete(a1);
}
