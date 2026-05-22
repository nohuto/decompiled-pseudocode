/*
 * XREFs of ?CalculateMarginPanDelta@ControllerProcessor@@AEAAXXZ @ 0x180195B24
 * Callers:
 *     ?SendGameControllerAsPointerAndManipulation@ControllerProcessor@@AEAAJXZ @ 0x180197710 (-SendGameControllerAsPointerAndManipulation@ControllerProcessor@@AEAAJXZ.c)
 * Callees:
 *     ?GetCursorPosition@ControllerProcessor@@AEAA?AUtagPOINT@@XZ @ 0x180196234 (-GetCursorPosition@ControllerProcessor@@AEAA-AUtagPOINT@@XZ.c)
 */

void __fastcall ControllerProcessor::CalculateMarginPanDelta(ControllerProcessor *this)
{
  char v1; // si
  int *v3; // rdi
  DWORD TickCount; // eax
  DWORD v5; // r8d
  int v6; // ecx
  __m128 v7; // xmm2
  __m128 v8; // xmm0
  int v9; // ecx
  __m128 v10; // xmm1
  __m128 v11; // xmm3
  __m128 v12; // xmm1
  __m128 v13; // xmm3
  float v14; // xmm1_4
  __m128 v15; // xmm0
  POINT pt; // [rsp+30h] [rbp+8h]

  v1 = *((_BYTE *)this + 420);
  ControllerProcessor::GetCursorPosition(this);
  v3 = (int *)((char *)this + 404);
  if ( PtInRect((const RECT *)((char *)this + 404), pt) )
  {
    *((_BYTE *)this + 420) = 0;
  }
  else
  {
    *((_BYTE *)this + 420) = 1;
    TickCount = GetTickCount();
    if ( v1 )
    {
      v5 = *((_DWORD *)this + 106);
    }
    else
    {
      *((_DWORD *)this + 106) = TickCount;
      v5 = TickCount;
    }
    v6 = *((_DWORD *)this + 102);
    v7 = 0LL;
    if ( pt.y > v6 && (v6 = *((_DWORD *)this + 104), pt.y < v6) )
      v8 = 0LL;
    else
      v8 = (__m128)COERCE_UNSIGNED_INT((float)(v6 - pt.y));
    v9 = *v3;
    if ( pt.x > *v3 && (v9 = *((_DWORD *)this + 103), pt.x < v9) )
      v10 = 0LL;
    else
      v10 = (__m128)COERCE_UNSIGNED_INT((float)(v9 - pt.x));
    v11 = _mm_movelh_ps(_mm_unpacklo_ps(v10, v8), (__m128)0LL);
    v12 = (__m128)LODWORD(FLOAT_1_0);
    v7.m128_f32[0] = fmaxf(0.0, (float)(int)(TickCount - v5) / 1000.0);
    if ( v7.m128_f32[0] <= 1.0 )
      v12 = v7;
    v13 = _mm_mul_ps(_mm_mul_ps(_mm_div_ps(v11, (__m128)_xmm), (__m128)_xmm), _mm_shuffle_ps(v12, v12, 0));
    v14 = _mm_shuffle_ps(v13, v13, 85).m128_f32[0] + *((float *)this + 108);
    *((float *)this + 107) = v13.m128_f32[0] + *((float *)this + 107);
    v15 = _mm_mul_ps(v13, (__m128)_xmm);
    v13.m128_f32[0] = _mm_shuffle_ps(v15, v15, 85).m128_f32[0] + *((float *)this + 93);
    v15.m128_f32[0] = v15.m128_f32[0] + *((float *)this + 92);
    *((float *)this + 108) = v14;
    *((_DWORD *)this + 93) = v13.m128_i32[0];
    *((_DWORD *)this + 92) = v15.m128_i32[0];
  }
}
