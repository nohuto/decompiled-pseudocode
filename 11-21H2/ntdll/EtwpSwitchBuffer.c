/*
 * XREFs of EtwpSwitchBuffer @ 0x180005964
 * Callers:
 *     EtwpReserveTraceBuffer @ 0x180005850 (EtwpReserveTraceBuffer.c)
 * Callees:
 *     EtwpDequeueFreeBuffer @ 0x180005AC0 (EtwpDequeueFreeBuffer.c)
 *     EtwpAllocateFreeBuffers @ 0x1800083A0 (EtwpAllocateFreeBuffers.c)
 *     RtlEnterCriticalSection @ 0x18003A5E0 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18003B5D0 (RtlLeaveCriticalSection.c)
 *     RtlSleepConditionVariableCS @ 0x18006AAC0 (RtlSleepConditionVariableCS.c)
 *     ZwSetEvent @ 0x1800A4230 (ZwSetEvent.c)
 */

char __fastcall EtwpSwitchBuffer(__int64 a1, __int64 a2, unsigned int a3)
{
  _RTL_CRITICAL_SECTION *v3; // r12
  __int64 v5; // rbx
  int v6; // r13d
  char v7; // r15
  char v9; // bp
  __int64 v10; // r14
  __int64 i; // rbx
  __int64 v12; // r10
  _QWORD *v13; // rcx

  v3 = (_RTL_CRITICAL_SECTION *)(a1 + 72);
  v5 = a3;
  v6 = *(_DWORD *)(a1 + 308) & 0x400;
  v7 = 0;
  v9 = 1;
  RtlEnterCriticalSection((PRTL_CRITICAL_SECTION)(a1 + 72));
  v10 = (unsigned int)v5;
  for ( i = *(_QWORD *)(a1 + 8 * v5 + 560); !i || a2 == i; i = *(_QWORD *)(a1 + 8 * v10 + 560) )
  {
    v12 = EtwpDequeueFreeBuffer(a1);
    if ( v12 )
    {
LABEL_5:
      *(_WORD *)(v12 + 40) = *(_WORD *)(*(_QWORD *)(a1 + 536) + 4 * v10 + 2);
      *(_WORD *)(v12 + 42) = *(_WORD *)(*(_QWORD *)(a1 + 536) + 4 * v10);
      *(_QWORD *)(a1 + 8 * v10 + 560) = v12;
      if ( a2 && a2 == i )
      {
        v13 = (_QWORD *)(a2 + 32);
        if ( v6 )
        {
          *(_DWORD *)(a2 + 44) = 0;
          *v13 = 0LL;
          *(_QWORD *)(a2 + 24) = _InterlockedIncrement64((volatile signed __int64 *)(a1 + 400));
          **(_QWORD **)(a1 + 240) = v13;
          *(_QWORD *)(a1 + 240) = v13;
          _InterlockedAdd((volatile signed __int32 *)(a1 + 212), 1u);
        }
        else
        {
          *(_DWORD *)(a2 + 44) = 3;
          v7 = 1;
          **(_QWORD **)(a1 + 264) = v13;
          *(_QWORD *)(a1 + 264) = v13;
        }
      }
      break;
    }
    if ( (*(_DWORD *)(a1 + 308) & 0x400) == 0 )
    {
      while ( (unsigned int)EtwpAllocateFreeBuffers(a1, 1LL) == 1 )
      {
        v12 = EtwpDequeueFreeBuffer(a1);
        if ( v12 )
          goto LABEL_5;
      }
    }
    if ( (*(_DWORD *)(a1 + 308) & 0x20000000) == 0 || !*(_DWORD *)(a1 + 312) )
    {
      v9 = 0;
      break;
    }
    RtlSleepConditionVariableCS((PRTL_CONDITION_VARIABLE)(a1 + 64), v3, 0LL);
  }
  RtlLeaveCriticalSection(v3);
  if ( a2 )
    _InterlockedDecrement((volatile signed __int32 *)(a2 + 12));
  if ( v7
    && (!*(_DWORD *)(a1 + 352)
     || (unsigned int)(*(_DWORD *)(a1 + 208) - *(_DWORD *)(a1 + 188) - *(_DWORD *)(a1 + 212)) >= *(_DWORD *)(a1 + 352)) )
  {
    ZwSetEvent(*(HANDLE *)(a1 + 112), 0LL);
  }
  return v9;
}
