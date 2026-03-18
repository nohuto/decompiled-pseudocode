/*
 * XREFs of VfIrpDatabaseUninitialize @ 0x140AA5D64
 * Callers:
 *     ViIovPluginUnload @ 0x140601C50 (ViIovPluginUnload.c)
 *     VfPacketFree @ 0x140A9C13C (VfPacketFree.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 VfIrpDatabaseUninitialize()
{
  __int64 result; // rax

  if ( ViIrpDatabase )
  {
    ExFreePoolWithTag(ViIrpDatabase, 0);
    ViIrpDatabase = 0LL;
  }
  result = (unsigned int)_InterlockedExchange(&VfIrpDatabaseInitialized, 0);
  ViIrpDatabaseLock = 0;
  return result;
}
