/*
 * XREFs of ExTryConvertSharedToExclusiveLite @ 0x14060AABC
 * Callers:
 *     CmpReplicateKeyToVirtual @ 0x140A1A058 (CmpReplicateKeyToVirtual.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041E390 (KeBugCheckEx.c)
 *     ExpTryConvertSharedToExclusiveLite @ 0x14060AE7C (ExpTryConvertSharedToExclusiveLite.c)
 */

__int64 ExTryConvertSharedToExclusiveLite()
{
  if ( (*((_BYTE *)&CmpRegistryLock + 26) & 1) != 0 )
    KeBugCheckEx(0x1C6u, 0xEuLL, (ULONG_PTR)&CmpRegistryLock, 0LL, 0LL);
  return ExpTryConvertSharedToExclusiveLite();
}
