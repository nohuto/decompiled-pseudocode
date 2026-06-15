/*
 * XREFs of ?OnLeftSubmixStopped@CSubmixImpl@@UEAAJPEAUISubmixInternal@@@Z @ 0x140009D80
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateActiveStreamCount@CSubmixImpl@@IEAAJH@Z @ 0x14000914C (-UpdateActiveStreamCount@CSubmixImpl@@IEAAJH@Z.c)
 *     ?FindChildSubmix@CSubmixImpl@@IEAAPEAVCChildSubmixInstance@@PEAUISubmixInternal@@@Z @ 0x140009E08 (-FindChildSubmix@CSubmixImpl@@IEAAPEAVCChildSubmixInstance@@PEAUISubmixInternal@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x14004DED4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CSubmixImpl::OnLeftSubmixStopped(CSubmixImpl *this, struct ISubmixInternal *a2)
{
  struct _RTL_CRITICAL_SECTION *v2; // rdi
  struct CChildSubmixInstance *ChildSubmix; // rax
  int updated; // ebx
  __int64 v8; // rdx
  int v9; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 176);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 176));
  ChildSubmix = CSubmixImpl::FindChildSubmix(this, a2);
  if ( ChildSubmix )
  {
    *((_BYTE *)ChildSubmix + 8) = 0;
    updated = CSubmixImpl::UpdateActiveStreamCount(this, -1);
    if ( updated >= 0 )
    {
      if ( v2 )
        LeaveCriticalSection(v2);
      return 0LL;
    }
    v8 = 1339LL;
  }
  else
  {
    updated = -2005139430;
    v8 = 1336LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v8,
    (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\submix.cpp",
    (const char *)(unsigned int)updated,
    v9);
  if ( v2 )
    LeaveCriticalSection(v2);
  return (unsigned int)updated;
}
