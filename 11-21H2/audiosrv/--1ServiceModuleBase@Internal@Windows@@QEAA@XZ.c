/*
 * XREFs of ??1ServiceModuleBase@Internal@Windows@@QEAA@XZ @ 0x1800C2C04
 * Callers:
 *     ??_EServiceModule@Internal@Windows@@UEAAPEAXI@Z @ 0x1800C2FF4 (--_EServiceModule@Internal@Windows@@UEAAPEAXI@Z.c)
 *     ??_ESvcHostModule@Internal@Windows@@UEAAPEAXI@Z @ 0x1800C303C (--_ESvcHostModule@Internal@Windows@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ @ 0x180002C58 (-InternalRelease@-$ComPtr@UIStreamGroupProxy@@@WRL@Microsoft@@IEAAKXZ.c)
 */

void __fastcall Windows::Internal::ServiceModuleBase::~ServiceModuleBase(Windows::Internal::ServiceModuleBase *this)
{
  *(_QWORD *)this = &Windows::Internal::ServiceModuleBase::`vftable';
  Microsoft::WRL::ComPtr<IStreamGroupProxy>::InternalRelease((__int64 *)this + 3);
  wil::details::unique_storage<wil::details::resource_policy<CO_MTA_USAGE_COOKIE__ *,long (*)(CO_MTA_USAGE_COOKIE__ *),&long CoDecrementMTAUsage(CO_MTA_USAGE_COOKIE__ *),wistd::integral_constant<unsigned __int64,0>,CO_MTA_USAGE_COOKIE__ *,CO_MTA_USAGE_COOKIE__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<CO_MTA_USAGE_COOKIE__ *,long (*)(CO_MTA_USAGE_COOKIE__ *),&long CoDecrementMTAUsage(CO_MTA_USAGE_COOKIE__ *),wistd::integral_constant<unsigned __int64,0>,CO_MTA_USAGE_COOKIE__ *,CO_MTA_USAGE_COOKIE__ *,0,std::nullptr_t>>((__int64 *)this + 1);
}
