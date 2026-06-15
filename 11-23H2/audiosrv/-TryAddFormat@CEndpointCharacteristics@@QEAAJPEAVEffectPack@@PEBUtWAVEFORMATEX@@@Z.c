/*
 * XREFs of ?TryAddFormat@CEndpointCharacteristics@@QEAAJPEAVEffectPack@@PEBUtWAVEFORMATEX@@@Z @ 0x18014FD10
 * Callers:
 *     ?SetDeviceFormatSwAudioEngine@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x180060688 (-SetDeviceFormatSwAudioEngine@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000.c)
 * Callees:
 *     ?GetOemEnginePeriodicity@CEndpointCharacteristics@@AEAA_JXZ @ 0x18001E80C (-GetOemEnginePeriodicity@CEndpointCharacteristics@@AEAA_JXZ.c)
 *     ?GetPacketSizeConstraints@@YAJPEAUIMMDeviceEnumerator@@PEAUIPropertyStore@@PEAPEAUPacketSizeConstraints@@@Z @ 0x18001F34C (-GetPacketSizeConstraints@@YAJPEAUIMMDeviceEnumerator@@PEAUIPropertyStore@@PEAPEAUPacketSizeCons.c)
 *     ?CacheProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJXZ @ 0x180020EAC (-CacheProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJXZ.c)
 *     ?DiscoverPeriodicityCharacteristicsForFormat@@YAJPEAUIMMDevice@@W4AUDIO_DIRECTION@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEBUtWAVEFORMATEX@@PEAUPacketSizeConstraints@@W4DPCF_OPTIONS@@_JPEAI8888@Z @ 0x1800336A0 (-DiscoverPeriodicityCharacteristicsForFormat@@YAJPEAUIMMDevice@@W4AUDIO_DIRECTION@@W4__MIDL___MI.c)
 *     ?AddConnectorFormat@CConnectorProcessingModeCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@IIIII@Z @ 0x1800347A0 (-AddConnectorFormat@CConnectorProcessingModeCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@IIIII@Z.c)
 *     ?DeviceInUse@AEError@@YA_NJ@Z @ 0x180060A20 (-DeviceInUse@AEError@@YA_NJ@Z.c)
 *     ?AddProbableConnectorFormat@CConnectorProcessingModeCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@@Z @ 0x180168910 (-AddProbableConnectorFormat@CConnectorProcessingModeCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CEndpointCharacteristics::TryAddFormat(
        CEndpointCharacteristics *this,
        struct EffectPack *a2,
        struct tWAVEFORMATEX *a3)
{
  int PacketSizeConstraints; // eax
  unsigned int v5; // edi
  void *v6; // rbx
  __int64 OemEnginePeriodicity; // r9
  BOOL v8; // r8d
  char v9; // r15
  unsigned int v10; // r12d
  int *v11; // r13
  int v12; // edx
  __int64 v13; // rax
  CConnectorProcessingModeCharacteristics **v14; // r14
  CConnectorProcessingModeCharacteristics **v15; // r12
  struct tWAVEFORMATEX *v16; // r13
  int v17; // eax
  int v18; // eax
  LPDWORD pcbData; // [rsp+30h] [rbp-79h]
  DWORD v21; // [rsp+70h] [rbp-39h] BYREF
  unsigned int v22; // [rsp+74h] [rbp-35h] BYREF
  unsigned int v23; // [rsp+78h] [rbp-31h] BYREF
  unsigned int v24; // [rsp+7Ch] [rbp-2Dh] BYREF
  unsigned int v25; // [rsp+80h] [rbp-29h] BYREF
  unsigned int v26; // [rsp+84h] [rbp-25h] BYREF
  int v27; // [rsp+88h] [rbp-21h]
  LPVOID pv; // [rsp+90h] [rbp-19h] BYREF
  _DWORD v29[2]; // [rsp+98h] [rbp-11h] BYREF
  __int64 v30; // [rsp+A0h] [rbp-9h]
  int *v31; // [rsp+A8h] [rbp-1h]
  struct _GUID v32; // [rsp+B0h] [rbp+7h] BYREF
  BOOL v33; // [rsp+110h] [rbp+67h]
  struct EffectPack *pvData; // [rsp+118h] [rbp+6Fh] BYREF
  struct tWAVEFORMATEX *v35; // [rsp+120h] [rbp+77h]
  unsigned int v36; // [rsp+128h] [rbp+7Fh]

  v35 = a3;
  pvData = a2;
  pv = 0LL;
  v29[0] = 0;
  v29[1] = 3;
  PacketSizeConstraints = GetPacketSizeConstraints(
                            g_DeviceEnumerator,
                            *((struct IPropertyStore **)this + 9),
                            (struct PacketSizeConstraints **)&pv);
  v5 = PacketSizeConstraints;
  v6 = pv;
  if ( PacketSizeConstraints == -2147023728 )
  {
    v5 = 0;
  }
  else if ( PacketSizeConstraints < 0 )
  {
    goto LABEL_22;
  }
  LODWORD(pvData) = 0;
  v21 = 4;
  RegGetValueW(
    HKEY_LOCAL_MACHINE,
    L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio",
    L"ProbeForMinimumPeriod",
    0x18u,
    0LL,
    &pvData,
    &v21);
  OemEnginePeriodicity = CEndpointCharacteristics::GetOemEnginePeriodicity(this);
  v30 = OemEnginePeriodicity;
  v8 = (_DWORD)pvData != 0;
  v33 = v8;
  v9 = 0;
  v10 = 0;
  v36 = 0;
  v11 = v29;
  v31 = v29;
  do
  {
    v12 = *v11;
    v27 = v12;
    v13 = 264LL;
    if ( v12 != 3 )
      v13 = 240LL;
    v14 = *(CConnectorProcessingModeCharacteristics ***)((char *)this + v13);
    if ( v14 != *(CConnectorProcessingModeCharacteristics ***)((char *)this + v13 + 8) )
    {
      v15 = *(CConnectorProcessingModeCharacteristics ***)((char *)this + v13 + 8);
      v16 = v35;
      do
      {
        v32 = *(struct _GUID *)*v14;
        LODWORD(pcbData) = v8;
        v17 = DiscoverPeriodicityCharacteristicsForFormat(
                *((_QWORD **)this + 5),
                *((_DWORD *)this + 53),
                v12,
                &v32,
                v16,
                v6,
                pcbData,
                OemEnginePeriodicity,
                &v26,
                &v25,
                &v24,
                &v23,
                &v22);
        if ( v17 < 0 )
        {
          if ( AEError::DeviceInUse((AEError *)(unsigned int)v17) )
          {
            CConnectorProcessingModeCharacteristics::AddProbableConnectorFormat(*v14, v16);
            *((_DWORD *)this + 59) = 1;
          }
          v5 = 0;
        }
        else
        {
          v18 = CConnectorProcessingModeCharacteristics::AddConnectorFormat(*v14, v16, v26, v25, v24, v23, v22);
          v5 = v18;
          if ( v9 || v18 >= 0 )
            v9 = 1;
        }
        ++v14;
        v12 = v27;
        v8 = v33;
        OemEnginePeriodicity = v30;
      }
      while ( v14 != v15 );
      v10 = v36;
      v11 = v31;
    }
    v36 = ++v10;
    v31 = ++v11;
  }
  while ( v10 < 2 );
  if ( v9 && !*((_DWORD *)this + 59) )
    CEndpointCharacteristics::CacheProcessingModeCharacteristics(this);
LABEL_22:
  CoTaskMemFree(v6);
  return v5;
}
