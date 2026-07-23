/*
 * XREFs of sub_1409A4D70 @ 0x1409A4D70
 * Callers:
 *     TtmNotifyDeviceArrival @ 0x1409A1660 (TtmNotifyDeviceArrival.c)
 *     TtmNotifyDeviceDeparture @ 0x1409A1960 (TtmNotifyDeviceDeparture.c)
 *     sub_1409A1BAC @ 0x1409A1BAC (sub_1409A1BAC.c)
 *     sub_1409A200C @ 0x1409A200C (sub_1409A200C.c)
 *     sub_1409A3648 @ 0x1409A3648 (sub_1409A3648.c)
 *     sub_1409A36FC @ 0x1409A36FC (sub_1409A36FC.c)
 *     sub_1409A37AC @ 0x1409A37AC (sub_1409A37AC.c)
 *     sub_1409A39F8 @ 0x1409A39F8 (sub_1409A39F8.c)
 *     sub_1409A3A54 @ 0x1409A3A54 (sub_1409A3A54.c)
 *     sub_1409A3BE0 @ 0x1409A3BE0 (sub_1409A3BE0.c)
 *     sub_1409A4510 @ 0x1409A4510 (sub_1409A4510.c)
 *     sub_1409A49BC @ 0x1409A49BC (sub_1409A49BC.c)
 *     sub_1409A4E68 @ 0x1409A4E68 (sub_1409A4E68.c)
 *     sub_1409A5E3C @ 0x1409A5E3C (sub_1409A5E3C.c)
 *     sub_1409A6940 @ 0x1409A6940 (sub_1409A6940.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140345FC0 (ExQueueWorkItem.c)
 */

void __fastcall sub_1409A4D70(__int64 a1, int a2)
{
  *(_DWORD *)(a1 + 224) |= a2;
  if ( (*(_DWORD *)(a1 + 4) & 3) == 0 )
  {
    _InterlockedAdd((volatile signed __int32 *)(a1 + 8), 1u);
    *(_DWORD *)(a1 + 4) |= 1u;
    ExQueueWorkItem((PWORK_QUEUE_ITEM)(a1 + 192), DelayedWorkQueue);
  }
}
