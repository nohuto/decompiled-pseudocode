/*
 * XREFs of _CVirtualDesktopManager::CVirtualDesktopManager_::_1_::dtor$24 @ 0x18021B781
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CVirtualDesktopManager::CVirtualDesktopManager_::_1_::dtor_24(__int64 a1, __int64 a2)
{
  return std::list<std::pair<HMONITOR__ * const,wil::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>>>::~list<std::pair<HMONITOR__ * const,wil::com_ptr_t<IVirtualDesktop,wil::err_returncode_policy>>>(*(_QWORD *)(a2 + 56) + 8LL);
}
