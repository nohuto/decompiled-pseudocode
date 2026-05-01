/*
 * XREFs of ?AssociateAppWindowWithRemoteVirtualDesktop@SwitchConnectionHandler@implementation@Shell@Internal@Windows@winrt@@UEAAXAEBUhstring@6@_K@Z @ 0x180731460
 * Callers:
 *     <none>
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180085068 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Get@RemoteDesktopCollection@implementation@Shell@Internal@Windows@winrt@@QEAA?AU?$com_ptr@UIVirtualDesktop@@@6@AEBUhstring@6@@Z @ 0x18072FE68 (-Get@RemoteDesktopCollection@implementation@Shell@Internal@Windows@winrt@@QEAA-AU-$com_ptr@UIVir.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall winrt::Windows::Internal::Shell::implementation::SwitchConnectionHandler::AssociateAppWindowWithRemoteVirtualDesktop(
        PSRWLOCK *this,
        const struct winrt::hstring *a2,
        __int64 a3)
{
  int v5; // eax
  int v6; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF
  __int64 v9; // [rsp+48h] [rbp+20h] BYREF

  winrt::Windows::Internal::Shell::implementation::RemoteDesktopCollection::Get(this[17], &v9, (__int64 *)a2);
  if ( !v9 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x2DA,
      (int)"pcshell\\twinui\\cloudpc\\lib\\switchconnectionhandler.cpp",
      (const char *)0x80004005LL,
      v6);
  v8 = 0LL;
  if ( !(*((unsigned int (__fastcall **)(PSRWLOCK, __int64, __int64 *))this[21]->Ptr + 6))(this[21], a3, &v8) )
  {
    v5 = (*((__int64 (__fastcall **)(PSRWLOCK, __int64, __int64))this[19]->Ptr + 4))(this[19], v8, v9);
    if ( v5 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x2E0,
        (int)"pcshell\\twinui\\cloudpc\\lib\\switchconnectionhandler.cpp",
        (const char *)(unsigned int)v5,
        v6);
  }
  if ( v8 )
    winrt::com_ptr<ISnapComponent>::unconditional_release_ref(&v8);
  winrt::com_ptr<ISnapComponent>::unconditional_release_ref(&v9);
}
