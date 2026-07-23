/*
 * XREFs of MmAllocateMemoryRanges @ 0x14096AB50
 * Callers:
 *     sub_14093BDD4 @ 0x14093BDD4 (sub_14093BDD4.c)
 * Callees:
 *     sub_14025C1B4 @ 0x14025C1B4 (sub_14025C1B4.c)
 *     sub_140264ED0 @ 0x140264ED0 (sub_140264ED0.c)
 *     sub_14030B3F0 @ 0x14030B3F0 (sub_14030B3F0.c)
 *     sub_1403606C4 @ 0x1403606C4 (sub_1403606C4.c)
 *     sub_14096A740 @ 0x14096A740 (sub_14096A740.c)
 *     sub_14096AA38 @ 0x14096AA38 (sub_14096AA38.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MmAllocateMemoryRanges(ULONG_PTR BugCheckParameter2)
{
  bool v1; // zf
  unsigned int v3; // r12d
  int v4; // eax
  unsigned int v5; // edi
  int v6; // r12d
  ULONG_PTR *v7; // rax
  int v8; // r15d
  __int64 v9; // r13
  unsigned int v10; // esi
  int v11; // eax
  int v12; // ebx
  __int128 v14; // [rsp+20h] [rbp-38h] BYREF
  PVOID P; // [rsp+30h] [rbp-28h]
  __int64 v16[4]; // [rsp+38h] [rbp-20h] BYREF
  char v17; // [rsp+A0h] [rbp+48h] BYREF
  unsigned __int64 v18; // [rsp+A8h] [rbp+50h] BYREF
  int v19; // [rsp+B0h] [rbp+58h] BYREF
  ULONG_PTR *v20; // [rsp+B8h] [rbp+60h]

  v17 = 0;
  v1 = *(_DWORD *)BugCheckParameter2 == 1;
  P = 0LL;
  v14 = 0LL;
  if ( !v1 )
    return 3221225485LL;
  v3 = *(_DWORD *)(BugCheckParameter2 + 4);
  if ( v3 >= 8 || !*(_QWORD *)(BugCheckParameter2 + 16) )
    return 3221225485LL;
  v4 = *(_DWORD *)(BugCheckParameter2 + 32);
  if ( v4 >= 0 )
    LODWORD(v18) = 1;
  else
    LODWORD(v18) = (unsigned __int16)word_140D05000;
  v5 = v4 & 0x7FFFFFFF;
  if ( v4 >= 0 )
    v5 = v4;
  if ( v5 >= (unsigned __int16)word_140D05000 )
    return 3221225485LL;
  if ( KeGetCurrentIrql() )
    return 3221225485LL;
  if ( (v3 & 1) == 0 )
    return 3221225485LL;
  if ( *(_QWORD *)(BugCheckParameter2 + 24) != 0x40000000LL )
    return 3221225485LL;
  v6 = (v3 >> 1) & 1;
  v7 = sub_140264ED0(*(ULONG_PTR ***)(BugCheckParameter2 + 8), 0LL, &v17);
  v20 = v7;
  if ( !v7 )
    return 3221225485LL;
  v19 = 0;
  v8 = 0;
  v9 = 0LL;
  if ( !*(_QWORD *)(BugCheckParameter2 + 16) )
    goto LABEL_30;
  v10 = v5;
  while ( 1 )
  {
    v11 = sub_14025C1B4((__int64)v7, v10, v6, 0LL);
    v12 = v11;
    if ( (*(_QWORD *)&v11 & 0x3FFFFFLL) != 0 )
      break;
    LODWORD(v18) = v18 - 1;
    if ( !(_DWORD)v18 )
    {
      v8 = -1073741670;
      goto LABEL_25;
    }
    v10 = sub_14030B3F0(v5, &v19);
    --v9;
LABEL_20:
    if ( (unsigned __int64)++v9 >= *(_QWORD *)(BugCheckParameter2 + 16) )
      goto LABEL_29;
    v7 = v20;
  }
  v8 = sub_14096A740(BugCheckParameter2, (__int64 *)&v14, v11);
  if ( v8 >= 0 )
    goto LABEL_20;
  v16[1] = 0LL;
  v16[0] = 1LL;
  v18 = (unsigned __int64)(v12 & 0x3FFFFF) << 30;
  v16[2] = (__int64)&v18;
  sub_14096AA38(BugCheckParameter2, v16, 0);
LABEL_25:
  if ( (*(_DWORD *)(BugCheckParameter2 + 4) & 4) == 0 )
  {
    sub_14096AA38(BugCheckParameter2, (__int64 *)&v14, 0);
LABEL_29:
    v7 = v20;
    goto LABEL_30;
  }
  v7 = v20;
  if ( (_QWORD)v14 )
    v8 = 0;
LABEL_30:
  if ( v17 )
    sub_1403606C4(v7[22]);
  if ( v8 >= 0 )
  {
    *(_QWORD *)(BugCheckParameter2 + 48) = P;
    *(_QWORD *)(BugCheckParameter2 + 40) = v14;
    return 0LL;
  }
  else
  {
    if ( P )
      ExFreePoolWithTag(P, 0);
    return 3221225626LL;
  }
}
