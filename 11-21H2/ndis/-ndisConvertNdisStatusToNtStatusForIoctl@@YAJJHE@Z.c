/*
 * XREFs of ?ndisConvertNdisStatusToNtStatusForIoctl@@YAJJHE@Z @ 0x1C00105CC
 * Callers:
 *     ?ndisDeviceControlHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z @ 0x1C000F1D0 (-ndisDeviceControlHandler@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@@Z.c)
 *     ?ndisMiniportOidIoctl@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_USER_OPEN_CONTEXT@@KKKPEAEPEAU_MDL@@AEAK@Z @ 0x1C01033C0 (-ndisMiniportOidIoctl@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_USER_OPEN_CONTEXT@@KKKPEAEPEAU_MDL.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisConvertNdisStatusToNtStatusForIoctl(unsigned int a1, int a2, char a3)
{
  switch ( a2 )
  {
    case 0:
      return a1;
    case -1073676268:
      return 2147483653LL;
    case -1073741637:
      return a3 == 0 ? 0xC00000BB : 0;
  }
  return 3221225473LL;
}
