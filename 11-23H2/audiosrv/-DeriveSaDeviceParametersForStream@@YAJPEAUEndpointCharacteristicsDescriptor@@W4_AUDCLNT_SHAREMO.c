/*
 * XREFs of ?DeriveSaDeviceParametersForStream@@YAJPEAUEndpointCharacteristicsDescriptor@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@3PEAUtWAVEFORMATEX@@4_JPEAPEAUSaDeviceParams@@@Z @ 0x18000E7C0
 * Callers:
 *     ?CreateMicInjectionBridgeSourceStream@CAudioResourceManager@@UEAAJPEAUEndpointCharacteristicsDescriptor@@_JPEBUtWAVEFORMATEX@@PEAUIStreamInstanceProxy@@PEAPEAUIBridgeStreamInstanceProxy@@PEAUSystemAudioStream@@@Z @ 0x18006BA80 (-CreateMicInjectionBridgeSourceStream@CAudioResourceManager@@UEAAJPEAUEndpointCharacteristicsDes.c)
 *     ?CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHHH_JPEAUEndpointCharacteristicsDescriptor@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@PEAUtWAVEFORMATEX@@22PEBU_GUID@@77KPEBGKPEBUSPATIAL_STREAM_PROPERTIES@@W4_BridgeStreamProperties@@2PEAUIProcessSubmixProxy@@U8@PEAUSystemAudioStream@@@Z @ 0x18006CFA0 (-CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHHH_JPEA.c)
 *     ?CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBG_JPEAUIStreamGroupProxy@@PEAUIBridgeStreamInstanceProxy@@PEAUSystemAudioStream@@@Z @ 0x1800D9228 (-CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBG_JPEAUIStreamGroupProxy@@PEAUIBrid.c)
 *     ?SwitchStreamGroupsToNewSaDevice@CAudioResourceManager@@IEAAJPEAUEndpointCharacteristicsDescriptor@@PEAUIDeviceGraphObjectsStore@@PEAUtWAVEFORMATEX@@2_JAEAV?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@Z @ 0x1800DCD28 (-SwitchStreamGroupsToNewSaDevice@CAudioResourceManager@@IEAAJPEAUEndpointCharacteristicsDescript.c)
 *     ?GetDefaultPrimaryProfileRenderSaDeviceParams@CBtAudioResourceManagerBase@@IEAAJPEAUEndpointCharacteristicsDescriptor@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUSaDeviceParams@@@Z @ 0x1800F7FCC (-GetDefaultPrimaryProfileRenderSaDeviceParams@CBtAudioResourceManagerBase@@IEAAJPEAUEndpointChar.c)
 *     ?GetDefaultSecondaryProfileRenderSaDeviceParams@CBtAudioResourceManagerBase@@IEAAJPEAUEndpointCharacteristicsDescriptor@@PEAPEAUSaDeviceParams@@@Z @ 0x1800F86A8 (-GetDefaultSecondaryProfileRenderSaDeviceParams@CBtAudioResourceManagerBase@@IEAAJPEAUEndpointCh.c)
 * Callees:
 *     ?GetDeviceDefaults@@YAJPEAUEndpointCharacteristicsDescriptor@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@3PEA_J4@Z @ 0x18000DB30 (-GetDeviceDefaults@@YAJPEAUEndpointCharacteristicsDescriptor@@W4__MIDL___MIDL_itf_audioengineend.c)
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x180020D54 (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     ??_GSaDeviceParams@@QEAAPEAXI@Z @ 0x1800455A0 (--_GSaDeviceParams@@QEAAPEAXI@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180067088 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x180067A64 (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 *     WPP_SF_di @ 0x1800DDE88 (WPP_SF_di.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall DeriveSaDeviceParametersForStream(
        EffectPack **a1,
        enum _AUDCLNT_SHAREMODE a2,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a3,
        struct _GUID *a4,
        struct _GUID *a5,
        struct tWAVEFORMATEX *a6,
        struct tWAVEFORMATEX *Src,
        __int64 a8,
        struct SaDeviceParams **a9)
{
  void *v12; // rbx
  int DeviceDefaults; // eax
  unsigned int v14; // edx
  signed int v15; // esi
  void *v16; // rax
  struct tWAVEFORMATEX *v17; // rdi
  struct tWAVEFORMATEX *v18; // rsi
  LPVOID v19; // rsi
  __int64 v20; // rdx
  __int64 v21; // r8
  struct SaDeviceParams *v22; // rcx
  struct tWAVEFORMATEX *v24; // [rsp+40h] [rbp-30h] BYREF
  LPVOID pv[2]; // [rsp+50h] [rbp-20h] BYREF
  __int64 v26; // [rsp+60h] [rbp-10h] BYREF
  void *v27; // [rsp+68h] [rbp-8h]

  v12 = 0LL;
  v27 = 0LL;
  v26 = 0LL;
  *(struct _GUID *)pv = *a4;
  if ( a2 == AUDCLNT_SHAREMODE_EXCLUSIVE )
    DeviceDefaults = GetDeviceDefaults(a1, a3, (struct _GUID *)pv, 0LL, 0LL, &a8, &v26);
  else
    DeviceDefaults = GetDeviceDefaults(a1, a3, (struct _GUID *)pv, 0LL, 0LL, 0LL, &v26);
  v15 = DeviceDefaults;
  if ( DeviceDefaults >= 0 )
  {
    v16 = operator new(0x60uLL, (const struct std::nothrow_t *)&std::nothrow);
    v12 = v16;
    if ( v16 )
      memset_0(v16, 0, 0x60uLL);
    else
      v12 = 0LL;
    v27 = v12;
    v15 = v12 == 0LL ? 0x8007000E : 0;
    v17 = 0LL;
    v24 = 0LL;
    pv[0] = 0LL;
    if ( v12 )
    {
      v15 = CloneWaveFormat(Src, (struct tWAVEFORMATEX **)pv);
      if ( v15 >= 0 )
      {
        v15 = CloneWaveFormat(a6, &v24);
        if ( v15 < 0 )
        {
          v17 = v24;
        }
        else
        {
          *((_DWORD *)v12 + 2) = a3;
          v18 = v24;
          v24 = 0LL;
          CoTaskMemFree(*((LPVOID *)v12 + 2));
          *((_QWORD *)v12 + 2) = v18;
          v19 = pv[0];
          pv[0] = 0LL;
          CoTaskMemFree(*((LPVOID *)v12 + 3));
          *((_QWORD *)v12 + 3) = v19;
          *((_QWORD *)v12 + 4) = a8;
          *((_QWORD *)v12 + 5) = v26;
          *((struct _GUID *)v12 + 4) = *a5;
          *((struct _GUID *)v12 + 3) = *a4;
          v15 = (*(__int64 (__fastcall **)(_QWORD, void *))(**((_QWORD **)*a1 + 5) + 40LL))(*((_QWORD *)*a1 + 5), v12);
          if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
            && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
          {
            WPP_SF_di(*((_QWORD *)WPP_GLOBAL_Control + 2), v20, v21, (unsigned int)a3, a8);
          }
          CoCreateGuid((GUID *)v12 + 5);
        }
      }
    }
    CoTaskMemFree(pv[0]);
    CoTaskMemFree(v17);
    if ( v15 >= 0 )
    {
      v22 = (struct SaDeviceParams *)v12;
      v12 = 0LL;
      *a9 = v22;
    }
  }
  if ( v12 )
    SaDeviceParams::`scalar deleting destructor'((SaDeviceParams *)v12, v14);
  return (unsigned int)v15;
}
