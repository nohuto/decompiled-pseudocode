/*
 * XREFs of ?Stop@FxUsbDevice@@MEAAXW4_WDF_IO_TARGET_SENT_IO_ACTION@@@Z @ 0x1C007E020
 * Callers:
 *     <none>
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0004FD4 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0005028 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?AcquireLock@FxWaitLockInternal@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEA_J@Z @ 0x1C0017090 (-AcquireLock@FxWaitLockInternal@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEA_J@Z.c)
 *     ?_CancelSentRequests@FxIoTarget@@KAXPEAU_SINGLE_LIST_ENTRY@@@Z @ 0x1C002CF10 (-_CancelSentRequests@FxIoTarget@@KAXPEAU_SINGLE_LIST_ENTRY@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0036BA0 (_guard_dispatch_icall_nop.c)
 *     ?Stop@FxIoTarget@@UEAAXW4_WDF_IO_TARGET_SENT_IO_ACTION@@@Z @ 0x1C0074560 (-Stop@FxIoTarget@@UEAAXW4_WDF_IO_TARGET_SENT_IO_ACTION@@@Z.c)
 */

void __fastcall FxUsbDevice::Stop(FxUsbDevice *this, __int64 Action)
{
  _WDF_IO_TARGET_SENT_IO_ACTION v2; // r14d
  _FX_DRIVER_GLOBALS *v4; // rdx
  unsigned __int8 v5; // r8
  unsigned __int8 v6; // r8
  __int64 i; // rdi
  FxUsbInterface *v8; // rsi
  __int64 j; // rbp
  FxUsbPipe *v10; // rcx
  __int64 k; // rdi
  FxUsbInterface *v12; // rsi
  __int64 m; // rbp
  FxUsbPipe *v14; // rcx
  int v15; // [rsp+20h] [rbp-38h]
  unsigned __int8 wait; // [rsp+60h] [rbp+8h] BYREF
  unsigned __int8 irql; // [rsp+68h] [rbp+10h] BYREF
  _SINGLE_LIST_ENTRY head; // [rsp+70h] [rbp+18h] BYREF

  head.Next = 0LL;
  v2 = (int)Action;
  irql = 0;
  FxIoTarget::Stop(this, Action);
  if ( v2 != WdfIoTargetLeaveSentIoPending )
    FxWaitLockInternal::AcquireLock(&this->m_InterfaceIterationLock, v4, 0LL);
  FxNonPagedObject::Lock(this, &irql, v5);
  for ( i = 0LL; (unsigned int)i < this->m_NumInterfaces; i = (unsigned int)(i + 1) )
  {
    v8 = this->m_Interfaces[i];
    if ( v8->m_ConfiguredPipes )
    {
      for ( j = 0LL; (unsigned int)j < v8->m_NumberOfConfiguredPipes; j = (unsigned int)(j + 1) )
      {
        v10 = v8->m_ConfiguredPipes[j];
        if ( v10 )
        {
          wait = 0;
          LOBYTE(v15) = 1;
          v10->GotoStopState(v10, v2, &head, &wait, v15);
        }
      }
    }
  }
  FxNonPagedObject::Unlock(this, irql, v6);
  if ( head.Next )
    FxIoTarget::_CancelSentRequests(&head);
  for ( k = 0LL; (unsigned int)k < this->m_NumInterfaces; k = (unsigned int)(k + 1) )
  {
    v12 = this->m_Interfaces[k];
    if ( v12->m_ConfiguredPipes )
    {
      for ( m = 0LL; (unsigned int)m < v12->m_NumberOfConfiguredPipes; m = (unsigned int)(m + 1) )
      {
        v14 = v12->m_ConfiguredPipes[m];
        if ( v14 )
          v14->WaitForSentIoToComplete(v14);
      }
    }
  }
  if ( v2 != WdfIoTargetLeaveSentIoPending )
  {
    this->m_InterfaceIterationLock.m_OwningThread = 0LL;
    KeSetEvent(&this->m_InterfaceIterationLock.m_Event.m_Event, 0, 0);
    KeLeaveCriticalRegion();
  }
}
