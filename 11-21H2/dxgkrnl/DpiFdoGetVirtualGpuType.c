/*
 * XREFs of DpiFdoGetVirtualGpuType @ 0x1C03896AC
 * Callers:
 *     ?DpiSetPartitionVmbus@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAXK@Z @ 0x1C00603D8 (-DpiSetPartitionVmbus@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAXK@Z.c)
 *     DpiFdoDispatchCleanupAndClose @ 0x1C01DDD20 (DpiFdoDispatchCleanupAndClose.c)
 *     DpiFdoDispatchIoctl @ 0x1C01E6840 (DpiFdoDispatchIoctl.c)
 *     DpiFlexIovMitigationUpdate @ 0x1C038BF98 (DpiFlexIovMitigationUpdate.c)
 *     DpiSriovAttach @ 0x1C038C3D4 (DpiSriovAttach.c)
 *     DpiSriovNotification @ 0x1C038C828 (DpiSriovNotification.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall DpiFdoGetVirtualGpuType(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // r8
  __int64 v3; // rcx
  _BOOL8 result; // rax
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  v1 = *(_QWORD *)(a1 + 184);
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\GPUPARAV");
  v3 = *(_QWORD *)(v1 + 48);
  result = 0;
  if ( v3 )
  {
    LOBYTE(v2) = 1;
    if ( RtlFindUnicodeSubstring(v3 + 88, &DestinationString, v2) )
      return 1;
  }
  return result;
}
