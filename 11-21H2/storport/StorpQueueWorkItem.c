/*
 * XREFs of StorpQueueWorkItem @ 0x1C00470B0
 * Callers:
 *     StorPortExtendedFunction @ 0x1C000CEF0 (StorPortExtendedFunction.c)
 * Callees:
 *     RaidAcquireAdapterRemoveLock @ 0x1C000BA44 (RaidAcquireAdapterRemoveLock.c)
 *     RaidpPortGetAdapter @ 0x1C000F724 (RaidpPortGetAdapter.c)
 *     RaidReleaseAdapterRemoveLock @ 0x1C0024BE2 (RaidReleaseAdapterRemoveLock.c)
 *     WPP_SF_ @ 0x1C003C48C (WPP_SF_.c)
 *     WPP_SF_qqq @ 0x1C003C830 (WPP_SF_qqq.c)
 */

__int64 __fastcall StorpQueueWorkItem(__int64 a1, __int64 a2, volatile signed __int64 *a3, __int64 a4)
{
  unsigned int v4; // ebx
  _DWORD *Adapter; // rax
  __int64 v10; // rsi
  struct _IO_WORKITEM *v11; // rcx

  v4 = 0;
  if ( !a1 || !a2 || !a3 )
  {
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    {
      WPP_SF_qqq(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0x3Du,
        (__int64)&WPP_27c524ad26413fc7d405974726332488_Traceguids,
        a1,
        a2,
        (__int64)a3);
    }
    return (unsigned int)-1056964602;
  }
  if ( *((_DWORD *)a3 + 6) )
  {
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    {
      WPP_SF_(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0x3Eu,
        (__int64)&WPP_27c524ad26413fc7d405974726332488_Traceguids);
    }
    return (unsigned int)-1056964596;
  }
  if ( KeGetCurrentIrql() <= 2u )
  {
    Adapter = RaidpPortGetAdapter(a1);
    v10 = (__int64)Adapter;
    if ( Adapter )
    {
      if ( (int)RaidAcquireAdapterRemoveLock((__int64)Adapter) >= 0 )
      {
        if ( _InterlockedCompareExchange64(a3 + 1, a2, 0LL) )
        {
          v4 = -1056964596;
          RaidReleaseAdapterRemoveLock(v10);
        }
        else
        {
          v11 = (struct _IO_WORKITEM *)*a3;
          *((_QWORD *)a3 + 2) = a4;
          IoQueueWorkItem(v11, (PIO_WORKITEM_ROUTINE)StorPortWorkItemRoutine, DelayedWorkQueue, (PVOID)a3);
        }
      }
      else
      {
        return (unsigned int)-1056964599;
      }
      return v4;
    }
    return (unsigned int)-1056964602;
  }
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
  {
    WPP_SF_(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      0x3Fu,
      (__int64)&WPP_27c524ad26413fc7d405974726332488_Traceguids);
  }
  return (unsigned int)-1056964600;
}
