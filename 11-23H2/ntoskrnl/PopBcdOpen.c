/*
 * XREFs of PopBcdOpen @ 0x1408020EC
 * Callers:
 *     PopAdaptivePersistSystemInitatedRebootState @ 0x14059E358 (PopAdaptivePersistSystemInitatedRebootState.c)
 *     PopAdaptiveInitializeBootContext @ 0x140B35F44 (PopAdaptiveInitializeBootContext.c)
 * Callees:
 *     BcdOpenStore @ 0x140803368 (BcdOpenStore.c)
 */

NTSTATUS __fastcall PopBcdOpen(PHANDLE BcdStoreHandle)
{
  return BcdOpenStore(0LL, BCD_OPEN_SYNC_FIRMWARE_ENTRIES, BcdStoreHandle);
}
