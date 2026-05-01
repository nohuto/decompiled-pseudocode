/*
 * XREFs of _CVirtualDesktopManager::TransitionToPerMonitorMode_::_1_::dtor$0 @ 0x18054BBF1
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CVirtualDesktopManager::TransitionToPerMonitorMode_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  std::unordered_map<HMONITOR__ *,std::vector<wil::com_ptr_t<IApplicationView,wil::err_returncode_policy>>>::~unordered_map<HMONITOR__ *,std::vector<wil::com_ptr_t<IApplicationView,wil::err_returncode_policy>>>(a2 + 144);
}
