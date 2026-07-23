/*
 * XREFs of PopBcdClose @ 0x14080212C
 * Callers:
 *     PopAdaptivePersistSystemInitatedRebootState @ 0x14059E358 (PopAdaptivePersistSystemInitatedRebootState.c)
 *     PopAdaptiveInitializeBootContext @ 0x140B35F44 (PopAdaptiveInitializeBootContext.c)
 * Callees:
 *     BcdCloseStore @ 0x1408030C4 (BcdCloseStore.c)
 */

NTSTATUS __fastcall PopBcdClose(void *a1)
{
  return BcdCloseStore(a1);
}
