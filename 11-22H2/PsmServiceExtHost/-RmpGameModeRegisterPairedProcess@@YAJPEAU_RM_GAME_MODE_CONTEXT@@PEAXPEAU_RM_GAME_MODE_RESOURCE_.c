/*
 * XREFs of ?RmpGameModeRegisterPairedProcess@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAXPEAU_RM_GAME_MODE_RESOURCE_REQUEST@@1@Z @ 0x1800893D4
 * Callers:
 *     ?RmSrvGameModeRegisterPairedAuxiliaryProcess@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAXPEAU_RM_GAME_MODE_RESOURCE_REQUEST@@1K@Z @ 0x1800843A4 (-RmSrvGameModeRegisterPairedAuxiliaryProcess@@YAJPEAU_RM_SERVICE_GLOBALS@@PEAXPEAU_RM_GAME_MODE_.c)
 * Callees:
 *     ?RmpGameModeFindRecipientProcessById@@YAPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@PEAU_RM_GAME_MODE_CONTEXT@@K@Z @ 0x18000F8C8 (-RmpGameModeFindRecipientProcessById@@YAPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@PEAU_RM_GAME_MODE_C.c)
 *     ?RmpGameModeDereferenceRecipientProcess@@YAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x18008893C (-RmpGameModeDereferenceRecipientProcess@@YAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z.c)
 *     ?RmpGameModeFindProcessOrCompleteInsertion@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@PEAPEAU2@@Z @ 0x180088AF8 (-RmpGameModeFindProcessOrCompleteInsertion@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAXPEAU_RM_GAME_MODE_.c)
 *     ?RmpGameModeFindProcessPairing@@YAPEAU_RM_GAME_MODE_PROCESS_PAIRING@@PEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@KW4_RM_GAME_MODE_PAIRED_PROCESS@@@Z @ 0x180088BDC (-RmpGameModeFindProcessPairing@@YAPEAU_RM_GAME_MODE_PROCESS_PAIRING@@PEAU_RM_GAME_MODE_RECIPIENT.c)
 *     ?RmpGameModeInitializeProcessPairing@@YAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@0PEAU_RM_GAME_MODE_PROCESS_PAIRING@@@Z @ 0x180088C5C (-RmpGameModeInitializeProcessPairing@@YAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@0PEAU_RM_GAME_MODE.c)
 *     ?RmpGameModeInitializeRecipientProcess@@YAXPEAU_RM_GAME_MODE_CONTEXT@@PEAU_RM_GAME_MODE_RESOURCE_REQUEST@@PEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x180088CC0 (-RmpGameModeInitializeRecipientProcess@@YAXPEAU_RM_GAME_MODE_CONTEXT@@PEAU_RM_GAME_MODE_RESOURCE.c)
 *     ?RmpGameModeInsertProcessPairing@@YAXPEAU_RM_GAME_MODE_PROCESS_PAIRING@@@Z @ 0x180088D3C (-RmpGameModeInsertProcessPairing@@YAXPEAU_RM_GAME_MODE_PROCESS_PAIRING@@@Z.c)
 *     ?RmpGameModeIsProcessValidPairingTarget@@YAEPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x180088FA4 (-RmpGameModeIsProcessValidPairingTarget@@YAEPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z.c)
 */

