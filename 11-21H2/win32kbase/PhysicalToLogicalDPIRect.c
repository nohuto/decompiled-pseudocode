/*
 * XREFs of PhysicalToLogicalDPIRect @ 0x1C006E120
 * Callers:
 *     TransformRectBetweenCoordinateSpacesPerMonitor @ 0x1C006D8A0 (TransformRectBetweenCoordinateSpacesPerMonitor.c)
 *     NtUserGetClipCursor @ 0x1C0159140 (NtUserGetClipCursor.c)
 * Callees:
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C002EA80 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     EngMulDiv @ 0x1C006E450 (EngMulDiv.c)
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PhysicalToLogicalDPIRect(__m128i *a1, __m128i *a2, unsigned int a3, __int64 *a4)
{
  unsigned int CurrentThreadDpiAwarenessContext; // ebx
  __int64 v8; // rax
  __int64 v9; // rax
  unsigned __int16 v10; // bx
  INT v11; // r14d
  __m128i v12; // xmm0
  INT v13; // edi
  INT v14; // esi
  INT v15; // edi
  INT v16; // r13d
  INT v17; // eax
  INT v18; // r8d
  int v19; // r14d
  __m128i v20; // xmm6
  __int64 v21; // rbp
  int v22; // esi
  int v23; // edi
  __int64 result; // rax
  int v25; // [rsp+24h] [rbp-54h]

  CurrentThreadDpiAwarenessContext = a3;
  if ( !a3 )
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext();
  if ( (CurrentThreadDpiAwarenessContext & 0xF) == 2 || !qword_1C029C978 || (int)qword_1C029C978() < 0 )
  {
    result = 0LL;
    *a1 = *a2;
  }
  else
  {
    if ( a4 && (v8 = *a4) != 0 || (!qword_1C029C980 ? (v8 = 0LL) : (v8 = qword_1C029C980(a2, 2LL, 18LL)), a4) )
      *a4 = v8;
    v9 = *(_QWORD *)(v8 + 40);
    v10 = (CurrentThreadDpiAwarenessContext >> 8) & 0x1FF;
    v11 = *(unsigned __int16 *)(v9 + 60);
    v12 = *(__m128i *)(v9 + 28);
    v25 = v12.m128i_i32[1];
    if ( v10 )
    {
      v13 = *(unsigned __int16 *)(v9 + 62);
      v14 = EngMulDiv(_mm_cvtsi128_si32(v12), v10, v13);
      v15 = EngMulDiv(v12.m128i_i32[1], v10, v13);
      v16 = v11;
      v17 = EngMulDiv(0, v10, v11);
      v18 = v11;
      v19 = v14 + v17;
      v25 = v15 + EngMulDiv(0, v10, v18);
    }
    else
    {
      v16 = *(unsigned __int16 *)(v9 + 60);
      v19 = v12.m128i_i32[0];
    }
    v20 = *a2;
    v21 = a2->m128i_i64[0];
    v22 = EngMulDiv(v21 - v12.m128i_i32[0], v10, v16) + v19;
    a1->m128i_i32[0] = v22;
    v20.m128i_i64[0] = _mm_srli_si128(v20, 8).m128i_u64[0];
    v23 = EngMulDiv(HIDWORD(v21) - v12.m128i_i32[1], v10, v16) + v25;
    a1->m128i_i32[1] = v23;
    a1->m128i_i32[2] = v22 + EngMulDiv(v20.m128i_i32[0] - v21, v10, v16);
    a1->m128i_i32[3] = v23 + EngMulDiv(v20.m128i_i32[1] - HIDWORD(v21), v10, v16);
    return 1LL;
  }
  return result;
}
