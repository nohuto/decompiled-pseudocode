/*
 * XREFs of ??1?$unique_storage@U?$handle_invalid_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@IEAA@XZ @ 0x1800B3850
 * Callers:
 *     ??1?$unique_any_t@V?$unique_storage@U?$handle_invalid_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x1800B3814 (--1-$unique_any_t@V-$unique_storage@U-$handle_invalid_resource_policy@P6AHPEAX@Z$1-CloseHandle@@.c)
 *     ??1GameControllerRawInputProvider@@UEAA@XZ @ 0x1800B387C (--1GameControllerRawInputProvider@@UEAA@XZ.c)
 *     ??1MobileButtonDeviceCollection@@UEAA@XZ @ 0x1800C4408 (--1MobileButtonDeviceCollection@@UEAA@XZ.c)
 *     ?SendIOCTLMessage@MobileButtonDeviceCollection@@AEAAXW4_Button@@_N@Z @ 0x1800C5640 (-SendIOCTLMessage@MobileButtonDeviceCollection@@AEAAXW4_Button@@_N@Z.c)
 *     ?_Destroy@?$_Ref_count_obj2@VSharedTargetWithHandle@SystemCursors@@@std@@EEAAXXZ @ 0x1800EE040 (-_Destroy@-$_Ref_count_obj2@VSharedTargetWithHandle@SystemCursors@@@std@@EEAAXXZ.c)
 *     ??1MPCFocusTarget@@UEAA@XZ @ 0x1800F292C (--1MPCFocusTarget@@UEAA@XZ.c)
 *     ??1AlpcPort@@UEAA@XZ @ 0x1800FCC18 (--1AlpcPort@@UEAA@XZ.c)
 *     ??1SipcPort@@UEAA@XZ @ 0x1800FCD40 (--1SipcPort@@UEAA@XZ.c)
 *     ?RejectClientConnection@AlpcPort@@UEAAJXZ @ 0x1800FF420 (-RejectClientConnection@AlpcPort@@UEAAJXZ.c)
 *     ??1CallbackData@CallOnThreadExit@@QEAA@XZ @ 0x18012635C (--1CallbackData@CallOnThreadExit@@QEAA@XZ.c)
 *     ?Initialize@SharedTargetWithHandle@SystemCursors@@QEAAJXZ @ 0x180156A54 (-Initialize@SharedTargetWithHandle@SystemCursors@@QEAAJXZ.c)
 *     ??1PenInterface@@UEAA@XZ @ 0x1801888E0 (--1PenInterface@@UEAA@XZ.c)
 *     ??1DWMCursor@@MEAA@XZ @ 0x1801CF52C (--1DWMCursor@@MEAA@XZ.c)
 * Callees:
 *     <none>
 */

int __fastcall wil::details::unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(
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
