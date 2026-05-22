/*
 * XREFs of ??1?$unique_any_t@V?$unique_storage@U?$handle_invalid_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800977C4
 * Callers:
 *     ??0LampArrayRawInputProvider@@AEAA@XZ @ 0x18004A650 (--0LampArrayRawInputProvider@@AEAA@XZ.c)
 *     ??0SessionMonitor@@AEAA@PEAUISessionMonitorOwner@@PEAUIMessageSession@@@Z @ 0x180058AF4 (--0SessionMonitor@@AEAA@PEAUISessionMonitorOwner@@PEAUIMessageSession@@@Z.c)
 *     _DWMCursor::DWMCursor_::_1_::dtor$3 @ 0x18006FBA5 (_DWMCursor--DWMCursor_--_1_--dtor$3.c)
 *     ??1LampArrayRawInputProvider@@EEAA@XZ @ 0x1800E8D6C (--1LampArrayRawInputProvider@@EEAA@XZ.c)
 *     ?Shutdown@LampArrayRawInputProvider@@AEAAXXZ @ 0x1800E9838 (-Shutdown@LampArrayRawInputProvider@@AEAAXXZ.c)
 *     _MPCFocusTarget::MPCFocusTarget_::_1_::dtor$2 @ 0x18010BE5D (_MPCFocusTarget--MPCFocusTarget_--_1_--dtor$2.c)
 *     ?Initialize@SharedTargetWithHandle@SystemCursors@@QEAAJXZ @ 0x180175C7C (-Initialize@SharedTargetWithHandle@SystemCursors@@QEAAJXZ.c)
 *     _SystemCursors::SharedTargetWithHandle::Initialize_::_1_::dtor$4 @ 0x180175F13 (_SystemCursors--SharedTargetWithHandle--Initialize_--_1_--dtor$4.c)
 *     _PenInterface::PenInterface_::_1_::dtor$3 @ 0x1801A693D (_PenInterface--PenInterface_--_1_--dtor$3.c)
 * Callees:
 *     <none>
 */

int __fastcall wil::unique_any_t<wil::details::unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>::~unique_any_t<wil::details::unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>>(
        void **a1)
{
  char *v1; // rcx
  int result; // eax

  v1 = (char *)*a1;
  result = (_DWORD)v1 - 1;
  if ( (unsigned __int64)(v1 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    return CloseHandle(v1);
  return result;
}
