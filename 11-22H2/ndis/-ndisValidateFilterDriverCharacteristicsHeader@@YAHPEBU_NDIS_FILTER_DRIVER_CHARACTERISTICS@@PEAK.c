/*
 * XREFs of ?ndisValidateFilterDriverCharacteristicsHeader@@YAHPEBU_NDIS_FILTER_DRIVER_CHARACTERISTICS@@PEAK@Z @ 0x1C011E518
 * Callers:
 *     NdisFRegisterFilterDriver @ 0x1C0030530 (NdisFRegisterFilterDriver.c)
 * Callees:
 *     WPP_RECORDER_SF_DDDDDDDD @ 0x1C006335C (WPP_RECORDER_SF_DDDDDDDD.c)
 *     WPP_RECORDER_SF_DDZ @ 0x1C00634D4 (WPP_RECORDER_SF_DDZ.c)
 */

__int64 __fastcall ndisValidateFilterDriverCharacteristicsHeader(
        const struct _NDIS_FILTER_DRIVER_CHARACTERISTICS *a1,
        const WCHAR *a2)
{
  int MajorNdisVersion; // r11d
  const WCHAR *v3; // rax
  int MinorNdisVersion; // ebx
  WCHAR *v5; // r9
  __int64 v6; // r8
  unsigned int v7; // r10d
  __int64 v8; // r8
  __int64 Type; // rdx
  int v11; // [rsp+20h] [rbp-58h]

  MajorNdisVersion = a1->MajorNdisVersion;
  v3 = (const WCHAR *)&unk_1C00DA1D0;
  *(_DWORD *)a2 = 0;
  MinorNdisVersion = a1->MinorNdisVersion;
  v5 = (WCHAR *)a2;
  v6 = MinorNdisVersion | (unsigned int)(MajorNdisVersion << 16);
  while ( (_DWORD)v6 != *(_DWORD *)v3 )
  {
    v3 += 4;
    a2 = L"NdisMinorVersion";
    if ( v3 == L"NdisMinorVersion" )
      goto LABEL_15;
  }
  v7 = *((unsigned __int8 *)v3 + 6);
  switch ( v7 )
  {
    case 1u:
      goto LABEL_21;
    case 2u:
      v8 = 224LL;
      break;
    case 3u:
      v8 = 240LL;
      break;
    default:
LABEL_15:
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_DDZ(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          (__int64)a2,
          v6,
          0x10u,
          v11,
          MajorNdisVersion,
          MinorNdisVersion,
          &a1->FriendlyName.Length);
      return 3221291012LL;
  }
  Type = a1->Header.Type;
  if ( (_BYTE)Type == 0x8B && a1->Header.Size >= (unsigned int)v8 && a1->Header.Revision >= v7 )
  {
    if ( v7 != 1 )
    {
LABEL_12:
      *(_DWORD *)v5 = v8;
      return 0LL;
    }
LABEL_21:
    LODWORD(v8) = a1->Header.Size;
    if ( a1->Header.Size >= 0xE0u )
      LODWORD(v8) = 224;
    goto LABEL_12;
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_DDDDDDDD(*((_QWORD *)WPP_GLOBAL_Control + 8), Type, v8, 0x11u, v11);
  return 3221291013LL;
}
