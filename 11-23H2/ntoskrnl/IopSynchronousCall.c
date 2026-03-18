/*
 * XREFs of IopSynchronousCall @ 0x1407683A4
 * Callers:
 *     PnpSendIrp @ 0x140322798 (PnpSendIrp.c)
 *     PnpIrpDeviceEnumerated @ 0x140368F88 (PnpIrpDeviceEnumerated.c)
 *     IopQueryDeviceResources @ 0x14078FC24 (IopQueryDeviceResources.c)
 *     PpIrpQueryResourceRequirements @ 0x14079052C (PpIrpQueryResourceRequirements.c)
 *     IopQueryDeviceState @ 0x140793450 (IopQueryDeviceState.c)
 *     PnpIrpQueryID @ 0x1407981CC (PnpIrpQueryID.c)
 *     PnpQueryDeviceText @ 0x1407983A8 (PnpQueryDeviceText.c)
 *     PpIrpQueryCapabilities @ 0x14079B938 (PpIrpQueryCapabilities.c)
 *     PnpQueryBusInformation @ 0x1407DB914 (PnpQueryBusInformation.c)
 *     IopQueryLegacyBusInformation @ 0x1407E2568 (IopQueryLegacyBusInformation.c)
 *     IopQueryResourceHandlerInterface @ 0x140818594 (IopQueryResourceHandlerInterface.c)
 *     IopRemoveDevice @ 0x140869968 (IopRemoveDevice.c)
 *     IopQueryDockRemovalInterface @ 0x14096CF64 (IopQueryDockRemovalInterface.c)
 *     IopQueryReconfiguration @ 0x14096D064 (IopQueryReconfiguration.c)
 * Callees:
 *     IoAllocateIrp @ 0x14022E610 (IoAllocateIrp.c)
 *     IopQueueThreadIrp @ 0x14022ED60 (IopQueueThreadIrp.c)
 *     IofCallDriver @ 0x14022EEF0 (IofCallDriver.c)
 *     ObfDereferenceObjectWithTag @ 0x14022F5B0 (ObfDereferenceObjectWithTag.c)
 *     KeWaitForSingleObject @ 0x140243CE0 (KeWaitForSingleObject.c)
 *     KeInitializeEvent @ 0x1402AF870 (KeInitializeEvent.c)
 *     IoGetAttachedDeviceReferenceWithTag @ 0x140302C00 (IoGetAttachedDeviceReferenceWithTag.c)
 *     IovUtilWatermarkIrp @ 0x140302C64 (IovUtilWatermarkIrp.c)
 *     IoGetLowerDeviceObjectWithTag @ 0x1403663DC (IoGetLowerDeviceObjectWithTag.c)
 */

__int64 __fastcall IopSynchronousCall(_QWORD *a1, __int64 a2, NTSTATUS a3, ULONG_PTR a4, _QWORD *a5)
{
  struct _DEVICE_OBJECT *AttachedDeviceReferenceWithTag; // rax
  struct _DEVICE_OBJECT *v9; // rbx
  PIRP Irp; // rax
  IRP *v11; // rdi
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  unsigned int v16; // edi
  struct _DEVICE_OBJECT *LowerDeviceObjectWithTag; // rdi
  __int128 v19; // [rsp+30h] [rbp-38h] BYREF
  struct _KEVENT Event; // [rsp+40h] [rbp-28h] BYREF

  memset(&Event, 0, sizeof(Event));
  v19 = 0LL;
  AttachedDeviceReferenceWithTag = (struct _DEVICE_OBJECT *)IoGetAttachedDeviceReferenceWithTag(a1, 0x69706E50u);
  v9 = AttachedDeviceReferenceWithTag;
  if ( (AttachedDeviceReferenceWithTag->Flags & 0x80u) != 0 )
  {
    LowerDeviceObjectWithTag = (struct _DEVICE_OBJECT *)IoGetLowerDeviceObjectWithTag(
                                                          (__int64)AttachedDeviceReferenceWithTag,
                                                          0x69706E50u);
    if ( !LowerDeviceObjectWithTag )
    {
      v16 = -1073741436;
      goto LABEL_7;
    }
    ObfDereferenceObjectWithTag(v9, 0x69706E50u);
    v9 = LowerDeviceObjectWithTag;
  }
  Irp = IoAllocateIrp(v9->StackSize, 0);
  v11 = Irp;
  if ( Irp )
  {
    IovUtilWatermarkIrp((__int64)Irp, 1LL);
    LODWORD(v19) = a3;
    v11->IoStatus.Status = a3;
    *((_QWORD *)&v19 + 1) = a4;
    v11->IoStatus.Information = a4;
    KeInitializeEvent(&Event, SynchronizationEvent, 0);
    v11->UserIosb = (PIO_STATUS_BLOCK)&v19;
    v11->UserEvent = &Event;
    v11->Tail.Overlay.Thread = KeGetCurrentThread();
    IopQueueThreadIrp((__int64)v11);
    CurrentStackLocation = v11->Tail.Overlay.CurrentStackLocation;
    v13 = *(_OWORD *)(a2 + 16);
    *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)a2;
    v14 = *(_OWORD *)(a2 + 32);
    *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = v13;
    v15 = *(_OWORD *)(a2 + 48);
    *(_OWORD *)(&CurrentStackLocation[-1].Parameters.SetQuota + 6) = v14;
    *(_QWORD *)&v14 = *(_QWORD *)(a2 + 64);
    *(_OWORD *)&CurrentStackLocation[-1].FileObject = v15;
    CurrentStackLocation[-1].Context = (PVOID)v14;
    v16 = IofCallDriver(v9, v11);
    if ( v16 == 259 )
    {
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      v16 = v19;
    }
    if ( a5 )
      *a5 = *((_QWORD *)&v19 + 1);
  }
  else
  {
    v16 = -1073741670;
  }
LABEL_7:
  ObfDereferenceObjectWithTag(v9, 0x69706E50u);
  return v16;
}