__int64 __fastcall RmpGameModeRegisterPairedProcess(
        struct _RM_GAME_MODE_CONTEXT *a1,
        void *a2,
        struct _RM_GAME_MODE_RESOURCE_REQUEST *a3,
        void *a4)
{
  struct _RM_GAME_MODE_RECIPIENT_PROCESS *v5; // r15
  struct _RM_GAME_MODE_RECIPIENT_PROCESS *v8; // rsi
  struct _RM_GAME_MODE_PROCESS_PAIRING *Heap; // rbp
  unsigned int v10; // ebx
  PVOID v11; // rdi
  DWORD ProcessId; // eax
  struct _RM_GAME_MODE_RECIPIENT_PROCESS *RecipientProcessById; // rax
  DWORD v14; // eax
  struct _RM_GAME_MODE_RECIPIENT_PROCESS *v15; // rax
  int ProcessOrCompleteInsertion; // eax
  __int64 v17; // rdx
  __int64 v18; // r8
  PVOID P; // [rsp+20h] [rbp-38h] BYREF

  v5 = 0LL;
  P = 0LL;
  v8 = 0LL;
  Heap = (struct _RM_GAME_MODE_PROCESS_PAIRING *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x40uLL);
  if ( !Heap )
    return (unsigned int)-1073741801;
  RtlAcquireSRWLockExclusive((char *)a1 + 72);
  *((_DWORD *)a1 + 20) = GetCurrentThreadId();
  if ( (*(_BYTE *)(*(_QWORD *)a1 + 3528LL) & 1) != 0 )
    goto LABEL_4;
  ProcessId = GetProcessId(a4);
  RecipientProcessById = RmpGameModeFindRecipientProcessById(a1, ProcessId);
  v8 = RecipientProcessById;
  if ( !RecipientProcessById || !RmpGameModeIsProcessValidPairingTarget(RecipientProcessById) )
  {
    v10 = -1073741583;
    goto LABEL_5;
  }
  v14 = GetProcessId(a2);
  P = RmpGameModeFindRecipientProcessById(a1, v14);
  v11 = P;
  if ( P )
    goto LABEL_14;
  *((_DWORD *)a1 + 20) = 0;
  RtlReleaseSRWLockExclusive((char *)a1 + 72);
  v15 = (struct _RM_GAME_MODE_RECIPIENT_PROCESS *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0xB0uLL);
  v5 = v15;
  if ( v15 )
  {
    RmpGameModeInitializeRecipientProcess(a1, a3, v15);
    *((_BYTE *)v5 + 170) |= 8u;
    RtlAcquireSRWLockExclusive((char *)a1 + 72);
    *((_DWORD *)a1 + 20) = GetCurrentThreadId();
    if ( (*(_BYTE *)(*(_QWORD *)a1 + 3528LL) & 1) != 0 )
    {
LABEL_4:
      v10 = -1073741077;
LABEL_5:
      v11 = P;
      goto LABEL_18;
    }
    ProcessOrCompleteInsertion = RmpGameModeFindProcessOrCompleteInsertion(
                                   a1,
                                   a2,
                                   v5,
                                   (struct _RM_GAME_MODE_RECIPIENT_PROCESS **)&P);
    v11 = P;
    v10 = ProcessOrCompleteInsertion;
    if ( ProcessOrCompleteInsertion < 0 )
    {
LABEL_18:
      *((_DWORD *)a1 + 20) = 0;
      RtlReleaseSRWLockExclusive((char *)a1 + 72);
      if ( v5 )
        RmpGameModeDereferenceRecipientProcess((volatile signed __int64 *)v5);
      if ( v11 )
        RmpGameModeDereferenceRecipientProcess((volatile signed __int64 *)v11);
      if ( !v8 )
        goto LABEL_24;
      goto LABEL_23;
    }
LABEL_14:
    if ( (*((_BYTE *)v11 + 170) & 8) == 0 || RmpGameModeFindProcessPairing((__int64)v8, *((_DWORD *)v11 + 27)) )
    {
      v10 = -1073740008;
    }
    else
    {
      RmpGameModeInitializeProcessPairing(v8, (struct _RM_GAME_MODE_RECIPIENT_PROCESS *)v11, Heap);
      RmpGameModeInsertProcessPairing(Heap, v17, v18);
      Heap = 0LL;
      v10 = 0;
    }
    goto LABEL_18;
  }
  v10 = -1073741801;
LABEL_23:
  RmpGameModeDereferenceRecipientProcess((volatile signed __int64 *)v8);
LABEL_24:
  if ( Heap )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
  return v10;
}
