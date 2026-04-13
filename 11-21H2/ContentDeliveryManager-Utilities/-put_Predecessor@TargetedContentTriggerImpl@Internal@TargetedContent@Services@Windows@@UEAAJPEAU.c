/*
 * XREFs of ?put_Predecessor@TargetedContentTriggerImpl@Internal@TargetedContent@Services@Windows@@UEAAJPEAUHSTRING__@@@Z @ 0x180097AB0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180044570 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall Windows::Services::TargetedContent::Internal::TargetedContentTriggerImpl::put_Predecessor(
        Windows::Services::TargetedContent::Internal::TargetedContentTriggerImpl *this,
        HSTRING a2)
{
  RTL_SRWLOCK *v4; // rdi
  HRESULT v5; // eax
  unsigned int v6; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = (RTL_SRWLOCK *)((char *)this + 64);
  AcquireSRWLockExclusive((PSRWLOCK)this + 8);
  if ( a2 && a2 == *((HSTRING *)this + 14)
    || (WindowsDeleteString(*((HSTRING *)this + 14)),
        *((_QWORD *)this + 14) = 0LL,
        v5 = WindowsDuplicateString(a2, (HSTRING *)this + 14),
        v6 = v5,
        v5 >= 0) )
  {
    if ( v4 )
      ReleaseSRWLockExclusive(v4);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x84,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\targetedcontenttrigger.cpp",
      (const char *)(unsigned int)v5);
    if ( v4 )
      ReleaseSRWLockExclusive(v4);
    return v6;
  }
}
