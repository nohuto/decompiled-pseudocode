/*
 * XREFs of PopNotifyDevice @ 0x140AA713C
 * Callers:
 *     PopSleepDeviceList @ 0x140590F08 (PopSleepDeviceList.c)
 *     PopWakeDeviceList @ 0x1405911AC (PopWakeDeviceList.c)
 * Callees:
 *     PopQueueQuerySetIrp @ 0x14028EC5C (PopQueueQuerySetIrp.c)
 *     PopAllocateIrp @ 0x14028F6C4 (PopAllocateIrp.c)
 *     IoGetDeviceAttachmentBaseRefWithTag @ 0x140302D18 (IoGetDeviceAttachmentBaseRefWithTag.c)
 *     PopLogNotifyDevice @ 0x14046342A (PopLogNotifyDevice.c)
 *     PopMapInternalActionToIrpAction @ 0x1405876E4 (PopMapInternalActionToIrpAction.c)
 *     PoFxActivateDeviceForSystemTransition @ 0x140587B44 (PoFxActivateDeviceForSystemTransition.c)
 */

NTSTATUS __fastcall PopNotifyDevice(__int64 a1, __int64 a2)
{
  char v4; // r8
  __int64 v5; // rdx
  _QWORD *v6; // r10
  ULONG v7; // r15d
  int v8; // ebx
  __int64 v9; // r14
  PIRP v10; // rbp
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  struct _IO_STACK_LOCATION *v12; // rax
  void *DeviceAttachmentBaseRefWithTag; // rax
  __int64 v15; // [rsp+90h] [rbp+8h] BYREF
  PIRP Irp; // [rsp+98h] [rbp+10h] BYREF

  Irp = 0LL;
  v15 = 0LL;
  v4 = *(_BYTE *)(a1 + 464) || **(_QWORD **)(a1 + 56) != *(_QWORD *)(a2 + 64);
  v7 = PopMapInternalActionToIrpAction(DWORD2(PopCurrentBroadcast), *(_DWORD *)(a1 + 4), v4);
  if ( v7 == 7 && *v6 == *(_QWORD *)(a2 + 64) && *(_BYTE *)a1 == 2 )
    *v6 = 0LL;
  v8 = *(_DWORD *)(a1 + 4);
  PopAllocateIrp(*(void **)(a2 + 48), v5, *(_BYTE *)a1, 0, v8, 1, 0, 0LL, 0LL, &Irp, &v15);
  v9 = v15;
  v10 = Irp;
  *(_QWORD *)(v15 + 216) = a2;
  *(_BYTE *)(v9 + 224) = 0;
  CurrentStackLocation = v10->Tail.Overlay.CurrentStackLocation;
  CurrentStackLocation[-1].Parameters.Create.Options = 0;
  CurrentStackLocation[-1].Parameters.Read.ByteOffset.LowPart = v8;
  CurrentStackLocation[-1].Parameters.Create.EaLength = v7;
  CurrentStackLocation[-1].Parameters.Read.Length = DWORD1(PopCurrentBroadcast);
  v12 = v10->Tail.Overlay.CurrentStackLocation;
  v12[-1].CompletionRoutine = (PIO_COMPLETION_ROUTINE)PopSystemIrpCompletion;
  v12[-1].Context = (PVOID)v9;
  v12[-1].Control = -32;
  if ( (xmmword_140D1EAD0 & 0x8000) != 0 )
    PopLogNotifyDevice(*(_QWORD *)(a2 + 48), a2, (__int64)v10);
  if ( (unsigned __int8)(*(_BYTE *)a1 - 2) <= 1u && v8 > 1 )
  {
    DeviceAttachmentBaseRefWithTag = IoGetDeviceAttachmentBaseRefWithTag(*(_QWORD *)(a2 + 48), 0x72496F50u);
    PoFxActivateDeviceForSystemTransition((__int64)DeviceAttachmentBaseRefWithTag, *(_BYTE *)a1 == 2);
    *(_BYTE *)(v9 + 224) = 1;
  }
  return PopQueueQuerySetIrp(v10);
}
