/*
 * XREFs of TpSetDefaultPoolCpuSets @ 0x180126B18
 * Callers:
 *     LdrpInitializeProcess @ 0x1800DDBD0 (LdrpInitializeProcess.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180037D80 (RtlAcquireSRWLockExclusive.c)
 *     memmove @ 0x1800A7A40 (memmove.c)
 */

__int64 __fastcall TpSetDefaultPoolCpuSets(void *Src, unsigned int a2)
{
  RtlAcquireSRWLockExclusive(&TppPoolpDefaultPoolCpuSetLock);
  TppPoolpDefaultPoolCpuSetCount = a2;
  memmove(&TppPoolpDefaultPoolCpuSets, Src, 8LL * a2);
  return RtlReleaseSRWLockExclusive(&TppPoolpDefaultPoolCpuSetLock);
}
