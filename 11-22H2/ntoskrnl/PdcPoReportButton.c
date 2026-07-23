/*
 * XREFs of PdcPoReportButton @ 0x140824B80
 * Callers:
 *     <none>
 * Callees:
 *     PopResetCurrentPolicies @ 0x140825058 (PopResetCurrentPolicies.c)
 *     PopReleasePolicyLock @ 0x140A87BA4 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A87BE4 (PopAcquirePolicyLock.c)
 */

/*
 * Hex-Rays decompilation failed for PdcPoReportButton @ 0x140824B80
 * Reason: Hex-Rays returned no pseudocode for 0x140824B80
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140824B80: mov     [rsp+arg_0], rbx
 * 0000000140824B85: push    rdi
 * 0000000140824B86: sub     rsp, 20h
 * 0000000140824B8A: mov     bl, dl
 * 0000000140824B8C: mov     edi, ecx
 * 0000000140824B8E: call    PopAcquirePolicyLock
 * 0000000140824B93: test    dil, 1
 * 0000000140824B97: jz      short loc_140824BB6
 * 0000000140824B99: test    bl, bl
 * 0000000140824B9B: jz      loc_14090BE5C
 * 0000000140824BA1: cmp     byte ptr cs:PopCapabilities, 1
 * 0000000140824BA8: jz      short loc_140824BB6
 * 0000000140824BAA: mov     byte ptr cs:PopCapabilities, 1
 * 0000000140824BB1: call    PopResetCurrentPolicies
 * 0000000140824BB6: test    dil, 2
 * 0000000140824BBA: jnz     short loc_140824BD7
 * 0000000140824BBC: test    dil, 4
 * 0000000140824BC0: jnz     loc_14090BE8E
 * 0000000140824BC6: call    PopReleasePolicyLock
 * 0000000140824BCB: mov     rbx, [rsp+28h+arg_0]
 * 0000000140824BD0: add     rsp, 20h
 * 0000000140824BD4: pop     rdi
 * 0000000140824BD5: retn
 * 0000000140824BD7: test    bl, bl
 * 0000000140824BD9: jz      loc_14090BE75
 * 0000000140824BDF: cmp     byte ptr cs:PopCapabilities+1, 1
 * 0000000140824BE6: jz      short loc_140824BBC
 * 0000000140824BE8: mov     byte ptr cs:PopCapabilities+1, 1
 * 0000000140824BEF: call    PopResetCurrentPolicies
 * 0000000140824BF4: jmp     short loc_140824BBC
 * 000000014090BE5C: cmp     byte ptr cs:PopCapabilities, 0
 * 000000014090BE63: jz      loc_140824BB6
 * 000000014090BE69: mov     byte ptr cs:PopCapabilities, 0
 * 000000014090BE70: jmp     loc_140824BB1
 * 000000014090BE75: cmp     byte ptr cs:PopCapabilities+1, 0
 * 000000014090BE7C: jz      loc_140824BBC
 * 000000014090BE82: mov     byte ptr cs:PopCapabilities+1, 0
 * 000000014090BE89: jmp     loc_140824BEF
 * 000000014090BE8E: test    bl, bl
 * 000000014090BE90: jz      short loc_14090BEA8
 * 000000014090BE92: cmp     byte ptr cs:PopCapabilities+2, 1
 * 000000014090BE99: jz      loc_140824BC6
 * 000000014090BE9F: mov     byte ptr cs:PopCapabilities+2, 1
 * 000000014090BEA6: jmp     short loc_14090BEBC
 * 000000014090BEA8: cmp     byte ptr cs:PopCapabilities+2, 0
 * 000000014090BEAF: jz      loc_140824BC6
 * 000000014090BEB5: mov     byte ptr cs:PopCapabilities+2, 0
 * 000000014090BEBC: call    PopResetCurrentPolicies
 * 000000014090BEC1: nop
 * 000000014090BEC2: jmp     loc_140824BC6
 */
