/*
 * XREFs of ?MoveFrameWithinScreenIfNecessary@TouchKeyboardExperienceManager@@CAJPEAUIApplicationFrame@@PEAUIApplicationFrameWrapper@@_N@Z @ 0x180460F6C
 * Callers:
 *     _lambda_78d65514523b09204dbef74fe9d00fb5_::operator() @ 0x1801B0448 (_lambda_78d65514523b09204dbef74fe9d00fb5_--operator().c)
 *     _lambda_c7f0fc1c079bbf2d30ee63c1cd0b2cd0_::operator() @ 0x1801B09E4 (_lambda_c7f0fc1c079bbf2d30ee63c1cd0b2cd0_--operator().c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180166104 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     ??$MakeAndInitialize@VCCommonApplicationViewPosition@@UIApplicationViewPosition@@UtagRECT@@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@UIApplicationViewPosition@@@WRL@Microsoft@@@012@$$QEAUtagRECT@@@Z @ 0x1801AE8A0 (--$MakeAndInitialize@VCCommonApplicationViewPosition@@UIApplicationViewPosition@@Ut_ea_1801AE8A0.c)
 *     KeyboardHosting::ForceToFitRectWithinMonitorRect @ 0x1801B0F80 (KeyboardHosting--ForceToFitRectWithinMonitorRect.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ??1?$ComPtr@UIShellRotationManager@@@WRL@Microsoft@@QEAA@XZ @ 0x1802D5460 (--1-$ComPtr@UIShellRotationManager@@@WRL@Microsoft@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TouchKeyboardExperienceManager::MoveFrameWithinScreenIfNecessary(
        struct IApplicationFrame *a1,
        struct IApplicationFrameWrapper *a2,
        char a3)
{
  __int64 v5; // rdx
  unsigned int v6; // ebx
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
  int v19; // eax
  __int64 v20; // rdx
  void *v21; // [rsp+28h] [rbp-39h] BYREF
  __int32 v22; // [rsp+30h] [rbp-31h]
  __int32 v23; // [rsp+34h] [rbp-2Dh]
  __int128 v24; // [rsp+38h] [rbp-29h] BYREF
  HWND hWnd; // [rsp+48h] [rbp-19h] BYREF
  RECT rc; // [rsp+50h] [rbp-11h] BYREF
  __int128 v27; // [rsp+60h] [rbp-1h] BYREF
  struct tagRECT Rect; // [rsp+70h] [rbp+Fh] BYREF
  struct tagMONITORINFO mi; // [rsp+80h] [rbp+1Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C0h] [rbp+5Fh]

  if ( !a1 )
  {
    v5 = 3807LL;
LABEL_3:
    v6 = -2147024809;
LABEL_4:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v5,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)v6);
    return v6;
  }
  if ( !a2 )
  {
    v5 = 3808LL;
    goto LABEL_3;
  }
  hWnd = 0LL;
  v6 = (*(__int64 (__fastcall **)(struct IApplicationFrame *, HWND *))(*(_QWORD *)a1 + 24LL))(a1, &hWnd);
  if ( (v6 & 0x80000000) != 0 )
  {
    v5 = 3811LL;
    goto LABEL_4;
  }
  Rect = 0LL;
  if ( !GetWindowRect(hWnd, &Rect) )
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0xEE5,
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
    v5 = 3823LL;
    goto LABEL_4;
  }
  memset(&mi, 0, sizeof(mi));
  mi.cbSize = 40;
  if ( !GetMonitorInfoW(v13, &mi) )
  {
    v6 = -2147467259;
    v5 = 3826LL;
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
  LODWORD(v21) = v17;
  v18 = v16;
  if ( v15.m128i_i32[0] > (int)v16 )
    v18 = v15.m128i_i32[0];
  v22 = v18;
  if ( v15.m128i_i32[1] >= SHIDWORD(v16) )
  {
    HIDWORD(v21) = HIDWORD(v16);
    v23 = v15.m128i_i32[1];
    if ( v15.m128i_i32[1] > SHIDWORD(v16) )
      goto LABEL_34;
  }
  else
  {
    HIDWORD(v21) = v15.m128i_i32[1];
  }
  v23 = HIDWORD(v16);
LABEL_34:
  *(float *)&v24 = (float)rc.left;
  *((float *)&v24 + 1) = (float)rc.top;
  *((float *)&v24 + 2) = (float)(rc.right - rc.left + 1);
  *((float *)&v24 + 3) = (float)(rc.bottom - rc.top + 1);
  v27 = v24;
  if ( KeyboardHosting::ForceToFitRectWithinMonitorRect((__int64)&v27, (int *)&v21, &v24) )
  {
    v21 = 0LL;
    LODWORD(v27) = (int)*(float *)&v24;
    DWORD1(v27) = (int)*((float *)&v24 + 1);
    DWORD2(v27) = (int)(float)(*((float *)&v24 + 2) + *(float *)&v24);
    HIDWORD(v27) = (int)(float)(*((float *)&v24 + 1) + *((float *)&v24 + 3));
    v19 = Microsoft::WRL::Details::MakeAndInitialize<CCommonApplicationViewPosition,IApplicationViewPosition,tagRECT>(
            &v21,
            &v27);
    v6 = v19;
    if ( v19 < 0 )
    {
      v20 = 3841LL;
LABEL_39:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v20,
        (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v19);
      Microsoft::WRL::ComPtr<IShellRotationManager>::~ComPtr<IShellRotationManager>((__int64 *)&v21);
      return v6;
    }
    v19 = (*(__int64 (__fastcall **)(struct IApplicationFrame *, void *))(*(_QWORD *)a1 + 32LL))(a1, v21);
    v6 = v19;
    if ( v19 < 0 )
    {
      v20 = 3842LL;
      goto LABEL_39;
    }
    Microsoft::WRL::ComPtr<IShellRotationManager>::~ComPtr<IShellRotationManager>((__int64 *)&v21);
  }
  return 0LL;
}
