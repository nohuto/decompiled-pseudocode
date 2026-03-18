/*
 * XREFs of VirtualizeMultiMonDigitizerSize @ 0x1C01E01B4
 * Callers:
 *     _GetPointerDeviceRects @ 0x1C0110B24 (_GetPointerDeviceRects.c)
 *     MiPGetPhysicalRect @ 0x1C0110BD4 (MiPGetPhysicalRect.c)
 *     RemapHimetricPointsForMultiMonDigitizers @ 0x1C01DFB4C (RemapHimetricPointsForMultiMonDigitizers.c)
 * Callees:
 *     GetScreenRect @ 0x1C0110C1C (GetScreenRect.c)
 *     ExpandedMonitorSpace @ 0x1C01DEC3C (ExpandedMonitorSpace.c)
 */

char __fastcall VirtualizeMultiMonDigitizerSize(__int64 a1, __int64 a2)
{
  INT v3; // eax
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rdx
  __m128i *ScreenRect; // rax
  __m128i v9; // xmm6
  INT v10; // eax
  INT v11; // r8d
  INT v12; // ecx
  __int128 v14; // [rsp+20h] [rbp-38h] BYREF
  __m128i v15; // [rsp+30h] [rbp-28h] BYREF

  LOBYTE(v3) = W32GetCurrentThreadDpiAwarenessContext(a1, a2) & 0xF;
  if ( (_BYTE)v3 != 2 )
  {
    v14 = 0LL;
    ExpandedMonitorSpace((__int64 *)&v14, v4, v5, v6);
    ScreenRect = GetScreenRect(&v15, v7);
    v9 = *ScreenRect;
    v10 = EngMulDiv(
            *(_DWORD *)(a1 + 8),
            _mm_cvtsi128_si32(_mm_srli_si128(*ScreenRect, 8)) - _mm_cvtsi128_si32(*ScreenRect),
            DWORD2(v14) - v14);
    v11 = HIDWORD(v14) - DWORD1(v14);
    v12 = *(_DWORD *)(a1 + 12);
    *(_DWORD *)(a1 + 8) = v10;
    v3 = EngMulDiv(v12, _mm_cvtsi128_si32(_mm_srli_si128(v9, 12)) - _mm_cvtsi128_si32(_mm_srli_si128(v9, 4)), v11);
    *(_DWORD *)(a1 + 12) = v3;
  }
  return v3;
}
