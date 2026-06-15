/*
 * XREFs of _lambda_5789e60fd85b99cd3c89d9f341e01d71_::operator() @ 0x180041F80
 * Callers:
 *     _lambda_c7c9c295e9eb20a9e0b33ea00abada77_::operator() @ 0x1800052E0 (_lambda_c7c9c295e9eb20a9e0b33ea00abada77_--operator().c)
 *     CEndpointCharacteristics::GetDeviceFormatInternal__lambda_8e14c3ef8ca8112e9c42aed54b541fda___ @ 0x180020858 (CEndpointCharacteristics--GetDeviceFormatInternal__lambda_8e14c3ef8ca8112e9c42aed54b541fda___.c)
 *     CEndpointCharacteristics::GetDefaultFormat__lambda_8e14c3ef8ca8112e9c42aed54b541fda___ @ 0x180020AA8 (CEndpointCharacteristics--GetDefaultFormat__lambda_8e14c3ef8ca8112e9c42aed54b541fda___.c)
 *     CEndpointCharacteristics::ForEachCandidateFormatForMode__lambda_5789e60fd85b99cd3c89d9f341e01d71___ @ 0x180032A30 (CEndpointCharacteristics--ForEachCandidateFormatForMode__lambda_5789e60fd85b99cd3c89d9f341e01d71.c)
 *     CEndpointCharacteristics::CloneDriverFormatIfMatching__lambda_8e14c3ef8ca8112e9c42aed54b541fda___ @ 0x180148B78 (CEndpointCharacteristics--CloneDriverFormatIfMatching__lambda_8e14c3ef8ca8112e9c42aed54b541fda__.c)
 * Callees:
 *     ?CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z @ 0x180031990 (-CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z.c)
 *     ?DiscoverPeriodicityCharacteristicsForFormat@@YAJPEAUIMMDevice@@W4AUDIO_DIRECTION@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEBUtWAVEFORMATEX@@PEAUPacketSizeConstraints@@W4DPCF_OPTIONS@@_JPEAI8888@Z @ 0x1800336A0 (-DiscoverPeriodicityCharacteristicsForFormat@@YAJPEAUIMMDevice@@W4AUDIO_DIRECTION@@W4__MIDL___MI.c)
 *     ?AddConnectorFormat@CConnectorProcessingModeCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@IIIII@Z @ 0x1800347A0 (-AddConnectorFormat@CConnectorProcessingModeCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@IIIII@Z.c)
 *     ?DeviceInUse@AEError@@YA_NJ@Z @ 0x180060A10 (-DeviceInUse@AEError@@YA_NJ@Z.c)
 *     ?AddUnsupportedFormat@CUnsupportedConnectorFormats@@QEAAXU_GUID@@PEAUtWAVEFORMATEX@@J@Z @ 0x18014AF98 (-AddUnsupportedFormat@CUnsupportedConnectorFormats@@QEAAXU_GUID@@PEAUtWAVEFORMATEX@@J@Z.c)
 *     ?AddProbableConnectorFormat@CConnectorProcessingModeCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@@Z @ 0x180168960 (-AddProbableConnectorFormat@CConnectorProcessingModeCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@@Z.c)
 */

__int64 __fastcall lambda_5789e60fd85b99cd3c89d9f341e01d71_::operator()(
        CConnectorProcessingModeCharacteristics ***a1,
        struct tWAVEFORMATEX *a2,
        bool *a3)
{
  CConnectorProcessingModeCharacteristics *v6; // r9
  const struct tWAVEFORMATEX ***v7; // r15
  const struct tWAVEFORMATEX ***i; // rbx
  __int64 result; // rax
  __int64 v10; // r10
  __int64 v11; // r11
  int v12; // r8d
  CConnectorProcessingModeCharacteristics **v13; // rax
  unsigned int v14; // edx
  CConnectorProcessingModeCharacteristics *v15; // rcx
  CConnectorProcessingModeCharacteristics **v16; // rax
  int v17; // eax
  int v18; // edx
  int v19; // r9d
  CUnsupportedConnectorFormats *v20; // rcx
  unsigned int v21; // [rsp+30h] [rbp-29h]
  unsigned int v22; // [rsp+70h] [rbp+17h] BYREF
  unsigned int v23[3]; // [rsp+74h] [rbp+1Bh] BYREF
  struct _GUID v24; // [rsp+80h] [rbp+27h] BYREF
  unsigned int v25; // [rsp+C0h] [rbp+67h] BYREF
  unsigned int v26; // [rsp+D0h] [rbp+77h] BYREF
  unsigned int v27; // [rsp+D8h] [rbp+7Fh] BYREF

  if ( a3 )
    *a3 = 0;
  v6 = **a1;
  v7 = (const struct tWAVEFORMATEX ***)*((_QWORD *)v6 + 3);
  for ( i = (const struct tWAVEFORMATEX ***)*((_QWORD *)v6 + 2); i != v7 && !(unsigned int)CompareWaveFormat(a2, **i); ++i )
    ;
  if ( i != *((const struct tWAVEFORMATEX ****)**a1 + 3) )
  {
    if ( a3 )
      *a3 = 1;
    return 0LL;
  }
  v10 = (__int64)*a1[6];
  v11 = (__int64)*a1[5];
  v12 = *(_DWORD *)a1[3];
  v13 = a1[2];
  v14 = *((_DWORD *)v13 + 53);
  v15 = v13[5];
  v16 = a1[1];
  v24 = *(struct _GUID *)a1[4];
  v21 = *(_BYTE *)v16 != 0;
  v17 = DiscoverPeriodicityCharacteristicsForFormat(v15, v14, v12, &v24, a2, v11, v21, v10, v23, &v22, &v27, &v26, &v25);
  if ( v17 < 0 )
  {
    if ( AEError::DeviceInUse((AEError *)(unsigned int)v17, v18) )
    {
      CConnectorProcessingModeCharacteristics::AddProbableConnectorFormat(**a1, a2);
      *((_DWORD *)a1[2] + 59) = 1;
    }
    else
    {
      v20 = *a1[7];
      if ( v20 )
      {
        v24 = *(struct _GUID *)a1[4];
        CUnsupportedConnectorFormats::AddUnsupportedFormat(v20, &v24, a2, v19);
      }
    }
    return 0LL;
  }
  result = CConnectorProcessingModeCharacteristics::AddConnectorFormat(**a1, a2, v23[0], v22, v27, v26, v25);
  if ( a3 )
    *a3 = (int)result >= 0;
  return result;
}
