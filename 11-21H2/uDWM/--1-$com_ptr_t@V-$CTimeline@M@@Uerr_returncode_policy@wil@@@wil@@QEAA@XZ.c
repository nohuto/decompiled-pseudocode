/*
 * XREFs of ??1?$com_ptr_t@V?$CTimeline@M@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800B57CC
 * Callers:
 *     _winrt::Udwm::Transitions::Private::implementation::ScreenRotationRejuvTransitionHandler::ScreenRotationRejuvTransitionHandler_::_1_::dtor$4 @ 0x180065EDC (_winrt--Udwm--Transitions--Private--implementation--ScreenRotationRejuvTransitionHa_ea_180065EDC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil::com_ptr_t<CTimeline<float>,wil::err_returncode_policy>::~com_ptr_t<CTimeline<float>,wil::err_returncode_policy>(
        __int64 *a1)
{
  __int64 result; // rax
  bool v2; // zf

  result = *a1;
  if ( *a1 )
  {
    v2 = (*(_DWORD *)(result + 8))-- == 1;
    result = CDesktopManager::s_fTimelineDirty;
    if ( v2 )
      result = 1LL;
    CDesktopManager::s_fTimelineDirty = result;
  }
  return result;
}
