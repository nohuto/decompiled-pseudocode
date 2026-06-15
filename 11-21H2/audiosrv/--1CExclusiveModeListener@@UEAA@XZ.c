/*
 * XREFs of ??1CExclusiveModeListener@@UEAA@XZ @ 0x18012C5D4
 * Callers:
 *     ??_GCExclusiveModeListener@@UEAAPEAXI@Z @ 0x180125EA0 (--_GCExclusiveModeListener@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18001063C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180010930 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??$_Erase_tree@V?$allocator@U?$_Tree_node@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@PEAX@std@@@std@@@?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@@std@@@std@@QEAAXAEAV?$allocator@U?$_Tree_node@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@PEAX@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@PEAX@1@@Z @ 0x180125854 (--$_Erase_tree@V-$allocator@U-$_Tree_node@U-$pair@$$CBU_GUID@@UHmdInfo@@@std@@PEAX@std@@@std@@@-.c)
 *     ??1CSpatialAudioResourceManagerTraceLogger@@UEAA@XZ @ 0x180129DB4 (--1CSpatialAudioResourceManagerTraceLogger@@UEAA@XZ.c)
 *     ?Shutdown@CExclusiveModeListener@@AEAAXXZ @ 0x18012DED8 (-Shutdown@CExclusiveModeListener@@AEAAXXZ.c)
 */

void __fastcall CExclusiveModeListener::~CExclusiveModeListener(CExclusiveModeListener *this)
{
  *(_QWORD *)this = &CExclusiveModeListener::`vftable';
  *((_QWORD *)this + 1) = &CExclusiveModeListener::`vftable'{for `IMixedRealitySpatialAudioFormatPolicyChange'};
  *((_QWORD *)this + 2) = &CExclusiveModeListener::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  CExclusiveModeListener::Shutdown(this);
  CSpatialAudioResourceManagerTraceLogger::~CSpatialAudioResourceManagerTraceLogger((CExclusiveModeListener *)((char *)this + 184));
  std::_Tree_val<std::_Tree_simple_types<std::pair<_GUID const,HmdInfo>>>::_Erase_tree<std::allocator<std::_Tree_node<std::pair<_GUID const,HmdInfo>,void *>>>(
    (__int64)this + 160,
    (__int64)this + 160,
    *(_QWORD *)(*((_QWORD *)this + 20) + 8LL));
  std::_Deallocate<16,0>(*((void **)this + 20), 0x48uLL);
  DeleteCriticalSection((LPCRITICAL_SECTION)this + 2);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)this + 9);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)this + 8);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)this + 7);
  *((_DWORD *)this + 13) = -1073741823;
  Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease((__int64 *)this + 5);
}
