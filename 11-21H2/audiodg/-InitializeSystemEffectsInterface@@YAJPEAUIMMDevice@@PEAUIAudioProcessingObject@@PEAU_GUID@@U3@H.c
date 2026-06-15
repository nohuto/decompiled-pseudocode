/*
 * XREFs of ?InitializeSystemEffectsInterface@@YAJPEAUIMMDevice@@PEAUIAudioProcessingObject@@PEAU_GUID@@U3@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x140018458
 * Callers:
 *     ?ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ @ 0x140012210 (-ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ.c)
 *     ?ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ @ 0x1400129B4 (-ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ.c)
 * Callees:
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x140004138 (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ??1?$CComPtrBase@UIAudioProcessingObject@@@ATL@@QEAA@XZ @ 0x14000A41C (--1-$CComPtrBase@UIAudioProcessingObject@@@ATL@@QEAA@XZ.c)
 *     ?FillAPOInitSystemEffectsStructure@@YAJPEAUIMMDevice@@PEAU_GUID@@U2@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@AEAUAPOInitSystemEffects2@@@Z @ 0x140014CE0 (-FillAPOInitSystemEffectsStructure@@YAJPEAUIMMDevice@@PEAU_GUID@@U2@HW4__MIDL___MIDL_itf_audioen.c)
 *     ?GetAPOProcessingHostInstance@@YAJPEAPEAUIAPOProcessingHost@@@Z @ 0x140020CE8 (-GetAPOProcessingHostInstance@@YAJPEAPEAUIAPOProcessingHost@@@Z.c)
 *     __security_check_cookie @ 0x14002F570 (__security_check_cookie.c)
 *     memset_0 @ 0x1400309B4 (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x140032230 (_guard_xfg_dispatch_icall_nop.c)
 *     McTemplateU0jjt_EtwEventWriteTransfer @ 0x140066C90 (McTemplateU0jjt_EtwEventWriteTransfer.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall InitializeSystemEffectsInterface(
        struct IMMDevice *a1,
        struct IAudioProcessingObject *a2,
        struct _GUID *a3,
        struct _GUID *a4,
        int a5,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a6)
{
  __int64 v10; // rax
  bool v11; // cl
  GUID *v12; // rax
  __int64 v13; // rdx
  int APOProcessingHostInstance; // ebx
  int v15; // eax
  __int64 v16; // rax
  __int64 v18[2]; // [rsp+30h] [rbp-D0h] BYREF
  struct _GUID v19; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v20; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v21; // [rsp+58h] [rbp-A8h] BYREF
  __int128 v22; // [rsp+60h] [rbp-A0h] BYREF
  int v23; // [rsp+70h] [rbp-90h]
  int v24; // [rsp+74h] [rbp-8Ch]
  IPropertyStore *pAPOEndpointProperties; // [rsp+78h] [rbp-88h]
  IPropertyStore *pAPOSystemEffectsProperties; // [rsp+80h] [rbp-80h] BYREF
  void *pReserved; // [rsp+88h] [rbp-78h]
  IMMDeviceCollection *pDeviceCollection; // [rsp+90h] [rbp-70h]
  GUID AudioProcessingMode; // [rsp+98h] [rbp-68h]
  BOOL InitializeForDiscoveryOnly; // [rsp+A8h] [rbp-58h]
  struct APOInitSystemEffects2 v31; // [rsp+B0h] [rbp-50h] BYREF

  v18[0] = 0LL;
  v21 = 0LL;
  v20 = 0LL;
  memset_0(&v31, 0, sizeof(v31));
  v10 = *(_QWORD *)&a4->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1;
  if ( *(_QWORD *)&a4->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1 )
    v10 = *(_QWORD *)a4->Data4 - *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4;
  v11 = v10 == 0;
  v12 = a4;
  if ( v11 )
    v12 = &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
  *a4 = *v12;
  if ( ((__int64 (__fastcall *)(struct IAudioProcessingObject *, GUID *, __int64 *))a2->lpVtbl->QueryInterface)(
         a2,
         &GUID_c58b31cd_fc6a_4255_bc1f_ad29bb0a4a17,
         &v20) < 0
    && ((__int64 (__fastcall *)(struct IAudioProcessingObject *, GUID *, __int64 *))a2->lpVtbl->QueryInterface)(
         a2,
         &GUID_bafe99d2_7436_44ce_9e0e_4d89afbfff56,
         &v21) < 0
    && ((__int64 (__fastcall *)(struct IAudioProcessingObject *, GUID *, __int64 *))a2->lpVtbl->QueryInterface)(
         a2,
         &GUID_5fa00f27_add6_499a_8a9d_6b98521fa75b,
         v18) < 0 )
  {
    goto LABEL_15;
  }
  v19 = *a4;
  APOProcessingHostInstance = FillAPOInitSystemEffectsStructure(a1, a3, &v19, 0, a6, &v31);
  if ( APOProcessingHostInstance < 0 )
    goto LABEL_16;
  if ( !v20 )
  {
    if ( v21 )
    {
      v15 = ((__int64 (__fastcall *)(struct IAudioProcessingObject *, __int64, struct APOInitSystemEffects2 *))a2->lpVtbl->Initialize)(
              a2,
              88LL,
              &v31);
    }
    else
    {
      v16 = v18[0];
      if ( !v18[0] )
      {
LABEL_14:
        if ( (byte_1400C1841 & 2) != 0 )
        {
          if ( v16 )
            a4 = &GUID_00000000_0000_0000_0000_000000000000;
          McTemplateU0jjt_EtwEventWriteTransfer(&GUID_00000000_0000_0000_0000_000000000000, v13, a3, a4);
        }
LABEL_15:
        APOProcessingHostInstance = 0;
        goto LABEL_16;
      }
      v24 = 0;
      v22 = *(_OWORD *)&v31.APOInit.cbSize;
      v23 = *(_DWORD *)&v31.APOInit.clsid.Data4[4];
      LODWORD(v22) = 56;
      pAPOEndpointProperties = v31.pAPOEndpointProperties;
      pAPOSystemEffectsProperties = v31.pAPOSystemEffectsProperties;
      pReserved = v31.pReserved;
      pDeviceCollection = v31.pDeviceCollection;
      v15 = ((__int64 (__fastcall *)(struct IAudioProcessingObject *, __int64, __int128 *))a2->lpVtbl->Initialize)(
              a2,
              56LL,
              &v22);
    }
    APOProcessingHostInstance = v15;
LABEL_12:
    if ( APOProcessingHostInstance < 0 )
      goto LABEL_16;
    v16 = v18[0];
    goto LABEL_14;
  }
  memset_0((char *)&v22 + 4, 0, 0x4CuLL);
  v22 = *(_OWORD *)&v31.APOInit.cbSize;
  v23 = *(_DWORD *)&v31.APOInit.clsid.Data4[4];
  LODWORD(v22) = 80;
  pAPOEndpointProperties = v31.pAPOEndpointProperties;
  pReserved = v31.pDeviceCollection;
  pDeviceCollection = *(IMMDeviceCollection **)&v31.nSoftwareIoDeviceInCollection;
  AudioProcessingMode = v31.AudioProcessingMode;
  InitializeForDiscoveryOnly = v31.InitializeForDiscoveryOnly;
  *(_QWORD *)&v19.Data1 = 0LL;
  APOProcessingHostInstance = GetAPOProcessingHostInstance((struct IAPOProcessingHost **)&v19);
  if ( APOProcessingHostInstance >= 0 )
  {
    APOProcessingHostInstance = (*(__int64 (__fastcall **)(_QWORD, struct IAudioProcessingObject *, IPropertyStore **))(**(_QWORD **)&v19.Data1 + 56LL))(
                                  *(_QWORD *)&v19.Data1,
                                  a2,
                                  &pAPOSystemEffectsProperties);
    if ( APOProcessingHostInstance >= 0 )
    {
      APOProcessingHostInstance = ((__int64 (__fastcall *)(struct IAudioProcessingObject *, __int64, __int128 *))a2->lpVtbl->Initialize)(
                                    a2,
                                    80LL,
                                    &v22);
      ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v19);
      goto LABEL_12;
    }
  }
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v19);
LABEL_16:
  if ( v31.pAPOEndpointProperties )
  {
    ((void (__fastcall *)(IPropertyStore *))v31.pAPOEndpointProperties->lpVtbl->Release)(v31.pAPOEndpointProperties);
    v31.pAPOEndpointProperties = 0LL;
  }
  if ( v31.pAPOSystemEffectsProperties )
  {
    ((void (__fastcall *)(IPropertyStore *))v31.pAPOSystemEffectsProperties->lpVtbl->Release)(v31.pAPOSystemEffectsProperties);
    v31.pAPOSystemEffectsProperties = 0LL;
  }
  if ( v31.pDeviceCollection )
  {
    ((void (__fastcall *)(IMMDeviceCollection *))v31.pDeviceCollection->lpVtbl->Release)(v31.pDeviceCollection);
    v31.pDeviceCollection = 0LL;
  }
  ATL::CComPtrBase<IAudioProcessingObject>::~CComPtrBase<IAudioProcessingObject>(&v20);
  ATL::CComPtrBase<IAudioProcessingObject>::~CComPtrBase<IAudioProcessingObject>(&v21);
  ATL::CComPtrBase<IAudioProcessingObject>::~CComPtrBase<IAudioProcessingObject>(v18);
  return (unsigned int)APOProcessingHostInstance;
}
