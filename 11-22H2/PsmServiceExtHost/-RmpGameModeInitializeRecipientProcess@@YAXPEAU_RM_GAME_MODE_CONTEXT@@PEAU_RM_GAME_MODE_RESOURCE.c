/*
 * XREFs of ?RmpGameModeInitializeRecipientProcess@@YAXPEAU_RM_GAME_MODE_CONTEXT@@PEAU_RM_GAME_MODE_RESOURCE_REQUEST@@PEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x180088CC0
 * Callers:
 *     ?RmpGameModeRegisterPairedProcess@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAXPEAU_RM_GAME_MODE_RESOURCE_REQUEST@@1@Z @ 0x1800893D4 (-RmpGameModeRegisterPairedProcess@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAXPEAU_RM_GAME_MODE_RESOURCE_.c)
 *     ?RmpGameModeRegisterProcess@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAXPEAU_RM_GAME_MODE_RESOURCE_REQUEST@@@Z @ 0x18008963C (-RmpGameModeRegisterProcess@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAXPEAU_RM_GAME_MODE_RESOURCE_REQUES.c)
 * Callees:
 *     memset_0 @ 0x1800536FA (memset_0.c)
 */

void __fastcall RmpGameModeInitializeRecipientProcess(
        struct _RM_GAME_MODE_CONTEXT *a1,
        struct _RM_GAME_MODE_RESOURCE_REQUEST *a2,
        struct _RM_GAME_MODE_RECIPIENT_PROCESS *a3)
{
  memset_0(a3, 0, 0xB0uLL);
  *((_QWORD *)a3 + 4) = a1;
  *((_OWORD *)a3 + 7) = *(_OWORD *)a2;
  *((_OWORD *)a3 + 8) = *((_OWORD *)a2 + 1);
  *((_QWORD *)a3 + 18) = *((_QWORD *)a2 + 4);
  *(_QWORD *)a3 = 1LL;
  *((_QWORD *)a3 + 9) = 0LL;
  *((_QWORD *)a3 + 10) = 0LL;
  *((_DWORD *)a3 + 26) = 2;
}
