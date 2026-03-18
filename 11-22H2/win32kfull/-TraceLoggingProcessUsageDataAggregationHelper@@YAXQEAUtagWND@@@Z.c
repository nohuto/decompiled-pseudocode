/*
 * XREFs of ?TraceLoggingProcessUsageDataAggregationHelper@@YAXQEAUtagWND@@@Z @ 0x1C0066EE8
 * Callers:
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x1C0065F18 (_anonymous_namespace_--xxxLocalActivateWindow.c)
 * Callees:
 *     IsShellProcess @ 0x1C0066FBC (IsShellProcess.c)
 *     ?TraceLoggingProcessMonitorInfoUpdateHelper@@YAXQEAUtagWND@@H@Z @ 0x1C008E854 (-TraceLoggingProcessMonitorInfoUpdateHelper@@YAXQEAUtagWND@@H@Z.c)
 */

void __fastcall TraceLoggingProcessUsageDataAggregationHelper(struct tagWND *const a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  if ( gptiCurrent )
  {
    v2 = *(_QWORD *)(gptiCurrent + 424LL);
    if ( v2 )
    {
      if ( !(unsigned int)IsShellProcess(v2) && *(_DWORD *)(v3 + 1032) )
      {
        if ( !*(_DWORD *)(v3 + 944) )
        {
          *(_DWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 964LL) = (unsigned int)PsGetThreadProcessId((PETHREAD)*gptiCurrent);
          *(_DWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 996LL) &= ~1u;
          *(_DWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 996LL) &= ~2u;
          *(_DWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 996LL) &= ~4u;
          *(_DWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 992LL) = 0;
          *(_DWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 988LL) = 0;
        }
        TraceLoggingProcessMonitorInfoUpdateHelper(a1, 0);
        ++*(_DWORD *)(*(_QWORD *)(gptiCurrent + 424LL) + 944LL);
      }
    }
  }
}
