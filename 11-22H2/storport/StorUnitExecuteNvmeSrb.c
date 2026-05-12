/*
 * XREFs of StorUnitExecuteNvmeSrb @ 0x1C0074478
 * Callers:
 *     RaUnitScsiIrp @ 0x1C0004C30 (RaUnitScsiIrp.c)
 * Callees:
 *     RaAllocateIoResource @ 0x1C0004A1C (RaAllocateIoResource.c)
 *     RaidZeroXrb @ 0x1C0004AA4 (RaidZeroXrb.c)
 *     StorAllocateContiguousIoResources @ 0x1C000826C (StorAllocateContiguousIoResources.c)
 *     RaidAdapterPoFxActivateComponent @ 0x1C00089E4 (RaidAdapterPoFxActivateComponent.c)
 *     RaidAdapterRaiseIrqlAndExecuteXrb @ 0x1C0008BAC (RaidAdapterRaiseIrqlAndExecuteXrb.c)
 *     RaidAdapterExecuteXrb @ 0x1C0008C08 (RaidAdapterExecuteXrb.c)
 *     RaidAdapterMapBuffers @ 0x1C003677C (RaidAdapterMapBuffers.c)
 */

__int64 __fastcall StorUnitExecuteNvmeSrb(__int64 a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v5; // rsi
  __int64 v6; // rdi
  __int64 v7; // rbx
  unsigned int v8; // ebx
  KIRQL v9; // r15
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 ContiguousIoResources; // rax
  __int64 v13; // rdx
  __int64 v14; // rbx
  __int64 v15; // r12
  __int64 v16; // rcx
  __int64 v17; // rax
  char v18; // al
  __int64 v19; // rax
  __int64 v20; // r8
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+50h] [rbp+8h] BYREF

  ProcNumber = 0;
  v3 = *(_QWORD *)(a2 + 184);
  v5 = *(_QWORD *)(a1 + 24);
  v6 = *(_QWORD *)(v3 + 8);
  *(_BYTE *)(v3 + 3) |= 1u;
  *(_BYTE *)(v6 + 3) = 0;
  v7 = v6 + *(unsigned int *)(v6 + 120);
  *(_QWORD *)(*(_QWORD *)(a2 + 184) + 24LL) = 0LL;
  if ( *(_BYTE *)(v6 + 2) == 40 )
  {
    if ( DisableIEEE1667
      && *(_BYTE *)(v7 + 72) == 1
      && (unsigned int)(unsigned __int8)*(_DWORD *)(v7 + 8) - 129 <= 1
      && *(_BYTE *)(v7 + 51) == 0xEE )
    {
      return (unsigned int)-1073741637;
    }
    else
    {
      v9 = KfRaiseIrql(2u);
      KeGetCurrentProcessorNumberEx(&ProcNumber);
      *(struct _PROCESSOR_NUMBER *)(v6 + 96) = ProcNumber;
      v11 = *(_QWORD *)(a2 + 184);
      *(_BYTE *)(a2 + 141) = -88;
      *(_QWORD *)(v11 + 8) = v6;
      if ( *(_BYTE *)(v7 + 72) == 1 )
        ContiguousIoResources = StorAllocateContiguousIoResources(
                                  ((*(_DWORD *)(v5 + 484) + 7) & 0xFFFFFFF8) + 1104,
                                  v10,
                                  v5);
      else
        ContiguousIoResources = (__int64)RaAllocateIoResource(*(_QWORD *)(a1 + 664) + 64LL);
      if ( ContiguousIoResources )
      {
        v14 = ContiguousIoResources + 48;
        v15 = ContiguousIoResources + 1104;
        RaidZeroXrb(
          ContiguousIoResources + 48,
          v13,
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
        if ( (*(_BYTE *)(v5 + 4596) & 1) != 0 )
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
        if ( *(_QWORD *)(v5 + 4896) )
          RaidAdapterPoFxActivateComponent(v5, 0LL, 1LL);
        if ( *(_BYTE *)(v5 + 4306) )
          RaidAdapterRaiseIrqlAndExecuteXrb(v5, v14);
        else
          RaidAdapterExecuteXrb(v5, (_QWORD *)v14, v20);
        v8 = 259;
      }
      else
      {
        v8 = -1073741823;
      }
      KeLowerIrql(v9);
    }
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return v8;
}
