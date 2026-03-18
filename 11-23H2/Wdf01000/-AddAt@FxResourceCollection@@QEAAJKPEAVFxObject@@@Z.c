/*
 * XREFs of ?AddAt@FxResourceCollection@@QEAAJKPEAVFxObject@@@Z @ 0x1C004E7B8
 * Callers:
 *     FxCmResourceListInsertDescriptor @ 0x1C0048B50 (FxCmResourceListInsertDescriptor.c)
 *     FxIoResourceListInsertDescriptor @ 0x1C0048C54 (FxIoResourceListInsertDescriptor.c)
 *     FxIoResourceRequirementsListInsertIoResList @ 0x1C0048DC0 (FxIoResourceRequirementsListInsertIoResList.c)
 * Callees:
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z @ 0x1C0002834 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0006060 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0006094 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?AddRef@FxObject@@QEAAKPEAXJPEBD@Z @ 0x1C0006470 (-AddRef@FxObject@@QEAAKPEAXJPEBD@Z.c)
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0006E9C (-FxPoolFree@@YAXPEAX@Z.c)
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C00072C0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     WPP_IFR_SF_qd @ 0x1C0007FCC (WPP_IFR_SF_qd.c)
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0017BA8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?ClearEvtCallbacks@FxObject@@QEAAXXZ @ 0x1C00461D0 (-ClearEvtCallbacks@FxObject@@QEAAXXZ.c)
 */

__int64 __fastcall FxResourceCollection::AddAt(FxResourceCollection *this, int Index, _LIST_ENTRY *Object)
{
  bool v3; // zf
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  int v8; // esi
  void *v9; // rax
  FX_POOL_TRACKER *v10; // rdx
  unsigned __int8 v11; // r8
  FxCollectionInternal *v12; // rdi
  _LIST_ENTRY **p_Blink; // rax
  int v14; // ecx
  _LIST_ENTRY *p_m_ListHead; // r8
  _LIST_ENTRY *Blink; // rax
  const void *_a1; // rax
  __m128i v19; // [rsp+40h] [rbp-28h] BYREF
  void *retaddr; // [rsp+68h] [rbp+0h]
  unsigned __int8 irql; // [rsp+70h] [rbp+8h] BYREF

  v3 = (this->m_AccessFlags & 1) == 0;
  irql = 0;
  if ( v3 )
  {
    _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this);
    WPP_IFR_SF_qd(this->m_Globals, 2u, 0xCu, 0xBu, WPP_FxResourceCollection_cpp_Traceguids, _a1, Index);
    FxVerifierDbgBreakPoint(this->m_Globals);
    return 3221225506LL;
  }
  else
  {
    FxNonPagedObject::Lock(this, &irql, (unsigned __int8)Object);
    m_Globals = this->m_Globals;
    v8 = 0;
    v19.m128i_i64[0] = 0LL;
    v19.m128i_i64[1] = 64LL;
    if ( m_Globals->FxPoolTrackingOn )
      v9 = retaddr;
    else
      v9 = 0LL;
    v10 = (FX_POOL_TRACKER *)FxPoolAllocator(m_Globals, &m_Globals->FxPoolFrameworks, &v19, 0x18uLL, m_Globals->Tag, v9);
    if ( v10 )
    {
      v12 = &this->FxCollectionInternal;
      if ( Index == -1 || Index == v12->m_Count )
      {
        p_m_ListHead = &this->m_ListHead;
LABEL_16:
        Blink = p_m_ListHead->Blink;
        Blink->Flink = (_LIST_ENTRY *)&v10->Link.Blink;
        v10->Link.Blink = p_m_ListHead;
        v10->Pool = (FX_POOL *)Blink;
        p_m_ListHead->Blink = (_LIST_ENTRY *)&v10->Link.Blink;
        v10->Link.Flink = Object;
        FxObject::AddRef(
          (FxObject *)Object,
          &this->FxCollectionInternal,
          185,
          "minkernel\\wdf\\framework\\shared\\inc\\private\\common\\FxCollection.hpp");
        ++v12->m_Count;
        this->m_Changed = 1;
      }
      else
      {
        p_Blink = &this->m_ListHead.Flink[-1].Blink;
        v14 = 0;
        while ( p_Blink != (_LIST_ENTRY **)v12 )
        {
          p_m_ListHead = (_LIST_ENTRY *)(p_Blink + 1);
          if ( v14 == Index )
          {
            if ( p_Blink != (_LIST_ENTRY **)-8LL )
              goto LABEL_16;
            break;
          }
          p_Blink = &p_m_ListHead->Flink[-1].Blink;
          ++v14;
        }
        FxPoolFree(v10);
        v8 = -1073741684;
      }
    }
    else
    {
      v8 = -1073741670;
    }
    FxNonPagedObject::Unlock(this, irql, v11);
    if ( v8 < 0 )
    {
      FxObject::ClearEvtCallbacks((FxObject *)Object);
      ((void (__fastcall *)(_LIST_ENTRY *))Object->Flink[3].Flink)(Object);
    }
    return (unsigned int)v8;
  }
}
