/*
 * XREFs of PopBcdClose @ 0x140801E5C
 * Callers:
 *     PopAdaptivePersistSystemInitatedRebootState @ 0x14059DE68 (PopAdaptivePersistSystemInitatedRebootState.c)
 *     PopAdaptiveInitializeBootContext @ 0x140B35F44 (PopAdaptiveInitializeBootContext.c)
 * Callees:
 *     BcdCloseStore @ 0x140802DF4 (BcdCloseStore.c)
 */

__int64 __fastcall PopBcdClose(__int64 a1)
{
  return BcdCloseStore(a1);
}
