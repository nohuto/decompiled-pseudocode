/*
 * XREFs of sub_1405BFE08 @ 0x1405BFE08
 * Callers:
 *     sub_140582D7C @ 0x140582D7C (sub_140582D7C.c)
 *     sub_1405AF3BC @ 0x1405AF3BC (sub_1405AF3BC.c)
 *     sub_1405BCBC4 @ 0x1405BCBC4 (sub_1405BCBC4.c)
 *     sub_1405BF718 @ 0x1405BF718 (sub_1405BF718.c)
 * Callees:
 *     sub_1402C1550 @ 0x1402C1550 (sub_1402C1550.c)
 *     sub_1403B7A10 @ 0x1403B7A10 (sub_1403B7A10.c)
 */

_QWORD *__fastcall sub_1405BFE08(__int64 a1, __int64 a2, ULONG_PTR a3, ULONG_PTR a4)
{
  _QWORD *result; // rax
  ULONG_PTR v5; // rbx
  ULONG_PTR v9; // rdi
  __int64 v10; // rcx
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  result = &retaddr;
  v5 = a4;
  if ( ((ULONG_PTR *)a2 == &StartContext || (ULONG_PTR *)a1 == &StartContext)
    && !_bittest((const signed __int32 *)(a2 + 4), 8u)
    && !_bittest((const signed __int32 *)(a1 + 4), 8u)
    && a4 )
  {
    do
    {
      v9 = sub_1403B7A10(a3, v5);
      result = sub_1402C1550(a3);
      v10 = *((unsigned int *)result + 2);
      if ( (ULONG_PTR *)a2 == &StartContext )
      {
        _InterlockedExchangeAdd64(&qword_140C4F040[(unsigned int)v10 + 1506], v9);
      }
      else if ( (ULONG_PTR *)a1 == &StartContext )
      {
        _InterlockedExchangeAdd64(&qword_140C4F040[v10 + 1506], -(__int64)v9);
      }
      a3 += v9;
      v5 -= v9;
    }
    while ( v5 );
  }
  return result;
}
