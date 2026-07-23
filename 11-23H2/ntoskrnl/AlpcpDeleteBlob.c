/*
 * XREFs of AlpcpDeleteBlob @ 0x14071C31C
 * Callers:
 *     AlpcpFlushResourcesPort @ 0x140719710 (AlpcpFlushResourcesPort.c)
 *     AlpcpDeleteView @ 0x14071C2E8 (AlpcpDeleteView.c)
 *     NtAlpcCreateSecurityContext @ 0x14071C780 (NtAlpcCreateSecurityContext.c)
 *     AlpcpCaptureSecurityAttributeInternal @ 0x14071CA48 (AlpcpCaptureSecurityAttributeInternal.c)
 *     NtAlpcDeleteSecurityContext @ 0x14071EA40 (NtAlpcDeleteSecurityContext.c)
 *     NtAlpcCreatePortSection @ 0x14076C420 (NtAlpcCreatePortSection.c)
 *     AlpcpMapLegacyPortView @ 0x1407B9BF0 (AlpcpMapLegacyPortView.c)
 *     NtAlpcDeletePortSection @ 0x1407C5300 (NtAlpcDeletePortSection.c)
 *     NtAlpcDeleteResourceReserve @ 0x1408A50E0 (NtAlpcDeleteResourceReserve.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140231120 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140231350 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1402BDBF0 (ExfTryToWakePushLock.c)
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 */

char __fastcall AlpcpDeleteBlob(__int64 a1)
{
  volatile signed __int64 *v1; // rbx
  char v3; // al

  v1 = (volatile signed __int64 *)(a1 - 16);
  ExAcquirePushLockExclusiveEx(a1 - 16, 0LL);
  v3 = *(_BYTE *)(a1 - 32);
  if ( (v3 & 8) != 0 )
  {
    if ( (_InterlockedExchangeAdd64(v1, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v1);
    KeAbPostRelease((ULONG_PTR)v1);
    return 0;
  }
  else
  {
    *(_BYTE *)(a1 - 32) = v3 | 8;
    if ( (_InterlockedExchangeAdd64(v1, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v1);
    KeAbPostRelease((ULONG_PTR)v1);
    (*(void (__fastcall **)(__int64))(AlpcpRegisteredTypes[*(unsigned __int8 *)(a1 - 31)] + 32))(a1);
    return 1;
  }
}
