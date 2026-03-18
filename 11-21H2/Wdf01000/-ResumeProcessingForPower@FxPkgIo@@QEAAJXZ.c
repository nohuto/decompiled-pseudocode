/*
 * XREFs of ?ResumeProcessingForPower@FxPkgIo@@QEAAJXZ @ 0x1C0018E80
 * Callers:
 *     ?PowerStartSelfManagedIo@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C000D9A0 (-PowerStartSelfManagedIo@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerStartSelfManagedIoNP@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C000EFA0 (-PowerStartSelfManagedIoNP@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?PowerD0StartingStartSelfManagedIo@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C0031190 (-PowerD0StartingStartSelfManagedIo@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0002928 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0004FD4 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0005028 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C0009550 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     ?GetIoQueueListLocked@FxPkgIo@@AEAAXPEAU_SINGLE_LIST_ENTRY@@W4FxIoIteratorList@@@Z @ 0x1C0019308 (-GetIoQueueListLocked@FxPkgIo@@AEAAXPEAU_SINGLE_LIST_ENTRY@@W4FxIoIteratorList@@@Z.c)
 *     WPP_IFR_SF_q @ 0x1C00198E8 (WPP_IFR_SF_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall FxPkgIo::ResumeProcessingForPower(FxPkgIo *this)
{
  const void *_a1; // rax
  unsigned __int8 v3; // r8
  unsigned __int8 v4; // dl
  unsigned __int8 v5; // r8
  unsigned __int8 v6; // r8
  _SINGLE_LIST_ENTRY *Next; // rbx
  _SINGLE_LIST_ENTRY *v8; // rsi
  bool v9; // zf
  _SINGLE_LIST_ENTRY *v10; // rdi
  _SINGLE_LIST_ENTRY *v11; // rsi
  _SINGLE_LIST_ENTRY *v12; // rdi
  unsigned __int8 v14; // r8
  unsigned __int16 v15; // r9
  FxIoQueue *v16; // rcx
  unsigned __int8 v17; // dl
  unsigned __int16 v18; // r9
  unsigned __int8 PreviousIrql; // [rsp+60h] [rbp+28h] BYREF
  unsigned __int8 irql; // [rsp+68h] [rbp+30h] BYREF
  unsigned __int8 v21; // [rsp+70h] [rbp+38h] BYREF
  _SINGLE_LIST_ENTRY queueList; // [rsp+78h] [rbp+40h] BYREF

  irql = 0;
  _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
  WPP_IFR_SF_q(this->m_Globals, 4u, 0xDu, 0x1Fu, WPP_FxPkgIo_cpp_Traceguids, _a1);
  queueList.Next = 0LL;
  FxNonPagedObject::Lock(this, &irql, v3);
  FxPkgIo::GetIoQueueListLocked(this, &queueList, FxIoQueueIteratorListPowerOn);
  v4 = irql;
  *(_WORD *)&this->m_PowerStateOn = 1;
  FxNonPagedObject::Unlock(this, v4, v5);
  Next = queueList.Next;
  v8 = queueList.Next;
  v9 = queueList.Next == 0LL;
  if ( !queueList.Next )
    goto LABEL_5;
  do
  {
    v10 = v8 - 116;
    PreviousIrql = 0;
    if ( BYTE2(v8[-99].Next) )
    {
      FxNonPagedObject::Lock((FxNonPagedObject *)&v8[-116], &PreviousIrql, v6);
      v16 = (FxIoQueue *)&v8[-116];
      v17 = PreviousIrql;
      if ( LODWORD(v10[22].Next) == 1 )
      {
        FxNonPagedObject::Unlock(v16, PreviousIrql, v14);
      }
      else
      {
        LODWORD(v10[22].Next) = 10;
        FxIoQueue::DispatchEvents(v16, v17, 0LL, v15);
      }
    }
    v8 = v8->Next;
  }
  while ( v8 );
  while ( 1 )
  {
    v9 = Next == 0LL;
LABEL_5:
    v11 = Next;
    if ( !v9 )
    {
      Next = Next->Next;
      queueList.Next = Next;
    }
    if ( !v11 )
      break;
    v12 = v11 - 116;
    v21 = 0;
    if ( BYTE2(v11[-99].Next) )
    {
      FxNonPagedObject::Lock((FxNonPagedObject *)&v11[-116], &v21, v6);
      if ( SLODWORD(v12[28].Next) > 0 )
      {
        BYTE4(v12[46].Next) = 1;
        BYTE5(v12[46].Next) = 0;
      }
      FxIoQueue::DispatchEvents((FxIoQueue *)&v11[-116], v21, 0LL, v18);
      Next = queueList.Next;
    }
    v11->Next = 0LL;
    ((void (__fastcall *)(_SINGLE_LIST_ENTRY **, __int64, __int64, const char *))v12->Next[2].Next)(
      &v11[-116].Next,
      1702326128LL,
      1327LL,
      "minkernel\\wdf\\framework\\shared\\irphandlers\\io\\fxpkgio.cpp");
  }
  return 0LL;
}
