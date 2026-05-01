/*
 * XREFs of ?PositionAdjustmentHistory_CreateInstance@@YAJAEBU_GUID@@PEAPEAX@Z @ 0x18019964C
 * Callers:
 *     ?Initialize@TabletModePositioner@@AEAAJXZ @ 0x180107378 (-Initialize@TabletModePositioner@@AEAAJXZ.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x1800CD110 (InlineIsEqualGUID.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@VPositionAdjustmentHistory@@@WRL@Microsoft@@IEAAKXZ @ 0x18014025C (-InternalRelease@-$ComPtr@VPositionAdjustmentHistory@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1801484A0 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1801D07C0 (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PositionAdjustmentHistory_CreateInstance(const struct _GUID *a1, void **a2)
{
  _QWORD *v3; // rax
  volatile int *v4; // rdx
  _QWORD *v5; // rbx
  _DWORD *v6; // rcx
  _DWORD *v7; // rcx
  void *v8; // rcx
  int v9; // ebx
  __int64 v11; // rdx
  void *v12; // r8
  void *v13; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+18h]
  void *v15; // [rsp+40h] [rbp+20h] BYREF
  _QWORD *v16; // [rsp+48h] [rbp+28h] BYREF

  *a2 = 0LL;
  v15 = 0LL;
  Microsoft::WRL::ComPtr<PositionAdjustmentHistory>::InternalRelease((__int64 *)&v15);
  v15 = 0LL;
  v3 = operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = v3;
  v16 = v3;
  if ( !v3 )
  {
    Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v16);
    v9 = -2147024882;
    v11 = 115LL;
LABEL_16:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (int)"pcshell\\twinui\\tabletmode\\lib\\positionadjustmenthistory.cpp",
      (const char *)(unsigned int)v9);
    goto LABEL_9;
  }
  *((_DWORD *)v3 + 5) = 1;
  *v3 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IPositionAdjustmentHistory,IPositionAdjustmentHistoryTestHook>::`vftable'{for `IPositionAdjustmentHistory'};
  v3[1] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IPositionAdjustmentHistory,IPositionAdjustmentHistoryTestHook>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IPositionAdjustmentHistoryTestHook>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *v5 = &PositionAdjustmentHistory::`vftable'{for `IPositionAdjustmentHistory'};
  v5[1] = &PositionAdjustmentHistory::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IPositionAdjustmentHistoryTestHook>'};
  v5[3] = 0LL;
  v5[4] = 0LL;
  v5[5] = 0LL;
  v5[6] = 0LL;
  *((_DWORD *)v5 + 14) = 1000;
  v16 = v5;
  Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)((char *)v5 + 20), v4);
  v15 = v5;
  Microsoft::WRL::ComPtr<PositionAdjustmentHistory>::InternalRelease((__int64 *)&v16);
  *a2 = 0LL;
  if ( InlineIsEqualGUID(&GUID_7ae7ff38_b4c2_4847_a3b7_4657c8b5bc82, &GUID_00000000_0000_0000_c000_000000000046) )
  {
    v13 = v15;
    *a2 = v15;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v13 + 8LL))(v13);
    v9 = 0;
  }
  else
  {
    if ( InlineIsEqualGUID(v6, v6) )
    {
      v8 = v15;
      *a2 = v15;
LABEL_7:
      v9 = 0;
      (*(void (__fastcall **)(void *))(*(_QWORD *)v8 + 8LL))(v8);
      goto LABEL_8;
    }
    if ( InlineIsEqualGUID(v7, &GUID_fd10ce77_803f_4316_961f_cc6c4ac32fca) )
    {
      *a2 = v12;
      v8 = v12;
      goto LABEL_7;
    }
    v9 = -2147467262;
  }
LABEL_8:
  if ( v9 < 0 )
  {
    v11 = 116LL;
    goto LABEL_16;
  }
LABEL_9:
  Microsoft::WRL::ComPtr<PositionAdjustmentHistory>::InternalRelease((__int64 *)&v15);
  return (unsigned int)v9;
}
