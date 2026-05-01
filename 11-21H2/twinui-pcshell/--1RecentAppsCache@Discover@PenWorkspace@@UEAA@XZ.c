/*
 * XREFs of ??1RecentAppsCache@Discover@PenWorkspace@@UEAA@XZ @ 0x18016A82C
 * Callers:
 *     ??_GRecentAppsCache@Discover@PenWorkspace@@UEAAPEAXI@Z @ 0x18016A7F0 (--_GRecentAppsCache@Discover@PenWorkspace@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ @ 0x1800406B0 (-InternalRelease@-$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180097BDC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x1800E5674 (--1-$unique_storage@U-$resource_policy@PEAXP6AXPEAX@_E$1-CloseHandle@details@wil@@YAX0@ZU-$integ.c)
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@2@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@2@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@2@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1800E62E8 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@.c)
 *     ??1?$unique_storage@U?$handle_null_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@IEAA@XZ @ 0x180107578 (--1-$unique_storage@U-$handle_null_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@wil@.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18010FD6C (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x18013E4BC (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??1?$deque@UForegroundSwitchData@Discover@PenWorkspace@@V?$allocator@UForegroundSwitchData@Discover@PenWorkspace@@@std@@@std@@QEAA@XZ @ 0x18016A8D8 (--1-$deque@UForegroundSwitchData@Discover@PenWorkspace@@V-$allocator@UForegroundSwitchData@Disco.c)
 *     ?InternalRelease@?$ComPtr@UIUnifiedTileManager@UnifiedTile@Shell@WindowsInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180180FD8 (-InternalRelease@-$ComPtr@UIUnifiedTileManager@UnifiedTile@Shell@WindowsInternal@@@WRL@Microsoft.c)
 */

void __fastcall PenWorkspace::Discover::RecentAppsCache::~RecentAppsCache(
        PenWorkspace::Discover::RecentAppsCache *this)
{
  void *v2; // rdx
  std::_Ref_count_base *v3; // rcx
  __int64 v4; // rcx

  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)this + 208);
  Microsoft::WRL::ComPtr<WindowsInternal::Shell::UnifiedTile::IUnifiedTileManager>::InternalRelease((char *)this + 192);
  Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)this + 23);
  __1__unique_storage_U__resource_policy_PEAXP6AXPEAX__E_1_CloseHandle_details_wil__YAX0_ZU__integral_constant__K_0A__wistd__PEAXPEAX_0A___T_details_wil___details_wil__IEAA_XZ(
    (wil::details **)this + 19,
    v2);
  wil::details::unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_null_resource_policy<int (*)(void *),&int CloseHandle(void *)>>((void **)this + 18);
  std::deque<PenWorkspace::Discover::ForegroundSwitchData>::~deque<PenWorkspace::Discover::ForegroundSwitchData>((char *)this + 104);
  v3 = (std::_Ref_count_base *)*((_QWORD *)this + 12);
  if ( v3 )
    std::_Ref_count_base::_Decref(v3);
  std::_Deallocate<16,0>(*((void **)this + 5), (*((_QWORD *)this + 6) - *((_QWORD *)this + 5)) & 0xFFFFFFFFFFFFFFF8uLL);
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  std::_List_node<std::pair<std::wstring const,std::shared_ptr<PenWorkspace::Discover::AppUsageData>>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<std::wstring const,std::shared_ptr<PenWorkspace::Discover::AppUsageData>>,void *>>>(
    v4,
    *((_QWORD *)this + 3));
  std::_Deallocate<16,0>(*((void **)this + 3), 0x40uLL);
  *((_DWORD *)this + 3) = -1073741823;
}
