/*
 * XREFs of ?FindRecord@InteractionTracker@SnapInteraction@@AEAA?AV?$shared_ptr@VInteractionRecord@SnapInteraction@@@std@@AEBU?$com_ptr@UIApplicationView@@@winrt@@@Z @ 0x1800985C8
 * Callers:
 *     ?OnViewFocused@InteractionTracker@SnapInteraction@@AEAAXAEBU?$com_ptr@UIApplicationView@@@winrt@@@Z @ 0x180078F18 (-OnViewFocused@InteractionTracker@SnapInteraction@@AEAAXAEBU-$com_ptr@UIApplicationView@@@winrt@.c)
 *     ?OnViewUnfocused@InteractionTracker@SnapInteraction@@AEAAXAEBU?$com_ptr@UIApplicationView@@@winrt@@@Z @ 0x180098534 (-OnViewUnfocused@InteractionTracker@SnapInteraction@@AEAAXAEBU-$com_ptr@UIApplicationView@@@winr.c)
 *     ?OnViewSnapped@InteractionTracker@SnapInteraction@@AEAAXAEBU?$com_ptr@UIApplicationView@@@winrt@@@Z @ 0x1805A0870 (-OnViewSnapped@InteractionTracker@SnapInteraction@@AEAAXAEBU-$com_ptr@UIApplicationView@@@winrt@.c)
 *     ?OnViewUnsnapped@InteractionTracker@SnapInteraction@@AEAAXAEBU?$com_ptr@UIApplicationView@@@winrt@@@Z @ 0x1805A095C (-OnViewUnsnapped@InteractionTracker@SnapInteraction@@AEAAXAEBU-$com_ptr@UIApplicationView@@@winr.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall SnapInteraction::InteractionTracker::FindRecord(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  __int64 *v3; // r9
  __int64 *v4; // rcx
  __int64 *v5; // r10
  __int64 *v6; // rax
  char v7; // al
  __int64 v8; // r8

  v3 = *(__int64 **)(a1 + 88);
  v4 = v3;
  v5 = v3;
  v6 = (__int64 *)v3[1];
  if ( !*((_BYTE *)v6 + 25) )
  {
    do
    {
      if ( (unsigned __int64)v6[4] < *a3 )
      {
        v6 = (__int64 *)v6[2];
      }
      else
      {
        v4 = v6;
        v6 = (__int64 *)*v6;
      }
    }
    while ( !*((_BYTE *)v6 + 25) );
    v5 = v3;
  }
  if ( *((_BYTE *)v4 + 25) || *a3 < (unsigned __int64)v4[4] )
  {
    v4 = v3;
  }
  else if ( v4 != v5 )
  {
    v7 = 1;
    goto LABEL_12;
  }
  v7 = 0;
LABEL_12:
  *a2 = 0LL;
  a2[1] = 0LL;
  if ( v7 )
  {
    v8 = v4[6];
    if ( v8 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
      v8 = v4[6];
    }
    *a2 = v4[5];
    a2[1] = v8;
  }
  return a2;
}
