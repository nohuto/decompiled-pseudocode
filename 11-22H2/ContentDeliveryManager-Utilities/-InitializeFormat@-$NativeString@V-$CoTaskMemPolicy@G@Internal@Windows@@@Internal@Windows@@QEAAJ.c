/*
 * XREFs of ?InitializeFormat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBGZZ @ 0x1800379DC
 * Callers:
 *     ?CreatePhoneLink@PhoneShellNamespaceHelper@ContentManagement@@AEAAJPEBG0PEAPEAG@Z @ 0x180030980 (-CreatePhoneLink@PhoneShellNamespaceHelper@ContentManagement@@AEAAJPEBG0PEAPEAG@Z.c)
 *     ?NotifyShell@PhoneShellNamespaceHelper@ContentManagement@@AEAAJJPEBG@Z @ 0x180039564 (-NotifyShell@PhoneShellNamespaceHelper@ContentManagement@@AEAAJJPEBG@Z.c)
 *     ?RegisterPhoneNamespace@PhoneShellNamespaceHelper@ContentManagement@@UEAAJPEAUHSTRING__@@00@Z @ 0x18003BFD0 (-RegisterPhoneNamespace@PhoneShellNamespaceHelper@ContentManagement@@UEAAJPEAUHSTRING__@@00@Z.c)
 *     ?RemovePhoneLink@PhoneShellNamespaceHelper@ContentManagement@@AEAAJPEBG@Z @ 0x18003E040 (-RemovePhoneLink@PhoneShellNamespaceHelper@ContentManagement@@AEAAJPEBG@Z.c)
 *     ?UnregisterPhoneNamespace@PhoneShellNamespaceHelper@ContentManagement@@UEAAJPEAUHSTRING__@@@Z @ 0x180041C00 (-UnregisterPhoneNamespace@PhoneShellNamespaceHelper@ContentManagement@@UEAAJPEAUHSTRING__@@@Z.c)
 *     ?AddCreativeEventToEventStore@CreativeEventStore@CreativeFramework@@YAJPEBG0I0@Z @ 0x180054AC4 (-AddCreativeEventToEventStore@CreativeEventStore@CreativeFramework@@YAJPEBG0I0@Z.c)
 *     ?GetCreativeEventCacheRegPath@CreativeEventReportedCache@ContentManagement@@CAJPEBGPEAPEAG@Z @ 0x1800575A4 (-GetCreativeEventCacheRegPath@CreativeEventReportedCache@ContentManagement@@CAJPEBGPEAPEAG@Z.c)
 *     ?GetCreativeEventString@ContentManagement@@YAJPEAUHSTRING__@@W4CreativeEventType@1@0PEAPEAG@Z @ 0x18005763C (-GetCreativeEventString@ContentManagement@@YAJPEAUHSTRING__@@W4CreativeEventType@1@0PEAPEAG@Z.c)
 *     ?GetLockScreenEnabled@LockScreenCreativeConfigHelpers@CreativeFramework@@YAJPEBGPEA_N1@Z @ 0x180058E18 (-GetLockScreenEnabled@LockScreenCreativeConfigHelpers@CreativeFramework@@YAJPEBGPEA_N1@Z.c)
 *     ?GetLockScreenRegistryKeyRoot@LockScreenCreativeConfigHelpers@CreativeFramework@@YAJPEBGPEAPEAUHKEY__@@@Z @ 0x1800591A8 (-GetLockScreenRegistryKeyRoot@LockScreenCreativeConfigHelpers@CreativeFramework@@YAJPEBGPEAPEAUH.c)
 *     ?GetUniqueTimestamp@CreativeEventStore@CreativeFramework@@YAJPEBGPEAPEAG@Z @ 0x180059954 (-GetUniqueTimestamp@CreativeEventStore@CreativeFramework@@YAJPEBGPEAPEAG@Z.c)
 *     ?PeekLockScreenRegistryKeys@LockScreenCreativeConfigHelpers@CreativeFramework@@YAJPEBGPEAPEAG11PEA_N@Z @ 0x18005B3C4 (-PeekLockScreenRegistryKeys@LockScreenCreativeConfigHelpers@CreativeFramework@@YAJPEBGPEAPEAG11P.c)
 *     ?GetSubscriptionRegPath@Details@SubscribedContentStore@CreativeFramework@@YAXPEBGPEAPEAG@Z @ 0x180069148 (-GetSubscriptionRegPath@Details@SubscribedContentStore@CreativeFramework@@YAXPEBGPEAPEAG@Z.c)
 * Callees:
 *     ??$_InitializeHelper@V_lambda_fe718337787c493ce2d833414db25eba_@@@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBGPEADAEBV_lambda_fe718337787c493ce2d833414db25eba_@@@Z @ 0x180029804 (--$_InitializeHelper@V_lambda_fe718337787c493ce2d833414db25eba_@@@-$NativeString@V-$CoTaskMemPol.c)
 */

__int64 Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::InitializeFormat(
        __int64 a1,
        const unsigned __int16 *a2,
        ...)
{
  va_list va; // [rsp+40h] [rbp+18h] BYREF

  va_start(va, a2);
  return Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_InitializeHelper<_lambda_fe718337787c493ce2d833414db25eba_>(
           a1,
           a2,
           va);
}
