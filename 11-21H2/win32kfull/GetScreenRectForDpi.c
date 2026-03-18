/*
 * XREFs of GetScreenRectForDpi @ 0x1C00B06C4
 * Callers:
 *     xxxInitSendValidateMinMaxInfoEx @ 0x1C0063E00 (xxxInitSendValidateMinMaxInfoEx.c)
 *     _MonitorFromRect @ 0x1C007B570 (_MonitorFromRect.c)
 *     GetScreenRect @ 0x1C0110C1C (GetScreenRect.c)
 *     GetScreenRectForWindow @ 0x1C025A608 (GetScreenRectForWindow.c)
 * Callees:
 *     GetMonitorRectForDpi @ 0x1C00B0924 (GetMonitorRectForDpi.c)
 */

__m128i *__fastcall GetScreenRectForDpi(__m128i *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int16 v4; // si
  __int64 *DispInfo; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rcx
  __m128i v11; // xmm0
  __int64 v13; // rax
  __int64 v14; // rdi
  __m128i v15; // xmm0
  int v16; // ebp
  int v17; // r14d
  int v18; // r15d
  int v19; // r12d
  __m128i *MonitorRectForDpi; // rax
  __m128i v21; // xmm0
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // xmm0_8
  unsigned __int64 v24; // rax
  __m128i v25; // [rsp+20h] [rbp-48h] BYREF
  char v26[16]; // [rsp+30h] [rbp-38h] BYREF

  v4 = a2;
  DispInfo = (__int64 *)GetDispInfo(a1, a2, a3, a4);
  v10 = *DispInfo;
  if ( !v4 )
  {
    v11 = *(__m128i *)(v10 + 24);
LABEL_3:
    *a1 = v11;
    return a1;
  }
  if ( *(_DWORD *)v10 == 1 )
  {
    v13 = GetDispInfo(v10, v7, v8, v9);
    v11 = *(__m128i *)GetMonitorRectForDpi(&v25, *(_QWORD *)(v13 + 96), v4);
    goto LABEL_3;
  }
  v14 = DispInfo[13];
  v15 = 0LL;
  v25 = 0LL;
  if ( v14 )
  {
    v16 = v25.m128i_i32[3];
    v17 = v25.m128i_i32[2];
    v18 = v25.m128i_i32[1];
    v19 = v25.m128i_i32[0];
    do
    {
      if ( (*(_DWORD *)(*(_QWORD *)(v14 + 40) + 24LL) & 1) != 0 )
      {
        MonitorRectForDpi = (__m128i *)GetMonitorRectForDpi(v26, v14, v4);
        v21 = *MonitorRectForDpi;
        v22 = MonitorRectForDpi->m128i_i64[0];
        v23 = _mm_srli_si128(v21, 8).m128i_u64[0];
        if ( v19 >= (int)v22 )
          v19 = v22;
        v24 = HIDWORD(v22);
        v25.m128i_i32[0] = v19;
        if ( v18 >= (int)v24 )
          v18 = v24;
        v25.m128i_i32[1] = v18;
        if ( v17 <= (int)v23 )
          v17 = v23;
        v25.m128i_i32[2] = v17;
        if ( v16 <= SHIDWORD(v23) )
          v16 = HIDWORD(v23);
        v25.m128i_i32[3] = v16;
        v15 = _mm_loadu_si128(&v25);
      }
      v14 = *(_QWORD *)(v14 + 56);
    }
    while ( v14 );
  }
  *a1 = v15;
  return a1;
}
