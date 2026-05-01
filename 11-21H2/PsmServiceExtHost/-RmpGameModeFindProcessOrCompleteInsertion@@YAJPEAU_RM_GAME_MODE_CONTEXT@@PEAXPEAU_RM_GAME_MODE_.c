/*
 * XREFs of ?RmpGameModeFindProcessOrCompleteInsertion@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@PEAPEAU2@@Z @ 0x18008AE78
 * Callers:
 *     ?RmpGameModeRegisterPairedProcess@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAXPEAU_RM_GAME_MODE_RESOURCE_REQUEST@@1@Z @ 0x18008B76C (-RmpGameModeRegisterPairedProcess@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAXPEAU_RM_GAME_MODE_RESOURCE_.c)
 *     ?RmpGameModeRegisterProcess@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAXPEAU_RM_GAME_MODE_RESOURCE_REQUEST@@@Z @ 0x18008B9D4 (-RmpGameModeRegisterProcess@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAXPEAU_RM_GAME_MODE_RESOURCE_REQUES.c)
 * Callees:
 *     ?RmpGameModeFindRecipientProcessById@@YAPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@PEAU_RM_GAME_MODE_CONTEXT@@K@Z @ 0x1800083E8 (-RmpGameModeFindRecipientProcessById@@YAPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@PEAU_RM_GAME_MODE_C.c)
 *     ?RmpGameModeAllocateObjectsForRecipientProcess@@YAJPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@PEAX@Z @ 0x18008A6D8 (-RmpGameModeAllocateObjectsForRecipientProcess@@YAJPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@PEAX@Z.c)
 *     ?RmpGameModeDereferenceRecipientProcess@@YAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x18008ACBC (-RmpGameModeDereferenceRecipientProcess@@YAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z.c)
 *     ?RmpGameModeInsertRecipientProcess@@YAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x18008B218 (-RmpGameModeInsertRecipientProcess@@YAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z.c)
 */

__int64 __fastcall RmpGameModeFindProcessOrCompleteInsertion(
        struct _RM_GAME_MODE_CONTEXT *a1,
        void *a2,
        struct _RM_GAME_MODE_RECIPIENT_PROCESS *a3,
        struct _RM_GAME_MODE_RECIPIENT_PROCESS **a4)
{
  DWORD ProcessId; // eax
  struct _RM_GAME_MODE_RECIPIENT_PROCESS *RecipientProcessById; // rax
  volatile signed __int64 *v10; // rsi
  __int64 result; // rax

  ProcessId = GetProcessId(a2);
  RecipientProcessById = RmpGameModeFindRecipientProcessById(a1, ProcessId);
  v10 = (volatile signed __int64 *)RecipientProcessById;
  if ( RecipientProcessById )
  {
    if ( _InterlockedIncrement64((volatile signed __int64 *)RecipientProcessById) <= 1 )
      __fastfail(0xEu);
    a3 = RecipientProcessById;
  }
  else
  {
    result = RmpGameModeAllocateObjectsForRecipientProcess(a3, a2);
    if ( (int)result < 0 )
      return result;
    if ( _InterlockedIncrement64((volatile signed __int64 *)a3) <= 1 )
      __fastfail(0xEu);
    RmpGameModeInsertRecipientProcess(a3);
    if ( _InterlockedIncrement64((volatile signed __int64 *)a3) <= 1 )
      __fastfail(0xEu);
  }
  result = 0LL;
  *a4 = a3;
  if ( v10 )
  {
    RmpGameModeDereferenceRecipientProcess(v10);
    return 0LL;
  }
  return result;
}
