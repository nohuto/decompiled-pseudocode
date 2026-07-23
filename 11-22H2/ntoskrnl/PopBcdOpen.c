/*
 * XREFs of PopBcdOpen @ 0x1408043A0
 * Callers:
 *     PopAdaptivePersistSystemInitatedRebootState @ 0x14059DEF8 (PopAdaptivePersistSystemInitatedRebootState.c)
 *     PopAdaptiveInitializeBootContext @ 0x140B3963C (PopAdaptiveInitializeBootContext.c)
 * Callees:
 *     BcdOpenStore @ 0x14080561C (BcdOpenStore.c)
 */

NTSTATUS __fastcall PopBcdOpen(PHANDLE BcdStoreHandle)
{
  return BcdOpenStore(0LL, BCD_OPEN_SYNC_FIRMWARE_ENTRIES, BcdStoreHandle);
}
