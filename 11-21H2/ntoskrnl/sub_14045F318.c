/*
 * XREFs of sub_14045F318 @ 0x14045F318
 * Callers:
 *     sub_1409B35D0 @ 0x1409B35D0 (sub_1409B35D0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14045F318(__int64 a1, __int64 a2, __int64 a3, __int64 a4, char a5, _QWORD *a6, _QWORD *a7)
{
  __int64 *v8; // rbx
  __int64 v9; // r10
  __int64 v10; // rcx

  v8 = *(__int64 **)(a1 + 384);
  v9 = (__int64)v8;
  if ( (unsigned __int64)v8 >= 0x7FFFFFFF0000LL )
    v9 = 0x7FFFFFFF0000LL;
  *(_QWORD *)v9 = *(_QWORD *)v9;
  v10 = *v8;
  if ( *(_WORD *)(a1 + 368) != 51 || v10 != a3 && v10 != a4 )
    return 3221225485LL;
  *(_QWORD *)(a1 + 384) = v8 + 1;
  *(_QWORD *)(a1 + 360) = v10;
  if ( a5 )
    __writemsr(0x6A7u, __readmsr(0x6A7u) + 8);
  *(_QWORD *)(a1 + 80) = a2;
  *a6 = *(_QWORD *)(a1 + 360);
  *a7 = *(_QWORD *)(a1 + 344);
  return 0LL;
}
