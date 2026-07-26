/*
 * XREFs of NdisCloseFile @ 0x1C00BEB00
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00088CC (WPP_RECORDER_SF_.c)
 */

void __stdcall NdisCloseFile(NDIS_HANDLE FileHandle)
{
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x12u,
      (struct _GUID *)&WPP_cdc05a73e2a7317b4d5b1bd183068846_Traceguids);
  ExFreePoolWithTag(*(PVOID *)FileHandle, 0);
  ExFreePoolWithTag(FileHandle, 0);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x13u,
      (struct _GUID *)&WPP_cdc05a73e2a7317b4d5b1bd183068846_Traceguids);
}
