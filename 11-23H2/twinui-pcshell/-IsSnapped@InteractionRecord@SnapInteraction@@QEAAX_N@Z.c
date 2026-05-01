/*
 * XREFs of ?IsSnapped@InteractionRecord@SnapInteraction@@QEAAX_N@Z @ 0x180030F88
 * Callers:
 *     ?OnViewFocused@InteractionTracker@SnapInteraction@@AEAAXAEBU?$com_ptr@UIApplicationView@@@winrt@@@Z @ 0x1800306EC (-OnViewFocused@InteractionTracker@SnapInteraction@@AEAAXAEBU-$com_ptr@UIApplicationView@@@winrt@.c)
 *     ?OnViewSnapped@InteractionTracker@SnapInteraction@@AEAAXAEBU?$com_ptr@UIApplicationView@@@winrt@@@Z @ 0x18066FC3C (-OnViewSnapped@InteractionTracker@SnapInteraction@@AEAAXAEBU-$com_ptr@UIApplicationView@@@winrt@.c)
 *     ?OnViewUnsnapped@InteractionTracker@SnapInteraction@@AEAAXAEBU?$com_ptr@UIApplicationView@@@winrt@@@Z @ 0x18066FD44 (-OnViewUnsnapped@InteractionTracker@SnapInteraction@@AEAAXAEBU-$com_ptr@UIApplicationView@@@winr.c)
 * Callees:
 *     ?CommitInteraction@InteractionRecord@SnapInteraction@@AEAAXAEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x18009D174 (-CommitInteraction@InteractionRecord@SnapInteraction@@AEAAXAEBV-$unique_any_t@V-$unique_storage@.c)
 *     ?now@steady_clock@chrono@std@@SA?AV?$time_point@Usteady_clock@chrono@std@@V?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@23@@23@XZ @ 0x1801BA8A4 (-now@steady_clock@chrono@std@@SA-AV-$time_point@Usteady_clock@chrono@std@@V-$duration@_JU-$ratio.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall SnapInteraction::InteractionRecord::IsSnapped(RTL_SRWLOCK *this, char a2)
{
  RTL_SRWLOCK *v4; // rbx
  void *v5; // rcx
  RTL_SRWLOCK *v6; // [rsp+30h] [rbp+8h] BYREF

  v4 = this + 5;
  AcquireSRWLockExclusive(this + 5);
  v6 = v4;
  if ( a2 != LOBYTE(this[1].Ptr) )
  {
    LOBYTE(this[1].Ptr) = a2;
    if ( BYTE1(this[1].Ptr) )
    {
      if ( a2 )
      {
        v5 = *(void **)std::chrono::steady_clock::now(&v6);
        if ( !LOBYTE(this[3].Ptr) )
          LOBYTE(this[3].Ptr) = 1;
        this[2].Ptr = v5;
      }
      else
      {
        SnapInteraction::InteractionRecord::CommitInteraction(this);
        LOBYTE(this[3].Ptr) = 0;
      }
    }
  }
  if ( v4 )
    ReleaseSRWLockExclusive(v4);
}
