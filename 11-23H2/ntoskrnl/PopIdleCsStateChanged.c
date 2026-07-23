/*
 * XREFs of PopIdleCsStateChanged @ 0x14099C03C
 * Callers:
 *     PdcPoCurrentPdcPhase @ 0x140599CA0 (PdcPoCurrentPdcPhase.c)
 * Callees:
 *     PopIdleCancelAoAcDozeS4Timer @ 0x14032F250 (PopIdleCancelAoAcDozeS4Timer.c)
 *     PopGetModernStandbyTransitionReason @ 0x1403C869C (PopGetModernStandbyTransitionReason.c)
 *     PopIdleArmAoAcDozeS4Timer @ 0x14059E668 (PopIdleArmAoAcDozeS4Timer.c)
 *     PopReleasePolicyLock @ 0x140A87BA4 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A87BE4 (PopAcquirePolicyLock.c)
 */

/*
 * Hex-Rays decompilation failed for PopIdleCsStateChanged @ 0x14099C03C
 * Reason: Hex-Rays returned no pseudocode for 0x14099C03C
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014099C03C: push    rbx
 * 000000014099C03E: sub     rsp, 20h
 * 000000014099C042: mov     bl, cl
 * 000000014099C044: call    PopAcquirePolicyLock
 * 000000014099C049: xor     ecx, ecx
 * 000000014099C04B: mov     cs:byte_140C3CCF1, bl
 * 000000014099C051: call    PopGetModernStandbyTransitionReason
 * 000000014099C056: test    bl, bl
 * 000000014099C058: jz      short loc_14099C088
 * 000000014099C05A: mov     rax, cs:qword_140CF7C08
 * 000000014099C061: mov     cs:qword_140C3CCF8, rax
 * 000000014099C068: test    rax, rax
 * 000000014099C06B: jnz     short loc_14099C081
 * 000000014099C06D: mov     rax, 0FFFFF78000000008h
 * 000000014099C077: mov     rax, [rax]
 * 000000014099C07A: mov     cs:qword_140C3CCF8, rax
 * 000000014099C081: call    PopIdleArmAoAcDozeS4Timer
 * 000000014099C086: jmp     short loc_14099C0B2
 * 000000014099C088: cmp     eax, 1000000h
 * 000000014099C08D: jnb     short loc_14099C099
 * 000000014099C08F: and     eax, 0FFFFFFh
 * 000000014099C094: cmp     eax, 6
 * 000000014099C097: jz      short loc_14099C0B2
 * 000000014099C099: mov     ecx, 1
 * 000000014099C09E: call    PopIdleCancelAoAcDozeS4Timer
 * 000000014099C0A3: and     cs:dword_140C3CCD0, 0
 * 000000014099C0AA: and     cs:qword_140C3CCF8, 0
 * 000000014099C0B2: call    PopReleasePolicyLock
 * 000000014099C0B7: add     rsp, 20h
 * 000000014099C0BB: pop     rbx
 * 000000014099C0BC: retn
 */
