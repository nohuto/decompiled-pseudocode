/*
 * XREFs of std::_Func_impl_no_alloc__lambda_5d23040e3cc104b729db1f2fc579e0ae__void_::_Copy @ 0x180027C40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Func_impl_no_alloc__lambda_5d23040e3cc104b729db1f2fc579e0ae__void_::_Copy(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // r8
  signed __int32 v3; // eax

  *(_QWORD *)a2 = off_180048828;
  v2 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a2 + 8) = v2;
  if ( v2 )
  {
    do
      v3 = *(_DWORD *)(v2 + 20);
    while ( v3 != 0x7FFFFFFF && v3 != _InterlockedCompareExchange((volatile signed __int32 *)(v2 + 20), v3 + 1, v3) );
  }
  *(_DWORD *)(a2 + 16) = *(_DWORD *)(a1 + 16);
  *(_DWORD *)(a2 + 20) = *(_DWORD *)(a1 + 20);
  return a2;
}
