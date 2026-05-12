/*
 * XREFs of ?PmControlDeviceControl@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C000E8A0
 * Callers:
 *     <none>
 * Callees:
 *     PmIoctlGetSanSettings @ 0x1C0025B14 (PmIoctlGetSanSettings.c)
 *     PmIoctlSetSanSettings @ 0x1C002619C (PmIoctlSetSanSettings.c)
 */

__int64 __fastcall PmControlDeviceControl(struct _DEVICE_OBJECT *a1, struct _IRP *a2)
{
  DWORD LowPart; // edx
  unsigned int v4; // edi
  unsigned int SanSettings; // eax

  a2->IoStatus.Information = 0LL;
  LowPart = a2->Tail.Overlay.CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  if ( LowPart == 475648 )
  {
    SanSettings = PmIoctlGetSanSettings(a1, a2);
    goto LABEL_6;
  }
  if ( LowPart == 508420 )
  {
    SanSettings = PmIoctlSetSanSettings(a1, a2);
LABEL_6:
    v4 = SanSettings;
    goto LABEL_7;
  }
  v4 = -1073741808;
LABEL_7:
  a2->IoStatus.Status = v4;
  IofCompleteRequest(a2, 0);
  return v4;
}
