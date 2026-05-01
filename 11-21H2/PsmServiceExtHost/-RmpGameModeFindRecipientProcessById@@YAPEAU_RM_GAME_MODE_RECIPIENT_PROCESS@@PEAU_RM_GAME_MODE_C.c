/*
 * XREFs of ?RmpGameModeFindRecipientProcessById@@YAPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@PEAU_RM_GAME_MODE_CONTEXT@@K@Z @ 0x1800083E8
 * Callers:
 *     ?RmpGameModePolicyWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x1800080D0 (-RmpGameModePolicyWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?RmpGameModeDisableForRegisteredProcess@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAX@Z @ 0x18008ADA0 (-RmpGameModeDisableForRegisteredProcess@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAX@Z.c)
 *     ?RmpGameModeFindProcessOrCompleteInsertion@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@PEAPEAU2@@Z @ 0x18008AE78 (-RmpGameModeFindProcessOrCompleteInsertion@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAXPEAU_RM_GAME_MODE_.c)
 *     ?RmpGameModeReenableForRegisteredProcess@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAX@Z @ 0x18008B694 (-RmpGameModeReenableForRegisteredProcess@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAX@Z.c)
 *     ?RmpGameModeRegisterPairedProcess@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAXPEAU_RM_GAME_MODE_RESOURCE_REQUEST@@1@Z @ 0x18008B76C (-RmpGameModeRegisterPairedProcess@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAXPEAU_RM_GAME_MODE_RESOURCE_.c)
 *     ?RmpGameModeUnregisterProcess@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAX@Z @ 0x18008C9E0 (-RmpGameModeUnregisterProcess@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAX@Z.c)
 * Callees:
 *     ?RmpGameModeCompareRecipientProcessNode@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z @ 0x18008ACA0 (-RmpGameModeCompareRecipientProcessNode@@YAJPEAXPEAU_RTL_BALANCED_NODE@@@Z.c)
 */

struct _RM_GAME_MODE_RECIPIENT_PROCESS *__fastcall RmpGameModeFindRecipientProcessById(
        struct _RM_GAME_MODE_CONTEXT *a1,
        unsigned int a2)
{
  char v2; // si
  unsigned __int64 v3; // rcx
  int v4; // esi
  char *v5; // rdi
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // rbp
  int v8; // eax
  unsigned __int64 v9; // rax

  v2 = *((_BYTE *)a1 + 16);
  v3 = (unsigned __int64)a1 + 8;
  v4 = v2 & 1;
  v5 = 0LL;
  v6 = *(_QWORD *)v3;
  if ( (*(_BYTE *)(v3 + 8) & 1) != 0 )
  {
    if ( !v6 )
      return (struct _RM_GAME_MODE_RECIPIENT_PROCESS *)v5;
    v6 ^= v3;
  }
  if ( v6 )
  {
    v7 = a2;
    do
    {
      v8 = RmpGameModeCompareRecipientProcessNode((void *)v7, (struct _RTL_BALANCED_NODE *)v6);
      if ( v8 >= 0 )
      {
        if ( v8 <= 0 )
          break;
        v9 = *(_QWORD *)(v6 + 8);
      }
      else
      {
        v9 = *(_QWORD *)v6;
      }
      if ( v4 && v9 )
        v6 ^= v9;
      else
        v6 = v9;
    }
    while ( v6 );
    if ( v6 )
    {
      v5 = (char *)(v6 - 8);
      if ( _InterlockedIncrement64((volatile signed __int64 *)(v6 - 8)) <= 1 )
        __fastfail(0xEu);
    }
  }
  return (struct _RM_GAME_MODE_RECIPIENT_PROCESS *)v5;
}
