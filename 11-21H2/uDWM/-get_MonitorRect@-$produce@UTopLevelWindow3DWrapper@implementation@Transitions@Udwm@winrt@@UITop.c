/*
 * XREFs of ?get_MonitorRect@?$produce@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UITopLevelWindow3DWrapper@345@@impl@winrt@@UEAAHPEAURect@Foundation@Windows@3@@Z @ 0x180013020
 * Callers:
 *     <none>
 * Callees:
 *     ?MonitorRect@TopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@QEAA?AURect@Foundation@Windows@5@XZ @ 0x180013060 (-MonitorRect@TopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@QEAA-AURect@Foundati.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper,winrt::Udwm::Transitions::ITopLevelWindow3DWrapper>::get_MonitorRect(
        __int64 a1,
        __m128i *a2)
{
  _BYTE v3[24]; // [rsp+20h] [rbp-18h] BYREF

  *a2 = _mm_loadu_si128((const __m128i *)winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper::MonitorRect(
                                           (a1 - 8) & -(__int64)(a1 != 0),
                                           v3));
  return 0LL;
}
