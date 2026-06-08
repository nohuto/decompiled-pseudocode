/*
 * XREFs of ProcLibGetEventDescriptorAndProcessorId @ 0x1C00023B0
 * Callers:
 *     ProcLibTraceProcessorSpecificEvent @ 0x1C00040F8 (ProcLibTraceProcessorSpecificEvent.c)
 *     ProcLibTraceBiosPStatesRundown @ 0x1C00210D8 (ProcLibTraceBiosPStatesRundown.c)
 *     ProcLibTraceBiosTStatesRundown @ 0x1C0021384 (ProcLibTraceBiosTStatesRundown.c)
 *     ProcLibTraceCap @ 0x1C00216CC (ProcLibTraceCap.c)
 *     ProcLibTracePerfStatesRundown @ 0x1C002243C (ProcLibTracePerfStatesRundown.c)
 *     ProcLibTraceSummary2 @ 0x1C00226CC (ProcLibTraceSummary2.c)
 *     ProcLibTraceProcessorRundown @ 0x1C003C93C (ProcLibTraceProcessorRundown.c)
 *     ProcLibTraceSummary @ 0x1C003CB7C (ProcLibTraceSummary.c)
 *     ProcLibTraceProcessorLpiRundown @ 0x1C003CE78 (ProcLibTraceProcessorLpiRundown.c)
 *     ProcLibTraceBiosCStatesRundown @ 0x1C003D10C (ProcLibTraceBiosCStatesRundown.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ProcLibGetEventDescriptorAndProcessorId(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  int v6; // eax
  __int64 v8; // rax
  struct _PROCESSOR_NUMBER ProcNumber; // [rsp+30h] [rbp+8h] BYREF

  ProcNumber = 0;
  v6 = *(_DWORD *)(a1 + 80);
  if ( v6 == 1 )
  {
    *(_DWORD *)a4 = *(_DWORD *)(a1 + 72);
    v8 = a5;
    *(_DWORD *)(a5 + 8) = 4;
  }
  else
  {
    if ( v6 == 2 || KeGetProcessorNumberFromIndex(*(ULONG *)(a1 + 56), &ProcNumber) < 0 )
      return 0LL;
    a3 = a2;
    *(_WORD *)a4 = ProcNumber.Group;
    *(_BYTE *)(a4 + 2) = ProcNumber.Number;
    v8 = a5;
    *(_DWORD *)(a5 + 8) = 3;
  }
  *(_DWORD *)(v8 + 12) = 0;
  *(_QWORD *)v8 = a4;
  return a3;
}
