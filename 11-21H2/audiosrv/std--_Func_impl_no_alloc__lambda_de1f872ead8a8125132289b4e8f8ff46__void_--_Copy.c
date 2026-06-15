/*
 * XREFs of std::_Func_impl_no_alloc__lambda_de1f872ead8a8125132289b4e8f8ff46__void_::_Copy @ 0x18005C660
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::_Func_impl_no_alloc__lambda_de1f872ead8a8125132289b4e8f8ff46__void_::_Copy(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v2; // rax

  *a2 = off_18016B350;
  a2[1] = 0LL;
  a2[2] = 0LL;
  v2 = *(_QWORD *)(a1 + 16);
  if ( v2 )
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 8));
  a2[1] = *(_QWORD *)(a1 + 8);
  a2[2] = *(_QWORD *)(a1 + 16);
  return a2;
}
