/*
 * XREFs of sub_14023814C @ 0x14023814C
 * Callers:
 *     sub_1402380FC @ 0x1402380FC (sub_1402380FC.c)
 *     sub_1403817C4 @ 0x1403817C4 (sub_1403817C4.c)
 *     sub_1405F8978 @ 0x1405F8978 (sub_1405F8978.c)
 *     sub_1405FA010 @ 0x1405FA010 (sub_1405FA010.c)
 * Callees:
 *     sub_1403790A8 @ 0x1403790A8 (sub_1403790A8.c)
 *     sub_140379950 @ 0x140379950 (sub_140379950.c)
 *     sub_1403812F8 @ 0x1403812F8 (sub_1403812F8.c)
 *     sub_14038190C @ 0x14038190C (sub_14038190C.c)
 *     sub_14038FC10 @ 0x14038FC10 (sub_14038FC10.c)
 *     sub_14039050C @ 0x14039050C (sub_14039050C.c)
 */

__int64 __fastcall sub_14023814C(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 v3; // rsi
  unsigned int *v5; // rdi
  __int64 v6; // r14
  __int64 v7; // r15
  unsigned int v8; // ebp
  __int64 result; // rax
  __int64 v10; // r12
  __int64 v11; // rax

  v3 = a3;
  v5 = (unsigned int *)(a1 + 16 * (a2 + 78LL));
  v6 = *v5;
  if ( a3 == -1 )
  {
    v7 = 0LL;
    v8 = -1;
LABEL_3:
    *v5 = -1;
    if ( (_DWORD)v3 != (_DWORD)v6 && (_DWORD)v6 != -1 )
    {
      if ( !*(_BYTE *)(a1 + 776) )
        sub_140379950(a1, (unsigned int)v6);
      if ( (*(_WORD *)(*(_QWORD *)(a1 + 1032) + 2 * v6) & 0x1FFF) != 0 )
        sub_14038190C(a1, (unsigned int)v6, 0LL, *(_WORD *)(*(_QWORD *)(a1 + 1032) + 2 * v6) & 0x1FFF);
      else
        sub_14039050C(a1, (unsigned int)v6);
    }
    if ( (_DWORD)v3 != -1 )
    {
      if ( v8 )
        sub_14038190C(a1, (unsigned int)v3, v8, 0LL);
      if ( !*(_BYTE *)(a1 + 776) )
        sub_1403812F8(*(_QWORD *)(a1 + 1912), 3LL, 5000LL, 4294967294LL);
    }
    *v5 = v3;
    result = 0LL;
    v5[1] = v8;
    *((_QWORD *)v5 + 1) = v7;
    return result;
  }
  v10 = *(_QWORD *)(a1 + 1032);
  v11 = sub_1403790A8(a1, a3, a2, 0LL);
  v7 = v11;
  if ( !v11 )
    return 3221225514LL;
  if ( v11 == -1 )
    return 3221226029LL;
  v8 = *(_WORD *)(v10 + 2 * v3) & 0x1FFF;
  if ( (*(_WORD *)(v10 + 2 * v3) & 0x1FFF) == 0 )
    goto LABEL_3;
  result = sub_14038FC10(a1, v11, v3, v11, v3, 0);
  if ( (int)result >= 0 )
    goto LABEL_3;
  return result;
}
