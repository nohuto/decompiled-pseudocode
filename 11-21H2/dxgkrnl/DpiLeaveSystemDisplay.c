/*
 * XREFs of DpiLeaveSystemDisplay @ 0x1C005FF30
 * Callers:
 *     <none>
 * Callees:
 *     DpiEnableD3Requests @ 0x1C016E8A8 (DpiEnableD3Requests.c)
 *     DxgkReleaseAdapterCoreSync @ 0x1C01B4124 (DxgkReleaseAdapterCoreSync.c)
 */

LONG DpiLeaveSystemDisplay()
{
  LONG result; // eax

  if ( !byte_1C0130810 && !byte_1C0130811 )
  {
    DxgkReleaseAdapterCoreSync(*(_QWORD *)(qword_1C0130820 + 3896), 2LL);
    if ( *(_BYTE *)(qword_1C0130820 + 484) )
      DpiEnableD3Requests(*(_QWORD *)(qword_1C0130820 + 24));
    ExReleaseResourceLite(*(PERESOURCE *)(qword_1C0130820 + 168));
    KeLeaveCriticalRegion();
    KeReleaseMutex((PRKMUTEX)(qword_1C0130818 + 72), 0);
    _InterlockedExchange64(&qword_1C01304D8, 0LL);
    return KeReleaseMutex(Mutex, 0);
  }
  return result;
}
