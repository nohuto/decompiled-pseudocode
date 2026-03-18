/*
 * XREFs of ?FlushPagingQueues@DXGDEVICE@@QEAAXXZ @ 0x1C016404C
 * Callers:
 *     ?NotifyProcessFreeze@DXGDEVICE@@QEAAXXZ @ 0x1C01646AC (-NotifyProcessFreeze@DXGDEVICE@@QEAAXXZ.c)
 *     ?Stop@DXGDEVICE@@QEAAXE@Z @ 0x1C02E762C (-Stop@DXGDEVICE@@QEAAXE@Z.c)
 *     ?SuspendResumeEscapeAllDevices@DXGPROCESS@@QEAAXPEBVDXGADAPTER@@_N1@Z @ 0x1C033791C (-SuspendResumeEscapeAllDevices@DXGPROCESS@@QEAAXPEBVDXGADAPTER@@_N1@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     _guard_dispatch_icall_nop @ 0x1C002CCC0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DXGDEVICE::FlushPagingQueues(DXGDEVICE *this)
{
  _QWORD *i; // rdi

  if ( !*((_BYTE *)this + 72)
    && !ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)this + 17))
    && *(struct _KTHREAD **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 144LL) != KeGetCurrentThread() )
  {
    WdLogSingleEntry1(1LL, 8169LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"IsDeviceLockExclusiveOwner() || GetRenderAdapter()->IsStopResetLockExclusiveOwner()",
      8169LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( (*((_BYTE *)this + 1869) & 1) == 0 )
  {
    for ( i = (_QWORD *)*((_QWORD *)this + 62); i != (_QWORD *)((char *)this + 496) && i; i = (_QWORD *)*i )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 648LL) + 8LL) + 920LL))(i[4]);
  }
}
