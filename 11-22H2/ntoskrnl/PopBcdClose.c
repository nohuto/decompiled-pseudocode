/*
 * XREFs of PopBcdClose @ 0x1408043E0
 * Callers:
 *     PopAdaptivePersistSystemInitatedRebootState @ 0x14059DEF8 (PopAdaptivePersistSystemInitatedRebootState.c)
 *     PopAdaptiveInitializeBootContext @ 0x140B3963C (PopAdaptiveInitializeBootContext.c)
 * Callees:
 *     BcdCloseStore @ 0x140805378 (BcdCloseStore.c)
 */

NTSTATUS __fastcall PopBcdClose(void *a1)
{
  return BcdCloseStore(a1);
}
