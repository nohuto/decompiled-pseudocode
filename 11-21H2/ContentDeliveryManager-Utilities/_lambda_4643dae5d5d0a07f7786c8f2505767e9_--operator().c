/*
 * XREFs of _lambda_4643dae5d5d0a07f7786c8f2505767e9_::operator() @ 0x1800DC8AC
 * Callers:
 *     ?ExtractTargetedContentTilesInCollection@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAAXPEB_W@Z @ 0x1800DD570 (-ExtractTargetedContentTilesInCollection@LayoutResolver@TargetedContentLayoutHelpers@CreativeFra.c)
 *     std::_Func_impl_std::_Callable_obj__lambda_4643dae5d5d0a07f7786c8f2505767e9__0__std::allocator_std::_Func_class_bool_WindowsInternal::Shell::UnifiedTile::IUnifiedTileIdentifier___std::_Nil_std::_Nil_std::_Nil_std::_Nil_std::_Nil_std::_Nil____bool_WindowsInternal::Shell::UnifiedTile::IUnifiedTileIdentifier___std::_Nil_std::_Nil_std::_Nil_std::_Nil_std::_Nil_std::_Nil_::_Do_call @ 0x1800E3F50 (std--_Func_impl_std--_Callable_obj__lambda_4643dae5d5d0a07f7786c8f2505767e9__0__std_ea_1800E3F50.c)
 * Callees:
 *     __security_check_cookie @ 0x180021DB0 (__security_check_cookie.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048430 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?push_back@?$vector@UTile@TargetedContentLayoutHelpers@CreativeFramework@@V?$allocator@UTile@TargetedContentLayoutHelpers@CreativeFramework@@@std@@@std@@QEAAX$$QEAUTile@TargetedContentLayoutHelpers@CreativeFramework@@@Z @ 0x1800E45F8 (-push_back@-$vector@UTile@TargetedContentLayoutHelpers@CreativeFramework@@V-$allocator@UTile@Tar.c)
 *     ??0Tile@TargetedContentLayoutHelpers@CreativeFramework@@QEAA@PEB_W@Z @ 0x1800E6EEC (--0Tile@TargetedContentLayoutHelpers@CreativeFramework@@QEAA@PEB_W@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
char __fastcall lambda_4643dae5d5d0a07f7786c8f2505767e9_::operator()(
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
  void *v14[7]; // [rsp+30h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]

  v3 = *a2;
  v13 = 0LL;
  v4 = (*v3)(a2, &GUID_9be3b1e0_66b3_4cf5_b034_7d2a2db8132a, &v13);
  if ( v4 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      189LL,
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
      191LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentlayoutresolver\\layoutresolver.cpp",
      (const char *)(unsigned int)v7,
      (int)string);
  v8 = *a1;
  StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
  v10 = CreativeFramework::TargetedContentLayoutHelpers::Tile::Tile(
          (CreativeFramework::TargetedContentLayoutHelpers::Tile *)v14,
          StringRawBuffer);
  std::vector<CreativeFramework::TargetedContentLayoutHelpers::Tile>::push_back(v8 + 64, v10);
  if ( v14[3] >= (void *)8 )
    operator delete(v14[0]);
  WindowsDeleteString(string);
  string = 0LL;
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  return 1;
}
