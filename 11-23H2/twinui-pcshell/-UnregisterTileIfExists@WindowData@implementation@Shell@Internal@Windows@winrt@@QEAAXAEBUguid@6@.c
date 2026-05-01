/*
 * XREFs of ?UnregisterTileIfExists@WindowData@implementation@Shell@Internal@Windows@winrt@@QEAAXAEBUguid@6@@Z @ 0x18063A1F0
 * Callers:
 *     ?EnsureTileRemoved@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUITileNotification@Tiles@456@@Z @ 0x1802E7B8C (-EnsureTileRemoved@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBUITileNoti.c)
 * Callees:
 *     ??8winrt@@YA_NAEBUguid@0@0@Z @ 0x1800D8AF0 (--8winrt@@YA_NAEBUguid@0@0@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall winrt::Windows::Internal::Shell::implementation::WindowData::UnregisterTileIfExists(
        winrt::Windows::Internal::Shell::implementation::WindowData *this,
        const struct winrt::guid *a2)
{
  _QWORD *v3; // rdi
  _QWORD *i; // rbx
  __int64 v5; // rsi
  int v6; // eax
  int v7[4]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v3 = (_QWORD *)*((_QWORD *)this + 4);
  for ( i = (_QWORD *)*v3; i != v3; i = (_QWORD *)*i )
  {
    v5 = i[4];
    *(_OWORD *)v7 = *(_OWORD *)(v5 + 72);
    if ( winrt::operator==(v7, a2) && *(_BYTE *)(v5 + 185) )
    {
      v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v5 + 112) + 96LL))(
             *(_QWORD *)(v5 + 112),
             *(_QWORD *)(v5 + 32));
      if ( v6 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0xBB,
          (int)"pcshell\\twinui\\windowtabhost\\lib\\tabproxywindow.cpp",
          (const char *)(unsigned int)v6,
          v7[0]);
      *(_BYTE *)(v5 + 185) = 0;
    }
  }
}
