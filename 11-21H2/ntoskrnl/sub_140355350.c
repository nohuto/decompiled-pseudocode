/*
 * XREFs of sub_140355350 @ 0x140355350
 * Callers:
 *     sub_1402D2864 @ 0x1402D2864 (sub_1402D2864.c)
 *     sub_140355144 @ 0x140355144 (sub_140355144.c)
 *     sub_140355534 @ 0x140355534 (sub_140355534.c)
 *     sub_1403B1998 @ 0x1403B1998 (sub_1403B1998.c)
 *     PoFxAddDeviceRelation @ 0x140419310 (PoFxAddDeviceRelation.c)
 *     PoFxRemoveDeviceRelation @ 0x140419580 (PoFxRemoveDeviceRelation.c)
 *     PoFxAddComponentRelation @ 0x1405CA2E0 (PoFxAddComponentRelation.c)
 *     PoFxRemoveComponentRelation @ 0x1405CA8F0 (PoFxRemoveComponentRelation.c)
 *     sub_1405CAE90 @ 0x1405CAE90 (sub_1405CAE90.c)
 *     sub_1405CB06C @ 0x1405CB06C (sub_1405CB06C.c)
 *     sub_1405CB6D8 @ 0x1405CB6D8 (sub_1405CB6D8.c)
 *     sub_1405CCCFC @ 0x1405CCCFC (sub_1405CCCFC.c)
 *     PoFxSetTargetDripsDevicePowerState @ 0x14098CEF0 (PoFxSetTargetDripsDevicePowerState.c)
 * Callees:
 *     IoAcquireRemoveLockEx @ 0x1403553A0 (IoAcquireRemoveLockEx.c)
 *     sub_1405CAE6C @ 0x1405CAE6C (sub_1405CAE6C.c)
 */

NTSTATUS __fastcall sub_140355350(ULONG_PTR BugCheckParameter2)
{
  NTSTATUS result; // eax

  result = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(BugCheckParameter2 + 240), 0LL, &File, 1u, 0x20u);
  if ( result < 0 )
    sub_1405CAE6C(0x607uLL, BugCheckParameter2, result, 0LL);
  return result;
}
