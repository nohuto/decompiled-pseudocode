/*
 * XREFs of ?Return_Win32Msg@in1diag3@details@wil@@YAJPEAXIPEBDK1ZZ @ 0x18003F2D0
 * Callers:
 *     ?CreateKey@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG@Z @ 0x1800308E8 (-CreateKey@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG@Z.c)
 *     ?GetStringSetting@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG0_NPEAPEAG@Z @ 0x180036914 (-GetStringSetting@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG0_NPEAPEAG@Z.c)
 *     ?RegisterPhoneNamespace@PhoneShellNamespaceHelper@ContentManagement@@UEAAJPEAUHSTRING__@@00@Z @ 0x18003BFD0 (-RegisterPhoneNamespace@PhoneShellNamespaceHelper@ContentManagement@@UEAAJPEAUHSTRING__@@00@Z.c)
 *     ?SetStringSetting@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG00I@Z @ 0x18004064C (-SetStringSetting@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG00I@Z.c)
 *     ??$SetSettingValue@_K$0L@@Details@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG0_K@Z @ 0x18004EBD8 (--$SetSettingValue@_K$0L@@Details@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEBG0_K@Z.c)
 *     ?AddCreativeEventToEventStore@CreativeEventStore@CreativeFramework@@YAJPEBG0I0@Z @ 0x180054AC4 (-AddCreativeEventToEventStore@CreativeEventStore@CreativeFramework@@YAJPEBG0I0@Z.c)
 *     ?SetMobilityString@MobilityExperienceSettings@CreativeFramework@@YAJPEB_W00@Z @ 0x1800C1A7C (-SetMobilityString@MobilityExperienceSettings@CreativeFramework@@YAJPEB_W00@Z.c)
 *     ?TryGetMobilityString@MobilityExperienceSettings@CreativeFramework@@YAJPEB_W0PEAPEA_W@Z @ 0x1800C1BA8 (-TryGetMobilityString@MobilityExperienceSettings@CreativeFramework@@YAJPEB_W0PEAPEA_W@Z.c)
 *     ?GetStringSetting@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEB_W0_NPEAPEA_W@Z @ 0x1800C965C (-GetStringSetting@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEB_W0_NPEAPEA_W@Z.c)
 *     ?SetStringSetting@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEB_W00@Z @ 0x1800CC1C4 (-SetStringSetting@ContentDeliveryManagerSettings@CreativeFramework@@YAJPEB_W00@Z.c)
 * Callees:
 *     ??$ReportFailure_Win32Msg@$00@details@wil@@YAJPEAXIPEBD110K1PEAD@Z @ 0x180028A0C (--$ReportFailure_Win32Msg@$00@details@wil@@YAJPEAXIPEBD110K1PEAD@Z.c)
 */

__int64 wil::details::in1diag3::Return_Win32Msg(
        wil::details::in1diag3 *this,
        void *a2,
        __int64 a3,
        const char *a4,
        unsigned __int64 a5,
        const char *a6,
        ...)
{
  int v7; // [rsp+20h] [rbp-38h]
  wil::details *v8; // [rsp+30h] [rbp-28h]
  __int64 retaddr; // [rsp+58h] [rbp+0h]

  LODWORD(v8) = (_DWORD)a4;
  return wil::details::ReportFailure_Win32Msg<1>(
           (__int64)this,
           (int)a2,
           a3,
           (__int64)a4,
           v7,
           retaddr,
           v8,
           a5,
           (char *)&a6);
}
