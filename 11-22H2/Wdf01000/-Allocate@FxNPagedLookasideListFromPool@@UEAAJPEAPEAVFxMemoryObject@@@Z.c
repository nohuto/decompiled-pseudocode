/*
 * XREFs of ?Allocate@FxNPagedLookasideListFromPool@@UEAAJPEAPEAVFxMemoryObject@@@Z @ 0x1C000E130
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectAndHandleHeaderInit@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAU_WDF_OBJECT_ATTRIBUTES@@W4FxObjectType@@@Z @ 0x1C00027F4 (-FxObjectAndHandleHeaderInit@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAU_WDF_OBJECT_ATTRIBUTES@@W4F.c)
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 *     FxAllocateFromNPagedLookasideList @ 0x1C000C8B4 (FxAllocateFromNPagedLookasideList.c)
 *     ??0FxMemoryBufferFromPoolLookaside@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxLookasideList@@_KPEAX@Z @ 0x1C000E54E (--0FxMemoryBufferFromPoolLookaside@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxLookasideList@@_KPEAX@Z.c)
 *     ?InitObjectAlloc@FxLookasideList@@IEAAPEAXPEAX@Z @ 0x1C000E636 (-InitObjectAlloc@FxLookasideList@@IEAAPEAXPEAX@Z.c)
 */

__int64 __fastcall FxNPagedLookasideListFromPool::Allocate(
        FxNPagedLookasideListFromPool *this,
        FxMemoryObject **PPMemory)
{
  PSLIST_ENTRY v4; // rax
  FxMemoryObject *v5; // rdi
  FxMemoryBufferFromLookaside *inited; // rbp
  unsigned __int64 v8; // rdx
  PSLIST_ENTRY v9; // r14
  FxMemoryBufferFromPoolLookaside *v10; // rax
  FxMemoryObject *v11; // rax

  v4 = FxAllocateFromNPagedLookasideList(&this->m_ObjectLookaside, (unsigned __int64)PPMemory);
  v5 = 0LL;
  if ( !v4 )
    return 3221225626LL;
  inited = (FxMemoryBufferFromLookaside *)FxLookasideList::InitObjectAlloc(this, v4);
  v9 = FxAllocateFromNPagedLookasideList(&this->m_PoolLookaside, v8);
  if ( !v9 )
  {
    this->Reclaim(this, inited);
    return 3221225626LL;
  }
  v10 = (FxMemoryBufferFromPoolLookaside *)FxObjectAndHandleHeaderInit(
                                             this->m_Globals,
                                             inited,
                                             0x90u,
                                             &this->m_MemoryAttributes,
                                             FxObjectTypeExternal);
  if ( v10 )
  {
    FxMemoryBufferFromPoolLookaside::FxMemoryBufferFromPoolLookaside(v10, this->m_Globals, this, this->m_BufferSize, v9);
    v5 = v11;
  }
  *PPMemory = v5;
  return 0LL;
}
