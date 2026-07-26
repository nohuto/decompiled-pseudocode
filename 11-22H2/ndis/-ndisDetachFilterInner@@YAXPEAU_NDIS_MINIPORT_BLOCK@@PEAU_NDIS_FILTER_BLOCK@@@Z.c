/*
 * XREFs of ?ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C0147F18
 * Callers:
 *     ?ndisDetachFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C010F958 (-ndisDetachFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z.c)
 * Callees:
 *     ?ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x1C0002ED0 (-ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0002F40 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_ @ 0x1C0006690 (WPP_RECORDER_SF_.c)
 *     ?FILTER_SET_FLAG@@YAXPEAU_NDIS_FILTER_BLOCK@@K@Z @ 0x1C0006BD4 (-FILTER_SET_FLAG@@YAXPEAU_NDIS_FILTER_BLOCK@@K@Z.c)
 *     ?FILTER_CLEAR_ALL_STATE_FLAGS@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C0006BE0 (-FILTER_CLEAR_ALL_STATE_FLAGS@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     ?FILTER_CLEAR_FLAG@@YAXPEAU_NDIS_FILTER_BLOCK@@K@Z @ 0x1C0006C24 (-FILTER_CLEAR_FLAG@@YAXPEAU_NDIS_FILTER_BLOCK@@K@Z.c)
 *     ?FILTER_TEST_FLAG@@YAEPEBU_NDIS_FILTER_BLOCK@@K@Z @ 0x1C000A4B0 (-FILTER_TEST_FLAG@@YAEPEBU_NDIS_FILTER_BLOCK@@K@Z.c)
 *     WPP_RECORDER_SF_q @ 0x1C000C0A0 (WPP_RECORDER_SF_q.c)
 *     ?ndisDereferenceFilter@@YAXPEAU_NDIS_FILTER_BLOCK@@W4_NDIS_LWF_REFTAG@@@Z @ 0x1C0015064 (-ndisDereferenceFilter@@YAXPEAU_NDIS_FILTER_BLOCK@@W4_NDIS_LWF_REFTAG@@@Z.c)
 *     ?ndisReferenceFilterByHandle@@YAEPEAU_NDIS_FILTER_BLOCK@@W4_NDIS_LWF_REFTAG@@@Z @ 0x1C00154CC (-ndisReferenceFilterByHandle@@YAEPEAU_NDIS_FILTER_BLOCK@@W4_NDIS_LWF_REFTAG@@@Z.c)
 *     ?ndisFNotifyDetach@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C0015558 (-ndisFNotifyDetach@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     ?ndisFilterAttachCleanUp@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C00157C8 (-ndisFilterAttachCleanUp@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?ndisHandleFilterHandlersChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0019684 (-ndisHandleFilterHandlersChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     PktMonClientComponentUnregister @ 0x1C001C3D8 (PktMonClientComponentUnregister.c)
 *     ?ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x1C001C3FC (-ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     ?ndisSetupWmiNode@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEBU_UNICODE_STRING@@KPEAXPEAPEAUtagWNODE_SINGLE_INSTANCE@@@Z @ 0x1C001C6B0 (-ndisSetupWmiNode@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEBU_UNICODE_STRING@@KPEAXPEAPEAUtagWNODE_SINGLE.c)
 *     ?NDIS_ACQUIRE_FILTER_SPIN_LOCK@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAE@Z @ 0x1C001DF4C (-NDIS_ACQUIRE_FILTER_SPIN_LOCK@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAE@Z.c)
 *     ?ndisReferenceMiniportByHandle@@YAEPEAU_NDIS_MINIPORT_BLOCK@@EW4_NDIS_MP_REFTAG@@@Z @ 0x1C001E900 (-ndisReferenceMiniportByHandle@@YAEPEAU_NDIS_MINIPORT_BLOCK@@EW4_NDIS_MP_REFTAG@@@Z.c)
 *     WPP_RECORDER_SF_qqZZ @ 0x1C00204A8 (WPP_RECORDER_SF_qqZZ.c)
 *     ?ndisCloseRef@@YAEPEAU_REFERENCE_EX@@@Z @ 0x1C0024D14 (-ndisCloseRef@@YAEPEAU_REFERENCE_EX@@@Z.c)
 *     memmove @ 0x1C0038280 (memmove.c)
 *     NdisMSleep @ 0x1C0040C80 (NdisMSleep.c)
 *     McTemplateK0qqq_EtwWriteTransfer @ 0x1C005E37C (McTemplateK0qqq_EtwWriteTransfer.c)
 *     McTemplateK0juqjzzz_EtwWriteTransfer @ 0x1C0063154 (McTemplateK0juqjzzz_EtwWriteTransfer.c)
 *     ?ndisFilterWaitForPnPComplete@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C010FF34 (-ndisFilterWaitForPnPComplete@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     ?ndisFInvokeDetach@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C010FF58 (-ndisFInvokeDetach@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     ?ndisMakeWatchdog@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUNDISWATCHDOG__@@P6AXPEAU1@@Z$1?ndisFreeWatchdog@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@_J$0?0$$T@details@wil@@@details@wil@@@wil@@PEAXK0K_K@Z @ 0x1C0112654 (-ndisMakeWatchdog@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUNDISWATCHDOG__@@.c)
 *     ?ndisFreeWatchdog@@YAXPEAUNDISWATCHDOG__@@@Z @ 0x1C0116B40 (-ndisFreeWatchdog@@YAXPEAUNDISWATCHDOG__@@@Z.c)
 */

