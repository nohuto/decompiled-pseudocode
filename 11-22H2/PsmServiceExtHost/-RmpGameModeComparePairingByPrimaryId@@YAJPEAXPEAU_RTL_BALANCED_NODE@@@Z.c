/*
 * XREFs of ?RmpGameModeComparePairingByPrimaryId@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x18008891C
 * Callers:
 *     ?RmpGameModeInsertProcessPairing@@YAXPEAU_RM_GAME_MODE_PROCESS_PAIRING@@@Z @ 0x180088D3C (-RmpGameModeInsertProcessPairing@@YAXPEAU_RM_GAME_MODE_PROCESS_PAIRING@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RmpGameModeComparePairingByPrimaryId(void *a1, struct _RTL_BALANCED_NODE *a2)
{
  unsigned int Right_high; // edx

  Right_high = HIDWORD(a2[1].Children[0][4].Right);
  if ( (unsigned int)a1 >= Right_high )
    return (unsigned int)a1 > Right_high;
  else
    return 0xFFFFFFFFLL;
}
