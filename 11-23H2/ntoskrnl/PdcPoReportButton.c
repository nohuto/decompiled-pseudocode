/*
 * XREFs of PdcPoReportButton @ 0x140823F20
 * Callers:
 *     <none>
 * Callees:
 *     PopResetCurrentPolicies @ 0x1408243F8 (PopResetCurrentPolicies.c)
 *     PopReleasePolicyLock @ 0x140A87BA4 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A87BE4 (PopAcquirePolicyLock.c)
 */

/*
 * Hex-Rays decompilation failed for PdcPoReportButton @ 0x140823F20
 * Reason: Hex-Rays returned no pseudocode for 0x140823F20
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140823F20: mov     [rsp+arg_0], rbx
 * 0000000140823F25: push    rdi
 * 0000000140823F26: sub     rsp, 20h
 * 0000000140823F2A: mov     bl, dl
 * 0000000140823F2C: mov     edi, ecx
 * 0000000140823F2E: call    PopAcquirePolicyLock
 * 0000000140823F33: test    dil, 1
 * 0000000140823F37: jz      short loc_140823F56
 * 0000000140823F39: test    bl, bl
 * 0000000140823F3B: jz      loc_14090B5AE
 * 0000000140823F41: cmp     byte ptr cs:PopCapabilities, 1
 * 0000000140823F48: jz      short loc_140823F56
 * 0000000140823F4A: mov     byte ptr cs:PopCapabilities, 1
 * 0000000140823F51: call    PopResetCurrentPolicies
 * 0000000140823F56: test    dil, 2
 * 0000000140823F5A: jnz     short loc_140823F77
 * 0000000140823F5C: test    dil, 4
 * 0000000140823F60: jnz     loc_14090B5E0
 * 0000000140823F66: call    PopReleasePolicyLock
 * 0000000140823F6B: mov     rbx, [rsp+28h+arg_0]
 * 0000000140823F70: add     rsp, 20h
 * 0000000140823F74: pop     rdi
 * 0000000140823F75: retn
 * 0000000140823F77: test    bl, bl
 * 0000000140823F79: jz      loc_14090B5C7
 * 0000000140823F7F: cmp     byte ptr cs:PopCapabilities+1, 1
 * 0000000140823F86: jz      short loc_140823F5C
 * 0000000140823F88: mov     byte ptr cs:PopCapabilities+1, 1
 * 0000000140823F8F: call    PopResetCurrentPolicies
 * 0000000140823F94: jmp     short loc_140823F5C
 * 000000014090B5AE: cmp     byte ptr cs:PopCapabilities, 0
 * 000000014090B5B5: jz      loc_140823F56
 * 000000014090B5BB: mov     byte ptr cs:PopCapabilities, 0
 * 000000014090B5C2: jmp     loc_140823F51
 * 000000014090B5C7: cmp     byte ptr cs:PopCapabilities+1, 0
 * 000000014090B5CE: jz      loc_140823F5C
 * 000000014090B5D4: mov     byte ptr cs:PopCapabilities+1, 0
 * 000000014090B5DB: jmp     loc_140823F8F
 * 000000014090B5E0: test    bl, bl
 * 000000014090B5E2: jz      short loc_14090B5FA
 * 000000014090B5E4: cmp     byte ptr cs:PopCapabilities+2, 1
 * 000000014090B5EB: jz      loc_140823F66
 * 000000014090B5F1: mov     byte ptr cs:PopCapabilities+2, 1
 * 000000014090B5F8: jmp     short loc_14090B60E
 * 000000014090B5FA: cmp     byte ptr cs:PopCapabilities+2, 0
 * 000000014090B601: jz      loc_140823F66
 * 000000014090B607: mov     byte ptr cs:PopCapabilities+2, 0
 * 000000014090B60E: call    PopResetCurrentPolicies
 * 000000014090B613: nop
 * 000000014090B614: jmp     loc_140823F66
 */
