/*
 * XREFs of ?RegisterForWindowSnappingEvents@CShellSnapComponent@@UEAAJPEAUIWindowSnappingEvents@@PEAK@Z @ 0x1800B7510
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Register@CGITRegistrationList@@QEAAJPEAUIUnknown@@PEAK@Z @ 0x1800B76AC (-Register@CGITRegistrationList@@QEAAJPEAUIUnknown@@PEAK@Z.c)
 */

__int64 __fastcall CShellSnapComponent::RegisterForWindowSnappingEvents(
        CShellSnapComponent *this,
        struct IUnknown *a2,
        unsigned int *a3)
{
  int v3; // eax
  unsigned int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = CGITRegistrationList::Register((CShellSnapComponent *)((char *)this + 200), a2, a3);
  v4 = v3;
  if ( v3 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x386,
    (__int64)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
    (const char *)(unsigned int)v3);
  return v4;
}
