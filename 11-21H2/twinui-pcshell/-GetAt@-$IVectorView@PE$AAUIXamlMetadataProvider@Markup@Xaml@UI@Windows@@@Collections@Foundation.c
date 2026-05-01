/*
 * XREFs of ?GetAt@?$IVectorView@PE$AAUIXamlMetadataProvider@Markup@Xaml@UI@Windows@@@Collections@Foundation@Windows@@UE$AAAPE$AAUIXamlMetadataProvider@Markup@Xaml@UI@4@I@Z @ 0x180062E44
 * Callers:
 *     ?EnsureMetadataRegistered@XamlExplorerHost@@QE$AAAXXZ @ 0x180062B98 (-EnsureMetadataRegistered@XamlExplorerHost@@QE$AAAXXZ.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?__abi_WinRTraiseException@@YAXJ@Z @ 0x18041F378 (-__abi_WinRTraiseException@@YAXJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Foundation::Collections::IVectorView<Windows::UI::Xaml::Markup::IXamlMetadataProvider __gc *>::GetAt(
        __int64 a1,
        __int64 a2)
{
  int v2; // eax
  __int64 v3; // rdx
  __int64 v4; // rbx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = 0LL;
  v2 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)a1 + 48LL))(a1, a2, &v6);
  if ( v2 < 0 )
  {
    __abi_WinRTraiseException(v2);
    JUMPOUT(0x180062ECCLL);
  }
  v3 = v6;
  v4 = v6;
  if ( v6 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
    v3 = v6;
  }
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  return v4;
}
