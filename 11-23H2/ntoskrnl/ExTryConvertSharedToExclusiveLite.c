/*
 * XREFs of ExTryConvertSharedToExclusiveLite @ 0x14060AA4C
 * Callers:
 *     CmpReplicateKeyToVirtual @ 0x140A19FA8 (CmpReplicateKeyToVirtual.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041EA50 (KeBugCheckEx.c)
 *     ExpTryConvertSharedToExclusiveLite @ 0x14060AE0C (ExpTryConvertSharedToExclusiveLite.c)
 */

__int64 ExTryConvertSharedToExclusiveLite()
{
  if ( (*((_BYTE *)&CmpRegistryLock + 26) & 1) != 0 )
    KeBugCheckEx(0x1C6u, 0xEuLL, (ULONG_PTR)&CmpRegistryLock, 0LL, 0LL);
  return ExpTryConvertSharedToExclusiveLite();
}
