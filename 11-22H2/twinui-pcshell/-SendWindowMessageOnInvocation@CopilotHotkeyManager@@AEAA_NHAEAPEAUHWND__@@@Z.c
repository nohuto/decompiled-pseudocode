/*
 * XREFs of ?SendWindowMessageOnInvocation@CopilotHotkeyManager@@AEAA_NHAEAPEAUHWND__@@@Z @ 0x180273224
 * Callers:
 *     ?InvokeCopilotOrCustomOption@CopilotHotkeyManager@@QEAA_NW4IMMERSIVE_HOT_KEY_ID@@@Z @ 0x180264890 (-InvokeCopilotOrCustomOption@CopilotHotkeyManager@@QEAA_NW4IMMERSIVE_HOT_KEY_ID@@@Z.c)
 *     CopilotHotkeyManager::TrySendingCopilotHardwareKeyLongPressSignal$_ResumeCoro$1 @ 0x180274070 (CopilotHotkeyManager--TrySendingCopilotHardwareKeyLongPressSignal$_ResumeCoro$1.c)
 * Callees:
 *     ?lock_shared@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x18004D4D0 (-lock_shared@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SR.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180050328 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseS.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x1800C02C8 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x1800C43CC (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800D2424 (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x1800D246C (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ??4?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@AEBV01@@Z @ 0x180188B6C (--4-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV01@AEBV01@@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_CopilotHardwareKeyExtendedSignalsInvokedTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x180261030 (--1-$test_data_control@V-$merged_data@U_tip_CopilotHardwareKeyExtendedSignalsInvokedTest@@U1@@de.c)
 *     ??C?$tip_test@V?$merged_data@U_tip_CopilotHardwareKeyExtendedSignalsInvokedTest@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_CopilotHardwareKeyExtendedSignalsInvokedTest@@U1@@details@tip2@@@1@XZ @ 0x18026132C (--C-$tip_test@V-$merged_data@U_tip_CopilotHardwareKeyExtendedSignalsInvokedTest@@U1@@details@tip.c)
 *     ?IsTargetApplicationRunning@CopilotHotkeyManager@@AEAA_NXZ @ 0x180271630 (-IsTargetApplicationRunning@CopilotHotkeyManager@@AEAA_NXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_55994114@@@details@wil@@QEAA_NXZ @ 0x1802749EC (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_55994114@@@details@wil@@QEAA_NXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_FastPathActivationWindowHandleCheck@@@details@wil@@QEAA_NXZ @ 0x180274D4C (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_FastPathActivationWindo.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1803A43A8 (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$?9GU?$char_traits@G@std@@V?$allocator@G@1@@std@@YA_NAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@0@Z @ 0x1806EDFB8 (--$-9GU-$char_traits@G@std@@V-$allocator@G@1@@std@@YA_NAEBV-$basic_string@GU-$char_traits@G@std@.c)
 */

// Hidden C++ exception states: #wind=2
char __fastcall CopilotHotkeyManager::SendWindowMessageOnInvocation(CopilotHotkeyManager *this, int a2, HWND *a3)
{
  WPARAM v4; // r12
  bool v6; // r14
  bool v7; // r15
  int v8; // ebx
  char v9; // bl
  char v10; // al
  const char *v11; // r9
  void *v13; // [rsp+28h] [rbp-48h] BYREF
  char lParam[32]; // [rsp+30h] [rbp-40h] BYREF
  UINT Msg; // [rsp+50h] [rbp-20h]
  HWND hWnd; // [rsp+58h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+38h]

  v4 = a2;
  std::wstring::wstring(lParam, (__int64)this + 192);
  Msg = 0;
  hWnd = 0LL;
  v6 = 0;
  v7 = 0;
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_55994114>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_55994114>::GetImpl'::`2'::impl) )
  {
    wil::srwlock::lock_shared((RTL_SRWLOCK *)this + 23, (RTL_SRWLOCK **)&v13);
    hWnd = (HWND)*((_QWORD *)this + 53);
    Msg = *((_DWORD *)this + 104);
    v8 = *((_DWORD *)this + 94);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockShared(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>>((RTL_SRWLOCK **)&v13);
    v6 = v8 == 2;
  }
  v9 = 1;
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_55994114>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_55994114>::GetImpl'::`2'::impl) )
  {
    if ( !*((_DWORD *)this + 94) && CopilotHotkeyManager::IsTargetApplicationRunning(this) )
      *((_DWORD *)this + 94) = 1;
    if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_FastPathActivationWindowHandleCheck>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_FastPathActivationWindowHandleCheck>::GetImpl'::`2'::impl) )
    {
      if ( !hWnd && *((_DWORD *)this + 94) != 2 || !IsWindow(hWnd) )
      {
        v10 = 1;
        goto LABEL_15;
      }
LABEL_14:
      v10 = 0;
LABEL_15:
      v7 = *((_DWORD *)this + 94) == 2;
      if ( !v10 )
        goto LABEL_22;
      goto LABEL_16;
    }
    if ( hWnd || *((_DWORD *)this + 94) != 1 )
      goto LABEL_14;
  }
