/*
 * XREFs of ?NeedBinding@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAA_NPEAUITargetedContentIdAliasStoreStatics@Internal@TargetedContent@Services@Windows@@V1ShellPlacementTelemetry@Logging@3@@Z @ 0x1800CA5A0
 * Callers:
 *     ?ProcessLayoutBindings@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@QEAAXPEAUHSTRING__@@V1ShellPlacementTelemetry@Logging@3@@Z @ 0x1800CABE8 (-ProcessLayoutBindings@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@QEAAXPEAUH.c)
 * Callees:
 *     __security_check_cookie @ 0x1800224C0 (__security_check_cookie.c)
 *     ??1?$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18002C074 (--1-$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180043350 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Tidy@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAX_N_K@Z @ 0x1800627B4 (-_Tidy@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAX_N_K@Z.c)
 *     ??0?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAA@PEB_W@Z @ 0x18008F79C (--0-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAA@PEB_W@Z.c)
 *     ?compare@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEBAHAEBV12@@Z @ 0x1800A8BC4 (-compare@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEBAHAEBV12@@Z.c)
 *     ??1LayoutResolver@ShellPlacementTelemetry@Logging@CreativeFramework@@QEAA@XZ @ 0x1800C73E8 (--1LayoutResolver@ShellPlacementTelemetry@Logging@CreativeFramework@@QEAA@XZ.c)
 *     ?GetLayoutType@Settings@TargetedContentLayoutHelpers@CreativeFramework@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEAUHSTRING__@@PEB_W@Z @ 0x1800C89A0 (-GetLayoutType@Settings@TargetedContentLayoutHelpers@CreativeFramework@@YA-AV-$basic_string@_WU-.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4360 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
char __fastcall CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver::NeedBinding(
        __int64 a1,
        __int64 *a2,
        CreativeFramework::Logging::ShellPlacementTelemetry::LayoutResolver *a3)
{
  int v6; // eax
  char v7; // bl
  bool v8; // di
  __int64 v9; // rax
  int v10; // eax
  __int64 v11; // rax
  int v12; // eax
  int v13; // eax
  int v15; // [rsp+20h] [rbp-79h]
  _BYTE v16[4]; // [rsp+30h] [rbp-69h] BYREF
  int v17; // [rsp+34h] [rbp-65h] BYREF
  __int64 v18; // [rsp+38h] [rbp-61h] BYREF
  __int64 v19[2]; // [rsp+40h] [rbp-59h] BYREF
  _QWORD v20[4]; // [rsp+50h] [rbp-49h] BYREF
  _QWORD v21[4]; // [rsp+70h] [rbp-29h] BYREF
  _QWORD v22[4]; // [rsp+90h] [rbp-9h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+5Fh]

  v19[1] = (__int64)a3;
  v6 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, _BYTE *))(*a2 + 56))(a2, *(_QWORD *)(a1 + 8), v16);
  v7 = 0;
  if ( v6 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x99,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentlayoutresolver\\layoutresolver.cpp",
      (const char *)(unsigned int)v6,
      v15);
  v8 = 0;
  if ( v16[0] )
  {
    v9 = *a2;
    v19[0] = 0LL;
    v10 = (*(__int64 (__fastcall **)(__int64 *, _QWORD, _QWORD, __int64 *))(v9 + 64))(a2, *(_QWORD *)(a1 + 8), 0LL, v19);
    if ( v10 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xA2,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentlayoutresolver\\layoutresolver.cpp",
        (const char *)(unsigned int)v10,
        v15);
    v18 = 0LL;
    v11 = *(_QWORD *)v19[0];
    v18 = 0LL;
    v12 = (*(__int64 (__fastcall **)(__int64, __int64 *))(v11 + 72))(v19[0], &v18);
    if ( v12 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0xA6,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentlayoutresolver\\layoutresolver.cpp",
        (const char *)(unsigned int)v12,
        v15);
    v17 = 0;
    if ( v18 )
    {
      v13 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v18 + 56LL))(v18, &v17);
      if ( v13 < 0 )
        wil::details::in1diag3::Throw_Hr(
          retaddr,
          (void *)0xAB,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentlayoutresolver\\layoutresolver.cpp",
          (const char *)(unsigned int)v13,
          v15);
      v8 = v17 != 0;
    }
    wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>(&v18);
    wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>(v19);
  }
  CreativeFramework::TargetedContentLayoutHelpers::Settings::GetLayoutType(
    (CreativeFramework::Policy *)v20,
    *(HSTRING *)(a1 + 8),
    (const WCHAR *)&stru_1801786F8);
  CreativeFramework::TargetedContentLayoutHelpers::Settings::GetLayoutType(
    (CreativeFramework::Policy *)v22,
    *(HSTRING *)(a1 + 8),
    (const WCHAR *)&stru_1801786D8);
  std::wstring::wstring((__int64)v21);
  if ( !v16[0]
    || !v8
    || !v20[2]
    || (!(unsigned int)std::wstring::compare((__int64)v20, v21)
     || !(unsigned int)std::wstring::compare((__int64)v22, v21))
    && (unsigned int)std::wstring::compare((__int64)v22, v20) )
  {
    v7 = 1;
  }
  std::wstring::_Tidy(v21, 1, 0LL);
  std::wstring::_Tidy(v22, 1, 0LL);
  std::wstring::_Tidy(v20, 1, 0LL);
  CreativeFramework::Logging::ShellPlacementTelemetry::LayoutResolver::~LayoutResolver(a3);
  return v7;
}
