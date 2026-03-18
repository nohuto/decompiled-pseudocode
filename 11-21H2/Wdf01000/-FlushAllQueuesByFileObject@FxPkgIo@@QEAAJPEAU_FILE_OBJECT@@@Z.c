/*
 * XREFs of ?FlushAllQueuesByFileObject@FxPkgIo@@QEAAJPEAU_FILE_OBJECT@@@Z @ 0x1C00074E0
 * Callers:
 *     ?OnCleanup@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z @ 0x1C0004D00 (-OnCleanup@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z.c)
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0004FD4 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0005028 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?GetNextIoQueueLocked@FxPkgIo@@AEAAPEAVFxIoQueue@@PEAUFxIoQueueNode@@PEAX@Z @ 0x1C000513C (-GetNextIoQueueLocked@FxPkgIo@@AEAAPEAVFxIoQueue@@PEAUFxIoQueueNode@@PEAX@Z.c)
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C0009550 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     ?CancelForQueue@FxIoQueue@@QEAAXPEAVFxRequest@@E@Z @ 0x1C000E238 (-CancelForQueue@FxIoQueue@@QEAAXPEAVFxRequest@@E@Z.c)
 *     ?RemoveIrpFromListEntry@FxIrpQueue@@AEAAXPEAVFxIrp@@@Z @ 0x1C0011584 (-RemoveIrpFromListEntry@FxIrpQueue@@AEAAXPEAVFxIrp@@@Z.c)
 *     ?PeekNextIrpFromQueue@FxIrpQueue@@AEAAPEAU_IRP@@PEAU2@PEAX@Z @ 0x1C00133E0 (-PeekNextIrpFromQueue@FxIrpQueue@@AEAAPEAU_IRP@@PEAU2@PEAX@Z.c)
 *     ?PurgeForwardProgressIrps@FxIoQueue@@AEAAXPEAU_FILE_OBJECT@@@Z @ 0x1C0013580 (-PurgeForwardProgressIrps@FxIoQueue@@AEAAXPEAU_FILE_OBJECT@@@Z.c)
 *     ?AddRef@FxObject@@QEAAKPEAXJPEBD@Z @ 0x1C00196F8 (-AddRef@FxObject@@QEAAKPEAXJPEBD@Z.c)
 *     WPP_IFR_SF_ @ 0x1C0028B14 (WPP_IFR_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0052DF0 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x1C006D914 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C006DC28 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z @ 0x1C006E6F0 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z.c)
 */

