/*
 * XREFs of VirtualizeMultiMonDigitizerSize @ 0x1C0151F42
 * Callers:
 *     _GetPointerDeviceRects @ 0x1C00AC894 (_GetPointerDeviceRects.c)
 *     MiPGetPhysicalRect @ 0x1C00AC944 (MiPGetPhysicalRect.c)
 *     RemapHimetricPointsForMultiMonDigitizers @ 0x1C01B9DD8 (RemapHimetricPointsForMultiMonDigitizers.c)
 * Callees:
 *     GetScreenRect @ 0x1C00AC98C (GetScreenRect.c)
 *     ExpandedMonitorSpace @ 0x1C01B9090 (ExpandedMonitorSpace.c)
 */

char __fastcall VirtualizeMultiMonDigitizerSize(__int64 a1)
{
  INT v2; // eax
  __m128i *ScreenRect; // rax
  __m128i v4; // xmm6
  INT v5; // eax
  INT v6; // r8d
  INT v7; // ecx
  __int128 v9; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v10[16]; // [rsp+30h] [rbp-28h] BYREF

  LOBYTE(v2) = W32GetCurrentThreadDpiAwarenessContext(a1) & 0xF;
  if ( (_BYTE)v2 != 2 )
  {
    v9 = 0LL;
    ExpandedMonitorSpace(&v9);
    ScreenRect = (__m128i *)GetScreenRect((__int64)v10);
    v4 = *ScreenRect;
    v5 = EngMulDiv(
           *(_DWORD *)(a1 + 8),
           _mm_cvtsi128_si32(_mm_srli_si128(*ScreenRect, 8)) - _mm_cvtsi128_si32(*ScreenRect),
           DWORD2(v9) - v9);
    v6 = HIDWORD(v9) - DWORD1(v9);
    v7 = *(_DWORD *)(a1 + 12);
    *(_DWORD *)(a1 + 8) = v5;
    v2 = EngMulDiv(v7, _mm_cvtsi128_si32(_mm_srli_si128(v4, 12)) - _mm_cvtsi128_si32(_mm_srli_si128(v4, 4)), v6);
    *(_DWORD *)(a1 + 12) = v2;
  }
  return v2;
}
