/*
 * XREFs of ??0TargetedContentLayoutXmlUtilities@TargetedContentLayoutHelpers@CreativeFramework@@QEAA@PEAUHSTRING__@@@Z @ 0x1800C7088
 * Callers:
 *     ?ExtractTargetedContentTilesInLayout@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAAXXZ @ 0x1800C8128 (-ExtractTargetedContentTilesInLayout@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramewo.c)
 * Callees:
 *     ??1?$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18002C074 (--1-$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180043300 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$ActivateInstance@UIXmlDocument@Dom@Xml@Data@Windows@@@wil@@YA?AV?$com_ptr_t@UIXmlDocument@Dom@Xml@Data@Windows@@Uerr_exception_policy@wil@@@0@PEB_W@Z @ 0x1800C49D0 (--$ActivateInstance@UIXmlDocument@Dom@Xml@Data@Windows@@@wil@@YA-AV-$com_ptr_t@UIXmlDocument@Dom.c)
 *     ??$query@UIXmlDocumentIO@Dom@Xml@Data@Windows@@@?$com_ptr_t@UIXmlDocument@Dom@Xml@Data@Windows@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIXmlDocumentIO@Dom@Xml@Data@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x1800C6788 (--$query@UIXmlDocumentIO@Dom@Xml@Data@Windows@@@-$com_ptr_t@UIXmlDocument@Dom@Xml@Data@Windows@@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4310 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
CreativeFramework::TargetedContentLayoutHelpers::TargetedContentLayoutXmlUtilities *__fastcall CreativeFramework::TargetedContentLayoutHelpers::TargetedContentLayoutXmlUtilities::TargetedContentLayoutXmlUtilities(
        CreativeFramework::TargetedContentLayoutHelpers::TargetedContentLayoutXmlUtilities *this,
        HSTRING a2)
{
  __int64 *v4; // rax
  __int64 v5; // r8
  __int64 v6; // rcx
  int v7; // eax
  int v9; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v11; // [rsp+40h] [rbp+18h] BYREF
  __int64 v12; // [rsp+48h] [rbp+20h] BYREF

  *(_QWORD *)this = 0LL;
  v4 = (__int64 *)wil::ActivateInstance<Windows::Data::Xml::Dom::IXmlDocument>((__int64)&v12);
  v5 = *v4;
  *v4 = 0LL;
  v6 = *(_QWORD *)this;
  *(_QWORD *)this = v5;
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>(&v12);
  wil::com_ptr_t<Windows::Data::Xml::Dom::IXmlDocument,wil::err_exception_policy>::query<Windows::Data::Xml::Dom::IXmlDocumentIO>(
    (__int64 (__fastcall ****)(_QWORD, GUID *, _QWORD *))this,
    &v11);
  v7 = (*(__int64 (__fastcall **)(__int64, HSTRING))(*(_QWORD *)v11 + 48LL))(v11, a2);
  if ( v7 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x48,
      (__int64)"shellcommon\\shell\\ContentDeliveryManager\\Utils\\inc\\targetedcontentlayoutxmlutilities.h",
      (const char *)(unsigned int)v7,
      v9);
  wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>(&v11);
  return this;
}
