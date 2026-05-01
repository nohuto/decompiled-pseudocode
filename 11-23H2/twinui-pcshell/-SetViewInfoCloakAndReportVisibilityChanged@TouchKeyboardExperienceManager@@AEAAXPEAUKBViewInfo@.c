/*
 * XREFs of ?SetViewInfoCloakAndReportVisibilityChanged@TouchKeyboardExperienceManager@@AEAAXPEAUKBViewInfo@@_N@Z @ 0x180516194
 * Callers:
 *     _lambda_259a1410ba958232e2f70f54c5d031d1_::operator() @ 0x180207090 (_lambda_259a1410ba958232e2f70f54c5d031d1_--operator().c)
 *     ?AnimateInputView@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@PEAUHWND__@@_N@Z @ 0x18050D884 (-AnimateInputView@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@PEAUHWND__@@_N@Z.c)
 *     ?AnimateInputViewForSizeOrModeChange@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@_NPEBUtagRECT@@W4AnimationType@@PEBG@Z @ 0x18050DCC8 (-AnimateInputViewForSizeOrModeChange@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@_NPEBU.c)
 *     ?HideInputView@TouchKeyboardExperienceManager@@AEAAJI_N@Z @ 0x1805113EC (-HideInputView@TouchKeyboardExperienceManager@@AEAAJI_N@Z.c)
 *     ?ShowView@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@PEBUtagRECT@@PEBUViewOptions@@@Z @ 0x180516958 (-ShowView@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@PEBUtagRECT@@PEBUViewOptions@@@Z.c)
 *     ?SizeOrModeChangeFadeOutAnimationTimerCallback@TouchKeyboardExperienceManager@@CAJPEAX@Z @ 0x180516DE0 (-SizeOrModeChangeFadeOutAnimationTimerCallback@TouchKeyboardExperienceManager@@CAJPEAX@Z.c)
 * Callees:
 *     ??$_Find_lower_bound@W4ShellView@Shell@UI@WindowsUdk@winrt@@@?$_Tree@V?$_Tmap_traits@W4ShellView@Shell@UI@WindowsUdk@winrt@@V?$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@U?$less@W4ShellView@Shell@UI@WindowsUdk@winrt@@@7@V?$allocator@U?$pair@$$CBW4ShellView@Shell@UI@WindowsUdk@winrt@@V?$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@@std@@@7@$0A@@std@@@std@@IEBA?AU?$_Tree_find_result@PEAU?$_Tree_node@U?$pair@$$CBW4ShellView@Shell@UI@WindowsUdk@winrt@@V?$shared_ptr@VInputAppViewCoodinatorHandler@@@std@@@std@@PEAX@std@@@1@AEBW4ShellView@Shell@UI@WindowsUdk@winrt@@@Z @ 0x180094C28 (--$_Find_lower_bound@W4ShellView@Shell@UI@WindowsUdk@winrt@@@-$_Tree@V-$_Tmap_traits@W4ShellView.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18009CE58 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x1800B6D14 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 *     ??0hstring@winrt@@QEAA@PEBG@Z @ 0x1800D20DC (--0hstring@winrt@@QEAA@PEBG@Z.c)
 *     ??B?$com_ptr_t@UIApplicationViewCollection@@Uerr_exception_policy@wil@@@wil@@QEBA_NXZ @ 0x1800D5B58 (--B-$com_ptr_t@UIApplicationViewCollection@@Uerr_exception_policy@wil@@@wil@@QEBA_NXZ.c)
 *     ?ReportVisibility@?$consume_WindowsUdk_UI_Shell_IShellViewCoordinator@UIShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@AEBW4ViewVisibility@Shell@UI@WindowsUdk@3@@Z @ 0x1800D6384 (-ReportVisibility@-$consume_WindowsUdk_UI_Shell_IShellViewCoordinator@UIShellViewCoordinator@She.c)
 *     ?SetEvent@details@wil@@YAXPEAX@Z @ 0x180177BB4 (-SetEvent@details@wil@@YAXPEAX@Z.c)
 *     ??1?$test_data_control@U_tip_InputAppViewCoordinatorShowRequestTest2@KeyboardHostingTipTests@@@tip@@QEAA@XZ @ 0x180206A60 (--1-$test_data_control@U_tip_InputAppViewCoordinatorShowRequestTest2@KeyboardHostingTipTests@@@t.c)
 *     ??B?$tip_test@U_tip_InputAppViewCoordinatorShowRequestTest2@KeyboardHostingTipTests@@@tip@@QEBA_NXZ @ 0x180206AC0 (--B-$tip_test@U_tip_InputAppViewCoordinatorShowRequestTest2@KeyboardHostingTipTests@@@tip@@QEBA_.c)
 *     ??C?$test_data_control@U_tip_InputAppViewCoordinatorShowRequestTest2@KeyboardHostingTipTests@@@tip@@QEBAPEAU_tip_InputAppViewCoordinatorShowRequestTest2@KeyboardHostingTipTests@@XZ @ 0x180206AE4 (--C-$test_data_control@U_tip_InputAppViewCoordinatorShowRequestTest2@KeyboardHostingTipTests@@@t.c)
 *     ??C?$tip_test@U_tip_InputAppViewCoordinatorShowRequestTest2@KeyboardHostingTipTests@@@tip@@QEAA?AV?$test_data_control@U_tip_InputAppViewCoordinatorShowRequestTest2@KeyboardHostingTipTests@@@1@XZ @ 0x180206B1C (--C-$tip_test@U_tip_InputAppViewCoordinatorShowRequestTest2@KeyboardHostingTipTests@@@tip@@QEAA-.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_TouchKeyboardButtonToShowTest@@@details@wil@@QEAA_NXZ @ 0x18020C33C (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_TouchKeyboardButtonToShowTest@@@d.c)
 *     ?complete@?$tip_test@U_tip_LoadCustomVDWallpaperWithGesturePerfTest@@@tip@@QEAAXXZ @ 0x18020C3B4 (-complete@-$tip_test@U_tip_LoadCustomVDWallpaperWithGesturePerfTest@@@tip@@QEAAXXZ.c)
 *     ?GetFirstViewType@KBViewInfo@@QEBAIXZ @ 0x1805100B8 (-GetFirstViewType@KBViewInfo@@QEBAIXZ.c)
 *     ?TryConvertCoreKeyboardViewTypeToShellView@TouchKeyboardExperienceManager@@AEAA?AV?$optional@W4ShellView@Shell@UI@WindowsUdk@winrt@@@std@@W4CoreKeyboardViewType@Core@Text@Internal@UI@Windows@@@Z @ 0x18051B870 (-TryConvertCoreKeyboardViewTypeToShellView@TouchKeyboardExperienceManager@@AEAA-AV-$optional@W4S.c)
 *     ?UpdateShellViewCoordinatorShellPreferences@TabTipAdapter@KeyboardHosting@@QEAAXW4ShellView@Shell@UI@WindowsUdk@winrt@@AEBUhstring@7@1@Z @ 0x18052E0EC (-UpdateShellViewCoordinatorShellPreferences@TabTipAdapter@KeyboardHosting@@QEAAXW4ShellView@Shel.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall TouchKeyboardExperienceManager::SetViewInfoCloakAndReportVisibilityChanged(
        TouchKeyboardExperienceManager *this,
        struct KBViewInfo *a2,
        unsigned __int8 a3)
{
  unsigned int v3; // edi
  unsigned int FirstViewType; // eax
  __int64 v7; // rcx
  _QWORD *v8; // r10
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rbx
  std::_Ref_count_base *v12; // rsi
  wil::details **v13; // r15
  RTL_SRWLOCK *v14; // rbx
  void *v15; // rdx
  __int64 v16; // rbx
  __int64 *v17; // rbx
  __int64 *v18; // rax
  __int64 *v19; // rcx
  __int64 *v20; // rax
  volatile signed __int32 *v21; // [rsp+20h] [rbp-50h] BYREF
  __int64 v22; // [rsp+28h] [rbp-48h]
  std::_Ref_count_base *v23; // [rsp+30h] [rbp-40h]
  __int64 v24[2]; // [rsp+38h] [rbp-38h] BYREF
  __int64 v25[2]; // [rsp+48h] [rbp-28h] BYREF
  _BYTE v26[16]; // [rsp+58h] [rbp-18h] BYREF
  __int64 v27; // [rsp+68h] [rbp-8h]
  unsigned int v28; // [rsp+A8h] [rbp+38h] BYREF
  char v29; // [rsp+ACh] [rbp+3Ch]
  unsigned int v30; // [rsp+B0h] [rbp+40h] BYREF
  volatile signed __int32 *v31; // [rsp+B8h] [rbp+48h] BYREF

  v3 = a3;
  if ( *((_BYTE *)a2 + 34) != a3 )
  {
    FirstViewType = KBViewInfo::GetFirstViewType(a2);
    TouchKeyboardExperienceManager::TryConvertCoreKeyboardViewTypeToShellView(v7, &v28, FirstViewType);
    if ( v29 )
    {
      std::_Tree<std::_Tmap_traits<enum winrt::WindowsUdk::UI::Shell::ShellView,std::shared_ptr<InputAppViewCoodinatorHandler>,std::less<enum winrt::WindowsUdk::UI::Shell::ShellView>,std::allocator<std::pair<enum winrt::WindowsUdk::UI::Shell::ShellView const,std::shared_ptr<InputAppViewCoodinatorHandler>>>,0>>::_Find_lower_bound<enum winrt::WindowsUdk::UI::Shell::ShellView>(
        (__int64 *)this + 32,
        (__int64)v26,
        (int *)&v28);
      v9 = v27;
      if ( !*(_BYTE *)(v27 + 25) && (signed int)v28 >= *(_DWORD *)(v27 + 32) && v27 != *v8 )
      {
        v10 = *(_QWORD *)(v27 + 48);
        if ( v10 )
          _InterlockedIncrement((volatile signed __int32 *)(v10 + 8));
        v11 = *(_QWORD *)(v9 + 40);
        v22 = v11;
        v12 = *(std::_Ref_count_base **)(v9 + 48);
        v23 = v12;
        v30 = v3;
        winrt::impl::consume_WindowsUdk_UI_Shell_IShellViewCoordinator<winrt::WindowsUdk::UI::Shell::IShellViewCoordinator>::ReportVisibility(
          (_QWORD *)(v11 + 8),
          &v30);
        if ( (_BYTE)v3 )
        {
          if ( *(_BYTE *)(v11 + 64) )
          {
            v16 = *((_QWORD *)this + 73);
            winrt::hstring::hstring((winrt::hstring *)&v21, &LocaleName);
            winrt::hstring::hstring((winrt::hstring *)&v31, &LocaleName);
            KeyboardHosting::TabTipAdapter::UpdateShellViewCoordinatorShellPreferences(v16, v28, &v31, &v21);
            winrt::handle_type<winrt::impl::hstring_traits>::close(&v31);
            winrt::handle_type<winrt::impl::hstring_traits>::close(&v21);
            *(_BYTE *)(v22 + 64) = 0;
          }
          v12 = v23;
        }
        else
        {
          v13 = (wil::details **)(v11 + 48);
          if ( wil::com_ptr_t<IApplicationViewCollection,wil::err_exception_policy>::operator bool((_QWORD *)(v11 + 48)) )
          {
            v14 = (RTL_SRWLOCK *)(v11 + 56);
            AcquireSRWLockExclusive(v14);
            if ( wil::com_ptr_t<IApplicationViewCollection,wil::err_exception_policy>::operator bool(v13) )
              wil::details::SetEvent(*v13, v15);
            if ( v14 )
              ReleaseSRWLockExclusive(v14);
          }
        }
        if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_TouchKeyboardButtonToShowTest>::__private_IsEnabled(`wil::Feature<__WilFeatureTraits_Feature_TouchKeyboardButtonToShowTest>::GetImpl'::`2'::impl) )
        {
          v17 = (__int64 *)(v22 + 72);
          if ( tip::tip_test<KeyboardHostingTipTests::_tip_InputAppViewCoordinatorShowRequestTest2>::operator bool((__int64 *)(v22 + 72)) )
          {
            if ( (_BYTE)v3 )
            {
              v20 = tip::tip_test<KeyboardHostingTipTests::_tip_InputAppViewCoordinatorShowRequestTest2>::operator->(
                      (__int64)v17,
                      v25);
              *(_BYTE *)(tip::test_data_control<KeyboardHostingTipTests::_tip_InputAppViewCoordinatorShowRequestTest2>::operator->(v20)
                       + 10) = 1;
              v19 = v25;
            }
            else
            {
              v18 = tip::tip_test<KeyboardHostingTipTests::_tip_InputAppViewCoordinatorShowRequestTest2>::operator->(
                      (__int64)v17,
                      v24);
              *(_BYTE *)(tip::test_data_control<KeyboardHostingTipTests::_tip_InputAppViewCoordinatorShowRequestTest2>::operator->(v18)
                       + 9) = 1;
              v19 = v24;
            }
            tip::test_data_control<KeyboardHostingTipTests::_tip_InputAppViewCoordinatorShowRequestTest2>::~test_data_control<KeyboardHostingTipTests::_tip_InputAppViewCoordinatorShowRequestTest2>(v19);
            tip::tip_test<_tip_LoadCustomVDWallpaperWithGesturePerfTest>::complete(v17);
          }
        }
        if ( v12 )
          std::_Ref_count_base::_Decref(v12);
      }
    }
  }
  *((_BYTE *)a2 + 34) = v3;
}
