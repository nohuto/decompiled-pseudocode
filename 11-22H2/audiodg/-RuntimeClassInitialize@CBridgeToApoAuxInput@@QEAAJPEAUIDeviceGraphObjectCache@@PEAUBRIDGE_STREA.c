/*
 * XREFs of ?RuntimeClassInitialize@CBridgeToApoAuxInput@@QEAAJPEAUIDeviceGraphObjectCache@@PEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIAudioProcessingObject@@PEAUIAudioMediaType@@I@Z @ 0x14004F5DC
 * Callers:
 *     ??$MakeAndInitialize@VCBridgeToApoAuxInput@@UIBridgeSourceEndpointConsumer@@AEAPEAUIDeviceGraphObjectCache@@AEAPEAUBRIDGE_STREAM_DESCRIPTOR@@AEAPEAUIAudioProcessingObject@@AEAPEAUIAudioMediaType@@AEAI@Details@WRL@Microsoft@@YAJPEAPEAUIBridgeSourceEndpointConsumer@@AEAPEAUIDeviceGraphObjectCache@@AEAPEAUBRIDGE_STREAM_DESCRIPTOR@@AEAPEAUIAudioProcessingObject@@AEAPEAUIAudioMediaType@@AEAI@Z @ 0x14004EEE4 (--$MakeAndInitialize@VCBridgeToApoAuxInput@@UIBridgeSourceEndpointConsumer@@AEAPEAUIDeviceGraphO.c)
 * Callees:
 *     ??1?$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x140002804 (--1-$com_ptr_t@VCPrivateAPO@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?GetAPOProcessingHostInstance@@YAJPEAPEAUIAPOProcessingHost@@@Z @ 0x1400033FC (-GetAPOProcessingHostInstance@@YAJPEAPEAUIAPOProcessingHost@@@Z.c)
 *     ??1?$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ @ 0x14000DD0C (--1-$CComPtrBase@UIUnknown@@@ATL@@QEAA@XZ.c)
 *     ?GetMaxSupportedConnectionVersion@@YAIPEAUIAudioProcessingObject@@@Z @ 0x14000F540 (-GetMaxSupportedConnectionVersion@@YAIPEAUIAudioProcessingObject@@@Z.c)
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x1400210E4 (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     __security_check_cookie @ 0x140027DF0 (__security_check_cookie.c)
 *     memset_0 @ 0x140029234 (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x14002F210 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DF14 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$com_query_to_nothrow@UIApoAuxiliaryInputConfiguration@@AEAPEAUIAudioProcessingObject@@@wil@@YAJAEAPEAUIAudioProcessingObject@@PEAPEAUIApoAuxiliaryInputConfiguration@@@Z @ 0x14004F014 (--$com_query_to_nothrow@UIApoAuxiliaryInputConfiguration@@AEAPEAUIAudioProcessingObject@@@wil@@Y.c)
 *     ??$try_com_query_to@UIAudioSystemEffects3@@AEAPEAUIAudioProcessingObject@@@wil@@YA_NAEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects3@@@Z @ 0x14004F040 (--$try_com_query_to@UIAudioSystemEffects3@@AEAPEAUIAudioProcessingObject@@@wil@@YA_NAEAPEAUIAudi.c)
 *     wil::details::lambda_call__lambda_52d1ba851b6b57420151ed604b411c9a___::_lambda_call__lambda_52d1ba851b6b57420151ed604b411c9a___ @ 0x14004F130 (wil--details--lambda_call__lambda_52d1ba851b6b57420151ed604b411c9a___--_lambda_call__lambda_52d1.c)
 *     ??I?$com_ptr_t@UIServiceProvider@@Uerr_returncode_policy@wil@@@wil@@QEAAPEAPEAUIServiceProvider@@XZ @ 0x14004F20C (--I-$com_ptr_t@UIServiceProvider@@Uerr_returncode_policy@wil@@@wil@@QEAAPEAPEAUIServiceProvider@.c)
 *     ?FillAuxiliaryInputInitStruct@@YAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIAudioProcessingObject@@AEAUAPOInitSystemEffects2@@@Z @ 0x14004F2CC (-FillAuxiliaryInputInitStruct@@YAJPEAUBRIDGE_STREAM_DESCRIPTOR@@PEAUIAudioProcessingObject@@AEAU.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall CBridgeToApoAuxInput::RuntimeClassInitialize(
        CBridgeToApoAuxInput *this,
        struct IDeviceGraphObjectCache *a2,
        struct BRIDGE_STREAM_DESCRIPTOR *a3,
        struct IAudioProcessingObject *a4,
        struct IAudioMediaType *a5,
        unsigned int a6)
{
  const struct tWAVEFORMATEX *v8; // rax
  int inited; // ebx
  void *v10; // rcx
  __int64 v11; // rdx
  _QWORD *v12; // r14
  __int64 v13; // rcx
  __int64 v14; // rcx
  unsigned __int32 v15; // esi
  int APOProcessingHostInstance; // eax
  struct BRIDGE_STREAM_DESCRIPTOR *v17; // rbx
  __int64 (__fastcall *v18)(struct BRIDGE_STREAM_DESCRIPTOR *, struct IAudioProcessingObject *, __int64 *); // rdi
  __int64 *v19; // rax
  int v20; // eax
  __int64 v21; // rdx
  int MaxSupportedConnectionVersion; // ecx
  int v23; // eax
  int v24; // eax
  struct BRIDGE_STREAM_DESCRIPTOR *v26; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v27; // [rsp+38h] [rbp-C8h] BYREF
  struct IAudioProcessingObject *v28; // [rsp+40h] [rbp-C0h] BYREF
  struct APOInitSystemEffects2 *v29; // [rsp+48h] [rbp-B8h] BYREF
  struct tWAVEFORMATEX *v30; // [rsp+50h] [rbp-B0h] BYREF
  char v31; // [rsp+58h] [rbp-A8h]
  __int64 v32; // [rsp+60h] [rbp-A0h] BYREF
  int v33[2]; // [rsp+68h] [rbp-98h] BYREF
  __int64 v34; // [rsp+70h] [rbp-90h]
  unsigned int v35; // [rsp+78h] [rbp-88h]
  int v36; // [rsp+7Ch] [rbp-84h]
  struct IAudioMediaType *v37; // [rsp+80h] [rbp-80h]
  __int64 v38; // [rsp+88h] [rbp-78h]
  __int128 v39; // [rsp+90h] [rbp-70h] BYREF
  int v40; // [rsp+A0h] [rbp-60h]
  IPropertyStore *pAPOEndpointProperties; // [rsp+A8h] [rbp-58h]
  __int64 v42; // [rsp+B0h] [rbp-50h]
  IMMDeviceCollection *pDeviceCollection; // [rsp+B8h] [rbp-48h]
  UINT nSoftwareIoDeviceInCollection; // [rsp+C0h] [rbp-40h]
  UINT nSoftwareIoConnectorIndex; // [rsp+C4h] [rbp-3Ch]
  GUID AudioProcessingMode; // [rsp+C8h] [rbp-38h]
  BOOL InitializeForDiscoveryOnly; // [rsp+D8h] [rbp-28h]
  struct APOInitSystemEffects2 v48; // [rsp+E0h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+188h] [rbp+88h]

  v26 = a3;
  v28 = a4;
  v29 = (struct APOInitSystemEffects2 *)((char *)this + 16);
  v30 = 0LL;
  v31 = 1;
  v8 = (const struct tWAVEFORMATEX *)((__int64 (__fastcall *)(struct IAudioMediaType *, struct IDeviceGraphObjectCache *))a5->lpVtbl->GetAudioFormat)(
                                       a5,
                                       a2);
  inited = CloneWaveFormat(v8, &v30);
  if ( v31 )
  {
    v10 = *(void **)&v29->APOInit.cbSize;
    *(_QWORD *)&v29->APOInit.cbSize = v30;
    if ( v10 )
      CoTaskMemFree(v10);
  }
  if ( inited >= 0 )
  {
    v12 = (_QWORD *)((char *)this + 24);
    v13 = *((_QWORD *)this + 3);
    *((_QWORD *)this + 3) = 0LL;
    if ( v13 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    inited = wil::com_query_to_nothrow<IApoAuxiliaryInputConfiguration,IAudioProcessingObject * &>(
               &v28,
               (__int64)this + 24);
    if ( inited < 0 )
    {
      v11 = 65LL;
      goto LABEL_6;
    }
    v14 = *((_QWORD *)this + 4);
    *((_QWORD *)this + 4) = 0LL;
    if ( v14 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
    inited = ((__int64 (__fastcall *)(struct IAudioProcessingObject *, GUID *, char *))a4->lpVtbl->QueryInterface)(
               a4,
               &GUID_f851809c_c177_49a0_b1b2_b66f017943ab,
               (char *)this + 32);
    if ( inited < 0 )
    {
      v11 = 66LL;
      goto LABEL_6;
    }
    do
      v15 = _InterlockedIncrement((volatile signed __int32 *)&g_AuxiliaryInputId);
    while ( !v15 );
    memset_0(&v48, 0, sizeof(v48));
    inited = FillAuxiliaryInputInitStruct(v26, v28, &v48);
    if ( inited < 0 )
    {
      v11 = 73LL;
      goto LABEL_6;
    }
    v29 = &v48;
    LOBYTE(v30) = 1;
    *(_QWORD *)v33 = 0LL;
    v36 = 0;
    v38 = 1094927443LL;
    v34 = 0LL;
    v35 = a6;
    v37 = a5;
    v32 = 0LL;
    if ( wil::try_com_query_to<IAudioSystemEffects3,IAudioProcessingObject * &>(&v28, (__int64)&v32) )
    {
      memset_0((char *)&v39 + 4, 0, 0x4CuLL);
      v39 = *(_OWORD *)&v48.APOInit.cbSize;
      v40 = *(_DWORD *)&v48.APOInit.clsid.Data4[4];
      LODWORD(v39) = 80;
      pAPOEndpointProperties = v48.pAPOEndpointProperties;
      pDeviceCollection = v48.pDeviceCollection;
      nSoftwareIoDeviceInCollection = v48.nSoftwareIoDeviceInCollection;
      nSoftwareIoConnectorIndex = v48.nSoftwareIoConnectorIndex;
      AudioProcessingMode = v48.AudioProcessingMode;
      InitializeForDiscoveryOnly = v48.InitializeForDiscoveryOnly;
      v26 = 0LL;
      APOProcessingHostInstance = GetAPOProcessingHostInstance(&v26);
      inited = APOProcessingHostInstance;
      if ( APOProcessingHostInstance < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x67,
          (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\apoendpoint.cpp",
          (const char *)(unsigned int)APOProcessingHostInstance);
LABEL_26:
        ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v26);
LABEL_35:
        wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>(&v32);
        wil::details::lambda_call__lambda_52d1ba851b6b57420151ed604b411c9a___::_lambda_call__lambda_52d1ba851b6b57420151ed604b411c9a___((__int64)&v29);
        return (unsigned int)inited;
      }
      v27 = 0LL;
      v17 = v26;
      v18 = *(__int64 (__fastcall **)(struct BRIDGE_STREAM_DESCRIPTOR *, struct IAudioProcessingObject *, __int64 *))(*(_QWORD *)v26 + 56LL);
      v19 = wil::com_ptr_t<IServiceProvider,wil::err_returncode_policy>::operator&(&v27);
      v20 = v18(v17, v28, v19);
      inited = v20;
      if ( v20 < 0 )
      {
        v21 = 106LL;
LABEL_25:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v21,
          (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\apoendpoint.cpp",
          (const char *)(unsigned int)v20);
        wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>(&v27);
        goto LABEL_26;
      }
      v42 = v27;
      v20 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int128 *, int *))(*(_QWORD *)*v12 + 24LL))(
              *v12,
              v15,
              80LL,
              &v39,
              v33);
      inited = v20;
      if ( v20 < 0 )
      {
        v21 = 109LL;
        goto LABEL_25;
      }
      wil::com_ptr_t<CPrivateAPO,wil::err_returncode_policy>::~com_ptr_t<CPrivateAPO,wil::err_returncode_policy>(&v27);
      ATL::CComPtrBase<IUnknown>::~CComPtrBase<IUnknown>((__int64 *)&v26);
    }
    else
    {
      v24 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, struct APOInitSystemEffects2 *, int *))(*(_QWORD *)*v12 + 24LL))(
              *v12,
              v15,
              88LL,
              &v48,
              v33);
      inited = v24;
      if ( v24 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x71,
          (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\apoendpoint.cpp",
          (const char *)(unsigned int)v24);
        goto LABEL_35;
      }
    }
    *((_DWORD *)this + 10) = v15;
    MaxSupportedConnectionVersion = GetMaxSupportedConnectionVersion(v28);
    if ( MaxSupportedConnectionVersion == 1 )
    {
      v23 = 1094930515;
    }
    else
    {
      v23 = 1094930505;
      if ( MaxSupportedConnectionVersion == 2 )
        v23 = 1094930482;
    }
    *((_DWORD *)this + 11) = v23;
    inited = 0;
    goto LABEL_35;
  }
  v11 = 64LL;
LABEL_6:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v11,
    (__int64)"avcore\\audiocore\\server\\audiodg\\exe\\apoendpoint.cpp",
    (const char *)(unsigned int)inited);
  return (unsigned int)inited;
}
