/*
 * XREFs of PdcPoResiliencyClient @ 0x140997CF0
 * Callers:
 *     <none>
 * Callees:
 *     PopCheckResiliencyScenarios @ 0x140701090 (PopCheckResiliencyScenarios.c)
 *     PopPdcIdleResiliencyCallback @ 0x14099827C (PopPdcIdleResiliencyCallback.c)
 *     PopReleasePolicyLock @ 0x140A87BA4 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A87BE4 (PopAcquirePolicyLock.c)
 */

/*
 * Hex-Rays decompilation failed for PdcPoResiliencyClient @ 0x140997CF0
 * Reason: Hex-Rays returned no pseudocode for 0x140997CF0
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140997CF0: mov     [rsp+arg_0], rbx
 * 0000000140997CF5: push    rdi
 * 0000000140997CF6: sub     rsp, 20h
 * 0000000140997CFA: mov     dil, dl
 * 0000000140997CFD: sub     ecx, 1
 * 0000000140997D00: jz      short loc_140997D43
 * 0000000140997D02: sub     ecx, 1
 * 0000000140997D05: jz      short loc_140997D21
 * 0000000140997D07: cmp     ecx, 1
 * 0000000140997D0A: jz      short loc_140997D10
 * 0000000140997D0C: xor     ebx, ebx
 * 0000000140997D0E: jmp     short loc_140997D4D
 * 0000000140997D10: call    PopAcquirePolicyLock
 * 0000000140997D15: xor     ebx, ebx
 * 0000000140997D17: cmp     cs:PopDeepIoCoalescingEnabled, ebx
 * 0000000140997D1D: jz      short loc_140997D3C
 * 0000000140997D1F: jmp     short loc_140997D30
 * 0000000140997D21: call    PopAcquirePolicyLock
 * 0000000140997D26: xor     ebx, ebx
 * 0000000140997D28: cmp     cs:PopDeepIoCoalescingEnabled, ebx
 * 0000000140997D2E: jnz     short loc_140997D3C
 * 0000000140997D30: mov     cs:PopPdcIoCoalescing, dil
 * 0000000140997D37: call    PopCheckResiliencyScenarios
 * 0000000140997D3C: call    PopReleasePolicyLock
 * 0000000140997D41: jmp     short loc_140997D4D
 * 0000000140997D43: mov     ecx, r8d
 * 0000000140997D46: call    PopPdcIdleResiliencyCallback
 * 0000000140997D4B: mov     ebx, eax
 * 0000000140997D4D: mov     eax, ebx
 * 0000000140997D4F: mov     rbx, [rsp+28h+arg_0]
 * 0000000140997D54: add     rsp, 20h
 * 0000000140997D58: pop     rdi
 * 0000000140997D59: retn
 */
