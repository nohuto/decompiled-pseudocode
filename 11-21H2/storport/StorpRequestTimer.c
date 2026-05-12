/*
 * XREFs of StorpRequestTimer @ 0x1C000F4E0
 * Callers:
 *     StorPortExtendedFunction @ 0x1C000CEF0 (StorPortExtendedFunction.c)
 * Callees:
 *     RaidAdapterRequestAddtionalTimerDeferred @ 0x1C0036570 (RaidAdapterRequestAddtionalTimerDeferred.c)
 *     WPP_SF_q @ 0x1C003C5A8 (WPP_SF_q.c)
 *     WPP_SF_qqq @ 0x1C003C830 (WPP_SF_qqq.c)
 */

__int64 __fastcall StorpRequestTimer(
        __int64 a1,
        __int64 a2,
        signed __int64 a3,
        __int64 a4,
        __int64 a5,
        unsigned __int64 a6)
{
  _DWORD **v7; // rsi
  _DWORD *v8; // rsi
  _DWORD *v9; // rax
  __int64 v10; // rbx
  unsigned int v11; // ebp
  unsigned __int64 v12; // r14

  if ( !a1 || !a2 || !a3 )
  {
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    {
      WPP_SF_qqq(WPP_GLOBAL_Control->AttachedDevice, 72LL, &WPP_27c524ad26413fc7d405974726332488_Traceguids, a1, a2, a3);
    }
    return 3238002694LL;
  }
  v7 = *(_DWORD ***)(a1 - 16);
  if ( !v7 || (v8 = *v7) == 0LL || *v8 )
  {
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    {
      WPP_SF_q(WPP_GLOBAL_Control->AttachedDevice, 73LL, &WPP_27c524ad26413fc7d405974726332488_Traceguids, a1);
    }
    return 3238002694LL;
  }
  v9 = *(_DWORD **)a2;
  if ( !*(_QWORD *)a2 || *v9 )
  {
    if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
      && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
    {
      WPP_SF_q(WPP_GLOBAL_Control->AttachedDevice, 74LL, &WPP_27c524ad26413fc7d405974726332488_Traceguids, a2);
    }
    return 3238002694LL;
  }
  if ( a5 )
  {
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a2 + 136), a3, 0LL) )
    {
      return (unsigned int)-1056964596;
    }
    else
    {
      v10 = -10 * a5;
      *(_QWORD *)(a2 + 144) = a4;
      v11 = 0;
      v12 = a6 / 0x3E8;
      if ( a6 / 0x3E8 >= 0x20 )
      {
        if ( a6 != 1000 * v12 )
          LODWORD(v12) = v12 + 1;
      }
      else
      {
        LODWORD(v12) = 0;
      }
      if ( KeGetCurrentIrql() > 2u )
        return (unsigned int)RaidAdapterRequestAddtionalTimerDeferred(v8, a2, v10, (unsigned int)v12);
      else
        KeSetCoalescableTimer((PKTIMER)(a2 + 8), (LARGE_INTEGER)v10, 0, v12, (PKDPC)(a2 + 72));
    }
  }
  else if ( v8 == v9 && a3 == *(_QWORD *)(a2 + 136) )
  {
    v11 = 0;
    _InterlockedExchange64((volatile __int64 *)(a2 + 136), 0LL);
    KeCancelTimer((PKTIMER)(a2 + 8));
  }
  else
  {
    return (unsigned int)-1056964602;
  }
  return v11;
}
