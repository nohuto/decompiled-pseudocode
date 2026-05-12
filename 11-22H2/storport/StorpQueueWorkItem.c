/*
 * XREFs of StorpQueueWorkItem @ 0x1C001408C
 * Callers:
 *     StorPortExtendedFunction @ 0x1C000B040 (StorPortExtendedFunction.c)
 * Callees:
 *     RaidAcquireAdapterRemoveLock @ 0x1C0007534 (RaidAcquireAdapterRemoveLock.c)
 *     RaidpPortGetAdapter @ 0x1C000D95C (RaidpPortGetAdapter.c)
 *     WPP_SF_ @ 0x1C003E820 (WPP_SF_.c)
 *     WPP_SF_qqq @ 0x1C003EBC4 (WPP_SF_qqq.c)
 */

__int64 __fastcall StorpQueueWorkItem(__int64 a1, signed __int64 a2, _QWORD *a3, __int64 a4)
{
  unsigned int v4; // ebx
  PEX_RUNDOWN_REF_CACHE_AWARE *Adapter; // rax
  PEX_RUNDOWN_REF_CACHE_AWARE *v10; // rsi
  struct _IO_WORKITEM *v11; // rcx

  v4 = 0;
  if ( !a1 || !a2 || !a3 )
  {
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    {
      WPP_SF_qqq(WPP_GLOBAL_Control->AttachedDevice, 61LL, &WPP_dc0e079c384a3dd4a6b1f54a748f6ff0_Traceguids, a1, a2, a3);
    }
    return (unsigned int)-1056964602;
  }
  if ( *((_DWORD *)a3 + 6) )
  {
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    {
      WPP_SF_(WPP_GLOBAL_Control->AttachedDevice, 62LL, &WPP_dc0e079c384a3dd4a6b1f54a748f6ff0_Traceguids);
    }
    return (unsigned int)-1056964596;
  }
  else
  {
    if ( KeGetCurrentIrql() <= 2u )
    {
      Adapter = (PEX_RUNDOWN_REF_CACHE_AWARE *)RaidpPortGetAdapter(a1);
      v10 = Adapter;
      if ( Adapter )
      {
        if ( (int)RaidAcquireAdapterRemoveLock((__int64)Adapter) < 0 )
        {
          return (unsigned int)-1056964599;
        }
        else if ( _InterlockedCompareExchange64(a3 + 1, a2, 0LL) )
        {
          v4 = -1056964596;
          ExReleaseRundownProtectionCacheAware(v10[37]);
        }
        else
        {
          v11 = (struct _IO_WORKITEM *)*a3;
          a3[2] = a4;
          IoQueueWorkItem(v11, StorPortWorkItemRoutine, DelayedWorkQueue, a3);
        }
        return v4;
      }
      return (unsigned int)-1056964602;
    }
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    {
      WPP_SF_(WPP_GLOBAL_Control->AttachedDevice, 63LL, &WPP_dc0e079c384a3dd4a6b1f54a748f6ff0_Traceguids);
    }
    return (unsigned int)-1056964600;
  }
}
