/*
 * XREFs of ?RuntimeClassInitialize@CApoEndpoint@@QEAAJPEAUIDeviceGraphObjectCache@@PEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIAudioProcessingObject@@PEAUIAudioMediaType@@I@Z @ 0x14004FF1C
 * Callers:
 *     ??$MakeAndInitialize@VCApoEndpoint@@V1@AEAPEAUIDeviceGraphObjectCache@@AEAPEAUBRIDGE_STREAM_DESCRIPTOR@@AEAPEAUIAudioProcessingObject@@AEAPEAUIAudioMediaType@@AEAI@Details@WRL@Microsoft@@YAJPEAPEAVCApoEndpoint@@AEAPEAUIDeviceGraphObjectCache@@AEAPEAUBRIDGE_STREAM_DESCRIPTOR@@AEAPEAUIAudioProcessingObject@@AEAPEAUIAudioMediaType@@AEAI@Z @ 0x14004F7A8 (--$MakeAndInitialize@VCApoEndpoint@@V1@AEAPEAUIDeviceGraphObjectCache@@AEAPEAUBRIDGE_STREAM_DESC.c)
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140004138 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ??4?$CComPtr@UIDeviceGraphObjectCache@@@ATL@@QEAAPEAUIDeviceGraphObjectCache@@PEAU2@@Z @ 0x140009F28 (--4-$CComPtr@UIDeviceGraphObjectCache@@@ATL@@QEAAPEAUIDeviceGraphObjectCache@@PEAU2@@Z.c)
 *     ??1?$CComPtrBase@UIAudioProcessingObject@@@ATL@@QEAA@XZ @ 0x14000A41C (--1-$CComPtrBase@UIAudioProcessingObject@@@ATL@@QEAA@XZ.c)
 *     ?GetMaxSupportedConnectionVersion@@YAIPEAUIAudioProcessingObject@@@Z @ 0x1400110D4 (-GetMaxSupportedConnectionVersion@@YAIPEAUIAudioProcessingObject@@@Z.c)
 *     ?GetAPOProcessingHostInstance@@YAJPEAPEAUIAPOProcessingHost@@@Z @ 0x140020CE8 (-GetAPOProcessingHostInstance@@YAJPEAPEAUIAPOProcessingHost@@@Z.c)
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x140025F08 (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     __security_check_cookie @ 0x14002F570 (__security_check_cookie.c)
 *     memset_0 @ 0x1400309B4 (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 *     ?FillAuxiliaryInputInitStruct@@YAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIAudioProcessingObject@@AEAUAPOInitSystemEffects2@@@Z @ 0x14004FC44 (-FillAuxiliaryInputInitStruct@@YAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIAudioProcessingObject@@AEAU.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CApoEndpoint::RuntimeClassInitialize(
        CApoEndpoint *this,
        struct IDeviceGraphObjectCache *a2,
        struct BRIDGE_STREAM_DESCRIPTOR *a3,
        struct IAudioProcessingObject *a4,
        struct IAudioMediaType *a5,
        unsigned int a6)
{
  const struct tWAVEFORMATEX *v10; // rax
  int inited; // ebx
  _QWORD *v12; // r15
  unsigned __int32 v13; // edi
  int MaxSupportedConnectionVersion; // ecx
  int v15; // eax
  struct IAPOProcessingHost *v17; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v18; // [rsp+38h] [rbp-C8h] BYREF
  __int128 v19; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v20; // [rsp+50h] [rbp-B0h]
  __int64 v21; // [rsp+60h] [rbp-A0h]
  struct APOInitSystemEffects2 v22; // [rsp+70h] [rbp-90h] BYREF
  __int128 v23; // [rsp+D0h] [rbp-30h] BYREF
  int v24; // [rsp+E0h] [rbp-20h]
  IPropertyStore *pAPOEndpointProperties; // [rsp+E8h] [rbp-18h]
  _BYTE v26[8]; // [rsp+F0h] [rbp-10h] BYREF
  IMMDeviceCollection *pDeviceCollection; // [rsp+F8h] [rbp-8h]
  UINT nSoftwareIoDeviceInCollection; // [rsp+100h] [rbp+0h]
  UINT nSoftwareIoConnectorIndex; // [rsp+104h] [rbp+4h]
  GUID AudioProcessingMode; // [rsp+108h] [rbp+8h]
  BOOL InitializeForDiscoveryOnly; // [rsp+118h] [rbp+18h]

  v19 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  v10 = (const struct tWAVEFORMATEX *)((__int64 (__fastcall *)(struct IAudioMediaType *))a5->lpVtbl->GetAudioFormat)(a5);
  inited = CloneWaveFormat(v10, (struct tWAVEFORMATEX **)this + 4);
  ATL::CComPtr<IDeviceGraphObjectCache>::operator=((__int64 *)this + 5, (__int64)a2);
  if ( inited >= 0 )
  {
    LODWORD(v20) = a6;
    LODWORD(v21) = 1094927443;
    *((_QWORD *)&v20 + 1) = a5;
    inited = (*(__int64 (__fastcall **)(_QWORD, __int128 *, char *))(**((_QWORD **)this + 5) + 40LL))(
               *((_QWORD *)this + 5),
               &v19,
               (char *)this + 48);
    if ( inited >= 0 )
    {
      v12 = (_QWORD *)((char *)this + 56);
      inited = ((__int64 (__fastcall *)(struct IAudioProcessingObject *, GUID *, char *))a4->lpVtbl->QueryInterface)(
                 a4,
                 &GUID_4ceb0aab_fa19_48ed_a857_87771ae1b768,
                 (char *)this + 56);
      if ( inited >= 0 )
      {
        inited = ((__int64 (__fastcall *)(struct IAudioProcessingObject *, GUID *, char *))a4->lpVtbl->QueryInterface)(
                   a4,
                   &GUID_f851809c_c177_49a0_b1b2_b66f017943ab,
                   (char *)this + 64);
        if ( inited >= 0 )
        {
          do
            v13 = _InterlockedIncrement((volatile signed __int32 *)&g_AuxiliaryInputId);
          while ( !v13 );
          memset_0(&v22, 0, sizeof(v22));
          inited = FillAuxiliaryInputInitStruct(a3, a4, &v22);
          if ( inited >= 0 )
          {
            v18 = 0LL;
            if ( ((__int64 (__fastcall *)(struct IAudioProcessingObject *, GUID *, __int64 *))a4->lpVtbl->QueryInterface)(
                   a4,
                   &GUID_c58b31cd_fc6a_4255_bc1f_ad29bb0a4a17,
                   &v18) < 0 )
            {
              inited = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, struct APOInitSystemEffects2 *, __int128 *))(*(_QWORD *)*v12 + 24LL))(
                         *v12,
                         v13,
                         88LL,
                         &v22,
                         &v19);
            }
            else
            {
              memset_0((char *)&v23 + 4, 0, 0x4CuLL);
              v23 = *(_OWORD *)&v22.APOInit.cbSize;
              v24 = *(_DWORD *)&v22.APOInit.clsid.Data4[4];
              LODWORD(v23) = 88;
              pAPOEndpointProperties = v22.pAPOEndpointProperties;
              pDeviceCollection = v22.pDeviceCollection;
              nSoftwareIoDeviceInCollection = v22.nSoftwareIoDeviceInCollection;
              nSoftwareIoConnectorIndex = v22.nSoftwareIoConnectorIndex;
              AudioProcessingMode = v22.AudioProcessingMode;
              InitializeForDiscoveryOnly = v22.InitializeForDiscoveryOnly;
              v17 = 0LL;
              inited = GetAPOProcessingHostInstance(&v17);
              if ( inited >= 0 )
              {
                inited = (*(__int64 (__fastcall **)(struct IAPOProcessingHost *, struct IAudioProcessingObject *, _BYTE *))(*(_QWORD *)v17 + 56LL))(
                           v17,
                           a4,
                           v26);
                if ( inited >= 0 )
                  inited = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int128 *, __int128 *))(*(_QWORD *)*v12 + 24LL))(
                             *v12,
                             v13,
                             80LL,
                             &v23,
                             &v19);
              }
              ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v17);
            }
            if ( inited >= 0 )
              *((_DWORD *)this + 18) = v13;
            ATL::CComPtrBase<IAudioProcessingObject>::~CComPtrBase<IAudioProcessingObject>(&v18);
          }
          if ( v22.pAPOEndpointProperties )
          {
            ((void (__fastcall *)(IPropertyStore *))v22.pAPOEndpointProperties->lpVtbl->Release)(v22.pAPOEndpointProperties);
            v22.pAPOEndpointProperties = 0LL;
          }
          if ( v22.pAPOSystemEffectsProperties )
          {
            ((void (__fastcall *)(IPropertyStore *))v22.pAPOSystemEffectsProperties->lpVtbl->Release)(v22.pAPOSystemEffectsProperties);
            v22.pAPOSystemEffectsProperties = 0LL;
          }
          if ( v22.pDeviceCollection )
            ((void (__fastcall *)(IMMDeviceCollection *))v22.pDeviceCollection->lpVtbl->Release)(v22.pDeviceCollection);
        }
      }
    }
  }
  MaxSupportedConnectionVersion = GetMaxSupportedConnectionVersion(a4);
  if ( MaxSupportedConnectionVersion == 1 )
  {
    v15 = 1094930515;
  }
  else
  {
    v15 = 1094930505;
    if ( MaxSupportedConnectionVersion == 2 )
      v15 = 1094930482;
  }
  *((_DWORD *)this + 30) = v15;
  return (unsigned int)inited;
}
