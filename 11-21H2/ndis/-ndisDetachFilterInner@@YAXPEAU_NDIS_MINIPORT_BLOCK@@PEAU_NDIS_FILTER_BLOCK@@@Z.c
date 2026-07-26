/*
 * XREFs of ?ndisDetachFilterInner@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C013B55C
 * Callers:
 *     ?ndisDetachFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C01044D8 (-ndisDetachFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z.c)
 * Callees:
 *     ?ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0005F20 (-ndisDereferenceMiniport@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_MP_REFTAG@@@Z.c)
 *     ?ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x1C0006130 (-ndisReferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     WPP_RECORDER_SF_ @ 0x1C00088CC (WPP_RECORDER_SF_.c)
 *     ?FILTER_CLEAR_ALL_STATE_FLAGS@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C0008DD0 (-FILTER_CLEAR_ALL_STATE_FLAGS@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     ?FILTER_SET_FLAG@@YAXPEAU_NDIS_FILTER_BLOCK@@K@Z @ 0x1C0008DDC (-FILTER_SET_FLAG@@YAXPEAU_NDIS_FILTER_BLOCK@@K@Z.c)
 *     ?FILTER_CLEAR_FLAG@@YAXPEAU_NDIS_FILTER_BLOCK@@K@Z @ 0x1C0008E14 (-FILTER_CLEAR_FLAG@@YAXPEAU_NDIS_FILTER_BLOCK@@K@Z.c)
 *     ?FILTER_TEST_FLAG@@YAEPEBU_NDIS_FILTER_BLOCK@@K@Z @ 0x1C000AFD0 (-FILTER_TEST_FLAG@@YAEPEBU_NDIS_FILTER_BLOCK@@K@Z.c)
 *     WPP_RECORDER_SF_q @ 0x1C000C990 (WPP_RECORDER_SF_q.c)
 *     NdisMSleep @ 0x1C0015AB0 (NdisMSleep.c)
 *     ?ndisReferenceFilterByHandle@@YAEPEAU_NDIS_FILTER_BLOCK@@W4_NDIS_LWF_REFTAG@@@Z @ 0x1C0015CBC (-ndisReferenceFilterByHandle@@YAEPEAU_NDIS_FILTER_BLOCK@@W4_NDIS_LWF_REFTAG@@@Z.c)
 *     ?ndisFNotifyDetach@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C0015D48 (-ndisFNotifyDetach@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     ?ndisFilterAttachCleanUp@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C0015FB8 (-ndisFilterAttachCleanUp@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ?ndisDereferenceFilter@@YAXPEAU_NDIS_FILTER_BLOCK@@W4_NDIS_LWF_REFTAG@@@Z @ 0x1C00160EC (-ndisDereferenceFilter@@YAXPEAU_NDIS_FILTER_BLOCK@@W4_NDIS_LWF_REFTAG@@@Z.c)
 *     ?ndisHandleFilterHandlersChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0019540 (-ndisHandleFilterHandlersChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisSetupWmiNode@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEBU_UNICODE_STRING@@KPEAXPEAPEAUtagWNODE_SINGLE_INSTANCE@@@Z @ 0x1C001B880 (-ndisSetupWmiNode@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEBU_UNICODE_STRING@@KPEAXPEAPEAUtagWNODE_SINGLE.c)
 *     ?NDIS_ACQUIRE_FILTER_SPIN_LOCK@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAE@Z @ 0x1C001C71C (-NDIS_ACQUIRE_FILTER_SPIN_LOCK@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAE@Z.c)
 *     ?ndisReferenceMiniportByHandle@@YAEPEAU_NDIS_MINIPORT_BLOCK@@EW4_NDIS_MP_REFTAG@@@Z @ 0x1C001D894 (-ndisReferenceMiniportByHandle@@YAEPEAU_NDIS_MINIPORT_BLOCK@@EW4_NDIS_MP_REFTAG@@@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAUNDISWATCHDOG__@@P6AXPEAU1@@Z$1?ndisFreeWatchdog@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@_J$0?0$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x1C001E014 (--1-$unique_storage@U-$resource_policy@PEAUNDISWATCHDOG__@@P6AXPEAU1@@Z$1-ndisFreeWatchdog@@YAX0.c)
 *     WPP_RECORDER_SF_qqZZ @ 0x1C001F740 (WPP_RECORDER_SF_qqZZ.c)
 *     ?ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z @ 0x1C0020D34 (-ndisDereferencePackage@@YAXPEAU_PKG_REF@@@Z.c)
 *     PktMonClientComponentUnregister @ 0x1C0020E48 (PktMonClientComponentUnregister.c)
 *     ?ndisCloseRef@@YAEPEAU_REFERENCE_EX@@@Z @ 0x1C0025D64 (-ndisCloseRef@@YAEPEAU_REFERENCE_EX@@@Z.c)
 *     memmove @ 0x1C0036080 (memmove.c)
 *     McTemplateK0qqq_EtwWriteTransfer @ 0x1C005912C (McTemplateK0qqq_EtwWriteTransfer.c)
 *     ?NDIS_RELEASE_FILTER_SPIN_LOCK@@YAXPEAU_NDIS_FILTER_BLOCK@@E@Z @ 0x1C005DC80 (-NDIS_RELEASE_FILTER_SPIN_LOCK@@YAXPEAU_NDIS_FILTER_BLOCK@@E@Z.c)
 *     McTemplateK0juqjzzz_EtwWriteTransfer @ 0x1C005DD84 (McTemplateK0juqjzzz_EtwWriteTransfer.c)
 *     ?ndisFilterWaitForPnPComplete@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C0104614 (-ndisFilterWaitForPnPComplete@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     ?ndisFInvokeDetach@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C01049C8 (-ndisFInvokeDetach@@YAXPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     ?ndisMakeWatchdog@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUNDISWATCHDOG__@@P6AXPEAU1@@Z$1?ndisFreeWatchdog@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@_J$0?0$$T@details@wil@@@details@wil@@@wil@@PEAXK0K_K@Z @ 0x1C0104BD0 (-ndisMakeWatchdog@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAUNDISWATCHDOG__@@.c)
 */

