/*
 * XREFs of _lambda_cbc41e859029890b22757779477c9c18_::operator() @ 0x180064288
 * Callers:
 *     ?CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKKPEAPEAVCAudioSession@@@Z @ 0x18002219C (-CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@K.c)
 * Callees:
 *     ??1?$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180005738 (--1-$com_ptr_t@UIAudioChannelConfig@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??1EndpointCharacteristicsDescriptor@@QEAA@XZ @ 0x18000CB5C (--1EndpointCharacteristicsDescriptor@@QEAA@XZ.c)
 *     ?TryGetCustomResourceManagerService@CEndpointCharacteristics@@QEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800102C0 (-TryGetCustomResourceManagerService@CEndpointCharacteristics@@QEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001164C (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800282D8 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180030368 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180031C24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$CComPtrBase@UISessionInternalEvents@@@ATL@@IEAA@PEAUISessionInternalEvents@@@Z @ 0x18003D2D0 (--0-$CComPtrBase@UISessionInternalEvents@@@ATL@@IEAA@PEAUISessionInternalEvents@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800759F0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall lambda_cbc41e859029890b22757779477c9c18_::operator()(__int64 a1)
{
  _QWORD *v2; // rdi
  _QWORD *v3; // rbx
  _QWORD *v4; // rdx
  int v5; // eax
  unsigned int v6; // ebx
  int CustomResourceManagerService; // eax
  _QWORD *v9; // rdi
  _QWORD *v10; // rbx
  CEndpointCharacteristics *v11[2]; // [rsp+40h] [rbp-20h] BYREF
  std::_Ref_count_base *v12; // [rsp+50h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]
  void *v14; // [rsp+80h] [rbp+20h] BYREF
  __int64 v15; // [rsp+88h] [rbp+28h] BYREF

  v2 = (_QWORD *)(*(_QWORD *)a1 + 288LL);
  v3 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x10uLL);
  ATL::CComPtrBase<ISessionInternalEvents>::CComPtrBase<ISessionInternalEvents>(v3 + 1, (__int64)g_PolicyEventsHandler);
  *v3 = *v2;
  *v2 = v3;
  *(_OWORD *)v11 = 0LL;
  v12 = 0LL;
  v4 = (_QWORD *)(*(_QWORD *)a1 + 240LL);
  if ( *(_QWORD *)(*(_QWORD *)a1 + 264LL) >= 8uLL )
    v4 = (_QWORD *)*v4;
  v5 = (*(__int64 (__fastcall **)(PVOID, _QWORD *, _QWORD, _QWORD, CEndpointCharacteristics **))(*(_QWORD *)g_pEndpointCharacteristicsCache
                                                                                               + 40LL))(
         g_pEndpointCharacteristicsCache,
         v4,
         0LL,
         0LL,
         v11);
  v6 = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6AB,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
      (const char *)(unsigned int)v5);
LABEL_11:
    EndpointCharacteristicsDescriptor::~EndpointCharacteristicsDescriptor((EndpointCharacteristicsDescriptor *)v11);
    return v6;
  }
  v14 = 0LL;
  CustomResourceManagerService = CEndpointCharacteristics::TryGetCustomResourceManagerService(
                                   v11[0],
                                   &GUID_39a3af14_c4e0_431e_84af_4d4c1087da45,
                                   &v14);
  v6 = CustomResourceManagerService;
  if ( CustomResourceManagerService < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6B0,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
      (const char *)(unsigned int)CustomResourceManagerService);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v14);
    goto LABEL_11;
  }
  if ( v14 )
  {
    v15 = 0LL;
    if ( (**(int (__fastcall ***)(void *, GUID *, __int64 *))v14)(v14, &GUID_a68ab569_b923_4330_a258_1735412d392e, &v15) >= 0 )
    {
      v9 = (_QWORD *)(*(_QWORD *)a1 + 288LL);
      v10 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x10uLL);
      ATL::CComPtrBase<ISessionInternalEvents>::CComPtrBase<ISessionInternalEvents>(v10 + 1, v15);
      *v10 = *v9;
      *v9 = v10;
    }
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v15);
  }
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v14);
  if ( v12 )
    std::_Ref_count_base::_Decref(v12);
  wil::com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>::~com_ptr_t<IAudioChannelConfig,wil::err_returncode_policy>((__int64 *)v11);
  return 0LL;
}
