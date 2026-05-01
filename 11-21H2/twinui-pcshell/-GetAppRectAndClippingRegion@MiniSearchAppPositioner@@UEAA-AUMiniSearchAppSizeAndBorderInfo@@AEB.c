/*
 * XREFs of ?GetAppRectAndClippingRegion@MiniSearchAppPositioner@@UEAA?AUMiniSearchAppSizeAndBorderInfo@@AEBUtagRECT@@@Z @ 0x1803AE900
 * Callers:
 *     <none>
 * Callees:
 *     ?IsWideAtStartupEnabled@SearchAppSizeHelpers@@YA_NH@Z @ 0x1800F8128 (-IsWideAtStartupEnabled@SearchAppSizeHelpers@@YA_NH@Z.c)
 *     __security_check_cookie @ 0x1801881F0 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801EAD40 (_guard_xfg_dispatch_icall_nop.c)
 *     ?CalculateTaskbarSearchBoxRect@MiniSearchAppPositioner@@AEAA?AURect@Foundation@Windows@winrt@@UMonitorInfo@@_N@Z @ 0x1803AE13C (-CalculateTaskbarSearchBoxRect@MiniSearchAppPositioner@@AEAA-AURect@Foundation@Windows@winrt@@UM.c)
 *     ?CorrectRectsForAutoHide@MiniSearchAppPositioner@@AEAAXPEAUMonitorInfo@@@Z @ 0x1803AE2D0 (-CorrectRectsForAutoHide@MiniSearchAppPositioner@@AEAAXPEAUMonitorInfo@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
struct tagRECT *__fastcall MiniSearchAppPositioner::GetAppRectAndClippingRegion(
        MiniSearchAppPositioner *a1,
        struct tagRECT *a2)
{
  MiniSearchAppPositioner *v4; // rcx
  char v5; // si
  int v6; // r14d
  int v7; // ebx
  int v8; // edi
  unsigned int v9; // eax
  int v10; // edi
  int v11; // edx
  LONG v12; // eax
  __int32 bottom; // ecx
  LONG v14; // ecx
  __int64 v15; // rax
  RECT *v16; // rax
  int v17; // eax
  _OWORD v19[5]; // [rsp+20h] [rbp-E0h] BYREF
  int v20; // [rsp+70h] [rbp-90h]
  _BYTE v21[16]; // [rsp+80h] [rbp-80h] BYREF
  RECT rcSrc1; // [rsp+90h] [rbp-70h] BYREF
  RECT rcSrc2; // [rsp+A0h] [rbp-60h] BYREF
  __m128i v24; // [rsp+B0h] [rbp-50h] BYREF
  RECT v25; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v26; // [rsp+D0h] [rbp-30h]
  __int128 v27; // [rsp+E0h] [rbp-20h]
  __int128 v28; // [rsp+F0h] [rbp-10h]
  int v29; // [rsp+100h] [rbp+0h]

  *a2 = 0LL;
  (*(void (__fastcall **)(_QWORD *, __m128i *))(**((_QWORD **)a1 + 1) + 8LL))(*((_QWORD **)a1 + 1), &v24);
  MiniSearchAppPositioner::CorrectRectsForAutoHide(v4, &v24);
  v5 = (*(__int64 (__fastcall **)(_QWORD *))(**((_QWORD **)a1 + 1) + 16LL))(*((_QWORD **)a1 + 1));
  rcSrc2 = v25;
  v6 = 290;
  MulDiv(290, SDWORD2(v27), 96);
  v7 = MulDiv(((DWORD1(v27) - 1) & 0xFFFFFFFD) != 0 ? 188 : 200, SDWORD2(v27), 96);
  v8 = DWORD1(v27);
  if ( DWORD1(v27) != -1 )
  {
    v9 = MulDiv(v24.m128i_i32[2] - v24.m128i_i32[0], 96, SDWORD2(v27));
    SearchAppSizeHelpers::IsWideAtStartupEnabled((SearchAppSizeHelpers *)v9);
    if ( !v8 || v8 == 2 )
      v6 = 302;
    v10 = MulDiv(v6, SDWORD2(v27), 96);
    if ( v7 <= MulDiv(188, SDWORD2(v27), 96) )
      v7 = MulDiv(188, SDWORD2(v27), 96);
    if ( DWORD1(v27) == 3 && BYTE1(v27) )
      v7 += DWORD2(v28) - v28;
    if ( DWORD1(v27) )
    {
      if ( DWORD1(v27) == 1 )
      {
        if ( v5 )
          v12 = v26 - v10;
        else
          v12 = DWORD2(v26);
        v14 = HIDWORD(v26);
        goto LABEL_29;
      }
      if ( DWORD1(v27) != 2 )
      {
        v11 = MulDiv(12, SDWORD2(v27), 96);
        if ( v5 )
          v12 = v11 + DWORD1(v28) - v10;
        else
          v12 = HIDWORD(v27) - v11;
        rcSrc2.left = v12;
        if ( HIDWORD(v28) == 1 )
        {
          v12 = (DWORD1(v28) + HIDWORD(v27) - v10) / 2;
          rcSrc2.left = v12;
        }
        if ( BYTE1(v27) )
          bottom = v24.m128i_i32[3];
        else
          bottom = v25.bottom;
        v14 = bottom - v7;
        goto LABEL_30;
      }
      v12 = v26 - v10;
    }
    else
    {
      v12 = DWORD2(v26);
    }
    v14 = DWORD1(v26);
LABEL_29:
    rcSrc2.left = v12;
LABEL_30:
    rcSrc2.top = v14;
    rcSrc2.right = v10 + v12;
    rcSrc2.bottom = v14 + v7;
  }
  v19[0] = v24;
  v19[1] = v25;
  v19[2] = v26;
  v19[3] = v27;
  v19[4] = v28;
  v20 = v29;
  v15 = MiniSearchAppPositioner::CalculateTaskbarSearchBoxRect(a1, (__int64)v21, (__int64)v19, v5);
  if ( COERCE_INT(*(float *)(v15 + 4) + *(float *)(v15 + 12)) == *(int *)(v15 + 4) )
    MulDiv(40, SDWORD2(v27), 96);
  v16 = (RECT *)&v24;
  if ( !BYTE1(v27) )
    v16 = &v25;
  rcSrc1 = *v16;
  v17 = MulDiv(12, SDWORD2(v27), 96);
  switch ( DWORD1(v27) )
  {
    case 0:
      rcSrc1.bottom -= v17;
      goto LABEL_43;
    case 1:
      rcSrc1.bottom -= v17;
      rcSrc1.left += v17;
LABEL_44:
      rcSrc1.right -= v17;
      break;
    case 2:
      rcSrc1.bottom -= v17;
      rcSrc1.top += v17;
      rcSrc1.left += v17;
      break;
    case 3:
      rcSrc1.left += v17;
LABEL_43:
      rcSrc1.top += v17;
      goto LABEL_44;
  }
  IntersectRect(a2, &rcSrc1, &rcSrc2);
  return a2;
}
