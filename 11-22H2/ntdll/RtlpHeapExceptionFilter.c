/*
 * XREFs of RtlpHeapExceptionFilter @ 0x180121428
 * Callers:
 *     RtlpHpFreeWithExceptionProtection @ 0x18003B2B0 (RtlpHpFreeWithExceptionProtection.c)
 *     RtlpHpAllocWithExceptionProtection @ 0x18003E370 (RtlpHpAllocWithExceptionProtection.c)
 *     RtlpReAllocateHeap @ 0x1800425F0 (RtlpReAllocateHeap.c)
 *     RtlpHpReAllocWithExceptionProtection @ 0x1800438D8 (RtlpHpReAllocWithExceptionProtection.c)
 *     RtlCreateHeap @ 0x180048130 (RtlCreateHeap.c)
 *     RtlGetUserInfoHeap @ 0x180075EA0 (RtlGetUserInfoHeap.c)
 *     RtlpProbeUserBufferSafe @ 0x180076254 (RtlpProbeUserBufferSafe.c)
 *     RtlValidateHeap @ 0x180086BF0 (RtlValidateHeap.c)
 *     RtlpValidateLFHBlock @ 0x1800AF1E6 (RtlpValidateLFHBlock.c)
 *     RtlCompactHeap @ 0x1800FD310 (RtlCompactHeap.c)
 *     RtlSetUserFlagsHeap @ 0x1800FDEF0 (RtlSetUserFlagsHeap.c)
 *     RtlZeroHeap @ 0x180101F50 (RtlZeroHeap.c)
 *     RtlDebugAllocateHeap @ 0x180103E60 (RtlDebugAllocateHeap.c)
 *     RtlDebugCompactHeap @ 0x180104364 (RtlDebugCompactHeap.c)
 *     RtlDebugCreateTagHeap @ 0x18010492C (RtlDebugCreateTagHeap.c)
 *     RtlDebugFreeHeap @ 0x180104C90 (RtlDebugFreeHeap.c)
 *     RtlDebugGetUserInfoHeap @ 0x180105124 (RtlDebugGetUserInfoHeap.c)
 *     RtlDebugQueryTagHeap @ 0x180105448 (RtlDebugQueryTagHeap.c)
 *     RtlDebugReAllocateHeap @ 0x180105704 (RtlDebugReAllocateHeap.c)
 *     RtlDebugSetUserFlagsHeap @ 0x180105DC8 (RtlDebugSetUserFlagsHeap.c)
 *     RtlDebugSetUserValueHeap @ 0x180106114 (RtlDebugSetUserValueHeap.c)
 *     RtlDebugSizeHeap @ 0x180106428 (RtlDebugSizeHeap.c)
 *     RtlDebugWalkHeap @ 0x1801066D8 (RtlDebugWalkHeap.c)
 *     RtlDebugZeroHeap @ 0x180106768 (RtlDebugZeroHeap.c)
 *     RtlpAnalyzeHeapFailure @ 0x180114F24 (RtlpAnalyzeHeapFailure.c)
 *     RtlpHpHeapHandleError @ 0x180115510 (RtlpHpHeapHandleError.c)
 *     RtlpHpSegGetDescriptorValidateSafe @ 0x18012220C (RtlpHpSegGetDescriptorValidateSafe.c)
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
  unk_1801819C0 = *(_OWORD *)*(_QWORD *)a2;
  *((_OWORD *)&unk_1801819C0 + 1) = v2[1];
  *((_OWORD *)&unk_1801819C0 + 2) = v2[2];
  *((_OWORD *)&unk_1801819C0 + 3) = v2[3];
  *((_OWORD *)&unk_1801819C0 + 4) = v2[4];
  *((_OWORD *)&unk_1801819C0 + 5) = v2[5];
  *((_OWORD *)&unk_1801819C0 + 6) = v2[6];
  *((_OWORD *)&unk_1801819C0 + 7) = v2[7];
  *((_OWORD *)&unk_1801819C0 + 8) = v2[8];
  *((_QWORD *)&unk_1801819C0 + 18) = *((_QWORD *)v2 + 18);
  v3 = &unk_180181A60;
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
