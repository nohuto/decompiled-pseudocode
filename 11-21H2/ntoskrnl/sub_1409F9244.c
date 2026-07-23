/*
 * XREFs of sub_1409F9244 @ 0x1409F9244
 * Callers:
 *     sub_1406A6990 @ 0x1406A6990 (sub_1406A6990.c)
 *     sub_140731DA0 @ 0x140731DA0 (sub_140731DA0.c)
 *     sub_1407A1CE8 @ 0x1407A1CE8 (sub_1407A1CE8.c)
 *     ObDuplicateObject @ 0x1407A1F80 (ObDuplicateObject.c)
 * Callees:
 *     sub_1406A633C @ 0x1406A633C (sub_1406A633C.c)
 *     sub_1406AC298 @ 0x1406AC298 (sub_1406AC298.c)
 *     sub_140733340 @ 0x140733340 (sub_140733340.c)
 */

__int64 __fastcall sub_1409F9244(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v5; // rbp
  volatile signed __int64 *v6; // rax
  volatile signed __int64 *v7; // rdi
  volatile signed __int64 v9; // rdx
  void *v10; // rax

  v5 = (unsigned __int8)((unsigned int)a2 >> 2);
  v6 = (volatile signed __int64 *)sub_140733340((unsigned int *)a1, a2 & 0xFFFFFFFFFFFFFC03uLL);
  v7 = v6;
  if ( !v6 )
    return 3221225473LL;
  v9 = *v6;
  if ( *v6 )
    goto LABEL_7;
  v10 = sub_1406A633C(*(_QWORD *)(a1 + 16), 0x800uLL);
  v9 = (volatile signed __int64)v10;
  if ( v10 )
  {
    if ( !_InterlockedCompareExchange64(v7, (signed __int64)v10, 0LL) )
    {
      _InterlockedIncrement((volatile signed __int32 *)(a1 + 4));
LABEL_7:
      *(_QWORD *)(v9 + 8 * v5) = *a3;
      return 0LL;
    }
    sub_1406AC298(*(_QWORD *)(a1 + 16), v10, 2048LL);
    v9 = *v7;
    if ( *v7 )
      goto LABEL_7;
  }
  return 3221225626LL;
}
