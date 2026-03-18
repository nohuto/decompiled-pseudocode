/*
 * XREFs of PopDirectedDripsDiagCreateDeviceDiagnostic @ 0x14099E17C
 * Callers:
 *     PopDirectedDripsDiagBroadcastTreeBegin @ 0x14099DD70 (PopDirectedDripsDiagBroadcastTreeBegin.c)
 *     PopDirectedDripsDiagTraceBroadcastVisit @ 0x14099F220 (PopDirectedDripsDiagTraceBroadcastVisit.c)
 *     PopDirectedDripsDiagTraceMarkDevice @ 0x14099F3E8 (PopDirectedDripsDiagTraceMarkDevice.c)
 * Callees:
 *     PopDirectedDripsDiagCreateDeviceDescription @ 0x14099E058 (PopDirectedDripsDiagCreateDeviceDescription.c)
 *     PopDirectedDripsDiagFreeDeviceDiagnostic @ 0x14099E220 (PopDirectedDripsDiagFreeDeviceDiagnostic.c)
 *     ExAllocatePool2 @ 0x140AAF6B0 (ExAllocatePool2.c)
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
    *(_DWORD *)(Pool2 + 24) = dword_140C390E0++;
    *(_DWORD *)(Pool2 + 148) = -1;
    if ( (int)PopDirectedDripsDiagCreateDeviceDescription(a1, Pool2) < 0 )
    {
      PopDirectedDripsDiagFreeDeviceDiagnostic(v3);
      return 0LL;
    }
    else
    {
      *(_QWORD *)(a1 + 776) = v3;
      v4 = (_QWORD *)qword_140C38ED8;
      if ( *(PVOID **)qword_140C38ED8 != &qword_140C38ED0 )
        __fastfail(3u);
      *v3 = &qword_140C38ED0;
      v3[1] = v4;
      *v4 = v3;
      qword_140C38ED8 = (__int64)v3;
    }
  }
  return v3;
}
