/*
 * XREFs of ?SwitchToRemoteVirtualDesktopInRemoteSession@SwitchConnectionHandler@implementation@Shell@Internal@Windows@winrt@@UEBAXXZ @ 0x180733490
 * Callers:
 *     <none>
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180085068 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall winrt::Windows::Internal::Shell::implementation::SwitchConnectionHandler::SwitchToRemoteVirtualDesktopInRemoteSession(
        winrt::Windows::Internal::Shell::implementation::SwitchConnectionHandler *this)
{
  int v2; // eax
  int v3; // eax
  int v4; // eax
  int v5; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF
  __int64 v8; // [rsp+38h] [rbp+10h] BYREF

  v8 = 0LL;
  v2 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**((_QWORD **)this + 19) + 48LL))(*((_QWORD *)this + 19), &v8);
  if ( v2 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x26A,
      (int)"pcshell\\twinui\\cloudpc\\lib\\switchconnectionhandler.cpp",
      (const char *)(unsigned int)v2,
      v5);
  v7 = 0LL;
  v3 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this + 19))(
         *((_QWORD *)this + 19),
         &GUID_53f5ca0b_158f_4124_900c_057158060b27,
         &v7);
  if ( v3 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x26C,
      (int)"pcshell\\twinui\\cloudpc\\lib\\switchconnectionhandler.cpp",
      (const char *)(unsigned int)v3,
      v5);
  v4 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v7 + 160LL))(v7, v8, 1LL);
  if ( v4 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x26D,
      (int)"pcshell\\twinui\\cloudpc\\lib\\switchconnectionhandler.cpp",
      (const char *)(unsigned int)v4,
      v5);
  if ( v7 )
    winrt::com_ptr<ISnapComponent>::unconditional_release_ref(&v7);
  if ( v8 )
    winrt::com_ptr<ISnapComponent>::unconditional_release_ref(&v8);
}
