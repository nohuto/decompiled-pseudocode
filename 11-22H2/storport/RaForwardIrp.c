/*
 * XREFs of RaForwardIrp @ 0x1C0013754
 * Callers:
 *     RaidAdapterDeviceControlIrp @ 0x1C0007240 (RaidAdapterDeviceControlIrp.c)
 *     RaidAdapterPowerIrp @ 0x1C0011558 (RaidAdapterPowerIrp.c)
 *     RaidAdapterPnpIrp @ 0x1C0015794 (RaidAdapterPnpIrp.c)
 *     RaidAdapterQueryDeviceRelationsIrp @ 0x1C0015938 (RaidAdapterQueryDeviceRelationsIrp.c)
 *     RaidAdapterQueryIdIrp @ 0x1C0036F5C (RaidAdapterQueryIdIrp.c)
 *     RaidAdapterQueryInterfaceIrp @ 0x1C0036FF0 (RaidAdapterQueryInterfaceIrp.c)
 *     RaidAdapterQueryPnpDeviceStateIrp @ 0x1C00A00DC (RaidAdapterQueryPnpDeviceStateIrp.c)
 *     RaidAdapterCancelRemoveDeviceIrp @ 0x1C00A52A0 (RaidAdapterCancelRemoveDeviceIrp.c)
 *     RaidAdapterQueryRemoveDeviceIrp @ 0x1C00A6C04 (RaidAdapterQueryRemoveDeviceIrp.c)
 *     RaidAdapterQueryStopDeviceIrp @ 0x1C00A6CA4 (RaidAdapterQueryStopDeviceIrp.c)
 *     RaidAdapterStopDeviceIrp @ 0x1C00A711C (RaidAdapterStopDeviceIrp.c)
 *     RaidAdapterSurpriseRemovalIrp @ 0x1C00A73DC (RaidAdapterSurpriseRemovalIrp.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall RaForwardIrp(struct _DEVICE_OBJECT *a1, IRP *a2)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rax

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)&CurrentStackLocation->MajorFunction;
  *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&CurrentStackLocation->Parameters.NotifyDirectoryEx.CompletionFilter;
  *(_OWORD *)(&CurrentStackLocation[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&CurrentStackLocation->Parameters.SetQuota
                                                                             + 6);
  CurrentStackLocation[-1].FileObject = CurrentStackLocation->FileObject;
  CurrentStackLocation[-1].Control = 0;
  return IofCallDriver(a1, a2);
}
