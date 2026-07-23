/*
 * XREFs of PdcPoNetworkResiliency @ 0x140997B30
 * Callers:
 *     <none>
 * Callees:
 *     KeCancelTimer2 @ 0x14031E170 (KeCancelTimer2.c)
 *     PopQueueWorkItem @ 0x14032CF74 (PopQueueWorkItem.c)
 *     PopNetUpdateDsAccounting @ 0x140599470 (PopNetUpdateDsAccounting.c)
 *     PopNetArmDsEvaluationTimer @ 0x140996764 (PopNetArmDsEvaluationTimer.c)
 *     PopReleasePolicyLock @ 0x140A87BA4 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A87BE4 (PopAcquirePolicyLock.c)
 */

/*
 * Hex-Rays decompilation failed for PdcPoNetworkResiliency @ 0x140997B30
 * Reason: Hex-Rays returned no pseudocode for 0x140997B30
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140997B30: mov     [rsp+arg_0], rbx
 * 0000000140997B35: push    rdi
 * 0000000140997B36: sub     rsp, 20h
 * 0000000140997B3A: mov     bl, cl
 * 0000000140997B3C: call    PopAcquirePolicyLock
 * 0000000140997B41: mov     cl, bl
 * 0000000140997B43: call    PopNetUpdateDsAccounting
 * 0000000140997B48: xor     edi, edi
 * 0000000140997B4A: test    bl, bl
 * 0000000140997B4C: jz      short loc_140997B64
 * 0000000140997B4E: lea     edx, [rdi+1]
 * 0000000140997B51: mov     cs:PopNetResiliencyEngaged, dl
 * 0000000140997B57: xchg    edx, cs:PopNetGracePeriodState
 * 0000000140997B5D: call    PopNetArmDsEvaluationTimer
 * 0000000140997B62: jmp     short loc_140997B90
 * 0000000140997B64: xor     edx, edx
 * 0000000140997B66: mov     cs:PopNetResiliencyEngaged, dil
 * 0000000140997B6D: lea     rcx, PopNetEvaluationTimer
 * 0000000140997B74: call    KeCancelTimer2
 * 0000000140997B79: xchg    edi, cs:PopNetGracePeriodState
 * 0000000140997B7F: mov     edx, 1
 * 0000000140997B84: lea     rcx, unk_140C3A308
 * 0000000140997B8B: call    PopQueueWorkItem
 * 0000000140997B90: call    PopReleasePolicyLock
 * 0000000140997B95: mov     rbx, [rsp+28h+arg_0]
 * 0000000140997B9A: add     rsp, 20h
 * 0000000140997B9E: pop     rdi
 * 0000000140997B9F: retn
 */
