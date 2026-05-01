/*
 * XREFs of ?AppSizeConstraintsCache_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x1800E0E20
 * Callers:
 *     ?AddWin32ApplicationView@CApplicationViewManager@@UEAAJPEAUIClassicWindowExternal@@PEAPEAUIApplicationView@@@Z @ 0x1800DFAB0 (-AddWin32ApplicationView@CApplicationViewManager@@UEAAJPEAUIClassicWindowExternal@@PEAPEAUIAppli.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x1800CD110 (InlineIsEqualGUID.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1801484A0 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ?InternalRelease@?$ComPtr@VAppSizeConstraintsCache@@@WRL@Microsoft@@IEAAKXZ @ 0x180176EBC (-InternalRelease@-$ComPtr@VAppSizeConstraintsCache@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1801D07C0 (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall AppSizeConstraintsCache_CreateInstance(const struct _GUID *a1, void **a2)
{
  _QWORD *v3; // rax
  volatile int *v4; // rdx
  _QWORD *v5; // rbx
  _DWORD *v6; // rcx
  void *v7; // rcx
  int v8; // ebx
  __int64 v10; // rdx
  void *v11; // rcx
  int v12; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  void *v14; // [rsp+30h] [rbp+8h] BYREF
  _QWORD *v15; // [rsp+38h] [rbp+10h] BYREF

  *a2 = 0LL;
  v14 = 0LL;
  Microsoft::WRL::ComPtr<AppSizeConstraintsCache>::InternalRelease(&v14);
  v14 = 0LL;
  v3 = operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = v3;
  v15 = v3;
  if ( !v3 )
  {
    Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v15);
    v8 = -2147024882;
    v10 = 110LL;
LABEL_13:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v10,
      (unsigned int)"pcshell\\twinui\\appviewmanager\\lib\\appsizeconstraintscache.cpp",
      (const char *)(unsigned int)v8,
      v12);
    goto LABEL_8;
  }
  *((_DWORD *)v3 + 3) = 1;
  *v3 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IAppSizeConstraintsCache>::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *v5 = &AppSizeConstraintsCache::`vftable';
  v5[2] = 0LL;
  v5[3] = 0LL;
  v5[4] = 0LL;
  v5[5] = 0LL;
  v15 = v5;
  Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)((char *)v5 + 12), v4);
  v14 = v5;
  Microsoft::WRL::ComPtr<AppSizeConstraintsCache>::InternalRelease(&v15);
  *a2 = 0LL;
  if ( InlineIsEqualGUID(&GUID_0ef8c099_d96f_4be1_94ed_cd8beb90775b, &GUID_00000000_0000_0000_c000_000000000046) )
  {
    v11 = v14;
    *a2 = v14;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v11 + 8LL))(v11);
    v8 = 0;
  }
  else if ( InlineIsEqualGUID(v6, v6) )
  {
    v7 = v14;
    *a2 = v14;
    v8 = 0;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v7 + 8LL))(v7);
  }
  else
  {
    v8 = -2147467262;
  }
  if ( v8 < 0 )
  {
    v10 = 111LL;
    goto LABEL_13;
  }
LABEL_8:
  Microsoft::WRL::ComPtr<AppSizeConstraintsCache>::InternalRelease(&v14);
  return (unsigned int)v8;
}
