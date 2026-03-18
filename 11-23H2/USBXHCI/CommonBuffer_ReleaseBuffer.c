/*
 * XREFs of CommonBuffer_ReleaseBuffer @ 0x1C001E754
 * Callers:
 *     Endpoint_UcxEvtDefaultEndpointUpdate @ 0x1C001B610 (Endpoint_UcxEvtDefaultEndpointUpdate.c)
 *     Endpoint_EvaluateContextCompletion @ 0x1C001B8D0 (Endpoint_EvaluateContextCompletion.c)
 *     XilCommonBuffer_ReleaseBuffer @ 0x1C001E9A8 (XilCommonBuffer_ReleaseBuffer.c)
 *     XilEndpoint_AllocateStreamContextArray @ 0x1C0038C1C (XilEndpoint_AllocateStreamContextArray.c)
 *     XilEndpoint_FreeStreamContextArray @ 0x1C003919C (XilEndpoint_FreeStreamContextArray.c)
 *     XilEndpoint_ReleaseBuffer @ 0x1C0039274 (XilEndpoint_ReleaseBuffer.c)
 *     Endpoint_OnResetEndpointConfigureCompletion @ 0x1C003B000 (Endpoint_OnResetEndpointConfigureCompletion.c)
 *     Endpoint_OnResetEndpointConfigureCompletion_EpDropped @ 0x1C003B1D0 (Endpoint_OnResetEndpointConfigureCompletion_EpDropped.c)
 *     TR_AcquireSecureSegments @ 0x1C0040F64 (TR_AcquireSecureSegments.c)
 *     TR_CreateSecureObject @ 0x1C00413DC (TR_CreateSecureObject.c)
 *     TR_WdfEvtCleanupCallback @ 0x1C0041D80 (TR_WdfEvtCleanupCallback.c)
 *     Crashdump_UcxEvtFreeDumpData @ 0x1C004D0E0 (Crashdump_UcxEvtFreeDumpData.c)
 *     Crashdump_UcxEvtGetDumpData @ 0x1C004D240 (Crashdump_UcxEvtGetDumpData.c)
 *     XilCoreCommand_FreeResources @ 0x1C0052B0C (XilCoreCommand_FreeResources.c)
 *     XilCoreDeviceSlot_FreeResources @ 0x1C0052F24 (XilCoreDeviceSlot_FreeResources.c)
 *     XilCoreUsbDevice_FreeResources @ 0x1C0053004 (XilCoreUsbDevice_FreeResources.c)
 * Callees:
 *     XilCoreCommonBuffer_ReleaseBufferInternal @ 0x1C0013390 (XilCoreCommonBuffer_ReleaseBufferInternal.c)
 *     SecureDmaEnabler_FreeCommonBufferPage @ 0x1C0052018 (SecureDmaEnabler_FreeCommonBufferPage.c)
 */

void __fastcall CommonBuffer_ReleaseBuffer(__int64 a1, __int64 a2)
{
  int v2; // eax
  __int64 v4; // rbx

  v2 = *(_DWORD *)(a2 + 80);
  switch ( v2 )
  {
    case 1:
      v4 = a1 + 88;
      *(_BYTE *)(a1 + 113) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 104));
      XilCoreCommonBuffer_ReleaseBufferInternal(v4, a2);
      KeReleaseSpinLock((PKSPIN_LOCK)(v4 + 16), *(_BYTE *)(v4 + 25));
      return;
    case 2:
LABEL_7:
      ExFreePoolWithTag((PVOID)a2, 0x49434858u);
      return;
    case 3:
      SecureDmaEnabler_FreeCommonBufferPage(*(_QWORD *)(*(_QWORD *)a1 + 104LL), *(_QWORD *)(a2 + 88));
      goto LABEL_7;
  }
}
