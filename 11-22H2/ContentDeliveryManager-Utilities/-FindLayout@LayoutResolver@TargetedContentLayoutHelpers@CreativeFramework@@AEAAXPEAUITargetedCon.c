/*
 * XREFs of ?FindLayout@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAAXPEAUITargetedContentCollection@TargetedContent@Services@Windows@@PEAUHSTRING__@@PEAUITargetedContentIdAliasStore@Internal@567@@Z @ 0x1800C8290
 * Callers:
 *     ?ProcessContainer@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAAXPEAUITargetedContentContainer@TargetedContent@Services@Windows@@PEAUHSTRING__@@PEAUITargetedContentIdAliasStore@Internal@567@@Z @ 0x1800CAB3C (-ProcessContainer@LayoutResolver@TargetedContentLayoutHelpers@CreativeFramework@@AEAAXPEAUITarge.c)
 * Callees:
 *     __security_check_cookie @ 0x1800224C0 (__security_check_cookie.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180024270 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??1?$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18002C074 (--1-$com_ptr_t@UIStorageFolder@Storage@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180043350 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1800D4360 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
void __fastcall CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver::FindLayout(
        HSTRING *this,
        struct Windows::Services::TargetedContent::ITargetedContentCollection *a2,
        HSTRING a3,
        struct Windows::Services::TargetedContent::Internal::ITargetedContentIdAliasStore *a4)
{
  __int64 v7; // rax
  int v8; // eax
  unsigned int v9; // r8d
  __int64 v10; // rbx
  __int64 (__fastcall *v11)(__int64, PVOID, _BYTE *); // rdi
  HSTRING_HEADER *v12; // rax
  int v13; // eax
  unsigned int v14; // r8d
  __int64 v15; // rbx
  __int64 (__fastcall *v16)(__int64, PVOID, __int64 *); // rdi
  HSTRING_HEADER *v17; // rax
  int v18; // eax
  __int64 v19; // rbx
  __int64 (__fastcall *v20)(__int64, HSTRING *); // rdi
  int v21; // eax
  __int64 v22; // rbx
  __int64 (__fastcall *v23)(__int64, HSTRING *); // rdi
  int v24; // eax
  unsigned int v25; // r8d
  __int64 (__fastcall *v26)(struct Windows::Services::TargetedContent::Internal::ITargetedContentIdAliasStore *, PVOID, HSTRING, HSTRING); // rdi
  HSTRING v27; // rbx
  HSTRING_HEADER *v28; // rax
  int v29; // eax
  int v30; // [rsp+20h] [rbp-39h]
  _BYTE v31[8]; // [rsp+30h] [rbp-29h] BYREF
  HSTRING string; // [rsp+38h] [rbp-21h] BYREF
  __int64 v33; // [rsp+40h] [rbp-19h] BYREF
  __int64 v34; // [rsp+48h] [rbp-11h] BYREF
  HSTRING_HEADER v35; // [rsp+50h] [rbp-9h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+5Fh]

  v7 = *(_QWORD *)a2;
  v34 = 0LL;
  v8 = (*(__int64 (__fastcall **)(struct Windows::Services::TargetedContent::ITargetedContentCollection *, __int64 *))(v7 + 80))(
         a2,
         &v34);
  if ( v8 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x13D,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentlayoutresolver\\layoutresolver.cpp",
      (const char *)(unsigned int)v8,
      v30);
  v31[0] = 0;
  v10 = v34;
  v11 = *(__int64 (__fastcall **)(__int64, PVOID, _BYTE *))(*(_QWORD *)v34 + 64LL);
  v12 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v35, (const WCHAR **)&off_1800FE4E0, v9);
  v13 = v11(v10, v12[1].Reserved.Reserved1, v31);
  if ( v13 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x140,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentlayoutresolver\\layoutresolver.cpp",
      (const char *)(unsigned int)v13,
      v30);
  if ( v31[0] )
  {
    v33 = 0LL;
    v15 = v34;
    v16 = *(__int64 (__fastcall **)(__int64, PVOID, __int64 *))(*(_QWORD *)v34 + 48LL);
    v33 = 0LL;
    v17 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v35, (const WCHAR **)&off_1800FE4E0, v14);
    v18 = v16(v15, v17[1].Reserved.Reserved1, &v33);
    if ( v18 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x144,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentlayoutresolver\\layoutresolver.cpp",
        (const char *)(unsigned int)v18,
        v30);
    v19 = v33;
    v20 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v33 + 64LL);
    WindowsDeleteString(*this);
    *this = 0LL;
    v21 = v20(v19, this);
    if ( v21 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x145,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentlayoutresolver\\layoutresolver.cpp",
        (const char *)(unsigned int)v21,
        v30);
    string = 0LL;
    v22 = v33;
    v23 = *(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)v33 + 56LL);
    WindowsDeleteString(0LL);
    string = 0LL;
    v24 = v23(v22, &string);
    if ( v24 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x148,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentlayoutresolver\\layoutresolver.cpp",
        (const char *)(unsigned int)v24,
        v30);
    v26 = *(__int64 (__fastcall **)(struct Windows::Services::TargetedContent::Internal::ITargetedContentIdAliasStore *, PVOID, HSTRING, HSTRING))(*(_QWORD *)a4 + 48LL);
    v27 = string;
    v28 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v35, (const WCHAR **)off_1800FE4D8, v25);
    v29 = v26(a4, v28[1].Reserved.Reserved1, a3, v27);
    if ( v29 < 0 )
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x149,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\targetedcontentlayoutresolver\\layoutresolver.cpp",
        (const char *)(unsigned int)v29,
        v30);
    WindowsDeleteString(string);
    string = 0LL;
    wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>(&v33);
  }
  wil::com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>::~com_ptr_t<Windows::Storage::IStorageFolder,wil::err_exception_policy>(&v34);
}
