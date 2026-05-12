/*
 * XREFs of StorpInitializeTimer @ 0x1C00493AC
 * Callers:
 *     StorPortExtendedFunction @ 0x1C000B040 (StorPortExtendedFunction.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C0007B34 (RaidAllocatePool.c)
 *     RaidpPortGetAdapter @ 0x1C000D95C (RaidpPortGetAdapter.c)
 *     WPP_SF_ @ 0x1C003E820 (WPP_SF_.c)
 *     WPP_SF_q @ 0x1C003E93C (WPP_SF_q.c)
 *     WPP_SF_qq @ 0x1C003EAA4 (WPP_SF_qq.c)
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
        (__int64)&WPP_dc0e079c384a3dd4a6b1f54a748f6ff0_Traceguids,
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
        _InterlockedIncrement(v7 + 1016);
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
        (__int64)&WPP_dc0e079c384a3dd4a6b1f54a748f6ff0_Traceguids,
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
      (__int64)&WPP_dc0e079c384a3dd4a6b1f54a748f6ff0_Traceguids);
  }
  return 3238002696LL;
}