LABEL_16:
  v6 = !EnumWindows((WNDENUMPROC)CopilotHotkeyManager::EnumWindowsCallback, (LPARAM)lParam);
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_55994114>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_55994114>::GetImpl'::`2'::impl) )
  {
    *((_DWORD *)this + 94) = !v6 + 2;
    if ( v6
      && ((unsigned __int8)std::operator!=<unsigned short>(lParam, (char *)this + 384)
       || hWnd != *((HWND *)this + 53)
       || Msg != *((_DWORD *)this + 104)) )
    {
      wil::srwlock::lock_exclusive((RTL_SRWLOCK *)this + 23, (RTL_SRWLOCK **)&v13);
      std::wstring::operator=((char *)this + 384, lParam);
      *((_DWORD *)this + 104) = Msg;
      *((_QWORD *)this + 53) = hWnd;
      CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock((RTL_SRWLOCK **)&v13);
    }
  }
LABEL_22:
  if ( v6 && hWnd )
  {
    if ( PostMessageW(hWnd, Msg, v4, 0LL) )
    {
      *a3 = hWnd;
      *(_BYTE *)(*tip2::tip_test<tip2::details::merged_data<_tip_CopilotHardwareKeyExtendedSignalsInvokedTest,_tip_CopilotHardwareKeyExtendedSignalsInvokedTest>>::operator->(
                    (__int64)this + 432,
                    (__int64 *)&v13)
               + 312) = 1;
      tip2::test_data_control<tip2::details::merged_data<_tip_CopilotHardwareKeyExtendedSignalsInvokedTest,_tip_CopilotHardwareKeyExtendedSignalsInvokedTest>>::~test_data_control<tip2::details::merged_data<_tip_CopilotHardwareKeyExtendedSignalsInvokedTest,_tip_CopilotHardwareKeyExtendedSignalsInvokedTest>>(&v13);
      if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_55994114>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_55994114>::GetImpl'::`2'::impl)
        && v7 )
      {
        *(_BYTE *)(*tip2::tip_test<tip2::details::merged_data<_tip_CopilotHardwareKeyExtendedSignalsInvokedTest,_tip_CopilotHardwareKeyExtendedSignalsInvokedTest>>::operator->(
                      (__int64)this + 432,
                      (__int64 *)&v13)
                 + 324) = 1;
        tip2::test_data_control<tip2::details::merged_data<_tip_CopilotHardwareKeyExtendedSignalsInvokedTest,_tip_CopilotHardwareKeyExtendedSignalsInvokedTest>>::~test_data_control<tip2::details::merged_data<_tip_CopilotHardwareKeyExtendedSignalsInvokedTest,_tip_CopilotHardwareKeyExtendedSignalsInvokedTest>>(&v13);
      }
    }
    else
    {
      wil::details::in1diag3::_Log_GetLastError(
        retaddr,
        (void *)0x517,
        (unsigned int)"pcshell\\twinui\\copilothotkeymanager\\lib\\copilothotkeymanager.cpp",
        v11);
    }
  }
  else
  {
    v9 = 0;
  }
  std::wstring::_Tidy_deallocate((__int64)lParam);
  return v9;
}
