/*
 * XREFs of ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x140014AC8
 * Callers:
 *     ?CreateSecurityDescriptor@@YAJPEBGKPEAPEAX@Z @ 0x140002220 (-CreateSecurityDescriptor@@YAJPEBGKPEAPEAX@Z.c)
 *     ?GetObjectCacheForEndpoint@CDeviceGraphObjectCacheManager@@UEAAJPEBGPEAUOBJECTCACHE_INITIALIZATION_PARAMS@@PEAPEAUIDeviceGraphObjectCache@@@Z @ 0x140006FC0 (-GetObjectCacheForEndpoint@CDeviceGraphObjectCacheManager@@UEAAJPEBGPEAUOBJECTCACHE_INITIALIZATI.c)
 *     ?ActivateAPO@CAudioProcessor@@UEAAJ_KPEAUIAudioProcessingObject@@1W4APO_ACTIVATE_ORDER@@@Z @ 0x14000CFA0 (-ActivateAPO@CAudioProcessor@@UEAAJ_KPEAUIAudioProcessingObject@@1W4APO_ACTIVATE_ORDER@@@Z.c)
 *     ?CreateAPOProcessNode@CAPOProcessNode@@SAJPEAU_GUID@@PEAUIPropertyStore@@W4AUDIO_DIRECTION@@HW4APO_TYPE@@U2@PEAPEAV1@@Z @ 0x140013CA0 (-CreateAPOProcessNode@CAPOProcessNode@@SAJPEAU_GUID@@PEAUIPropertyStore@@W4AUDIO_DIRECTION@@HW4A.c)
 *     ?Acquire@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x140023C14 (-Acquire@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDP.c)
 *     ?GetModuleVersion@@YAXPEBGPEAPEAG@Z @ 0x140026CD4 (-GetModuleVersion@@YAXPEBGPEAPEAG@Z.c)
 *     ?Initialize@HandleSendReceiveServer@@QEAAJPEAPEAG@Z @ 0x140028714 (-Initialize@HandleSendReceiveServer@@QEAAJPEAPEAG@Z.c)
 *     ?MaybeGetExceptionString@details@wil@@YAXAEBVexception@std@@PEAG_K@Z @ 0x14004E298 (-MaybeGetExceptionString@details@wil@@YAXAEBVexception@std@@PEAG_K@Z.c)
 *     ?PrintLoggingMessage@details@wil@@YAXPEAG_KPEBDPEAD@Z @ 0x14005A120 (-PrintLoggingMessage@details@wil@@YAXPEAG_KPEBDPEAD@Z.c)
 *     ?GetApoRegKeyPath@@YAJPEAGIPEBG@Z @ 0x14006E060 (-GetApoRegKeyPath@@YAJPEAGIPEBG@Z.c)
 *     ?Acquire@?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x140074C98 (-Acquire@-$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@SAJPEBDP.c)
 * Callees:
 *     _vsnwprintf @ 0x1400309CC (_vsnwprintf.c)
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
