/*
 * XREFs of ?get_IsInSnapUIArrangement@?$produce@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UITopLevelWindow3DWrapper@345@@impl@winrt@@UEAAHPEA_N@Z @ 0x1800FB830
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::produce<winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper,winrt::Udwm::Transitions::ITopLevelWindow3DWrapper>::get_IsInSnapUIArrangement(
        __int64 a1,
        _BYTE *a2)
{
  __int64 v2; // rax

  v2 = a1 + 24;
  if ( !a1 )
    v2 = 32LL;
  *a2 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)v2 + 336LL) + 678LL) & 1;
  return 0LL;
}
