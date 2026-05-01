/*
 * XREFs of ?_GetOffsetRectFromSize@CDesktopPositioner@@AEAAJPEBUtagRECT@@0UtagSIZE@@PEAU2@@Z @ 0x1800F276C
 * Callers:
 *     ?_GetDefaultRect@CDesktopPositioner@@AEAAJPEBUtagRECT@@W4DefaultSizeOptions@@PEAU2@@Z @ 0x1800F00B8 (-_GetDefaultRect@CDesktopPositioner@@AEAAJPEBUtagRECT@@W4DefaultSizeOptions@@PEAU2@@Z.c)
 *     ?_GetPreferredPosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEBUtagRECT@@PEAPEAUIApplicationViewPosition@@@Z @ 0x1800F15EC (-_GetPreferredPosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEBUtagRECT@@PEAPEAUIAppli.c)
 *     ?_GetOffsetPosition@CDesktopPositioner@@AEAAJPEBUtagRECT@@PEAPEAUIApplicationViewPosition@@@Z @ 0x1804FD118 (-_GetOffsetPosition@CDesktopPositioner@@AEAAJPEBUtagRECT@@PEAPEAUIApplicationViewPosition@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800917F4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_GetWorkAreaSizeFromRect@CDesktopPositioner@@AEAAJPEBUtagRECT@@PEAUtagSIZE@@@Z @ 0x1800F13D8 (-_GetWorkAreaSizeFromRect@CDesktopPositioner@@AEAAJPEBUtagRECT@@PEAUtagSIZE@@@Z.c)
 *     ?_GetWorkAreaFromRect@CDesktopPositioner@@AEAAJPEBUtagRECT@@PEAU2@@Z @ 0x1800F1458 (-_GetWorkAreaFromRect@CDesktopPositioner@@AEAAJPEBUtagRECT@@PEAU2@@Z.c)
 *     ?GetScaleFactorForRect@@YA?AW4DEVICE_SCALE_FACTOR@@AEBUtagRECT@@@Z @ 0x1800F2728 (-GetScaleFactorForRect@@YA-AW4DEVICE_SCALE_FACTOR@@AEBUtagRECT@@@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_NormalizeTitlebarHeight@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1800F2CDC (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_NormalizeTitlebarHeight@@@details@wil@@QE.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CDesktopPositioner::_GetOffsetRectFromSize(
        CDesktopPositioner *this,
        const struct tagRECT *a2,
        const struct tagRECT *a3,
        struct tagSIZE a4,
        struct tagRECT *a5)
{
  unsigned int v7; // esi
  unsigned __int32 v8; // r14d
  int WorkAreaFromRect; // ebx
  LONG cx; // r13d
  LONG v11; // ebx
  LONG cy; // eax
  int SystemMetrics; // edi
  struct tagRECT *v14; // rcx
  int ScaleFactorForRect; // edi
  unsigned int v16; // edi
  signed int v17; // edi
  unsigned int v18; // ecx
  LONG left; // r11d
  __int64 v20; // r10
  int v21; // edx
  LONG v22; // r9d
  int v23; // esi
  __int64 v25; // rdx
  int v26; // [rsp+20h] [rbp-60h]
  LONG v28; // [rsp+28h] [rbp-58h]
  struct tagSIZE v29; // [rsp+30h] [rbp-50h] BYREF
  const struct tagRECT *v30; // [rsp+38h] [rbp-48h]
  struct tagRECT v31; // [rsp+40h] [rbp-40h] BYREF
  struct tagRECT v32; // [rsp+50h] [rbp-30h] BYREF
  struct tagRECT v33; // [rsp+60h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+38h]

  v30 = a3;
  v32 = 0LL;
  *a5 = 0LL;
  v7 = 0;
  v8 = 1;
  if ( !a3 )
    v8 = _InterlockedIncrement(&dword_1807B4560);
  WorkAreaFromRect = CDesktopPositioner::_GetWorkAreaFromRect(this, a2, &v31);
  if ( WorkAreaFromRect < 0 )
  {
    v25 = 1116LL;
LABEL_20:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v25,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
      (const char *)(unsigned int)WorkAreaFromRect);
    return (unsigned int)WorkAreaFromRect;
  }
  WorkAreaFromRect = CDesktopPositioner::_GetWorkAreaSizeFromRect(this, a2, &v29);
  if ( WorkAreaFromRect < 0 )
  {
    v25 = 1119LL;
    goto LABEL_20;
  }
  cx = a4.cx;
  v11 = v29.cx;
  if ( a4.cx > v29.cx )
    cx = v29.cx;
  cy = a4.cy;
  if ( a4.cy > v29.cy )
    cy = v29.cy;
  v28 = cy;
  SystemMetrics = GetSystemMetrics(32);
  v26 = SystemMetrics + GetSystemMetrics(30);
  if ( a2 )
  {
    v32 = *a2;
    v14 = &v32;
  }
  else
  {
    v33 = 0LL;
    v14 = &v33;
  }
  ScaleFactorForRect = GetScaleFactorForRect(v14);
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_NormalizeTitlebarHeight>::ReportUsage(
    &`wil::Feature<__WilFeatureTraits_Feature_NormalizeTitlebarHeight>::GetImpl'::`2'::impl,
    0LL);
  v16 = (int)((unsigned __int64)(43980465120LL * ScaleFactorForRect) >> 32) >> 5;
  v17 = (v16 >> 31) + v16;
  v18 = (v11 - cx) / v26 + 1;
  left = v31.left;
  v20 = HIDWORD(*(_QWORD *)&v31.left);
  if ( v30 )
  {
    if ( cx + v30->left + v26 <= v31.right )
      left = v30->left;
    if ( v28 + v17 + v30->top <= v31.bottom )
      LODWORD(v20) = v30->top;
  }
  if ( v18 )
    v21 = v8 % v18;
  else
    v21 = 0;
  v22 = left + v21 * v26;
  if ( (v29.cy - v28) / v17 != -1 )
    v7 = v8 % ((v29.cy - v28) / v17 + 1);
  v23 = v17 * v7;
  a5->left = v22;
  a5->top = v23 + v20;
  a5->right = v22 + cx;
  a5->bottom = v23 + v20 + v28;
  return 0LL;
}
