/*
 * XREFs of ?DeriveSaDeviceParametersForStream@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@3PEAUtWAVEFORMATEX@@4_JPEAPEAUSaDeviceParams@@@Z @ 0x180027630
 * Callers:
 *     ?CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHH_JPEAVCEndpointCharacteristics@@KW4_AUDCLNT_SHAREMODE@@PEAUIAudioGraphCallback@@PEAUtWAVEFORMATEX@@22PEBU_GUID@@77KPEBGKPEBUSPATIAL_STREAM_PROPERTIES@@PEAUIProcessSubmixProxy@@PEAUSystemAudioStream@@@Z @ 0x180028DE0 (-CreateStream@CAudioResourceManager@@UEAAJPEAUIAudioProcess@@PEAUIAudioStreamInfo@@KHHHHHH_JPEAV.c)
 *     ?CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBG_JPEAUIStreamGroupProxy@@PEAUSystemAudioStream@@@Z @ 0x1800FEAD8 (-CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBG_JPEAUIStreamGroupProxy@@PEAUSyste.c)
 *     ?SwitchStreamGroupsToNewSaDevice@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUIDeviceGraphObjectsStore@@PEAUtWAVEFORMATEX@@2_JAEAV?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@Z @ 0x180101B78 (-SwitchStreamGroupsToNewSaDevice@CAudioResourceManager@@IEAAJPEAVCEndpointCharacteristics@@PEAUI.c)
 *     ?GetDefaultA2dpRenderSaDeviceParams@CBtAudioResourceManager@@AEAAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUSaDeviceParams@@@Z @ 0x180115D90 (-GetDefaultA2dpRenderSaDeviceParams@CBtAudioResourceManager@@AEAAJPEAVCEndpointCharacteristics@@.c)
 *     ?GetDefaultHfpRenderSaDeviceParams@CBtAudioResourceManager@@AEAAJPEAVCEndpointCharacteristics@@PEAPEAUSaDeviceParams@@@Z @ 0x180115FD0 (-GetDefaultHfpRenderSaDeviceParams@CBtAudioResourceManager@@AEAAJPEAVCEndpointCharacteristics@@P.c)
 * Callees:
 *     ??_GSaDeviceParams@@QEAAPEAXI@Z @ 0x18002B3D8 (--_GSaDeviceParams@@QEAAPEAXI@Z.c)
 *     ?GetDeviceDefaults@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@3PEA_J4@Z @ 0x18002F320 (-GetDeviceDefaults@@YAJPEAVCEndpointCharacteristics@@W4__MIDL___MIDL_itf_audioengineendpoint_000.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18005EFFC (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x18005F9D8 (memset_0.c)
 *     memcpy_0 @ 0x180062529 (memcpy_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     WPP_SF_di @ 0x1801028D4 (WPP_SF_di.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall DeriveSaDeviceParametersForStream(
        struct CEndpointCharacteristics *a1,
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
  int v15; // esi
  void *v16; // rax
  void *v17; // rdi
  __int64 cbSize; // rdi
  void *v19; // rax
  void *v20; // rsi
  __int64 v21; // rbp
  void *v22; // rax
  void *v23; // r13
  struct SaDeviceParams *v24; // rcx
  __int64 v26; // [rsp+40h] [rbp-58h] BYREF
  void *v27; // [rsp+48h] [rbp-50h]
  __int64 v28; // [rsp+50h] [rbp-48h]
  struct _GUID v29; // [rsp+60h] [rbp-38h] BYREF

  v12 = 0LL;
  v27 = 0LL;
  v26 = 0LL;
  v29 = *a4;
  if ( a2 == AUDCLNT_SHAREMODE_EXCLUSIVE )
    DeviceDefaults = GetDeviceDefaults(a1, a3, &v29, 0LL, 0LL, &a8, &v26);
  else
    DeviceDefaults = GetDeviceDefaults(a1, a3, &v29, 0LL, 0LL, 0LL, &v26);
  v15 = DeviceDefaults;
  if ( DeviceDefaults < 0 )
    goto LABEL_14;
  v16 = operator new(0x60uLL, (const struct std::nothrow_t *)&std::nothrow);
  v12 = v16;
  if ( v16 )
  {
    memset_0(v16, 0, 0x60uLL);
    v15 = 0;
  }
  else
  {
    v12 = 0LL;
    v15 = -2147024882;
  }
  v27 = v12;
  v17 = 0LL;
  if ( v15 >= 0 )
  {
    cbSize = Src->cbSize;
    v19 = CoTaskMemAlloc(cbSize + 18);
    v20 = v19;
    if ( v19 )
    {
      memcpy_0(v19, Src, cbSize + 18);
      v17 = v20;
      v21 = a6->cbSize;
      v22 = CoTaskMemAlloc(v21 + 18);
      v23 = v22;
      if ( v22 )
      {
        memcpy_0(v22, a6, v21 + 18);
        *((_DWORD *)v12 + 2) = a3;
        v28 = 0LL;
        CoTaskMemFree(*((LPVOID *)v12 + 2));
        *((_QWORD *)v12 + 2) = v23;
        v17 = 0LL;
        *(_QWORD *)&v29.Data1 = 0LL;
        CoTaskMemFree(*((LPVOID *)v12 + 3));
        *((_QWORD *)v12 + 3) = v20;
        *((_QWORD *)v12 + 4) = a8;
        *((_QWORD *)v12 + 5) = v26;
        *((struct _GUID *)v12 + 4) = *a5;
        *((struct _GUID *)v12 + 3) = *a4;
        v15 = (*(__int64 (__fastcall **)(_QWORD, void *))(**((_QWORD **)a1 + 2) + 40LL))(*((_QWORD *)a1 + 2), v12);
        if ( WPP_GLOBAL_Control != (CEndpointStoreCache *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_di(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            11LL,
            &WPP_6a47491da86c31bdc5874d6ce9b2293b_Traceguids,
            (unsigned int)a3,
            a8);
        }
        CoCreateGuid((GUID *)v12 + 5);
        goto LABEL_12;
      }
    }
    else
    {
      v17 = 0LL;
    }
    v15 = -2147024882;
  }
LABEL_12:
  CoTaskMemFree(v17);
  CoTaskMemFree(0LL);
  if ( v15 >= 0 )
  {
    v24 = (struct SaDeviceParams *)v12;
    v12 = 0LL;
    *a9 = v24;
  }
LABEL_14:
  if ( v12 )
    SaDeviceParams::`scalar deleting destructor'((SaDeviceParams *)v12, v14);
  return (unsigned int)v15;
}
