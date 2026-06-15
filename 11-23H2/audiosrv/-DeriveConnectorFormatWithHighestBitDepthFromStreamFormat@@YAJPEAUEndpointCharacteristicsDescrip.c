/*
 * XREFs of ?DeriveConnectorFormatWithHighestBitDepthFromStreamFormat@@YAJPEAUEndpointCharacteristicsDescriptor@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUtWAVEFORMATEX@@U_GUID@@PEAPEAU3@@Z @ 0x180115124
 * Callers:
 *     ?DeriveConnectorFormatFromStreamFormat@@YAJPEAUEndpointCharacteristicsDescriptor@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUtWAVEFORMATEX@@U_GUID@@33HPEAPEAU3@@Z @ 0x180114848 (-DeriveConnectorFormatFromStreamFormat@@YAJPEAUEndpointCharacteristicsDescriptor@@W4__MIDL___MID.c)
 * Callees:
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x180020D54 (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     ?ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x18002FF68 (-ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1800669B0 (__security_check_cookie.c)
 *     ?ConnectorSupportsFormat@@YAJPEAUEndpointCharacteristicsDescriptor@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUtWAVEFORMATEX@@U_GUID@@@Z @ 0x180114064 (-ConnectorSupportsFormat@@YAJPEAUEndpointCharacteristicsDescriptor@@W4__MIDL___MIDL_itf_audioeng.c)
 *     ?InitWaveFormatEx@@YAXPEAUWAVEFORMATEXTENSIBLE@@_NHHHHK@Z @ 0x180116378 (-InitWaveFormatEx@@YAXPEAUWAVEFORMATEXTENSIBLE@@_NHHHHK@Z.c)
 */

__int64 __fastcall DeriveConnectorFormatWithHighestBitDepthFromStreamFormat(
        struct EndpointCharacteristicsDescriptor *a1,
        unsigned int a2,
        struct tWAVEFORMATEX *a3,
        struct _GUID *a4,
        struct tWAVEFORMATEX **a5)
{
  struct _GUID v5; // xmm6
  unsigned int v9; // r14d
  int v10; // edi
  __int64 v11; // rdx
  DWORD nSamplesPerSec; // r8d
  unsigned int v14; // r15d
  unsigned __int16 *v15; // r12
  int v16; // ebx
  __int64 v17; // rdx
  int nChannels; // [rsp+30h] [rbp-69h]
  struct _GUID v20; // [rsp+58h] [rbp-41h] BYREF
  struct WAVEFORMATEXTENSIBLE Src; // [rsp+68h] [rbp-31h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F0h] [rbp+57h]

  v5 = *a4;
  if ( a3->wFormatTag == 0xFFFE )
    v9 = *(_DWORD *)&a3[1].nChannels;
  else
    v9 = 0;
  *a5 = 0LL;
  v10 = ValidateUncompressedWaveFormatEx(a3);
  if ( v10 < 0 )
  {
    v11 = 571LL;
LABEL_6:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
      (const char *)(unsigned int)v10);
    return (unsigned int)v10;
  }
  if ( v10 )
  {
    v20 = v5;
    v10 = ConnectorSupportsFormat(a1, a2, a3, &v20);
    if ( v10 < 0 )
    {
      v11 = 603LL;
      goto LABEL_6;
    }
    v16 = CloneWaveFormat(a3, a5);
    if ( v16 < 0 )
    {
      v17 = 604LL;
      goto LABEL_14;
    }
  }
  else
  {
    nSamplesPerSec = a3->nSamplesPerSec;
    nChannels = a3->nChannels;
    memset(&Src, 0, sizeof(Src));
    InitWaveFormatEx(&Src, 1, nSamplesPerSec, 32, 32, nChannels, v9);
    v20 = v5;
    v10 = ConnectorSupportsFormat(a1, a2, &Src.Format, &v20);
    if ( v10 < 0 )
    {
      v14 = 0;
      v15 = (unsigned __int16 *)&unk_18019DE70;
      while ( v14 < 5 )
      {
        InitWaveFormatEx(&Src, 0, a3->nSamplesPerSec, *v15, v15[1], a3->nChannels, v9);
        v20 = v5;
        ++v14;
        v15 += 2;
        v10 = ConnectorSupportsFormat(a1, a2, &Src.Format, &v20);
        if ( v10 >= 0 )
          goto LABEL_12;
      }
      v11 = 596LL;
      goto LABEL_6;
    }
LABEL_12:
    v16 = CloneWaveFormat(&Src.Format, a5);
    if ( v16 < 0 )
    {
      v17 = 598LL;
LABEL_14:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v17,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\policyconfig.cpp",
        (const char *)(unsigned int)v16);
      return (unsigned int)v16;
    }
  }
  return 0LL;
}
