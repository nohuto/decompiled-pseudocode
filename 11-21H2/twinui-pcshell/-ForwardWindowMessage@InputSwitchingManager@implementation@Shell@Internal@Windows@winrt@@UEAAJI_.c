/*
 * XREFs of ?ForwardWindowMessage@InputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@UEAAJI_K_J@Z @ 0x1805E1500
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall winrt::Windows::Internal::Shell::implementation::InputSwitchingManager::ForwardWindowMessage(
        winrt::Windows::Internal::Shell::implementation::InputSwitchingManager *this)
{
  int v1; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v1 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 24) + 32LL))(*((_QWORD *)this + 24));
  if ( v1 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x2BB,
    (__int64)"pcshell\\twinui\\inputswitchingmanager\\lib\\inputswitchingmanager.cpp",
    (const char *)(unsigned int)v1);
  return (unsigned int)v1;
}
