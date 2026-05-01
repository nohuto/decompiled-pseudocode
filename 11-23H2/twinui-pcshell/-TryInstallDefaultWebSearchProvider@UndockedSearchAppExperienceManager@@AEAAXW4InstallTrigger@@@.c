/*
 * XREFs of ?TryInstallDefaultWebSearchProvider@UndockedSearchAppExperienceManager@@AEAAXW4InstallTrigger@@@Z @ 0x18046AD4C
 * Callers:
 *     ?SuspendAppInternal@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x180051EEC (-SuspendAppInternal@UndockedSearchAppExperienceManager@@AEAAXXZ.c)
 *     ?OnViewRequestNavigate@UndockedSearchAppExperienceManager@@AEAAJPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180112970 (-OnViewRequestNavigate@UndockedSearchAppExperienceManager@@AEAAJPEAUIPropertySet@Collections@Fou.c)
 *     ?TryInstallDefaultWebSearchProviderWhenSearchHidden@UndockedSearchAppExperienceManager@@AEAAXXZ @ 0x1801EFC6C (-TryInstallDefaultWebSearchProviderWhenSearchHidden@UndockedSearchAppExperienceManager@@AEAAXXZ.c)
 * Callees:
 *     ?has_ever_started@?$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ @ 0x180085A44 (-has_ever_started@-$shared_data@$00$0A@$0A@@details@tip2@@AEAA_NXZ.c)
 *     ?complete@?$tip_test@V?$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip2@@@tip2@@QEAAXXZ @ 0x180085A64 (-complete@-$tip_test@V-$merged_data@U_tip_PinManagerPinTest@PinManagerTipTests@@U12@@details@tip.c)
 *     ?start@?$shared_data@$0A@$0A@$0A@@details@tip2@@AEAA?AU_GUID@@XZ @ 0x1800864D4 (-start@-$shared_data@$0A@$0A@$0A@@details@tip2@@AEAA-AU_GUID@@XZ.c)
 *     ?end_update@?$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAXXZ @ 0x180086920 (-end_update@-$shared_data@$0A@$0A@$0A@@details@tip2@@AEAAXXZ.c)
 *     ?begin_update@?$shared_data@$0A@$0A@$00@details@tip2@@AEAA_NXZ @ 0x180086D28 (-begin_update@-$shared_data@$0A@$0A@$00@details@tip2@@AEAA_NXZ.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x180098C40 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ?SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z @ 0x1800A8AF0 (-SHRegGetDWORD@@YAJPEAUHKEY__@@PEBG1PEAK@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x1800C02C8 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x1800C29B0 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800C43CC (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ @ 0x1800C69A4 (-StopWatching@ThreadFailureCallbackHolder@details@wil@@QEAAXXZ.c)
 *     ??0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_N@Z @ 0x1800C8EDC (--0ThreadFailureCallbackHolder@details@wil@@QEAA@PEAUIFailureCallback@12@PEAUCallContextInfo@2@_.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     memset_0 @ 0x1801C750C (memset_0.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_58305357@@@details@wil@@QEAA_NXZ @ 0x1801F0700 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_58305357@@@details@wil@@QEAA_NXZ.c)
 *     ?SHRegSetDWORD@@YAJPEAUHKEY__@@PEBG1K@Z @ 0x1803DFDA4 (-SHRegSetDWORD@@YAJPEAUHKEY__@@PEBG1K@Z.c)
 *     ?SHRegGetString@@YAJPEAUHKEY__@@PEBG1PEAGK@Z @ 0x1803E844C (-SHRegGetString@@YAJPEAUHKEY__@@PEBG1PEAGK@Z.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_630b2476087197e3d624f13f03cc25bb___ @ 0x180461FB8 (Windows--Internal--ComTaskPool--QueueTask__lambda_630b2476087197e3d624f13f03cc25bb___.c)
 *     ??0?$tip_test@V?$merged_data@U_tip_SearchWebProviderInstallTest@@U1@@details@tip2@@@tip2@@QEAA@AEBV01@@Z @ 0x180465F70 (--0-$tip_test@V-$merged_data@U_tip_SearchWebProviderInstallTest@@U1@@details@tip2@@@tip2@@QEAA@A.c)
 *     _lambda_630b2476087197e3d624f13f03cc25bb_::__lambda_630b2476087197e3d624f13f03cc25bb_ @ 0x1804661E4 (_lambda_630b2476087197e3d624f13f03cc25bb_--__lambda_630b2476087197e3d624f13f03cc25bb_.c)
 *     ?Release@?$merged_data@U_tip_SearchWebProviderInstallTest@@U1@@details@tip2@@AEAAKXZ @ 0x180469FAC (-Release@-$merged_data@U_tip_SearchWebProviderInstallTest@@U1@@details@tip2@@AEAAKXZ.c)
 *     ?ShouldInstallDefaultWebSearchProvider@UndockedSearchAppExperienceManager@@AEAA_NXZ @ 0x18046A628 (-ShouldInstallDefaultWebSearchProvider@UndockedSearchAppExperienceManager@@AEAA_NXZ.c)
 *     ?ensure_data@?$tip_test@V?$merged_data@U_tip_SearchWebProviderInstallTest@@U1@@details@tip2@@@tip2@@AEBAAEAV?$com_ptr_t@V?$merged_data@U_tip_SearchWebProviderInstallTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x18046C178 (-ensure_data@-$tip_test@V-$merged_data@U_tip_SearchWebProviderInstallTest@@U1@@details@tip2@@@ti.c)
 *     ?reset@?$com_ptr_t@V?$merged_data@U_tip_SearchWebProviderInstallTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18046D7B0 (-reset@-$com_ptr_t@V-$merged_data@U_tip_SearchWebProviderInstallTest@@U1@@details@tip2@@Uerr_ret.c)
 */

