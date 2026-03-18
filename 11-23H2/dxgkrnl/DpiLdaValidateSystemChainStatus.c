/*
 * XREFs of DpiLdaValidateSystemChainStatus @ 0x1C0225820
 * Callers:
 *     DpiSessionCreateCallback @ 0x1C01EAE28 (DpiSessionCreateCallback.c)
 * Callees:
 *     DpiCheckForOutstandingD3Requests @ 0x1C0005C0C (DpiCheckForOutstandingD3Requests.c)
 *     ?AcquireMiniportListMutex@@YAXXZ @ 0x1C0015C20 (-AcquireMiniportListMutex@@YAXXZ.c)
 *     DpiEnableD3Requests @ 0x1C01987EC (DpiEnableD3Requests.c)
 *     DpiLdaValidateChainStatus @ 0x1C03A8E20 (DpiLdaValidateChainStatus.c)
 */

LONG DpiLdaValidateSystemChainStatus()
{
  __int64 v0; // rdi
  __int64 v1; // rbx
  struct _DEVICE_OBJECT *v3; // rcx

  AcquireMiniportListMutex();
  v0 = qword_1C01404C8;
  if ( *(_QWORD *)v0 != v0 )
  {
    do
    {
      KeWaitForSingleObject((PVOID)(v0 + 72), Executive, 0, 0, 0LL);
      v1 = *(_QWORD *)(v0 + 56);
      if ( *(_QWORD *)v1 != v1 )
      {
        do
        {
          if ( *(_DWORD *)(v1 + 16) != 1953656900 || *(_DWORD *)(v1 + 20) != 4 )
          {
            KeEnterCriticalRegion();
            if ( *(_BYTE *)(v1 + 484) )
              DpiCheckForOutstandingD3Requests(v1);
            ExAcquireResourceSharedLite(*(PERESOURCE *)(v1 + 168), 1u);
            if ( *(_DWORD *)(v1 + 504) && (int)DpiLdaValidateChainStatus(*(_QWORD *)(v1 + 24)) < 0 )
            {
              v3 = *(struct _DEVICE_OBJECT **)(v1 + 152);
              *(_BYTE *)(v1 + 232) = 1;
              IoInvalidateDeviceState(v3);
            }
            if ( *(_BYTE *)(v1 + 484) )
              DpiEnableD3Requests(*(_QWORD *)(v1 + 24));
            ExReleaseResourceLite(*(PERESOURCE *)(v1 + 168));
            KeLeaveCriticalRegion();
          }
          v1 = *(_QWORD *)v1;
        }
        while ( *(_QWORD *)v1 != *(_QWORD *)(v0 + 56) );
      }
      KeReleaseMutex((PRKMUTEX)(v0 + 72), 0);
      v0 = *(_QWORD *)v0;
    }
    while ( *(_QWORD *)v0 != qword_1C01404C8 );
  }
  _InterlockedExchange64(&qword_1C01404D8, 0LL);
  return KeReleaseMutex(Mutex, 0);
}
