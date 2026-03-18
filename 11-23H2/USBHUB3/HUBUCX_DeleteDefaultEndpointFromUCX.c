/*
 * XREFs of HUBUCX_DeleteDefaultEndpointFromUCX @ 0x1C0028890
 * Callers:
 *     HUBDSM_DeletingDefaultEndpointAndDeviceOnPostAddressFailureInEnum @ 0x1C001F640 (HUBDSM_DeletingDefaultEndpointAndDeviceOnPostAddressFailureInEnum.c)
 *     HUBDSM_DeletingDeviceAndDefaultEndpointOnCleanupWithPortOff @ 0x1C001F670 (HUBDSM_DeletingDeviceAndDefaultEndpointOnCleanupWithPortOff.c)
 *     HUBDSM_DeletingDeviceAndDefaultEndpointOnCleanupAfterDetach @ 0x1C001F6D0 (HUBDSM_DeletingDeviceAndDefaultEndpointOnCleanupAfterDetach.c)
 *     HUBDSM_DeletingEndpointsAndDeviceOnOnCleanup @ 0x1C001F720 (HUBDSM_DeletingEndpointsAndDeviceOnOnCleanup.c)
 *     HUBDSM_DeletingUCXDefaultEndpointOnOperationFailureFor30 @ 0x1C0020BB0 (HUBDSM_DeletingUCXDefaultEndpointOnOperationFailureFor30.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0044C70 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBUCX_DeleteDefaultEndpointFromUCX(_QWORD *a1)
{
  __int64 result; // rax

  result = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*a1 + 456LL))(*(_QWORD *)(*a1 + 248LL), a1[3], a1[11]);
  a1[11] = 0LL;
  return result;
}
