/*
 * XREFs of ?WnfCapabilitiesChangeCallback@CWnfSubscriber@Composition@UI@Windows@@CAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x18011B9F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x1800405F0 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?OnChanged@CompositionCapabilitiesRegistration@Composition@UI@Windows@@SAXXZ @ 0x180160F4C (-OnChanged@CompositionCapabilitiesRegistration@Composition@UI@Windows@@SAXXZ.c)
 */

__int64 __fastcall Windows::UI::Composition::CWnfSubscriber::WnfCapabilitiesChangeCallback(
        struct _WNF_STATE_NAME a1,
        __int64 a2,
        struct _WNF_TYPE_ID *a3,
        void *a4)
{
  struct _RTL_CRITICAL_SECTION *v5; // [rsp+20h] [rbp-18h] BYREF

  v5 = &Windows::UI::Composition::CompositionCapabilities::s_capabilitiesLock;
  EnterCriticalSection(&Windows::UI::Composition::CompositionCapabilities::s_capabilitiesLock);
  Windows::UI::Composition::CompositionCapabilitiesRegistration::OnChanged();
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v5);
  return 0LL;
}
