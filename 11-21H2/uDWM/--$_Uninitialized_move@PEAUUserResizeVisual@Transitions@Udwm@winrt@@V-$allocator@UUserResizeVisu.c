/*
 * XREFs of ??$_Uninitialized_move@PEAUUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@YAPEAUUserResizeVisual@Transitions@Udwm@winrt@@QEAU1234@0PEAU1234@AEAV?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@0@@Z @ 0x1800FC62C
 * Callers:
 *     ??$_Emplace_reallocate@AEBUUserResizeVisual@Transitions@Udwm@winrt@@@?$vector@UUserResizeVisual@Transitions@Udwm@winrt@@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@QEAAPEAUUserResizeVisual@Transitions@Udwm@winrt@@QEAU2345@AEBU2345@@Z @ 0x1800FC294 (--$_Emplace_reallocate@AEBUUserResizeVisual@Transitions@Udwm@winrt@@@-$vector@UUserResizeVisual@.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@YAXPEAUUserResizeVisual@Transitions@Udwm@winrt@@QEAU1234@AEAV?$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@0@@Z @ 0x1800FC124 (--$_Destroy_range@V-$allocator@UUserResizeVisual@Transitions@Udwm@winrt@@@std@@@std@@YAXPEAUUser.c)
 */

winrt::Udwm::Transitions::UserResizeVisual *__fastcall std::_Uninitialized_move<winrt::Udwm::Transitions::UserResizeVisual *>(
        __int64 *a1,
        __int64 *a2,
        winrt::Udwm::Transitions::UserResizeVisual *a3)
{
  __int64 v4; // r8

  while ( a1 != a2 )
  {
    v4 = *a1;
    *a1 = 0LL;
    *(_QWORD *)a3 = v4;
    a3 = (winrt::Udwm::Transitions::UserResizeVisual *)((char *)a3 + 8);
    ++a1;
  }
  std::_Destroy_range<std::allocator<winrt::Udwm::Transitions::UserResizeVisual>>(a3, a3);
  return a3;
}
