/*
 * XREFs of sub_140947A8C @ 0x140947A8C
 * Callers:
 *     sub_1402DD320 @ 0x1402DD320 (sub_1402DD320.c)
 * Callees:
 *     sub_140660534 @ 0x140660534 (sub_140660534.c)
 *     sub_140765114 @ 0x140765114 (sub_140765114.c)
 *     sub_140767220 @ 0x140767220 (sub_140767220.c)
 *     sub_14076FB70 @ 0x14076FB70 (sub_14076FB70.c)
 *     sub_140779A50 @ 0x140779A50 (sub_140779A50.c)
 *     sub_140779DC4 @ 0x140779DC4 (sub_140779DC4.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_140947A8C(__int64 a1)
{
  __int64 v1; // rax
  _DWORD *v2; // rbp
  __int64 v3; // rdi
  unsigned int v4; // r14d
  unsigned int v5; // edx
  unsigned int v6; // r9d
  int v7; // esi
  int v8; // ecx
  unsigned int v9; // ebx
  int v10; // eax
  int v11; // ecx
  int v12; // edx
  PVOID P; // [rsp+40h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 16);
  v2 = *(_DWORD **)(a1 + 32);
  P = 0LL;
  v3 = *(_QWORD *)(*(_QWORD *)(v1 + 312) + 40LL);
  if ( (unsigned int)(*(_DWORD *)(v3 + 300) - 789) <= 1 )
  {
    v4 = -1073741738;
  }
  else
  {
    v4 = 0;
    sub_140779DC4((__int64 **)&P);
    v5 = v2[5];
    v6 = v2[6];
    v7 = (v5 >> 18) & 1 | 4;
    if ( (v5 & 0x100) == 0 )
      v7 = (v2[5] >> 18) & 1;
    v8 = (v2[5] >> 1) & 0x4000 | 0x2000;
    if ( (v5 & 0x400) == 0 )
      v8 = (v2[5] >> 1) & 0x4000;
    v9 = v8;
    if ( v6 == 14 )
    {
      v10 = *(_DWORD *)(v3 + 300);
      if ( v10 != 772 && v10 != 771 && v10 != 788 )
        v9 = v8 & 0xFFFFDFFF;
      v7 |= 4u;
    }
    if ( !v9 )
    {
      v12 = 0;
      goto LABEL_19;
    }
    v11 = *(_DWORD *)(v3 + 300);
    if ( ((v11 - 771) & 0xFFFFFFEE) == 0
      && v11 != 787
      && ((v9 & 0x4000) != 0 || v6 < 0x3A && !(unsigned int)sub_140660534(v3, v6)) )
    {
      sub_140765114(v3, v6, v2[8]);
      v12 = v9;
LABEL_19:
      sub_14076FB70(v3, v12);
      sub_140767220(v3, v7);
      goto LABEL_23;
    }
    v4 = -1073741584;
  }
LABEL_23:
  if ( (v2[7] & 1) != 0 )
    ExFreePoolWithTag(v2, 0x55706E50u);
  if ( P )
    sub_140779A50((PVOID **)P);
  return v4;
}
