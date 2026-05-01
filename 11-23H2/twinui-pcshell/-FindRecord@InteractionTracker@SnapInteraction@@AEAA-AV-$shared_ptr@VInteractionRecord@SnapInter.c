/*
 * XREFs of ?FindRecord@InteractionTracker@SnapInteraction@@AEAA?AV?$shared_ptr@VInteractionRecord@SnapInteraction@@@std@@AEBU?$com_ptr@UIApplicationView@@@winrt@@@Z @ 0x1800308C8
 * Callers:
 *     ?OnViewFocused@InteractionTracker@SnapInteraction@@AEAAXAEBU?$com_ptr@UIApplicationView@@@winrt@@@Z @ 0x1800306EC (-OnViewFocused@InteractionTracker@SnapInteraction@@AEAAXAEBU-$com_ptr@UIApplicationView@@@winrt@.c)
 *     ?OnViewUnfocused@InteractionTracker@SnapInteraction@@AEAAXAEBU?$com_ptr@UIApplicationView@@@winrt@@@Z @ 0x18003082C (-OnViewUnfocused@InteractionTracker@SnapInteraction@@AEAAXAEBU-$com_ptr@UIApplicationView@@@winr.c)
 *     ?OnViewSnapped@InteractionTracker@SnapInteraction@@AEAAXAEBU?$com_ptr@UIApplicationView@@@winrt@@@Z @ 0x18066FC3C (-OnViewSnapped@InteractionTracker@SnapInteraction@@AEAAXAEBU-$com_ptr@UIApplicationView@@@winrt@.c)
 *     ?OnViewUnsnapped@InteractionTracker@SnapInteraction@@AEAAXAEBU?$com_ptr@UIApplicationView@@@winrt@@@Z @ 0x18066FD44 (-OnViewUnsnapped@InteractionTracker@SnapInteraction@@AEAAXAEBU-$com_ptr@UIApplicationView@@@winr.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall SnapInteraction::InteractionTracker::FindRecord(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  __int64 *v3; // r9
  __int64 *v4; // rcx
  __int64 *v5; // rax
  char v6; // al
  __int64 v7; // rax

  v3 = *(__int64 **)(a1 + 88);
  v4 = v3;
  v5 = (__int64 *)v3[1];
  while ( !*((_BYTE *)v5 + 25) )
  {
    if ( (unsigned __int64)v5[4] < *a3 )
    {
      v5 = (__int64 *)v5[2];
    }
    else
    {
      v4 = v5;
      v5 = (__int64 *)*v5;
    }
  }
  if ( *((_BYTE *)v4 + 25) || *a3 < (unsigned __int64)v4[4] )
  {
    v4 = v3;
  }
  else if ( v4 != v3 )
  {
    v6 = 1;
    goto LABEL_11;
  }
  v6 = 0;
LABEL_11:
  *a2 = 0LL;
  a2[1] = 0LL;
  if ( v6 )
  {
    v7 = v4[6];
    if ( v7 )
      _InterlockedIncrement((volatile signed __int32 *)(v7 + 8));
    *a2 = v4[5];
    a2[1] = v4[6];
  }
  return a2;
}
