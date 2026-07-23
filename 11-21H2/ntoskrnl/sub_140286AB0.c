/*
 * XREFs of sub_140286AB0 @ 0x140286AB0
 * Callers:
 *     sub_14027F360 @ 0x14027F360 (sub_14027F360.c)
 *     sub_140283E8C @ 0x140283E8C (sub_140283E8C.c)
 * Callees:
 *     sub_14022CB60 @ 0x14022CB60 (sub_14022CB60.c)
 *     sub_140286D4C @ 0x140286D4C (sub_140286D4C.c)
 *     sub_140287180 @ 0x140287180 (sub_140287180.c)
 *     sub_1402879F8 @ 0x1402879F8 (sub_1402879F8.c)
 *     sub_140287A2C @ 0x140287A2C (sub_140287A2C.c)
 *     sub_140287B04 @ 0x140287B04 (sub_140287B04.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_140286AB0(__int64 a1, unsigned __int8 a2, _QWORD *a3, __int64 a4, int a5, __int64 a6)
{
  unsigned __int64 v8; // r12
  __int64 v9; // rbx
  __int64 v10; // rbp
  __int64 v11; // rdi
  __int64 v12; // r14
  __int64 v13; // rax
  __int64 v14; // r14
  unsigned __int64 v15; // r13
  __int64 v16; // rax
  __int64 v17; // rsi
  unsigned __int64 v18; // r13
  int v19; // r15d
  __int64 v20; // r14
  __int64 v21; // rbp
  __int64 v22; // rax
  __int64 result; // rax
  volatile LONG *v24; // rcx
  __int64 v25; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  __int64 v28; // r8
  int v29; // eax
  bool v30; // zf
  unsigned __int8 v31; // al
  struct _KPRCB *v32; // r10
  __int64 v33; // r8
  int v34; // eax
  unsigned __int8 v35; // al
  __int64 v36; // r8
  int v37; // eax

  v8 = a2;
  v9 = a1;
  if ( !*(_QWORD *)(a1 + 32) )
  {
    v24 = (volatile LONG *)(a1 + 72);
LABEL_19:
    ExReleaseSpinLockExclusiveFromDpcLevel(v24);
    if ( !dword_140D06B08 )
      goto LABEL_20;
    if ( (dword_140D06B08 & 1) == 0 )
      goto LABEL_20;
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql > 0xFu )
      goto LABEL_20;
    if ( (unsigned __int8)v8 > 0xFu )
      goto LABEL_20;
    if ( CurrentIrql < 2u )
      goto LABEL_20;
    CurrentPrcb = KeGetCurrentPrcb();
    v28 = *((_QWORD *)CurrentPrcb + 4375);
    v29 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v8 + 1));
    v30 = (v29 & *(_DWORD *)(v28 + 20)) == 0;
    *(_DWORD *)(v28 + 20) &= v29;
    if ( !v30 )
      goto LABEL_20;
LABEL_58:
    sub_140418E4C(CurrentPrcb);
LABEL_20:
    __writecr8(v8);
    return 0LL;
  }
  v10 = 0LL;
  v11 = a1 + 128;
  if ( !a3 )
  {
    v14 = 0LL;
LABEL_17:
    v17 = sub_14022CB60(a1, 1);
    v18 = *(_DWORD *)(v17 + 44) - (*(_DWORD *)(v17 + 52) & 0x3FFFFFFFu) - 1;
    goto LABEL_7;
  }
  v12 = *a3 >> 12;
  v13 = sub_140287180(a1, *a3, 1LL);
  v11 = v13;
  if ( !v13 )
  {
LABEL_34:
    v24 = (volatile LONG *)(v9 + 72);
    goto LABEL_19;
  }
  v14 = v12 - (*(unsigned int *)(v13 + 36) | ((unsigned __int64)(*(_WORD *)(v13 + 32) & 0xFFC0) << 26));
  if ( !a4
    || (v15 = (unsigned __int64)(*a3 + a4 - 1) >> 12, v16 = sub_140287180(v9, *a3 + a4 - 1, 1LL), (v17 = v16) == 0) )
  {
    a1 = v9;
    goto LABEL_17;
  }
  v18 = v15 - (*(unsigned int *)(v16 + 36) | ((unsigned __int64)(*(_WORD *)(v16 + 32) & 0xFFC0) << 26));
LABEL_7:
  if ( !*(_DWORD *)(v11 + 104) || (int)sub_140286D4C(v11, 0LL) <= 1 )
  {
    v19 = *(_DWORD *)(v11 + 44) - v14;
    if ( v11 == v17 )
    {
LABEL_30:
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v9 + 72));
      if ( !dword_140D06B08 )
        goto LABEL_20;
      if ( (dword_140D06B08 & 1) == 0 )
        goto LABEL_20;
      v35 = KeGetCurrentIrql();
      if ( v35 > 0xFu )
        goto LABEL_20;
      if ( (unsigned __int8)v8 > 0xFu )
        goto LABEL_20;
      if ( v35 < 2u )
        goto LABEL_20;
      CurrentPrcb = KeGetCurrentPrcb();
      v36 = *((_QWORD *)CurrentPrcb + 4375);
      v37 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v8 + 1));
      v30 = (v37 & *(_DWORD *)(v36 + 20)) == 0;
      *(_DWORD *)(v36 + 20) &= v37;
      if ( !v30 )
        goto LABEL_20;
      goto LABEL_58;
    }
    while ( 1 )
    {
      v11 = *(_QWORD *)(v11 + 16);
      if ( !v11 )
        goto LABEL_34;
      if ( *(_DWORD *)(v11 + 104) && (int)sub_140286D4C(v11, 0LL) > 1 )
      {
        v20 = *(_QWORD *)(v11 + 8);
        goto LABEL_10;
      }
      v19 += *(_DWORD *)(v11 + 44);
      if ( v11 == v17 )
        goto LABEL_30;
    }
  }
  v19 = 0;
  v20 = *(_QWORD *)(v11 + 8) + 8 * v14;
LABEL_10:
  if ( !*(_DWORD *)(v17 + 104) || (int)sub_140286D4C(v17, 0LL) <= 1 )
  {
    v25 = *(_QWORD *)(v11 + 16);
    if ( v25 == v17 )
      goto LABEL_23;
    do
    {
      if ( *(_DWORD *)(v25 + 104) && *(_QWORD *)(v25 + 8) )
        v10 = v25;
      v25 = *(_QWORD *)(v25 + 16);
    }
    while ( v25 != v17 );
    v17 = v10;
    if ( !v10 )
LABEL_23:
      v17 = v11;
    sub_140286D4C(v17, 0LL);
    v18 = *(_DWORD *)(v17 + 44) - (*(_DWORD *)(v17 + 52) & 0x3FFFFFFFu) - 1;
  }
  ++*(_QWORD *)(v9 + 40);
  v21 = sub_140287B04(v9, 4LL);
  sub_140287A2C(v9);
  if ( a5 )
    *(_DWORD *)(v9 + 56) |= 4u;
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v9 + 72));
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v31 = KeGetCurrentIrql();
      if ( v31 <= 0xFu && (unsigned __int8)v8 <= 0xFu && v31 >= 2u )
      {
        v32 = KeGetCurrentPrcb();
        v33 = *((_QWORD *)v32 + 4375);
        v34 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v8 + 1));
        v30 = (v34 & *(_DWORD *)(v33 + 20)) == 0;
        *(_DWORD *)(v33 + 20) &= v34;
        if ( v30 )
          sub_140418E4C(v32);
      }
    }
  }
  __writecr8(v8);
  sub_1402879F8(v21);
  v22 = *(_QWORD *)(v17 + 8);
  *(_QWORD *)a6 = v9;
  *(_QWORD *)(a6 + 8) = v20;
  *(_QWORD *)(a6 + 16) = v22 + 8 * v18;
  result = 259LL;
  *(_QWORD *)(a6 + 24) = v11;
  *(_QWORD *)(a6 + 32) = v17;
  *(_DWORD *)(a6 + 40) = v19;
  return result;
}
