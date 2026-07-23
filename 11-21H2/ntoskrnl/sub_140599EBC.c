/*
 * XREFs of sub_140599EBC @ 0x140599EBC
 * Callers:
 *     sub_1402BE8E0 @ 0x1402BE8E0 (sub_1402BE8E0.c)
 *     sub_140325B30 @ 0x140325B30 (sub_140325B30.c)
 *     sub_140328690 @ 0x140328690 (sub_140328690.c)
 * Callees:
 *     sub_140239060 @ 0x140239060 (sub_140239060.c)
 *     sub_140268408 @ 0x140268408 (sub_140268408.c)
 *     sub_14026845C @ 0x14026845C (sub_14026845C.c)
 *     sub_1402738F0 @ 0x1402738F0 (sub_1402738F0.c)
 *     sub_14027B080 @ 0x14027B080 (sub_14027B080.c)
 *     sub_1402BF9C0 @ 0x1402BF9C0 (sub_1402BF9C0.c)
 *     sub_1402E7704 @ 0x1402E7704 (sub_1402E7704.c)
 *     sub_1402E89B0 @ 0x1402E89B0 (sub_1402E89B0.c)
 *     sub_140315D60 @ 0x140315D60 (sub_140315D60.c)
 *     sub_1403250B0 @ 0x1403250B0 (sub_1403250B0.c)
 *     sub_140326870 @ 0x140326870 (sub_140326870.c)
 *     sub_140339370 @ 0x140339370 (sub_140339370.c)
 *     sub_140339C20 @ 0x140339C20 (sub_140339C20.c)
 *     sub_1403941B0 @ 0x1403941B0 (sub_1403941B0.c)
 *     sub_1403AD018 @ 0x1403AD018 (sub_1403AD018.c)
 *     sub_1405B3FA4 @ 0x1405B3FA4 (sub_1405B3FA4.c)
 */

ULONG_PTR __fastcall sub_140599EBC(__int64 a1, unsigned __int64 a2, unsigned __int64 *a3, ULONG_PTR a4)
{
  __int64 v6; // r9
  __int64 v9; // r15
  __int64 v10; // rax
  int v11; // eax
  char *v12; // rcx
  int v13; // edx
  signed __int32 v14; // ecx
  unsigned int v15; // r12d
  unsigned int v16; // r14d
  __int64 v17; // rbx
  __int64 v18; // rax
  unsigned __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rbx
  __int64 v25; // rbx
  __int128 v26; // [rsp+20h] [rbp-38h] BYREF
  __int64 **v27; // [rsp+60h] [rbp+8h] BYREF

  v27 = 0LL;
  v26 = 0LL;
  v6 = 0LL;
  v9 = **(_QWORD **)(*(_QWORD *)(qword_140C51F48 + 8 * ((*(_QWORD *)(a4 + 40) >> 43) & 0x3FFLL)) + 16624LL);
  if ( *(__int64 *)(a4 + 40) < 0 )
  {
    v10 = *(_QWORD *)(a4 + 16);
    if ( (v10 & 0x400) != 0 )
    {
      if ( qword_140C50780 && (v10 & 0x10) == 0 )
        v10 &= ~qword_140C50780;
      v6 = *(_QWORD *)(v10 >> 16);
    }
  }
  if ( a1 )
  {
    v11 = sub_140339370(a1, v6, &v27);
    v12 = *(char **)(a1 + 56);
    v13 = v11;
  }
  else
  {
    v13 = (*(_DWORD *)(v6 + 56) >> 20) & 0x7F;
    v12 = 0LL;
  }
  sub_140339C20(v12, v13, (__int64)&v26);
  v14 = _InterlockedExchangeAdd((volatile signed __int32 *)v26, 1u);
  v15 = HIDWORD(v26) | v14 & DWORD2(v26);
  v16 = 9;
  if ( (unsigned int)sub_14027B080(a2) != 12 )
    v16 = 1;
  v17 = sub_1403250B0(v9, v15, v16);
  if ( v17 != -1 )
    goto LABEL_26;
  v18 = *(_QWORD *)(v9 + 16896);
  v19 = v18 - 1;
  if ( !v18 )
    v19 = 0LL;
  if ( sub_1403AD018(v9, v19, v16) )
  {
    _InterlockedAnd64((volatile signed __int64 *)(a4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v17 = sub_1403250B0(v20, v15, v16 & 0xFFFFFFFE);
    if ( v17 == -1 )
      return 0LL;
    if ( (unsigned __int64)a3 < 0xFFFFF68000000000uLL || (unsigned __int64)a3 > 0xFFFFF6FFFFFFFFFFuLL )
      v21 = sub_1402738F0(a3, 2LL);
    else
      v21 = sub_140315D60((ULONG_PTR)a3, 0LL, 1);
    a4 = v21;
    if ( !v21 )
    {
      v22 = 48 * v17 - 0x220000000000LL;
LABEL_30:
      sub_140268408(v22);
      return 0LL;
    }
    if ( (*(_DWORD *)(*(_QWORD *)(qword_140C51F48 + 8 * ((*(_QWORD *)(v21 + 40) >> 43) & 0x3FFLL)) + 4LL) & 0x100) == 0 )
    {
      v23 = 48 * v17 - 0x220000000000LL;
      sub_140239060(v23);
      sub_14026845C(v23, 0LL);
      _InterlockedAnd64((volatile signed __int64 *)(v23 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      return a4;
    }
LABEL_26:
    v25 = 48 * v17 - 0x220000000000LL;
    if ( (sub_140326870(a4, 4) & 3) == 0 && *(char *)(a4 + 35) >= 0 )
    {
      sub_140239060(v25);
      sub_1402E7704(a4, v25, 6, 0LL);
      *(_QWORD *)(a4 + 16) = 0LL;
      sub_1402E89B0((unsigned __int64 *)(a4 + 16));
      sub_14026845C(a4, 0LL);
      _InterlockedAnd64((volatile signed __int64 *)(a4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      sub_1402BF9C0(v25, 4u);
      return v25;
    }
    sub_1403941B0(a4, 0);
    _InterlockedAnd64((volatile signed __int64 *)(a4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v22 = v25;
    goto LABEL_30;
  }
  sub_1405B3FA4(a4);
  sub_14026845C(a4, 0LL);
  _InterlockedAnd64((volatile signed __int64 *)(a4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return 0LL;
}
