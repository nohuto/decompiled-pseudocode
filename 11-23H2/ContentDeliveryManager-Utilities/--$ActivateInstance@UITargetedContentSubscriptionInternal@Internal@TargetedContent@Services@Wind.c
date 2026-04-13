/*
 * XREFs of ??$ActivateInstance@UITargetedContentSubscriptionInternal@Internal@TargetedContent@Services@Windows@@@wil@@YA?AV?$com_ptr_t@UITargetedContentSubscriptionInternal@Internal@TargetedContent@Services@Windows@@Uerr_exception_policy@wil@@@0@PEB_W@Z @ 0x1800C491C
 * Callers:
 *     ?RetrieveLayoutAndItems@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAAXPEAUITargetedContentIdAliasStore@Internal@TargetedContent@Services@Windows@@V1ShellPlacementTelemetry@Logging@3@@Z @ 0x1800CBB7C (-RetrieveLayoutAndItems@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAAXPEAU.c)
 * Callees:
 *     __security_check_cookie @ 0x1800224C0 (__security_check_cookie.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180024270 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??1?$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18002C074 (--1-$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180043300 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@UIInspectable@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x180072488 (-reset@-$com_ptr_t@UIInspectable@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??$query@UITargetedContentSubscriptionInternal@Internal@TargetedContent@Services@Windows@@@?$com_ptr_t@UIInspectable@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UITargetedContentSubscriptionInternal@Internal@TargetedContent@Services@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x1800C6668 (--$query@UITargetedContentSubscriptionInternal@Internal@TargetedContent@Services@Windows@@@-$com.c)
 */

__int64 __fastcall wil::ActivateInstance<Windows::Services::TargetedContent::Internal::ITargetedContentSubscriptionInternal>(
        __int64 a1)
{
  unsigned int v2; // r8d
  HSTRING_HEADER *v3; // rax
  int v4; // eax
  __int64 v6[2]; // [rsp+20h] [rbp-58h] BYREF
  const WCHAR *v7; // [rsp+30h] [rbp-48h] BYREF
  HSTRING_HEADER v8; // [rsp+48h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v7 = L"Windows.Services.TargetedContent.Internal.TargetedContentSubscriptionInternal";
  v6[0] = 0LL;
  wil::com_ptr_t<IInspectable,wil::err_exception_policy>::reset(v6);
  v3 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v8, &v7, v2);
  v4 = RoActivateInstance(v3[1].Reserved.Reserved1, v6);
  if ( v4 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x69F,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\winrt.h",
      (const char *)(unsigned int)v4,
      v6[0]);
  wil::com_ptr_t<IInspectable,wil::err_exception_policy>::query<Windows::Services::TargetedContent::Internal::ITargetedContentSubscriptionInternal>(
    v6,
    a1);
  wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>(v6);
  return a1;
}
