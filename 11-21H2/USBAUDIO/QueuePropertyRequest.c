/*
 * XREFs of QueuePropertyRequest @ 0x1C0032438
 * Callers:
 *     PropertyGetSetChannelConfiguration @ 0x1C002FA70 (PropertyGetSetChannelConfiguration.c)
 *     PropertyGetSetMuxSource @ 0x1C002FBD0 (PropertyGetSetMuxSource.c)
 *     PropertySetBoolean @ 0x1C0030350 (PropertySetBoolean.c)
 *     PropertySetDbLevel @ 0x1C0030860 (PropertySetDbLevel.c)
 *     PropertySetFeatureValue @ 0x1C0030C70 (PropertySetFeatureValue.c)
 *     PropertySetMixerLevels @ 0x1C0030DF0 (PropertySetMixerLevels.c)
 *     PropertySetTopologyNodeEnable @ 0x1C0030FC0 (PropertySetTopologyNodeEnable.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall QueuePropertyRequest(
        PIRP Irp,
        struct _LIST_ENTRY *a2,
        struct _LIST_ENTRY *a3,
        struct _LIST_ENTRY *a4)
{
  PKSFILTER FilterFromIrp; // rax
  PKSDEVICE Device; // rax
  struct _IO_CSQ *Context; // rdi
  struct _LIST_ENTRY *Pool2; // rax

  FilterFromIrp = KsGetFilterFromIrp(Irp);
  if ( !FilterFromIrp )
    return 3221225473LL;
  Device = KsGetDevice(FilterFromIrp);
  if ( !Device )
    return 3221225473LL;
  Context = (struct _IO_CSQ *)Device->Context;
  if ( !Context )
    return 3221225473LL;
  Pool2 = (struct _LIST_ENTRY *)ExAllocatePool2(64LL, 48LL, 1096972357LL);
  if ( !Pool2 )
    return 3221225626LL;
  Pool2->Flink = a4;
  Pool2->Blink = a2;
  Pool2[1].Flink = a3;
  Irp->Tail.Overlay.CurrentStackLocation->Control |= 1u;
  Irp->Tail.Overlay.DeviceQueueEntry.DeviceListEntry.Flink = Pool2;
  Irp->IoStatus.Information = 0LL;
  Irp->IoStatus.Status = -1073741823;
  IoCsqInsertIrp(Context + 9, Irp, 0LL);
  return 259LL;
}
