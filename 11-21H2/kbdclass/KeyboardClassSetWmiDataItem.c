/*
 * XREFs of KeyboardClassSetWmiDataItem @ 0x1C000F990
 * Callers:
 *     <none>
 * Callees:
 *     KeyboardToggleWaitWake @ 0x1C0005ED8 (KeyboardToggleWaitWake.c)
 */

NTSTATUS __fastcall KeyboardClassSetWmiDataItem(
        PDEVICE_OBJECT DeviceObject,
        PIRP Irp,
        int a3,
        int a4,
        int a5,
        int a6,
        char *a7)
{
  ULONG v7; // ebx
  NTSTATUS v10; // eax

  v7 = 0;
  if ( a3 )
  {
    if ( a3 == 1 )
    {
      v7 = 1;
      if ( a6 )
      {
        if ( a5 != 1 || a4 )
          v10 = -1073741808;
        else
          v10 = KeyboardToggleWaitWake((__int64)DeviceObject->DeviceExtension, *a7);
      }
      else
      {
        v10 = -1073741789;
      }
    }
    else
    {
      v10 = -1073741163;
    }
  }
  else
  {
    v10 = -1073741114;
  }
  return WmiCompleteRequest(DeviceObject, Irp, v10, v7, 0);
}
