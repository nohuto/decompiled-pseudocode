/*
 * XREFs of ?DoesWindowOverlapPrimaryOrEmptyRegion@XamlSnapAssistViewHost@@AEAA_NPEAUHWND__@@@Z @ 0x18060239C
 * Callers:
 *     _lambda_b90ba3034bff2a6798db754b0e1f537a_::operator() @ 0x180600D70 (_lambda_b90ba3034bff2a6798db754b0e1f537a_--operator().c)
 *     ?CreateSnapAssistControl@XamlSnapAssistViewHost@@AEAAPE$AAVSnapAssist@Switcher@Experiences@ComposableShell@WindowsInternal@@AEBURect@Foundation@Windows@winrt@@PEAUIImmersiveMonitor@@W4SNAP_ASSIST_VIEW_FLAGS@@@Z @ 0x1806017E0 (-CreateSnapAssistControl@XamlSnapAssistViewHost@@AEAAPE$AAVSnapAssist@Switcher@Experiences@Compo.c)
 * Callees:
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     std::find_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_ABI::Windows::Internal::Shell::WindowSnapping::SnapAssistRegion_______lambda_26cca3a0c1c2e804cd017d0045782f16___ @ 0x1805FFCD4 (std--find_if_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_ABI--Windows--Internal--S.c)
 */

bool __fastcall XamlSnapAssistViewHost::DoesWindowOverlapPrimaryOrEmptyRegion(XamlSnapAssistViewHost *this, HWND a2)
{
  __int64 v5; // [rsp+20h] [rbp-28h] BYREF
  struct tagRECT pvAttribute; // [rsp+28h] [rbp-20h] BYREF

  pvAttribute = 0LL;
  if ( DwmGetWindowAttribute(a2, 9u, &pvAttribute, 0x10u) < 0 )
    GetWindowRect(a2, &pvAttribute);
  std::find_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_ABI::Windows::Internal::Shell::WindowSnapping::SnapAssistRegion_______lambda_26cca3a0c1c2e804cd017d0045782f16___(
    &v5,
    *((_QWORD *)this + 81),
    *((_QWORD *)this + 82),
    &pvAttribute);
  return v5 != *((_QWORD *)this + 82);
}
