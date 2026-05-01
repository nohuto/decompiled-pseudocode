/*
 * XREFs of ?RegisterHotKeys@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x1801541E8
 * Callers:
 *     ?subscribe_to_services@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@UEAAXPEAUIServiceProvider@@@Z @ 0x180153E30 (-subscribe_to_services@MeetAndChatManager@implementation@Shell@Internal@Windows@winrt@@UEAAXPEAU.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall winrt::Windows::Internal::Shell::implementation::MeetAndChatManager::RegisterHotKeys(
        winrt::Windows::Internal::Shell::implementation::MeetAndChatManager *this)
{
  int v1; // r9d
  __int64 v2; // rcx
  int v3; // eax
  int v4; // [rsp+20h] [rbp-38h]
  _DWORD v5[4]; // [rsp+30h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v1 = (int)this;
  v5[0] = 2;
  v2 = *((_QWORD *)this + 20);
  v5[1] = 107;
  v5[2] = 16392;
  v5[3] = 67;
  v4 = v1 + 168;
  v3 = (*(__int64 (__fastcall **)(__int64, __int64, _DWORD *))(*(_QWORD *)v2 + 56LL))(v2, 1LL, v5);
  if ( v3 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x1E9,
      (int)"pcshell\\twinui\\meetandchatmanager\\lib\\meetandchatmanager.cpp",
      (const char *)(unsigned int)v3,
      v4);
}
