/*
 * XREFs of ?JointDivider_CreateInstance@@YAJPEAUHWND__@@AEBU_GUID@@PEAPEAX@Z @ 0x1800D388C
 * Callers:
 *     ?RuntimeClassInitialize@ChromeManager@@QEAAJPEAUIUnknown@@@Z @ 0x18014F898 (-RuntimeClassInitialize@ChromeManager@@QEAAJPEAUIUnknown@@@Z.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x18007EB00 (InlineIsEqualGUID.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CanCastTo@?$ImplementsHelper@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00UITabletModeChrome@@@Details@WRL@Microsoft@@IEAAJAEBU_GUID@@PEAPEAXPEA_N@Z @ 0x1800D3984 (-CanCastTo@-$ImplementsHelper@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00UITabletModeChrome@@@De.c)
 *     ??0JointDivider@@QEAA@XZ @ 0x1800D4C10 (--0JointDivider@@QEAA@XZ.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180125F20 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ?InternalRelease@?$ComPtr@VChromeManager@@@WRL@Microsoft@@IEAAKXZ @ 0x18017C9D0 (-InternalRelease@-$ComPtr@VChromeManager@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801883B0 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x18018FE0C (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall JointDivider_CreateInstance(HWND a1, const struct _GUID *a2, void **a3)
{
  JointDivider *v5; // rax
  JointDivider *v6; // rax
  volatile int *v7; // rdx
  char *v8; // r9
  BOOL IsEqualGUID; // eax
  char *v10; // rcx
  int CanCastTo; // ebx
  __int64 v13; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  char *v15; // [rsp+38h] [rbp+10h] BYREF
  JointDivider *v16; // [rsp+40h] [rbp+18h] BYREF

  *a3 = 0LL;
  v15 = 0LL;
  Microsoft::WRL::ComPtr<ChromeManager>::InternalRelease(&v15);
  v15 = 0LL;
  v5 = (JointDivider *)operator new(0x68uLL, (const struct std::nothrow_t *)&std::nothrow);
  v16 = v5;
  if ( !v5 )
  {
    Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>(&v16);
    CanCastTo = -2147024882;
    v13 = 349LL;
LABEL_10:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (__int64)"pcshell\\twinui\\tabletmode\\lib\\jointdivider.cpp",
      (const char *)(unsigned int)CanCastTo);
    goto LABEL_6;
  }
  v6 = JointDivider::JointDivider(v5);
  v16 = v6;
  *((_QWORD *)v6 + 11) = a1;
  Microsoft::WRL::Details::SafeUnknownIncrementReference((JointDivider *)((char *)v6 + 36), v7);
  v15 = v8;
  Microsoft::WRL::ComPtr<ChromeManager>::InternalRelease(&v16);
  *a3 = 0LL;
  IsEqualGUID = InlineIsEqualGUID(
                  &GUID_2c36ae3a_298c_4659_b51a_0859453e8d8f,
                  &GUID_00000000_0000_0000_c000_000000000046);
  v10 = v15;
  if ( IsEqualGUID )
  {
    *a3 = v15;
    (*(void (__fastcall **)(char *))(*(_QWORD *)v10 + 8LL))(v10);
    CanCastTo = 0;
  }
  else
  {
    CanCastTo = Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,ITabletModeChrome>::CanCastTo(
                  v15 + 24,
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
  Microsoft::WRL::ComPtr<ChromeManager>::InternalRelease(&v15);
  return (unsigned int)CanCastTo;
}
