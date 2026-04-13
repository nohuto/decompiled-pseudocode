/*
 * XREFs of ??$query@U?$IIterable@PEAU?$IKeyValuePair@U_GUID@@PEAUIBackgroundTaskRegistration@Background@ApplicationModel@Windows@@@Collections@Foundation@Windows@@@Collections@Foundation@Windows@@@?$com_ptr_t@U?$IMapView@U_GUID@@PEAUIBackgroundTaskRegistration@Background@ApplicationModel@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@U?$IIterable@PEAU?$IKeyValuePair@U_GUID@@PEAUIBackgroundTaskRegistration@Background@ApplicationModel@Windows@@@Collections@Foundation@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x1800D26E8
 * Callers:
 *     CreativeFramework::CommonHelper::EnumerateRegisteredTasks__lambda_7779f375762769ec339d0b17f2cf373b___ @ 0x1800D20B0 (CreativeFramework--CommonHelper--EnumerateRegisteredTasks__lambda_7779f375762769ec339d0b17f2cf37.c)
 *     CreativeFramework::CommonHelper::EnumerateRegisteredTasks__lambda_9bf169d33d4e1f2aada1302272b1c7f2___ @ 0x1800D2354 (CreativeFramework--CommonHelper--EnumerateRegisteredTasks__lambda_9bf169d33d4e1f2aada1302272b1c7.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180043300 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4310 (_guard_xfg_dispatch_icall_nop.c)
 */

_QWORD *__fastcall wil::com_ptr_t<Windows::Foundation::Collections::IMapView<_GUID,Windows::ApplicationModel::Background::IBackgroundTaskRegistration *>,wil::err_exception_policy>::query<Windows::Foundation::Collections::IIterable<Windows::Foundation::Collections::IKeyValuePair<_GUID,Windows::ApplicationModel::Background::IBackgroundTaskRegistration *> *>>(
        __int64 (__fastcall ****a1)(_QWORD, GUID *, _QWORD *),
        _QWORD *a2)
{
  __int64 (__fastcall ***v2)(_QWORD, GUID *, _QWORD *); // rcx
  int v4; // eax
  int v6; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = *a1;
  *a2 = 0LL;
  v4 = (**v2)(v2, &GUID_80fb0327_5a00_55cc_85db_a852719981b9, a2);
  if ( v4 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x1815,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
      (const char *)(unsigned int)v4,
      v6);
  return a2;
}
