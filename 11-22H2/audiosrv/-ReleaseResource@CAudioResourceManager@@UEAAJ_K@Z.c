/*
 * XREFs of ?ReleaseResource@CAudioResourceManager@@UEAAJ_K@Z @ 0x1800DC620
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180021F60 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ?GetEndpointStore@CEndpointStoreCache@@QEAAJPEBGPEAPEAVCEndpointStore@@@Z @ 0x180027120 (-GetEndpointStore@CEndpointStoreCache@@QEAAJPEBGPEAPEAVCEndpointStore@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180047134 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?reset@?$com_ptr_t@UIVolumeStrip@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180048A20 (-reset@-$com_ptr_t@UIVolumeStrip@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18004BB14 (--1-$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IStreamGroupProxy_________lambda_18f2808d12418ff48ce22109896279d6___ @ 0x18006AB24 (std--for_each_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_Microsoft--WRL--ComPtr_I.c)
 *     ??1?$CComPtr@UIKsGetProposedFormat@@@ATL@@QEAA@XZ @ 0x18006B070 (--1-$CComPtr@UIKsGetProposedFormat@@@ATL@@QEAA@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180075A20 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@0@@Z @ 0x180081448 (--$_Destroy_range@V-$allocator@V-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@@std@@@std@@YAXPEAV.c)
 *     std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IStreamGroupProxy_________lambda_ff03322a3f89e5994eee42624e4a348b___ @ 0x1800D837C (std--for_each_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_Microsoft--_ea_1800D837C.c)
 *     ??0?$com_ptr_t@UISaDeviceProxy@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUISaDeviceProxy@@@Z @ 0x1800D8448 (--0-$com_ptr_t@UISaDeviceProxy@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAUISaDeviceProxy@@@Z.c)
 *     ??1?$vector@V?$ComPtr@UIProcessSubmixProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIProcessSubmixProxy@@@WRL@Microsoft@@@std@@@std@@QEAA@XZ @ 0x1800D8770 (--1-$vector@V-$ComPtr@UIProcessSubmixProxy@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@UIProcessSubm.c)
 *     WPP_SF_Pi @ 0x1800DDDD4 (WPP_SF_Pi.c)
 *     WPP_SF_i @ 0x1800DDF34 (WPP_SF_i.c)
 *     ?FindSaDeviceByResourceId@DeviceGraphStore@@YAJ_KPEAPEAUISaDeviceProxy@@@Z @ 0x18010BC14 (-FindSaDeviceByResourceId@DeviceGraphStore@@YAJ_KPEAPEAUISaDeviceProxy@@@Z.c)
 */

