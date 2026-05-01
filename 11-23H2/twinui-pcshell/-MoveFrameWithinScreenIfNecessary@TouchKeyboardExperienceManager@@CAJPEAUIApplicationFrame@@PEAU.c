/*
 * XREFs of ?MoveFrameWithinScreenIfNecessary@TouchKeyboardExperienceManager@@CAJPEAUIApplicationFrame@@PEAUIApplicationFrameWrapper@@_N@Z @ 0x1805133E8
 * Callers:
 *     _lambda_259a1410ba958232e2f70f54c5d031d1_::operator() @ 0x180207090 (_lambda_259a1410ba958232e2f70f54c5d031d1_--operator().c)
 *     _lambda_31c7893660c14ce258f6c87fb5d11c82_::operator() @ 0x18020732C (_lambda_31c7893660c14ce258f6c87fb5d11c82_--operator().c)
 * Callees:
 *     ??$AsIID@V?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCommonApplicationViewPositionImpl@@VFtmBase@23@@Details@WRL@Microsoft@@@?$RuntimeClassBaseT@$01@Details@WRL@Microsoft@@KAJPEAV?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCommonApplicationViewPositionImpl@@VFtmBase@23@@123@AEBU_GUID@@PEAPEAX@Z @ 0x18003064C (--$AsIID@V-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCCommonApplicat.c)
 *     ??0CCommonApplicationViewPosition@@QEAA@XZ @ 0x180031094 (--0CCommonApplicationViewPosition@@QEAA@XZ.c)
 *     ?Attach@?$ComPtr@VCCommonApplicationViewPosition@@@WRL@Microsoft@@QEAAXPEAVCCommonApplicationViewPosition@@@Z @ 0x180031130 (-Attach@-$ComPtr@VCCommonApplicationViewPosition@@@WRL@Microsoft@@QEAAXPEAVCCommonApplicationVie.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@VCCommonApplicationViewPosition@@@WRL@Microsoft@@IEAAKXZ @ 0x180057AC8 (-InternalRelease@-$ComPtr@VCCommonApplicationViewPosition@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1801322B8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??1?$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WRL@Microsoft@@QEAA@XZ @ 0x1801D07C0 (--1-$MakeAllocator@VNotification@DebounceDetection@CBaseTrayFlyoutExperienceManager@@@Details@WR.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     KeyboardHosting::ForceToFitRectWithinMonitorRect @ 0x18050F9F0 (KeyboardHosting--ForceToFitRectWithinMonitorRect.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TouchKeyboardExperienceManager::MoveFrameWithinScreenIfNecessary(
        struct IApplicationFrame *a1,
        struct IApplicationFrameWrapper *a2,
        char a3)
{
  __int64 v5; // rdx
  int v6; // ebx
  const char *v8; // r9
  LONG right; // edx
  LONG left; // eax
  LONG bottom; // edx
  LONG top; // eax
  HMONITOR v13; // rax
  __m128i *p_rcMonitor; // rax
  __m128i v15; // xmm1
  unsigned __int64 v16; // xmm0_8
  __int32 v17; // eax
  __int32 v18; // eax
  _OWORD *v19; // rax
  CCommonApplicationViewPosition *v20; // rax
  __int64 v21; // rcx
  unsigned __int64 v22; // r9
  __int64 v23; // rdx
  int v24; // eax
  __int64 v25; // [rsp+28h] [rbp-39h] BYREF
  _OWORD *v26; // [rsp+30h] [rbp-31h] BYREF
  __int32 v27; // [rsp+38h] [rbp-29h]
  __int32 v28; // [rsp+3Ch] [rbp-25h]
  HWND hWnd; // [rsp+40h] [rbp-21h] BYREF
  __int128 v30; // [rsp+48h] [rbp-19h] BYREF
  RECT rc; // [rsp+58h] [rbp-9h] BYREF
  __int128 v32; // [rsp+68h] [rbp+7h] BYREF
  struct tagRECT Rect; // [rsp+78h] [rbp+17h] BYREF
  struct tagMONITORINFO mi; // [rsp+88h] [rbp+27h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C0h] [rbp+5Fh]

  if ( !a1 )
  {
    v5 = 3612LL;
LABEL_3:
    v6 = -2147024809;
LABEL_4:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v6);
    return (unsigned int)v6;
  }
  if ( !a2 )
  {
    v5 = 3613LL;
    goto LABEL_3;
  }
  hWnd = 0LL;
  v6 = (*(__int64 (__fastcall **)(struct IApplicationFrame *, HWND *))(*(_QWORD *)a1 + 24LL))(a1, &hWnd);
  if ( v6 < 0 )
  {
    v5 = 3616LL;
    goto LABEL_4;
  }
  Rect = 0LL;
  if ( !GetWindowRect(hWnd, &Rect) )
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0xE22,
             (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
             v8);
  right = Rect.right;
  left = Rect.right;
  if ( Rect.left < Rect.right )
    left = Rect.left;
  rc.left = left;
  if ( Rect.left > Rect.right )
    right = Rect.left;
  rc.right = right;
  bottom = Rect.bottom;
  top = Rect.bottom;
  if ( Rect.top < Rect.bottom )
    top = Rect.top;
  rc.top = top;
  if ( Rect.top > Rect.bottom )
    bottom = Rect.top;
  rc.bottom = bottom;
  v13 = MonitorFromRect(&rc, 2u);
  if ( !v13 )
  {
    v6 = -2147418113;
    v5 = 3628LL;
    goto LABEL_4;
  }
  memset(&mi, 0, sizeof(mi));
  mi.cbSize = 40;
  if ( !GetMonitorInfoW(v13, &mi) )
  {
    v6 = -2147467259;
    v5 = 3631LL;
    goto LABEL_4;
  }
  p_rcMonitor = (__m128i *)&mi.rcMonitor;
  if ( a3 )
    p_rcMonitor = (__m128i *)&mi.rcWork;
  v15 = *p_rcMonitor;
  v16 = _mm_srli_si128(*p_rcMonitor, 8).m128i_u64[0];
  v17 = v16;
  if ( v15.m128i_i32[0] < (int)v16 )
    v17 = v15.m128i_i32[0];
  LODWORD(v26) = v17;
  v18 = v16;
  if ( v15.m128i_i32[0] > (int)v16 )
    v18 = v15.m128i_i32[0];
  v27 = v18;
  if ( v15.m128i_i32[1] >= SHIDWORD(v16) )
  {
    HIDWORD(v26) = HIDWORD(v16);
    v28 = v15.m128i_i32[1];
    if ( v15.m128i_i32[1] > SHIDWORD(v16) )
      goto LABEL_34;
  }
  else
  {
    HIDWORD(v26) = v15.m128i_i32[1];
  }
  v28 = HIDWORD(v16);
LABEL_34:
  *(float *)&v30 = (float)rc.left;
  *((float *)&v30 + 1) = (float)rc.top;
  *((float *)&v30 + 2) = (float)(rc.right - rc.left);
  *((float *)&v30 + 3) = (float)(rc.bottom - rc.top);
  v32 = v30;
  if ( KeyboardHosting::ForceToFitRectWithinMonitorRect((__int64)&v32, (int *)&v26, &v30) )
  {
    v25 = 0LL;
    LODWORD(v32) = (int)*(float *)&v30;
    DWORD1(v32) = (int)*((float *)&v30 + 1);
    DWORD2(v32) = (int)(float)(*((float *)&v30 + 2) + *(float *)&v30);
    HIDWORD(v32) = (int)(float)(*((float *)&v30 + 3) + *((float *)&v30 + 1));
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v25);
    v25 = 0LL;
    v19 = operator new(0x48uLL, (const struct std::nothrow_t *)&std::nothrow);
    v26 = v19;
    if ( !v19 )
    {
      Microsoft::WRL::Details::MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>::~MakeAllocator<CBaseTrayFlyoutExperienceManager::DebounceDetection::Notification>((void **)&v26);
      v6 = -2147024882;
LABEL_38:
      v22 = (unsigned int)v6;
      v23 = 3646LL;
LABEL_41:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v23,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)v22);
      Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v25);
      return (unsigned int)v6;
    }
    v20 = CCommonApplicationViewPosition::CCommonApplicationViewPosition((CCommonApplicationViewPosition *)v19);
    v26 = 0LL;
    Microsoft::WRL::ComPtr<CCommonApplicationViewPosition>::Attach(&v26, (__int64)v20);
    v21 = (__int64)v26;
    v26[1] = v32;
    v6 = Microsoft::WRL::Details::RuntimeClassBaseT<2>::AsIID<Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CCommonApplicationViewPositionImpl,Microsoft::WRL::FtmBase>>(
           v21,
           (__int64)&GUID_f9b8d4b3_64da_447c_b1ba_68861510eed6,
           &v25);
    Microsoft::WRL::ComPtr<CCommonApplicationViewPosition>::InternalRelease((__int64 *)&v26);
    if ( v6 < 0 )
      goto LABEL_38;
    v24 = (*(__int64 (__fastcall **)(struct IApplicationFrame *, __int64))(*(_QWORD *)a1 + 32LL))(a1, v25);
    v6 = v24;
    if ( v24 < 0 )
    {
      v22 = (unsigned int)v24;
      v23 = 3647LL;
      goto LABEL_41;
    }
    Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(&v25);
  }
  return 0LL;
}
