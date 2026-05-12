/*
 * XREFs of RaidDriverDeviceControlIrp @ 0x1C003FDA8
 * Callers:
 *     RaDriverDeviceControlIrp @ 0x1C0006A50 (RaDriverDeviceControlIrp.c)
 * Callees:
 *     LoadExtensionDriver @ 0x1C00411E0 (LoadExtensionDriver.c)
 *     UnloadExtensionDriver @ 0x1C0042E60 (UnloadExtensionDriver.c)
 */

__int64 __fastcall RaidDriverDeviceControlIrp(__int64 a1, IRP *a2)
{
  unsigned int v3; // ebx
  unsigned int ExtensionDriver; // eax

  a2->IoStatus.Information = 0LL;
  if ( a2->Tail.Overlay.CurrentStackLocation->Parameters.Read.ByteOffset.LowPart == 15122436 )
  {
    ExtensionDriver = LoadExtensionDriver();
    goto LABEL_6;
  }
  if ( a2->Tail.Overlay.CurrentStackLocation->Parameters.Read.ByteOffset.LowPart == 15122440 )
  {
    ExtensionDriver = UnloadExtensionDriver();
LABEL_6:
    v3 = ExtensionDriver;
    goto LABEL_7;
  }
  v3 = -1073741808;
LABEL_7:
  a2->IoStatus.Status = v3;
  IofCompleteRequest(a2, 0);
  return v3;
}