__int64 __fastcall CAudioResourceManager::ReleaseResource(
        CAudioResourceManager *this,
        DeviceGraphStore *a2,
        __int64 a3)
{
  struct ISaDeviceProxy **v4; // r8
  int SaDeviceByResourceId; // eax
  unsigned int v6; // ebx
  char v7; // r14
  const unsigned __int16 *v8; // rax
  CEndpointStoreCache *v9; // rcx
  int EndpointStore; // eax
  struct CEndpointStore *v11; // rbx
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // r8
  int v15; // esi
  __int64 v16; // r8
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+30h] [rbp-30h] BYREF
  __int64 v19; // [rsp+38h] [rbp-28h] BYREF
  __int128 v20; // [rsp+40h] [rbp-20h] BYREF
  __int64 v21; // [rsp+50h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]
  struct CEndpointStore *v23; // [rsp+90h] [rbp+30h] BYREF
  unsigned __int64 v24; // [rsp+98h] [rbp+38h] BYREF

  if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_i(*((_QWORD *)WPP_GLOBAL_Control + 2), 25LL, a3, a2);
  }
  v24 = 0LL;
  wil::com_ptr_t<IVolumeStrip,wil::err_returncode_policy>::reset((__int64 *)&v24);
  SaDeviceByResourceId = DeviceGraphStore::FindSaDeviceByResourceId(a2, (unsigned __int64)&v24, v4);
  v6 = SaDeviceByResourceId;
  if ( SaDeviceByResourceId >= 0 )
  {
    v7 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v24 + 88LL))(v24);
    v23 = 0LL;
    v8 = (const unsigned __int16 *)(*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)v24 + 24LL))(v24);
    EndpointStore = CEndpointStoreCache::GetEndpointStore(v9, v8, &v23);
    v6 = EndpointStore;
    if ( EndpointStore >= 0 )
    {
      v21 = 0LL;
      v11 = v23;
      v20 = 0LL;
      (*(void (__fastcall **)(_QWORD, LPCRITICAL_SECTION *))(**((_QWORD **)v23 + 13) + 120LL))(
        *((_QWORD *)v23 + 13),
        &lpCriticalSection);
      v12 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, __int128 *))(**((_QWORD **)v11 + 13) + 112LL))(
              *((_QWORD *)v11 + 13),
              v24,
              &v20);
      v15 = v12;
      if ( v12 >= 0 )
      {
        if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_Pi(*((_QWORD *)WPP_GLOBAL_Control + 2), v13, v14, (__int64)(*((_QWORD *)&v20 + 1) - v20) >> 3, a2);
        }
        if ( !(*(unsigned __int8 (__fastcall **)(unsigned __int64))(*(_QWORD *)v24 + 88LL))(v24) )
        {
          wil::com_ptr_t<ISaDeviceProxy,wil::err_returncode_policy>::com_ptr_t<ISaDeviceProxy,wil::err_returncode_policy>(
            &v23,
            v24);
          std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IStreamGroupProxy_________lambda_18f2808d12418ff48ce22109896279d6___(
            &v19,
            (_QWORD *)v20,
            *((_QWORD **)&v20 + 1),
            (__int64 *)&v23);
          ATL::CComPtr<IKsGetProposedFormat>::~CComPtr<IKsGetProposedFormat>(&v19);
          if ( WPP_GLOBAL_Control != (CAudioSessionManager *)&WPP_GLOBAL_Control
            && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
          {
            WPP_SF_i(*((_QWORD *)WPP_GLOBAL_Control + 2), 28LL, v16, a2);
          }
          wil::com_ptr_t<IVolumeStrip,wil::err_returncode_policy>::reset((__int64 *)&v24);
        }
        if ( lpCriticalSection )
          LeaveCriticalSection(lpCriticalSection);
        std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IStreamGroupProxy_________lambda_ff03322a3f89e5994eee42624e4a348b___(
          &v23,
          (__int64 **)v20,
          *((__int64 ***)&v20 + 1),
          v7);
        if ( (_QWORD)v20 )
        {
          std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<IStreamGroupProxy>>>(
            (__int64 *)v20,
            *((__int64 **)&v20 + 1));
          std::_Deallocate<16,0>((void *)v20, (v21 - v20) & 0xFFFFFFFFFFFFFFF8uLL);
          v21 = 0LL;
          v20 = 0LL;
        }
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release((volatile signed __int32 *)v11);
        v6 = 0;
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xA15,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
          (const char *)(unsigned int)v12);
        if ( lpCriticalSection )
          LeaveCriticalSection(lpCriticalSection);
        std::vector<Microsoft::WRL::ComPtr<IProcessSubmixProxy>>::~vector<Microsoft::WRL::ComPtr<IProcessSubmixProxy>>((__int64)&v20);
        wil::com_ptr_t<CEndpointStore,wil::err_returncode_policy>::~com_ptr_t<CEndpointStore,wil::err_returncode_policy>((volatile signed __int32 **)&v23);
        v6 = v15;
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xA0D,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
        (const char *)(unsigned int)EndpointStore);
      wil::com_ptr_t<CEndpointStore,wil::err_returncode_policy>::~com_ptr_t<CEndpointStore,wil::err_returncode_policy>((volatile signed __int32 **)&v23);
    }
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA07,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audioresourcemanager.cpp",
      (const char *)(unsigned int)SaDeviceByResourceId);
  }
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)&v24);
  return v6;
}
