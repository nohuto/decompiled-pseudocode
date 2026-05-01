/*
 * XREFs of ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1800CA828
 * Callers:
 *     ?Acquire@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x1800C9E98 (-Acquire@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDP.c)
 *     ?CreateShellSessionKey@@YAJKPEAPEAUHKEY__@@@Z @ 0x1800CA514 (-CreateShellSessionKey@@YAJKPEAPEAUHKEY__@@@Z.c)
 *     ?ShouldCreateComponent@CImmersiveShellCreationBehavior@@UEAAJIPEAHPEAU_GUID@@@Z @ 0x1800CA6D0 (-ShouldCreateComponent@CImmersiveShellCreationBehavior@@UEAAJIPEAHPEAU_GUID@@@Z.c)
 *     ?Acquire@?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x1800CAAB4 (-Acquire@-$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@SAJPEBDP.c)
 *     ?GetDesktopUniqueName@@YAXPEB_WPEA_WK@Z @ 0x18014B64C (-GetDesktopUniqueName@@YAXPEB_WPEA_WK@Z.c)
 *     ?MaybeGetExceptionString@details@wil@@YAXPE$AAVException@Platform@@PEA_W_K@Z @ 0x18014B738 (-MaybeGetExceptionString@details@wil@@YAXPE$AAVException@Platform@@PEA_W_K@Z.c)
 *     ?LaunchUriWithCv@ProtocolLauncher@Utils@@QEAAXPEBG_JAEBVCorrelationVector@@@Z @ 0x1801D3374 (-LaunchUriWithCv@ProtocolLauncher@Utils@@QEAAXPEBG_JAEBVCorrelationVector@@@Z.c)
 *     ?MaybeGetExceptionString@details@wil@@YAXAEBUhresult_error@winrt@@PEAG_K@Z @ 0x18022BE2A (-MaybeGetExceptionString@details@wil@@YAXAEBUhresult_error@winrt@@PEAG_K@Z.c)
 *     ?MaybeGetExceptionString@details@wil@@YAXAEBVexception@std@@PEAG_K@Z @ 0x1802D7A68 (-MaybeGetExceptionString@details@wil@@YAXAEBVexception@std@@PEAG_K@Z.c)
 *     ?PrintLoggingMessage@details@wil@@YAXPEAG_KPEBDPEAD@Z @ 0x1802DB894 (-PrintLoggingMessage@details@wil@@YAXPEAG_KPEBDPEAD@Z.c)
 *     ?GetFlightedValue@CortanaFeatureConfiguration@@YAJPEBGAEAUFeatureValue@1@AEAE@Z @ 0x18036EFD8 (-GetFlightedValue@CortanaFeatureConfiguration@@YAJPEBGAEAUFeatureValue@1@AEAE@Z.c)
 *     ?IsClassAvailable@ComponentCreator@@SA_NAEBUImmersiveComponentInfo@@@Z @ 0x1803B0860 (-IsClassAvailable@ComponentCreator@@SA_NAEBUImmersiveComponentInfo@@@Z.c)
 *     ?GetCurrentUserSidString@LockScreenCreativeConfigHelpers@CreativeFramework@@YAJPEAPEAG@Z @ 0x180545914 (-GetCurrentUserSidString@LockScreenCreativeConfigHelpers@CreativeFramework@@YAJPEAPEAG@Z.c)
 *     ?PercentEncodeAndToLower@AppLimits@FamilySafety@Internal@Windows@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@PEBG@Z @ 0x18056A49C (-PercentEncodeAndToLower@AppLimits@FamilySafety@Internal@Windows@@YA-AV-$unique_any_t@V-$unique_.c)
 *     ?GetFirstApplicationViewTitleProperty@@YAJPEAUHWND__@@_KPEAGPEA_K@Z @ 0x1805E9460 (-GetFirstApplicationViewTitleProperty@@YAJPEAUHWND__@@_KPEAGPEA_K@Z.c)
 * Callees:
 *     _vsnwprintf @ 0x180188F78 (_vsnwprintf.c)
 */

__int64 StringCchPrintfW(unsigned __int16 *a1, __int64 a2, const unsigned __int16 *a3, ...)
{
  unsigned __int64 v4; // rsi
  unsigned int v5; // edi
  int v6; // eax
  va_list Args; // [rsp+68h] [rbp+20h] BYREF

  va_start(Args, a3);
  if ( (unsigned __int64)(a2 - 1) <= 0x7FFFFFFE )
  {
    v4 = a2 - 1;
    v5 = 0;
    v6 = vsnwprintf(a1, a2 - 1, a3, Args);
    if ( v6 < 0 || v6 > v4 )
    {
      v5 = -2147024774;
    }
    else if ( v6 != v4 )
    {
      return v5;
    }
    a1[v4] = 0;
    return v5;
  }
  v5 = -2147024809;
  if ( a2 )
    *a1 = 0;
  return v5;
}
