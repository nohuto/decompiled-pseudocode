/*
 * XREFs of ?TryInsertAfterWindow@SnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@QEAA_N_K@Z @ 0x180692010
 * Callers:
 *     ?TryInsertAfterWindow@?$produce@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@Windows@winrt@@UIControlWindow@34567@@impl@winrt@@UEAAH_KPEA_N@Z @ 0x18067D100 (-TryInsertAfterWindow@-$produce@USnapFlyoutInstance@implementation@SnapComponent@Shell@Internal@.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180085068 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131870 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180392378 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance::TryInsertAfterWindow(
        winrt::Windows::Internal::Shell::SnapComponent::implementation::SnapFlyoutInstance *this,
        __int64 a2)
{
  char v3; // bl
  __int64 (__fastcall ***v5)(_QWORD, _QWORD *, __int64 *); // rcx
  __int64 v6; // rcx
  signed int v7; // eax
  int v8; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF
  __int64 v11; // [rsp+40h] [rbp+18h] BYREF

  v3 = 0;
  if ( *((_BYTE *)this + 340) )
    return 0;
  v5 = (__int64 (__fastcall ***)(_QWORD, _QWORD *, __int64 *))*((_QWORD *)this + 37);
  if ( v5 )
  {
    v10 = 0LL;
    v7 = (**v5)(v5, winrt::impl::guid_v<IXamlExplorerHostWindowLocal>, &v10);
    if ( v7 < 0 )
      winrt::throw_hresult(v7);
    v6 = v10;
    v11 = v10;
  }
  else
  {
    v11 = 0LL;
    v6 = 0LL;
  }
  v8 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 24LL))(v6, a2);
  if ( v8 >= 0 )
    v3 = 1;
  else
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xF0,
      (int)"pcshell\\twinui\\snapcomponent\\lib\\snapflyoutinstance.cpp",
      (const char *)(unsigned int)v8);
  winrt::com_ptr<ISnapComponent>::unconditional_release_ref(&v11);
  return v3;
}
