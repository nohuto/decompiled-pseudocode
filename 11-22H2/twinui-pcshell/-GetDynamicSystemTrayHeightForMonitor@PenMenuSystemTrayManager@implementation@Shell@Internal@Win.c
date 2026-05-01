/*
 * XREFs of ?GetDynamicSystemTrayHeightForMonitor@PenMenuSystemTrayManager@implementation@Shell@Internal@Windows@winrt@@UEAAJPEAUHMONITOR__@@PEAM@Z @ 0x18048EBC0
 * Callers:
 *     <none>
 * Callees:
 *     ?DynamicSafeWorkArea@?$consume_WindowsUdk_UI_Shell_IDisplayMonitorInfo@UIDisplayMonitorInfo@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x18001A360 (-DynamicSafeWorkArea@-$consume_WindowsUdk_UI_Shell_IDisplayMonitorInfo@UIDisplayMonitorInfo@Shel.c)
 *     ?GetDisplayMonitorInfoForMonitor@?$consume_WindowsUdk_UI_Shell_IDisplayMonitorInfoCollection@UIDisplayMonitorInfoCollection@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@_K@Z @ 0x18001A3A8 (-GetDisplayMonitorInfoForMonitor@-$consume_WindowsUdk_UI_Shell_IDisplayMonitorInfoCollection@UID.c)
 *     ?DisplayArea@?$consume_WindowsUdk_UI_Shell_IDisplayMonitorInfo@UIDisplayMonitorInfo@Shell@UI@WindowsUdk@winrt@@@impl@winrt@@QEBA@XZ @ 0x18006F618 (-DisplayArea@-$consume_WindowsUdk_UI_Shell_IDisplayMonitorInfo@UIDisplayMonitorInfo@Shell@UI@Win.c)
 *     ?unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ @ 0x1800D5AF0 (-unconditional_release_ref@IUnknown@Foundation@Windows@winrt@@AEAAXXZ.c)
 *     ??B?$com_ptr_t@UIApplicationViewCollection@@Uerr_exception_policy@wil@@@wil@@QEBA_NXZ @ 0x1800D5B58 (--B-$com_ptr_t@UIApplicationViewCollection@@Uerr_exception_policy@wil@@@wil@@QEBA_NXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_51575997@@@details@wil@@QEAA_NXZ @ 0x1801F2690 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_51575997@@@details@wil@@QEAA_NXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::Windows::Internal::Shell::implementation::PenMenuSystemTrayManager::GetDynamicSystemTrayHeightForMonitor(
        winrt::Windows::Internal::Shell::implementation::PenMenuSystemTrayManager *this,
        __int64 a2,
        float *a3)
{
  __int64 *v4; // rcx
  const char *v5; // r9
  float v6; // xmm0_4
  float v7; // xmm1_4
  float v8; // xmm1_4
  float *v9; // rdi
  float *v10; // rsi
  __int64 result; // rax
  __int128 v12; // [rsp+20h] [rbp-38h] BYREF
  __int128 v13; // [rsp+30h] [rbp-28h] BYREF
  __int128 v14; // [rsp+40h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v16; // [rsp+60h] [rbp+8h] BYREF

  v4 = (__int64 *)((char *)this + 144);
  try
  {
    winrt::impl::consume_WindowsUdk_UI_Shell_IDisplayMonitorInfoCollection<winrt::WindowsUdk::UI::Shell::IDisplayMonitorInfoCollection>::GetDisplayMonitorInfoForMonitor(
      v4,
      &v16,
      a2);
    if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_51575997>::__private_IsEnabled(`wil::Feature<__WilFeatureTraits_Feature_51575997>::GetImpl'::`2'::impl) )
    {
      if ( !wil::com_ptr_t<IApplicationViewCollection,wil::err_exception_policy>::operator bool(&v16) )
      {
        v8 = 0.0;
LABEL_8:
        *a3 = v8;
        if ( v16 )
          winrt::Windows::Foundation::IUnknown::unconditional_release_ref((winrt::Windows::Foundation::IUnknown *)&v16);
        return 0LL;
      }
      winrt::impl::consume_WindowsUdk_UI_Shell_IDisplayMonitorInfo<winrt::WindowsUdk::UI::Shell::IDisplayMonitorInfo>::DisplayArea(
        &v16,
        &v13);
      winrt::impl::consume_WindowsUdk_UI_Shell_IDisplayMonitorInfo<winrt::WindowsUdk::UI::Shell::IDisplayMonitorInfo>::DynamicSafeWorkArea(
        &v16,
        &v12);
      v6 = *((float *)&v12 + 3) + *((float *)&v12 + 1);
      v7 = *((float *)&v13 + 3);
    }
    else
    {
      v9 = (float *)winrt::impl::consume_WindowsUdk_UI_Shell_IDisplayMonitorInfo<winrt::WindowsUdk::UI::Shell::IDisplayMonitorInfo>::DisplayArea(
                      &v16,
                      &v13);
      v10 = (float *)winrt::impl::consume_WindowsUdk_UI_Shell_IDisplayMonitorInfo<winrt::WindowsUdk::UI::Shell::IDisplayMonitorInfo>::DynamicSafeWorkArea(
                       &v16,
                       &v12);
      v6 = *((float *)winrt::impl::consume_WindowsUdk_UI_Shell_IDisplayMonitorInfo<winrt::WindowsUdk::UI::Shell::IDisplayMonitorInfo>::DynamicSafeWorkArea(
                        &v16,
                        &v14)
           + 3)
         + v10[1];
      v7 = v9[3];
    }
    v8 = v7 - v6;
    goto LABEL_8;
  }
  catch ( ... )
  {
    LODWORD(v16) = wil::details::in1diag3::Return_CaughtException(
                     retaddr,
                     (void *)0x87,
                     (int)"pcshell\\twinui\\penworkspace\\broker\\lib\\penmenusystemtraymanager.cpp",
                     v5);
    return (unsigned int)v16;
  }
  return result;
}
