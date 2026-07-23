/*
 * XREFs of RtlpHeapExceptionFilter @ 0x1801228A8
 * Callers:
 *     RtlpHpFreeWithExceptionProtection @ 0x18003B150 (RtlpHpFreeWithExceptionProtection.c)
 *     RtlpHpAllocWithExceptionProtection @ 0x18003E210 (RtlpHpAllocWithExceptionProtection.c)
 *     RtlpReAllocateHeap @ 0x180042490 (RtlpReAllocateHeap.c)
 *     RtlpHpReAllocWithExceptionProtection @ 0x180043778 (RtlpHpReAllocWithExceptionProtection.c)
 *     RtlCreateHeap @ 0x180047FD0 (RtlCreateHeap.c)
 *     RtlGetUserInfoHeap @ 0x180076510 (RtlGetUserInfoHeap.c)
 *     RtlpProbeUserBufferSafe @ 0x1800768C4 (RtlpProbeUserBufferSafe.c)
 *     RtlValidateHeap @ 0x1800873F0 (RtlValidateHeap.c)
 *     RtlpValidateLFHBlock @ 0x1800B12B6 (RtlpValidateLFHBlock.c)
 *     RtlCompactHeap @ 0x1800FE720 (RtlCompactHeap.c)
 *     RtlSetUserFlagsHeap @ 0x1800FF300 (RtlSetUserFlagsHeap.c)
 *     RtlZeroHeap @ 0x180103360 (RtlZeroHeap.c)
 *     RtlDebugAllocateHeap @ 0x180105270 (RtlDebugAllocateHeap.c)
 *     RtlDebugCompactHeap @ 0x180105774 (RtlDebugCompactHeap.c)
 *     RtlDebugCreateTagHeap @ 0x180105D3C (RtlDebugCreateTagHeap.c)
 *     RtlDebugFreeHeap @ 0x1801060A0 (RtlDebugFreeHeap.c)
 *     RtlDebugGetUserInfoHeap @ 0x180106534 (RtlDebugGetUserInfoHeap.c)
 *     RtlDebugQueryTagHeap @ 0x180106858 (RtlDebugQueryTagHeap.c)
 *     RtlDebugReAllocateHeap @ 0x180106B14 (RtlDebugReAllocateHeap.c)
 *     RtlDebugSetUserFlagsHeap @ 0x1801071D8 (RtlDebugSetUserFlagsHeap.c)
 *     RtlDebugSetUserValueHeap @ 0x180107524 (RtlDebugSetUserValueHeap.c)
 *     RtlDebugSizeHeap @ 0x180107838 (RtlDebugSizeHeap.c)
 *     RtlDebugWalkHeap @ 0x180107AE8 (RtlDebugWalkHeap.c)
 *     RtlDebugZeroHeap @ 0x180107B78 (RtlDebugZeroHeap.c)
 *     RtlpAnalyzeHeapFailure @ 0x1801163A4 (RtlpAnalyzeHeapFailure.c)
 *     RtlpHpHeapHandleError @ 0x180116990 (RtlpHpHeapHandleError.c)
 *     RtlpHpSegGetDescriptorValidateSafe @ 0x18012368C (RtlpHpSegGetDescriptorValidateSafe.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpHeapExceptionFilter(int a1, __int64 a2)
{
  _OWORD *v2; // rax
  _OWORD *v3; // rcx
  _OWORD *v4; // rax
  __int64 v5; // rdx
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int64 result; // rax

  if ( a1 == -1073741571 || a1 == -1073741420 || a1 == -1073741801 )
    return 0LL;
  v2 = *(_OWORD **)a2;
  unk_180184A10 = *(_OWORD *)*(_QWORD *)a2;
  *((_OWORD *)&unk_180184A10 + 1) = v2[1];
  *((_OWORD *)&unk_180184A10 + 2) = v2[2];
  *((_OWORD *)&unk_180184A10 + 3) = v2[3];
  *((_OWORD *)&unk_180184A10 + 4) = v2[4];
  *((_OWORD *)&unk_180184A10 + 5) = v2[5];
  *((_OWORD *)&unk_180184A10 + 6) = v2[6];
  *((_OWORD *)&unk_180184A10 + 7) = v2[7];
  *((_OWORD *)&unk_180184A10 + 8) = v2[8];
  *((_QWORD *)&unk_180184A10 + 18) = *((_QWORD *)v2 + 18);
  v3 = &unk_180184AB0;
  v4 = *(_OWORD **)(a2 + 8);
  v5 = 9LL;
  do
  {
    *v3 = *v4;
    v3[1] = v4[1];
    v3[2] = v4[2];
    v3[3] = v4[3];
    v3[4] = v4[4];
    v3[5] = v4[5];
    v3[6] = v4[6];
    v3 += 8;
    v6 = v4[7];
    v4 += 8;
    *(v3 - 1) = v6;
    --v5;
  }
  while ( v5 );
  *v3 = *v4;
  v3[1] = v4[1];
  v3[2] = v4[2];
  v3[3] = v4[3];
  v7 = v4[4];
  result = 1LL;
  v3[4] = v7;
  return result;
}
