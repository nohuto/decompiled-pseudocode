/*
 * XREFs of sub_14062908C @ 0x14062908C
 * Callers:
 *     sub_1409D8E00 @ 0x1409D8E00 (sub_1409D8E00.c)
 * Callees:
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1403127A0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 *     sub_14045F804 @ 0x14045F804 (sub_14045F804.c)
 *     sub_140629628 @ 0x140629628 (sub_140629628.c)
 *     sub_1406297E0 @ 0x1406297E0 (sub_1406297E0.c)
 *     sub_14062B664 @ 0x14062B664 (sub_14062B664.c)
 *     sub_1409D9B98 @ 0x1409D9B98 (sub_1409D9B98.c)
 */

__int64 __fastcall sub_14062908C(
        PEX_SPIN_LOCK SpinLock,
        unsigned __int64 a2,
        int a3,
        int a4,
        unsigned int a5,
        char a6,
        int a7,
        __int64 a8)
{
  int v8; // ebx
  __int64 v9; // rbp
  int v12; // ebx
  __int64 v13; // rsi
  int v14; // r15d
  __int64 v15; // rcx
  unsigned __int64 v16; // r13
  unsigned __int64 v17; // r8
  unsigned __int64 v18; // rdx
  unsigned __int8 v19; // al
  struct _KPRCB *v20; // r10
  __int64 v21; // r9
  int v22; // eax
  bool v23; // zf
  __int64 *v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v29; // r8
  int v30; // eax

  v8 = a4;
  LODWORD(v9) = a3;
  while ( 1 )
  {
    sub_140629628(SpinLock, a2, (unsigned int)v9);
    v12 = sub_1409D9B98(a2, v9, v8, a5, a6, a7);
    if ( v12 < 0 )
      break;
    v13 = sub_14045F804(SpinLock);
    if ( *((_QWORD *)SpinLock + 9) != a8 )
    {
      v12 = -1073741558;
LABEL_30:
      if ( v13 != -1 )
      {
        ExReleaseSpinLockSharedFromDpcLevel(SpinLock);
        if ( dword_140D06B08 )
        {
          if ( (dword_140D06B08 & 1) != 0 )
          {
            CurrentIrql = KeGetCurrentIrql();
            if ( CurrentIrql <= 0xFu && (unsigned __int8)v13 <= 0xFu && CurrentIrql >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              v29 = *((_QWORD *)CurrentPrcb + 4375);
              v30 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v13 + 1));
              v23 = (v30 & *(_DWORD *)(v29 + 20)) == 0;
              *(_DWORD *)(v29 + 20) &= v30;
              if ( v23 )
                sub_140418E4C((__int64)CurrentPrcb);
            }
          }
        }
        __writecr8((unsigned __int8)v13);
      }
      break;
    }
    v14 = 0;
    v15 = 48LL * (unsigned int)v9;
    v16 = v15 + a2;
    if ( a2 < v15 + a2 )
    {
      v17 = a2 + 32;
      v18 = (v15 - 1) / 0x30uLL + 1;
      do
      {
        if ( _bittest64((const signed __int64 *)(v17 - 8), 0x34u) || (*(_BYTE *)(v17 + 7) & 1) != 0 )
        {
          *(_QWORD *)v17 |= 0x80000000000000uLL;
          ++v14;
        }
        v17 += 48LL;
        --v18;
      }
      while ( v18 );
    }
    if ( v14 != (_DWORD)v9 )
    {
      v12 = sub_14062B664((_DWORD)SpinLock, a2, v9, a4, (a5 >> 5) & 1);
      if ( v12 < 0 )
        goto LABEL_30;
    }
    ExReleaseSpinLockSharedFromDpcLevel(SpinLock);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v19 = KeGetCurrentIrql();
        if ( v19 <= 0xFu && (unsigned __int8)v13 <= 0xFu && v19 >= 2u )
        {
          v20 = KeGetCurrentPrcb();
          v21 = *((_QWORD *)v20 + 4375);
          v22 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v13 + 1));
          v23 = (v22 & *(_DWORD *)(v21 + 20)) == 0;
          *(_DWORD *)(v21 + 20) &= v22;
          if ( v23 )
            sub_140418E4C((__int64)v20);
        }
      }
    }
    __writecr8((unsigned __int8)v13);
    sub_1406297E0(SpinLock, a2, (unsigned int)v9);
    if ( v14 )
    {
      v9 = 0LL;
      if ( a2 < v16 )
      {
        v24 = (__int64 *)(a2 + 32);
        do
        {
          v25 = *v24;
          if ( (*v24 & 0x80000000000000LL) != 0 )
          {
            if ( (v25 & 0x100000000000000LL) == 0 )
            {
              *(v24 - 1) &= ~0x10000000000000uLL;
              *v24 = v25 & 0xFFFFFFFFFFFFFLL;
              v26 = 6 * v9;
              v9 = (unsigned int)(v9 + 1);
              *(_OWORD *)(a2 + 8 * v26) = *((_OWORD *)v24 - 2);
              *(_OWORD *)(a2 + 8 * v26 + 16) = *((_OWORD *)v24 - 1);
              *(_OWORD *)(a2 + 8 * v26 + 32) = *(_OWORD *)v24;
            }
            if ( !--v14 )
              break;
          }
          v24 += 6;
        }
        while ( (unsigned __int64)(v24 - 4) < v16 );
        v8 = a4;
        if ( (_DWORD)v9 )
          continue;
      }
    }
    return 0;
  }
  sub_1406297E0(SpinLock, a2, (unsigned int)v9);
  return (unsigned int)v12;
}
