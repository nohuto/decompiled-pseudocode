/*
 * XREFs of ??1InteractionRecord@SnapInteraction@@QEAA@XZ @ 0x18009D100
 * Callers:
 *     ?_Destroy@?$_Ref_count_obj2@VInteractionRecord@SnapInteraction@@@std@@EEAAXXZ @ 0x18009D630 (-_Destroy@-$_Ref_count_obj2@VInteractionRecord@SnapInteraction@@@std@@EEAAXXZ.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180085068 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ?CommitInteraction@InteractionRecord@SnapInteraction@@AEAAXAEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x18009D174 (-CommitInteraction@InteractionRecord@SnapInteraction@@AEAAXAEBV-$unique_any_t@V-$unique_storage@.c)
 *     ?SendTotalInteraction@InteractionRecord@SnapInteraction@@AEAAXAEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x18009D5E8 (-SendTotalInteraction@InteractionRecord@SnapInteraction@@AEAAXAEBV-$unique_any_t@V-$unique_stora.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1801CF0C0 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall SnapInteraction::InteractionRecord::~InteractionRecord(RTL_SRWLOCK *this)
{
  RTL_SRWLOCK *v2; // rdi
  const char *v3; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = this + 5;
  if ( !TryAcquireSRWLockExclusive(this + 5) || !v2 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x33,
      (unsigned int)"pcshell\\twinui\\snapcomponent\\lib\\interactiontracker.cpp",
      v3);
  SnapInteraction::InteractionRecord::CommitInteraction(this);
  SnapInteraction::InteractionRecord::SendTotalInteraction(this);
  ReleaseSRWLockExclusive(v2);
  if ( this->Ptr )
    winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)this);
}
