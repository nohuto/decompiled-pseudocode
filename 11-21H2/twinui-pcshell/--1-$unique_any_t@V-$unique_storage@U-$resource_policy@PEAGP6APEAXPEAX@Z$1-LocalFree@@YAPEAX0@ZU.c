/*
 * XREFs of ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6APEAXPEAX@Z$1?LocalFree@@YAPEAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18044A534
 * Callers:
 *     _StartDocked::PreCreateVolatileRegkey_::_1_::dtor$0 @ 0x180217614 (_StartDocked--PreCreateVolatileRegkey_--_1_--dtor$0.c)
 *     _CapabilityHelper::CreateSecurityAttributesForUWPCapability_::_1_::dtor$0 @ 0x18021D6F7 (_CapabilityHelper--CreateSecurityAttributesForUWPCapability_--_1_--dtor$0.c)
 *     _KioskPositioner::LoadAssignedAccessConfiguration_::_1_::dtor$0 @ 0x18021D751 (_KioskPositioner--LoadAssignedAccessConfiguration_--_1_--dtor$0.c)
 *     _CapabilityHelper::CreateSecurityAttributesForUWPCapability_::_1_::dtor$8 @ 0x18021D763 (_CapabilityHelper--CreateSecurityAttributesForUWPCapability_--_1_--dtor$8.c)
 *     _KioskPositioner::GetUserSidString_::_1_::dtor$1 @ 0x180221F49 (_KioskPositioner--GetUserSidString_--_1_--dtor$1.c)
 *     _wil::make_unique_string_wil::unique_any_t_wil::details::unique_storage_wil::details::resource_policy_unsigned_short___void___(__cdecl_)(void__)_&LocalFree_wistd::integral_constant_unsigned___int64_0__unsigned_short___unsigned_short___0_std::nullptr_t________::_1_::dtor$0 @ 0x18056AD6A (_wil--make_unique_string_wil--unique_any_t_wil--details--unique_storage_wil--detail_ea_18056AD6A.c)
 *     _TryGetCertSubjectName_::_1_::dtor$4 @ 0x18056B4CE (_TryGetCertSubjectName_--_1_--dtor$4.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
HLOCAL __fastcall wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>(
        void **a1)
{
  return wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<unsigned short *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>(a1);
}
