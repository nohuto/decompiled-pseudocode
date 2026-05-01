/*
 * XREFs of ?Stop@UserPresenceListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAJXZ @ 0x18017E1C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::Shell::TaskFlow::DataEngine::UserPresenceListener::Stop(
        Windows::Internal::Shell::TaskFlow::DataEngine::UserPresenceListener *this)
{
  int v2; // eax
  int v4; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *((_DWORD *)this + 22) )
  {
    v2 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 10) + 40LL))(*((_QWORD *)this + 10));
    if ( v2 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x55,
        (int)"pcshell\\twinui\\taskflowbroker\\lib\\userpresencelistener.cpp",
        (const char *)(unsigned int)v2,
        v4);
    *((_DWORD *)this + 22) = 0;
  }
  return 0LL;
}
