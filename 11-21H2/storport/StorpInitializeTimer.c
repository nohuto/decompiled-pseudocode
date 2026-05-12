/*
 * XREFs of StorpInitializeTimer @ 0x1C0046240
 * Callers:
 *     StorPortExtendedFunction @ 0x1C000CEF0 (StorPortExtendedFunction.c)
 * Callees:
 *     RaidpPortGetAdapter @ 0x1C000F724 (RaidpPortGetAdapter.c)
 *     RaidAllocatePool @ 0x1C000F8A0 (RaidAllocatePool.c)
 *     WPP_SF_ @ 0x1C003C48C (WPP_SF_.c)
 *     WPP_SF_q @ 0x1C003C5A8 (WPP_SF_q.c)
 *     WPP_SF_qq @ 0x1C003C710 (WPP_SF_qq.c)
 */

__int64 __fastcall StorpInitializeTimer(__int64 a1, __int64 *a2)
{
  unsigned int v2; // ebx
  _DWORD *Adapter; // rax
  _DWORD *v7; // rsi
  __int64 Pool; // rax
  __int64 v9; // rdi

  v2 = 0;
  if ( !a1 || !a2 )
  {
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    {
      WPP_SF_qq(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0x45u,
        (__int64)&WPP_27c524ad26413fc7d405974726332488_Traceguids,
        a1,
        a2);
    }
    return 3238002694LL;
  }
  if ( KeGetCurrentIrql() <= 2u )
  {
    Adapter = RaidpPortGetAdapter(a1);
    v7 = Adapter;
    if ( Adapter )
    {
      Pool = RaidAllocatePool(64LL, 160LL, 1413570898LL, *((_QWORD *)Adapter + 1));
      v9 = Pool;
      if ( Pool )
      {
        *(_QWORD *)Pool = v7;
        KeInitializeTimer((PKTIMER)(Pool + 8));
        KeInitializeDpc((PRKDPC)(v9 + 72), (PKDEFERRED_ROUTINE)StorportTimerDpc, (PVOID)v9);
        _InterlockedIncrement(v7 + 1000);
        *a2 = v9;
      }
      else
      {
        return (unsigned int)-1056964605;
      }
      return v2;
    }
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    {
      WPP_SF_q(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0x47u,
        (__int64)&WPP_27c524ad26413fc7d405974726332488_Traceguids,
        a1);
    }
    return 3238002694LL;
  }
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
  {
    WPP_SF_(
      (__int64)WPP_GLOBAL_Control->AttachedDevice,
      0x46u,
      (__int64)&WPP_27c524ad26413fc7d405974726332488_Traceguids);
  }
  return 3238002696LL;
}
