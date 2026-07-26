/*
 * XREFs of ?ndisValidateMiniportDriverCharacteristicsHeader@@YAHPEBU_NDIS_MINIPORT_DRIVER_CHARACTERISTICS@@PEBU_UNICODE_STRING@@PEAK22@Z @ 0x1C0111680
 * Callers:
 *     ?ndisInternalRegisterMiniportDriver@@YAHPEAU_DRIVER_OBJECT@@PEAU_UNICODE_STRING@@PEAXPEAU_NDIS_MINIPORT_DRIVER_CHARACTERISTICS@@PEAPEAX@Z @ 0x1C0031880 (-ndisInternalRegisterMiniportDriver@@YAHPEAU_DRIVER_OBJECT@@PEAU_UNICODE_STRING@@PEAXPEAU_NDIS_M.c)
 * Callees:
 *     WPP_RECORDER_SF_DD @ 0x1C00561C8 (WPP_RECORDER_SF_DD_ea_1C00561C8.c)
 *     WPP_RECORDER_SF_DDDDDDDD @ 0x1C005DF80 (WPP_RECORDER_SF_DDDDDDDD.c)
 *     ?NdisTraceLoggingLogoFailure@@YAXW4NdisTLLogoFailureReason@@PEBU_UNICODE_STRING@@_K@Z @ 0x1C012AD48 (-NdisTraceLoggingLogoFailure@@YAXW4NdisTLLogoFailureReason@@PEBU_UNICODE_STRING@@_K@Z.c)
 */

__int64 __fastcall ndisValidateMiniportDriverCharacteristicsHeader(
        const struct _NDIS_MINIPORT_DRIVER_CHARACTERISTICS *a1,
        const struct _UNICODE_STRING *a2,
        unsigned int *a3,
        unsigned int *a4,
        unsigned int *a5)
{
  __int64 MajorNdisVersion; // rcx
  unsigned int v10; // edi
  const wchar_t *v11; // rax
  unsigned int v12; // r11d
  int v14; // [rsp+20h] [rbp-68h]
  __int64 v15; // [rsp+30h] [rbp-58h]

  MajorNdisVersion = a1->MajorNdisVersion;
  *a5 = 0;
  v10 = 152;
  if ( __PAIR16__(a1->MinorNdisVersion, MajorNdisVersion) == 22022 && (unsigned __int16)(a1->Header.Size - 152) <= 7u )
  {
    *a3 = 6;
    *a4 = 70;
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_DD(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        1u,
        0xAu,
        (struct _GUID *)&WPP_37f5471886ec325c8ea92c2cabbd4cf9_Traceguids,
        6,
        86);
    if ( a2 )
      NdisTraceLoggingLogoFailure(MajorNdisVersion, a2, a1->Header.Size);
  }
  else
  {
    *a4 = a1->MinorNdisVersion;
    *a3 = MajorNdisVersion;
  }
  v11 = (const wchar_t *)&unk_1C00D2500;
  while ( (*a4 | (*a3 << 16)) != *(_DWORD *)v11 )
  {
    v11 += 4;
    if ( v11 == L"\\Kernel" )
      goto LABEL_21;
  }
  v12 = *((unsigned __int8 *)v11 + 4);
  if ( v12 == 1 )
  {
    v10 = 136;
LABEL_11:
    if ( a1->Header.Size >= v10 )
    {
      *a5 = v10;
      return 0LL;
    }
    goto LABEL_24;
  }
  if ( v12 != 2 )
  {
    if ( v12 != 3 )
    {
LABEL_21:
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        LODWORD(v15) = a1->MinorNdisVersion;
        WPP_RECORDER_SF_DD(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          2u,
          1u,
          0xBu,
          (struct _GUID *)&WPP_37f5471886ec325c8ea92c2cabbd4cf9_Traceguids,
          a1->MajorNdisVersion,
          v15);
      }
      return 3221291012LL;
    }
    v10 = 160;
  }
  if ( a1->Header.Type == 0x8A && a1->Header.Revision >= v12 )
    goto LABEL_11;
LABEL_24:
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_DDDDDDDD(*((_QWORD *)WPP_GLOBAL_Control + 8), a1->Header.Type, a1->MinorNdisVersion, 0xCu, v14);
  return 3221291013LL;
}
