/*
 * XREFs of ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x140014E00
 * Callers:
 *     ?ActivateAPO@CAudioProcessor@@UEAAJ_KPEAUIAudioProcessingObject@@1W4APO_ACTIVATE_ORDER@@@Z @ 0x14000F760 (-ActivateAPO@CAudioProcessor@@UEAAJ_KPEAUIAudioProcessingObject@@1W4APO_ACTIVATE_ORDER@@@Z.c)
 *     ?GetApoRegKeyPath@@YAJPEAGIPEBG@Z @ 0x140014D9C (-GetApoRegKeyPath@@YAJPEAGIPEBG@Z.c)
 *     ?GetObjectCacheForEndpoint@CDeviceGraphObjectCacheManager@@UEAAJPEBGPEAUOBJECTCACHE_INITIALIZATION_PARAMS@@PEAPEAUIDeviceGraphObjectCache@@@Z @ 0x140017A70 (-GetObjectCacheForEndpoint@CDeviceGraphObjectCacheManager@@UEAAJPEBGPEAUOBJECTCACHE_INITIALIZATI.c)
 *     ?CreateSecurityDescriptor@@YAJPEBGKPEAPEAX@Z @ 0x14001AAB0 (-CreateSecurityDescriptor@@YAJPEBGKPEAPEAX@Z.c)
 *     ?Initialize@HandleSendReceiveServer@@QEAAJPEAPEAG@Z @ 0x14002310C (-Initialize@HandleSendReceiveServer@@QEAAJPEAPEAG@Z.c)
 *     ?GetEffectPackFxPropertyStore@@YAJPEAUHKEY__@@U_GUID@@PEAPEAUIPropertyStore@@@Z @ 0x14002E7C8 (-GetEffectPackFxPropertyStore@@YAJPEAUHKEY__@@U_GUID@@PEAPEAUIPropertyStore@@@Z.c)
 *     ?GetEffectPackRegistryPath@@YAJU_GUID@@_KPEAG@Z @ 0x14002EA5C (-GetEffectPackRegistryPath@@YAJU_GUID@@_KPEAG@Z.c)
 *     ?Acquire@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x14004B76C (-Acquire@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDP.c)
 *     ?MaybeGetExceptionString@details@wil@@YAXAEBVexception@std@@PEAG_K@Z @ 0x14004D268 (-MaybeGetExceptionString@details@wil@@YAXAEBVexception@std@@PEAG_K@Z.c)
 *     ?PrintLoggingMessage@details@wil@@YAXPEAG_KPEBDPEAD@Z @ 0x14005CD50 (-PrintLoggingMessage@details@wil@@YAXPEAG_KPEBDPEAD@Z.c)
 *     ?GetModuleVersion@@YAXPEBGPEAPEAG@Z @ 0x140065A98 (-GetModuleVersion@@YAXPEBGPEAPEAG@Z.c)
 *     ?Acquire@?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x140081E18 (-Acquire@-$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@SAJPEBDP.c)
 * Callees:
 *     StringVPrintfWorkerW @ 0x140014E3C (StringVPrintfWorkerW.c)
 */

HRESULT StringCchPrintfW(unsigned __int16 *a1, size_t a2, size_t *a3, ...)
{
  HRESULT result; // eax
  va_list va; // [rsp+58h] [rbp+20h] BYREF

  va_start(va, a3);
  if ( a2 - 1 <= 0x7FFFFFFE )
    return StringVPrintfWorkerW(a1, a2, a3, (STRSAFE_LPCWSTR)a3, va);
  result = -2147024809;
  if ( a2 )
    *a1 = 0;
  return result;
}
