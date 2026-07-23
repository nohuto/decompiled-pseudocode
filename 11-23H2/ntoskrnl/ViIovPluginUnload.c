/*
 * XREFs of ViIovPluginUnload @ 0x1405D2450
 * Callers:
 *     <none>
 * Callees:
 *     IopUpdateFunctionPointers @ 0x140556AAC (IopUpdateFunctionPointers.c)
 *     IovUtilUninitialize @ 0x140AD2E20 (IovUtilUninitialize.c)
 *     VfMajorInit @ 0x140AD2FD4 (VfMajorInit.c)
 *     VfIrpDatabaseUninitialize @ 0x140AE1AA4 (VfIrpDatabaseUninitialize.c)
 */

__int64 ViIovPluginUnload()
{
  __int64 result; // rax

  LODWORD(VfRuleClasses) = VfRuleClasses | 0xFFFFFFEF;
  IopUpdateFunctionPointers(1, 0, 0);
  _InterlockedExchange(&IovpDisabledWithoutReboot, 1);
  IovUtilUninitialize();
  result = VfMajorInit();
  if ( !ViPacketCount )
    result = VfIrpDatabaseUninitialize();
  _InterlockedAnd(&ExpPoolFlags, 0xFFFFFFEF);
  return result;
}
