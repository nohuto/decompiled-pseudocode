/*
 * XREFs of ?InitializeSystemEffectsInterface@@YAJPEAUIMMDevice@@PEAUIAudioProcessingObject@@PEAU_GUID@@U3@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x140018394
 * Callers:
 *     ?ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ @ 0x140013CE0 (-ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ.c)
 *     ?ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ @ 0x1400168AC (-ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ.c)
 * Callees:
 *     ??1?$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140002804 (--1-$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetAPOProcessingHostInstance@@YAJPEAPEAUIAPOProcessingHost@@@Z @ 0x1400033FC (-GetAPOProcessingHostInstance@@YAJPEAPEAUIAPOProcessingHost@@@Z.c)
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x14000DD0C (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ?FillAPOInitSystemEffectsStructure@@YAJPEAUIMMDevice@@PEAU_GUID@@U2@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@AEAUAPOInitSystemEffects2@@@Z @ 0x14001624C (-FillAPOInitSystemEffectsStructure@@YAJPEAUIMMDevice@@PEAU_GUID@@U2@HW4__MIDL___MIDL_itf_audioen.c)
 *     ?IsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x1400190C0 (-IsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     __security_check_cookie @ 0x140027DF0 (__security_check_cookie.c)
 *     memset_0 @ 0x140029234 (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F1D0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??I?$com_ptr_t@UIServiceProvider@@Uerr_returncode_policy@wil@@@wil@@QEAAPEAPEAUIServiceProvider@@XZ @ 0x14004F1CC (--I-$com_ptr_t@UIServiceProvider@@Uerr_returncode_policy@wil@@@wil@@QEAAPEAPEAUIServiceProvider@.c)
 *     McTemplateU0jjt_EtwEventWriteTransfer @ 0x14006E4F8 (McTemplateU0jjt_EtwEventWriteTransfer.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall InitializeSystemEffectsInterface(
        struct IMMDevice *a1,
        struct IAudioProcessingObject *a2,
        struct _GUID *a3,
        struct _GUID *a4,
        int a5,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a6)
{
  int v10; // eax
  GUID *v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  int APOProcessingHostInstance; // ebx
  struct IAPOProcessingHost *v15; // rbx
  __int64 (__fastcall *v16)(struct IAPOProcessingHost *, struct IAudioProcessingObject *, __int64); // rdi
  __int64 v17; // rax
  int v18; // eax
  __int64 v19; // rax
  struct IAPOProcessingHost *v21; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v22; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v23; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v24; // [rsp+48h] [rbp-B8h] BYREF
  struct _GUID v25; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v26; // [rsp+60h] [rbp-A0h] BYREF
  int v27; // [rsp+70h] [rbp-90h]
  int v28; // [rsp+74h] [rbp-8Ch]
  IPropertyStore *pAPOEndpointProperties; // [rsp+78h] [rbp-88h]
  __int128 v30; // [rsp+80h] [rbp-80h]
  IMMDeviceCollection *pDeviceCollection; // [rsp+90h] [rbp-70h]
  GUID AudioProcessingMode; // [rsp+98h] [rbp-68h]
  BOOL InitializeForDiscoveryOnly; // [rsp+A8h] [rbp-58h]
  struct APOInitSystemEffects2 v34; // [rsp+B0h] [rbp-50h] BYREF

  v22 = 0LL;
  v24 = 0LL;
  v23 = 0LL;
  memset_0(&v34, 0, sizeof(v34));
  v10 = IsEqualGUID(a4, &GUID_00000000_0000_0000_0000_000000000000);
  v11 = a4;
  if ( v10 )
    v11 = &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
  *a4 = *v11;
  if ( ((__int64 (__fastcall *)(struct IAudioProcessingObject *, GUID *, __int64 *))a2->lpVtbl->QueryInterface)(
         a2,
         &GUID_c58b31cd_fc6a_4255_bc1f_ad29bb0a4a17,
         &v23) < 0
    && ((__int64 (__fastcall *)(struct IAudioProcessingObject *, GUID *, __int64 *))a2->lpVtbl->QueryInterface)(
         a2,
         &GUID_bafe99d2_7436_44ce_9e0e_4d89afbfff56,
         &v24) < 0
    && ((__int64 (__fastcall *)(struct IAudioProcessingObject *, GUID *, __int64 *))a2->lpVtbl->QueryInterface)(
         a2,
         &GUID_5fa00f27_add6_499a_8a9d_6b98521fa75b,
         &v22) < 0 )
  {
    goto LABEL_24;
  }
  v25 = *a4;
  APOProcessingHostInstance = FillAPOInitSystemEffectsStructure(a1, a3, &v25, 0, a6, &v34);
  if ( APOProcessingHostInstance < 0 )
    goto LABEL_25;
  if ( v23 )
  {
    memset_0((char *)&v26 + 4, 0, 0x4CuLL);
    v26 = *(_OWORD *)&v34.APOInit.cbSize;
    v27 = *(_DWORD *)&v34.APOInit.clsid.Data4[4];
    LODWORD(v26) = 80;
    pAPOEndpointProperties = v34.pAPOEndpointProperties;
    *((_QWORD *)&v30 + 1) = v34.pDeviceCollection;
    pDeviceCollection = *(IMMDeviceCollection **)&v34.nSoftwareIoDeviceInCollection;
    AudioProcessingMode = v34.AudioProcessingMode;
    InitializeForDiscoveryOnly = v34.InitializeForDiscoveryOnly;
    v21 = 0LL;
    APOProcessingHostInstance = GetAPOProcessingHostInstance(&v21);
    if ( APOProcessingHostInstance < 0 )
    {
LABEL_9:
      ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v21);
      goto LABEL_25;
    }
    *(_QWORD *)&v25.Data1 = 0LL;
    v15 = v21;
    v16 = *(__int64 (__fastcall **)(struct IAPOProcessingHost *, struct IAudioProcessingObject *, __int64))(*(_QWORD *)v21 + 56LL);
    v17 = wil::com_ptr_t<IServiceProvider,wil::err_returncode_policy>::operator&(&v25);
    APOProcessingHostInstance = v16(v15, a2, v17);
    if ( APOProcessingHostInstance < 0 )
    {
      wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)&v25);
      goto LABEL_9;
    }
    *(_QWORD *)&v30 = *(_QWORD *)&v25.Data1;
    APOProcessingHostInstance = ((__int64 (__fastcall *)(struct IAudioProcessingObject *, __int64, __int128 *))a2->lpVtbl->Initialize)(
                                  a2,
                                  80LL,
                                  &v26);
    wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>((__int64 *)&v25);
    ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v21);
    goto LABEL_18;
  }
  if ( v24 )
  {
    v18 = ((__int64 (__fastcall *)(struct IAudioProcessingObject *, __int64, struct APOInitSystemEffects2 *))a2->lpVtbl->Initialize)(
            a2,
            88LL,
            &v34);
LABEL_17:
    APOProcessingHostInstance = v18;
LABEL_18:
    if ( APOProcessingHostInstance < 0 )
      goto LABEL_25;
    v19 = v22;
    goto LABEL_20;
  }
  v19 = v22;
  if ( v22 )
  {
    v28 = 0;
    v26 = *(_OWORD *)&v34.APOInit.cbSize;
    v27 = *(_DWORD *)&v34.APOInit.clsid.Data4[4];
    LODWORD(v26) = 56;
    pAPOEndpointProperties = v34.pAPOEndpointProperties;
    v30 = *(_OWORD *)&v34.pAPOSystemEffectsProperties;
    pDeviceCollection = v34.pDeviceCollection;
    v18 = ((__int64 (__fastcall *)(struct IAudioProcessingObject *, __int64, __int128 *))a2->lpVtbl->Initialize)(
            a2,
            56LL,
            &v26);
    goto LABEL_17;
  }
LABEL_20:
  if ( (byte_1400CF981 & 2) != 0 )
  {
    if ( v19 )
      a4 = &GUID_00000000_0000_0000_0000_000000000000;
    McTemplateU0jjt_EtwEventWriteTransfer(v13, v12, a3, a4);
  }
LABEL_24:
  APOProcessingHostInstance = 0;
LABEL_25:
  if ( v34.pAPOEndpointProperties )
  {
    ((void (__fastcall *)(IPropertyStore *))v34.pAPOEndpointProperties->lpVtbl->Release)(v34.pAPOEndpointProperties);
    v34.pAPOEndpointProperties = 0LL;
  }
  if ( v34.pAPOSystemEffectsProperties )
  {
    ((void (__fastcall *)(IPropertyStore *))v34.pAPOSystemEffectsProperties->lpVtbl->Release)(v34.pAPOSystemEffectsProperties);
    v34.pAPOSystemEffectsProperties = 0LL;
  }
  if ( v34.pDeviceCollection )
  {
    ((void (__fastcall *)(IMMDeviceCollection *))v34.pDeviceCollection->lpVtbl->Release)(v34.pDeviceCollection);
    v34.pDeviceCollection = 0LL;
  }
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v23);
  wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>(&v24);
  ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>(&v22);
  return (unsigned int)APOProcessingHostInstance;
}
