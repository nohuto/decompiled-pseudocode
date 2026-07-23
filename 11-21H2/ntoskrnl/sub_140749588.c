/*
 * XREFs of sub_140749588 @ 0x140749588
 * Callers:
 *     sub_140557F6C @ 0x140557F6C (sub_140557F6C.c)
 *     sub_140748F48 @ 0x140748F48 (sub_140748F48.c)
 *     sub_140749C4C @ 0x140749C4C (sub_140749C4C.c)
 *     sub_14076B24C @ 0x14076B24C (sub_14076B24C.c)
 *     sub_14078B7C4 @ 0x14078B7C4 (sub_14078B7C4.c)
 *     IoRegisterContainerNotification @ 0x140937220 (IoRegisterContainerNotification.c)
 *     sub_140944ADC @ 0x140944ADC (sub_140944ADC.c)
 * Callees:
 *     IoGetDevicePropertyData @ 0x140749610 (IoGetDevicePropertyData.c)
 */

__int64 __fastcall sub_140749588(struct _DEVICE_OBJECT *a1)
{
  unsigned int v1; // ebx
  _DWORD *DeviceNode; // rdx
  NTSTATUS DevicePropertyData; // eax
  unsigned int v4; // ecx
  int v6; // [rsp+50h] [rbp+8h] BYREF
  ULONG v7; // [rsp+58h] [rbp+10h] BYREF
  ULONG v8; // [rsp+60h] [rbp+18h] BYREF

  v8 = 0;
  v1 = -1;
  v7 = 0;
  v6 = -1;
  if ( a1 )
  {
    DeviceNode = a1->DeviceObjectExtension->DeviceNode;
    if ( DeviceNode )
    {
      if ( (DeviceNode[99] & 0x20000) == 0 )
      {
        DevicePropertyData = IoGetDevicePropertyData(a1, &stru_140010AF0, 0, 0, 4u, &v6, &v8, &v7);
        v4 = v6;
        if ( DevicePropertyData < 0 )
          return (unsigned int)-1;
        return v4;
      }
    }
  }
  return v1;
}
