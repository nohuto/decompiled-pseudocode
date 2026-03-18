/*
 * XREFs of DpiLeaveSystemDisplay @ 0x1C005EE10
 * Callers:
 *     <none>
 * Callees:
 *     DxgkReleaseAdapterCoreSync @ 0x1C01984C8 (DxgkReleaseAdapterCoreSync.c)
 *     DpiEnableD3Requests @ 0x1C01987EC (DpiEnableD3Requests.c)
 */

LONG DpiLeaveSystemDisplay()
{
  LONG result; // eax

  if ( !byte_1C0140810 && !byte_1C0140811 )
  {
    DxgkReleaseAdapterCoreSync(*(_QWORD *)(qword_1C0140820 + 3912), 2LL);
    if ( *(_BYTE *)(qword_1C0140820 + 484) )
      DpiEnableD3Requests(*(_QWORD *)(qword_1C0140820 + 24));
    ExReleaseResourceLite(*(PERESOURCE *)(qword_1C0140820 + 168));
    KeLeaveCriticalRegion();
    KeReleaseMutex((PRKMUTEX)(qword_1C0140818 + 72), 0);
    _InterlockedExchange64(&qword_1C01404D8, 0LL);
    return KeReleaseMutex(Mutex, 0);
  }
  return result;
}
