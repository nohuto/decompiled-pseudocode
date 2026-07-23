/*
 * XREFs of sub_140816798 @ 0x140816798
 * Callers:
 *     IoConnectInterruptEx @ 0x140816FD0 (IoConnectInterruptEx.c)
 * Callees:
 *     memset @ 0x140435E00 (memset.c)
 *     IoDisconnectInterrupt @ 0x140816AA0 (IoDisconnectInterrupt.c)
 *     sub_140817258 @ 0x140817258 (sub_140817258.c)
 *     sub_140817A24 @ 0x140817A24 (sub_140817A24.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall sub_140816798(struct _DEVICE_OBJECT *a1, _QWORD *a2, __int64 a3)
{
  _DWORD *DeviceNode; // r9

  *a2 = 0LL;
  if ( a1 && (DeviceNode = a1->DeviceObjectExtension->DeviceNode) != 0LL && (DeviceNode[99] & 0x20000) == 0 && a3 )
    return sub_140817A24(a1);
  else
    return 3221225485LL;
}
