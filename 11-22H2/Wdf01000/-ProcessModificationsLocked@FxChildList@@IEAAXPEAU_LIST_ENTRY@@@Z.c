/*
 * XREFs of ?ProcessModificationsLocked@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C0025E58
 * Callers:
 *     ?Add@FxChildList@@QEAAJPEAU_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER@@PEAU_WDF_CHILD_ADDRESS_DESCRIPTION_HEADER@@PEAK@Z @ 0x1C0023720 (-Add@FxChildList@@QEAAJPEAU_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER@@PEAU_WDF_CHILD_ADDRESS_.c)
 *     ?CreateDevice@FxChildList@@IEAAEPEAUFxDeviceDescriptionEntry@@PEAE@Z @ 0x1C0023ED4 (-CreateDevice@FxChildList@@IEAAEPEAUFxDeviceDescriptionEntry@@PEAE@Z.c)
 *     ?EndScan@FxChildList@@QEAAXPEAK@Z @ 0x1C00243F4 (-EndScan@FxChildList@@QEAAXPEAK@Z.c)
 *     ?InvokeReportedMissingCallback@FxChildList@@QEAAXXZ @ 0x1C0024EA0 (-InvokeReportedMissingCallback@FxChildList@@QEAAXXZ.c)
 *     ?NotifyDeviceRemove@FxChildList@@QEAAXPEAJ@Z @ 0x1C002525C (-NotifyDeviceRemove@FxChildList@@QEAAXPEAJ@Z.c)
 *     ?NotifyDeviceSurpriseRemove@FxChildList@@QEAAXXZ @ 0x1C0025424 (-NotifyDeviceSurpriseRemove@FxChildList@@QEAAXXZ.c)
 *     ?ProcessBusRelations@FxChildList@@QEAAJPEAPEAU_DEVICE_RELATIONS@@@Z @ 0x1C00255CC (-ProcessBusRelations@FxChildList@@QEAAJPEAPEAU_DEVICE_RELATIONS@@@Z.c)
 *     ?ReenumerateEntry@FxChildList@@QEAAXPEAUFxDeviceDescriptionEntry@@@Z @ 0x1C00261C4 (-ReenumerateEntry@FxChildList@@QEAAXPEAUFxDeviceDescriptionEntry@@@Z.c)
 *     ?UpdateAllAsPresent@FxChildList@@QEAAXPEAK@Z @ 0x1C00264EC (-UpdateAllAsPresent@FxChildList@@QEAAXPEAK@Z.c)
 *     ?UpdateAsMissing@FxChildList@@QEAAJPEAU_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER@@@Z @ 0x1C00265BC (-UpdateAsMissing@FxChildList@@QEAAJPEAU_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER@@@Z.c)
 *     ?UpdateDeviceAsMissing@FxChildList@@QEAAJPEAVFxDevice@@@Z @ 0x1C00266A4 (-UpdateDeviceAsMissing@FxChildList@@QEAAJPEAVFxDevice@@@Z.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C00072C0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     WPP_IFR_SF_q @ 0x1C0018194 (WPP_IFR_SF_q.c)
 *     WPP_IFR_SF_qq @ 0x1C001828C (WPP_IFR_SF_qq.c)
 *     WPP_IFR_SF_ql @ 0x1C00190DC (WPP_IFR_SF_ql.c)
 *     ?GetSafePhysicalDevice@FxDevice@@QEAAPEAU_DEVICE_OBJECT@@XZ @ 0x1C00207E8 (-GetSafePhysicalDevice@FxDevice@@QEAAPEAU_DEVICE_OBJECT@@XZ.c)
 *     ?CloneEntryLocked@FxChildList@@IEAAEPEAU_LIST_ENTRY@@PEAUFxDeviceDescriptionEntry@@E@Z @ 0x1C0023C7C (-CloneEntryLocked@FxChildList@@IEAAEPEAU_LIST_ENTRY@@PEAUFxDeviceDescriptionEntry@@E@Z.c)
 *     WPP_IFR_SF_qdd @ 0x1C0026A80 (WPP_IFR_SF_qdd.c)
 */

