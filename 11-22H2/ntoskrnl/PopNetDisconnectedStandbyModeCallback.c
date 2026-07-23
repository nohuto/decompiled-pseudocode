/*
 * XREFs of PopNetDisconnectedStandbyModeCallback @ 0x140865C90
 * Callers:
 *     <none>
 * Callees:
 *     PopReleasePolicyLock @ 0x140A87BA4 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A87BE4 (PopAcquirePolicyLock.c)
 */

/*
 * Hex-Rays decompilation failed for PopNetDisconnectedStandbyModeCallback @ 0x140865C90
 * Reason: Hex-Rays returned no pseudocode for 0x140865C90
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140865C90: mov     [rsp+arg_0], rbx
 * 0000000140865C95: push    rdi
 * 0000000140865C96: sub     rsp, 20h
 * 0000000140865C9A: mov     rdi, rdx
 * 0000000140865C9D: cmp     r8d, 4
 * 0000000140865CA1: jnz     short loc_140865CCA
 * 0000000140865CA3: cmp     dword ptr [rdx], 1
 * 0000000140865CA6: ja      short loc_140865CCA
 * 0000000140865CA8: xor     ebx, ebx
 * 0000000140865CAA: call    PopAcquirePolicyLock
 * 0000000140865CAF: mov     eax, [rdi]
 * 0000000140865CB1: mov     cs:dword_140C3D95C, eax
 * 0000000140865CB7: call    PopReleasePolicyLock
 * 0000000140865CBC: mov     eax, ebx
 * 0000000140865CBE: mov     rbx, [rsp+28h+arg_0]
 * 0000000140865CC3: add     rsp, 20h
 * 0000000140865CC7: pop     rdi
 * 0000000140865CC8: retn
 * 0000000140865CCA: mov     ebx, 0C000000Dh
 * 0000000140865CCF: jmp     short loc_140865CBC
 */
