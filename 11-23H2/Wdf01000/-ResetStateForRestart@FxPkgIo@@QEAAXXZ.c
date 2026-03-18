/*
 * XREFs of ?ResetStateForRestart@FxPkgIo@@QEAAXXZ @ 0x1C00629F8
 * Callers:
 *     ?PnpEventPdoRestart@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C006AB50 (-PnpEventPdoRestart@FxPkgPnp@@KA-AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z.c)
 * Callees:
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0006060 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0006094 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C00072C0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 *     ?GetIoQueueListLocked@FxPkgIo@@AEAAXPEAU_SINGLE_LIST_ENTRY@@W4FxIoIteratorList@@@Z @ 0x1C000F97E (-GetIoQueueListLocked@FxPkgIo@@AEAAXPEAU_SINGLE_LIST_ENTRY@@W4FxIoIteratorList@@@Z.c)
 *     WPP_IFR_SF_q @ 0x1C0018194 (WPP_IFR_SF_q.c)
 *     ?SetState@FxIoQueue@@QEAAXW4_FX_IO_QUEUE_SET_STATE@@@Z @ 0x1C00667A8 (-SetState@FxIoQueue@@QEAAXW4_FX_IO_QUEUE_SET_STATE@@@Z.c)
 */

void __fastcall FxPkgIo::ResetStateForRestart(FxPkgIo *this)
{
  const void *_a1; // rax
  unsigned __int8 v3; // r8
  unsigned __int8 v4; // r8
  unsigned __int8 v5; // r8
  _SINGLE_LIST_ENTRY *Next; // r14
  _SINGLE_LIST_ENTRY *v7; // rbx
  _SINGLE_LIST_ENTRY *v8; // rdi
  _SINGLE_LIST_ENTRY *v9; // rbp
  unsigned __int8 v10; // r8
  unsigned __int8 v11; // dl
  unsigned __int8 v12; // r8
  unsigned __int8 irql; // [rsp+50h] [rbp+8h] BYREF
  _SINGLE_LIST_ENTRY queueList; // [rsp+58h] [rbp+10h] BYREF

  irql = 0;
  _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
  WPP_IFR_SF_q(this->m_Globals, 4u, 0xDu, 0x20u, WPP_FxPkgIo_cpp_Traceguids, _a1);
  queueList.Next = 0LL;
  FxNonPagedObject::Lock(this, &irql, v3);
  FxPkgIo::GetIoQueueListLocked(this, &queueList, (void *)1);
  FxNonPagedObject::Unlock(this, irql, v4);
  Next = queueList.Next;
  if ( queueList.Next )
  {
    v7 = queueList.Next->Next;
    while ( 1 )
    {
      v8 = Next - 116;
      LOBYTE(queueList.Next) = 0;
      FxNonPagedObject::Lock((FxNonPagedObject *)&Next[-116], (unsigned __int8 *)&queueList, v5);
      if ( !BYTE2(Next[-99].Next) )
        LODWORD(v8[22].Next) = 1;
      v9 = v7;
      FxIoQueue::SetState((FxIoQueue *)&Next[-116], FxIoQueueClearShutdown|0x1);
      FxNonPagedObject::Unlock((FxNonPagedObject *)&Next[-116], (unsigned __int8)queueList.Next, v10);
      Next->Next = 0LL;
      ((void (__fastcall *)(_SINGLE_LIST_ENTRY *, __int64, __int64, const char *))v8->Next[2].Next)(
        Next - 116,
        1702326128LL,
        1379LL,
        "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxpkgio.cpp");
      if ( !v7 )
        break;
      v7 = v7->Next;
      Next = v9;
    }
  }
  FxNonPagedObject::Lock(this, &irql, v5);
  v11 = irql;
  *(_WORD *)&this->m_PowerStateOn = 1;
  FxNonPagedObject::Unlock(this, v11, v12);
}
