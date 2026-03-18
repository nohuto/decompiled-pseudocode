/*
 * XREFs of ?ProcessDestroy@FxObject@@AEAAXXZ @ 0x1C00053A0
 * Callers:
 *     ?Release@FxObject@@UEAAKPEAXJPEBD@Z @ 0x1C0006410 (-Release@FxObject@@UEAAKPEAXJPEBD@Z.c)
 *     ?DeferredDisposeWorkItem@FxObject@@AEAAXXZ @ 0x1C0047694 (-DeferredDisposeWorkItem@FxObject@@AEAAXXZ.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0006E9C (-FxPoolFree@@YAXPEAX@Z.c)
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C00072C0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 *     ??_GFxTagTracker@@QEAAPEAXI@Z @ 0x1C0045FBC (--_GFxTagTracker@@QEAAPEAXI@Z.c)
 *     ?CheckForAbandondedTags@FxTagTracker@@QEAAXXZ @ 0x1C00478C4 (-CheckForAbandondedTags@FxTagTracker@@QEAAXXZ.c)
 */

void __fastcall FxObject::ProcessDestroy(FxObject *this)
{
  unsigned __int16 m_ObjectFlags; // ax
  FxTagTracker *m_Lock; // rbp
  FxObjectDebugLeakDetection *m_ObjectSize; // rdx
  void *ObjectHandleUnchecked; // r14
  _QWORD *i; // rsi
  void (__fastcall *v7)(void *); // rax
  void (__fastcall *v8)(void *); // rax
  _QWORD *v9; // rcx
  _QWORD *v10; // rsi

  m_ObjectFlags = this->m_ObjectFlags;
  if ( (m_ObjectFlags & 0x80u) != 0 )
  {
    m_Lock = (FxTagTracker *)this[-1].m_SpinLock.m_Lock;
    if ( m_Lock )
    {
      FxTagTracker::CheckForAbandondedTags((FxTagTracker *)this[-1].m_SpinLock.m_Lock);
      m_ObjectFlags = this->m_ObjectFlags;
    }
  }
  else
  {
    m_Lock = 0LL;
  }
  m_ObjectSize = (FxObjectDebugLeakDetection *)this->m_ObjectSize;
  if ( (_WORD)m_ObjectSize && (m_ObjectFlags & 8) != 0 )
  {
    ObjectHandleUnchecked = FxObject::GetObjectHandleUnchecked(this);
    for ( i = (FxObject_vtbl **)((char *)&this->__vftable + (unsigned int)m_ObjectSize); i; i = (_QWORD *)i[1] )
    {
      v7 = (void (__fastcall *)(void *))i[2];
      if ( v7 )
      {
        v7(ObjectHandleUnchecked);
        i[2] = 0LL;
      }
      v8 = (void (__fastcall *)(void *))i[3];
      if ( v8 )
      {
        v8(ObjectHandleUnchecked);
        i[3] = 0LL;
      }
    }
    LOBYTE(m_ObjectSize) = 1;
    if ( this->m_ObjectSize )
    {
      v9 = (FxObject_vtbl **)((char *)&this->__vftable + this->m_ObjectSize);
      if ( v9 )
      {
        do
        {
          v10 = (_QWORD *)v9[1];
          if ( !(_BYTE)m_ObjectSize )
            FxPoolFree(v9);
          LOBYTE(m_ObjectSize) = 0;
          v9 = v10;
        }
        while ( v10 );
      }
    }
  }
  if ( SLOBYTE(this->m_ObjectFlags) < 0 )
  {
    if ( BYTE4(this[-1].m_ChildEntry.Blink) )
    {
      _InterlockedDecrement(&this->m_Globals->FxVerifyLeakDetection->ObjectCnt);
      if ( this->m_Type == 4098
        && _InterlockedExchangeAdd(&this->m_Globals->FxVerifyLeakDetection->DeviceCnt, 0xFFFFFFFF) != 1 )
      {
        m_ObjectSize = this->m_Globals->FxVerifyLeakDetection;
        _InterlockedExchangeAdd(&m_ObjectSize->LimitScaled, -m_ObjectSize->Limit);
      }
    }
  }
  if ( m_Lock )
  {
    this[-1].m_SpinLock.m_Lock = 0LL;
    FxTagTracker::`scalar deleting destructor'(m_Lock, (unsigned int)m_ObjectSize);
  }
  ((void (__fastcall *)(FxObject *, FxObjectDebugLeakDetection *))this->SelfDestruct)(this, m_ObjectSize);
}