void __fastcall ndisDetachFilterInner(struct _NDIS_MINIPORT_BLOCK *a1, _NDIS_FILTER_BLOCK *this)
{
  char v2; // r14
  char v4; // r15
  enum _NDIS_LWF_REFTAG v6; // dl
  _NDIS_BIND_PATHS *BindPaths; // rax
  PVOID v8; // rbp
  char *v9; // rbx
  __int64 v10; // rcx
  NTSTATUS v11; // ebx
  struct _NDIS_FILTER_BLOCK *v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // r8
  _NDIS_FILTER_BLOCK *LowerFilter; // rax
  struct _NDIS_FILTER_BLOCK *v16; // rcx
  struct _NDIS_FILTER_BLOCK *v17; // rcx
  struct _NDIS_FILTER_BLOCK *v18; // rcx
  __int64 v19; // rdx
  _NDIS_FILTER_BLOCK *v20; // rcx
  unsigned __int8 v21; // [rsp+90h] [rbp+18h] BYREF
  PVOID WnodeEventItem; // [rsp+98h] [rbp+20h] BYREF

  v2 = 0;
  v4 = 0;
  v21 = 0;
  if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x22u,
      (struct _GUID *)&WPP_e87dde1cc8503e3aa3a546a0453643df_Traceguids,
      this);
  ndisReferencePackage((struct _PKG_REF *)&ndisPkgs);
  if ( ndisReferenceFilterByHandle(this, v6) )
  {
    v2 = 1;
    if ( ndisReferenceMiniportByHandle(a1, 0, 0x29u) )
    {
      v4 = 1;
      ndisFNotifyDetach(this);
      ndisCloseRef(&this->PnPRef.SpinLock);
      BindPaths = a1->BindPaths;
      WnodeEventItem = 0LL;
      ndisSetupWmiNode(
        a1,
        this->FilterFriendlyName,
        BindPaths->Paths[0].Length + 4 + this->FilterDriver->DefaultFilterCharacteristics.UniqueName.Length,
        (__int128 *)&GUID_NDIS_NOTIFY_FILTER_REMOVAL,
        (struct tagWNODE_SINGLE_INSTANCE **)&WnodeEventItem);
      v8 = WnodeEventItem;
      if ( WnodeEventItem )
      {
        v9 = (char *)WnodeEventItem + *((unsigned int *)WnodeEventItem + 14);
        memmove(
          v9,
          this->FilterDriver->DefaultFilterCharacteristics.UniqueName.Buffer,
          this->FilterDriver->DefaultFilterCharacteristics.UniqueName.Length);
        memmove(
          &v9[this->FilterDriver->DefaultFilterCharacteristics.UniqueName.Length + 2],
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
          if ( (byte_1C00EE581 & 1) != 0 )
            McTemplateK0qqq_EtwWriteTransfer(v10, &FilterRemovalIndicationFailed, &this->InterfaceGuid, v11, 1, 0);
          ExFreePoolWithTag(v8, 0);
        }
      }
      NDIS_ACQUIRE_FILTER_SPIN_LOCK(this, &v21);
      FILTER_SET_FLAG(this, 256);
      NDIS_RELEASE_FILTER_SPIN_LOCK(v12, v21);
      this->State = NdisFilterDetaching;
      if ( (byte_1C00EE583 & 1) != 0 )
        McTemplateK0juqjzzz_EtwWriteTransfer(
          (__int64)&this->Miniport->InterfaceGuid,
          (__int64)this->FilterInstanceName.__ptr_.__value_,
          &this->InterfaceGuid,
          (__int64)&this->InterfaceGuid,
          6,
          8,
          (__int64)&this->Miniport->InterfaceGuid,
          this->Miniport->pAdapterInstanceName->Buffer,
          this->FilterInstanceName.__ptr_.__value_->Buffer,
          this->FilterFriendlyName->Buffer);
      ndisFilterWaitForPnPComplete(this);
      PktMonClientComponentUnregister((__int64 *)&this->PktMonComp);
      ndisMakeWatchdog(
        (struct NDISWATCHDOG__ **)&WnodeEventItem,
        this,
        20,
        this->FilterDriver->DefaultFilterCharacteristics.DetachHandler,
        0x41EB0u,
        0LL);
      ndisFInvokeDetach(this);
      wil::details::unique_storage<wil::details::resource_policy<NDISWATCHDOG__ *,void (*)(NDISWATCHDOG__ *),&void ndisFreeWatchdog(NDISWATCHDOG__ *),wistd::integral_constant<unsigned __int64,1>,NDISWATCHDOG__ *,__int64,-1,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<NDISWATCHDOG__ *,void (*)(NDISWATCHDOG__ *),&void ndisFreeWatchdog(NDISWATCHDOG__ *),wistd::integral_constant<unsigned __int64,1>,NDISWATCHDOG__ *,__int64,-1,std::nullptr_t>>((struct NDISWATCHDOG__ **)&WnodeEventItem);
      if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qqZZ(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v13,
          v14,
          0x24u,
          (struct _GUID *)&WPP_e87dde1cc8503e3aa3a546a0453643df_Traceguids,
          (char)a1,
          (char)this,
          &this->FilterDriver->DefaultFilterCharacteristics.FriendlyName.Length,
          &a1->pAdapterInstanceName->Length);
      while ( this->StatusIndicationsQueued )
        NdisMSleep(0x3E8u);
      if ( FILTER_TEST_FLAG(this, 0x8000) )
      {
        LowerFilter = this->LowerFilter;
        if ( LowerFilter )
        {
          a1->MediaType = LowerFilter->MediaType;
          a1->PhysicalMediumType = this->LowerFilter->PhysicalMediaType;
        }
        else
        {
          a1->MediaType = a1->MiniportMediaType;
          a1->PhysicalMediumType = a1->MiniportPhysicalMediumType;
        }
      }
      NDIS_ACQUIRE_FILTER_SPIN_LOCK(this, &v21);
      FILTER_CLEAR_FLAG(this, 256);
      FILTER_CLEAR_ALL_STATE_FLAGS(v16);
      FILTER_SET_FLAG(v17, 8);
      NDIS_RELEASE_FILTER_SPIN_LOCK(v18, v21);
      this->State = NdisFilterDetached;
      if ( (byte_1C00EE583 & 1) != 0 )
        McTemplateK0juqjzzz_EtwWriteTransfer(
          (__int64)&this->Miniport->InterfaceGuid,
          v19,
          &this->InterfaceGuid,
          (__int64)&this->InterfaceGuid,
          0,
          9,
          (__int64)&this->Miniport->InterfaceGuid,
          this->Miniport->pAdapterInstanceName->Buffer,
          this->FilterInstanceName.__ptr_.__value_->Buffer,
          this->FilterFriendlyName->Buffer);
      if ( FILTER_TEST_FLAG(this, 0x8000) )
        --a1->MediaChangeFilters;
      ndisFilterAttachCleanUp(v20, a1, 1);
      ndisDereferenceMiniport(a1, 0x28u);
    }
  }
  ndisHandleFilterHandlersChange(a1);
  if ( v2 )
  {
    this->Miniport = 0LL;
    ndisDereferenceFilter(this, 0);
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
      this);
}
