/*
 * XREFs of _CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver::ProcessLayoutBindings_::_1_::catch$15 @ 0x1800F6BA5
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException_0 @ 0x1800222FC (_CxxThrowException_0.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180023E6C (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??$verify_hresult@J@wil@@YAJJ@Z @ 0x180027420 (--$verify_hresult@J@wil@@YAJJ@Z.c)
 *     ?Get@StringReference@Internal@Windows@@QEBAPEAUHSTRING__@@XZ @ 0x180034818 (-Get@StringReference@Internal@Windows@@QEBAPEAUHSTRING__@@XZ.c)
 *     ?Get@HStringReference@Wrappers@WRL@Microsoft@@QEBAPEAUHSTRING__@@XZ @ 0x180034824 (-Get@HStringReference@Wrappers@WRL@Microsoft@@QEBAPEAUHSTRING__@@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180048430 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??C?$com_ptr_t@UITargetedContentIdAliasStoreStatics@Internal@TargetedContent@Services@Windows@@Uerr_exception_policy@wil@@@wil@@QEBAPEAUITargetedContentIdAliasStoreStatics@Internal@TargetedContent@Services@Windows@@XZ @ 0x1800BD88C (--C-$com_ptr_t@UITargetedContentIdAliasStoreStatics@Internal@TargetedContent@Services@Windows@@U.c)
 *     ?SetBoundedLayoutType@Settings@TargetedContentLayoutHelpers@CreativeFramework@@YAJPEAUHSTRING__@@0@Z @ 0x1800E34B4 (-SetBoundedLayoutType@Settings@TargetedContentLayoutHelpers@CreativeFramework@@YAJPEAUHSTRING__@.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800ED700 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall __noreturn CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver::ProcessLayoutBindings_::_1_::catch_15(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rbx
  HSTRING v4; // rax
  __int64 (__fastcall *v5)(__int64, HSTRING); // r8
  __int64 v6; // r9
  unsigned int v7; // eax
  int v8; // eax
  unsigned int v9; // r8d
  HSTRING_HEADER *v10; // rax
  CreativeFramework::TargetedContentLayoutHelpers::Settings *v11; // rax
  HSTRING v12; // rdx
  HSTRING v13; // r8
  HSTRING v14; // r9
  unsigned int v15; // eax
  int v16; // eax
  int v17; // [rsp+20h] [rbp-38h]

  wil::com_ptr_t<Windows::Services::TargetedContent::Internal::ITargetedContentIdAliasStoreStatics,wil::err_exception_policy>::operator->(a2 + 96);
  v3 = *(_QWORD *)(a2 + 128);
  v4 = Windows::Internal::StringReference::Get((Windows::Internal::StringReference *)(v3 + 8));
  v7 = v5(v6, v4);
  v8 = wil::verify_hresult<long>(v7);
  if ( v8 < 0 )
    wil::details::in1diag3::Throw_Hr(
      *(wil::details::in1diag3 **)(a2 + 744),
      278LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentlayoutresolver\\layoutresolver.cpp",
      (const char *)(unsigned int)v8,
      v17);
  v10 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
          (HSTRING_HEADER *)(a2 + 544),
          (const WCHAR **)&off_18011A230,
          v9);
  Microsoft::WRL::Wrappers::HStringReference::Get((Microsoft::WRL::Wrappers::HStringReference *)v10);
  v11 = (CreativeFramework::TargetedContentLayoutHelpers::Settings *)Windows::Internal::StringReference::Get((Windows::Internal::StringReference *)(v3 + 8));
  v15 = CreativeFramework::TargetedContentLayoutHelpers::Settings::SetBoundedLayoutType(v11, v12, v13, v14);
  v16 = wil::verify_hresult<long>(v15);
  if ( v16 < 0 )
    wil::details::in1diag3::Throw_Hr(
      *(wil::details::in1diag3 **)(a2 + 744),
      279LL,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentlayoutresolver\\layoutresolver.cpp",
      (const char *)(unsigned int)v16,
      v17);
  throw;
}
