/*
 * XREFs of MmGetSessionCreateTime @ 0x140754ED0
 * Callers:
 *     EtwpWriteProcessStarted @ 0x140753B50 (EtwpWriteProcessStarted.c)
 *     EtwQueryProcessTelemetryInfo @ 0x140754850 (EtwQueryProcessTelemetryInfo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmGetSessionCreateTime(__int64 a1)
{
  __int64 v1; // rax

  v1 = *(_QWORD *)(a1 + 1368);
  if ( !v1 || (*(_DWORD *)(a1 + 2172) & 0x1000) != 0 )
    return 0LL;
  else
    return *(_QWORD *)(v1 + 792);
}
