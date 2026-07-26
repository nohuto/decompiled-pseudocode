/*
 * XREFs of ?ndisValidateFilterDriverCharacteristicsHeader@@YAHPEBU_NDIS_FILTER_DRIVER_CHARACTERISTICS@@PEAK@Z @ 0x1C0110E68
 * Callers:
 *     NdisFRegisterFilterDriver @ 0x1C002B200 (NdisFRegisterFilterDriver.c)
 * Callees:
 *     WPP_RECORDER_SF_DDDDDDDD @ 0x1C005DF80 (WPP_RECORDER_SF_DDDDDDDD.c)
 *     WPP_RECORDER_SF_DDZ @ 0x1C005E0F8 (WPP_RECORDER_SF_DDZ.c)
 */

__int64 __fastcall ndisValidateFilterDriverCharacteristicsHeader(
        const struct _NDIS_FILTER_DRIVER_CHARACTERISTICS *a1,
        const wchar_t *a2)
{
  int MajorNdisVersion; // r11d
  const wchar_t *v3; // rax
  int MinorNdisVersion; // ebx
  wchar_t *v5; // rdi
  __int64 v6; // r8
  unsigned int v7; // r10d
  __int64 v8; // r8
  unsigned int Size; // edx
  int v11; // [rsp+20h] [rbp-58h]

  MajorNdisVersion = a1->MajorNdisVersion;
  v3 = (const wchar_t *)&unk_1C00D2500;
  *(_DWORD *)a2 = 0;
  MinorNdisVersion = a1->MinorNdisVersion;
  v5 = (wchar_t *)a2;
  v6 = MinorNdisVersion | (unsigned int)(MajorNdisVersion << 16);
  while ( (_DWORD)v6 != *(_DWORD *)v3 )
  {
    v3 += 4;
    a2 = L"\\Kernel";
    if ( v3 == L"\\Kernel" )
      goto LABEL_16;
  }
  v7 = *((unsigned __int8 *)v3 + 6);
  switch ( v7 )
  {
    case 1u:
      LOWORD(Size) = a1->Header.Size;
      goto LABEL_22;
    case 2u:
      v8 = 224LL;
      break;
    case 3u:
      v8 = 240LL;
      break;
    default:
LABEL_16:
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
  if ( a1->Header.Type == 0x8B )
  {
    Size = a1->Header.Size;
    if ( Size >= (unsigned int)v8 && a1->Header.Revision >= v7 )
    {
      if ( v7 != 1 )
      {
LABEL_12:
        *(_DWORD *)v5 = v8;
        return 0LL;
      }
LABEL_22:
      LODWORD(v8) = (unsigned __int16)Size;
      if ( (unsigned __int16)Size >= 0xE0u )
        LODWORD(v8) = 224;
      goto LABEL_12;
    }
  }
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_DDDDDDDD(*((_QWORD *)WPP_GLOBAL_Control + 8), a1->Header.Type, v8, 0x11u, v11);
  return 3221291013LL;
}
