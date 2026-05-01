/*
 * XREFs of ?TryGetAppsFolderItem@@YA?AU?$com_ptr@UIShellItem@@@winrt@@V?$basic_string_view@GU?$char_traits@G@std@@@std@@0@Z @ 0x1806A7300
 * Callers:
 *     ??R_lambda_e618d2e1a4350f330cc93ddf3d982686_@@QEBA@XZ @ 0x180250390 (--R_lambda_e618d2e1a4350f330cc93ddf3d982686_@@QEBA@XZ.c)
 *     ?GetPinnableItem@@YA?AU?$com_ptr@UIShellItem@@@winrt@@V?$basic_string_view@GU?$char_traits@G@std@@@std@@0@Z @ 0x1806A1FC4 (-GetPinnableItem@@YA-AU-$com_ptr@UIShellItem@@@winrt@@V-$basic_string_view@GU-$char_traits@G@std.c)
 *     _anonymous_namespace_::IsAppsFolderEntryPresent @ 0x1806A310C (_anonymous_namespace_--IsAppsFolderEntryPresent.c)
 *     ?IsItemPinned@PinManager@implementation@Shell@Internal@Windows@winrt@@QEAA_NAEBUhstring@6@0@Z @ 0x1806A320C (-IsItemPinned@PinManager@implementation@Shell@Internal@Windows@winrt@@QEAA_NAEBUhstring@6@0@Z.c)
 *     _anonymous_namespace_::TryGetPackagedAppTileLogo @ 0x1806A776C (_anonymous_namespace_--TryGetPackagedAppTileLogo.c)
 *     _anonymous_namespace_::TryGetRequestorDisplayInformation @ 0x1806A7FD4 (_anonymous_namespace_--TryGetRequestorDisplayInformation.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180085068 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18013240C (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?put@?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@QEAAPEAPEAGXZ @ 0x180163C70 (-put@-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ?CreateFullyQualifiedTileIdentifier@SecondaryTileIdentifierHelpers@@YAJPEBG0PEAPEAG@Z @ 0x1806A0964 (-CreateFullyQualifiedTileIdentifier@SecondaryTileIdentifierHelpers@@YAJPEBG0PEAPEAG@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall TryGetAppsFolderItem(_QWORD *a1, SecondaryTileIdentifierHelpers **a2, __int64 a3)
{
  SecondaryTileIdentifierHelpers *v5; // rdi
  unsigned __int16 *v6; // rax
  unsigned __int16 **v7; // r9
  int FullyQualifiedTileIdentifier; // eax
  void *v9; // rax
  int ppv; // [rsp+20h] [rbp-30h]
  void *v12; // [rsp+38h] [rbp-18h] BYREF
  LPVOID pv; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]

  pv = 0LL;
  v5 = *a2;
  if ( *(_QWORD *)(a3 + 8) )
  {
    v6 = (unsigned __int16 *)wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>::put(&pv);
    FullyQualifiedTileIdentifier = SecondaryTileIdentifierHelpers::CreateFullyQualifiedTileIdentifier(
                                     v5,
                                     *(const unsigned __int16 **)a3,
                                     v6,
                                     v7);
    if ( FullyQualifiedTileIdentifier < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x4B,
        (int)"pcshell\\twinui\\pinmanager\\lib\\PinOperationContext.h",
        (const char *)(unsigned int)FullyQualifiedTileIdentifier,
        ppv);
    v5 = (SecondaryTileIdentifierHelpers *)pv;
  }
  v12 = 0LL;
  if ( SHCreateItemInKnownFolder(
         &FOLDERID_AppsFolder,
         0x4000u,
         (PCWSTR)v5,
         &GUID_43826d1e_e718_42ee_bc55_a1e261c37bfe,
         &v12) < 0 )
  {
    *a1 = 0LL;
    if ( v12 )
      winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)&v12);
  }
  else
  {
    v9 = v12;
    v12 = 0LL;
    *a1 = v9;
  }
  if ( pv )
    CoTaskMemFree(pv);
  return a1;
}