void __fastcall ndisDetachFilterInner(struct _NDIS_MINIPORT_BLOCK *a1, struct _NDIS_FILTER_BLOCK *a2)
{
  char v2; // r14
  char v4; // r15
  enum _NDIS_LWF_REFTAG v6; // dl
  _NDIS_BIND_PATHS *BindPaths; // rax
  PVOID v8; // rbp
  char *v9; // rbx
  __int64 v10; // rcx
  NTSTATUS v11; // ebx
  KIRQL v12; // dl
  __int64 v13; // rdx
  __int64 v14; // r8
  struct _NDIS_FILTER_BLOCK *v15; // rcx
  struct _NDIS_FILTER_BLOCK *v16; // rcx
  KIRQL v17; // dl
  __int64 v18; // rdx
  _NDIS_FILTER_BLOCK *v19; // rcx
  _NDIS_FILTER_BLOCK *LowerFilter; // rax
  KIRQL NewIrql; // [rsp+90h] [rbp+18h] BYREF
  PVOID WnodeEventItem; // [rsp+98h] [rbp+20h] BYREF

  v2 = 0;
  v4 = 0;
  NewIrql = 0;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x22u,
      (struct _GUID *)&WPP_e87dde1cc8503e3aa3a546a0453643df_Traceguids,
      a2);
  ndisReferencePackage((struct _PKG_REF *)&ndisPkgs);
  if ( ndisReferenceFilterByHandle(a2, v6) )
  {
    v2 = 1;
    if ( ndisReferenceMiniportByHandle(a1, 0, 0x29u) )
    {
      v4 = 1;
      ndisFNotifyDetach(a2);
      ndisCloseRef(&a2->PnPRef.SpinLock);
      BindPaths = a1->BindPaths;
      WnodeEventItem = 0LL;
      ndisSetupWmiNode(
        a1,
        a2->FilterFriendlyName,
        BindPaths->Paths[0].Length + 4 + a2->FilterDriver->DefaultFilterCharacteristics.UniqueName.Length,
        (__int128 *)&GUID_NDIS_NOTIFY_FILTER_REMOVAL,
        (struct tagWNODE_SINGLE_INSTANCE **)&WnodeEventItem);
      v8 = WnodeEventItem;
      if ( WnodeEventItem )
      {
        v9 = (char *)WnodeEventItem + *((unsigned int *)WnodeEventItem + 14);
        memmove(
          v9,
          a2->FilterDriver->DefaultFilterCharacteristics.UniqueName.Buffer,
          a2->FilterDriver->DefaultFilterCharacteristics.UniqueName.Length);
        memmove(
          &v9[a2->FilterDriver->DefaultFilterCharacteristics.UniqueName.Length + 2],
          a1->BindPaths->Paths[0].Buffer,
          a1->BindPaths->Paths[0].Length);
        v11 = IoWMIWriteEvent(v8);
        if ( v11 < 0 )
        {
          if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              2u,
              1u,
              0x23u,
              (struct _GUID *)&WPP_e87dde1cc8503e3aa3a546a0453643df_Traceguids);
          if ( (byte_1C00F7641 & 1) != 0 )
            McTemplateK0qqq_EtwWriteTransfer(v10, &FilterRemovalIndicationFailed, &a2->InterfaceGuid, v11, 1, 0);
          ExFreePoolWithTag(v8, 0);
        }
      }
      NDIS_ACQUIRE_FILTER_SPIN_LOCK(a2, &NewIrql);
      FILTER_SET_FLAG(a2, 256);
      v12 = NewIrql;
      a2->LockThread = 0LL;
      KeReleaseSpinLock(&a2->Lock, v12);
      a2->State = NdisFilterDetaching;
      if ( (byte_1C00F7643 & 1) != 0 )
        McTemplateK0juqjzzz_EtwWriteTransfer(
          (__int64)&a2->Miniport->InterfaceGuid,
          (__int64)a2->FilterInstanceName.__ptr_.__value_,
          &a2->InterfaceGuid,
          (__int64)&a2->InterfaceGuid,
          6,
          8,
          (__int64)&a2->Miniport->InterfaceGuid,
          a2->Miniport->pAdapterInstanceName->Buffer,
          a2->FilterInstanceName.__ptr_.__value_->Buffer,
          a2->FilterFriendlyName->Buffer);
      ndisFilterWaitForPnPComplete(a2);
      PktMonClientComponentUnregister(&a2->PktMonComp.ListLink.Flink);
      ndisMakeWatchdog(
        (struct NDISWATCHDOG__ **)&WnodeEventItem,
        a2,
        20,
        a2->FilterDriver->DefaultFilterCharacteristics.DetachHandler,
        0x41EB0u,
        0LL);
      ndisFInvokeDetach(a2);
      if ( WnodeEventItem != (PVOID)-1LL )
        ndisFreeWatchdog((struct NDISWATCHDOG__ *)WnodeEventItem);
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qqZZ(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v13,
          v14,
          0x24u,
          (struct _GUID *)&WPP_e87dde1cc8503e3aa3a546a0453643df_Traceguids,
          (char)a1,
          (char)a2,
          &a2->FilterDriver->DefaultFilterCharacteristics.FriendlyName.Length,
          &a1->pAdapterInstanceName->Length);
      while ( a2->StatusIndicationsQueued )
        NdisMSleep(0x3E8u);
      if ( FILTER_TEST_FLAG(a2, 0x8000) )
      {
        LowerFilter = a2->LowerFilter;
        if ( LowerFilter )
        {
          a1->MediaType = LowerFilter->MediaType;
          a1->PhysicalMediumType = a2->LowerFilter->PhysicalMediaType;
        }
        else
        {
          a1->MediaType = a1->MiniportMediaType;
          a1->PhysicalMediumType = a1->MiniportPhysicalMediumType;
        }
      }
      NDIS_ACQUIRE_FILTER_SPIN_LOCK(a2, &NewIrql);
      FILTER_CLEAR_FLAG(a2, 256);
      FILTER_CLEAR_ALL_STATE_FLAGS(v15);
      FILTER_SET_FLAG(v16, 8);
      v17 = NewIrql;
      a2->LockThread = 0LL;
      KeReleaseSpinLock(&a2->Lock, v17);
      a2->State = NdisFilterDetached;
      if ( (byte_1C00F7643 & 1) != 0 )
        McTemplateK0juqjzzz_EtwWriteTransfer(
          (__int64)&a2->Miniport->InterfaceGuid,
          v18,
          &a2->InterfaceGuid,
          (__int64)&a2->InterfaceGuid,
          0,
          9,
          (__int64)&a2->Miniport->InterfaceGuid,
          a2->Miniport->pAdapterInstanceName->Buffer,
          a2->FilterInstanceName.__ptr_.__value_->Buffer,
          a2->FilterFriendlyName->Buffer);
      if ( FILTER_TEST_FLAG(a2, 0x8000) )
        --a1->MediaChangeFilters;
      ndisFilterAttachCleanUp(v19, a1, 1);
      ndisDereferenceMiniport(a1, 0x28u);
    }
  }
  ndisHandleFilterHandlersChange(a1);
  if ( v2 )
  {
    a2->Miniport = 0LL;
    ndisDereferenceFilter(a2, 0);
  }
  if ( v4 )
    ndisDereferenceMiniport(a1, 0x29u);
  ndisDereferencePackage((PVOID *)&ndisPkgs);
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x25u,
      (struct _GUID *)&WPP_e87dde1cc8503e3aa3a546a0453643df_Traceguids,
      a2);
}
