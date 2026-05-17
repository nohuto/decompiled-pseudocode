/*
 * XREFs of RtlpHeapExceptionFilter @ 0x18011F538
 * Callers:
 *     RtlpHpReAllocWithExceptionProtection @ 0x180024214 (RtlpHpReAllocWithExceptionProtection.c)
 *     RtlpReAllocateHeap @ 0x180024890 (RtlpReAllocateHeap.c)
 *     RtlpHpFreeWithExceptionProtection @ 0x1800277B0 (RtlpHpFreeWithExceptionProtection.c)
 *     RtlpHpAllocWithExceptionProtection @ 0x18002A180 (RtlpHpAllocWithExceptionProtection.c)
 *     RtlCreateHeap @ 0x18002F7E0 (RtlCreateHeap.c)
 *     RtlGetUserInfoHeap @ 0x180078760 (RtlGetUserInfoHeap.c)
 *     RtlpProbeUserBufferSafe @ 0x180078ADC (RtlpProbeUserBufferSafe.c)
 *     RtlValidateHeap @ 0x18007BE40 (RtlValidateHeap.c)
 *     RtlCompactHeap @ 0x1800FD670 (RtlCompactHeap.c)
 *     RtlSetUserFlagsHeap @ 0x1800FE1B0 (RtlSetUserFlagsHeap.c)
 *     RtlZeroHeap @ 0x180102270 (RtlZeroHeap.c)
 *     RtlDebugAllocateHeap @ 0x180104194 (RtlDebugAllocateHeap.c)
 *     RtlDebugCompactHeap @ 0x180104690 (RtlDebugCompactHeap.c)
 *     RtlDebugCreateTagHeap @ 0x180104C50 (RtlDebugCreateTagHeap.c)
 *     RtlDebugFreeHeap @ 0x180104FAC (RtlDebugFreeHeap.c)
 *     RtlDebugGetUserInfoHeap @ 0x180105420 (RtlDebugGetUserInfoHeap.c)
 *     RtlDebugQueryTagHeap @ 0x18010573C (RtlDebugQueryTagHeap.c)
 *     RtlDebugReAllocateHeap @ 0x1801059F0 (RtlDebugReAllocateHeap.c)
 *     RtlDebugSetUserFlagsHeap @ 0x180106088 (RtlDebugSetUserFlagsHeap.c)
 *     RtlDebugSetUserValueHeap @ 0x1801063CC (RtlDebugSetUserValueHeap.c)
 *     RtlDebugSizeHeap @ 0x1801066D4 (RtlDebugSizeHeap.c)
 *     RtlDebugWalkHeap @ 0x180106980 (RtlDebugWalkHeap.c)
 *     RtlDebugZeroHeap @ 0x180106A10 (RtlDebugZeroHeap.c)
 *     RtlpAnalyzeHeapFailure @ 0x180114AD4 (RtlpAnalyzeHeapFailure.c)
 *     RtlpHpHeapHandleError @ 0x180115130 (RtlpHpHeapHandleError.c)
 *     RtlpValidateLFHBlock @ 0x180118A5C (RtlpValidateLFHBlock.c)
 *     RtlpHpSegGetDescriptorValidateSafe @ 0x180120184 (RtlpHpSegGetDescriptorValidateSafe.c)
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
  unk_1801778E0 = *(_OWORD *)*(_QWORD *)a2;
  *((_OWORD *)&unk_1801778E0 + 1) = v2[1];
  *((_OWORD *)&unk_1801778E0 + 2) = v2[2];
  *((_OWORD *)&unk_1801778E0 + 3) = v2[3];
  *((_OWORD *)&unk_1801778E0 + 4) = v2[4];
  *((_OWORD *)&unk_1801778E0 + 5) = v2[5];
  *((_OWORD *)&unk_1801778E0 + 6) = v2[6];
  *((_OWORD *)&unk_1801778E0 + 7) = v2[7];
  *((_OWORD *)&unk_1801778E0 + 8) = v2[8];
  *((_QWORD *)&unk_1801778E0 + 18) = *((_QWORD *)v2 + 18);
  v3 = &unk_180177980;
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