void __fastcall FxChildList::ProcessModificationsLocked(FxChildList *this, _LIST_ENTRY *FreeListHead)
{
  unsigned int *p_m_ScanCount; // r15
  const void *_a1; // rax
  __int16 v5; // r8
  _FX_DRIVER_GLOBALS *v6; // r10
  _LIST_ENTRY *p_m_ModificationListHead; // r14
  _LIST_ENTRY *Flink; // rax
  _LIST_ENTRY *v9; // rcx
  char v10; // r13
  _LIST_ENTRY *v11; // rdi
  _LIST_ENTRY *v12; // rax
  _LIST_ENTRY **p_Blink; // rdi
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  int *v15; // rsi
  _FX_DRIVER_GLOBALS *v16; // rcx
  const void *v17; // rax
  __int64 v18; // rdx
  _FX_DRIVER_GLOBALS *v19; // r10
  _FX_DRIVER_GLOBALS *v20; // rcx
  _LIST_ENTRY *v21; // rax
  _LIST_ENTRY *v22; // rcx
  _LIST_ENTRY *v23; // rax
  _FX_DRIVER_GLOBALS *v24; // rcx
  _LIST_ENTRY *Blink; // rcx
  _DEVICE_OBJECT *SafePhysicalDevice; // rax
  const void *ObjectHandleUnchecked; // rax
  _FX_DRIVER_GLOBALS *v28; // r10
  const void *v29; // rax
  int _a2; // r8d
  _FX_DRIVER_GLOBALS *v31; // r10

  p_m_ScanCount = &this->m_ScanCount;
  if ( this->m_State == ListUnlocked && !*p_m_ScanCount )
  {
    if ( this->m_Globals->FxVerboseOn )
    {
      _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this);
      WPP_IFR_SF_q(v6, 5u, 0xCu, v5 + 24, WPP_FxChildList_cpp_Traceguids, _a1);
    }
    p_m_ModificationListHead = &this->m_ModificationListHead;
    Flink = this->m_ModificationListHead.Flink;
    if ( Flink != &this->m_ModificationListHead )
    {
      do
      {
        v9 = Flink->Flink;
        if ( LODWORD(Flink[1].Flink) == 3 )
          LODWORD(Flink[1].Flink) = 2;
        Flink = v9;
      }
      while ( v9 != p_m_ModificationListHead );
    }
    v10 = 0;
    while ( 1 )
    {
      while ( 1 )
      {
        v11 = p_m_ModificationListHead->Flink;
        if ( p_m_ModificationListHead->Flink == p_m_ModificationListHead )
        {
          if ( v10 )
          {
            if ( *p_m_ScanCount || (SafePhysicalDevice = FxDevice::GetSafePhysicalDevice(this->m_Device)) == 0LL )
            {
              this->m_InvalidationNeeded = 1;
            }
            else
            {
              this->m_InvalidationNeeded = 0;
              IoInvalidateDeviceRelations(SafePhysicalDevice, BusRelations);
            }
          }
          if ( this->m_Globals->FxVerboseOn )
          {
            ObjectHandleUnchecked = (const void *)FxObject::GetObjectHandleUnchecked(this);
            WPP_IFR_SF_q(v28, 5u, 0xCu, 0x1Fu, WPP_FxChildList_cpp_Traceguids, ObjectHandleUnchecked);
          }
          return;
        }
        if ( v11->Blink != p_m_ModificationListHead )
          goto LABEL_37;
        v12 = v11->Flink;
        if ( v11->Flink->Blink != v11 )
          goto LABEL_37;
        p_m_ModificationListHead->Flink = v12;
        v12->Blink = p_m_ModificationListHead;
        v11->Blink = v11;
        v11->Flink = v11;
        p_Blink = &v11[-3].Blink;
        m_Globals = this->m_Globals;
        v15 = (int *)(p_Blink + 7);
        if ( m_Globals->FxVerboseOn )
          WPP_IFR_SF_ql(m_Globals, 5u, 0xCu, 0x1Au, WPP_FxChildList_cpp_Traceguids, p_Blink, *v15);
        if ( *v15 != 1 )
          break;
        *((_DWORD *)p_Blink + 4) = 1;
        v24 = this->m_Globals;
        if ( v24->FxVerboseOn )
          WPP_IFR_SF_q(v24, 5u, 0xCu, 0x1Eu, WPP_FxChildList_cpp_Traceguids, p_Blink);
        Blink = this->m_DescriptionListHead.Blink;
        if ( Blink->Flink != &this->m_DescriptionListHead )
LABEL_37:
          __fastfail(3u);
        *p_Blink = &this->m_DescriptionListHead;
        p_Blink[1] = Blink;
        Blink->Flink = (_LIST_ENTRY *)p_Blink;
        this->m_DescriptionListHead.Blink = (_LIST_ENTRY *)p_Blink;
        *v15 = 0;
LABEL_36:
        v10 = 1;
      }
      if ( *v15 == 2 )
      {
        *v15 = 0;
        v16 = this->m_Globals;
        if ( v16->FxVerboseOn )
          WPP_IFR_SF_ql(v16, 5u, 0xCu, 0x1Bu, WPP_FxChildList_cpp_Traceguids, p_Blink, *((_DWORD *)p_Blink + 4));
        if ( *((_DWORD *)p_Blink + 4) == 1 )
        {
          v20 = this->m_Globals;
          if ( v20->FxVerboseOn )
            WPP_IFR_SF_q(v20, 5u, 0xCu, 0x1Cu, WPP_FxChildList_cpp_Traceguids, p_Blink);
          v21 = *p_Blink;
          if ( (_LIST_ENTRY **)(*p_Blink)->Blink != p_Blink )
            goto LABEL_37;
          v22 = p_Blink[1];
          if ( (_LIST_ENTRY **)v22->Flink != p_Blink )
            goto LABEL_37;
          v22->Flink = v21;
          v21->Blink = v22;
          v23 = FreeListHead->Blink;
          if ( v23->Flink != FreeListHead )
            goto LABEL_37;
          *p_Blink = FreeListHead;
          p_Blink[1] = v23;
          v23->Flink = (_LIST_ENTRY *)p_Blink;
          FreeListHead->Blink = (_LIST_ENTRY *)p_Blink;
        }
        else if ( *((_DWORD *)p_Blink + 4) == 2 )
        {
          if ( this->m_Globals->FxVerboseOn )
          {
            v17 = (const void *)FxObject::GetObjectHandleUnchecked((FxObject *)p_Blink[8]);
            WPP_IFR_SF_qq(v19, 5u, 0xCu, 0x1Du, WPP_FxChildList_cpp_Traceguids, v17, *(const void **)(v18 + 144));
          }
          *((_DWORD *)p_Blink + 4) = 4;
          goto LABEL_36;
        }
      }
      else if ( *v15 == 4 )
      {
        v10 = FxChildList::CloneEntryLocked(this, FreeListHead, (FxDeviceDescriptionEntry *)p_Blink, 0);
      }
    }
  }
  if ( this->m_Globals->FxVerboseOn )
  {
    v29 = (const void *)FxObject::GetObjectHandleUnchecked(this);
    WPP_IFR_SF_qdd(v31, 5u, 0xCu, 0x18u, WPP_FxChildList_cpp_Traceguids, v29, _a2, *p_m_ScanCount);
  }
}
