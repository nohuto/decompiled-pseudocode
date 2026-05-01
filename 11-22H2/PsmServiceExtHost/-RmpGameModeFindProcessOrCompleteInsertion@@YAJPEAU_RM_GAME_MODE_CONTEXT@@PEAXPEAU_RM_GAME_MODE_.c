/*
 * XREFs of ?RmpGameModeFindProcessOrCompleteInsertion@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@PEAPEAU2@@Z @ 0x180088AF8
 * Callers:
 *     ?RmpGameModeRegisterPairedProcess@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAXPEAU_RM_GAME_MODE_RESOURCE_REQUEST@@1@Z @ 0x1800893D4 (-RmpGameModeRegisterPairedProcess@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAXPEAU_RM_GAME_MODE_RESOURCE_.c)
 *     ?RmpGameModeRegisterProcess@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAXPEAU_RM_GAME_MODE_RESOURCE_REQUEST@@@Z @ 0x18008963C (-RmpGameModeRegisterProcess@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAXPEAU_RM_GAME_MODE_RESOURCE_REQUES.c)
 * Callees:
 *     ?RmpGameModeFindRecipientProcessById@@YAPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@PEAU_RM_GAME_MODE_CONTEXT@@K@Z @ 0x18000F8C8 (-RmpGameModeFindRecipientProcessById@@YAPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@PEAU_RM_GAME_MODE_C.c)
 *     ?RmpGameModeAllocateObjectsForRecipientProcess@@YAJPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@PEAX@Z @ 0x180088378 (-RmpGameModeAllocateObjectsForRecipientProcess@@YAJPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@PEAX@Z.c)
 *     ?RmpGameModeDereferenceRecipientProcess@@YAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x18008893C (-RmpGameModeDereferenceRecipientProcess@@YAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z.c)
 *     ?RmpGameModeInsertRecipientProcess@@YAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x180088E88 (-RmpGameModeInsertRecipientProcess@@YAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z.c)
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
  int ObjectsForRecipientProcess; // ebx

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
    ObjectsForRecipientProcess = RmpGameModeAllocateObjectsForRecipientProcess(a3, a2);
    if ( ObjectsForRecipientProcess < 0 )
      return (unsigned int)ObjectsForRecipientProcess;
    if ( _InterlockedIncrement64((volatile signed __int64 *)a3) <= 1 )
      __fastfail(0xEu);
    RmpGameModeInsertRecipientProcess(a3);
    if ( _InterlockedIncrement64((volatile signed __int64 *)a3) <= 1 )
      __fastfail(0xEu);
  }
  ObjectsForRecipientProcess = 0;
  *a4 = a3;
  if ( v10 )
    RmpGameModeDereferenceRecipientProcess(v10);
  return (unsigned int)ObjectsForRecipientProcess;
}
