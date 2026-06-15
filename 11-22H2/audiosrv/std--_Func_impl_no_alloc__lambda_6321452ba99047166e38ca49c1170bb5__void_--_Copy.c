/*
 * XREFs of std::_Func_impl_no_alloc__lambda_6321452ba99047166e38ca49c1170bb5__void_::_Copy @ 0x1800DD9C0
 * Callers:
 *     <none>
 * Callees:
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18003F104 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 */

__int64 __fastcall std::_Func_impl_no_alloc__lambda_6321452ba99047166e38ca49c1170bb5__void_::_Copy(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // r10
  __int64 v3; // rcx

  v2 = a2;
  *(_QWORD *)a2 = off_180170070;
  *(_QWORD *)(a2 + 8) = *(_QWORD *)(a1 + 8);
  v3 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(a2 + 16) = v3;
  if ( v3 )
    Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(v3 + 12), (volatile int *)a2);
  return v2;
}
