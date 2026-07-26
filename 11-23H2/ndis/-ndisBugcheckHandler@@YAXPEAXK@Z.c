/*
 * XREFs of ?ndisBugcheckHandler@@YAXPEAXK@Z @ 0x1C005D960
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0038370 (_guard_dispatch_icall_nop.c)
 *     ?ndisMInvokeShutdown@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SHUTDOWN_ACTION@@@Z @ 0x1C006C7B8 (-ndisMInvokeShutdown@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SHUTDOWN_ACTION@@@Z.c)
 */

void __fastcall ndisBugcheckHandler(struct _NDIS_MINIPORT_BLOCK *Buffer, ULONG Length)
{
  _DEVICE_POWER_STATE CurrentDevicePowerState; // eax

  if ( Length == 6080 )
  {
    CurrentDevicePowerState = Buffer->CurrentDevicePowerState;
    Buffer->PnPFlags |= 0x1000000u;
    if ( (unsigned int)(CurrentDevicePowerState - 2) > 2 )
    {
      if ( Buffer->MajorNdisVersion >= 6u )
        ndisMInvokeShutdown(Buffer, NdisShutdownBugCheck);
      else
        Buffer->ShutdownHandler(Buffer->ShutdownContext);
    }
  }
}
