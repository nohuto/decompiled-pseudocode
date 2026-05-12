/*
 * XREFs of StorpFreeTimer @ 0x1C0045484
 * Callers:
 *     StorPortExtendedFunction @ 0x1C000CEF0 (StorPortExtendedFunction.c)
 * Callees:
 *     RaidpPortGetAdapter @ 0x1C000F724 (RaidpPortGetAdapter.c)
 *     WPP_SF_ @ 0x1C003C48C (WPP_SF_.c)
 *     WPP_SF_q @ 0x1C003C5A8 (WPP_SF_q.c)
 *     WPP_SF_qq @ 0x1C003C710 (WPP_SF_qq.c)
 */

__int64 __fastcall StorpFreeTimer(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // ebx
  _DWORD *Adapter; // rsi
  unsigned __int8 v7; // r9
  PDEVICE_OBJECT v8; // rcx
  unsigned __int16 v9; // dx
  _QWORD *v10; // r9
  struct _IO_WORKITEM *WorkItem; // rax

  v2 = 0;
  if ( !a1 || !a2 )
  {
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    {
      WPP_SF_qq(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0x4Bu,
        (__int64)&WPP_27c524ad26413fc7d405974726332488_Traceguids,
        a1,
        a2);
    }
    return 3238002694LL;
  }
  if ( KeGetCurrentIrql() <= 2u )
  {
    Adapter = RaidpPortGetAdapter(a1);
    if ( Adapter )
    {
      if ( *a2 && !*(_DWORD *)*a2 )
      {
        _InterlockedExchange64(a2 + 17, 0LL);
        if ( !KeCancelTimer((PKTIMER)(a2 + 1)) )
        {
          KeRemoveQueueDpc((PRKDPC)(a2 + 9));
          if ( KeGetCurrentIrql() )
          {
            WorkItem = IoAllocateWorkItem(*((PDEVICE_OBJECT *)Adapter + 1));
            a2[19] = WorkItem;
            if ( WorkItem )
              IoQueueWorkItem(WorkItem, StorpFreeTimerWorkItem, DelayedWorkQueue, a2);
            else
              return (unsigned int)-1056964605;
            return v2;
          }
          KeFlushQueuedDpcs();
        }
        ExFreePoolWithTag(a2, 0x54416152u);
        _InterlockedDecrement(Adapter + 1000);
        return 0LL;
      }
      v8 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < v7 )
      {
        return 3238002694LL;
      }
      v9 = 78;
      v10 = a2;
    }
    else
    {
      v8 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
        || BYTE1(WPP_GLOBAL_Control->Timer) < v7 )
      {
        return 3238002694LL;
      }
      v9 = 77;
      v10 = (_QWORD *)a1;
    }
    WPP_SF_q((__int64)v8->AttachedDevice, v9, (__int64)&WPP_27c524ad26413fc7d405974726332488_Traceguids, v10);
    return 3238002694LL;
  }
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
  {
    WPP_SF_(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      0x4Cu,
      (__int64)&WPP_27c524ad26413fc7d405974726332488_Traceguids);
  }
  return 3238002696LL;
}