__int64 __fastcall FxPkgIo::FlushAllQueuesByFileObject(FxPkgIo *this, _FILE_OBJECT *FileObject)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  unsigned __int8 v5; // r8
  unsigned __int8 v6; // di
  void *v7; // r8
  _LIST_ENTRY *p_m_IoQueueListHead; // r15
  _LIST_ENTRY *Flink; // rcx
  _LIST_ENTRY **NextIoQueueLocked; // rbx
  unsigned __int8 v11; // r8
  unsigned __int8 v12; // r8
  bool v13; // zf
  _QWORD **v14; // r14
  _QWORD *v15; // rcx
  _IRP *i; // r9
  unsigned __int8 v17; // r8
  unsigned __int8 v18; // dl
  unsigned __int8 v19; // r8
  _LIST_ENTRY *v20; // rdi
  _LIST_ENTRY *Blink; // rcx
  unsigned int RefCount; // edx
  _LIST_ENTRY *v23; // rax
  FxIrpQueue *v25; // rcx
  __int64 v26; // r9
  _IRP *m_Irp; // r10
  _QWORD *v28; // rdi
  __int64 v29; // rax
  FxRequest *v30; // rdi
  void (__fastcall *v31)(FxRequest *, __int64, __int64, const char *); // rax
  unsigned __int8 v32; // r8
  FxVerifierLock *v33; // rcx
  FxVerifierLock *v34; // rcx
  FxVerifierLock *v35; // rcx
  FxTagTracker *v36; // rcx
  FxVerifierLock *v37; // rcx
  FxIoQueueNode flushBookmark; // [rsp+30h] [rbp-20h] BYREF
  unsigned __int8 irql; // [rsp+90h] [rbp+40h] BYREF
  unsigned __int8 PreviousIrql; // [rsp+A0h] [rbp+50h] BYREF
  FxIrp Irp; // [rsp+A8h] [rbp+58h] BYREF

  m_Globals = this->m_Globals;
  flushBookmark.m_ListEntry.Blink = (_LIST_ENTRY *)&flushBookmark;
  flushBookmark.m_Type = FxIoQueueNodeTypeBookmark;
  flushBookmark.m_ListEntry.Flink = (_LIST_ENTRY *)&flushBookmark;
  irql = 0;
  if ( KeGetCurrentIrql() )
  {
    WPP_IFR_SF_(m_Globals, 2u, 0xDu, 0x21u, WPP_FxPkgIo_cpp_Traceguids);
    FxVerifierDbgBreakPoint(m_Globals);
  }
  else
  {
    if ( SLOBYTE(this->m_ObjectFlags) < 0 && (v33 = (FxVerifierLock *)this[-1].m_DispatchTable[27]) != 0LL )
    {
      FxVerifierLock::Lock(v33, &irql, v5);
      v6 = irql;
    }
    else
    {
      v6 = KeAcquireSpinLockRaiseToDpc(&this->m_NPLock.m_Lock);
      irql = v6;
    }
    p_m_IoQueueListHead = &this->m_IoQueueListHead;
    Flink = this->m_IoQueueListHead.Flink;
    if ( Flink->Blink != &this->m_IoQueueListHead )
      goto LABEL_50;
    flushBookmark.m_ListEntry.Flink = this->m_IoQueueListHead.Flink;
    flushBookmark.m_ListEntry.Blink = &this->m_IoQueueListHead;
    Flink->Blink = (_LIST_ENTRY *)&flushBookmark;
    p_m_IoQueueListHead->Flink = (_LIST_ENTRY *)&flushBookmark;
    NextIoQueueLocked = FxPkgIo::GetNextIoQueueLocked(this, &flushBookmark, v7);
    FxNonPagedObject::Unlock(this, v6, v11);
    if ( NextIoQueueLocked )
    {
      while ( 1 )
      {
        v13 = *((_BYTE *)NextIoQueueLocked + 136) == 0;
        PreviousIrql = 0;
        if ( !v13 )
          FxIoQueue::PurgeForwardProgressIrps((FxIoQueue *)NextIoQueueLocked, FileObject);
        if ( *((char *)NextIoQueueLocked + 24) < 0 && (v34 = (FxVerifierLock *)*(NextIoQueueLocked - 5)) != 0LL )
          FxVerifierLock::Lock(v34, &PreviousIrql, v12);
        else
          PreviousIrql = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)NextIoQueueLocked + 14);
        v14 = (_QWORD **)(NextIoQueueLocked + 24);
        while ( 1 )
        {
          v15 = *v14;
          for ( i = 0LL; v15 != v14; i = 0LL )
          {
            i = (_IRP *)(v15 - 21);
            if ( !FileObject )
              break;
            if ( i->Tail.Overlay.CurrentStackLocation->FileObject == FileObject )
              break;
            v15 = (_QWORD *)*v15;
          }
          Irp.m_Irp = i;
          if ( !i )
            break;
          while ( 1 )
          {
            v25 = (FxIrpQueue *)(NextIoQueueLocked + 24);
            if ( _InterlockedExchange64((volatile __int64 *)&i->CancelRoutine, 0LL) )
              break;
            Irp.m_Irp = FxIrpQueue::PeekNextIrpFromQueue(v25, Irp.m_Irp, FileObject);
            i = Irp.m_Irp;
            if ( !Irp.m_Irp )
              goto LABEL_13;
          }
          FxIrpQueue::RemoveIrpFromListEntry(v25, &Irp);
          m_Irp = Irp.m_Irp;
          v28 = Irp.m_Irp->Tail.Overlay.DriverContext[3];
          if ( *(_DWORD *)v28 == 1 )
            v28[1] = 0LL;
          m_Irp->Tail.Overlay.DriverContext[3] = 0LL;
          if ( !v26 )
            break;
          v29 = *(v28 - 15);
          v30 = (FxRequest *)(v28 - 15);
          v31 = *(void (__fastcall **)(FxRequest *, __int64, __int64, const char *))(v29 + 16);
          v30->m_IrpQueue = 0LL;
          v31(v30, 1969583441LL, 2102LL, "minkernel\\wdf\\framework\\shared\\core\\fxrequest.cpp");
          FxObject::AddRef(
            v30,
            (void *)0x75657551,
            4330,
            "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxioqueue.cpp");
          FxIoQueue::CancelForQueue((FxIoQueue *)NextIoQueueLocked, v30, PreviousIrql);
          FxNonPagedObject::Lock((FxNonPagedObject *)NextIoQueueLocked, &PreviousIrql, v32);
        }
LABEL_13:
        FxIoQueue::DispatchEvents((FxIoQueue *)NextIoQueueLocked, PreviousIrql, 0LL);
        ((void (__fastcall *)(_LIST_ENTRY **, __int64, __int64, const char *))(*NextIoQueueLocked)[1].Flink)(
          NextIoQueueLocked,
          1937075302LL,
          1441LL,
          "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxpkgio.cpp");
        if ( SLOBYTE(this->m_ObjectFlags) < 0 && (v35 = (FxVerifierLock *)this[-1].m_DispatchTable[27]) != 0LL )
        {
          FxVerifierLock::Lock(v35, &irql, v17);
          v18 = irql;
        }
        else
        {
          v18 = KeAcquireSpinLockRaiseToDpc(&this->m_NPLock.m_Lock);
          irql = v18;
        }
        v20 = flushBookmark.m_ListEntry.Flink;
        Blink = flushBookmark.m_ListEntry.Blink;
        NextIoQueueLocked = 0LL;
        if ( (FxIoQueueNode *)flushBookmark.m_ListEntry.Flink->Blink != &flushBookmark
          || flushBookmark.m_ListEntry.Blink->Flink != (_LIST_ENTRY *)&flushBookmark )
        {
          break;
        }
        flushBookmark.m_ListEntry.Blink->Flink = flushBookmark.m_ListEntry.Flink;
        v20->Blink = Blink;
        flushBookmark.m_ListEntry.Blink = (_LIST_ENTRY *)&flushBookmark;
        flushBookmark.m_ListEntry.Flink = (_LIST_ENTRY *)&flushBookmark;
        if ( v20 != p_m_IoQueueListHead )
        {
          while ( LODWORD(v20[1].Flink) != 1 )
          {
            v20 = v20->Flink;
            if ( v20 == p_m_IoQueueListHead )
              goto LABEL_22;
          }
          NextIoQueueLocked = &v20[-57].Blink;
          RefCount = _InterlockedIncrement((volatile signed __int32 *)&v20[-56].Flink + 1);
          if ( SLOBYTE(v20[-55].Flink) < 0 )
          {
            v36 = (FxTagTracker *)v20[-60].Blink;
            if ( v36 )
              FxTagTracker::UpdateTagHistory(
                v36,
                (void *)0x73756C66,
                1686,
                "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxpkgio.cpp",
                TagAddRef,
                RefCount);
          }
          v23 = v20->Flink;
          if ( v20->Flink->Blink != v20 )
            break;
          v18 = irql;
          flushBookmark.m_ListEntry.Flink = v20->Flink;
          flushBookmark.m_ListEntry.Blink = v20;
          v23->Blink = (_LIST_ENTRY *)&flushBookmark;
          v20->Flink = (_LIST_ENTRY *)&flushBookmark;
        }
LABEL_22:
        if ( SLOBYTE(this->m_ObjectFlags) < 0 && (v37 = (FxVerifierLock *)this[-1].m_DispatchTable[27]) != 0LL )
          FxVerifierLock::Unlock(v37, v18, v19);
        else
          KeReleaseSpinLock(&this->m_NPLock.m_Lock, v18);
        if ( !NextIoQueueLocked )
          return 0LL;
      }
LABEL_50:
      __fastfail(3u);
    }
  }
  return 0LL;
}
