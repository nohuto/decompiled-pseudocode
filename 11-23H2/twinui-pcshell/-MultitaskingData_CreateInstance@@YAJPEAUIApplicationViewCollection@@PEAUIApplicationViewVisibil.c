/*
 * XREFs of ?MultitaskingData_CreateInstance@@YAJPEAUIApplicationViewCollection@@PEAUIApplicationViewVisibilityDebouncedNotificationService@@PEAUIVirtualDesktopThumbnailWindowFilter@@PEAUIVirtualDesktopManagerInternal@@PEAUIVirtualDesktopPinnedApps@@PEAUIVirtualDesktopNotificationService@@PEAUIImmersiveSettingsCache@@PEAUISnapServiceProvider@@PEAUIApplicationViewIconLoader@@PEAUITabDataModel@Tabs@ComposableShell@Internal@Windows@@PEAUIUnknown@@W4SwitchItemFilterBehavior@@AEBU_GUID@@PEAPEAX@Z @ 0x1805602F0
 * Callers:
 *     ?_CreateDCompMTVHost@CMultitaskingViewManager@@AEAAJW4MULTITASKING_VIEW_TYPES@@PEAUIApplicationViewCollection@@AEBU_GUID@@PEAPEAX@Z @ 0x180553C44 (-_CreateDCompMTVHost@CMultitaskingViewManager@@AEAAJW4MULTITASKING_VIEW_TYPES@@PEAUIApplicationV.c)
 * Callees:
 *     InlineIsEqualGUID @ 0x1800CD110 (InlineIsEqualGUID.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ??$MakeAndInitialize@VMultitaskingData@@V1@AEAPEAUIApplicationViewCollection@@AEAPEAUIApplicationViewVisibilityDebouncedNotificationService@@AEAPEAUIVirtualDesktopThumbnailWindowFilter@@AEAPEAUIVirtualDesktopManagerInternal@@AEAPEAUIVirtualDesktopPinnedApps@@AEAPEAUIVirtualDesktopNotificationService@@AEAPEAUIImmersiveSettingsCache@@AEAPEAUISnapServiceProvider@@AEAPEAUIApplicationViewIconLoader@@AEAPEAUITabDataModel@Tabs@ComposableShell@Internal@Windows@@AEAPEAUIUnknown@@AEAW4SwitchItemFilterBehavior@@@Details@WRL@Microsoft@@YAJPEAPEAVMultitaskingData@@AEAPEAUIApplicationViewCollection@@AEAPEAUIApplicationViewVisibilityDebouncedNotificationService@@AEAPEAUIVirtualDesktopThumbnailWindowFilter@@AEAPEAUIVirtualDesktopManagerInternal@@AEAPEAUIVirtualDesktopPinnedApps@@AEAPEAUIVirtualDesktopNotificationService@@AEAPEAUIImmersiveSettingsCache@@AEAPEAUISnapServiceProvider@@AEAPEAUIApplicationViewIconLoader@@AEAPEAUITabDataModel@Tabs@ComposableShell@Internal@Windows@@AEAPEAUIUnknown@@AEAW4SwitchItemFilterBehavior@@@Z @ 0x18055FF28 (--$MakeAndInitialize@VMultitaskingData@@V1@AEAPEAUIApplicationViewCollection@@AEAPEAUIApplicatio.c)
 *     ?InternalRelease@?$ComPtr@VMultitaskingData@@@WRL@Microsoft@@IEAAKXZ @ 0x1805602C8 (-InternalRelease@-$ComPtr@VMultitaskingData@@@WRL@Microsoft@@IEAAKXZ.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall MultitaskingData_CreateInstance(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        MultitaskingData *a14)
{
  MultitaskingData *v14; // rdi
  int v15; // eax
  int v16; // ebx
  unsigned __int64 v17; // r9
  __int64 v18; // rdx
  _DWORD *v19; // rcx
  MultitaskingData *v20; // rcx
  MultitaskingData *v21; // rcx
  __int64 v23; // [rsp+50h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]
  __int64 v25; // [rsp+A0h] [rbp+20h] BYREF
  __int64 v26; // [rsp+A8h] [rbp+28h] BYREF
  __int64 v27; // [rsp+B0h] [rbp+30h] BYREF
  __int64 v28; // [rsp+B8h] [rbp+38h] BYREF

  v28 = a4;
  v27 = a3;
  v26 = a2;
  v25 = a1;
  v14 = a14;
  *(_QWORD *)a14 = 0LL;
  a14 = 0LL;
  Microsoft::WRL::ComPtr<MultitaskingData>::InternalRelease((__int64 *)&a14);
  v15 = Microsoft::WRL::Details::MakeAndInitialize<MultitaskingData,MultitaskingData,IApplicationViewCollection * &,IApplicationViewVisibilityDebouncedNotificationService * &,IVirtualDesktopThumbnailWindowFilter * &,IVirtualDesktopManagerInternal * &,IVirtualDesktopPinnedApps * &,IVirtualDesktopNotificationService * &,IImmersiveSettingsCache * &,ISnapServiceProvider * &,IApplicationViewIconLoader * &,Windows::Internal::ComposableShell::Tabs::ITabDataModel * &,IUnknown * &,enum SwitchItemFilterBehavior &>(
          &a14,
          &v25,
          &v26,
          &v27,
          &v28,
          &a5,
          &a6,
          &a7,
          &a8,
          &a9,
          v23);
  v16 = v15;
  if ( v15 < 0 )
  {
    v17 = (unsigned int)v15;
    v18 = 184LL;
LABEL_10:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v18,
      (int)"pcshell\\twinui\\multitaskingview\\lib\\multitaskingdata.cpp",
      (const char *)v17);
    goto LABEL_11;
  }
  *(_QWORD *)v14 = 0LL;
  if ( InlineIsEqualGUID(&GUID_992fd7b2_d760_49b8_ad16_359613ec2ae2, &GUID_00000000_0000_0000_c000_000000000046) )
  {
    v21 = a14;
    *(_QWORD *)v14 = a14;
    (*(void (__fastcall **)(MultitaskingData *))(*(_QWORD *)v21 + 8LL))(v21);
    v16 = 0;
  }
  else if ( InlineIsEqualGUID(v19, v19) )
  {
    v20 = a14;
    *(_QWORD *)v14 = a14;
    v16 = 0;
    (*(void (__fastcall **)(MultitaskingData *))(*(_QWORD *)v20 + 8LL))(v20);
  }
  else
  {
    v16 = -2147467262;
  }
  if ( v16 < 0 )
  {
    v17 = (unsigned int)v16;
    v18 = 186LL;
    goto LABEL_10;
  }
LABEL_11:
  Microsoft::WRL::ComPtr<MultitaskingData>::InternalRelease((__int64 *)&a14);
  return (unsigned int)v16;
}
