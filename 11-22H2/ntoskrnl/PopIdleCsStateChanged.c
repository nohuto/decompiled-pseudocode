/*
 * XREFs of PopIdleCsStateChanged @ 0x14099BEEC
 * Callers:
 *     PdcPoCurrentPdcPhase @ 0x140599840 (PdcPoCurrentPdcPhase.c)
 * Callees:
 *     PopIdleCancelAoAcDozeS4Timer @ 0x14032EE20 (PopIdleCancelAoAcDozeS4Timer.c)
 *     PopGetModernStandbyTransitionReason @ 0x1403C7E5C (PopGetModernStandbyTransitionReason.c)
 *     PopIdleArmAoAcDozeS4Timer @ 0x14059E208 (PopIdleArmAoAcDozeS4Timer.c)
 *     PopReleasePolicyLock @ 0x140A87BA4 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A87BE4 (PopAcquirePolicyLock.c)
 */

/*
 * Hex-Rays decompilation failed for PopIdleCsStateChanged @ 0x14099BEEC
 * Reason: Hex-Rays returned no pseudocode for 0x14099BEEC
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014099BEEC: push    rbx
 * 000000014099BEEE: sub     rsp, 20h
 * 000000014099BEF2: mov     bl, cl
 * 000000014099BEF4: call    PopAcquirePolicyLock
 * 000000014099BEF9: xor     ecx, ecx
 * 000000014099BEFB: mov     cs:byte_140C3CD91, bl
 * 000000014099BF01: call    PopGetModernStandbyTransitionReason
 * 000000014099BF06: test    bl, bl
 * 000000014099BF08: jz      short loc_14099BF38
 * 000000014099BF0A: mov     rax, cs:qword_140CF7CC8
 * 000000014099BF11: mov     cs:qword_140C3CD98, rax
 * 000000014099BF18: test    rax, rax
 * 000000014099BF1B: jnz     short loc_14099BF31
 * 000000014099BF1D: mov     rax, 0FFFFF78000000008h
 * 000000014099BF27: mov     rax, [rax]
 * 000000014099BF2A: mov     cs:qword_140C3CD98, rax
 * 000000014099BF31: call    PopIdleArmAoAcDozeS4Timer
 * 000000014099BF36: jmp     short loc_14099BF62
 * 000000014099BF38: cmp     eax, 1000000h
 * 000000014099BF3D: jnb     short loc_14099BF49
 * 000000014099BF3F: and     eax, 0FFFFFFh
 * 000000014099BF44: cmp     eax, 6
 * 000000014099BF47: jz      short loc_14099BF62
 * 000000014099BF49: mov     ecx, 1
 * 000000014099BF4E: call    PopIdleCancelAoAcDozeS4Timer
 * 000000014099BF53: and     cs:dword_140C3CD70, 0
 * 000000014099BF5A: and     cs:qword_140C3CD98, 0
 * 000000014099BF62: call    PopReleasePolicyLock
 * 000000014099BF67: add     rsp, 20h
 * 000000014099BF6B: pop     rbx
 * 000000014099BF6C: retn
 */
