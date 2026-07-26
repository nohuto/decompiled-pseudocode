/*
 * XREFs of NdisMapFile @ 0x1C01574A0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0006820 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C002A228 (WPP_RECORDER_SF_D.c)
 */

void __stdcall NdisMapFile(PNDIS_STATUS Status, PVOID *MappedBuffer, NDIS_HANDLE FileHandle)
{
  int v6; // eax
  void *v7; // rax
  char v8[4]; // [rsp+28h] [rbp-10h]

  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x14u,
      (struct _GUID *)&WPP_cdc05a73e2a7317b4d5b1bd183068846_Traceguids);
  if ( *((_BYTE *)FileHandle + 16) == 1 )
  {
    v6 = -1073676259;
  }
  else
  {
    v7 = *(void **)FileHandle;
    *((_BYTE *)FileHandle + 16) = 1;
    *MappedBuffer = v7;
    v6 = 0;
  }
  *Status = v6;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    *(_DWORD *)v8 = v6;
    WPP_RECORDER_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x15u,
      (struct _GUID *)&WPP_cdc05a73e2a7317b4d5b1bd183068846_Traceguids,
      *(_DWORD *)v8);
  }
}
