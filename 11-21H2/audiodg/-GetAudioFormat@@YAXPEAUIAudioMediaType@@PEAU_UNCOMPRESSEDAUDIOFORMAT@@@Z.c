/*
 * XREFs of ?GetAudioFormat@@YAXPEAUIAudioMediaType@@PEAU_UNCOMPRESSEDAUDIOFORMAT@@@Z @ 0x14000C7FC
 * Callers:
 *     ?AllocateConnectionBuffer@CDeviceGraphObjectCache@@UEAAJPEAUAPO_CONNECTION_DESCRIPTOR@@PEA_K@Z @ 0x14000C8A0 (-AllocateConnectionBuffer@CDeviceGraphObjectCache@@UEAAJPEAUAPO_CONNECTION_DESCRIPTOR@@PEA_K@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall GetAudioFormat(struct IAudioMediaType *a1, struct _UNCOMPRESSEDAUDIOFORMAT *a2)
{
  unsigned __int16 *v3; // rdx
  DWORD v4; // eax

  v3 = (unsigned __int16 *)((__int64 (__fastcall *)(struct IAudioMediaType *))a1->lpVtbl->GetAudioFormat)(a1);
  a2->dwSamplesPerFrame = v3[1];
  a2->dwBytesPerSampleContainer = v3[7] >> 3;
  a2->fFramesPerSecond = (float)*((int *)v3 + 1);
  if ( *v3 == 0xFFFE )
  {
    a2->guidFormatType = *(GUID *)(v3 + 12);
    a2->dwValidBitsPerSample = v3[9];
    v4 = *((_DWORD *)v3 + 5);
  }
  else
  {
    a2->guidFormatType = GUID_00000001_0000_0010_8000_00aa00389b71;
    a2->guidFormatType.Data1 = *v3;
    a2->dwValidBitsPerSample = v3[7];
    v4 = 1;
    if ( v3[1] != 1 )
    {
      v4 = 0;
      if ( v3[1] == 2 )
        v4 = 3;
    }
  }
  a2->dwChannelMask = v4;
}
