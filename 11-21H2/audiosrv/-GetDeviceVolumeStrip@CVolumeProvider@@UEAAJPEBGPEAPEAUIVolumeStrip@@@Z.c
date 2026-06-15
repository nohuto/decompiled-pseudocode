/*
 * XREFs of ?GetDeviceVolumeStrip@CVolumeProvider@@UEAAJPEBGPEAPEAUIVolumeStrip@@@Z @ 0x18000A140
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@?$com_ptr_t@UIVolumeStrip@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18000F4A4 (-reset@-$com_ptr_t@UIVolumeStrip@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180015934 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ?GetEndpointStore@CEndpointStoreCache@@QEAAJPEBGPEAPEAVCEndpointStore@@@Z @ 0x180025560 (-GetEndpointStore@CEndpointStoreCache@@QEAAJPEBGPEAPEAVCEndpointStore@@@Z.c)
 *     ??$MakeAndInitialize@VCVolumeStrip@@UIVolumeStrip@@AEAPEBG@Details@WRL@Microsoft@@YAJPEAPEAUIVolumeStrip@@AEAPEBG@Z @ 0x180044844 (--$MakeAndInitialize@VCVolumeStrip@@UIVolumeStrip@@AEAPEBG@Details@WRL@Microsoft@@YAJPEAPEAUIVol.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18006A6C0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800BFD20 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$Write@U?$_tlgWrapSz@G@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@@Z @ 0x1800C2254 (--$Write@U-$_tlgWrapSz@G@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_E.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CVolumeProvider::GetDeviceVolumeStrip(
        CVolumeProvider *this,
        const unsigned __int16 *a2,
        struct IVolumeStrip **a3)
{
  int EndpointStore; // eax
  unsigned int v6; // edi
  struct CEndpointStore *v7; // rbx
  __int64 v8; // r14
  unsigned int v9; // edi
  struct IVolumeStrip *v10; // rcx
  signed __int32 i; // ecx
  int v13; // eax
  __int64 v14; // rcx
  unsigned int v15; // r14d
  __int64 v16; // r8
  int v17; // r9d
  int v18; // [rsp+20h] [rbp-58h]
  const unsigned __int16 *v19; // [rsp+30h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  struct CEndpointStore *v21; // [rsp+90h] [rbp+18h] BYREF
  const unsigned __int16 *v22; // [rsp+98h] [rbp+20h] BYREF

  *a3 = 0LL;
  v21 = 0LL;
  EndpointStore = CEndpointStoreCache::GetEndpointStore(this, a2, &v21);
  v6 = EndpointStore;
  v7 = v21;
  if ( EndpointStore < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x54,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\volumeprovider.cpp",
      (const char *)(unsigned int)EndpointStore,
      v18);
    goto LABEL_9;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)v21 + 112));
  v8 = *((_QWORD *)v7 + 19);
  if ( !v8 )
  {
    wil::com_ptr_t<IVolumeStrip,wil::err_returncode_policy>::reset((char *)v7 + 152);
    v22 = a2;
    v13 = Microsoft::WRL::Details::MakeAndInitialize<CVolumeStrip,IVolumeStrip,unsigned short const * &>(
            (char *)v7 + 152,
            &v22);
    v15 = v13;
    if ( v13 < 0 )
    {
      v6 = -2004287484;
      if ( v13 != -2004287484 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x5B,
          (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\volumeprovider.cpp",
          (const char *)(unsigned int)v13,
          v18);
        v6 = v15;
      }
      goto LABEL_7;
    }
    v16 = *(_QWORD *)(wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                        v14,
                        _lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_)
                    + 8);
    if ( *(_DWORD *)v16 > 4u
      && (*(_BYTE *)(v16 + 16) & 2) != 0
      && (*(_QWORD *)(v16 + 24) & 2LL) == *(_QWORD *)(v16 + 24) )
    {
      v19 = a2;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>>(
        v16,
        (unsigned int)&unk_180188743,
        v16,
        v17,
        (__int64)&v19);
    }
    v8 = *((_QWORD *)v7 + 19);
  }
  v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  if ( v9 >= 0x3FFFFFFF )
  {
    v6 = -2147024882;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x64,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\volumeprovider.cpp",
      (const char *)0x8007000ELL,
      v18);
  }
  else
  {
    v10 = (struct IVolumeStrip *)*((_QWORD *)v7 + 19);
    if ( v10 )
    {
      *a3 = v10;
      (*(void (__fastcall **)(struct IVolumeStrip *))(*(_QWORD *)v10 + 8LL))(v10);
    }
    else
    {
      *a3 = 0LL;
    }
    v6 = 0;
  }
LABEL_7:
  if ( v7 != (struct CEndpointStore *)-112LL )
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)v7 + 112));
LABEL_9:
  if ( v7 )
  {
    for ( i = *((_DWORD *)v7 + 3); i != 0x7FFFFFFF; i = *((_DWORD *)v7 + 3) )
    {
      if ( i == _InterlockedCompareExchange((volatile signed __int32 *)v7 + 3, i - 1, i) )
        break;
    }
    if ( i == 1 )
    {
      (*(void (__fastcall **)(struct CEndpointStore *, __int64))(*(_QWORD *)v21 + 24LL))(v21, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        (*(void (__fastcall **)(Microsoft::WRL::Details *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                          + 16LL))(Microsoft::WRL::Details::ModuleBase::module_);
    }
  }
  return v6;
}
