/*
 * XREFs of ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x180044594
 * Callers:
 *     ?DeleteSetting@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG0@Z @ 0x1800319B8 (-DeleteSetting@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG0@Z.c)
 *     ?DoesKeyExist@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBGPEA_N@Z @ 0x180031DE4 (-DoesKeyExist@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBGPEA_N@Z.c)
 *     ?IsCallerInAllowedAppList@LockScreenCategoryConfig@CreativeFramework@@YAJPEBQEBGH@Z @ 0x18003A55C (-IsCallerInAllowedAppList@LockScreenCategoryConfig@CreativeFramework@@YAJPEBQEBGH@Z.c)
 *     ?UnregisterPhoneNamespace@PhoneShellNamespaceHelper@ContentManagement@@UEAAJPEAUHSTRING__@@@Z @ 0x180046B10 (-UnregisterPhoneNamespace@PhoneShellNamespaceHelper@ContentManagement@@UEAAJPEAUHSTRING__@@@Z.c)
 *     ?AddCreativeEventToEventStore@CreativeEventStore@CreativeFramework@@YAJPEBG0I0@Z @ 0x180059D74 (-AddCreativeEventToEventStore@CreativeEventStore@CreativeFramework@@YAJPEBG0I0@Z.c)
 *     ?DoesSettingExist@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG0PEA_N@Z @ 0x18005A65C (-DoesSettingExist@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG0PEA_N@Z.c)
 *     ?GetFileTimeSetting@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG0_NPEAU_FILETIME@@@Z @ 0x18005DBC0 (-GetFileTimeSetting@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG0_NPEAU_FILETIME@@@.c)
 *     ?GetSettingValue@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEAUHKEY__@@PEBG1_NPEAKK@Z @ 0x18005F34C (-GetSettingValue@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEAUHKEY__@@PEBG1_NPEAKK@Z.c)
 *     ?OpenAndValidateConnection@ContentManagement@@YAJPEAPEAUIAppServiceConnection@AppService@ApplicationModel@Windows@@@Z @ 0x180060BA4 (-OpenAndValidateConnection@ContentManagement@@YAJPEAPEAUIAppServiceConnection@AppService@Applica.c)
 *     ?SendMessageToAppServiceConnection@ContentManagement@@YAJPEAUIAppServiceConnection@AppService@ApplicationModel@Windows@@PEAUIPropertySet@Collections@Foundation@5@@Z @ 0x180064298 (-SendMessageToAppServiceConnection@ContentManagement@@YAJPEAUIAppServiceConnection@AppService@Ap.c)
 *     ?SetEventReported@CreativeEventReportedCache@ContentManagement@@UEAAJPEAUHSTRING__@@W4CreativeEventType@2@0@Z @ 0x180064580 (-SetEventReported@CreativeEventReportedCache@ContentManagement@@UEAAJPEAUHSTRING__@@W4CreativeEv.c)
 *     ?OnContentUpdated@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@AEAAXXZ @ 0x180070E64 (-OnContentUpdated@SubscriptionManagerImpl@Internal@TargetedContent@ContentManagement@@AEAAXXZ.c)
 * Callees:
 *     ??$ReportFailure_HrMsg@$00@details@wil@@YAXPEAXIPEBD110J1PEAD@Z @ 0x180025000 (--$ReportFailure_HrMsg@$00@details@wil@@YAXPEAXIPEBD110J1PEAD@Z.c)
 */

void wil::details::in1diag3::Return_HrMsg(
        wil::details::in1diag3 *this,
        void *a2,
        int a3,
        const char *a4,
        int a5,
        const char *a6,
        ...)
{
  int v6; // [rsp+20h] [rbp-38h]
  wil::details *v7; // [rsp+30h] [rbp-28h]
  __int64 retaddr; // [rsp+58h] [rbp+0h]

  LODWORD(v7) = (_DWORD)a4;
  wil::details::ReportFailure_HrMsg<1>((int)this, (int)a2, a3, (__int64)a4, v6, retaddr, v7);
}
