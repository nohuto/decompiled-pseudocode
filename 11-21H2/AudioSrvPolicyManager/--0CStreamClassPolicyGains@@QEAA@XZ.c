/*
 * XREFs of ??0CStreamClassPolicyGains@@QEAA@XZ @ 0x1800297A8
 * Callers:
 *     ?GetStreamClassPolicyGainsForEndpoint@CStreamClassPolicyGainsWrapper@@AEAAXPEBGPEAPEAVCStreamClassPolicyGains@@@Z @ 0x180029C38 (-GetStreamClassPolicyGainsForEndpoint@CStreamClassPolicyGainsWrapper@@AEAAXPEBGPEAPEAVCStreamCla.c)
 *     ??0TSSession@@AEAA@XZ @ 0x18002AF1C (--0TSSession@@AEAA@XZ.c)
 * Callees:
 *     ??_L@YAXPEAX_K1P6AX0@Z2@Z @ 0x180002B3C (--_L@YAXPEAX_K1P6AX0@Z2@Z.c)
 */

CStreamClassPolicyGains *__fastcall CStreamClassPolicyGains::CStreamClassPolicyGains(CStreamClassPolicyGains *this)
{
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)this, 0, 0);
  `eh vector constructor iterator'(
    (char *)this + 40,
    8LL,
    24LL,
    (void (*)(void *))wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>);
  `eh vector constructor iterator'(
    (char *)this + 232,
    8LL,
    24LL,
    (void (*)(void *))wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>);
  return this;
}
