/*
 * XREFs of ?_CreateImmersiveApp@CApplicationManager@@AEAAJPEBG_KKPEAUIImmersiveMonitor@@AEBU_GUID@@PEAPEAX@Z @ 0x1800E7794
 * Callers:
 *     ?CreateNewGlom@CApplicationManager@@UEAAJPEAUHWND__@@PEAUIImmersiveApplicationInternal@@PEAUIPropertySet@Collections@Foundation@Windows@@PEAPEAU3@@Z @ 0x1800386C0 (-CreateNewGlom@CApplicationManager@@UEAAJPEAUHWND__@@PEAUIImmersiveApplicationInternal@@PEAUIPro.c)
 *     ?_HandleViewCreation@CApplicationManager@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIPropertySet@Collections@Foundation@6@@Z @ 0x1800E8EF8 (-_HandleViewCreation@CApplicationManager@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Interna.c)
 *     ?CreateEnsuredApplication@CApplicationManager@@UEAAJPEBG_KPEAPEAUIImmersiveApplicationInternal@@@Z @ 0x1802E21E0 (-CreateEnsuredApplication@CApplicationManager@@UEAAJPEBG_KPEAPEAUIImmersiveApplicationInternal@@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x18002E1D4 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180036EC0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??4?$ComPtr@UIOSTaskCompletion@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1800C64F4 (--4-$ComPtr@UIOSTaskCompletion@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?GetPackageFullNameFromAppId@CallerIdentity@@YAJPEBGPEAPEAG@Z @ 0x1800E7D88 (-GetPackageFullNameFromAppId@CallerIdentity@@YAJPEBGPEAPEAG@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_DesktopSplashScreenSuppression@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800E8158 (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_DesktopSplashScreenSuppression@@@details@.c)
 *     ?_AddApplicationData@CApplicationManager@@AEAAJPEBGAEB_KAEAV?$ComPtr@V?$CRefCountedObject@UPER_APPLICATION_DATA@@@@@WRL@Microsoft@@@Z @ 0x1800E81EC (-_AddApplicationData@CApplicationManager@@AEAAJPEBGAEB_KAEAV-$ComPtr@V-$CRefCountedObject@UPER_A.c)
 *     ?GetItem@?$CSimpleHashTable@_KV?$ComPtr@V?$CRefCountedObject@UPER_APPLICATION_DATA@@@@@WRL@Microsoft@@V?$CDefaultHashPolicy@_K@@V?$CDefaultKeyCompare@_K@@VCDefaultResizePolicy@@VCDefaultRehashPolicy@@@@QEBAJAEB_KAEAV?$ComPtr@V?$CRefCountedObject@UPER_APPLICATION_DATA@@@@@WRL@Microsoft@@@Z @ 0x1800E85AC (-GetItem@-$CSimpleHashTable@_KV-$ComPtr@V-$CRefCountedObject@UPER_APPLICATION_DATA@@@@@WRL@Micro.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_8f57164c75fe082189e2647ffb9ef0fb___ @ 0x1800E85FC (Windows--Internal--ComTaskPool--QueueTask__lambda_8f57164c75fe082189e2647ffb9ef0fb___.c)
 *     ?s_LoadQuirksForApp@CApplicationManager@@CAXPEBGPEAUPER_APPLICATION_DATA@@@Z @ 0x1800E8718 (-s_LoadQuirksForApp@CApplicationManager@@CAXPEBGPEAUPER_APPLICATION_DATA@@@Z.c)
 *     ??$CreateRefCountedObj@UPER_APPLICATION_DATA@@$$V@@YA?AV?$ComPtr@V?$CRefCountedObject@UPER_APPLICATION_DATA@@@@@WRL@Microsoft@@XZ @ 0x1800E8ADC (--$CreateRefCountedObj@UPER_APPLICATION_DATA@@$$V@@YA-AV-$ComPtr@V-$CRefCountedObject@UPER_APPLI.c)
 *     ?s_CreateInstance@CImmersiveApp@@SAJPEBG_K0KPEAUIImmersiveMonitor@@PEAUPER_APPLICATION_DATA@@PEAUIIAMServiceProvider@@AEBU_GUID@@PEAPEAX@Z @ 0x1800EF9B4 (-s_CreateInstance@CImmersiveApp@@SAJPEBG_K0KPEAUIImmersiveMonitor@@PEAUPER_APPLICATION_DATA@@PEA.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18010FD6C (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
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
  int PackageFullNameFromAppId; // esi
  const struct _GUID *v13; // rdi
  int Item; // eax
  unsigned __int16 *v15; // rsi
  __int64 *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  unsigned __int64 v22; // rbx
  const struct _GUID *v24; // [rsp+38h] [rbp-48h]
  __int64 v25; // [rsp+50h] [rbp-30h] BYREF
  CallerIdentity *v26; // [rsp+58h] [rbp-28h] BYREF
  const struct _GUID *v27; // [rsp+60h] [rbp-20h] BYREF
  unsigned __int16 *v28; // [rsp+68h] [rbp-18h] BYREF
  __int64 v29; // [rsp+70h] [rbp-10h]
  __int64 v30; // [rsp+78h] [rbp-8h]
  unsigned __int64 v31; // [rsp+C8h] [rbp+48h] BYREF
  unsigned __int64 v32; // [rsp+D0h] [rbp+50h] BYREF
  unsigned int v33; // [rsp+D8h] [rbp+58h]

  v33 = a4;
  v32 = a3;
  v10 = a7;
  *a7 = 0LL;
  v28 = 0LL;
  v29 = 0LL;
  v30 = 0LL;
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(&v28);
  v29 = -1LL;
  v30 = -1LL;
  PackageFullNameFromAppId = CallerIdentity::GetPackageFullNameFromAppId(a2, (const unsigned __int16 *)&v28, v11);
  if ( PackageFullNameFromAppId >= 0 )
  {
    a6 = 0LL;
    v31 = 0LL;
    v13 = 0LL;
    Item = CSimpleHashTable<unsigned __int64,Microsoft::WRL::ComPtr<CRefCountedObject<PER_APPLICATION_DATA>>,CDefaultHashPolicy<unsigned __int64>,CDefaultKeyCompare<unsigned __int64>,CDefaultResizePolicy,CDefaultRehashPolicy>::GetItem(
             (char *)this + 1000,
             &v32,
             &v31);
    v15 = v28;
    if ( Item < 0 )
    {
      v16 = (__int64 *)CreateRefCountedObj<PER_APPLICATION_DATA,>(&v26);
      if ( &v25 != v16 )
      {
        v13 = (const struct _GUID *)*v16;
        *v16 = 0LL;
      }
      v25 = 0LL;
      a6 = v13;
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v25);
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v26);
      if ( v15 )
        CApplicationManager::s_LoadQuirksForApp(
          v15,
          (struct PER_APPLICATION_DATA *)((unsigned __int64)v13->Data4 & ((unsigned __int128)-(__int128)(unsigned __int64)v13 >> 64)));
      LOBYTE(v18) = 3;
      LOBYTE(v17) = 1;
      wil::details::FeatureImpl<__WilFeatureTraits_Feature_DesktopSplashScreenSuppression>::ReportUsage(
        &`wil::Feature<__WilFeatureTraits_Feature_DesktopSplashScreenSuppression>::GetImpl'::`2'::impl,
        v17,
        v18);
      v26 = a2;
      v27 = v13;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v27);
      Windows::Internal::ComTaskPool::QueueTask__lambda_8f57164c75fe082189e2647ffb9ef0fb___(v20, v19, v21, &v26);
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v27);
      Microsoft::WRL::ComPtr<IOSTaskCompletion>::operator=((__int64 *)&v31, (__int64 *)&a6);
    }
    a7 = 0LL;
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&a7);
    v22 = v31;
    PackageFullNameFromAppId = CImmersiveApp::s_CreateInstance(
                                 (const unsigned __int16 *)a2,
                                 a3,
                                 v15,
                                 v33,
                                 a5,
                                 (struct PER_APPLICATION_DATA *)((v31 + 8) & ((unsigned __int128)-(__int128)v31 >> 64)),
                                 (struct IIAMServiceProvider *)(((unsigned __int64)this + 192) & -(__int64)(this != 0LL)),
                                 v24,
                                 (void **)&a7);
    if ( PackageFullNameFromAppId >= 0 )
    {
      if ( (const struct _GUID *)v22 != v13
        || (PackageFullNameFromAppId = CApplicationManager::_AddApplicationData(this, a2, &v32, &a6),
            PackageFullNameFromAppId >= 0) )
      {
        PackageFullNameFromAppId = (*(__int64 (__fastcall **)(void **, GUID *, void **))*a7)(
                                     a7,
                                     &GUID_c9301630_27da_428e_a432_0a5e49c0ffee,
                                     v10);
      }
    }
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&a7);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v31);
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&a6);
  }
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free(&v28);
  return (unsigned int)PackageFullNameFromAppId;
}
