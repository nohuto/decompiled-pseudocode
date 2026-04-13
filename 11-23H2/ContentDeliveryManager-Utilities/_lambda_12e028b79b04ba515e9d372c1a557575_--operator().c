/*
 * XREFs of _lambda_12e028b79b04ba515e9d372c1a557575_::operator() @ 0x1800C77B0
 * Callers:
 *     ?ExtractTargetedContentTilesInCollection@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAAXPEB_W@Z @ 0x1800C7F70 (-ExtractTargetedContentTilesInCollection@LayoutResolver@TargetedContentLayoutHelpers@CreativeFra.c)
 * Callees:
 *     __security_check_cookie @ 0x1800224C0 (__security_check_cookie.c)
 *     ??1?$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18002C074 (--1-$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180043300 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Tidy@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAX_N_K@Z @ 0x180062764 (-_Tidy@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAX_N_K@Z.c)
 *     ?push_back@?$vector@UTile@TargetedContentLayoutHelpers@CreativeFramework@@V?$allocator@UTile@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@std@@QEAAX$$QEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@@Z @ 0x1800CCEB8 (-push_back@-$vector@UTile@TargetedContentLayoutHelpers@CreativeFramework@@V-$allocator@UTile@Tar.c)
 *     ??0Tile@TargetedContentLayoutHelpers@CreativeFramework@@QEAA@PEB_W@Z @ 0x1800CF24C (--0Tile@TargetedContentLayoutHelpers@CreativeFramework@@QEAA@PEB_W@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4310 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
char __fastcall lambda_12e028b79b04ba515e9d372c1a557575_::operator()(
        __int64 *a1,
        __int64 (__fastcall ***a2)(_QWORD, GUID *, __int64 *))
{
  __int64 (__fastcall **v3)(_QWORD, GUID *, __int64 *); // rax
  int v4; // eax
  __int64 v5; // rbx
  __int64 (__fastcall *v6)(__int64, HSTRING *); // rdi
  int v7; // eax
  __int64 v8; // rbx
  const wchar_t *StringRawBuffer; // rax
  __int64 v10; // rax
  HSTRING string; // [rsp+20h] [rbp-50h] BYREF
  __int64 v13; // [rsp+28h] [rbp-48h] BYREF
  _QWORD v14[7]; // [rsp+30h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]

  v3 = *a2;
  v13 = 0LL;
  v4 = (*v3)(a2, &GUID_9be3b1e0_66b3_4cf5_b034_7d2a2db8132a, &v13);
  if ( v4 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xC3,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentlayoutresolver\\layoutresolver.cpp",
      (const char *)(unsigned int)v4,
      (int)string);
  string = 0LL;
  v5 = v13;
  v6 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v13 + 56LL);
  WindowsDeleteString(0LL);
  string = 0LL;
  v7 = v6(v5, &string);
  if ( v7 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0xC5,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentlayoutresolver\\layoutresolver.cpp",
      (const char *)(unsigned int)v7,
      (int)string);
  v8 = *a1;
  StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
  v10 = CreativeFramework::TargetedContentLayoutHelpers::Tile::Tile(
          (CreativeFramework::TargetedContentLayoutHelpers::Tile *)v14,
          StringRawBuffer);
  std::vector<CreativeFramework::TargetedContentLayoutHelpers::Tile>::push_back(v8 + 64, v10);
  std::wstring::_Tidy(v14, 1, 0LL);
  WindowsDeleteString(string);
  string = 0LL;
  wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>(&v13);
  return 1;
}
