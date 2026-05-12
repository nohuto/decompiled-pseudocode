/*
 * XREFs of ?PmWmiFunctionControl@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@KW4_WMIENABLEDISABLECONTROL@@E@Z @ 0x1C0022340
 * Callers:
 *     <none>
 * Callees:
 *     PmWmiCounterEnable @ 0x1C00223F0 (PmWmiCounterEnable.c)
 *     PmWmiCounterDisable @ 0x1C0022550 (PmWmiCounterDisable.c)
 */

NTSTATUS __fastcall PmWmiFunctionControl(
        PDEVICE_OBJECT DeviceObject,
        PIRP Irp,
        int a3,
        enum _WMIENABLEDISABLECONTROL a4,
        unsigned __int8 a5)
{
  _BYTE *DeviceExtension; // rdi
  NTSTATUS v6; // ebx
  char *v9; // rcx

  DeviceExtension = DeviceObject->DeviceExtension;
  v6 = 0;
  if ( a3 || *((_DWORD *)DeviceExtension + 42) == -1 )
  {
    v6 = -1073741163;
  }
  else if ( a4 == WmiDataBlockControl )
  {
    v9 = DeviceExtension + 720;
    if ( a5 )
    {
      v6 = PmWmiCounterEnable(v9);
      DeviceExtension[704] = v6 >= 0;
    }
    else
    {
      DeviceExtension[704] = PmWmiCounterDisable(v9, 0LL);
    }
  }
  return WmiCompleteRequest(DeviceObject, Irp, v6, 0, 0);
}
