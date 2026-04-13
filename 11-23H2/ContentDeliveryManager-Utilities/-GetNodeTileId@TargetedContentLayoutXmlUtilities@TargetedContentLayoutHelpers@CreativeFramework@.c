/*
 * XREFs of ?GetNodeTileId@TargetedContentLayoutXmlUtilities@TargetedContentLayoutHelpers@CreativeFramework@@AEAA?AVHString@Wrappers@WRL@Microsoft@@AEBV?$com_ptr_t@UIXmlNode@Dom@Xml@Data@Windows@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1800C8F1C
 * Callers:
 *     ?EnumerateTargetedContentNodes@TargetedContentLayoutXmlUtilities@TargetedContentLayoutHelpers@CreativeFramework@@QEAAX$$QEAV?$function@$$A6A_NV?$com_ptr_t@UIXmlNode@Dom@Xml@Data@Windows@@Uerr_exception_policy@wil@@@wil@@PEAUHSTRING__@@@Z@std@@@Z @ 0x1800C7E78 (-EnumerateTargetedContentNodes@TargetedContentLayoutXmlUtilities@TargetedContentLayoutHelpers@Cr.c)
 * Callees:
 *     __security_check_cookie @ 0x1800224C0 (__security_check_cookie.c)
 *     ??1?$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18002C074 (--1-$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180043300 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$query@UIXmlAttribute@Dom@Xml@Data@Windows@@@?$com_ptr_t@UIXmlNode@Dom@Xml@Data@Windows@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIXmlAttribute@Dom@Xml@Data@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x1800C66C8 (--$query@UIXmlAttribute@Dom@Xml@Data@Windows@@@-$com_ptr_t@UIXmlNode@Dom@Xml@Data@Windows@@Uerr_.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4310 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
HSTRING *__fastcall CreativeFramework::TargetedContentLayoutHelpers::TargetedContentLayoutXmlUtilities::GetNodeTileId(
        __int64 a1,
        HSTRING *a2,
        _QWORD *a3)
{
  int v4; // eax
  __int64 v5; // rbx
  __int64 (__fastcall *v6)(__int64, HSTRING, _QWORD); // r15
  unsigned __int64 v7; // rdi
  int v8; // eax
  __int64 v9; // rbx
  __int64 (__fastcall *v10)(__int64, HSTRING *); // rdi
  int v11; // eax
  __int64 (__fastcall ***v13)(_QWORD, GUID *, _QWORD *); // [rsp+28h] [rbp-48h] BYREF
  __int64 v14; // [rsp+30h] [rbp-40h] BYREF
  __int64 v15[2]; // [rsp+38h] [rbp-38h] BYREF
  HSTRING string; // [rsp+48h] [rbp-28h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+50h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]

  v15[1] = (__int64)a2;
  v14 = 0LL;
  v4 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)*a3 + 128LL))(*a3, &v14);
  if ( v4 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xB5,
      (__int64)"shellcommon\\shell\\ContentDeliveryManager\\Utils\\inc\\targetedcontentlayoutxmlutilities.h",
      (const char *)(unsigned int)v4,
      0);
  v13 = 0LL;
  v5 = v14;
  v6 = *(__int64 (__fastcall **)(__int64, HSTRING, _QWORD))(*(_QWORD *)v14 + 64LL);
  v7 = -1LL;
  do
    ++v7;
  while ( aTileid[v7] );
  if ( v7 > 0xFFFFFFFF )
  {
    LODWORD(v7) = -1;
    RaiseException(0xC000000D, 1u, 0, 0LL);
  }
  WindowsCreateStringReference(L"TileID", v7, &hstringHeader, &string);
  v8 = v6(v5, string, &v13);
  if ( v8 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xB8,
      (__int64)"shellcommon\\shell\\ContentDeliveryManager\\Utils\\inc\\targetedcontentlayoutxmlutilities.h",
      (const char *)(unsigned int)v8,
      0);
  *a2 = 0LL;
  wil::com_ptr_t<Windows::Data::Xml::Dom::IXmlNode,wil::err_exception_policy>::query<Windows::Data::Xml::Dom::IXmlAttribute>(
    &v13,
    v15);
  v9 = v15[0];
  v10 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v15[0] + 64LL);
  WindowsDeleteString(*a2);
  *a2 = 0LL;
  v11 = v10(v9, a2);
  if ( v11 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xBC,
      (__int64)"shellcommon\\shell\\ContentDeliveryManager\\Utils\\inc\\targetedcontentlayoutxmlutilities.h",
      (const char *)(unsigned int)v11,
      1);
  wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>(v15);
  wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>((__int64 *)&v13);
  wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>(&v14);
  return a2;
}
