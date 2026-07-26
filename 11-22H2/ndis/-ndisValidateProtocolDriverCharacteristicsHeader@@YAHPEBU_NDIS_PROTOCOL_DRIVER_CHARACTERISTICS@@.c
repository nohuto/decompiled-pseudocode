/*
 * XREFs of ?ndisValidateProtocolDriverCharacteristicsHeader@@YAHPEBU_NDIS_PROTOCOL_DRIVER_CHARACTERISTICS@@PEAK@Z @ 0x1C011E5C8
 * Callers:
 *     NdisRegisterProtocolDriver @ 0x1C002FA30 (NdisRegisterProtocolDriver.c)
 * Callees:
 *     WPP_RECORDER_SF_DDDDDDDD @ 0x1C006335C (WPP_RECORDER_SF_DDDDDDDD.c)
 *     WPP_RECORDER_SF_DDZ @ 0x1C00634D4 (WPP_RECORDER_SF_DDZ.c)
 */

__int64 __fastcall ndisValidateProtocolDriverCharacteristicsHeader(
        const struct _NDIS_PROTOCOL_DRIVER_CHARACTERISTICS *a1,
        unsigned int *a2)
{
  int MajorNdisVersion; // r11d
  const WCHAR *v3; // rax
  int MinorNdisVersion; // ebx
  int v5; // eax
  unsigned int v6; // r10d
  int v8; // [rsp+20h] [rbp-58h]

  MajorNdisVersion = a1->MajorNdisVersion;
  v3 = (const WCHAR *)&unk_1C00DA1D0;
  MinorNdisVersion = a1->MinorNdisVersion;
  *a2 = 0;
  while ( (MinorNdisVersion | (MajorNdisVersion << 16)) != *(_DWORD *)v3 )
  {
    v3 += 4;
    if ( v3 == L"NdisMinorVersion" )
      goto LABEL_12;
  }
  v5 = *((unsigned __int8 *)v3 + 7) - 1;
  if ( !v5 )
  {
    v6 = 120;
LABEL_9:
    if ( a1->Header.Size >= v6 )
    {
      *a2 = v6;
      return 0LL;
    }
    goto LABEL_15;
  }
  if ( v5 != 1 )
  {
LABEL_12:
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_DDZ(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        (__int64)a2,
        (__int64)a1,
        0x12u,
        v8,
        MajorNdisVersion,
        MinorNdisVersion,
        &a1->Name.Length);
    return 3221291012LL;
  }
  v6 = 128;
  if ( a1->Header.Type == 0x95 && a1->Header.Revision >= 2u )
    goto LABEL_9;
LABEL_15:
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_DDDDDDDD(*((_QWORD *)WPP_GLOBAL_Control + 8), a1->Header.Type, (__int64)a1, 0x13u, v8);
  return 3221291013LL;
}
