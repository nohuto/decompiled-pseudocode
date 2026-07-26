/*
 * XREFs of ?ndisIfDeregisterInterfaceEx@@YAXKW4CallRunMode@@@Z @ 0x1C00169C8
 * Callers:
 *     ?ndisIfCreateOrUpdateInterface@@YAXAEBU_GUID@@@Z @ 0x1C00B29D4 (-ndisIfCreateOrUpdateInterface@@YAXAEBU_GUID@@@Z.c)
 *     NdisIfDeregisterInterface @ 0x1C01049B0 (NdisIfDeregisterInterface.c)
 * Callees:
 *     ?ndisIfReferenceMiniport@@YAPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_IF_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z @ 0x1C0010230 (-ndisIfReferenceMiniport@@YAPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_IF_BLOCK@@W4_NDIS_MPIF_REFTAG@@@.c)
 *     ?ndisIfDereferenceMiniport@@YAXPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG@@@Z @ 0x1C0011D50 (-ndisIfDereferenceMiniport@@YAXPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MPIF_REFTAG.c)
 *     ?IFBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_BLOCK@@W4_NDIS_IF_REFTAG@@@Z @ 0x1C0022020 (-IFBLOCK_DECREMENT_REF@@YAXPEAU_NDIS_IF_BLOCK@@W4_NDIS_IF_REFTAG@@@Z.c)
 *     ?ndisIfFindInterface@@YAPEAU_NDIS_IF_BLOCK@@K@Z @ 0x1C0022C88 (-ndisIfFindInterface@@YAPEAU_NDIS_IF_BLOCK@@K@Z.c)
 *     WPP_RECORDER_SF_d @ 0x1C002B684 (WPP_RECORDER_SF_d.c)
 *     ?NdisMRemoveMiniportInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z @ 0x1C0058570 (-NdisMRemoveMiniportInternal@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MINIPORT_EVENT@@@Z.c)
 *     ?ndisWaitForKernelObject@@YAXPEAX@Z @ 0x1C01010E0 (-ndisWaitForKernelObject@@YAXPEAX@Z.c)
 *     ?ndisPcwNotifyIfBlockRemoval@@YAXPEAU_NDIS_IF_BLOCK@@@Z @ 0x1C0105314 (-ndisPcwNotifyIfBlockRemoval@@YAXPEAU_NDIS_IF_BLOCK@@@Z.c)
 *     ?ndisNsiNotifyClientInterfaceChange@@YAXPEAU_NDIS_IF_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_SINGLE_PARAM_DESC@@W4_NDIS_NSI_OBJECT_INDEX@@@Z @ 0x1C010A91C (-ndisNsiNotifyClientInterfaceChange@@YAXPEAU_NDIS_IF_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_SINGLE.c)
 *     ?ndisMSetMiniportReadyForBinding@@YAXPEAU_NDIS_MINIPORT_BLOCK@@_NW4NDIS_DO_NOT_BIND_REASON@@W4CallRunMode@@@Z @ 0x1C010BB6C (-ndisMSetMiniportReadyForBinding@@YAXPEAU_NDIS_MINIPORT_BLOCK@@_NW4NDIS_DO_NOT_BIND_REASON@@W4Ca.c)
 */

void __fastcall ndisIfDeregisterInterfaceEx(unsigned int a1, int a2)
{
  int v2; // ebp
  struct _NDIS_IF_BLOCK *Interface; // rax
  KIRQL v5; // r10
  struct _NDIS_IF_BLOCK *v6; // rdi
  int v7; // edx
  struct _NDIS_MINIPORT_BLOCK *v8; // rax
  struct _NDIS_MINIPORT_BLOCK *v9; // rbx
  KIRQL v10; // bl
  int v11; // r9d
  struct _NDIS_MINIPORT_BLOCK *v12; // rdx
  struct _KEVENT Event; // [rsp+30h] [rbp-38h] BYREF

  memset(&Event, 0, sizeof(Event));
  v2 = a2;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_d(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      a2,
      22,
      14,
      (struct _GUID *)&WPP_16eb98c3925833bf94e97087bc83531a_Traceguids,
      a1);
  }
  KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  Interface = ndisIfFindInterface(a1);
  v6 = Interface;
  if ( Interface->AlreadyDeregistered )
    v6 = 0LL;
  else
    Interface->AlreadyDeregistered = 1;
  KeReleaseSpinLock(&ndisIfListLock, v5);
  if ( v6 )
  {
    v8 = ndisIfReferenceMiniport(v6, 0x14u);
    v9 = v8;
    if ( v8 )
    {
      ndisMSetMiniportReadyForBinding(v8, 0, Reason_MiniportInterfaceDeregister, RunSynchronous);
      NdisMRemoveMiniportInternal(v9, NdisMEventErr_UninstalledByUsermode);
      ndisIfDereferenceMiniport(v6, v12, 0x14u);
    }
    ndisPcwNotifyIfBlockRemoval(v6);
    ndisNsiNotifyClientInterfaceChange(v6, 2LL, 0LL);
    if ( !v2 )
    {
      KeInitializeEvent(&Event, NotificationEvent, 0);
      v6->AsyncEvent = &Event;
    }
    v10 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
    IFBLOCK_DECREMENT_REF(v6, IFREF_NUMBER_OF_TAGS|IFREF_UPDATECHARS|0xE0);
    KeReleaseSpinLock(&ndisIfListLock, v10);
    if ( !v2 )
      ndisWaitForKernelObject(&Event);
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v11 = 16;
      LOBYTE(v7) = 4;
LABEL_14:
      WPP_RECORDER_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v7,
        22,
        v11,
        (struct _GUID *)&WPP_16eb98c3925833bf94e97087bc83531a_Traceguids,
        a1);
    }
  }
  else if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
  {
    v11 = 15;
    LOBYTE(v7) = 3;
    goto LABEL_14;
  }
}
