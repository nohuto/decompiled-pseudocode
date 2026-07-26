/*
 * XREFs of ?ndisStackExpansionInitializeSubsystem@@YAJXZ @ 0x1C01619E4
 * Callers:
 *     DriverEntry @ 0x1C01608CC (DriverEntry.c)
 * Callees:
 *     ?ndisAllocatePerProcessorSlot@@YAPEAUPNDIS_PER_PROCESSOR_SLOT__@@K@Z @ 0x1C001B418 (-ndisAllocatePerProcessorSlot@@YAPEAUPNDIS_PER_PROCESSOR_SLOT__@@K@Z.c)
 *     ?ndisRegisterKnobs@@YAJPEBUKnobDescriptor@@_KP6AEPEAX0AEA_K@ZP6AJ201@Z2@Z @ 0x1C0120F0C (-ndisRegisterKnobs@@YAJPEBUKnobDescriptor@@_KP6AEPEAX0AEA_K@ZP6AJ201@Z2@Z.c)
 */

__int64 __fastcall ndisStackExpansionInitializeSubsystem(
        __int64 a1,
        __int64 a2,
        unsigned __int8 (*a3)(void *, const struct KnobDescriptor *, unsigned __int64 *))
{
  ULONG ActiveProcessorCount; // ebx
  _DWORD *Pool2; // rax
  void *v5; // rdi
  ULONG v6; // ebp
  char *v7; // r14
  struct _KDPC *v8; // rsi
  _PROCESSOR_NUMBER ProcNumber; // [rsp+50h] [rbp+8h] BYREF

  ndisRegisterKnobs(&stru_1C00D55E8, 1LL, a3, 0LL);
  qword_1C00F5720 = (__int64)ndisAllocatePerProcessorSlot(0x78457453u);
  qword_1C00F5718 = (__int64)ndisAllocatePerProcessorSlot(0x78457453u);
  if ( !qword_1C00F5718 )
    return 3221225626LL;
  ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
  Pool2 = (_DWORD *)ExAllocatePool2(64LL, ((unsigned __int64)ActiveProcessorCount << 6) + 72, 538985550);
  v5 = Pool2;
  if ( !Pool2 )
    return 3221225495LL;
  v6 = 0;
  *Pool2 = ActiveProcessorCount;
  if ( ActiveProcessorCount )
  {
    v7 = 0LL;
    v8 = (struct _KDPC *)(Pool2 + 2);
    do
    {
      ProcNumber = 0;
      KeGetProcessorNumberFromIndex(v6, &ProcNumber);
      KeInitializeDpc(v8, (PKDEFERRED_ROUTINE)ndisStackExpansionDpc, v7);
      KeSetTargetProcessorDpcEx(v8, &ProcNumber);
      KeInsertQueueDpc(v8, v5, 0LL);
      ++v6;
      ++v7;
      ++v8;
    }
    while ( v6 < ActiveProcessorCount );
  }
  return 0LL;
}
