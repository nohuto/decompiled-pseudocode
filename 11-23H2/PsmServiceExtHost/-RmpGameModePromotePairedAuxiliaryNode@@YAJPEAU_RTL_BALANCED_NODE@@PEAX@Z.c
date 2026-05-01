/*
 * XREFs of ?RmpGameModePromotePairedAuxiliaryNode@@YAJPEAU_RTL_BALANCED_NODE@@PEAX@Z @ 0x180088DB0
 * Callers:
 *     ?RmpGameModePolicyWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18000F490 (-RmpGameModePolicyWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     ?RmpGameModePromoteAuxiliaryProcess@@YAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@PEAU_LIST_ENTRY@@@Z @ 0x180088D5C (-RmpGameModePromoteAuxiliaryProcess@@YAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@PEAU_LIST_ENTRY@@@Z.c)
 *     ?RmpGameModeShouldPromoteAuxiliary@@YAEPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x18008970C (-RmpGameModeShouldPromoteAuxiliary@@YAEPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z.c)
 */

__int64 __fastcall RmpGameModePromotePairedAuxiliaryNode(struct _RTL_BALANCED_NODE *a1, void *a2)
{
  struct _LIST_ENTRY *v2; // rdx
  struct _RM_GAME_MODE_RECIPIENT_PROCESS *v3; // r8

  if ( RmpGameModeShouldPromoteAuxiliary((struct _RM_GAME_MODE_RECIPIENT_PROCESS *)a1[2].Children[1]) )
    RmpGameModePromoteAuxiliaryProcess(v3, v2);
  return 0LL;
}
