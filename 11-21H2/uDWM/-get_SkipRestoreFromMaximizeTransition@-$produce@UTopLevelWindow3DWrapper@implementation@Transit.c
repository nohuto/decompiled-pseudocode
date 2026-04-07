/*
 * XREFs of ?get_SkipRestoreFromMaximizeTransition@?$produce@UTopLevelWindow3DWrapper@implementation@Transitions@Udwm@winrt@@UITopLevelWindow3DWrapper@345@@impl@winrt@@UEAAHPEA_N@Z @ 0x1800F88A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall winrt::impl::produce<winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper,winrt::Udwm::Transitions::ITopLevelWindow3DWrapper>::get_SkipRestoreFromMaximizeTransition(
        __int64 a1,
        bool *a2)
{
  __int64 v2; // rax
  bool v3; // r8
  __int64 v4; // rcx

  v2 = a1 + 24;
  v3 = 0;
  if ( !a1 )
    v2 = 32LL;
  v4 = *(_QWORD *)(*(_QWORD *)v2 + 336LL);
  if ( v4 )
    v3 = (*(_BYTE *)(v4 + 670) & 4) != 0;
  *a2 = v3;
  return 0LL;
}
