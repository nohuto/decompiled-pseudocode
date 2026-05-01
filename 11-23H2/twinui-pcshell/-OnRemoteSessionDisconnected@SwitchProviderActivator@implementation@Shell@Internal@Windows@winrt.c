/*
 * XREFs of ?OnRemoteSessionDisconnected@SwitchProviderActivator@implementation@Shell@Internal@Windows@winrt@@UEAAXAEBUhstring@6@@Z @ 0x180730E80
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$com_ptr@UISnapComponent@@@winrt@@QEAA@XZ @ 0x180391844 (--1-$com_ptr@UISnapComponent@@@winrt@@QEAA@XZ.c)
 *     ?Get@RemoteDesktopCollection@implementation@Shell@Internal@Windows@winrt@@QEAA?AU?$com_ptr@UIVirtualDesktop@@@6@AEBUhstring@6@@Z @ 0x18072FE68 (-Get@RemoteDesktopCollection@implementation@Shell@Internal@Windows@winrt@@QEAA-AU-$com_ptr@UIVir.c)
 *     ?Remove@RemoteDesktopCollection@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUhstring@6@@Z @ 0x18073002C (-Remove@RemoteDesktopCollection@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUhstring@6@.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall winrt::Windows::Internal::Shell::implementation::SwitchProviderActivator::OnRemoteSessionDisconnected(
        PSRWLOCK *this,
        const struct winrt::hstring *a2)
{
  int v4; // eax
  int v5; // eax
  int v6; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF
  __int64 v9; // [rsp+50h] [rbp+18h] BYREF

  winrt::Windows::Internal::Shell::implementation::RemoteDesktopCollection::Get(this[7], &v8, (__int64 *)a2);
  if ( v8 )
  {
    v9 = 0LL;
    v4 = (*((__int64 (__fastcall **)(PSRWLOCK, __int64, __int64, __int64 *))this[6]->Ptr + 8))(this[6], v8, 5LL, &v9);
    if ( v4 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x8B,
        (int)"pcshell\\twinui\\cloudpc\\lib\\switchprovideractivator.cpp",
        (const char *)(unsigned int)v4,
        v6);
    v5 = (*((__int64 (__fastcall **)(PSRWLOCK, __int64, __int64))this[6]->Ptr + 12))(this[6], v8, v9);
    if ( v5 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x8C,
        (int)"pcshell\\twinui\\cloudpc\\lib\\switchprovideractivator.cpp",
        (const char *)(unsigned int)v5,
        v6);
    winrt::Windows::Internal::Shell::implementation::RemoteDesktopCollection::Remove(this[7], a2);
    winrt::com_ptr<ISnapComponent>::~com_ptr<ISnapComponent>(&v9);
  }
  winrt::com_ptr<ISnapComponent>::~com_ptr<ISnapComponent>(&v8);
}
