/*
 * XREFs of ??$query@U?$IIterable@PEAU?$IKeyValuePair@PEAUHSTRING__@@PEAVApplicationDataContainer@Storage@Windows@@@Collections@Foundation@Windows@@@Collections@Foundation@Windows@@@?$com_ptr_t@U?$IMapView@PEAUHSTRING__@@PEAVApplicationDataContainer@Storage@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@U?$IIterable@PEAU?$IKeyValuePair@PEAUHSTRING__@@PEAVApplicationDataContainer@Storage@Windows@@@Collections@Foundation@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x1800D383C
 * Callers:
 *     ?GetSubContainers@SettingsContainer@CommonHelper@CreativeFramework@@AEAAJPEAIPEAPEAU?$IIterator@PEAU?$IKeyValuePair@PEAUHSTRING__@@PEAVApplicationDataContainer@Storage@Windows@@@Collections@Foundation@Windows@@@Collections@Foundation@Windows@@@Z @ 0x1800D3BB8 (-GetSubContainers@SettingsContainer@CommonHelper@CreativeFramework@@AEAAJPEAIPEAPEAU-$IIterator@.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180043300 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4310 (_guard_xfg_dispatch_icall_nop.c)
 */

_QWORD *__fastcall wil::com_ptr_t<Windows::Foundation::Collections::IMapView<HSTRING__ *,Windows::Storage::ApplicationDataContainer *>,wil::err_exception_policy>::query<Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<HSTRING__ *,Windows::Storage::ApplicationDataContainer *> *>>(
        __int64 (__fastcall ****a1)(_QWORD, GUID *, _QWORD *),
        _QWORD *a2)
{
  __int64 (__fastcall ***v2)(_QWORD, GUID *, _QWORD *); // rcx
  int v4; // eax
  int v6; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = *a1;
  *a2 = 0LL;
  v4 = (**v2)(v2, &GUID_a785be1d_159e_53ad_9553_598b03dca048, a2);
  if ( v4 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x1815,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
      (const char *)(unsigned int)v4,
      v6);
  return a2;
}
