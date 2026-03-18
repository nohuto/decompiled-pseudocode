/*
 * XREFs of PopBcdOpen @ 0x140801E1C
 * Callers:
 *     PopAdaptivePersistSystemInitatedRebootState @ 0x14059DE68 (PopAdaptivePersistSystemInitatedRebootState.c)
 *     PopAdaptiveInitializeBootContext @ 0x140B35F44 (PopAdaptiveInitializeBootContext.c)
 * Callees:
 *     BcdOpenStore @ 0x140803098 (BcdOpenStore.c)
 */

__int64 __fastcall PopBcdOpen(__int64 a1)
{
  return BcdOpenStore(0LL, 2LL, a1);
}
