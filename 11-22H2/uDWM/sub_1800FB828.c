/*
 * XREFs of sub_1800FB828 @ 0x1800FB828
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800FB828()
{
  char v0; // of
  __int64 v1; // rax

  if ( !v0 )
    JUMPOUT(0x1800FB834LL);
  *(int *)(v1 + 2) >>= 1;
  return winrt::impl::produce<winrt::Udwm::Transitions::implementation::TopLevelWindow3DWrapper,winrt::Udwm::Transitions::ITopLevelWindow3DWrapper>::get_IsInSnapUIArrangement();
}
