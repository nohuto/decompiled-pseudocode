/*
 * XREFs of ?ConfigureAuxiliaryInputStreamForStreamGroup@CAudioResourceManager@@QEAAJAEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@PEBG@Z @ 0x1800D8D34
 * Callers:
 *     ?ConfigureAuxiliaryInputStream@CSharedStreamGroupProxy@@IEAAJXZ @ 0x18000D4B8 (-ConfigureAuxiliaryInputStream@CSharedStreamGroupProxy@@IEAAJXZ.c)
 *     ?UpdateAuxiliaryInputForStreamGroup@CAudioResourceManager@@QEAAXAEBVWeakRef@WRL@Microsoft@@_N1@Z @ 0x1800DD39C (-UpdateAuxiliaryInputForStreamGroup@CAudioResourceManager@@QEAAXAEBVWeakRef@WRL@Microsoft@@_N1@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180009588 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001164C (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??1SystemAudioStream@@QEAA@XZ @ 0x180016C84 (--1SystemAudioStream@@QEAA@XZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180021F60 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ?GetEndpointStore@CEndpointStoreCache@@QEAAJPEBGPEAPEAVCEndpointStore@@@Z @ 0x180027120 (-GetEndpointStore@CEndpointStoreCache@@QEAAJPEBGPEAPEAVCEndpointStore@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18004BB14 (--1-$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1800669A0 (__security_check_cookie.c)
 *     memset_0 @ 0x180067A54 (memset_0.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1TraceLoggingThreadActivityIdSetter@@QEAA@XZ @ 0x1800D15F0 (--1TraceLoggingThreadActivityIdSetter@@QEAA@XZ.c)
 *     ??$MakeAndInitialize@VCBridgeStreamInstanceProxy@@UIBridgeStreamInstanceProxy@@AEA_J@Details@WRL@Microsoft@@YAJPEAPEAUIBridgeStreamInstanceProxy@@AEA_J@Z @ 0x1800D7948 (--$MakeAndInitialize@VCBridgeStreamInstanceProxy@@UIBridgeStreamInstanceProxy@@AEA_J@Details@WRL.c)
 *     _lambda_5eb033892be4afb4fa99fad0826c93de_::operator() @ 0x1800D8A0C (_lambda_5eb033892be4afb4fa99fad0826c93de_--operator().c)
 *     ?CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBG_JPEAUIStreamGroupProxy@@PEAUIBridgeStreamInstanceProxy@@PEAUSystemAudioStream@@@Z @ 0x1800D9278 (-CreateInternalLoopbackStream@CAudioResourceManager@@IEAAJPEBG_JPEAUIStreamGroupProxy@@PEAUIBrid.c)
 *     ?RegisterDisconnectNotificationClient@CAudioSessionManager@@QEAAJAEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@Z @ 0x1800E8750 (-RegisterDisconnectNotificationClient@CAudioSessionManager@@QEAAJAEAV-$ComPtr@UIStreamGroupProxy.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall CAudioResourceManager::ConfigureAuxiliaryInputStreamForStreamGroup(
        CAudioResourceManager *this,
        struct IStreamGroupProxy **a2,
        const unsigned __int16 *a3)
{
  CEndpointStoreCache *v6; // rcx
  int EndpointStore; // eax
  unsigned int v8; // ebx
  char v9; // di
  __int64 v10; // rbx
  int v11; // eax
  int v12; // edi
  int v13; // eax
  struct IStreamGroupProxy *v14; // rcx
  __int64 v15; // rax
  int v16; // eax
  int InternalLoopbackStream; // eax
  struct IStreamGroupProxy *v18; // rcx
  __int64 v19; // rax
  int v20; // eax
  struct IBridgeStreamInstanceProxy *v22; // [rsp+40h] [rbp-C0h] BYREF
  struct CEndpointStore *v23; // [rsp+48h] [rbp-B8h] BYREF
  GUID v24; // [rsp+50h] [rbp-B0h] BYREF
  GUID v25; // [rsp+60h] [rbp-A0h] BYREF
  GUID pguid; // [rsp+70h] [rbp-90h] BYREF
  GUID v27; // [rsp+80h] [rbp-80h] BYREF
  GUID v28; // [rsp+90h] [rbp-70h] BYREF
  int v29[4]; // [rsp+A0h] [rbp-60h] BYREF
  int v30; // [rsp+B0h] [rbp-50h]
  __int64 v31; // [rsp+B8h] [rbp-48h]
  __int64 v32; // [rsp+C0h] [rbp-40h]
  __int64 v33; // [rsp+C8h] [rbp-38h]
  _BYTE v34[304]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v35; // [rsp+200h] [rbp+100h]
  _BYTE v36[296]; // [rsp+208h] [rbp+108h] BYREF
  __int64 v37; // [rsp+330h] [rbp+230h]
  _BYTE v38[296]; // [rsp+338h] [rbp+238h] BYREF
  int v39; // [rsp+460h] [rbp+360h]
  _BYTE v40[304]; // [rsp+468h] [rbp+368h] BYREF
  __int64 v41; // [rsp+598h] [rbp+498h]
  int v42; // [rsp+5A0h] [rbp+4A0h]
  int v43; // [rsp+5A4h] [rbp+4A4h]
  wil::details::in1diag3 *retaddr; // [rsp+5F8h] [rbp+4F8h]

  pguid = GUID_00000000_0000_0000_0000_000000000000;
  CoCreateGuid(&pguid);
  v27 = pguid;
  v28 = pguid;
  EtwEventActivityIdControl(4LL, &v28);
  v23 = 0LL;
  EndpointStore = CEndpointStoreCache::GetEndpointStore(v6, a3, &v23);
  v8 = EndpointStore;
  if ( EndpointStore < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x554,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)(unsigned int)EndpointStore);
LABEL_18:
    wil::com_ptr_t<CEndpointStore,wil::err_returncode_policy>::~com_ptr_t<CEndpointStore,wil::err_returncode_policy>((volatile signed __int32 **)&v23);
    TraceLoggingThreadActivityIdSetter::~TraceLoggingThreadActivityIdSetter((TraceLoggingThreadActivityIdSetter *)&v27);
    return v8;
  }
  CAudioSessionManager::RegisterDisconnectNotificationClient(*((_QWORD *)v23 + 12), a2);
  *(_OWORD *)v29 = 0LL;
  v30 = 0;
  v31 = 0LL;
  v32 = 0LL;
  v33 = 0LL;
  memset_0(v34, 0, sizeof(v34));
  v35 = 0LL;
  memset_0(v36, 0, sizeof(v36));
  v37 = 0LL;
  memset_0(v38, 0, sizeof(v38));
  v39 = 0;
  memset_0(v40, 0, sizeof(v40));
  v41 = 0LL;
  v42 = 0;
  v43 = 0;
  v9 = 1;
  do
    v10 = _InterlockedIncrement64(&CAudioStream::s_llStreamIdentifier);
  while ( !v10 );
  *(_QWORD *)&v25.Data1 = v10;
  if ( !g_UseNewStreamManagementCodePath )
  {
    *(_QWORD *)&v24.Data1 = v29;
    v24.Data4[0] = 1;
    InternalLoopbackStream = CAudioResourceManager::CreateInternalLoopbackStream(
                               this,
                               a3,
                               v10,
                               *a2,
                               0LL,
                               (struct SystemAudioStream *)v29);
    if ( InternalLoopbackStream >= 0 )
    {
      v18 = *a2;
      v19 = *(_QWORD *)*a2;
      v25 = pguid;
      v20 = (*(__int64 (__fastcall **)(struct IStreamGroupProxy *, GUID *, __int64, _QWORD, int *, const unsigned __int16 *))(v19 + 304))(
              v18,
              &v25,
              v10,
              0LL,
              v29,
              a3);
      v8 = v20;
      if ( v20 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x575,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
          (const char *)(unsigned int)v20);
        v24.Data4[0] = 0;
        lambda_5eb033892be4afb4fa99fad0826c93de_::operator()((__int64 *)&v24);
        goto LABEL_17;
      }
      v24.Data4[0] = 0;
      v9 = 0;
    }
    else
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x573,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
        (const char *)(unsigned int)InternalLoopbackStream);
    }
    if ( v9 )
    {
      v24.Data4[0] = 0;
      lambda_5eb033892be4afb4fa99fad0826c93de_::operator()((__int64 *)&v24);
    }
    goto LABEL_22;
  }
  v22 = 0LL;
  v11 = Microsoft::WRL::Details::MakeAndInitialize<CBridgeStreamInstanceProxy,IBridgeStreamInstanceProxy,__int64 &>(
          &v22,
          (__int64 *)&v25);
  v12 = v11;
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x55F,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)(unsigned int)v11);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v22);
    SystemAudioStream::~SystemAudioStream((SystemAudioStream *)v29);
    v8 = v12;
    goto LABEL_18;
  }
  v13 = CAudioResourceManager::CreateInternalLoopbackStream(this, a3, v10, *a2, v22, (struct SystemAudioStream *)v29);
  if ( v13 >= 0 )
  {
    v14 = *a2;
    v15 = *(_QWORD *)*a2;
    v24 = pguid;
    v16 = (*(__int64 (__fastcall **)(struct IStreamGroupProxy *, GUID *, __int64, struct IBridgeStreamInstanceProxy *, _QWORD, const unsigned __int16 *))(v15 + 304))(
            v14,
            &v24,
            v10,
            v22,
            0LL,
            a3);
    v8 = v16;
    if ( v16 >= 0 )
      goto LABEL_10;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x563,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)(unsigned int)v16);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v22);
LABEL_17:
    SystemAudioStream::~SystemAudioStream((SystemAudioStream *)v29);
    goto LABEL_18;
  }
  wil::details::in1diag3::_Log_Hr(
    retaddr,
    (void *)0x561,
    (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
    (const char *)(unsigned int)v13);
LABEL_10:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v22);
LABEL_22:
  SystemAudioStream::~SystemAudioStream((SystemAudioStream *)v29);
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release((volatile signed __int32 *)v23);
  EtwEventActivityIdControl(4LL, &v28);
  return 0LL;
}
