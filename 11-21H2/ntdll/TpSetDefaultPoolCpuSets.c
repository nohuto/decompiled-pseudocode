/*
 * XREFs of TpSetDefaultPoolCpuSets @ 0x180123C28
 * Callers:
 *     LdrpInitializeProcess @ 0x1800DE07C (LdrpInitializeProcess.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180019910 (RtlAcquireSRWLockExclusive.c)
 *     memmove @ 0x1800AAB40 (memmove.c)
 */

__int64 __fastcall TpSetDefaultPoolCpuSets(void *Src, unsigned __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  unsigned int v5; // ebx

  v5 = a2;
  RtlAcquireSRWLockExclusive((unsigned __int64)&TppPoolpDefaultPoolCpuSetLock, a2, a3, a4);
  TppPoolpDefaultPoolCpuSetCount = v5;
  memmove(&TppPoolpDefaultPoolCpuSets, Src, 8LL * v5);
  return RtlReleaseSRWLockExclusive(&TppPoolpDefaultPoolCpuSetLock);
}
