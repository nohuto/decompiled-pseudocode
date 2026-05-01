/*
 * XREFs of ?_GetWorkAreaSizeFromRect@CDesktopPositioner@@AEAAJPEBUtagRECT@@PEAUtagSIZE@@@Z @ 0x1800603CC
 * Callers:
 *     ?_GetDefaultSizeForRect@CDesktopPositioner@@AEAAJW4DefaultSizeOptions@@PEBUtagRECT@@PEAUtagSIZE@@@Z @ 0x180060064 (-_GetDefaultSizeForRect@CDesktopPositioner@@AEAAJW4DefaultSizeOptions@@PEBUtagRECT@@PEAUtagSIZE@.c)
 *     ?_GetOffsetRectFromSize@CDesktopPositioner@@AEAAJPEBUtagRECT@@0UtagSIZE@@PEAU2@@Z @ 0x1800601D8 (-_GetOffsetRectFromSize@CDesktopPositioner@@AEAAJPEBUtagRECT@@0UtagSIZE@@PEAU2@@Z.c)
 * Callees:
 *     ?_GetWorkAreaFromRect@CDesktopPositioner@@AEAAJPEBUtagRECT@@PEAU2@@Z @ 0x180076F54 (-_GetWorkAreaFromRect@CDesktopPositioner@@AEAAJPEBUtagRECT@@PEAU2@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 */

__int64 __fastcall CDesktopPositioner::_GetWorkAreaSizeFromRect(
        CDesktopPositioner *this,
        const struct tagRECT *a2,
        struct tagSIZE *a3)
{
  int WorkAreaFromRect; // eax
  unsigned int v5; // ebx
  int v7; // [rsp+20h] [rbp-28h]
  struct tagSIZE v8; // [rsp+20h] [rbp-28h]
  struct tagRECT rc; // [rsp+28h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  *a3 = 0LL;
  rc = 0LL;
  WorkAreaFromRect = CDesktopPositioner::_GetWorkAreaFromRect(this, a2, &rc);
  v5 = WorkAreaFromRect;
  if ( WorkAreaFromRect < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x52F,
      (unsigned int)"pcshell\\twinui\\shellpositioners\\lib\\desktoppositioner.cpp",
      (const char *)(unsigned int)WorkAreaFromRect,
      v7);
    return v5;
  }
  else
  {
    v8.cx = rc.right - rc.left;
    v8.cy = rc.bottom - rc.top;
    *a3 = v8;
    return 0LL;
  }
}
