/*
 * XREFs of sub_140396D30 @ 0x140396D30
 * Callers:
 *     <none>
 * Callees:
 *     sub_140264BD8 @ 0x140264BD8 (sub_140264BD8.c)
 *     sub_140264C90 @ 0x140264C90 (sub_140264C90.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403105C0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     sub_140347C10 @ 0x140347C10 (sub_140347C10.c)
 *     sub_1403606C4 @ 0x1403606C4 (sub_1403606C4.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14045C7CC @ 0x14045C7CC (sub_14045C7CC.c)
 *     sub_14045CDD6 @ 0x14045CDD6 (sub_14045CDD6.c)
 */

void __fastcall sub_140396D30(ULONG_PTR BugCheckParameter2)
{
  __int64 v1; // r12
  __int64 v2; // r13
  char v4; // si
  unsigned __int64 v5; // r14
  unsigned __int8 CurrentIrql; // di
  char v7; // r8
  unsigned __int64 v8; // rbp
  __int64 v9; // r9
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // r13
  unsigned int v12; // r12d
  unsigned __int64 v13; // r9
  unsigned __int64 v14; // rbp
  unsigned int v15; // r15d
  __int64 v16; // rsi
  unsigned __int64 v17; // r11
  __int64 v18; // r8
  __int64 v19; // rax
  __int64 v20; // r11
  int v21; // r8d
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // r12
  __int64 v24; // rax
  unsigned __int8 v25; // al
  struct _KPRCB *CurrentPrcb; // r11
  __int64 v27; // r10
  int v28; // eax
  bool v29; // zf
  int v30; // r9d
  __int64 v31; // rbp
  __int64 v32; // r9
  unsigned __int8 v33; // si
  unsigned __int8 v34; // al
  struct _KPRCB *v35; // r9
  __int64 v36; // r8
  int v37; // eax
  unsigned __int64 v38; // [rsp+30h] [rbp-58h]
  char v39; // [rsp+90h] [rbp+8h]
  __int64 v40; // [rsp+98h] [rbp+10h]
  __int64 v41; // [rsp+A0h] [rbp+18h]

  v1 = *(_QWORD *)(BugCheckParameter2 + 22616);
  v2 = 0LL;
  v41 = v1;
  v4 = 8;
  v5 = 0xCDDE9462EC9DBE7FuLL * ((__int64)(BugCheckParameter2 - *(_QWORD *)(v1 + 16)) >> 6);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
  {
    v9 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
    *(_DWORD *)(v9 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
  }
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(BugCheckParameter2 + 22848));
  v7 = *(_BYTE *)(BugCheckParameter2 + 3251);
  *(_BYTE *)(BugCheckParameter2 + 3249) = 2;
  v38 = *(_QWORD *)(BugCheckParameter2 + 22608);
  v39 = v7;
  v8 = v38 / 0xC8;
  if ( v38 / 0xC8 >= (-(__int64)(v7 != 0) & 0xFFFFFFFFFFFFE100uLL) + 0x2000 )
  {
    v10 = sub_140264C90(BugCheckParameter2, 4u, 2);
    v11 = v10;
    if ( v10 < v8 )
    {
      v12 = dword_140D05004;
      v13 = 0LL;
      v14 = v8 - v10;
      v40 = 0LL;
      v15 = 0;
      if ( dword_140D05004 )
      {
        v16 = 0LL;
        do
          v16 += sub_140264BD8(BugCheckParameter2, v15++, 0);
        while ( v15 < v12 );
        v40 = v16;
        v4 = 8;
        v13 = v40;
      }
      if ( v13 >= v14 )
      {
        LODWORD(v23) = v40;
      }
      else
      {
        if ( v11 >= 0x400 )
          goto LABEL_25;
        v17 = 0LL;
        v18 = 0LL;
        if ( v12 )
        {
          do
          {
            v19 = sub_14045C7CC(v41, (unsigned int)v5, v18, v13);
            v17 = v19 + v20;
            v18 = (unsigned int)(v21 + 1);
          }
          while ( (unsigned int)v18 < v12 );
          v13 = v40;
        }
        v22 = v38 < 0x5000A ? 0x8000LL : v38 / 0xA;
        if ( v17 <= v22 || (v23 = v13 + (v17 - v22) / 0xC8, v23 < v14) )
        {
LABEL_25:
          v1 = v41;
          goto LABEL_26;
        }
      }
      *(_BYTE *)(BugCheckParameter2 + 3251) = 0;
      v24 = sub_140347C10(BugCheckParameter2, 0LL);
      v2 = v24;
      if ( v24 )
        *(_BYTE *)(v24 + 18) = 1;
      ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(BugCheckParameter2 + 22848));
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          v25 = KeGetCurrentIrql();
          if ( v25 <= 0xFu && CurrentIrql <= 0xFu && v25 >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v27 = *((_QWORD *)CurrentPrcb + 4375);
            v28 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
            v29 = (v28 & *(_DWORD *)(v27 + 20)) == 0;
            *(_DWORD *)(v27 + 20) &= v28;
            if ( v29 )
              sub_140418E4C(CurrentPrcb);
          }
        }
      }
      __writecr8(CurrentIrql);
      v30 = v23;
      v1 = v41;
      v31 = sub_14045CDD6(v41, v5, 2, v30, 0);
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( dword_140D06B08 && (dword_140D06B08 & 1) != 0 && CurrentIrql <= 0xFu )
      {
        v32 = *((_QWORD *)KeGetCurrentPrcb() + 4375);
        *(_DWORD *)(v32 + 20) |= (-1 << (CurrentIrql + 1)) & 4;
      }
      ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(BugCheckParameter2 + 22848));
      if ( !v31 )
      {
        if ( v39 )
          *(_BYTE *)(BugCheckParameter2 + 3251) = 1;
        v33 = *(_BYTE *)(BugCheckParameter2 + 3250);
        if ( v33 >= 0x80u )
          v4 = -1;
        else
          v4 = 2 * v33;
      }
      goto LABEL_3;
    }
LABEL_26:
    v2 = 0LL;
  }
LABEL_3:
  *(_BYTE *)(BugCheckParameter2 + 3250) = v4;
  *(_BYTE *)(BugCheckParameter2 + 3248) = v4;
  *(_BYTE *)(BugCheckParameter2 + 3249) = 0;
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(BugCheckParameter2 + 22848));
  if ( dword_140D06B08 )
  {
    if ( (dword_140D06B08 & 1) != 0 )
    {
      v34 = KeGetCurrentIrql();
      if ( v34 <= 0xFu && CurrentIrql <= 0xFu && v34 >= 2u )
      {
        v35 = KeGetCurrentPrcb();
        v36 = *((_QWORD *)v35 + 4375);
        v37 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v29 = (v37 & *(_DWORD *)(v36 + 20)) == 0;
        *(_DWORD *)(v36 + 20) &= v37;
        if ( v29 )
          sub_140418E4C(v35);
      }
    }
  }
  __writecr8(CurrentIrql);
  if ( v2 )
    sub_1402AFC00(BugCheckParameter2);
  sub_1403606C4(*(_QWORD *)(v1 + 176));
}
