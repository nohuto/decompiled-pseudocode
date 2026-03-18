/*
 * XREFs of ?AllocateRequestMemory@FxDevice@@QEAAPEAXPEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C0002374
 * Callers:
 *     ?_CreateForPackage@FxRequest@@SAJPEAVFxDevice@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_IRP@@PEAPEAV1@@Z @ 0x1C0007230 (-_CreateForPackage@FxRequest@@SAJPEAVFxDevice@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_IRP@@PEAPEAV1@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0036C00 (memset.c)
 *     ?FxPoolInsertNonPagedAllocateTracker@@YAXPEAUFX_POOL@@PEAUFX_POOL_TRACKER@@_KKPEAX@Z @ 0x1C0069688 (-FxPoolInsertNonPagedAllocateTracker@@YAXPEAUFX_POOL@@PEAUFX_POOL_TRACKER@@_KKPEAX@Z.c)
 */

FX_POOL **__fastcall FxDevice::AllocateRequestMemory(FxDevice *this, _WDF_OBJECT_ATTRIBUTES *RequestAttributes)
{
  FxPkgPnp *m_PkgPnp; // rax
  _FX_DRIVER_GLOBALS *m_Globals; // rbp
  _NPAGED_LOOKASIDE_LIST *p_m_RequestLookasideList; // r14
  FX_POOL_TRACKER *v7; // rbx
  FX_POOL_TRACKER *v8; // r14
  FX_POOL **p_Pool; // rbx
  const _WDF_OBJECT_CONTEXT_TYPE_INFO *ContextTypeInfo; // rax
  unsigned __int64 ContextSizeOverride; // r8
  void *Caller; // [rsp+38h] [rbp+0h]

  m_PkgPnp = this->m_PkgPnp;
  m_Globals = this->m_Globals;
  if ( !m_PkgPnp || m_PkgPnp->m_Type != 4354 || !BYTE3(m_PkgPnp[1].m_DisposeSingleEntry.Next) )
  {
    p_m_RequestLookasideList = &this->m_RequestLookasideList;
    ++this->m_RequestLookasideList.L.TotalAllocates;
    v7 = (FX_POOL_TRACKER *)ExpInterlockedPopEntrySList(&this->m_RequestLookasideList.L.ListHead);
    if ( v7 )
      goto LABEL_4;
    ++this->m_RequestLookasideList.L.AllocateMisses;
    goto LABEL_19;
  }
  p_m_RequestLookasideList = &this->m_RequestLookasideList;
  v7 = (FX_POOL_TRACKER *)ExpInterlockedPopEntrySList(&this->m_RequestLookasideList.L.ListHead);
  if ( !v7 )
LABEL_19:
    v7 = (FX_POOL_TRACKER *)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))p_m_RequestLookasideList->L.AllocateEx)(
                              (unsigned int)p_m_RequestLookasideList->L.Type,
                              p_m_RequestLookasideList->L.Size,
                              p_m_RequestLookasideList->L.Tag);
LABEL_4:
  if ( !v7 )
    return 0LL;
  if ( m_Globals->FxPoolTrackingOn )
  {
    v8 = v7 + 1;
    FxPoolInsertNonPagedAllocateTracker(
      &m_Globals->FxPoolFrameworks,
      v7,
      this->m_RequestLookasideListElementSize,
      m_Globals->Tag,
      Caller);
  }
  else
  {
    v8 = v7;
  }
  v8->Link.Flink = &v7->Link;
  p_Pool = &v8->Pool;
  v8->Link.Blink = &m_Globals->Linkage;
  if ( !RequestAttributes )
    RequestAttributes = &this->m_RequestAttributes;
  if ( m_Globals->FxVerifierHandle )
  {
    *(_OWORD *)p_Pool = 0LL;
    *(_OWORD *)&v8->Size = 0LL;
    *(_OWORD *)&v8->CallersAddress = 0LL;
    LODWORD(v8->CallersAddress) = 1146058822;
    p_Pool = (FX_POOL **)&v8[1];
  }
  *((_OWORD *)p_Pool + 23) = 0LL;
  *((_OWORD *)p_Pool + 24) = 0LL;
  *((_OWORD *)p_Pool + 25) = 0LL;
  p_Pool[46] = (FX_POOL *)p_Pool;
  if ( RequestAttributes )
  {
    ContextTypeInfo = RequestAttributes->ContextTypeInfo;
    if ( ContextTypeInfo )
    {
      ContextSizeOverride = RequestAttributes->ContextSizeOverride;
      if ( !ContextSizeOverride )
        ContextSizeOverride = ContextTypeInfo->ContextSize;
      memset(p_Pool + 52, 0, (ContextSizeOverride + 7) & 0xFFFFFFFFFFFFFFF8uLL);
      ContextTypeInfo = RequestAttributes->ContextTypeInfo;
    }
    p_Pool[50] = (FX_POOL *)ContextTypeInfo;
  }
  return p_Pool;
}
