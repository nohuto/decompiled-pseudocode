/*
 * XREFs of ?AnimateRect@CAcrylicSheet@@QEAAJPEAVCWindowData@@MK@Z @ 0x180099EAC
 * Callers:
 *     ?ApplyWindowResizeStateTransition@CWindowList@@AEAAJXZ @ 0x18010204C (-ApplyWindowResizeStateTransition@CWindowList@@AEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x180060050 (__security_check_cookie.c)
 *     ?AnimateRect@CAcrylicSheet@@QEAAJAEBUtagRECT@@MKUInterpolationParameters@@@Z @ 0x180099CE4 (-AnimateRect@CAcrylicSheet@@QEAAJAEBUtagRECT@@MKUInterpolationParameters@@@Z.c)
 *     ?GetMarginAdjustedWindowRect@CAcrylicSheet@@CA?AUtagRECT@@PEAVCWindowData@@@Z @ 0x18009A5FC (-GetMarginAdjustedWindowRect@CAcrylicSheet@@CA-AUtagRECT@@PEAVCWindowData@@@Z.c)
 */

__int64 __fastcall CAcrylicSheet::AnimateRect(CAcrylicSheet *this, struct CWindowData *a2, float a3)
{
  RECT v4; // xmm0
  __int64 v5; // r8
  __m256i v7; // [rsp+38h] [rbp-59h]
  __m256i v8; // [rsp+68h] [rbp-29h] BYREF
  __int64 v9; // [rsp+88h] [rbp-9h]
  struct tagRECT v10; // [rsp+98h] [rbp+7h] BYREF
  RECT v11; // [rsp+A8h] [rbp+17h] BYREF

  v7.m256i_i32[0] = 0;
  *(_OWORD *)&v7.m256i_u64[1] = 0LL;
  v7.m256i_i64[3] = _xmm;
  v4 = *CAcrylicSheet::GetMarginAdjustedWindowRect(&v10, a2);
  v8 = v7;
  v11 = v4;
  v9 = *(_OWORD *)&_mm_unpackhi_pd((__m128d)_xmm, (__m128d)_xmm);
  return CAcrylicSheet::AnimateRect((__int64)this, &v11, v5, 50, (__int64)&v8);
}
