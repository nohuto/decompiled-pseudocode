/*
 * XREFs of ??0TargetedContentLayoutXmlUtilities@TargetedContentLayoutHelpers@CreativeFramework@@QEAA@PEAUHSTRING__@@@Z @ 0x1800DC170
 * Callers:
 *     ?ExtractTargetedContentTilesInLayout@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAAXXZ @ 0x1800DD8FC (-ExtractTargetedContentTilesInLayout@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramewo.c)
 * Callees:
 *     __security_check_cookie @ 0x180021DB0 (__security_check_cookie.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180023E6C (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048430 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
WCHAR *__fastcall CreativeFramework::TargetedContentLayoutHelpers::TargetedContentLayoutXmlUtilities::TargetedContentLayoutXmlUtilities(
        WCHAR *this,
        HSTRING a2,
        unsigned int a3)
{
  HSTRING_HEADER *v5; // rax
  int v6; // eax
  int v7; // eax
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 (__fastcall ***v10)(_QWORD, GUID *, __int64 *); // rdx
  __int64 (__fastcall ***v11)(_QWORD, GUID *, __int64 *); // rcx
  int v12; // eax
  int v13; // eax
  __int64 v15; // [rsp+20h] [rbp-60h] BYREF
  int v16; // [rsp+28h] [rbp-58h]
  __int64 v17; // [rsp+30h] [rbp-50h] BYREF
  __int64 v18; // [rsp+38h] [rbp-48h] BYREF
  const WCHAR *v19[2]; // [rsp+40h] [rbp-40h] BYREF
  HSTRING_HEADER v20; // [rsp+50h] [rbp-30h] BYREF
  __int64 v21; // [rsp+68h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+8h]

  v19[1] = this;
  v16 = 0;
  *(_QWORD *)this = 0LL;
  v19[0] = L"Windows.Data.Xml.Dom.XmlDocument";
  v17 = 0LL;
  v5 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v20, v19, a3);
  v6 = RoActivateInstance(v5[1].Reserved.Reserved1, &v17);
  if ( v6 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      1695LL,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\winrt.h",
      (const char *)(unsigned int)v6,
      v15);
  v21 = 0LL;
  v15 = 0LL;
  v7 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v17)(
         v17,
         &GUID_f7f3a506_1e87_42d6_bcfb_b8c809fa5494,
         &v15);
  if ( v7 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      6136LL,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
      (const char *)(unsigned int)v7,
      v15);
  v16 = 3;
  if ( v17 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  v8 = v15;
  v9 = 0LL;
  v15 = 0LL;
  v10 = *(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this;
  *(_QWORD *)this = v8;
  if ( v10 )
  {
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *)))(*v10)[2])(v10);
    v9 = v15;
  }
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  v11 = *(__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))this;
  v18 = 0LL;
  v12 = (**v11)(v11, &GUID_6cd0e74e_ee65_4489_9ebf_ca43e87ba637, &v18);
  if ( v12 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      6136LL,
      (__int64)"onecore\\internal\\sdk\\inc\\wil\\opensource\\wil\\result_macros.h",
      (const char *)(unsigned int)v12,
      v15);
  v13 = (*(__int64 (__fastcall **)(__int64, HSTRING))(*(_QWORD *)v18 + 48LL))(v18, a2);
  if ( v13 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      72LL,
      (__int64)"shellcommon\\Shell\\ContentDeliveryManager\\Utils\\inc\\targetedcontentlayoutxmlutilities.h",
      (const char *)(unsigned int)v13,
      v15);
  if ( v18 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  return this;
}
