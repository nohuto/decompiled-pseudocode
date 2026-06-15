/*
 * XREFs of std::_Func_impl_no_alloc__lambda_1550c94524242620b0bb27e2e38687d1__void_::_Copy @ 0x18001D240
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::_Func_impl_no_alloc__lambda_1550c94524242620b0bb27e2e38687d1__void_::_Copy(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v2; // r8
  signed __int32 v3; // eax

  *a2 = off_180047FA8;
  v2 = *(_QWORD *)(a1 + 8);
  a2[1] = v2;
  if ( v2 )
  {
    do
      v3 = *(_DWORD *)(v2 + 20);
    while ( v3 != 0x7FFFFFFF && v3 != _InterlockedCompareExchange((volatile signed __int32 *)(v2 + 20), v3 + 1, v3) );
  }
  return a2;
}
