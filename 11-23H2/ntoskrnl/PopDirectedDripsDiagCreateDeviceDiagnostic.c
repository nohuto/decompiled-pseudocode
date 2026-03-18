/*
 * XREFs of PopDirectedDripsDiagCreateDeviceDiagnostic @ 0x14099E0CC
 * Callers:
 *     PopDirectedDripsDiagBroadcastTreeBegin @ 0x14099DCC0 (PopDirectedDripsDiagBroadcastTreeBegin.c)
 *     PopDirectedDripsDiagTraceBroadcastVisit @ 0x14099F170 (PopDirectedDripsDiagTraceBroadcastVisit.c)
 *     PopDirectedDripsDiagTraceMarkDevice @ 0x14099F338 (PopDirectedDripsDiagTraceMarkDevice.c)
 * Callees:
 *     PopDirectedDripsDiagCreateDeviceDescription @ 0x14099DFA8 (PopDirectedDripsDiagCreateDeviceDescription.c)
 *     PopDirectedDripsDiagFreeDeviceDiagnostic @ 0x14099E170 (PopDirectedDripsDiagFreeDeviceDiagnostic.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

_QWORD *__fastcall PopDirectedDripsDiagCreateDeviceDiagnostic(__int64 a1)
{
  __int64 Pool2; // rax
  _QWORD *v3; // rbx
  _QWORD *v4; // rax

  Pool2 = ExAllocatePool2(256LL, 168LL, 1734960208LL);
  v3 = (_QWORD *)Pool2;
  if ( Pool2 )
  {
    *(_QWORD *)(Pool2 + 16) = a1;
    *(_DWORD *)(Pool2 + 24) = dword_140C390C0++;
    *(_DWORD *)(Pool2 + 148) = -1;
    if ( (int)PopDirectedDripsDiagCreateDeviceDescription(a1, Pool2) < 0 )
    {
      PopDirectedDripsDiagFreeDeviceDiagnostic(v3);
      return 0LL;
    }
    else
    {
      *(_QWORD *)(a1 + 776) = v3;
      v4 = (_QWORD *)qword_140C38EB8;
      if ( *(PVOID **)qword_140C38EB8 != &qword_140C38EB0 )
        __fastfail(3u);
      *v3 = &qword_140C38EB0;
      v3[1] = v4;
      *v4 = v3;
      qword_140C38EB8 = (__int64)v3;
    }
  }
  return v3;
}
