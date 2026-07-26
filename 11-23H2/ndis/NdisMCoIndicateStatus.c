/*
 * XREFs of NdisMCoIndicateStatus @ 0x1C00C3020
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0006820 (WPP_RECORDER_SF_.c)
 *     __security_check_cookie @ 0x1C0036080 (__security_check_cookie.c)
 *     memset @ 0x1C0038700 (memset.c)
 *     ndisCoIndicateStatusInternal @ 0x1C00C2D60 (ndisCoIndicateStatusInternal.c)
 */

void __stdcall NdisMCoIndicateStatus(
        NDIS_HANDLE MiniportAdapterHandle,
        NDIS_HANDLE NdisVcHandle,
        NDIS_STATUS GeneralStatus,
        PVOID StatusBuffer,
        ULONG StatusBufferSize)
{
  struct _NDIS_STATUS_INDICATION v9; // [rsp+30h] [rbp-B8h] BYREF

  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x13u,
      0xCu,
      (struct _GUID *)&WPP_b63bfbe161d630bd8667a0af4d86a580_Traceguids);
  memset(&v9, 0, sizeof(v9));
  v9.StatusBufferSize = StatusBufferSize;
  v9.Header = (_NDIS_OBJECT_HEADER)7340440;
  v9.SourceHandle = MiniportAdapterHandle;
  v9.StatusCode = GeneralStatus;
  v9.StatusBuffer = StatusBuffer;
  ndisCoIndicateStatusInternal((struct _NDIS_MINIPORT_BLOCK *)MiniportAdapterHandle, (__int64)NdisVcHandle, &v9);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x13u,
      0xDu,
      (struct _GUID *)&WPP_b63bfbe161d630bd8667a0af4d86a580_Traceguids);
}
