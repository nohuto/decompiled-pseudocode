/*
 * XREFs of ??1?$unique_any_t@V?$unique_storage@U?$handle_invalid_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800A9E6C
 * Callers:
 *     ??0LampArrayRawInputProvider@@AEAA@XZ @ 0x18004AFB0 (--0LampArrayRawInputProvider@@AEAA@XZ.c)
 *     ??0SessionMonitor@@AEAA@PEAUISessionMonitorOwner@@PEAUIMessageSession@@@Z @ 0x18005A2A4 (--0SessionMonitor@@AEAA@PEAUISessionMonitorOwner@@PEAUIMessageSession@@@Z.c)
 *     _DWMCursor::DWMCursor_::_1_::dtor$3 @ 0x1800836AC (_DWMCursor--DWMCursor_--_1_--dtor$3.c)
 *     ??1LampArrayRawInputProvider@@EEAA@XZ @ 0x1800F7CEC (--1LampArrayRawInputProvider@@EEAA@XZ.c)
 *     ?Shutdown@LampArrayRawInputProvider@@AEAAXXZ @ 0x1800F87B8 (-Shutdown@LampArrayRawInputProvider@@AEAAXXZ.c)
 *     _MPCFocusTarget::MPCFocusTarget_::_1_::dtor$2 @ 0x18011A25D (_MPCFocusTarget--MPCFocusTarget_--_1_--dtor$2.c)
 *     ?Initialize@SharedTargetWithHandle@SystemCursors@@QEAAJXZ @ 0x180183A8C (-Initialize@SharedTargetWithHandle@SystemCursors@@QEAAJXZ.c)
 *     _SystemCursors::SharedTargetWithHandle::Initialize_::_1_::dtor$4 @ 0x180183D23 (_SystemCursors--SharedTargetWithHandle--Initialize_--_1_--dtor$4.c)
 *     _PenInterface::PenInterface_::_1_::dtor$3 @ 0x1801B491D (_PenInterface--PenInterface_--_1_--dtor$3.c)
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
