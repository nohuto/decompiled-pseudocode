/*
 * XREFs of VfIrpDatabaseUninitialize @ 0x140AE1AA4
 * Callers:
 *     ViIovPluginUnload @ 0x1405D2450 (ViIovPluginUnload.c)
 *     VfPacketFree @ 0x140ADD124 (VfPacketFree.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
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
