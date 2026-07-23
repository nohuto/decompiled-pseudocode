/*
 * XREFs of MiComputeAgingAmount @ 0x14025BDB0
 * Callers:
 *     MiAgeWorkingSet @ 0x14025BA00 (MiAgeWorkingSet.c)
 * Callees:
 *     ExpAcquireSpinLockExclusive @ 0x14025B690 (ExpAcquireSpinLockExclusive.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14046B838 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14060B60C (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

unsigned __int64 __fastcall MiComputeAgingAmount(__int64 a1, unsigned __int64 a2, char a3, unsigned int a4)
{
  LONG *v4; // rsi
  __int64 v5; // r15
  unsigned __int64 v6; // rbp
  unsigned __int64 v8; // rdi
  int *v10; // rcx
  __int64 v11; // r14
  void *retaddr; // [rsp+38h] [rbp+0h]

  v4 = &dword_140C6A1C0;
  v5 = *(_QWORD *)(a1 + 16);
  v6 = a4;
  v8 = a2;
  if ( (*(_BYTE *)(a1 + 184) & 7) == 2 )
    v10 = &dword_140C6A1C0;
  else
    v10 = (int *)(a1 + 256);
  LOBYTE(a2) = -1;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v10, a2);
  else
    ExpAcquireSpinLockExclusive(v10, 0xFFu);
  if ( (a3 & 2) != 0 )
  {
    v11 = *(unsigned int *)(v5 + 24);
    *(_DWORD *)(v5 + 24) = (v11 + v8) % v6;
  }
  else
  {
    v11 = *(unsigned int *)(v5 + 28);
    *(_DWORD *)(v5 + 28) = (v11 + v8) % v6;
  }
  if ( (*(_BYTE *)(a1 + 184) & 7) != 2 )
    v4 = (LONG *)(a1 + 256);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v4, retaddr);
  else
    *v4 = 0;
  if ( v11 + v8 < v8 )
    v11 = 0LL;
  if ( v6 * (v11 + v8) / 0x3E8 > v8 )
    return v8 * v6 / 0x3E8;
  else
    return v6 * (v11 + v8) / 0x3E8;
}
