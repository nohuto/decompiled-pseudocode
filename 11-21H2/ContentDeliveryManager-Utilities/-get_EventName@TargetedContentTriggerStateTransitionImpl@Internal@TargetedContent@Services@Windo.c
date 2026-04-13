/*
 * XREFs of ?get_EventName@TargetedContentTriggerStateTransitionImpl@Internal@TargetedContent@Services@Windows@@UEAAJPEAPEAUHSTRING__@@@Z @ 0x1800969C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044570 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransitionImpl::get_EventName(
        Windows::Services::TargetedContent::Internal::TargetedContentTriggerStateTransitionImpl *this,
        HSTRING *a2)
{
  RTL_SRWLOCK *v4; // rsi
  HRESULT v5; // eax
  unsigned int v6; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = (RTL_SRWLOCK *)((char *)this + 64);
  AcquireSRWLockShared((PSRWLOCK)this + 8);
  v5 = WindowsDuplicateString(*((HSTRING *)this + 9), a2);
  v6 = v5;
  if ( v5 >= 0 )
  {
    if ( v4 )
      ReleaseSRWLockShared(v4);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x153,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\targetedcontenttrigger.cpp",
      (const char *)(unsigned int)v5);
    if ( v4 )
      ReleaseSRWLockShared(v4);
    return v6;
  }
}
