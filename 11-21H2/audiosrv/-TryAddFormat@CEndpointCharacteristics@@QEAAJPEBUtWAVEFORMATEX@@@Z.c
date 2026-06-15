/*
 * XREFs of ?TryAddFormat@CEndpointCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@@Z @ 0x18014CB48
 * Callers:
 *     ?SetDeviceFormatSwAudioEngine@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x18014C490 (-SetDeviceFormatSwAudioEngine@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendp.c)
 * Callees:
 *     ?GetAliasedDeviceConnectorMode@CEndpointCharacteristics@@QEAA?AU_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U2@W4DEVICE_INITIALIZATION@@@Z @ 0x18000EC78 (-GetAliasedDeviceConnectorMode@CEndpointCharacteristics@@QEAA-AU_GUID@@W4__MIDL___MIDL_itf_audio.c)
 *     ?AddConnectorFormat@CConnectorProcessingModeCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@IIIII@Z @ 0x180047568 (-AddConnectorFormat@CConnectorProcessingModeCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@IIIII@Z.c)
 *     ?EndpointConnectorSupportsProcessingModes@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x1800480F4 (-EndpointConnectorSupportsProcessingModes@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_aud.c)
 *     __security_check_cookie @ 0x18005E920 (__security_check_cookie.c)
 *     ?CacheProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJXZ @ 0x1801453FC (-CacheProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJXZ.c)
 *     ?DeviceInUse@AEError@@YA_NJ@Z @ 0x180147220 (-DeviceInUse@AEError@@YA_NJ@Z.c)
 *     ?GetOemEnginePeriodicity@CEndpointCharacteristics@@AEAA_JXZ @ 0x180149214 (-GetOemEnginePeriodicity@CEndpointCharacteristics@@AEAA_JXZ.c)
 *     ?GetPacketSizeConstraints@@YAJPEAUIPropertyStore@@PEAPEAUPacketSizeConstraints@@@Z @ 0x1801494AC (-GetPacketSizeConstraints@@YAJPEAUIPropertyStore@@PEAPEAUPacketSizeConstraints@@@Z.c)
 *     ?AddProbableConnectorFormat@CConnectorProcessingModeCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@@Z @ 0x180162910 (-AddProbableConnectorFormat@CConnectorProcessingModeCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@@Z.c)
 *     ?DiscoverPeriodicityCharacteristicsForFormat@@YAJPEAUIMMDevice@@W4AUDIO_DIRECTION@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEBUtWAVEFORMATEX@@PEAUPacketSizeConstraints@@_N_JPEAI8888@Z @ 0x180162ED8 (-DiscoverPeriodicityCharacteristicsForFormat@@YAJPEAUIMMDevice@@W4AUDIO_DIRECTION@@W4__MIDL___MI.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CEndpointCharacteristics::TryAddFormat(struct IPropertyStore **this, struct tWAVEFORMATEX *a2)
{
  int PacketSizeConstraints; // eax
  unsigned int v4; // edi
  void *v5; // rbx
  char v6; // r15
  unsigned int v7; // r12d
  int *v8; // r13
  __int64 v9; // rax
  CConnectorProcessingModeCharacteristics **v10; // r14
  CConnectorProcessingModeCharacteristics **v11; // r12
  struct _GUID *AliasedDeviceConnectorMode; // rcx
  struct tWAVEFORMATEX *v13; // rdi
  int v14; // eax
  int v15; // eax
  int pcbData; // [rsp+30h] [rbp-99h]
  int pvData; // [rsp+70h] [rbp-59h] BYREF
  unsigned int v19; // [rsp+74h] [rbp-55h]
  DWORD v20; // [rsp+78h] [rbp-51h] BYREF
  unsigned int v21; // [rsp+7Ch] [rbp-4Dh] BYREF
  unsigned int v22; // [rsp+80h] [rbp-49h] BYREF
  unsigned int v23; // [rsp+84h] [rbp-45h] BYREF
  unsigned int v24; // [rsp+88h] [rbp-41h] BYREF
  unsigned int v25; // [rsp+8Ch] [rbp-3Dh] BYREF
  LPVOID pv; // [rsp+90h] [rbp-39h] BYREF
  _DWORD v27[2]; // [rsp+98h] [rbp-31h] BYREF
  struct _GUID v28; // [rsp+A0h] [rbp-29h] BYREF
  __int64 OemEnginePeriodicity; // [rsp+B0h] [rbp-19h]
  struct tWAVEFORMATEX *v30; // [rsp+B8h] [rbp-11h]
  GUID v31; // [rsp+C0h] [rbp-9h] BYREF
  struct _GUID v32; // [rsp+D0h] [rbp+7h] BYREF

  v30 = a2;
  pv = 0LL;
  v27[0] = 0;
  v27[1] = 3;
  PacketSizeConstraints = GetPacketSizeConstraints(this[5], (struct PacketSizeConstraints **)&pv);
  v4 = PacketSizeConstraints;
  v5 = pv;
  if ( PacketSizeConstraints == -2147023728 )
  {
    v4 = 0;
  }
  else if ( PacketSizeConstraints < 0 )
  {
    goto LABEL_25;
  }
  pvData = 0;
  v20 = 4;
  RegGetValueW(
    HKEY_LOCAL_MACHINE,
    L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio",
    L"ProbeForMinimumPeriod",
    0x18u,
    0LL,
    &pvData,
    &v20);
  OemEnginePeriodicity = CEndpointCharacteristics::GetOemEnginePeriodicity((CEndpointCharacteristics *)this);
  v6 = 0;
  v7 = 0;
  v19 = 0;
  v8 = v27;
  do
  {
    v9 = 31LL;
    if ( *v8 != 3 )
      v9 = 28LL;
    v10 = (CConnectorProcessingModeCharacteristics **)this[v9];
    if ( v10 != (CConnectorProcessingModeCharacteristics **)this[v9 + 1] )
    {
      v11 = (CConnectorProcessingModeCharacteristics **)this[v9 + 1];
      do
      {
        if ( (unsigned int)CEndpointCharacteristics::EndpointConnectorSupportsProcessingModes(
                             (CEndpointCharacteristics *)this,
                             (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)*v8) )
        {
          v28 = *(struct _GUID *)*v10;
          AliasedDeviceConnectorMode = CEndpointCharacteristics::GetAliasedDeviceConnectorMode(
                                         (__int64)this,
                                         &v32,
                                         *v8,
                                         &v28,
                                         1);
        }
        else
        {
          v31 = GUID_00000000_0000_0000_0000_000000000000;
          AliasedDeviceConnectorMode = &v31;
        }
        v28 = *AliasedDeviceConnectorMode;
        LOBYTE(pcbData) = pvData != 0;
        v13 = v30;
        v14 = DiscoverPeriodicityCharacteristicsForFormat(
                this[2],
                *((unsigned int *)this + 47),
                (unsigned int)*v8,
                &v28,
                v30,
                v5,
                pcbData,
                OemEnginePeriodicity,
                &v25,
                &v24,
                &v23,
                &v22,
                &v21);
        if ( v14 < 0 )
        {
          if ( AEError::DeviceInUse((AEError *)(unsigned int)v14) )
          {
            CConnectorProcessingModeCharacteristics::AddProbableConnectorFormat(*v10, v13);
            *((_DWORD *)this + 55) = 1;
          }
          v4 = 0;
        }
        else
        {
          v15 = CConnectorProcessingModeCharacteristics::AddConnectorFormat(*v10, v13, v25, v24, v23, v22, v21);
          v4 = v15;
          if ( v6 || v15 >= 0 )
            v6 = 1;
        }
        ++v10;
      }
      while ( v10 != v11 );
      v7 = v19;
    }
    v19 = ++v7;
    ++v8;
  }
  while ( v7 < 2 );
  if ( v6 && !*((_DWORD *)this + 55) )
    CEndpointCharacteristics::CacheProcessingModeCharacteristics((CEndpointCharacteristics *)this);
LABEL_25:
  CoTaskMemFree(v5);
  return v4;
}
