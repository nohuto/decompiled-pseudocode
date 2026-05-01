/*
 * XREFs of ?_GetOffsetRectFromSize@CDesktopPositioner@@AEAAJPEBUtagRECT@@0UtagSIZE@@PEAU2@@Z @ 0x1800601D8
 * Callers:
 *     ?_GetDefaultRect@CDesktopPositioner@@AEAAJPEBUtagRECT@@W4DefaultSizeOptions@@PEAU2@@Z @ 0x18005FFEC (-_GetDefaultRect@CDesktopPositioner@@AEAAJPEBUtagRECT@@W4DefaultSizeOptions@@PEAU2@@Z.c)
 *     ?_GetPreferredPosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEBUtagRECT@@PEAPEAUIApplicationViewPosition@@@Z @ 0x18007754C (-_GetPreferredPosition@CDesktopPositioner@@AEAAJPEAUIApplicationView@@PEBUtagRECT@@PEAPEAUIAppli.c)
 *     ?_GetOffsetPosition@CDesktopPositioner@@AEAAJPEBUtagRECT@@PEAPEAUIApplicationViewPosition@@@Z @ 0x1805B58FC (-_GetOffsetPosition@CDesktopPositioner@@AEAAJPEBUtagRECT@@PEAPEAUIApplicationViewPosition@@@Z.c)
 * Callees:
 *     ?GetScaleFactorForRect@@YA?AW4DEVICE_SCALE_FACTOR@@AEBUtagRECT@@@Z @ 0x180060388 (-GetScaleFactorForRect@@YA-AW4DEVICE_SCALE_FACTOR@@AEBUtagRECT@@@Z.c)
 *     ?_GetWorkAreaSizeFromRect@CDesktopPositioner@@AEAAJPEBUtagRECT@@PEAUtagSIZE@@@Z @ 0x1800603CC (-_GetWorkAreaSizeFromRect@CDesktopPositioner@@AEAAJPEBUtagRECT@@PEAUtagSIZE@@@Z.c)
 *     ?_GetWorkAreaFromRect@CDesktopPositioner@@AEAAJPEBUtagRECT@@PEAU2@@Z @ 0x180076F54 (-_GetWorkAreaFromRect@CDesktopPositioner@@AEAAJPEBUtagRECT@@PEAU2@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

__int64 __fastcall CDesktopPositioner::_GetOffsetRectFromSize(
        CDesktopPositioner *this,
        const struct tagRECT *a2,
        const struct tagRECT *a3,
        struct tagSIZE a4,
        struct tagRECT *a5)
{
  unsigned int v5; // esi
  unsigned __int32 v8; // r14d
  int WorkAreaFromRect; // ebx
  LONG cx; // r13d
  LONG cy; // eax
  LONG v12; // ebx
  int SystemMetrics; // edi
  struct tagRECT *v14; // rcx
  enum DEVICE_SCALE_FACTOR ScaleFactorForRect; // eax
  LONG left; // r10d
  __int64 v17; // r9
  int v18; // edi
  unsigned int v19; // ecx
  int v20; // edx
  LONG v21; // r11d
  int v22; // esi
  __int64 result; // rax
  __int64 v24; // rdx
  int v25; // [rsp+20h] [rbp-60h]
  int v26; // [rsp+20h] [rbp-60h]
  LONG v28; // [rsp+28h] [rbp-58h]
  struct tagSIZE v29; // [rsp+30h] [rbp-50h] BYREF
  const struct tagRECT *v30; // [rsp+38h] [rbp-48h]
  struct tagRECT rc; // [rsp+40h] [rbp-40h] BYREF
  struct tagRECT v32; // [rsp+50h] [rbp-30h] BYREF
  struct tagRECT v33; // [rsp+60h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+38h]

  v5 = 0;
  v30 = a3;
  v8 = 1;
  *a5 = 0LL;
  v32 = 0LL;
  if ( !a3 )
    v8 = _InterlockedIncrement(&dword_18098EA60);
  WorkAreaFromRect = CDesktopPositioner::_GetWorkAreaFromRect(this, a2, &rc);
  if ( WorkAreaFromRect < 0 )
  {
    v24 = 1429LL;
LABEL_20:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v24,
      (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
      (const char *)(unsigned int)WorkAreaFromRect,
      v25);
    return (unsigned int)WorkAreaFromRect;
  }
  WorkAreaFromRect = CDesktopPositioner::_GetWorkAreaSizeFromRect(this, a2, &v29);
  if ( WorkAreaFromRect < 0 )
  {
    v24 = 1432LL;
    goto LABEL_20;
  }
  cx = a4.cx;
  cy = a4.cy;
  v12 = v29.cx;
  if ( a4.cx > v29.cx )
    cx = v29.cx;
  if ( a4.cy > v29.cy )
    cy = v29.cy;
  v28 = cy;
  SystemMetrics = GetSystemMetrics(32);
  v26 = SystemMetrics + GetSystemMetrics(30);
  if ( a2 )
  {
    v14 = &v32;
    v32 = *a2;
  }
  else
  {
    v14 = &v33;
    v33 = 0LL;
  }
  ScaleFactorForRect = GetScaleFactorForRect(v14);
  left = rc.left;
  v17 = HIDWORD(*(_QWORD *)&rc.left);
  v18 = 32 * ScaleFactorForRect / 100;
  v19 = (v12 - cx) / v26 + 1;
  if ( v30 )
  {
    if ( cx + v30->left + v26 <= rc.right )
      left = v30->left;
    if ( v28 + v30->top + v18 <= rc.bottom )
      LODWORD(v17) = v30->top;
  }
  if ( v19 )
    v20 = v8 % v19;
  else
    v20 = 0;
  v21 = v26 * v20 + left;
  if ( (v29.cy - v28) / v18 != -1 )
    v5 = v8 % ((v29.cy - v28) / v18 + 1);
  a5->left = v21;
  v22 = v18 * v5;
  a5->top = v22 + v17;
  a5->right = v21 + cx;
  result = 0LL;
  a5->bottom = v22 + v17 + v28;
  return result;
}
