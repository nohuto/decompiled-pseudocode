/*
 * XREFs of ?JointDivider_CreateInstance@@YAJPEAUHWND__@@AEBU_GUID@@PEAPEAX@Z @ 0x180104598
 * Callers:
 *     ?RuntimeClassInitialize@ChromeManager@@QEAAJPEAUIUnknown@@@Z @ 0x18010431C (-RuntimeClassInitialize@ChromeManager@@QEAAJPEAUIUnknown@@@Z.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x1800CD110 (InlineIsEqualGUID.c)
 *     ??0JointDivider@@QEAA@XZ @ 0x180102B28 (--0JointDivider@@QEAA@XZ.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00UITabletModeChrome@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x180104748 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00UITabletModeChrome@@@De.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@VChromeManager@@@WRL@Microsoft@@IEAAKXZ @ 0x1801402D4 (-InternalRelease@-$ComPtr@VChromeManager@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x1801484A0 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1801D07C0 (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall JointDivider_CreateInstance(HWND a1, const struct _GUID *a2, void **a3)
{
  JointDivider *v5; // rax
  JointDivider *v6; // rax
  volatile int *v7; // rdx
  char *v8; // r8
  BOOL IsEqualGUID; // eax
  char *v10; // rcx
  int CanCastTo; // ebx
  __int64 v13; // rdx
  int v14; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  char *v16; // [rsp+38h] [rbp+10h] BYREF
  JointDivider *v17; // [rsp+40h] [rbp+18h] BYREF

  *a3 = 0LL;
  v16 = 0LL;
  Microsoft::WRL::ComPtr<ChromeManager>::InternalRelease(&v16);
  v16 = 0LL;
  v5 = (JointDivider *)operator new(0x68uLL, (const struct std::nothrow_t *)&std::nothrow);
  v17 = v5;
  if ( !v5 )
  {
    Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v17);
    CanCastTo = -2147024882;
    v13 = 349LL;
LABEL_10:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (unsigned int)"pcshell\\twinui\\tabletmode\\lib\\jointdivider.cpp",
      (const char *)(unsigned int)CanCastTo,
      v14);
    goto LABEL_6;
  }
  v6 = JointDivider::JointDivider(v5);
  v17 = v6;
  *((_QWORD *)v6 + 11) = a1;
  Microsoft::WRL::Details::SafeUnknownIncrementReference((JointDivider *)((char *)v6 + 36), v7);
  v16 = v8;
  Microsoft::WRL::ComPtr<ChromeManager>::InternalRelease(&v17);
  *a3 = 0LL;
  IsEqualGUID = InlineIsEqualGUID(
                  &GUID_2c36ae3a_298c_4659_b51a_0859453e8d8f,
                  &GUID_00000000_0000_0000_c000_000000000046);
  v10 = v16;
  if ( IsEqualGUID )
  {
    *a3 = v16;
    (*(void (__fastcall **)(char *))(*(_QWORD *)v10 + 8LL))(v10);
    CanCastTo = 0;
  }
  else
  {
    CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,ITabletModeChrome>::CanCastTo(
                  v16 + 24,
                  &GUID_2c36ae3a_298c_4659_b51a_0859453e8d8f);
    if ( CanCastTo >= 0 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 8LL))(*a3);
  }
  if ( CanCastTo < 0 )
  {
    v13 = 350LL;
    goto LABEL_10;
  }
LABEL_6:
  Microsoft::WRL::ComPtr<ChromeManager>::InternalRelease(&v16);
  return (unsigned int)CanCastTo;
}
