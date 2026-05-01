/*
 * XREFs of ?RmpGameModeReenableForRegisteredProcess@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAX@Z @ 0x1800892FC
 * Callers:
 *     ?RmSrvGameModeReenableForRegisteredProcess@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAX@Z @ 0x180084274 (-RmSrvGameModeReenableForRegisteredProcess@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAX@Z.c)
 * Callees:
 *     ?RmpGameModeFindRecipientProcessById@@YAPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@PEAU_RM_GAME_MODE_CONTEXT@@K@Z @ 0x18000F8C8 (-RmpGameModeFindRecipientProcessById@@YAPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@PEAU_RM_GAME_MODE_C.c)
 *     ?RmpGameModeQueuePolicyWorkerWithLock@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z @ 0x18001076C (-RmpGameModeQueuePolicyWorkerWithLock@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z.c)
 *     ?RmpGameModeDereferenceRecipientProcess@@YAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x18008893C (-RmpGameModeDereferenceRecipientProcess@@YAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z.c)
 */

__int64 __fastcall RmpGameModeReenableForRegisteredProcess(struct _RM_GAME_MODE_CONTEXT *a1, HANDLE Process)
{
  struct _RM_GAME_MODE_RECIPIENT_PROCESS *v4; // rdi
  unsigned int v5; // ebx
  DWORD ProcessId; // eax
  struct _RM_GAME_MODE_RECIPIENT_PROCESS *RecipientProcessById; // rax
  char v8; // al

  v4 = 0LL;
  RtlAcquireSRWLockExclusive((char *)a1 + 72);
  *((_DWORD *)a1 + 20) = GetCurrentThreadId();
  if ( (*(_BYTE *)(*(_QWORD *)a1 + 3528LL) & 1) != 0 )
  {
    v5 = -1073741077;
  }
  else
  {
    ProcessId = GetProcessId(Process);
    RecipientProcessById = RmpGameModeFindRecipientProcessById(a1, ProcessId);
    v4 = RecipientProcessById;
    if ( RecipientProcessById )
    {
      v8 = *((_BYTE *)RecipientProcessById + 170);
      if ( (v8 & 4) != 0 )
      {
        *((_BYTE *)v4 + 170) = v8 & 0xFB;
        RmpGameModeQueuePolicyWorkerWithLock(a1);
        v5 = 0;
      }
      else
      {
        v5 = -1073741584;
      }
    }
    else
    {
      v5 = -1073741275;
    }
  }
  *((_DWORD *)a1 + 20) = 0;
  RtlReleaseSRWLockExclusive((char *)a1 + 72);
  if ( v4 )
    RmpGameModeDereferenceRecipientProcess((volatile signed __int64 *)v4);
  return v5;
}
