/*
 * XREFs of ?GetNumberFromPropertyBag@TargetedContentLayoutHelpers@CreativeFramework@@YANPEB_WPEAU?$IMapView@PEAUHSTRING__@@PEAVTargetedContentValue@TargetedContent@Services@Windows@@@Collections@Foundation@Windows@@PEAE@Z @ 0x1800DF260
 * Callers:
 *     ?RetrieveItemsFromCollection@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAAXPEAUITargetedContentCollection@TargetedContent@Services@Windows@@PEAUHSTRING__@@I@Z @ 0x1800E26D4 (-RetrieveItemsFromCollection@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAA.c)
 * Callees:
 *     __security_check_cookie @ 0x180021DB0 (__security_check_cookie.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180023E6C (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048430 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
double __fastcall CreativeFramework::TargetedContentLayoutHelpers::GetNumberFromPropertyBag(
        const WCHAR *a1,
        __int64 a2,
        _BYTE *a3)
{
  __int64 (__fastcall *v5)(__int64, PVOID, _BYTE *); // rbx
  HSTRING_HEADER *v6; // rax
  int v7; // eax
  unsigned int v8; // r8d
  __int64 (__fastcall *v9)(__int64, PVOID, __int64 *); // rbx
  HSTRING_HEADER *v10; // rax
  int v11; // eax
  int v12; // eax
  __int64 v14; // [rsp+20h] [rbp-40h] BYREF
  const WCHAR *v15; // [rsp+28h] [rbp-38h] BYREF
  double v16; // [rsp+30h] [rbp-30h] BYREF
  HSTRING_HEADER v17; // [rsp+38h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]

  v15 = a1;
  *a3 = 0;
  v16 = 0.0;
  v5 = *(__int64 (__fastcall **)(__int64, PVOID, _BYTE *))(*(_QWORD *)a2 + 64LL);
  v6 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v17, &v15, (unsigned int)a3);
  v7 = v5(a2, v6[1].Reserved.Reserved1, a3);
  if ( v7 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      336LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentlayoutresolver\\layoutresolver.cpp",
      (const char *)(unsigned int)v7,
      v14);
  if ( *a3 )
  {
    v9 = *(__int64 (__fastcall **)(__int64, PVOID, __int64 *))(*(_QWORD *)a2 + 48LL);
    v14 = 0LL;
    v10 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v17, &v15, v8);
    v11 = v9(a2, v10[1].Reserved.Reserved1, &v14);
    if ( v11 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        340LL,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentlayoutresolver\\layoutresolver.cpp",
        (const char *)(unsigned int)v11,
        v14);
    v12 = (*(__int64 (__fastcall **)(__int64, double *))(*(_QWORD *)v14 + 80LL))(v14, &v16);
    if ( v12 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        341LL,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentlayoutresolver\\layoutresolver.cpp",
        (const char *)(unsigned int)v12,
        v14);
    if ( v14 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
  return v16;
}
