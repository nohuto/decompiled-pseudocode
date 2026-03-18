/*
 * XREFs of ?NotifyChannelClosed@DXGVMBUSCHANNEL@@QEAAXXZ @ 0x1C0356084
 * Callers:
 *     ProcessChannelClosed @ 0x1C03568E0 (ProcessChannelClosed.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000C3F8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F574 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000F5FC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?NotifyChannelClosed@DXGCHANNELENDPOINTPROXY@@QEAAXXZ @ 0x1C0355E88 (-NotifyChannelClosed@DXGCHANNELENDPOINTPROXY@@QEAAXXZ.c)
 */

void __fastcall DXGVMBUSCHANNEL::NotifyChannelClosed(struct _EX_RUNDOWN_REF *this, __int64 a2)
{
  DXGVMBUSCHANNEL *Count; // rbx
  unsigned __int64 v4; // rdx
  DXGVMBUSCHANNEL *v5; // rax
  struct _KEVENT *v6; // rcx
  _BYTE v7[24]; // [rsp+20h] [rbp-18h] BYREF

  *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2) + 24) = this;
  ExWaitForRundownProtectionRelease(this + 8);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v7, (struct DXGFASTMUTEX *const)&this[9], 1);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v7);
  Count = (DXGVMBUSCHANNEL *)this[6].Count;
  while ( Count != (DXGVMBUSCHANNEL *)&this[6] )
  {
    v4 = (unsigned __int64)Count - 16;
    v5 = Count;
    Count = *(DXGVMBUSCHANNEL **)Count;
    DXGCHANNELENDPOINTPROXY::NotifyChannelClosed((DXGCHANNELENDPOINTPROXY *)(v4 & -(__int64)(v5 != 0LL)));
  }
  if ( v7[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v7);
  v6 = (struct _KEVENT *)this[4].Count;
  if ( v6 )
    KeSetEvent(v6, 0, 0);
}
