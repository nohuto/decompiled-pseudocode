/*
 * XREFs of PpmEventGetEventDescriptorAndProcessorId @ 0x140257790
 * Callers:
 *     PpmEventPerfSelectProcessorState @ 0x140255A48 (PpmEventPerfSelectProcessorState.c)
 *     PpmEventTraceDeliveredPerfChange @ 0x140255B30 (PpmEventTraceDeliveredPerfChange.c)
 *     PpmEventTraceRecordedUtility @ 0x1402576F0 (PpmEventTraceRecordedUtility.c)
 *     PpmEventProcessorPerfStateChange @ 0x14034F570 (PpmEventProcessorPerfStateChange.c)
 *     PpmEventTraceExpectedUtility @ 0x14034F610 (PpmEventTraceExpectedUtility.c)
 *     PpmEventAutonomousModeChange @ 0x14059A090 (PpmEventAutonomousModeChange.c)
 *     PpmEventBiosCapChange @ 0x14059A14C (PpmEventBiosCapChange.c)
 *     PpmEventThermalCapChange @ 0x14059BB80 (PpmEventThermalCapChange.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PpmEventGetEventDescriptorAndProcessorId(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  int v6; // eax
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 68) )
  {
    a3 = a2;
    *(_WORD *)a4 = *(unsigned __int8 *)(a1 - 33760);
    *(_BYTE *)(a4 + 2) = *(_BYTE *)(a1 - 33759);
    v6 = 3;
  }
  else
  {
    v6 = 4;
    *(_DWORD *)a4 = *(_DWORD *)(*(_QWORD *)(a1 + 8) + 20LL);
  }
  *(_QWORD *)a5 = a4;
  *(_DWORD *)(a5 + 8) = v6;
  result = a3;
  *(_DWORD *)(a5 + 12) = 0;
  return result;
}
