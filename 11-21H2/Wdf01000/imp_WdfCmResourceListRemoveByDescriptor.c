/*
 * XREFs of imp_WdfCmResourceListRemoveByDescriptor @ 0x1C006F710
 * Callers:
 *     <none>
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0004FD4 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0005028 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0005610 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     WPP_IFR_SF_q @ 0x1C00198E8 (WPP_IFR_SF_q.c)
 *     ?RemoveEntry@FxCollectionInternal@@QEAAJPEAVFxCollectionEntry@@@Z @ 0x1C0021CB4 (-RemoveEntry@FxCollectionInternal@@QEAAJPEAVFxCollectionEntry@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0052DF0 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C006CAD4 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

void __fastcall imp_WdfCmResourceListRemoveByDescriptor(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFCMRESLIST__ *List,
        _CM_PARTIAL_RESOURCE_DESCRIPTOR *Descriptor)
{
  unsigned __int8 v5; // r8
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  unsigned __int8 v7; // r8
  FxCmResList *v8; // rcx
  _LIST_ENTRY *Flink; // rdi
  FxCollectionInternal *v10; // rsi
  FX_POOL_TRACKER *p_Blink; // rbx
  ULONG_PTR retaddr; // [rsp+48h] [rbp+0h]
  unsigned __int8 irql; // [rsp+50h] [rbp+8h] BYREF
  FxCmResList *pList; // [rsp+60h] [rbp+18h] BYREF

  pList = 0LL;
  irql = 0;
  FxObjectHandleGetPtr((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], (unsigned __int64)List, 0x1036u, (void **)&pList);
  m_Globals = pList->m_Globals;
  if ( !Descriptor )
    FxVerifierNullBugCheck(pList->m_Globals, retaddr);
  if ( (pList->m_AccessFlags & 2) != 0 )
  {
    FxNonPagedObject::Lock(pList, &irql, v5);
    v8 = pList;
    Flink = 0LL;
    v10 = &pList->FxCollectionInternal;
    p_Blink = (FX_POOL_TRACKER *)&pList->m_ListHead.Flink[-1].Blink;
    if ( p_Blink != (FX_POOL_TRACKER *)&pList->FxCollectionInternal )
    {
      while ( 1 )
      {
        Flink = p_Blink->Link.Flink;
        if ( RtlCompareMemory(&p_Blink->Link.Flink[6].Blink, Descriptor, 0x14uLL) == 20 )
          break;
        Flink = 0LL;
        p_Blink = (FX_POOL_TRACKER *)&p_Blink->Link.Blink[-1].Blink;
        if ( p_Blink == (FX_POOL_TRACKER *)v10 )
          goto LABEL_9;
      }
      pList->m_Changed = 1;
      FxCollectionInternal::RemoveEntry(&pList->FxCollectionInternal, p_Blink);
LABEL_9:
      v8 = pList;
    }
    FxNonPagedObject::Unlock(v8, irql, v7);
    if ( Flink )
      ((void (__fastcall *)(_LIST_ENTRY *))Flink->Flink[3].Flink)(Flink);
  }
  else
  {
    WPP_IFR_SF_q(m_Globals, 2u, 0xCu, 0x11u, WPP_FxResourceAPI_cpp_Traceguids, List);
    FxVerifierDbgBreakPoint(m_Globals);
  }
}
