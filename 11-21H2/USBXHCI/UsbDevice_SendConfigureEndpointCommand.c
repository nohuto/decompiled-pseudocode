/*
 * XREFs of UsbDevice_SendConfigureEndpointCommand @ 0x1C0002A5C
 * Callers:
 *     UsbDevice_QueueConfigureEndpointEvent @ 0x1C000239C (UsbDevice_QueueConfigureEndpointEvent.c)
 *     UsbDevice_HandleAddAndDropEndpointsState @ 0x1C000254C (UsbDevice_HandleAddAndDropEndpointsState.c)
 *     UsbDevice_HandleAddEndpointsState @ 0x1C0046A7C (UsbDevice_HandleAddEndpointsState.c)
 *     UsbDevice_HandleDropEndpointsState @ 0x1C0046C6C (UsbDevice_HandleDropEndpointsState.c)
 * Callees:
 *     UsbDevice_QueueConfigureEndpointEvent @ 0x1C000239C (UsbDevice_QueueConfigureEndpointEvent.c)
 *     Command_SendCommand @ 0x1C0003D94 (Command_SendCommand.c)
 *     memset @ 0x1C0019CC0 (memset.c)
 */

__int64 __fastcall UsbDevice_SendConfigureEndpointCommand(__int64 a1, int a2)
{
  __int64 v3; // rsi
  char v5; // r9
  int v6; // eax
  __int64 v7; // r8
  __int64 v8; // r8
  __int64 (__fastcall *v9)(__int64, int, __int64); // rcx
  __int64 v10; // rdx
  unsigned int v11; // ecx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx

  v3 = a1 + 456;
  memset((void *)(a1 + 456), 0, 0x60uLL);
  v5 = *(_BYTE *)(a1 + 657);
  v6 = 0;
  v7 = *(_QWORD *)((v5 != 0 ? 648LL : 640LL) + a1);
  if ( v7 )
    v8 = *(_QWORD *)(v7 + 16);
  else
    v8 = 0LL;
  if ( (a2 & 0xFFFFFFFD) == 0 )
  {
    v9 = UsbDevice_EndpointsConfigureCompletion;
LABEL_5:
    *(_QWORD *)(a1 + 496) = v9;
    v10 = a1 + 648;
    v11 = *(_DWORD *)(a1 + 492) & 0xFFFF31FF;
    *(_QWORD *)(a1 + 504) = a1;
    *(_DWORD *)(a1 + 492) = v11 | 0x3000;
    *(_BYTE *)(a1 + 495) = *(_BYTE *)(a1 + 135);
    if ( !v5 )
      v10 = a1 + 640;
    if ( *(_QWORD *)v10 )
      v12 = *(_QWORD *)(*(_QWORD *)v10 + 24LL);
    else
      v12 = 0LL;
    *(_QWORD *)(a1 + 480) = v12;
    *(_QWORD *)(a1 + 528) = v8;
    v13 = *(_QWORD *)((v5 != 0 ? 648LL : 640LL) + a1);
    if ( v13 )
      v6 = *(_DWORD *)(v13 + 44);
    v14 = *(_QWORD *)(a1 + 8);
    *(_DWORD *)(a1 + 536) = v6;
    *(_DWORD *)(a1 + 540) = 1;
    *(_QWORD *)(a1 + 544) = a1;
    return Command_SendCommand(*(_QWORD *)(v14 + 144), v3);
  }
  if ( a2 == 1 )
  {
    v9 = (__int64 (__fastcall *)(__int64, int, __int64))UsbDevice_DropEndpointsCompletion;
    goto LABEL_5;
  }
  if ( *(_DWORD *)(a1 + 448) == 259 )
    *(_DWORD *)(a1 + 448) = -1073741595;
  return UsbDevice_QueueConfigureEndpointEvent(a1, 2LL);
}
