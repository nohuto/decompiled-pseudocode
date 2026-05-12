/*
 * XREFs of StorUnitExecuteNvmeSrb @ 0x1C00659C4
 * Callers:
 *     RaUnitScsiIrp @ 0x1C0009800 (RaUnitScsiIrp.c)
 * Callees:
 *     RaidAdapterPoFxActivateComponent @ 0x1C0002B10 (RaidAdapterPoFxActivateComponent.c)
 *     RaidAdapterRaiseIrqlAndExecuteXrb @ 0x1C0004004 (RaidAdapterRaiseIrqlAndExecuteXrb.c)
 *     RaidAdapterExecuteXrb @ 0x1C0004060 (RaidAdapterExecuteXrb.c)
 *     RaAllocateIoResource @ 0x1C0006CC8 (RaAllocateIoResource.c)
 *     RaidZeroXrb @ 0x1C0006D50 (RaidZeroXrb.c)
 *     StorAllocateContiguousIoResources @ 0x1C000F9B4 (StorAllocateContiguousIoResources.c)
 *     RaidAdapterMapBuffers @ 0x1C00355B4 (RaidAdapterMapBuffers.c)
 */

__int64 __fastcall StorUnitExecuteNvmeSrb(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v5; // rsi
  __int64 v6; // rdi
  __int64 v7; // rbx
  KIRQL v8; // r15
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 ContiguousIoResources; // rax
  __int64 v12; // rdx
  unsigned int v13; // ebx
  __int64 v14; // rbx
  __int64 v15; // r12
  __int64 v16; // rcx
  __int64 v17; // rax
  char v18; // al
  __int64 v19; // rax
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+50h] [rbp+8h] BYREF

  ProcNumber = 0;
  v3 = *(_QWORD *)(a2 + 184);
  v5 = *(_QWORD *)(a1 + 24);
  v6 = *(_QWORD *)(v3 + 8);
  *(_BYTE *)(v3 + 3) |= 1u;
  *(_BYTE *)(v6 + 3) = 0;
  v7 = *(unsigned int *)(v6 + 120);
  *(_QWORD *)(*(_QWORD *)(a2 + 184) + 24LL) = 0LL;
  if ( *(_BYTE *)(v6 + 2) == 40 )
  {
    v8 = KfRaiseIrql(2u);
    KeGetCurrentProcessorNumberEx(&ProcNumber);
    *(struct _PROCESSOR_NUMBER *)(v6 + 96) = ProcNumber;
    v10 = *(_QWORD *)(a2 + 184);
    *(_BYTE *)(a2 + 141) = -88;
    *(_QWORD *)(v10 + 8) = v6;
    if ( *(_BYTE *)(v7 + v6 + 72) == 1 )
      ContiguousIoResources = StorAllocateContiguousIoResources(
                                ((*(_DWORD *)(v5 + 484) + 7) & 0xFFFFFFF8) + 1104,
                                v9,
                                v5);
    else
      ContiguousIoResources = (__int64)RaAllocateIoResource(*(_QWORD *)(a1 + 664) + 64LL);
    if ( ContiguousIoResources )
    {
      v14 = ContiguousIoResources + 48;
      v15 = ContiguousIoResources + 1104;
      RaidZeroXrb(
        ContiguousIoResources + 48,
        v12,
        *(_DWORD *)(ContiguousIoResources + 792),
        *(void **)(ContiguousIoResources + 808));
      if ( *(_BYTE *)(v6 + 2) == 40 )
        v16 = *(_QWORD *)(v6 + 104);
      else
        v16 = *(_QWORD *)(v6 + 40);
      *(_QWORD *)(v14 + 160) = a2;
      *(_QWORD *)(v14 + 168) = v6;
      *(_QWORD *)(v14 + 224) = a1;
      v17 = *(_QWORD *)(a2 + 8);
      *(_QWORD *)(v14 + 136) = 0LL;
      *(_QWORD *)(v14 + 104) = v17;
      *(_QWORD *)(v14 + 768) = v16;
      if ( (*(_BYTE *)(v5 + 4532) & 1) != 0 )
      {
        *(_DWORD *)(v14 + 18) = *(_DWORD *)(v6 + 96);
      }
      else
      {
        *(_BYTE *)(v14 + 20) = -1;
        *(_WORD *)(v14 + 18) = -1;
      }
      v18 = *(_BYTE *)(v14 + 16);
      *(_DWORD *)(v14 + 24) = 0;
      *(_BYTE *)(v14 + 16) = v18 & 0xE3 | 4;
      *(_QWORD *)(v14 + 176) = *(_QWORD *)(v6 + 80);
      v19 = *(_QWORD *)(v6 + 64);
      *(_QWORD *)(v14 + 192) = 0LL;
      *(_QWORD *)(v14 + 184) = v19;
      *(_QWORD *)(v6 + 96) = v14;
      *(_QWORD *)(v6 + 104) = v15;
      RaidAdapterMapBuffers(v5, a2);
      *(_QWORD *)(v14 + 656) = StorUnitExecuteNvmeSrbComplete;
      if ( *(_QWORD *)(v5 + 4832) )
        RaidAdapterPoFxActivateComponent(v5);
      if ( *(_BYTE *)(v5 + 4242) )
        RaidAdapterRaiseIrqlAndExecuteXrb(v5, v14);
      else
        RaidAdapterExecuteXrb(v5, (_QWORD *)v14);
      v13 = 259;
    }
    else
    {
      v13 = -1073741823;
    }
    KeLowerIrql(v8);
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return v13;
}
