/*
 * XREFs of ?_GetOffsetPosition@CDesktopPositioner@@AEAAJPEBUtagRECT@@PEAPEAUIApplicationViewPosition@@@Z @ 0x1805B58FC
 * Callers:
 *     ?_GetRestorePosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUViewSizePreferences@PositionerPropertySetHelpers@@PEAPEAUIApplicationViewPosition@@@Z @ 0x1800770B4 (-_GetRestorePosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAUViewSizePreferences@Posi.c)
 * Callees:
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCommonApplicationViewPositionImpl@@VFtmBase@23@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$01@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCommonApplicationViewPositionImpl@@VFtmBase@23@@123@AEBU_GUID@@PEAPEAX@Z @ 0x18003064C (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCommonApplicat.c)
 *     ??0CCommonApplicationViewPosition@@QEAA@XZ @ 0x180031094 (--0CCommonApplicationViewPosition@@QEAA@XZ.c)
 *     ?Attach@?$ComPtr@VCCommonApplicationViewPosition@@@WRL@Microsoft@@QEAAXPEAVCCommonApplicationViewPosition@@@Z @ 0x180031130 (-Attach@-$ComPtr@VCCommonApplicationViewPosition@@@WRL@Microsoft@@QEAAXPEAVCCommonApplicationVie.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VCCommonApplicationViewPosition@@@WRL@Microsoft@@IEAAKXZ @ 0x180057AC8 (-InternalRelease@-$ComPtr@VCCommonApplicationViewPosition@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_GetOffsetRectFromSize@CDesktopPositioner@@AEAAJPEBUtagRECT@@0UtagSIZE@@PEAU2@@Z @ 0x1800601D8 (-_GetOffsetRectFromSize@CDesktopPositioner@@AEAAJPEBUtagRECT@@0UtagSIZE@@PEAU2@@Z.c)
 *     ?_FixPosition@CDesktopPositioner@@AEAAJW4PositionScenario@@PEAUIApplicationViewPosition@@PEAPEAU3@@Z @ 0x180075EAC (-_FixPosition@CDesktopPositioner@@AEAAJW4PositionScenario@@PEAUIApplicationViewPosition@@PEAPEAU.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1801D07C0 (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CDesktopPositioner::_GetOffsetPosition(
        CDesktopPositioner *this,
        const struct tagRECT *a2,
        struct IApplicationViewPosition **a3)
{
  int OffsetRectFromSize; // eax
  unsigned int v6; // ebx
  CCommonApplicationViewPosition *v7; // rax
  CCommonApplicationViewPosition *v8; // rax
  __int64 v9; // rcx
  unsigned __int64 v10; // r9
  __int64 v11; // rdx
  int fixed; // eax
  struct tagSIZE v14; // [rsp+30h] [rbp-30h] BYREF
  __int64 v15; // [rsp+38h] [rbp-28h] BYREF
  struct tagRECT v16; // [rsp+40h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]

  *a3 = 0LL;
  v14.cx = a2->right - a2->left;
  v14.cy = a2->bottom - a2->top;
  OffsetRectFromSize = CDesktopPositioner::_GetOffsetRectFromSize(this, a2, a2, v14, &v16);
  v6 = OffsetRectFromSize;
  if ( OffsetRectFromSize >= 0 )
  {
    v15 = 0LL;
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v15);
    v15 = 0LL;
    v7 = (CCommonApplicationViewPosition *)operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
    v14 = (struct tagSIZE)v7;
    if ( v7 )
    {
      v8 = CCommonApplicationViewPosition::CCommonApplicationViewPosition(v7);
      v14 = 0LL;
      Microsoft::WRL::ComPtr<CCommonApplicationViewPosition>::Attach(&v14, (__int64)v8);
      v9 = (__int64)v14;
      *(struct tagRECT *)(*(_QWORD *)&v14 + 16LL) = v16;
      v6 = Microsoft::WRL::Details::RuntimeClassBaseT<2>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CCommonApplicationViewPositionImpl,Microsoft::WRL::FtmBase>>(
             v9,
             (__int64)&GUID_f9b8d4b3_64da_447c_b1ba_68861510eed6,
             &v15);
      Microsoft::WRL::ComPtr<CCommonApplicationViewPosition>::InternalRelease((__int64 *)&v14);
      if ( (v6 & 0x80000000) == 0 )
      {
        fixed = CDesktopPositioner::_FixPosition(this, 5u, v15, (__int64 *)a3);
        v6 = fixed;
        if ( fixed >= 0 )
        {
          v6 = 0;
          goto LABEL_11;
        }
        v10 = (unsigned int)fixed;
        v11 = 1650LL;
LABEL_9:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v11,
          (int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
          (const char *)v10);
LABEL_11:
        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v15);
        return v6;
      }
    }
    else
    {
      Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>((void **)&v14);
      v6 = -2147024882;
    }
    v10 = v6;
    v11 = 1649LL;
    goto LABEL_9;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x66E,
    (int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
    (const char *)(unsigned int)OffsetRectFromSize);
  return v6;
}
