/*
 * XREFs of ?ndisQueryDeviceFlags@@YAXPEB_WPEA_K@Z @ 0x1C00338F8
 * Callers:
 *     ?ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z @ 0x1C013EFE0 (-ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00088CC (WPP_RECORDER_SF_.c)
 *     ?RtlStringCbPrintfW@@YAJPEA_W_KPEB_WZZ @ 0x1C002563C (-RtlStringCbPrintfW@@YAJPEA_W_KPEB_WZZ.c)
 *     WPP_RECORDER_SF_Sd @ 0x1C0033A10 (WPP_RECORDER_SF_Sd.c)
 *     WPP_RECORDER_SF_Si @ 0x1C005B820 (WPP_RECORDER_SF_Si.c)
 */

void __fastcall ndisQueryDeviceFlags(const wchar_t *a1, unsigned __int64 *a2)
{
  __int64 v3; // rax
  unsigned __int64 v5; // rbp
  wchar_t *Pool2; // rax
  wchar_t *v7; // rdi
  int DeviceFlags; // eax
  int v9; // edx

  *a2 = 0LL;
  v3 = -1LL;
  do
    ++v3;
  while ( a1[v3] );
  v5 = 2 * v3 + 12;
  Pool2 = (wchar_t *)ExAllocatePool2(66LL, v5, 538985550);
  v7 = Pool2;
  if ( Pool2 )
  {
    RtlStringCbPrintfW(Pool2, v5, (wchar_t *)L"%ws:%ws", L"NDIS", a1);
    DeviceFlags = KseQueryDeviceFlags(v7, L"NdisMp", a2);
    if ( DeviceFlags >= 0 )
    {
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v9) = 4;
        WPP_RECORDER_SF_Si(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v9,
          13,
          118,
          (struct _GUID *)&WPP_39285a130bc13dc3f0681d114c7faf72_Traceguids,
          (__int64)a1,
          *a2);
      }
    }
    else if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v9) = 4;
      WPP_RECORDER_SF_Sd(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v9,
        13,
        119,
        (struct _GUID *)&WPP_39285a130bc13dc3f0681d114c7faf72_Traceguids,
        (__int64)a1,
        DeviceFlags);
    }
    ExFreePoolWithTag(v7, 0);
  }
  else if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      2u,
      0xDu,
      0x75u,
      (struct _GUID *)&WPP_39285a130bc13dc3f0681d114c7faf72_Traceguids);
  }
}
