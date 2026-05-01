/*
 * XREFs of ?GetSearchAppAUMID@CUndockedMiniSearchAppExperienceManagerConfig@@UEAA?AUhstring@winrt@@XZ @ 0x180171B80
 * Callers:
 *     <none>
 * Callees:
 *     ??$call@AEAV_lambda_6d00043e8e6068abd62a830dd09eee93_@@@?$factory_cache_entry@UAppExtension@AppExtensions@ApplicationModel@WindowsUdk@winrt@@UIAppExtensionStatics@2345@@impl@winrt@@QEAA?AUAppExtension@AppExtensions@ApplicationModel@WindowsUdk@2@AEAV_lambda_6d00043e8e6068abd62a830dd09eee93_@@@Z @ 0x180066EF4 (--$call@AEAV_lambda_6d00043e8e6068abd62a830dd09eee93_@@@-$factory_cache_entry@UAppExtension@AppE.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800F2B84 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ?Find@?$consume_WindowsUdk_ApplicationModel_AppExtensions_IAppExtensionStatics@UIAppExtensionStatics@AppExtensions@ApplicationModel@WindowsUdk@winrt@@@impl@winrt@@QEBA?AUAppExtension@AppExtensions@ApplicationModel@WindowsUdk@3@AEBUhstring@param@3@AEBW4AppExtensionOptions@5673@@Z @ 0x1800F5304 (-Find@-$consume_WindowsUdk_ApplicationModel_AppExtensions_IAppExtensionStatics@UIAppExtensionSta.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800F70B0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ?ApplicationUserModelId@?$consume_WindowsUdk_ApplicationModel_AppExtensions_IAppExtension@UIAppExtension@AppExtensions@ApplicationModel@WindowsUdk@winrt@@@impl@winrt@@QEBA?AUhstring@3@XZ @ 0x1800F718C (-ApplicationUserModelId@-$consume_WindowsUdk_ApplicationModel_AppExtensions_IAppExtension@UIAppE.c)
 *     ??0hstring@winrt@@QEAA@PEBG@Z @ 0x1800F76BC (--0hstring@winrt@@QEAA@PEBG@Z.c)
 *     ??Fatomic_ref_count@impl@winrt@@QEAAIXZ @ 0x1800FA060 (--Fatomic_ref_count@impl@winrt@@QEAAIXZ.c)
 *     WINRT_IMPL_HeapFree @ 0x1801892CC (WINRT_IMPL_HeapFree.c)
 *     WINRT_IMPL_GetProcessHeap @ 0x180189398 (WINRT_IMPL_GetProcessHeap.c)
 */

// Hidden C++ exception states: #wind=5
volatile signed __int32 **__fastcall CUndockedMiniSearchAppExperienceManagerConfig::GetSearchAppAUMID(
        __int64 a1,
        volatile signed __int32 **a2)
{
  void (__fastcall ***v3)(_QWORD, __int64 *, __int64 *); // rcx
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  volatile signed __int32 **v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  volatile signed __int32 *v11; // r14
  volatile signed __int32 *v12; // rsi
  HANDLE ProcessHeap; // rax
  volatile signed __int32 *v15; // [rsp+28h] [rbp-48h] BYREF
  volatile signed __int32 *v16[2]; // [rsp+30h] [rbp-40h] BYREF
  _QWORD v17[2]; // [rsp+40h] [rbp-30h] BYREF
  _QWORD v18[4]; // [rsp+50h] [rbp-20h] BYREF
  unsigned int v19; // [rsp+A0h] [rbp+30h] BYREF
  __int64 v20; // [rsp+A8h] [rbp+38h] BYREF

  *a2 = 0LL;
  v19 = 1;
  v18[0] = *(_QWORD *)winrt::hstring::hstring((winrt::hstring *)&v15, L"com.microsoft.windows.app.minisearch");
  v17[0] = v18;
  v17[1] = &v19;
  v16[1] = (volatile signed __int32 *)&qword_1807B40F8;
  _InterlockedIncrement64(&qword_1807B40F8);
  if ( winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::ApplicationModel::AppExtensions::AppExtension,winrt::WindowsUdk::ApplicationModel::AppExtensions::IAppExtensionStatics> )
  {
    winrt::impl::consume_WindowsUdk_ApplicationModel_AppExtensions_IAppExtensionStatics<winrt::WindowsUdk::ApplicationModel::AppExtensions::IAppExtensionStatics>::Find(
      &winrt::impl::factory_cache_entry_v<winrt::WindowsUdk::ApplicationModel::AppExtensions::AppExtension,winrt::WindowsUdk::ApplicationModel::AppExtensions::IAppExtensionStatics>,
      &v20,
      v18,
      &v19);
    _InterlockedDecrement64(&qword_1807B40F8);
  }
  else
  {
    _InterlockedDecrement64(&qword_1807B40F8);
    winrt::impl::factory_cache_entry<winrt::WindowsUdk::ApplicationModel::AppExtensions::AppExtension,winrt::WindowsUdk::ApplicationModel::AppExtensions::IAppExtensionStatics>::call<_lambda_6d00043e8e6068abd62a830dd09eee93_ &>(
      v3,
      (__int64)&v20,
      v17);
  }
  winrt::handle_type<winrt::impl::hstring_traits>::close(&v15, v4, v5, v6);
  if ( v20 )
  {
    v7 = (volatile signed __int32 **)winrt::impl::consume_WindowsUdk_ApplicationModel_AppExtensions_IAppExtension<winrt::WindowsUdk::ApplicationModel::AppExtensions::IAppExtension>::ApplicationUserModelId(
                                       &v20,
                                       v16);
    if ( a2 != v7 )
    {
      v11 = *v7;
      *v7 = 0LL;
      v12 = *a2;
      if ( *a2 )
      {
        if ( !(unsigned int)winrt::impl::atomic_ref_count::operator--(v12 + 6, v8, v9, v10) )
        {
          ProcessHeap = WINRT_IMPL_GetProcessHeap();
          WINRT_IMPL_HeapFree(ProcessHeap, 0, (LPVOID)v12);
        }
        *a2 = 0LL;
      }
      *a2 = v11;
    }
    winrt::handle_type<winrt::impl::hstring_traits>::close(v16, v8, v9, v10);
  }
  if ( v20 )
    winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v20);
  return a2;
}
