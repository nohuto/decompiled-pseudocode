/*
 * XREFs of sub_140281DE0 @ 0x140281DE0
 * Callers:
 *     sub_1406F914C @ 0x1406F914C (sub_1406F914C.c)
 * Callees:
 *     sub_140243208 @ 0x140243208 (sub_140243208.c)
 *     sub_1402AFC00 @ 0x1402AFC00 (sub_1402AFC00.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1403105C0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     sub_140418E4C @ 0x140418E4C (sub_140418E4C.c)
 */

__int64 __fastcall sub_140281DE0(_DWORD *a1, __int64 a2, __int64 a3, __int64 *a4)
{
  volatile LONG *v4; // r15
  unsigned __int64 v8; // rdi
  __int64 *v9; // rsi
  __int64 v10; // rsi
  volatile LONG *v11; // rbp
  __int64 v12; // r12
  __int64 *v13; // rsi
  char v14; // cl
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  __int64 v18; // r8
  int v19; // eax
  bool v20; // zf
  __int64 v21; // rdx
  unsigned __int8 v22; // al
  struct _KPRCB *v23; // r11
  __int64 v24; // r9
  int v25; // edx

  v4 = (volatile LONG *)(a3 + 72);
  v8 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a3 + 72));
  if ( (*((_BYTE *)KeGetCurrentThread() + 1384) & 0x40) != 0 )
    *(_DWORD *)(a3 + 56) |= 0x200u;
  v9 = *(__int64 **)(a2 + 40);
  if ( (*(_DWORD *)(a3 + 56) & 0x20) != 0 )
  {
    v10 = v9[2];
    v11 = (volatile LONG *)(v10 + 72);
    ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v10 + 72));
    v12 = 0LL;
    *(_QWORD *)(a3 + 80) = *(_QWORD *)(v10 + 80);
  }
  else
  {
    v10 = *v9;
    v11 = (volatile LONG *)(v10 + 72);
    ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v10 + 72));
    v12 = *(_QWORD *)(v10 + 80);
  }
  *(_QWORD *)(a3 + 64) = *(_QWORD *)(v10 + 64);
  ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140C4F100);
  v13 = *(__int64 **)(a2 + 40);
  if ( (*(_DWORD *)(a3 + 56) & 0x20) != 0 )
  {
    v13[2] = a3;
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C4F100);
    ExReleaseSpinLockExclusiveFromDpcLevel(v11);
    ExReleaseSpinLockExclusiveFromDpcLevel(v4);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v8 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v18 = *((_QWORD *)CurrentPrcb + 4375);
          v19 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v8 + 1));
          v20 = (v19 & *(_DWORD *)(v18 + 20)) == 0;
          *(_DWORD *)(v18 + 20) &= v19;
          if ( v20 )
            sub_140418E4C(CurrentPrcb);
        }
      }
    }
    __writecr8(v8);
    sub_140243208(a3, a4);
  }
  else
  {
    v14 = *(_BYTE *)(a3 + 62);
    if ( (v14 & 0xC) != 0 && (*a1 & 0x20000) == 0 )
    {
      v21 = v13[2];
      if ( v21 )
      {
        if ( (*(_DWORD *)(v21 + 56) & 3) != 0 || (*(_BYTE *)(v21 + 62) & 0xC) == 4 )
          *(_BYTE *)(a3 + 62) = v14 & 0xF3 | 8;
      }
    }
    *v13 = a3;
    *(_DWORD *)(a3 + 56) &= ~2u;
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C4F100);
    ExReleaseSpinLockExclusiveFromDpcLevel(v11);
    ExReleaseSpinLockExclusiveFromDpcLevel(v4);
    if ( dword_140D06B08 )
    {
      if ( (dword_140D06B08 & 1) != 0 )
      {
        v22 = KeGetCurrentIrql();
        if ( v22 <= 0xFu && (unsigned __int8)v8 <= 0xFu && v22 >= 2u )
        {
          v23 = KeGetCurrentPrcb();
          v24 = *((_QWORD *)v23 + 4375);
          v25 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v8 + 1));
          v20 = (v25 & *(_DWORD *)(v24 + 20)) == 0;
          *(_DWORD *)(v24 + 20) &= v25;
          if ( v20 )
            sub_140418E4C(v23);
        }
      }
    }
    __writecr8(v8);
    sub_1402AFC00((ULONG_PTR)v13);
  }
  return v12;
}
