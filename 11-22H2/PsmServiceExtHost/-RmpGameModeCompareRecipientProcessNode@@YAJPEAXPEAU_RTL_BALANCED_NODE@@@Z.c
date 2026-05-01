/*
 * XREFs of ?RmpGameModeCompareRecipientProcessNode@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x18005607E
 * Callers:
 *     ?RmpGameModeFindRecipientProcessById@@YAPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@PEAU_RM_GAME_MODE_CONTEXT@@K@Z @ 0x18000F8C8 (-RmpGameModeFindRecipientProcessById@@YAPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@PEAU_RM_GAME_MODE_C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RmpGameModeCompareRecipientProcessNode(void *a1, struct _RTL_BALANCED_NODE *a2)
{
  if ( (unsigned int)a1 >= HIDWORD(a2[4].Left) )
    return (unsigned int)a1 > HIDWORD(a2[4].Left);
  else
    return 0xFFFFFFFFLL;
}
