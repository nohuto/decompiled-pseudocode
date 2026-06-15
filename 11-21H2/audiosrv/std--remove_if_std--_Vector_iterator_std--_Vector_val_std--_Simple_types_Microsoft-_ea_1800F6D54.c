/*
 * XREFs of std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::WeakRef_______lambda_6721409c6d8d6be39a12e154768b61d2___ @ 0x1800F6D54
 * Callers:
 *     ?PruneStaleProcessSubmixes@CBaseStreamGroupProxy@@IEAAXXZ @ 0x1800FA130 (-PruneStaleProcessSubmixes@CBaseStreamGroupProxy@@IEAAXXZ.c)
 * Callees:
 *     _lambda_6721409c6d8d6be39a12e154768b61d2_::operator() @ 0x1800029B4 (_lambda_6721409c6d8d6be39a12e154768b61d2_--operator().c)
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x180002C20 (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 **__fastcall std::remove_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::WeakRef_______lambda_6721409c6d8d6be39a12e154768b61d2___(
        __int64 **a1,
        __int64 *a2,
        __int64 *a3)
{
  __int64 *i; // rdi
  __int64 *j; // rsi
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 **result; // rax
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  for ( i = a2; i != a3; ++i )
  {
    if ( lambda_6721409c6d8d6be39a12e154768b61d2_::operator()((__int64)a1, (__int64)i) )
      break;
  }
  if ( i != a3 )
  {
    for ( j = i + 1; j != a3; ++j )
    {
      if ( !lambda_6721409c6d8d6be39a12e154768b61d2_::operator()((__int64)a1, (__int64)j) )
      {
        v7 = 0LL;
        if ( &v10 != j )
        {
          v7 = *j;
          *j = 0LL;
        }
        v8 = *i;
        *i = v7;
        v10 = v8;
        Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(&v10);
        ++i;
      }
    }
  }
  result = a1;
  *a1 = i;
  return result;
}
