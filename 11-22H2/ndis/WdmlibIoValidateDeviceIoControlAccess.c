/*
 * XREFs of WdmlibIoValidateDeviceIoControlAccess @ 0x1C00D1A58
 * Callers:
 *     ?ndisHandlePnPRequest@@_Y2PAGENPNP@@AJPEAU_IRP@@@Z @ 0x1C0145008 (-ndisHandlePnPRequest@@_Y2PAGENPNP@@AJPEAU_IRP@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00381E0 (_guard_dispatch_icall_nop.c)
 */

NTSTATUS __stdcall WdmlibIoValidateDeviceIoControlAccess(PIRP Irp, ULONG RequiredAccess)
{
  NTSTATUS result; // eax

  result = (int)PfnIoValidateDeviceIoControlAccess;
  if ( PfnIoValidateDeviceIoControlAccess )
    return PfnIoValidateDeviceIoControlAccess(Irp, 2LL);
  return result;
}
