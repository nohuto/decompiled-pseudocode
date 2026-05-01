/*
 * XREFs of ?UnregisterForWindowSnappingEvents@CShellSnapComponent@@UEAAJK@Z @ 0x180141190
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Unregister@CGITRegistrationList@@QEAAJK@Z @ 0x180141250 (-Unregister@CGITRegistrationList@@QEAAJK@Z.c)
 */

__int64 __fastcall CShellSnapComponent::UnregisterForWindowSnappingEvents(CShellSnapComponent *this, unsigned int a2)
{
  int v2; // eax
  unsigned int v3; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = CGITRegistrationList::Unregister((CShellSnapComponent *)((char *)this + 200), a2);
  v3 = v2;
  if ( v2 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x38C,
    (__int64)"pcshell\\twinui\\snapcomponent\\lib\\snapshellcomponent.cpp",
    (const char *)(unsigned int)v2);
  return v3;
}
