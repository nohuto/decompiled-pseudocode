/*
 * XREFs of ?_AdjustSizeForMonitorChange@CDesktopPositioner@@AEAAJPEAUIImmersiveMonitor@@0PEAUtagSIZE@@PEAW4TRY_POSITION_VIEW_FLAGS@@@Z @ 0x1804FC694
 * Callers:
 *     ?_GetRectAndFlagsFromPresentationArgs@CDesktopPositioner@@AEAAJPEAUIPresentationRequestedArgs@@UtagRECT@@PEAU3@PEAW4TRY_POSITION_VIEW_FLAGS@@PEAPEAUIImmersiveMonitor@@@Z @ 0x1800F0580 (-_GetRectAndFlagsFromPresentationArgs@CDesktopPositioner@@AEAAJPEAUIPresentationRequestedArgs@@U.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetScaleFactorForRect@@YA?AW4DEVICE_SCALE_FACTOR@@AEBUtagRECT@@@Z @ 0x1800F2728 (-GetScaleFactorForRect@@YA-AW4DEVICE_SCALE_FACTOR@@AEBUtagRECT@@@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CDesktopPositioner::_AdjustSizeForMonitorChange(
        CDesktopPositioner *this,
        struct IImmersiveMonitor *a2,
        struct IImmersiveMonitor *a3,
        struct tagSIZE *a4,
        enum TRY_POSITION_VIEW_FLAGS *a5)
{
  int v7; // ebx
  __int64 v8; // rdx
  __int64 v10; // rax
  int ScaleFactorForRect; // ebx
  int v12; // eax
  int v13; // edi
  LONG v14; // eax
  LONG cy; // ecx
  struct tagRECT v16; // [rsp+20h] [rbp-48h] BYREF
  struct tagRECT v17; // [rsp+30h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v7 = (*(__int64 (__fastcall **)(struct IImmersiveMonitor *, struct tagRECT *))(*(_QWORD *)a2 + 88LL))(a2, &v17);
  if ( v7 < 0 )
  {
    v8 = 2888LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
      (const char *)(unsigned int)v7);
    return (unsigned int)v7;
  }
  v10 = *(_QWORD *)a3;
  v16 = 0LL;
  v7 = (*(__int64 (__fastcall **)(struct IImmersiveMonitor *, struct tagRECT *))(v10 + 88))(a3, &v16);
  if ( v7 < 0 )
  {
    v8 = 2891LL;
    goto LABEL_3;
  }
  ScaleFactorForRect = GetScaleFactorForRect(&v17);
  v12 = GetScaleFactorForRect(&v16);
  v13 = v12;
  if ( v12 != ScaleFactorForRect )
  {
    v14 = MulDiv(a4->cx, v12, ScaleFactorForRect);
    cy = a4->cy;
    a4->cx = v14;
    a4->cy = MulDiv(cy, v13, ScaleFactorForRect);
    *(_DWORD *)a5 |= 0xCu;
  }
  return 0LL;
}
