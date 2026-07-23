/*
 * XREFs of EtwpPreserveLogger @ 0x1409ED8AC
 * Callers:
 *     EtwpKsrCallback @ 0x1409ED770 (EtwpKsrCallback.c)
 *     EtwpSetSoftRestartInformation @ 0x1409EE39C (EtwpSetSoftRestartInformation.c)
 * Callees:
 *     EtwpResetBufferHeader @ 0x140228270 (EtwpResetBufferHeader.c)
 *     EtwpFreeTraceBuffer @ 0x14031F2D8 (EtwpFreeTraceBuffer.c)
 *     EtwpAllocateTraceBuffer @ 0x1403716DC (EtwpAllocateTraceBuffer.c)
 *     EtwpInitializeBufferHeader @ 0x140371758 (EtwpInitializeBufferHeader.c)
 *     memmove @ 0x140435B00 (memmove.c)
 *     EtwpAddLogHeader @ 0x1407F7844 (EtwpAddLogHeader.c)
 *     EtwpBuildMdlForTraceBuffer @ 0x1409ED4A4 (EtwpBuildMdlForTraceBuffer.c)
 *     EtwpPreserveMdlList @ 0x1409EDAE0 (EtwpPreserveMdlList.c)
 *     ExFreePoolWithTag @ 0x140AAE110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAE6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall EtwpPreserveLogger(__int64 a1)
{
  __m128i *v1; // rbp
  __int64 v4; // r14
  PVOID v5; // r15
  __m128i v6; // xmm7
  unsigned __int16 v7; // ax
  unsigned int v8; // edi
  _DWORD *Pool2; // rsi
  int v10; // edi
  LARGE_INTEGER *TraceBuffer; // rax
  LARGE_INTEGER *v12; // r13
  __int128 v13; // xmm6
  __int64 *v14; // r14
  PVOID *v15; // rcx
  unsigned int v16; // [rsp+90h] [rbp+8h]
  PVOID P; // [rsp+98h] [rbp+10h] BYREF
  PVOID *v18; // [rsp+A0h] [rbp+18h]

  v1 = *(__m128i **)(a1 + 1088);
  P = 0LL;
  if ( v1[2].m128i_i8[1] )
    return 0LL;
  v4 = *(unsigned int *)(a1 + 4);
  v5 = 0LL;
  v6 = v1[1];
  if ( ((v4 * (unsigned int)(*(_DWORD *)(a1 + 232) + 1)) & 0xFFFFFFFFFFFFF000uLL) > 0xFFFFFFFF000LL )
    return 3221225659LL;
  v7 = _mm_cvtsi128_si32(v6);
  v8 = v7 + 2;
  v16 = v7 + 18;
  Pool2 = (_DWORD *)ExAllocatePool2(256LL, v16, 1266119749LL);
  if ( Pool2 )
  {
    Pool2[2] = *(_DWORD *)(a1 + 4);
    Pool2[3] = 16;
    memmove(Pool2 + 4, (const void *)_mm_srli_si128(v6, 8).m128i_i64[0], v8);
    TraceBuffer = (LARGE_INTEGER *)EtwpAllocateTraceBuffer(a1, v4);
    v12 = TraceBuffer;
    if ( !TraceBuffer )
    {
      v10 = -1073741801;
LABEL_22:
      ExFreePoolWithTag(Pool2, 0);
      return (unsigned int)v10;
    }
    EtwpInitializeBufferHeader((__int16 *)a1, TraceBuffer);
    EtwpResetBufferHeader((__int64)v12, 4);
    v13 = *(_OWORD *)(a1 + 152);
    *(__m128i *)(a1 + 152) = v6;
    EtwpAddLogHeader(a1, v12);
    v12[1].LowPart = v12[6].LowPart;
    *(_OWORD *)(a1 + 152) = v13;
    v10 = EtwpBuildMdlForTraceBuffer(a1, (char *)v12, (struct _MDL **)&P);
    if ( v10 >= 0 )
    {
      ++Pool2[1];
      v14 = *(__int64 **)(a1 + 80);
      v5 = P;
      if ( v14 == (__int64 *)(a1 + 80) || !v14 )
      {
LABEL_17:
        v10 = EtwpPreserveMdlList(v5, Pool2, v16, v1);
        if ( v10 >= 0 )
        {
          v1->m128i_i64[1] = (__int64)v12;
          v1[2].m128i_i8[1] = 1;
          goto LABEL_20;
        }
      }
      else
      {
        v18 = (PVOID *)P;
        while ( 1 )
        {
          v10 = EtwpBuildMdlForTraceBuffer(a1, (char *)v14[2], (struct _MDL **)&P);
          if ( v10 < 0 )
            break;
          v15 = v18;
          v18 = (PVOID *)P;
          *v15 = P;
          ++Pool2[1];
          v14 = (__int64 *)*v14;
          if ( v14 == (__int64 *)(a1 + 80) )
            v14 = 0LL;
          if ( !v14 )
            goto LABEL_17;
        }
      }
    }
    EtwpFreeTraceBuffer(a1, (char *)v12);
LABEL_20:
    if ( v5 )
      ExFreePoolWithTag(v5, 0);
    goto LABEL_22;
  }
  return (unsigned int)-1073741670;
}
