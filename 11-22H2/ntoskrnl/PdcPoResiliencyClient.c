/*
 * XREFs of PdcPoResiliencyClient @ 0x140997BA0
 * Callers:
 *     <none>
 * Callees:
 *     PopCheckResiliencyScenarios @ 0x140700F30 (PopCheckResiliencyScenarios.c)
 *     PopPdcIdleResiliencyCallback @ 0x14099812C (PopPdcIdleResiliencyCallback.c)
 *     PopReleasePolicyLock @ 0x140A87BA4 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A87BE4 (PopAcquirePolicyLock.c)
 */

/*
 * Hex-Rays decompilation failed for PdcPoResiliencyClient @ 0x140997BA0
 * Reason: Hex-Rays returned no pseudocode for 0x140997BA0
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140997BA0: mov     [rsp+arg_0], rbx
 * 0000000140997BA5: push    rdi
 * 0000000140997BA6: sub     rsp, 20h
 * 0000000140997BAA: mov     dil, dl
 * 0000000140997BAD: sub     ecx, 1
 * 0000000140997BB0: jz      short loc_140997BF3
 * 0000000140997BB2: sub     ecx, 1
 * 0000000140997BB5: jz      short loc_140997BD1
 * 0000000140997BB7: cmp     ecx, 1
 * 0000000140997BBA: jz      short loc_140997BC0
 * 0000000140997BBC: xor     ebx, ebx
 * 0000000140997BBE: jmp     short loc_140997BFD
 * 0000000140997BC0: call    PopAcquirePolicyLock
 * 0000000140997BC5: xor     ebx, ebx
 * 0000000140997BC7: cmp     cs:PopDeepIoCoalescingEnabled, ebx
 * 0000000140997BCD: jz      short loc_140997BEC
 * 0000000140997BCF: jmp     short loc_140997BE0
 * 0000000140997BD1: call    PopAcquirePolicyLock
 * 0000000140997BD6: xor     ebx, ebx
 * 0000000140997BD8: cmp     cs:PopDeepIoCoalescingEnabled, ebx
 * 0000000140997BDE: jnz     short loc_140997BEC
 * 0000000140997BE0: mov     cs:PopPdcIoCoalescing, dil
 * 0000000140997BE7: call    PopCheckResiliencyScenarios
 * 0000000140997BEC: call    PopReleasePolicyLock
 * 0000000140997BF1: jmp     short loc_140997BFD
 * 0000000140997BF3: mov     ecx, r8d
 * 0000000140997BF6: call    PopPdcIdleResiliencyCallback
 * 0000000140997BFB: mov     ebx, eax
 * 0000000140997BFD: mov     eax, ebx
 * 0000000140997BFF: mov     rbx, [rsp+28h+arg_0]
 * 0000000140997C04: add     rsp, 20h
 * 0000000140997C08: pop     rdi
 * 0000000140997C09: retn
 */
