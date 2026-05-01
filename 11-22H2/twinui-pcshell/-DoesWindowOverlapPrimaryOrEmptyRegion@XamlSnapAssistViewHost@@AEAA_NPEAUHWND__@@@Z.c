/*
 * XREFs of ?DoesWindowOverlapPrimaryOrEmptyRegion@XamlSnapAssistViewHost@@AEAA_NPEAUHWND__@@@Z @ 0x18076C644
 * Callers:
 *     std::copy_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowId______std::back_insert_iterator_std::vector_winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowId_std::allocator_winrt::Windows::Internal::ApplicationModel::WindowManagement::WindowId_______lambda_9d734982820769c8d0ced5cfcfde410a___ @ 0x180769584 (std--copy_if_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_winrt--Windows--Internal-.c)
 *     _lambda_b90ba3034bff2a6798db754b0e1f537a_::operator() @ 0x18076A8BC (_lambda_b90ba3034bff2a6798db754b0e1f537a_--operator().c)
 * Callees:
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     std::find_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_winrt::Windows::Internal::Shell::WindowSnapping::SnapAssistRegion_______lambda_fa7fbb7d3f2783e8d9281d3ba2f32fb2___ @ 0x180769770 (std--find_if_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_winrt--Windo_ea_180769770.c)
 */

bool __fastcall XamlSnapAssistViewHost::DoesWindowOverlapPrimaryOrEmptyRegion(XamlSnapAssistViewHost *this, HWND a2)
{
  __int64 v5; // [rsp+20h] [rbp-28h] BYREF
  struct tagRECT pvAttribute; // [rsp+28h] [rbp-20h] BYREF

  pvAttribute = 0LL;
  if ( DwmGetWindowAttribute(a2, 9u, &pvAttribute, 0x10u) < 0 )
    GetWindowRect(a2, &pvAttribute);
  std::find_if_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_winrt::Windows::Internal::Shell::WindowSnapping::SnapAssistRegion_______lambda_fa7fbb7d3f2783e8d9281d3ba2f32fb2___(
    &v5,
    *((_QWORD *)this + 83),
    *((_QWORD *)this + 84),
    &pvAttribute);
  return v5 != *((_QWORD *)this + 84);
}
