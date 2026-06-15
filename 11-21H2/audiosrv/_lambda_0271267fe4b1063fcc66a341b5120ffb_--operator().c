/*
 * XREFs of _lambda_0271267fe4b1063fcc66a341b5120ffb_::operator() @ 0x180144590
 * Callers:
 *     CEndpointCharacteristics::CloneDriverFormatIfMatching__lambda_0de3d14ddc76a6bb0bc0d93702434bc9___ @ 0x18013FA38 (CEndpointCharacteristics--CloneDriverFormatIfMatching__lambda_0de3d14ddc76a6bb0bc0d93702434bc9__.c)
 *     CEndpointCharacteristics::ForEachCandidateFormatForMode__lambda_0271267fe4b1063fcc66a341b5120ffb___ @ 0x1801402A0 (CEndpointCharacteristics--ForEachCandidateFormatForMode__lambda_0271267fe4b1063fcc66a341b5120ffb.c)
 *     CEndpointCharacteristics::GetDefaultFormat__lambda_0de3d14ddc76a6bb0bc0d93702434bc9___ @ 0x180142298 (CEndpointCharacteristics--GetDefaultFormat__lambda_0de3d14ddc76a6bb0bc0d93702434bc9___.c)
 *     CEndpointCharacteristics::GetDeviceFormatInternal__lambda_0de3d14ddc76a6bb0bc0d93702434bc9___ @ 0x1801428B4 (CEndpointCharacteristics--GetDeviceFormatInternal__lambda_0de3d14ddc76a6bb0bc0d93702434bc9___.c)
 *     _lambda_a2ae9ed9665e8839b9f8735db1ec2fae_::operator() @ 0x180144A10 (_lambda_a2ae9ed9665e8839b9f8735db1ec2fae_--operator().c)
 * Callees:
 *     ?CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z @ 0x18000EA9C (-CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z.c)
 *     ?GetAliasedDeviceConnectorMode@CEndpointCharacteristics@@QEAA?AU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U2@W4DEVICE_INITIALIZATION@@@Z @ 0x18000EC78 (-GetAliasedDeviceConnectorMode@CEndpointCharacteristics@@QEAA-AU_GUID@@W4__MIDL___MIDL_itf_audio.c)
 *     ?AddConnectorFormat@CConnectorProcessingModeCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@IIIII@Z @ 0x180047568 (-AddConnectorFormat@CConnectorProcessingModeCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@IIIII@Z.c)
 *     ?EndpointConnectorSupportsProcessingModes@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x1800480F4 (-EndpointConnectorSupportsProcessingModes@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_aud.c)
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     ?AddUnsupportedFormat@CUnsupportedConnectorFormats@@QEAAXU_GUID@@PEAUtWAVEFORMATEX@@J@Z @ 0x180144D24 (-AddUnsupportedFormat@CUnsupportedConnectorFormats@@QEAAXU_GUID@@PEAUtWAVEFORMATEX@@J@Z.c)
 *     ?DeviceInUse@AEError@@YA_NJ@Z @ 0x180147220 (-DeviceInUse@AEError@@YA_NJ@Z.c)
 *     ?AddProbableConnectorFormat@CConnectorProcessingModeCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@@Z @ 0x180162910 (-AddProbableConnectorFormat@CConnectorProcessingModeCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@@Z.c)
 *     ?DiscoverPeriodicityCharacteristicsForFormat@@YAJPEAUIMMDevice@@W4AUDIO_DIRECTION@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEBUtWAVEFORMATEX@@PEAUPacketSizeConstraints@@_N_JPEAI8888@Z @ 0x180162ED8 (-DiscoverPeriodicityCharacteristicsForFormat@@YAJPEAUIMMDevice@@W4AUDIO_DIRECTION@@W4__MIDL___MI.c)
 */

