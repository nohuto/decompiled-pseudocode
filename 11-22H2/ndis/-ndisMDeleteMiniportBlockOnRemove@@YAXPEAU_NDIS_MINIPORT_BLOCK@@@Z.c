/*
 * XREFs of ?ndisMDeleteMiniportBlockOnRemove@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C006B0FC
 * Callers:
 *     NdisLWMUninitializeNetworkInterface @ 0x1C005EFA0 (NdisLWMUninitializeNetworkInterface.c)
 *     ?ndisPnPIrpRemoveDevice@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z @ 0x1C0135C20 (-ndisPnPIrpRemoveDevice@@YAJPEAU_DEVICE_OBJECT@@PEAU_NDIS_MINIPORT_BLOCK@@PEAU_IRP@@PEAE3@Z.c)
 *     ?ndisWdfDeviceObjectCleanup@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C01361A4 (-ndisWdfDeviceObjectCleanup@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z @ 0x1C014BB50 (-ndisAddDevice@@_Y2PAGENPNP@@AJPEAUNDIS_MINIPORT_CREATION_CONFIG@@PEAPEAX@Z.c)
 * Callees:
 *     NdisFreeRefCount @ 0x1C0015290 (NdisFreeRefCount.c)
 *     _guard_dispatch_icall_nop @ 0x1C00381E0 (_guard_dispatch_icall_nop.c)
 *     ??1_NDIS_MINIPORT_BLOCK@@QEAA@XZ @ 0x1C0069A5C (--1_NDIS_MINIPORT_BLOCK@@QEAA@XZ.c)
 *     ?ndisAoAcFree@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C012A798 (-ndisAoAcFree@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMDeRegisterPDCTaskClient@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0136358 (-ndisMDeRegisterPDCTaskClient@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisPcwNotifyMiniportRemoval@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0136D94 (-ndisPcwNotifyMiniportRemoval@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisFreeEventLog@@YAXPEAUNDIS_EVENT_LOG_HANDLE__@@@Z @ 0x1C01406C0 (-ndisFreeEventLog@@YAXPEAUNDIS_EVENT_LOG_HANDLE__@@@Z.c)
 */

