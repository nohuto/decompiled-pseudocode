/*
 * XREFs of ?DragCompleted@CDesktopPositioner@@UEAAJPEAUIApplicationView@@UtagPOINT@@@Z @ 0x1805B3250
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x18001DEB0 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??$Make@VApplicationViewOperation@@$$V@Details@WRL@Microsoft@@YA?AV?$ComPtr@VApplicationViewOperation@@@12@XZ @ 0x180026A20 (--$Make@VApplicationViewOperation@@$$V@Details@WRL@Microsoft@@YA-AV-$ComPtr@VApplicationViewOper.c)
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCommonApplicationViewPositionImpl@@VFtmBase@23@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$01@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCommonApplicationViewPositionImpl@@VFtmBase@23@@123@AEBU_GUID@@PEAPEAX@Z @ 0x18003064C (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCommonApplicat.c)
 *     ??0CCommonApplicationViewPosition@@QEAA@XZ @ 0x180031094 (--0CCommonApplicationViewPosition@@QEAA@XZ.c)
 *     ?Attach@?$ComPtr@VCCommonApplicationViewPosition@@@WRL@Microsoft@@QEAAXPEAVCCommonApplicationViewPosition@@@Z @ 0x180031130 (-Attach@-$ComPtr@VCCommonApplicationViewPosition@@@WRL@Microsoft@@QEAAXPEAVCCommonApplicationVie.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ReleaseAndGetAddressOf@?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonitor@@XZ @ 0x18004C4FC (-ReleaseAndGetAddressOf@-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@QEAAPEAPEAUIImmersiveMonito.c)
 *     ?InternalRelease@?$ComPtr@VApplicationViewOperation@@@WRL@Microsoft@@IEAAKXZ @ 0x180057794 (-InternalRelease@-$ComPtr@VApplicationViewOperation@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VCCommonApplicationViewPosition@@@WRL@Microsoft@@IEAAKXZ @ 0x180057AC8 (-InternalRelease@-$ComPtr@VCCommonApplicationViewPosition@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetScaleFactorForRect@@YA?AW4DEVICE_SCALE_FACTOR@@AEBUtagRECT@@@Z @ 0x180060388 (-GetScaleFactorForRect@@YA-AW4DEVICE_SCALE_FACTOR@@AEBUtagRECT@@@Z.c)
 *     ?_GetFullPositionSnapshot@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIOcclusionBasedApplicationViewPosition@@@Z @ 0x180075324 (-_GetFullPositionSnapshot@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEAPEAUIOcclusionBasedA.c)
 *     ?_FixPosition@CDesktopPositioner@@AEAAJW4PositionScenario@@PEAUIApplicationViewPosition@@PEAPEAU3@@Z @ 0x180075EAC (-_FixPosition@CDesktopPositioner@@AEAAJW4PositionScenario@@PEAUIApplicationViewPosition@@PEAPEAU.c)
 *     ?_GetWorkAreaFromRect@CDesktopPositioner@@AEAAJPEBUtagRECT@@PEAU2@@Z @ 0x180076F54 (-_GetWorkAreaFromRect@CDesktopPositioner@@AEAAJPEBUtagRECT@@PEAU2@@Z.c)
 *     ?_GetMonitorFromPoint@CDesktopPositioner@@AEAAJPEBUtagPOINT@@PEAPEAUIImmersiveMonitor@@@Z @ 0x180077044 (-_GetMonitorFromPoint@CDesktopPositioner@@AEAAJPEBUtagPOINT@@PEAPEAUIImmersiveMonitor@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1801D07C0 (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CDesktopPositioner::DragCompleted(
        CDesktopPositioner *this,
        struct IApplicationView *a2,
        struct tagPOINT a3)
{
  CDesktopPositioner *v6; // rcx
  int FullPositionSnapshot; // eax
  int v8; // edi
  __int64 v9; // rdx
  HMONITOR v10; // rax
  int ScaleFactorForRect; // eax
  int v12; // esi
  int v13; // edi
  int v14; // eax
  __int64 *AddressOf; // rax
  int MonitorFromPoint; // eax
  __int64 v17; // rdx
  int v18; // esi
  int v19; // ebx
  _QWORD *v20; // rax
  CCommonApplicationViewPosition *v21; // rax
  __int64 v22; // rcx
  int fixed; // eax
  _QWORD *v24; // rbx
  __int64 v25; // r9
  __int64 v26; // rdx
  struct tagPOINT v27; // rdi
  int v28; // eax
  struct tagPOINT v30; // [rsp+20h] [rbp-69h] BYREF
  int nNumerator; // [rsp+28h] [rbp-61h] BYREF
  __int64 v32; // [rsp+30h] [rbp-59h] BYREF
  struct tagPOINT v33; // [rsp+38h] [rbp-51h] BYREF
  struct IOcclusionBasedApplicationViewPosition *v34; // [rsp+40h] [rbp-49h] BYREF
  _QWORD *v35; // [rsp+48h] [rbp-41h] BYREF
  __int64 v36[2]; // [rsp+50h] [rbp-39h] BYREF
  struct tagRECT rc; // [rsp+60h] [rbp-29h] BYREF
  struct tagRECT v38; // [rsp+70h] [rbp-19h] BYREF
  struct tagRECT v39; // [rsp+80h] [rbp-9h] BYREF
  _BYTE v40[4]; // [rsp+90h] [rbp+7h] BYREF
  int v41; // [rsp+94h] [rbp+Bh]
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+5Fh]

  v30 = a3;
  v34 = 0LL;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v34);
  FullPositionSnapshot = CDesktopPositioner::_GetFullPositionSnapshot(v6, a2, &v34);
  v8 = FullPositionSnapshot;
  if ( FullPositionSnapshot >= 0 )
  {
    FullPositionSnapshot = (*(__int64 (__fastcall **)(struct IOcclusionBasedApplicationViewPosition *, struct tagRECT *))(*(_QWORD *)v34 + 56LL))(
                             v34,
                             &v38);
    v8 = FullPositionSnapshot;
    if ( FullPositionSnapshot < 0 )
    {
      v9 = 987LL;
      goto LABEL_7;
    }
    v10 = ::MonitorFromPoint(a3, 1u);
    FullPositionSnapshot = GetScaleFactorForMonitor(v10, &nNumerator);
    v8 = FullPositionSnapshot;
    if ( FullPositionSnapshot < 0 )
    {
      v9 = 993LL;
      goto LABEL_7;
    }
    ScaleFactorForRect = GetScaleFactorForRect(&v38);
    v12 = ScaleFactorForRect;
    rc = v38;
    if ( ScaleFactorForRect != nNumerator )
    {
      v13 = MulDiv(v38.right - v38.left, nNumerator, ScaleFactorForRect);
      v14 = MulDiv(v38.bottom - v38.top, nNumerator, v12);
      rc.right = v13 + rc.left;
      rc.bottom = rc.top + v14;
    }
    OffsetRect(&rc, a3.x - v38.left, v30.y - v38.top);
    v36[0] = 0LL;
    AddressOf = Microsoft::WRL::ComPtr<IImmersiveMonitor>::ReleaseAndGetAddressOf(v36);
    MonitorFromPoint = CDesktopPositioner::_GetMonitorFromPoint(
                         (CDesktopPositioner *)((char *)this - 128),
                         &v30,
                         (struct IImmersiveMonitor **)AddressOf);
    v8 = MonitorFromPoint;
    if ( MonitorFromPoint < 0 )
    {
      v17 = 1021LL;
LABEL_16:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v17,
        (int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
        (const char *)(unsigned int)MonitorFromPoint);
LABEL_40:
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(v36);
      goto LABEL_41;
    }
    MonitorFromPoint = (*(__int64 (__fastcall **)(_QWORD, __int64, _BYTE *))(**((_QWORD **)this + 21) + 64LL))(
                         *((_QWORD *)this + 21),
                         v36[0],
                         v40);
    v8 = MonitorFromPoint;
    if ( MonitorFromPoint < 0 )
    {
      v17 = 1024LL;
      goto LABEL_16;
    }
    v18 = v41 / -2;
    v19 = *((_DWORD *)this + 72) * nNumerator / -100;
    MonitorFromPoint = CDesktopPositioner::_GetWorkAreaFromRect((CDesktopPositioner *)((char *)this - 128), &rc, &v39);
    v8 = MonitorFromPoint;
    if ( MonitorFromPoint < 0 )
    {
      v17 = 1037LL;
      goto LABEL_16;
    }
    if ( v18 + rc.top < v39.top )
      v18 = v39.top - rc.top;
    if ( v19 + rc.left < v39.left )
      v19 = v39.left - rc.left;
    OffsetRect(&rc, v19, v18);
    v32 = 0LL;
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v32);
    v32 = 0LL;
    v20 = operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
    v35 = v20;
    if ( !v20 )
    {
      Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>((void **)&v35);
      v8 = -2147024882;
LABEL_24:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x420,
        (int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
        (const char *)(unsigned int)v8);
LABEL_39:
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v32);
      goto LABEL_40;
    }
    v21 = CCommonApplicationViewPosition::CCommonApplicationViewPosition((CCommonApplicationViewPosition *)v20);
    v30 = 0LL;
    Microsoft::WRL::ComPtr<CCommonApplicationViewPosition>::Attach(&v30, (__int64)v21);
    v22 = (__int64)v30;
    *(struct tagRECT *)(*(_QWORD *)&v30 + 16LL) = rc;
    v8 = Microsoft::WRL::Details::RuntimeClassBaseT<2>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CCommonApplicationViewPositionImpl,Microsoft::WRL::FtmBase>>(
           v22,
           (__int64)&GUID_f9b8d4b3_64da_447c_b1ba_68861510eed6,
           &v32);
    Microsoft::WRL::ComPtr<CCommonApplicationViewPosition>::InternalRelease((__int64 *)&v30);
    if ( v8 < 0 )
      goto LABEL_24;
    v33 = 0LL;
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v33);
    fixed = CDesktopPositioner::_FixPosition((CDesktopPositioner *)((char *)this - 128), 4u, v32, (__int64 *)&v33);
    v8 = fixed;
    if ( fixed < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x424,
        (int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
        (const char *)(unsigned int)fixed);
LABEL_38:
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v33);
      goto LABEL_39;
    }
    Microsoft::WRL::Details::Make<ApplicationViewOperation,>(&v35);
    v24 = v35;
    if ( v35 )
    {
      v27 = v33;
      if ( v35[9] != v33 )
      {
        v30 = v33;
        Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v30);
        v30 = (struct tagPOINT)v24[9];
        v24[9] = v27;
        Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v30);
      }
      *((_WORD *)v24 + 56) = 257;
      v28 = (*(__int64 (__fastcall **)(struct IApplicationView *, _QWORD *))(*(_QWORD *)a2 + 320LL))(a2, v24);
      v8 = v28;
      if ( v28 >= 0 )
      {
        v28 = (*(__int64 (__fastcall **)(struct IApplicationView *))(*(_QWORD *)a2 + 56LL))(a2);
        v8 = v28;
        if ( v28 >= 0 )
        {
LABEL_37:
          Microsoft::WRL::ComPtr<ApplicationViewOperation>::InternalRelease((__int64 *)&v35);
          goto LABEL_38;
        }
        v26 = 1073LL;
      }
      else
      {
        v26 = 1070LL;
      }
      v25 = (unsigned int)v28;
    }
    else
    {
      v8 = -2147024882;
      v25 = 2147942414LL;
      v26 = 1064LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v26,
      (int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
      (const char *)v25);
    goto LABEL_37;
  }
  v9 = 984LL;
LABEL_7:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v9,
    (int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
    (const char *)(unsigned int)FullPositionSnapshot);
LABEL_41:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v34);
  return (unsigned int)v8;
}