__int64 __fastcall lambda_0271267fe4b1063fcc66a341b5120ffb_::operator()(
        CConnectorProcessingModeCharacteristics ***a1,
        struct tWAVEFORMATEX *a2,
        bool *a3)
{
  CConnectorProcessingModeCharacteristics **v6; // r14
  CConnectorProcessingModeCharacteristics *v7; // rax
  const struct tWAVEFORMATEX ***v8; // r12
  const struct tWAVEFORMATEX ***i; // rbx
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 *v10; // r12
  __int64 v11; // rbx
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v12; // r8d
  struct _GUID *AliasedDeviceConnectorMode; // rcx
  struct _GUID v14; // xmm0
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // r11
  CConnectorProcessingModeCharacteristics **v18; // rax
  __int64 v19; // rcx
  int v20; // eax
  int v21; // edx
  __int64 result; // rax
  int v23; // r9d
  CUnsupportedConnectorFormats *v24; // rcx
  unsigned int v25; // [rsp+70h] [rbp-29h] BYREF
  unsigned int v26; // [rsp+74h] [rbp-25h] BYREF
  unsigned int v27; // [rsp+78h] [rbp-21h] BYREF
  unsigned int v28; // [rsp+7Ch] [rbp-1Dh] BYREF
  unsigned int v29[4]; // [rsp+80h] [rbp-19h] BYREF
  struct _GUID v30; // [rsp+90h] [rbp-9h] BYREF
  struct _GUID v31; // [rsp+A0h] [rbp+7h] BYREF

  if ( a3 )
    *a3 = 0;
  v6 = *a1;
  v7 = **a1;
  v8 = (const struct tWAVEFORMATEX ***)*((_QWORD *)v7 + 3);
  for ( i = (const struct tWAVEFORMATEX ***)*((_QWORD *)v7 + 2); i != v8 && !(unsigned int)CompareWaveFormat(a2, **i); ++i )
    ;
  if ( i != *((const struct tWAVEFORMATEX ****)*v6 + 3) )
  {
    if ( a3 )
      *a3 = 1;
    return 0LL;
  }
  v10 = (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 *)a1[2];
  v11 = (__int64)a1[1];
  if ( (unsigned int)CEndpointCharacteristics::EndpointConnectorSupportsProcessingModes(
                       (CEndpointCharacteristics *)v11,
                       *v10) )
  {
    v12 = *v10;
    v30 = *(struct _GUID *)a1[3];
    AliasedDeviceConnectorMode = CEndpointCharacteristics::GetAliasedDeviceConnectorMode(v11, &v31, v12, &v30, 1);
  }
  else
  {
    AliasedDeviceConnectorMode = &v30;
    v30 = GUID_00000000_0000_0000_0000_000000000000;
  }
  v14 = *AliasedDeviceConnectorMode;
  v15 = *(unsigned int *)v10;
  v16 = *(unsigned int *)(v11 + 188);
  v17 = (__int64)*a1[6];
  v18 = a1[5];
  v19 = *(_QWORD *)(v11 + 16);
  v30 = v14;
  v20 = DiscoverPeriodicityCharacteristicsForFormat(
          v19,
          v16,
          v15,
          &v30,
          a2,
          *a1[4],
          *(_BYTE *)v18,
          v17,
          v29,
          &v28,
          &v27,
          &v26,
          &v25);
  if ( v20 < 0 )
  {
    if ( AEError::DeviceInUse((AEError *)(unsigned int)v20, v21) )
    {
      CConnectorProcessingModeCharacteristics::AddProbableConnectorFormat(*v6, a2);
      *(_DWORD *)(v11 + 220) = 1;
    }
    else
    {
      v24 = *a1[7];
      if ( v24 )
      {
        v30 = *(struct _GUID *)a1[3];
        CUnsupportedConnectorFormats::AddUnsupportedFormat(v24, &v30, a2, v23);
      }
    }
    return 0LL;
  }
  result = CConnectorProcessingModeCharacteristics::AddConnectorFormat(*v6, a2, v29[0], v28, v27, v26, v25);
  if ( a3 )
    *a3 = (int)result >= 0;
  return result;
}
