/*
 * XREFs of ??1InteractionRecord@SnapInteraction@@QEAA@XZ @ 0x180150F60
 * Callers:
 *     ?_Destroy@?$_Ref_count_obj2@VInteractionRecord@SnapInteraction@@@std@@EEAAXXZ @ 0x180150F50 (-_Destroy@-$_Ref_count_obj2@VInteractionRecord@SnapInteraction@@@std@@EEAAXXZ.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180017BFC (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@IEAA@XZ @ 0x18007BC60 (--1-$unique_storage@U-$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1-ReleaseSRWLockExclusive@.c)
 *     ?SendTotalInteraction@InteractionRecord@SnapInteraction@@AEAAXAEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x180150FD4 (-SendTotalInteraction@InteractionRecord@SnapInteraction@@AEAAXAEBV-$unique_any_t@V-$unique_stora.c)
 *     ?CommitInteraction@InteractionRecord@SnapInteraction@@AEAAXAEBV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@Z @ 0x180151010 (-CommitInteraction@InteractionRecord@SnapInteraction@@AEAAXAEBV-$unique_any_t@V-$unique_storage@.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18018F71C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall SnapInteraction::InteractionRecord::~InteractionRecord(RTL_SRWLOCK *this)
{
  RTL_SRWLOCK *v2; // rdi
  const char *v3; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  RTL_SRWLOCK *v5; // [rsp+30h] [rbp+8h] BYREF

  v2 = this + 5;
  if ( !TryAcquireSRWLockExclusive(this + 5) || (v5 = v2) == 0LL )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x33,
      (unsigned int)"pcshell\\twinui\\snapcomponent\\lib\\interactiontracker.cpp",
      v3);
  SnapInteraction::InteractionRecord::CommitInteraction(this);
  SnapInteraction::InteractionRecord::SendTotalInteraction(this);
  wil::details::unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<_RTL_SRWLOCK *,void (*)(_RTL_SRWLOCK *),&void ReleaseSRWLockExclusive(_RTL_SRWLOCK *),wistd::integral_constant<unsigned __int64,1>,_RTL_SRWLOCK *,_RTL_SRWLOCK *,0,std::nullptr_t>>(&v5);
  if ( this->Ptr )
    winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)this);
}