// Hidden C++ exception states: #wind=7
void __fastcall UndockedSearchAppExperienceManager::TryInstallDefaultWebSearchProvider(
        UndockedSearchAppExperienceManager *a1,
        int a2)
{
  __int64 v4; // rdi
  __int64 v5; // rdx
  _QWORD *v6; // rax
  volatile signed __int32 **v7; // rbx
  volatile signed __int32 *v8; // rax
  __int64 v9; // rdi
  volatile signed __int32 *v10; // rbx
  unsigned __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // rdi
  __int64 v16; // rdx
  const char *v17; // r9
  int v18; // eax
  unsigned int v19; // [rsp+20h] [rbp-768h]
  LPVOID v20; // [rsp+30h] [rbp-758h] BYREF
  unsigned int v21; // [rsp+38h] [rbp-750h] BYREF
  volatile signed __int32 *v22; // [rsp+40h] [rbp-748h] BYREF
  LPVOID pv; // [rsp+48h] [rbp-740h] BYREF
  LPVOID v24; // [rsp+50h] [rbp-738h] BYREF
  void **v25; // [rsp+58h] [rbp-730h] BYREF
  _BYTE v26[24]; // [rsp+60h] [rbp-728h] BYREF
  int v27; // [rsp+78h] [rbp-710h]
  LPVOID v28; // [rsp+88h] [rbp-700h]
  __int128 v29; // [rsp+90h] [rbp-6F8h] BYREF
  _QWORD v30[4]; // [rsp+A0h] [rbp-6E8h] BYREF
  _QWORD v31[4]; // [rsp+C0h] [rbp-6C8h] BYREF
  _QWORD v32[4]; // [rsp+E0h] [rbp-6A8h] BYREF
  _QWORD v33[4]; // [rsp+100h] [rbp-688h] BYREF
  __int64 v34; // [rsp+120h] [rbp-668h] BYREF
  unsigned __int16 Src[264]; // [rsp+130h] [rbp-658h] BYREF
  unsigned __int16 v36[264]; // [rsp+340h] [rbp-448h] BYREF
  unsigned __int16 v37[264]; // [rsp+550h] [rbp-238h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+788h] [rbp+0h]

  try
  {
    if ( UndockedSearchAppExperienceManager::ShouldInstallDefaultWebSearchProvider(a1) )
    {
      v20 = 0LL;
      v4 = *(_QWORD *)tip2::tip_test<tip2::details::merged_data<_tip_SearchWebProviderInstallTest,_tip_SearchWebProviderInstallTest>>::ensure_data(&v20);
      pv = (LPVOID)v4;
      if ( v4 )
        _InterlockedIncrement((volatile signed __int32 *)(v4 + 424));
      tip2::details::shared_data<0,0,1>::begin_update(v4 + 8);
      *(_DWORD *)(v4 + 264) = a2;
      tip2::details::shared_data<0,0,0>::end_update(v4 + 8, v5);
      wil::com_ptr_t<tip2::details::merged_data<_tip_SearchWebProviderInstallTest,_tip_SearchWebProviderInstallTest>,wil::err_returncode_policy>::reset(&pv);
      if ( pv )
        tip2::details::merged_data<_tip_SearchWebProviderInstallTest,_tip_SearchWebProviderInstallTest>::Release((volatile signed __int32 *)pv);
      if ( v20 && tip2::details::shared_data<1,0,0>::has_ever_started((__int64)v20 + 8) )
        wil::com_ptr_t<tip2::details::merged_data<_tip_SearchWebProviderInstallTest,_tip_SearchWebProviderInstallTest>,wil::err_returncode_policy>::reset(&v20);
      v6 = (_QWORD *)tip2::tip_test<tip2::details::merged_data<_tip_SearchWebProviderInstallTest,_tip_SearchWebProviderInstallTest>>::ensure_data(&v20);
      tip2::details::shared_data<0,0,0>::start(*v6 + 8LL, &v29);
      v7 = (volatile signed __int32 **)tip2::tip_test<tip2::details::merged_data<_tip_SearchWebProviderInstallTest,_tip_SearchWebProviderInstallTest>>::ensure_data(&v20);
      v25 = &tip2::test_watcher<tip2::details::merged_data<_tip_SearchHideTest,_tip_SearchHideTest>>::`vftable';
      wil::details::ThreadFailureCallbackHolder::ThreadFailureCallbackHolder(
        (wil::details::ThreadFailureCallbackHolder *)v26,
        (struct wil::details::IFailureCallback *)&v25,
        0LL,
        1);
      v8 = *v7;
      v28 = (LPVOID)v8;
      if ( v8 )
        _InterlockedIncrement(v8 + 106);
      *((_BYTE *)a1 + 874) = 1;
      if ( SHRegGetString(
             HKEY_LOCAL_MACHINE,
             L"Software\\Microsoft\\Windows\\CurrentVersion\\Explorer\\Advanced",
             L"WebSearchProviderPackageFamilyName",
             Src,
             0x104u) < 0
        || SHRegGetString(
             HKEY_LOCAL_MACHINE,
             L"Software\\Microsoft\\Windows\\CurrentVersion\\Explorer\\Advanced",
             L"WebSearchProviderPackagePath",
             v37,
             0x104u) < 0 )
      {
        v15 = *(_QWORD *)tip2::tip_test<tip2::details::merged_data<_tip_SearchWebProviderInstallTest,_tip_SearchWebProviderInstallTest>>::ensure_data(&v20);
        v24 = (LPVOID)v15;
        if ( v15 )
          _InterlockedIncrement((volatile signed __int32 *)(v15 + 424));
        tip2::details::shared_data<0,0,1>::begin_update(v15 + 8);
        *(_BYTE *)(v15 + 268) = 1;
        tip2::details::shared_data<0,0,0>::end_update(v15 + 8, v16);
        wil::com_ptr_t<tip2::details::merged_data<_tip_SearchWebProviderInstallTest,_tip_SearchWebProviderInstallTest>,wil::err_returncode_policy>::reset(&v24);
        if ( v24 )
          tip2::details::merged_data<_tip_SearchWebProviderInstallTest,_tip_SearchWebProviderInstallTest>::Release((volatile signed __int32 *)v24);
        tip2::tip_test<tip2::details::merged_data<PinManagerTipTests::_tip_PinManagerPinTest,PinManagerTipTests::_tip_PinManagerPinTest>>::complete((__int64 *)&v20);
      }
      else
      {
        v9 = *(_QWORD *)tip2::tip_test<tip2::details::merged_data<_tip_SearchWebProviderInstallTest,_tip_SearchWebProviderInstallTest>>::ensure_data(&v20);
        v10 = (volatile signed __int32 *)v9;
        v22 = (volatile signed __int32 *)v9;
        if ( v9 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v9 + 424));
          v10 = v22;
        }
        tip2::details::shared_data<0,0,1>::begin_update(v9 + 8);
        v11 = -1LL;
        do
          ++v11;
        while ( Src[v11] );
        std::wstring::assign((char *)(v9 + 272), Src, v11);
        if ( v9 )
        {
          tip2::details::shared_data<0,0,0>::end_update(v9 + 8, v12);
          wil::com_ptr_t<tip2::details::merged_data<_tip_SearchWebProviderInstallTest,_tip_SearchWebProviderInstallTest>,wil::err_returncode_policy>::reset(&v22);
          v10 = v22;
        }
        if ( v10 )
          tip2::details::merged_data<_tip_SearchWebProviderInstallTest,_tip_SearchWebProviderInstallTest>::Release(v10);
        std::wstring::wstring(v31, Src);
        std::wstring::wstring(v30, v37);
        std::wstring::wstring(v32, (__int64)v31);
        std::wstring::wstring(v33, (__int64)v30);
        tip2::tip_test<tip2::details::merged_data<_tip_SearchWebProviderInstallTest,_tip_SearchWebProviderInstallTest>>::tip_test<tip2::details::merged_data<_tip_SearchWebProviderInstallTest,_tip_SearchWebProviderInstallTest>>(
          &v34,
          (__int64)&v20);
        v14 = Windows::Internal::ComTaskPool::QueueTask__lambda_630b2476087197e3d624f13f03cc25bb___(v13, (__int64)v32);
        if ( v14 < 0 )
          wil::details::in1diag3::Throw_Hr(
            retaddr,
            (void *)0xE3D,
            (int)"pcshell\\twinui\\experiencemanagers\\lib\\undockedsearchappexperiencemanager.cpp",
            (const char *)(unsigned int)v14,
            v19);
        lambda_630b2476087197e3d624f13f03cc25bb_::__lambda_630b2476087197e3d624f13f03cc25bb_((__int64)v32);
        std::wstring::_Tidy_deallocate((__int64)v30);
        std::wstring::_Tidy_deallocate((__int64)v31);
      }
      if ( v28 )
        tip2::details::merged_data<_tip_SearchWebProviderInstallTest,_tip_SearchWebProviderInstallTest>::Release((volatile signed __int32 *)v28);
      if ( v27 )
        wil::details::ThreadFailureCallbackHolder::StopWatching((wil::details::ThreadFailureCallbackHolder *)v26);
      if ( v20 )
        tip2::details::merged_data<_tip_SearchWebProviderInstallTest,_tip_SearchWebProviderInstallTest>::Release((volatile signed __int32 *)v20);
    }
    else if ( a2 == 2 )
    {
      *((_BYTE *)a1 + 874) = 1;
    }
    if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_58305357>::__private_IsEnabled(`wil::Feature<__WilFeatureTraits_Feature_58305357>::GetImpl'::`2'::impl) )
    {
      memset_0(v36, 0, 0x208uLL);
      if ( SHRegGetString(
             HKEY_LOCAL_MACHINE,
             L"Software\\Microsoft\\Windows\\CurrentVersion\\Explorer\\Advanced",
             L"WebSearchProviderPackageFamilyName",
             v36,
             0x104u) >= 0 )
      {
        v21 = 0;
        if ( SHRegGetDWORD(
               HKEY_CURRENT_USER,
               L"Software\\Microsoft\\Windows\\CurrentVersion\\Explorer\\AutoInstalledPWAs",
               v36,
               &v21) < 0
          || !v21 )
        {
          v18 = SHRegSetDWORD(
                  HKEY_CURRENT_USER,
                  L"Software\\Microsoft\\Windows\\CurrentVersion\\Explorer\\AutoInstalledPWAs",
                  v36,
                  1);
          if ( v18 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0xE57,
              (int)"pcshell\\twinui\\experiencemanagers\\lib\\undockedsearchappexperiencemanager.cpp",
              (const char *)(unsigned int)v18);
        }
      }
    }
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0xE5D,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\undockedsearchappexperiencemanager.cpp",
      v17);
  }
}
