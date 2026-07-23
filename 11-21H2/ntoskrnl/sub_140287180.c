/*
 * XREFs of sub_140287180 @ 0x140287180
 * Callers:
 *     sub_14026CF88 @ 0x14026CF88 (sub_14026CF88.c)
 *     sub_140274860 @ 0x140274860 (sub_140274860.c)
 *     sub_140286AB0 @ 0x140286AB0 (sub_140286AB0.c)
 *     sub_140286F90 @ 0x140286F90 (sub_140286F90.c)
 *     sub_1402ED77C @ 0x1402ED77C (sub_1402ED77C.c)
 *     sub_140319600 @ 0x140319600 (sub_140319600.c)
 *     sub_1405C48E0 @ 0x1405C48E0 (sub_1405C48E0.c)
 *     sub_1406FB4D0 @ 0x1406FB4D0 (sub_1406FB4D0.c)
 *     sub_1407BD420 @ 0x1407BD420 (sub_1407BD420.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1403127A0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x140366580 (ExAcquireSpinLockShared.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     memset @ 0x140435E00 (memset.c)
 */

_QWORD *__fastcall sub_140287180(__int64 a1, unsigned __int64 a2, int a3)
{
  KIRQL v6; // si
  __int64 v7; // rdi
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // r9
  unsigned __int64 v11; // r8
  bool v13; // cf
  _QWORD *v14; // r9
  unsigned int v15; // edx
  unsigned __int16 v16; // cx
  unsigned __int64 v17; // r10
  unsigned __int64 v18; // r8
  unsigned __int64 v19; // rdx
  _QWORD *v20; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r11
  __int64 v23; // r9
  int v24; // edx
  bool v25; // zf
  unsigned __int8 v26; // al
  struct _KPRCB *v27; // r11
  __int64 v28; // r9
  int v29; // edx
  unsigned __int8 v30; // al
  struct _KPRCB *v31; // r9
  __int64 v32; // r8
  int v33; // eax
  _DWORD v34[38]; // [rsp+20h] [rbp-A8h] BYREF

  memset(v34, 0, sizeof(v34));
  if ( a2 >= 0x3FFFFFFFFFF000LL )
    return 0LL;
  if ( a3 )
    v6 = 17;
  else
    v6 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(a1 + 72));
  v7 = *(_QWORD *)(a1 + 296);
  v8 = a2 >> 12;
  v9 = HIDWORD(v8);
  v10 = *(unsigned int *)(v7 + 36) | ((unsigned __int64)(*(_WORD *)(v7 + 32) & 0xFFC0) << 26);
  v11 = v10 + *(unsigned int *)(v7 + 40);
  if ( *(_WORD *)(v7 + 34) < 0x10u )
    --v11;
  if ( v8 >= v10 && v8 <= v11 )
  {
    if ( v6 != 17 )
    {
      ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(a1 + 72));
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( CurrentIrql <= 0xFu && v6 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            v23 = *((_QWORD *)CurrentPrcb + 4375);
            v24 = ~(unsigned __int16)(-1LL << (v6 + 1));
            v25 = (v24 & *(_DWORD *)(v23 + 20)) == 0;
            *(_DWORD *)(v23 + 20) &= v24;
            if ( v25 )
              sub_140418E4C(CurrentPrcb);
          }
        }
      }
      __writecr8(v6);
    }
    return (_QWORD *)v7;
  }
  v13 = v8 < v10;
  v14 = *(_QWORD **)(a1 + 280);
  v15 = v8;
  if ( v13 )
    LOWORD(v9) = WORD2(v8);
  v34[9] = v8;
  if ( v13 )
    v15 = v8;
  v16 = v34[8] & 0x3F | ((_WORD)v9 << 6);
  LOWORD(v34[8]) = v16;
  if ( !v14 )
  {
LABEL_18:
    if ( v6 != 17 )
    {
      ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(a1 + 72));
      if ( dword_140D06B08 )
      {
        if ( (dword_140D06B08 & 1) != 0 )
        {
          v30 = KeGetCurrentIrql();
          if ( v30 <= 0xFu && v6 <= 0xFu && v30 >= 2u )
          {
            v31 = KeGetCurrentPrcb();
            v32 = *((_QWORD *)v31 + 4375);
            v33 = ~(unsigned __int16)(-1LL << (v6 + 1));
            v25 = (v33 & *(_DWORD *)(v32 + 20)) == 0;
            *(_DWORD *)(v32 + 20) &= v33;
            if ( v25 )
              sub_140418E4C(v31);
          }
        }
      }
      __writecr8(v6);
    }
    return 0LL;
  }
  v17 = v15 | ((unsigned __int64)(v16 & 0xFFC0) << 26);
  while ( 1 )
  {
    v18 = *((unsigned int *)v14 - 5) | ((unsigned __int64)(*(_WORD *)(v14 - 3) & 0xFFC0) << 26);
    v19 = v18 + *((unsigned int *)v14 - 4);
    if ( *((_WORD *)v14 - 11) < 0x10u )
      --v19;
    if ( v17 > v19 )
    {
      v14 = (_QWORD *)v14[1];
      goto LABEL_29;
    }
    if ( v17 >= v18 )
      break;
    v14 = (_QWORD *)*v14;
LABEL_29:
    if ( !v14 )
      goto LABEL_18;
  }
  v20 = v14 - 7;
  *(_QWORD *)(a1 + 296) = v14 - 7;
  if ( v6 != 17 )
  {
    ExReleaseSpinLockSharedFromDpcLevel((PEX_SPIN_LOCK)(a1 + 72));
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v26 = KeGetCurrentIrql();
        if ( v26 <= 0xFu && v6 <= 0xFu && v26 >= 2u )
        {
          v27 = KeGetCurrentPrcb();
          v28 = *((_QWORD *)v27 + 4375);
          v29 = ~(unsigned __int16)(-1LL << (v6 + 1));
          v25 = (v29 & *(_DWORD *)(v28 + 20)) == 0;
          *(_DWORD *)(v28 + 20) &= v29;
          if ( v25 )
            sub_140418E4C(v27);
        }
      }
    }
    __writecr8(v6);
  }
  return v20;
}
