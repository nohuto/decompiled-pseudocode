/*
 * XREFs of ?ExtractTargetedContentTilesInLayout@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAAXXZ @ 0x1800DD8FC
 * Callers:
 *     ?ProcessLayoutBindings@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@QEAAXPEAUHSTRING__@@V1ShellPlacementTelemetry@Logging@3@@Z @ 0x1800E0F64 (-ProcessLayoutBindings@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@QEAAXPEAUH.c)
 * Callees:
 *     ?_Xbad_function_call@std@@YAXXZ @ 0x1800042D0 (-_Xbad_function_call@std@@YAXXZ.c)
 *     __security_check_cookie @ 0x180021DB0 (__security_check_cookie.c)
 *     ??1?$vector@V?$com_ptr_t@UIXmlNode@Dom@Xml@Data@Windows@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIXmlNode@Dom@Xml@Data@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAA@XZ @ 0x18007651C (--1-$vector@V-$com_ptr_t@UIXmlNode@Dom@Xml@Data@Windows@@Uerr_exception_policy@wil@@@wil@@V-$all.c)
 *     ??0TargetedContentLayoutXmlUtilities@TargetedContentLayoutHelpers@CreativeFramework@@QEAA@PEAUHSTRING__@@@Z @ 0x1800DC170 (--0TargetedContentLayoutXmlUtilities@TargetedContentLayoutHelpers@CreativeFramework@@QEAA@PEAUHS.c)
 *     ?GetNodeTileId@TargetedContentLayoutXmlUtilities@TargetedContentLayoutHelpers@CreativeFramework@@AEAA?AVHString@Wrappers@WRL@Microsoft@@AEBV?$com_ptr_t@UIXmlNode@Dom@Xml@Data@Windows@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1800DEFFC (-GetNodeTileId@TargetedContentLayoutXmlUtilities@TargetedContentLayoutHelpers@CreativeFramework@.c)
 *     ?GetTargetedContentNodes@TargetedContentLayoutXmlUtilities@TargetedContentLayoutHelpers@CreativeFramework@@AEAA?AV?$vector@V?$com_ptr_t@UIXmlNode@Dom@Xml@Data@Windows@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIXmlNode@Dom@Xml@Data@Windows@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@XZ @ 0x1800DFB68 (-GetTargetedContentNodes@TargetedContentLayoutXmlUtilities@TargetedContentLayoutHelpers@Creative.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=10
void __fastcall CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver::ExtractTargetedContentTilesInLayout(
        HSTRING *this,
        __int64 a2,
        unsigned int a3)
{
  __int64 v4; // rcx
  __int64 *v5; // rbx
  __int64 *v6; // rsi
  __int64 v7; // rdi
  __int64 v8; // rcx
  char v9; // di
  _QWORD *v10; // rcx
  _QWORD *v11; // rdx
  _QWORD *v12; // rdx
  __int64 v13; // [rsp+28h] [rbp-19h] BYREF
  HSTRING string; // [rsp+30h] [rbp-11h] BYREF
  __int64 v15; // [rsp+38h] [rbp-9h] BYREF
  __int64 v16; // [rsp+40h] [rbp-1h] BYREF
  _QWORD v17[4]; // [rsp+48h] [rbp+7h] BYREF
  _QWORD v18[3]; // [rsp+68h] [rbp+27h] BYREF
  _QWORD *v19; // [rsp+80h] [rbp+3Fh]

  CreativeFramework::TargetedContentLayoutHelpers::TargetedContentLayoutXmlUtilities::TargetedContentLayoutXmlUtilities(
    (WCHAR *)&v15,
    *this,
    a3);
  v18[0] = off_1801089E0;
  v18[1] = this;
  v19 = v18;
  CreativeFramework::TargetedContentLayoutHelpers::TargetedContentLayoutXmlUtilities::GetTargetedContentNodes(&v15, v17);
  v5 = (__int64 *)v17[0];
  v6 = (__int64 *)v17[1];
  while ( v5 != v6 )
  {
    v7 = *(_QWORD *)CreativeFramework::TargetedContentLayoutHelpers::TargetedContentLayoutXmlUtilities::GetNodeTileId(
                      v4,
                      &string,
                      v5);
    v8 = *v5;
    v13 = v8;
    if ( v8 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
    v17[3] = &v13;
    v16 = v7;
    if ( !v19 )
      std::_Xbad_function_call();
    v9 = (*(__int64 (__fastcall **)(_QWORD *, __int64 *, __int64 *))(*v19 + 16LL))(v19, &v13, &v16);
    if ( v13 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    WindowsDeleteString(string);
    string = 0LL;
    if ( !v9 )
      break;
    ++v5;
  }
  std::vector<wil::com_ptr_t<Windows::Data::Xml::Dom::IXmlNode,wil::err_exception_policy>>::~vector<wil::com_ptr_t<Windows::Data::Xml::Dom::IXmlNode,wil::err_exception_policy>>((__int64)v17);
  v10 = v19;
  if ( v19 )
  {
    v11 = v18;
    LOBYTE(v11) = v19 != v18;
    (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v19 + 32LL))(v19, v11);
    v10 = 0LL;
    v19 = 0LL;
  }
  if ( v10 )
  {
    v12 = v18;
    LOBYTE(v12) = v10 != v18;
    (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v10 + 32LL))(v10, v12);
  }
  if ( v15 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
}