void __fastcall ndisMDeleteMiniportBlockOnRemove(struct _NDIS_MINIPORT_BLOCK *a1)
{
  void *BusInterface; // rcx
  _DEVICE_RESET_INTERFACE_STANDARD *ReenumerateSelfInterface; // rcx
  wchar_t *Buffer; // rcx
  unsigned __int16 *NumaDistances; // rcx
  _UNICODE_STRING *pAdapterInstanceName; // rcx
  _UNICODE_STRING *pModifiedInstanceName; // rcx
  wchar_t *PnPInstanceId; // rcx
  void *ConfigurationHandle; // rcx
  void *SecurityDescriptor; // rcx
  _NDIS_BIND_PATHS *BindPaths; // rcx
  _CM_RESOURCE_LIST *AllocatedResources; // rcx
  _SINGLE_LIST_ENTRY *Next; // rcx
  _NDIS_GUID *pNdisGuidMap; // rcx
  void *FakeMac; // rcx
  _NDIS_RECEIVE_QUEUE_BLOCK *DefaultReceiveQueue; // rcx
  NDIS_REFCOUNT_HANDLE__ *NsiRefCountTracker; // rcx
  NDIS_EVENT_LOG_HANDLE__ *PnpEventLog; // rcx
  struct _VF_NDIS_DISPATCH_TABLE *v19; // rax
  struct _NDIS_PD_BLOCK *PDBlock; // rax

  if ( a1->AoAc )
    ndisAoAcFree(a1);
  ndisMDeRegisterPDCTaskClient(a1);
  BusInterface = a1->BusInterface;
  if ( BusInterface )
  {
    ExFreePoolWithTag(BusInterface, 0);
    a1->BusInterface = 0LL;
  }
  ReenumerateSelfInterface = a1->ReenumerateSelfInterface;
  if ( ReenumerateSelfInterface )
  {
    ReenumerateSelfInterface->InterfaceDereference(ReenumerateSelfInterface->Context);
    ExFreePoolWithTag(a1->ReenumerateSelfInterface, 0);
    a1->ReenumerateSelfInterface = 0LL;
  }
  Buffer = a1->FdoName.Buffer;
  if ( Buffer )
  {
    ExFreePoolWithTag(Buffer, 0);
    a1->FdoName.Buffer = 0LL;
    a1->FdoName.Length = 0;
  }
  NumaDistances = a1->NumaDistances;
  if ( NumaDistances )
  {
    ExFreePoolWithTag(NumaDistances, 0);
    a1->NumaDistances = 0LL;
  }
  ndisPcwNotifyMiniportRemoval(a1);
  pAdapterInstanceName = a1->pAdapterInstanceName;
  if ( pAdapterInstanceName )
  {
    ExFreePoolWithTag(pAdapterInstanceName, 0);
    a1->pAdapterInstanceName = 0LL;
  }
  pModifiedInstanceName = a1->pModifiedInstanceName;
  if ( pModifiedInstanceName )
  {
    ExFreePoolWithTag(pModifiedInstanceName, 0);
    a1->pModifiedInstanceName = 0LL;
  }
  PnPInstanceId = a1->PnPInstanceId;
  if ( PnPInstanceId )
  {
    ExFreePoolWithTag(PnPInstanceId, 0);
    a1->PnPInstanceId = 0LL;
  }
  ConfigurationHandle = a1->ConfigurationHandle;
  if ( ConfigurationHandle )
  {
    ExFreePoolWithTag(ConfigurationHandle, 0);
    a1->ConfigurationHandle = 0LL;
  }
  SecurityDescriptor = a1->SecurityDescriptor;
  if ( SecurityDescriptor )
  {
    ExFreePoolWithTag(SecurityDescriptor, 0);
    a1->SecurityDescriptor = 0LL;
  }
  BindPaths = a1->BindPaths;
  if ( BindPaths )
  {
    ExFreePoolWithTag(BindPaths, 0);
    a1->BindPaths = 0LL;
  }
  AllocatedResources = a1->AllocatedResources;
  if ( AllocatedResources )
  {
    ExFreePoolWithTag(AllocatedResources, 0);
    a1->AllocatedResources = 0LL;
  }
  while ( 1 )
  {
    Next = a1->WorkQueue[6].Next;
    if ( !Next )
      break;
    a1->WorkQueue[6] = (_SINGLE_LIST_ENTRY)Next->Next;
    ExFreePoolWithTag(Next, 0);
  }
  pNdisGuidMap = a1->pNdisGuidMap;
  if ( pNdisGuidMap )
  {
    ExFreePoolWithTag(pNdisGuidMap, 0);
    a1->pNdisGuidMap = 0LL;
  }
  FakeMac = a1->FakeMac;
  if ( FakeMac )
  {
    ExFreePoolWithTag(FakeMac, 0);
    a1->FakeMac = 0LL;
  }
  DefaultReceiveQueue = a1->DefaultReceiveQueue;
  if ( DefaultReceiveQueue )
  {
    ExFreePoolWithTag(DefaultReceiveQueue, 0);
    a1->DefaultReceiveQueue = 0LL;
  }
  NdisFreeRefCount(a1->RefCountTracker);
  NsiRefCountTracker = a1->NsiRefCountTracker;
  a1->RefCountTracker = 0LL;
  NdisFreeRefCount(NsiRefCountTracker);
  PnpEventLog = a1->PnpEventLog;
  a1->NsiRefCountTracker = 0LL;
  ndisFreeEventLog(PnpEventLog);
  v19 = ndisVerifierNdisDispatch;
  a1->PnpEventLog = 0LL;
  if ( v19 && a1->VerifierContext )
  {
    (*((void (**)(void))v19 + 2))();
    a1->VerifierContext = 0LL;
  }
  PDBlock = a1->PDBlock;
  if ( PDBlock )
  {
    *(_QWORD *)PDBlock = 0LL;
    ExFreePoolWithTag(a1->PDBlock, 0);
    a1->PDBlock = 0LL;
  }
  _NDIS_MINIPORT_BLOCK::~_NDIS_MINIPORT_BLOCK(a1);
  if ( (a1->Flags & 0x100) != 0 )
    ExFreePoolWithTag(a1, 0);
}
