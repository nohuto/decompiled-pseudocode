/*
 * XREFs of RtlpHpLargeLockAcquire @ 0x140324990
 * Callers:
 *     RtlpHpLargeFree @ 0x1403240FC (RtlpHpLargeFree.c)
 *     RtlpHpLargeAlloc @ 0x14032432C (RtlpHpLargeAlloc.c)
 * Callees:
 *     RtlpHpAcquireLockExclusive @ 0x140316F54 (RtlpHpAcquireLockExclusive.c)
 */

KIRQL __fastcall RtlpHpLargeLockAcquire(__int64 a1, char a2)
{
  if ( (a2 & 1) != 0 )
    return -1;
  else
    return RtlpHpAcquireLockExclusive((volatile LONG *)(a1 + 64), *(_DWORD *)a1 & 1);
}
