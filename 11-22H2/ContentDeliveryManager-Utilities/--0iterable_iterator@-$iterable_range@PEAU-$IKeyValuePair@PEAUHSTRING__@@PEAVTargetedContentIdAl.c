/*
 * XREFs of ??0iterable_iterator@?$iterable_range@PEAU?$IKeyValuePair@PEAUHSTRING__@@PEAVTargetedContentIdAliasValue@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAU?$IIterable@PEAU?$IKeyValuePair@PEAUHSTRING__@@PEAVTargetedContentIdAliasValue@Internal@TargetedContent@Services@Windows@@@Collections@Foundation@Windows@@@Collections@Foundation@Windows@@@Z @ 0x1800AC7B8
 * Callers:
 *     ?EnumerateAliasMap@SwapStartTileService@Actions@CreativeFramework@@AEAAXPEAUITargetedContentIdAliasStore@Internal@TargetedContent@Services@Windows@@AEBV?$function@$$A6A_NPEB_WPEAUITargetedContentIdAliasValue@Internal@TargetedContent@Services@Windows@@@Z@std@@@Z @ 0x1800AD638 (-EnumerateAliasMap@SwapStartTileService@Actions@CreativeFramework@@AEAAXPEAUITargetedContentIdAl.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180037CF0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180043350 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4360 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 *__fastcall wil::iterable_range<Windows::Foundation::Collections::IKeyValuePair<HSTRING__ *,Windows::Services::TargetedContent::Internal::TargetedContentIdAliasValue *> *,wil::err_exception_policy>::iterable_iterator::iterable_iterator(
        __int64 *a1,
        __int64 a2)
{
  __int64 (__fastcall *v4)(__int64, __int64 *); // rbx
  int v5; // eax
  int v6; // eax
  int v8; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  char v10; // [rsp+38h] [rbp+10h] BYREF

  *a1 = 0LL;
  a1[2] = 0LL;
  v4 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)a2 + 48LL);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(a1);
  v5 = v4(a2, a1);
  if ( v5 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x1815,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
      (const char *)(unsigned int)v5,
      v8);
  v6 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)*a1 + 56LL))(*a1, &v10);
  if ( v6 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x1815,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
      (const char *)(unsigned int)v6,
      v8);
  *((_DWORD *)a1 + 2) = (v10 != 0) - 1;
  return a1;
}
