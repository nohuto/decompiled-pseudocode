/*
 * XREFs of ?_CreateImmersiveApp@CApplicationManager@@AEAAJPEBG_KKPEAUIImmersiveMonitor@@AEBU_GUID@@PEAPEAX@Z @ 0x18000DE50
 * Callers:
 *     ?_HandleViewCreation@CApplicationManager@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIPropertySet@Collections@Foundation@6@@Z @ 0x18000E474 (-_HandleViewCreation@CApplicationManager@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Interna.c)
 *     ?CreateEnsuredApplication@CApplicationManager@@UEAAJPEBG_KPEAPEAUIImmersiveApplicationInternal@@@Z @ 0x180398730 (-CreateEnsuredApplication@CApplicationManager@@UEAAJPEBG_KPEAPEAUIImmersiveApplicationInternal@@.c)
 *     ?CreateNewGlom@CApplicationManager@@UEAAJPEAUHWND__@@PEAUIImmersiveApplicationInternal@@PEAUIPropertySet@Collections@Foundation@Windows@@PEAPEAU3@@Z @ 0x180398A20 (-CreateNewGlom@CApplicationManager@@UEAAJPEAUHWND__@@PEAUIImmersiveApplicationInternal@@PEAUIPro.c)
 * Callees:
 *     ?s_LoadQuirksForApp@CApplicationManager@@CAXPEBGPEAUPER_APPLICATION_DATA@@@Z @ 0x18000C478 (-s_LoadQuirksForApp@CApplicationManager@@CAXPEBGPEAUPER_APPLICATION_DATA@@@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_DesktopSplashScreenSuppression@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18000D8E8 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_DesktopSplashScreenSuppression@@@details@.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_8f57164c75fe082189e2647ffb9ef0fb___ @ 0x18000DDC8 (Windows--Internal--ComTaskPool--QueueTask__lambda_8f57164c75fe082189e2647ffb9ef0fb___.c)
 *     ?GetItem@?$CSimpleHashTable@_KV?$ComPtr@V?$CRefCountedObject@UPER_APPLICATION_DATA@@@@@WRL@Microsoft@@V?$CDefaultHashPolicy@_K@@V?$CDefaultKeyCompare@_K@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@QEBAJAEB_KAEAV?$ComPtr@V?$CRefCountedObject@UPER_APPLICATION_DATA@@@@@WRL@Microsoft@@@Z @ 0x18000E108 (-GetItem@-$CSimpleHashTable@_KV-$ComPtr@V-$CRefCountedObject@UPER_APPLICATION_DATA@@@@@WRL@Micro.c)
 *     ??4?$ComPtr@UIAppLayout@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x18000E158 (--4-$ComPtr@UIAppLayout@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ??$CreateRefCountedObj@UPER_APPLICATION_DATA@@$$V@@YA?AV?$ComPtr@V?$CRefCountedObject@UPER_APPLICATION_DATA@@@@@WRL@Microsoft@@XZ @ 0x18000E1A8 (--$CreateRefCountedObj@UPER_APPLICATION_DATA@@$$V@@YA-AV-$ComPtr@V-$CRefCountedObject@UPER_APPLI.c)
 *     ?_AddApplicationData@CApplicationManager@@AEAAJPEBGAEB_KAEAV?$ComPtr@V?$CRefCountedObject@UPER_APPLICATION_DATA@@@@@WRL@Microsoft@@@Z @ 0x18001046C (-_AddApplicationData@CApplicationManager@@AEAAJPEBGAEB_KAEAV-$ComPtr@V-$CRefCountedObject@UPER_A.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?s_CreateInstance@CImmersiveApp@@SAJPEBG_K0KPEAUIImmersiveMonitor@@PEAUPER_APPLICATION_DATA@@PEAUIIAMServiceProvider@@AEBU_GUID@@PEAPEAX@Z @ 0x180028FEC (-s_CreateInstance@CImmersiveApp@@SAJPEBG_K0KPEAUIImmersiveMonitor@@PEAUPER_APPLICATION_DATA@@PEA.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetPackageFullNameFromAppId@CallerIdentity@@YAJPEBGPEAPEAG@Z @ 0x1800C0B90 (-GetPackageFullNameFromAppId@CallerIdentity@@YAJPEBGPEAPEAG@Z.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18016270C (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CApplicationManager::_CreateImmersiveApp(
        CApplicationManager *this,
        CallerIdentity *a2,
        unsigned __int64 a3,
        unsigned int a4,
        struct IImmersiveMonitor *a5,
        const struct _GUID *a6,
        void **a7)
{
  void **v10; // r12
  unsigned __int16 **v11; // r8
  int PackageFullNameFromAppId; // edi
  const struct _GUID *v13; // rbx
  int Item; // eax
  unsigned __int16 *v15; // rdi
  const struct _GUID **v16; // rax
  __int64 v17; // r9
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  const struct _GUID *v21; // r15
  const struct _GUID *v23; // [rsp+38h] [rbp-48h]
  __int64 v24; // [rsp+50h] [rbp-30h] BYREF
  CallerIdentity *v25; // [rsp+58h] [rbp-28h] BYREF
  const struct _GUID *v26; // [rsp+60h] [rbp-20h] BYREF
  unsigned __int16 *v27; // [rsp+68h] [rbp-18h] BYREF
  __int64 v28; // [rsp+70h] [rbp-10h]
  __int64 v29; // [rsp+78h] [rbp-8h]
  const struct _GUID *v30; // [rsp+C8h] [rbp+48h] BYREF
  unsigned __int64 v31; // [rsp+D0h] [rbp+50h] BYREF
  unsigned int v32; // [rsp+D8h] [rbp+58h]

  v32 = a4;
  v31 = a3;
  v10 = a7;
  *a7 = 0LL;
  v27 = 0LL;
  v28 = 0LL;
  v29 = 0LL;
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(&v27);
  v28 = -1LL;
  v29 = -1LL;
  PackageFullNameFromAppId = CallerIdentity::GetPackageFullNameFromAppId(a2, (const unsigned __int16 *)&v27, v11);
  if ( PackageFullNameFromAppId >= 0 )
  {
    a6 = 0LL;
    v30 = 0LL;
    v13 = 0LL;
    Item = CSimpleHashTable<unsigned __int64,Microsoft::WRL::ComPtr<CRefCountedObject<PER_APPLICATION_DATA>>,CDefaultHashPolicy<unsigned __int64>,CDefaultKeyCompare<unsigned __int64>,CDefaultResizePolicy,CDefaultRehashPolicy>::GetItem(
             (char *)this + 1000,
             &v31,
             &v30);
    v15 = v27;
    if ( Item < 0 )
    {
      v16 = (const struct _GUID **)CreateRefCountedObj<PER_APPLICATION_DATA,>(&v25);
      if ( &v24 != (__int64 *)v16 )
      {
        v13 = *v16;
        *v16 = 0LL;
      }
      v24 = 0LL;
      a6 = v13;
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v24);
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v25);
      if ( v15 )
        CApplicationManager::s_LoadQuirksForApp(
          v15,
          (struct PER_APPLICATION_DATA *)((unsigned __int64)v13->Data4 & ((unsigned __int128)-(__int128)(unsigned __int64)v13 >> 64)));
      wil::details::FeatureImpl<__WilFeatureTraits_Feature_DesktopSplashScreenSuppression>::ReportUsage(
        `wil::Feature<__WilFeatureTraits_Feature_DesktopSplashScreenSuppression>::GetImpl'::`2'::impl,
        1u,
        3u,
        v17);
      v25 = a2;
      v26 = v13;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v26);
      Windows::Internal::ComTaskPool::QueueTask__lambda_8f57164c75fe082189e2647ffb9ef0fb___(
        v19,
        v18,
        v20,
        (__int64)&v25);
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v26);
      Microsoft::WRL::ComPtr<IAppLayout>::operator=(&v30, &a6);
    }
    a7 = 0LL;
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&a7);
    v21 = v30;
    PackageFullNameFromAppId = CImmersiveApp::s_CreateInstance(
                                 (const unsigned __int16 *)a2,
                                 a3,
                                 v15,
                                 v32,
                                 a5,
                                 (struct PER_APPLICATION_DATA *)((unsigned __int64)v30->Data4 & ((unsigned __int128)-(__int128)(unsigned __int64)v30 >> 64)),
                                 (struct IIAMServiceProvider *)(((unsigned __int64)this + 192) & -(__int64)(this != 0LL)),
                                 v23,
                                 (void **)&a7);
    if ( PackageFullNameFromAppId >= 0 )
    {
      if ( v21 != v13
        || (PackageFullNameFromAppId = CApplicationManager::_AddApplicationData(this, a2, &v31, &a6),
            PackageFullNameFromAppId >= 0) )
      {
        PackageFullNameFromAppId = (*(__int64 (__fastcall **)(void **, GUID *, void **))*a7)(
                                     a7,
                                     &GUID_c9301630_27da_428e_a432_0a5e49c0ffee,
                                     v10);
      }
    }
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&a7);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v30);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&a6);
  }
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(&v27);
  return (unsigned int)PackageFullNameFromAppId;
}
