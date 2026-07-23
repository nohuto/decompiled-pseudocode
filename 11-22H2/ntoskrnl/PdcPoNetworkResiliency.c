/*
 * XREFs of PdcPoNetworkResiliency @ 0x1409979E0
 * Callers:
 *     <none>
 * Callees:
 *     KeCancelTimer2 @ 0x14031DD00 (KeCancelTimer2.c)
 *     PopQueueWorkItem @ 0x14032CB04 (PopQueueWorkItem.c)
 *     PopNetUpdateDsAccounting @ 0x140599010 (PopNetUpdateDsAccounting.c)
 *     PopNetArmDsEvaluationTimer @ 0x140996614 (PopNetArmDsEvaluationTimer.c)
 *     PopReleasePolicyLock @ 0x140A87BA4 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A87BE4 (PopAcquirePolicyLock.c)
 */

/*
 * Hex-Rays decompilation failed for PdcPoNetworkResiliency @ 0x1409979E0
 * Reason: Hex-Rays returned no pseudocode for 0x1409979E0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001409979E0: mov     [rsp+arg_0], rbx
 * 00000001409979E5: push    rdi
 * 00000001409979E6: sub     rsp, 20h
 * 00000001409979EA: mov     bl, cl
 * 00000001409979EC: call    PopAcquirePolicyLock
 * 00000001409979F1: mov     cl, bl
 * 00000001409979F3: call    PopNetUpdateDsAccounting
 * 00000001409979F8: xor     edi, edi
 * 00000001409979FA: test    bl, bl
 * 00000001409979FC: jz      short loc_140997A14
 * 00000001409979FE: lea     edx, [rdi+1]
 * 0000000140997A01: mov     cs:PopNetResiliencyEngaged, dl
 * 0000000140997A07: xchg    edx, cs:PopNetGracePeriodState
 * 0000000140997A0D: call    PopNetArmDsEvaluationTimer
 * 0000000140997A12: jmp     short loc_140997A40
 * 0000000140997A14: xor     edx, edx
 * 0000000140997A16: mov     cs:PopNetResiliencyEngaged, dil
 * 0000000140997A1D: lea     rcx, PopNetEvaluationTimer
 * 0000000140997A24: call    KeCancelTimer2
 * 0000000140997A29: xchg    edi, cs:PopNetGracePeriodState
 * 0000000140997A2F: mov     edx, 1
 * 0000000140997A34: lea     rcx, unk_140C3A368
 * 0000000140997A3B: call    PopQueueWorkItem
 * 0000000140997A40: call    PopReleasePolicyLock
 * 0000000140997A45: mov     rbx, [rsp+28h+arg_0]
 * 0000000140997A4A: add     rsp, 20h
 * 0000000140997A4E: pop     rdi
 * 0000000140997A4F: retn
 */
