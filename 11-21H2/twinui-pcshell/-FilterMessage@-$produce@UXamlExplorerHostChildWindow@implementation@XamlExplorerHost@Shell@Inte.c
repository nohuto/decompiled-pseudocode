/*
 * XREFs of ?FilterMessage@?$produce@UXamlExplorerHostChildWindow@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UIXamlExplorerHostChildWindow@34567@@impl@winrt@@UEAAH_KPEA_N@Z @ 0x180125E40
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18012A008 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall winrt::impl::produce<winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlExplorerHostChildWindow,winrt::Windows::Internal::Shell::XamlExplorerHost::IXamlExplorerHostChildWindow>::FilterMessage(
        __int64 a1,
        __int64 a2,
        bool *a3)
{
  __int64 v4; // rcx
  int v5; // eax
  int v7; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v9; // [rsp+30h] [rbp+8h] BYREF

  if ( a1 )
    v4 = a1 + 40;
  else
    v4 = 56LL;
  v5 = (*(__int64 (__fastcall **)(_QWORD, __int64, int *))(**(_QWORD **)v4 + 40LL))(*(_QWORD *)v4, a2, &v9);
  if ( v5 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xA1,
      (unsigned int)"pcshell\\twinui\\xamlexplorerhost\\lib\\xamlexplorerhostchildwindow.cpp",
      (const char *)(unsigned int)v5,
      v7);
  *a3 = v9 != 0;
  return 0LL;
}
