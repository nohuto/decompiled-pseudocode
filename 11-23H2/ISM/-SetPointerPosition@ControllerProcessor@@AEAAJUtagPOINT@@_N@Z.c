/*
 * XREFs of ?SetPointerPosition@ControllerProcessor@@AEAAJUtagPOINT@@_N@Z @ 0x1801981E8
 * Callers:
 *     ?ApplyNavigationDelta@ControllerProcessor@@AEAAJXZ @ 0x1801951EC (-ApplyNavigationDelta@ControllerProcessor@@AEAAJXZ.c)
 *     ?OnUpdateCursorMagnetismTimer@ControllerProcessor@@AEAAJXZ @ 0x1801971E4 (-OnUpdateCursorMagnetismTimer@ControllerProcessor@@AEAAJXZ.c)
 *     ?TurnNavigationOn@ControllerProcessor@@AEAAJXZ @ 0x180198EE8 (-TurnNavigationOn@ControllerProcessor@@AEAAJXZ.c)
 *     ?UpdateNavigationParameters@ControllerProcessor@@AEAAJPEAUtagRECT@@@Z @ 0x180199328 (-UpdateNavigationParameters@ControllerProcessor@@AEAAJPEAUtagRECT@@@Z.c)
 * Callees:
 *     ?IsEdition@@YA_N_K@Z @ 0x180037964 (-IsEdition@@YA_N_K@Z.c)
 *     memset_0 @ 0x180056688 (memset_0.c)
 *     __security_check_cookie @ 0x180056730 (__security_check_cookie.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180058998 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetCursorPosition@ControllerProcessor@@AEAA?AUtagPOINT@@XZ @ 0x180196234 (-GetCursorPosition@ControllerProcessor@@AEAA-AUtagPOINT@@XZ.c)
 *     ?SendMouseInputInfo@ControllerProcessor@@AEAAJPEAURawMouseInputInfo@@@Z @ 0x180198010 (-SendMouseInputInfo@ControllerProcessor@@AEAAJPEAURawMouseInputInfo@@@Z.c)
 */

__int64 __fastcall ControllerProcessor::SetPointerPosition(struct tagPOINT *this, struct tagPOINT a2, char a3)
{
  LONG y; // r15d
  char v7; // r14
  DWORD TickCount; // eax
  int v9; // eax
  ULONGLONG TickCount64; // rax
  int v11; // eax
  LARGE_INTEGER PerformanceCount; // [rsp+20h] [rbp-E0h] BYREF
  struct tagPOINT v14; // [rsp+28h] [rbp-D8h] BYREF
  int v15; // [rsp+30h] [rbp-D0h]
  int v16; // [rsp+34h] [rbp-CCh]
  _BYTE v17[24]; // [rsp+38h] [rbp-C8h] BYREF
  _DWORD v18[4]; // [rsp+50h] [rbp-B0h] BYREF
  LARGE_INTEGER v19; // [rsp+60h] [rbp-A0h]
  int v20; // [rsp+68h] [rbp-98h]
  struct tagPOINT v21; // [rsp+70h] [rbp-90h]
  int v22; // [rsp+9Ch] [rbp-64h]
  LONG x; // [rsp+A0h] [rbp-60h]
  LONG v24; // [rsp+A4h] [rbp-5Ch]
  __int16 v25; // [rsp+AAh] [rbp-56h]
  int v26; // [rsp+B4h] [rbp-4Ch]
  int v27; // [rsp+B8h] [rbp-48h]
  char v28; // [rsp+CCh] [rbp-34h]
  wil::details::in1diag3 *retaddr; // [rsp+2B8h] [rbp+1B8h]

  v14 = a2;
  y = a2.y;
  if ( IsEdition(253345LL) )
  {
    v7 = 1;
    a3 = 1;
  }
  else
  {
    v7 = a3;
    if ( !a3 && this[45].x == a2.x && this[45].y == y )
      return 0LL;
  }
  QueryPerformanceCounter(&PerformanceCount);
  memset_0(v18, 0, 0x218uLL);
  v20 = 536;
  v18[0] = 4096;
  TickCount = GetTickCount();
  v28 = a3;
  v18[2] = TickCount;
  v19 = PerformanceCount;
  v21 = this[38];
  if ( v7 )
  {
    v25 = 1;
    GetPointerDeviceRects(-1LL, v17, &v14);
    v26 = 0xFFFF * (a2.x - v14.x) / (v15 - v14.x - 1);
    v27 = 0xFFFF * (y - v14.y) / (v16 - v14.y - 1);
  }
  else
  {
    v25 = 0;
    this[45] = **(struct tagPOINT **)&ControllerProcessor::GetCursorPosition((ControllerProcessor *)this, &v14);
    v9 = a2.x - this[45].x;
    v27 = y - this[45].y;
    v26 = v9;
  }
  TickCount64 = GetTickCount64();
  if ( LOBYTE(this[968].x)
    && TickCount64 - ControllerProcessor::s_timestampOfLastClosestInteractiveBoundsUpdate > *(_QWORD *)&this[966] )
  {
    ControllerProcessor::s_timestampOfLastClosestInteractiveBoundsUpdate = TickCount64;
    x = this[967].x;
    v24 = this[967].y;
    LOBYTE(this[968].x) = 0;
    v22 = 1;
  }
  this[45] = a2;
  v11 = ControllerProcessor::SendMouseInputInfo((ControllerProcessor *)this, (struct RawMouseInputInfo *)v18);
  if ( v11 < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x774,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\controller\\lib\\controllerprocessor.cpp",
      (const char *)(unsigned int)v11,
      PerformanceCount.LowPart);
  return 0LL;
}
