/*
 * XREFs of ?RmpGameModeShouldPromoteAuxiliary@@YAEPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x180089A6C
 * Callers:
 *     ?RmpGameModePolicyWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x18000F490 (-RmpGameModePolicyWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?RmpGameModePromotePairedAuxiliaryNode@@YAJPEAU_RTL_BALANCED_NODE@@PEAX@Z @ 0x180089110 (-RmpGameModePromotePairedAuxiliaryNode@@YAJPEAU_RTL_BALANCED_NODE@@PEAX@Z.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall RmpGameModeShouldPromoteAuxiliary(struct _RM_GAME_MODE_RECIPIENT_PROCESS *a1)
{
  unsigned __int8 result; // al

  if ( *((_DWORD *)a1 + 26) != 2 )
    return 0;
  result = 1;
  if ( (*((_BYTE *)a1 + 170) & 5) != 1 )
    return 0;
  return result;
}
