/*
 * XREFs of ??1?$unique_any_t@V?$unique_storage@U?$handle_invalid_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800B3814
 * Callers:
 *     _DWMCursor::DWMCursor_::_1_::dtor$3 @ 0x1800551C8 (_DWMCursor--DWMCursor_--_1_--dtor$3.c)
 *     _MPCFocusTarget::MPCFocusTarget_::_1_::dtor$2 @ 0x1800F2915 (_MPCFocusTarget--MPCFocusTarget_--_1_--dtor$2.c)
 *     _SystemCursors::SharedTargetWithHandle::Initialize_::_1_::dtor$4 @ 0x180156CC0 (_SystemCursors--SharedTargetWithHandle--Initialize_--_1_--dtor$4.c)
 *     _PenInterface::PenInterface_::_1_::dtor$3 @ 0x180188817 (_PenInterface--PenInterface_--_1_--dtor$3.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall wil::unique_any_t<wil::details::unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>::~unique_any_t<wil::details::unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>(
        __int64 a1)
{
  return wil::details::unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(a1);
}
