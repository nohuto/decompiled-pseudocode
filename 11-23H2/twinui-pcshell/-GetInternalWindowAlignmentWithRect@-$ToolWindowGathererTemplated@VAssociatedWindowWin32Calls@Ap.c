/*
 * XREFs of ?GetInternalWindowAlignmentWithRect@?$ToolWindowGathererTemplated@VAssociatedWindowWin32Calls@ApplicationViewManagement@@@ApplicationViewManagement@@SAJAEBUtagRECT@@PEAUHWND__@@PEAW4Alignment@2@@Z @ 0x1803CE6BC
 * Callers:
 *     ?CheckBorderWindowAlignment@?$ToolWindowGathererTemplated@VAssociatedWindowWin32Calls@ApplicationViewManagement@@@ApplicationViewManagement@@CAJUtagRECT@@PEAUHWND__@@W4BorderWindowAlignment@12@PEAW4Alignment@2@@Z @ 0x1803CD804 (-CheckBorderWindowAlignment@-$ToolWindowGathererTemplated@VAssociatedWindowWin32Calls@Applicatio.c)
 * Callees:
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1801322B8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??8Geometry@@YA_NAEBUCRect@0@0@Z @ 0x1803CD4B8 (--8Geometry@@YA_NAEBUCRect@0@0@Z.c)
 */

__int64 __fastcall ApplicationViewManagement::ToolWindowGathererTemplated<ApplicationViewManagement::AssociatedWindowWin32Calls>::GetInternalWindowAlignmentWithRect(
        LONG *a1,
        HWND a2,
        _DWORD *a3)
{
  int v4; // ebx
  const char *v6; // r9
  LONG v8; // r14d
  LONG v9; // r13d
  LONG v10; // r15d
  LONG v11; // r12d
  LONG bottom; // r8d
  LONG right; // edx
  LONG top; // ecx
  LONG left; // esi
  LONG v16; // eax
  int v17; // r9d
  int v18; // r10d
  int v19; // r11d
  struct tagRECT rc; // [rsp+20h] [rbp-30h] BYREF
  struct tagRECT Rect; // [rsp+30h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+38h]

  v4 = 0;
  *a3 = 0;
  Rect = 0LL;
  if ( !GetWindowRect(a2, &Rect) )
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0x30,
             (int)"pcshell\\twinui\\appviewmanager\\lib\\ToolWindowGatherer.h",
             v6);
  v8 = *a1;
  v9 = a1[1];
  v10 = a1[2];
  v11 = a1[3];
  rc.left = *a1;
  rc.top = v9;
  rc.right = v10;
  rc.bottom = v11;
  InflateRect(&rc, 2, 2);
  bottom = Rect.bottom;
  right = Rect.right;
  if ( rc.bottom > Rect.bottom )
    bottom = rc.bottom;
  top = Rect.top;
  if ( rc.right > Rect.right )
    right = rc.right;
  left = Rect.left;
  v16 = Rect.left;
  Rect.right = right;
  if ( rc.top < Rect.top )
    top = rc.top;
  Rect.top = top;
  if ( rc.left < Rect.left )
    v16 = rc.left;
  Rect.left = v16;
  Rect.bottom = bottom;
  if ( Geometry::operator==(&Rect, &rc) )
  {
    if ( (int)abs32(left - v8) > 2 )
    {
      if ( (int)abs32(v17 - v10) > 2 )
        goto LABEL_18;
      *a3 = 2;
    }
    else
    {
      *a3 = 1;
    }
    v4 = v18 - v19;
LABEL_18:
    if ( v4 < v17 - left - 4 )
    {
      if ( (int)abs32(v19 - v9) > 2 )
      {
        if ( (int)abs32(v18 - v11) <= 2 )
          *a3 = 8;
      }
      else
      {
        *a3 = 4;
      }
    }
    return 0LL;
  }
  *a3 = 0;
  return 0LL;
}
