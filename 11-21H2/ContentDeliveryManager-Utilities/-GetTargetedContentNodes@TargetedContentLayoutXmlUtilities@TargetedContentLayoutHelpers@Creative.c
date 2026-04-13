/*
 * XREFs of ?GetTargetedContentNodes@TargetedContentLayoutXmlUtilities@TargetedContentLayoutHelpers@CreativeFramework@@AEAA?AV?$vector@V?$com_ptr_t@UIXmlNode@Dom@Xml@Data@Windows@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIXmlNode@Dom@Xml@Data@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@XZ @ 0x1800DFB68
 * Callers:
 *     ?ExtractTargetedContentTilesInLayout@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAAXXZ @ 0x1800DD8FC (-ExtractTargetedContentTilesInLayout@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramewo.c)
 * Callees:
 *     __security_check_cookie @ 0x180021DB0 (__security_check_cookie.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048430 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Xlen@?$vector@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@V?$allocator@V?$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@2@@std@@IEBAXXZ @ 0x18006984C (-_Xlen@-$vector@V-$shared_ptr@UItem@TargetedContentLayoutHelpers@CreativeFramework@@@std@@V-$all.c)
 *     ?_Reallocate@?$vector@V?$com_ptr_t@UIXmlNode@Dom@Xml@Data@Windows@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIXmlNode@Dom@Xml@Data@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@IEAAX_K@Z @ 0x1800E419C (-_Reallocate@-$vector@V-$com_ptr_t@UIXmlNode@Dom@Xml@Data@Windows@@Uerr_exception_policy@wil@@@w.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
_QWORD *__fastcall CreativeFramework::TargetedContentLayoutHelpers::TargetedContentLayoutXmlUtilities::GetTargetedContentNodes(
        __int64 *a1,
        _QWORD *a2)
{
  __int64 v3; // r14
  __int64 (__fastcall *v4)(__int64, HSTRING, __int64 **); // r15
  unsigned __int64 v5; // rdi
  int v6; // eax
  int v7; // eax
  unsigned int i; // esi
  __int64 v9; // rax
  int v10; // eax
  unsigned __int64 v11; // rdx
  __int64 v12; // rdi
  __int64 v13; // r9
  _QWORD *v14; // r8
  __int64 v15; // rdx
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // r9
  unsigned __int64 v18; // r8
  __int64 v19; // rcx
  __int64 v20; // r9
  _QWORD *v21; // rcx
  __int64 v22; // rdx
  unsigned __int64 v23; // rdx
  unsigned __int64 v24; // r9
  unsigned __int64 v25; // r8
  __int64 v26; // rax
  __int64 v28; // [rsp+20h] [rbp-50h] BYREF
  unsigned int v29; // [rsp+28h] [rbp-48h] BYREF
  __int64 *v30; // [rsp+30h] [rbp-40h] BYREF
  int v31; // [rsp+38h] [rbp-38h]
  _QWORD *v32; // [rsp+40h] [rbp-30h]
  HSTRING string; // [rsp+48h] [rbp-28h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+50h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]

  v32 = a2;
  v31 = 0;
  v30 = 0LL;
  v3 = *a1;
  v4 = *(__int64 (__fastcall **)(__int64, HSTRING, __int64 **))(*(_QWORD *)*a1 + 128LL);
  v5 = -1LL;
  do
    ++v5;
  while ( aStartTargetedc[v5] );
  if ( v5 > 0xFFFFFFFF )
  {
    LODWORD(v5) = -1;
    RaiseException(0xC000000D, 1u, 0, 0LL);
  }
  WindowsCreateStringReference(L"start:TargetedContentTile", v5, &hstringHeader, &string);
  v6 = v4(v3, string, &v30);
  if ( v6 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      137LL,
      (__int64)"shellcommon\\Shell\\ContentDeliveryManager\\Utils\\inc\\targetedcontentlayoutxmlutilities.h",
      (const char *)(unsigned int)v6,
      v28);
  v7 = (*(__int64 (__fastcall **)(__int64 *, unsigned int *))(*v30 + 48))(v30, &v29);
  if ( v7 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      141LL,
      (__int64)"shellcommon\\Shell\\ContentDeliveryManager\\Utils\\inc\\targetedcontentlayoutxmlutilities.h",
      (const char *)(unsigned int)v7,
      v28);
  *a2 = 0LL;
  a2[1] = 0LL;
  a2[2] = 0LL;
  v31 = 1;
  for ( i = 0; i < v29; ++i )
  {
    v28 = 0LL;
    v9 = *v30;
    v28 = 0LL;
    v10 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, __int64 *))(v9 + 56))(v30, i, &v28);
    if ( v10 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        147LL,
        (__int64)"shellcommon\\Shell\\ContentDeliveryManager\\Utils\\inc\\targetedcontentlayoutxmlutilities.h",
        (const char *)(unsigned int)v10,
        v28);
    v11 = a2[1];
    if ( (unsigned __int64)&v28 >= v11 || *a2 > (unsigned __int64)&v28 )
    {
      v20 = a2[2];
      v21 = (_QWORD *)a2[1];
      if ( v11 == v20 && !((__int64)(v20 - v11) >> 3) )
      {
        v22 = (__int64)(v11 - *a2) >> 3;
        if ( v22 == 0x1FFFFFFFFFFFFFFFLL )
          std::vector<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>>::_Xlen();
        v23 = v22 + 1;
        v24 = (v20 - *a2) >> 3;
        v25 = 0LL;
        if ( 0x1FFFFFFFFFFFFFFFLL - (v24 >> 1) >= v24 )
          v25 = v24 + (v24 >> 1);
        if ( v25 >= v23 )
          v23 = v25;
        std::vector<wil::com_ptr_t<Windows::Data::Xml::Dom::IXmlNode,wil::err_exception_policy>>::_Reallocate(a2, v23);
        v21 = (_QWORD *)a2[1];
      }
      v26 = v28;
      *v21 = v28;
      if ( v26 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 8LL))(v28);
    }
    else
    {
      v12 = ((__int64)&v28 - *a2) >> 3;
      v13 = a2[2];
      v14 = (_QWORD *)a2[1];
      if ( v11 == v13 && !((__int64)(v13 - v11) >> 3) )
      {
        v15 = (__int64)(v11 - *a2) >> 3;
        if ( v15 == 0x1FFFFFFFFFFFFFFFLL )
          std::vector<std::shared_ptr<CreativeFramework::TargetedContentLayoutHelpers::Item>>::_Xlen();
        v16 = v15 + 1;
        v17 = (v13 - *a2) >> 3;
        v18 = 0LL;
        if ( 0x1FFFFFFFFFFFFFFFLL - (v17 >> 1) >= v17 )
          v18 = v17 + (v17 >> 1);
        if ( v18 >= v16 )
          v16 = v18;
        std::vector<wil::com_ptr_t<Windows::Data::Xml::Dom::IXmlNode,wil::err_exception_policy>>::_Reallocate(a2, v16);
        v14 = (_QWORD *)a2[1];
      }
      v19 = *(_QWORD *)(*a2 + 8 * v12);
      *v14 = v19;
      if ( v19 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 8LL))(v19);
    }
    a2[1] += 8LL;
    if ( v28 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
  }
  if ( v30 )
    (*(void (__fastcall **)(__int64 *))(*v30 + 16))(v30);
  return a2;
}
