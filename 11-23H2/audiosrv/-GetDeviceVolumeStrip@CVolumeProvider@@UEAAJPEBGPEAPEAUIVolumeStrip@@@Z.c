/*
 * XREFs of ?GetDeviceVolumeStrip@CVolumeProvider@@UEAAJPEBGPEAPEAUIVolumeStrip@@@Z @ 0x180021DC0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??$MakeAndInitialize@VCVolumeStrip@@UIVolumeStrip@@AEAPEBG@Details@WRL@Microsoft@@YAJPEAPEAUIVolumeStrip@@AEAPEBG@Z @ 0x18001EAF4 (--$MakeAndInitialize@VCVolumeStrip@@UIVolumeStrip@@AEAPEBG@Details@WRL@Microsoft@@YAJPEAPEAUIVol.c)
 *     _tlgKeywordOn @ 0x180020530 (_tlgKeywordOn.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180021F60 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180024B78 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ?GetEndpointStore@CEndpointStoreCache@@QEAAJPEBGPEAPEAVCEndpointStore@@@Z @ 0x180027120 (-GetEndpointStore@CEndpointStoreCache@@QEAAJPEBGPEAPEAVCEndpointStore@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@UIVolumeStrip@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180048A20 (-reset@-$com_ptr_t@UIVolumeStrip@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??$Write@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@@Z @ 0x18004B3A4 (--$Write@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 *     ??1?$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18004BB14 (--1-$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CVolumeProvider::GetDeviceVolumeStrip(
        CVolumeProvider *this,
        const unsigned __int16 *a2,
        struct IVolumeStrip **a3)
{
  int EndpointStore; // eax
  unsigned int v6; // ebx
  struct CEndpointStore *v7; // rbx
  struct _RTL_CRITICAL_SECTION *v8; // r14
  struct IVolumeStrip **v9; // r15
  struct IVolumeStrip *v10; // rsi
  unsigned int v11; // edi
  struct IVolumeStrip *v12; // rcx
  int v14; // eax
  __int64 v15; // rcx
  unsigned int v16; // edi
  _DWORD *v17; // rcx
  int v18; // ecx
  int v19; // r8d
  int v20; // r9d
  int v21; // [rsp+20h] [rbp-20h]
  const unsigned __int16 *v22[2]; // [rsp+30h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+28h]
  __int64 v24; // [rsp+80h] [rbp+40h] BYREF
  struct CEndpointStore *v25; // [rsp+88h] [rbp+48h] BYREF

  *a3 = 0LL;
  v25 = 0LL;
  EndpointStore = CEndpointStoreCache::GetEndpointStore(this, a2, &v25);
  v6 = EndpointStore;
  if ( EndpointStore < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x53,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\volumeprovider.cpp",
      (const char *)(unsigned int)EndpointStore,
      v21);
LABEL_16:
    wil::com_ptr_t<CEndpointStore,wil::err_returncode_policy>::~com_ptr_t<CEndpointStore,wil::err_returncode_policy>(&v25);
    return v6;
  }
  v7 = v25;
  v8 = (struct _RTL_CRITICAL_SECTION *)((char *)v25 + 112);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)v25 + 112));
  v24 = 0LL;
  v9 = (struct IVolumeStrip **)((char *)v7 + 152);
  if ( !*((_QWORD *)v7 + 19) )
  {
    wil::com_ptr_t<IVolumeStrip,wil::err_returncode_policy>::reset((char *)v7 + 152);
    v22[0] = a2;
    v14 = Microsoft::WRL::Details::MakeAndInitialize<CVolumeStrip,IVolumeStrip,unsigned short const * &>(
            (CVolumeStrip **)v7 + 19,
            v22);
    v16 = v14;
    if ( v14 < 0 )
    {
      v6 = -2004287484;
      if ( v14 != -2004287484 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x5A,
          (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\volumeprovider.cpp",
          (const char *)(unsigned int)v14,
          v21);
        wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v24);
        if ( v8 )
          LeaveCriticalSection(v8);
        v6 = v16;
        goto LABEL_16;
      }
      goto LABEL_14;
    }
    v17 = *(_DWORD **)(wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                         v15,
                         _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)
                     + 8);
    if ( *v17 > 4u && tlgKeywordOn((__int64)v17, 2LL) )
    {
      v22[0] = a2;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>>(
        v18,
        (unsigned int)&unk_1801947A3,
        v19,
        v20,
        (__int64)v22);
    }
  }
  v10 = *v9;
  v11 = (*(__int64 (__fastcall **)(struct IVolumeStrip *))(*(_QWORD *)*v9 + 8LL))(*v9);
  (*(void (__fastcall **)(struct IVolumeStrip *))(*(_QWORD *)v10 + 16LL))(v10);
  if ( v11 >= 0x3FFFFFFF )
  {
    v6 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x63,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\volumeprovider.cpp",
      (const char *)0x8007000ELL,
      v21);
LABEL_14:
    wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>(&v24);
    if ( v8 )
      LeaveCriticalSection(v8);
    goto LABEL_16;
  }
  v12 = *v9;
  if ( *v9 )
  {
    *a3 = v12;
    (*(void (__fastcall **)(struct IVolumeStrip *))(*(_QWORD *)v12 + 8LL))(v12);
  }
  else
  {
    *a3 = 0LL;
  }
  if ( v8 )
    LeaveCriticalSection(v8);
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v7);
  return 0LL;
}
