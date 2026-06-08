/*
 * XREFs of PerformanceFromPercentage @ 0x1C0001B80
 * Callers:
 *     PerfControlCpc @ 0x1C00018A0 (PerfControlCpc.c)
 *     PerfSelectionCppcRequestMsr @ 0x1C0003440 (PerfSelectionCppcRequestMsr.c)
 *     PerfControlCpcHidden @ 0x1C00053D0 (PerfControlCpcHidden.c)
 *     PerfControlCpcSingleRegister @ 0x1C0005500 (PerfControlCpcSingleRegister.c)
 *     PerfControlCpcSingleRegisterHidden @ 0x1C00057A0 (PerfControlCpcSingleRegisterHidden.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall PerformanceFromPercentage(__int64 a1, unsigned int a2)
{
  if ( a2 == *(_DWORD *)(a1 + 100) )
    return *(_QWORD *)(a1 + 40);
  if ( a2 == 100 )
    return *(_QWORD *)(a1 + 48);
  if ( *(_BYTE *)(a1 + 131) && a2 == *(_DWORD *)(a1 + 116) )
    return *(_QWORD *)(a1 + 88);
  if ( a2 == *(_DWORD *)(a1 + 108) )
    return *(_QWORD *)(a1 + 56);
  if ( a2 == *(_DWORD *)(a1 + 112) )
    return *(_QWORD *)(a1 + 64);
  return (*(_QWORD *)(a1 + 48) * (unsigned __int64)a2 + 50) / 0x64;
}
