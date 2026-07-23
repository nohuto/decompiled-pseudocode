/*
 * XREFs of PopNetConnectivityInStandbyCallback @ 0x140865CE0
 * Callers:
 *     <none>
 * Callees:
 *     PopReleasePolicyLock @ 0x140A87BA4 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A87BE4 (PopAcquirePolicyLock.c)
 */

/*
 * Hex-Rays decompilation failed for PopNetConnectivityInStandbyCallback @ 0x140865CE0
 * Reason: Hex-Rays returned no pseudocode for 0x140865CE0
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140865CE0: mov     [rsp+arg_0], rbx
 * 0000000140865CE5: push    rdi
 * 0000000140865CE6: sub     rsp, 20h
 * 0000000140865CEA: mov     rdi, rdx
 * 0000000140865CED: cmp     r8d, 4
 * 0000000140865CF1: jnz     short loc_140865D1A
 * 0000000140865CF3: cmp     dword ptr [rdx], 2
 * 0000000140865CF6: ja      short loc_140865D1A
 * 0000000140865CF8: xor     ebx, ebx
 * 0000000140865CFA: call    PopAcquirePolicyLock
 * 0000000140865CFF: mov     eax, [rdi]
 * 0000000140865D01: mov     cs:dword_140C3D958, eax
 * 0000000140865D07: call    PopReleasePolicyLock
 * 0000000140865D0C: mov     eax, ebx
 * 0000000140865D0E: mov     rbx, [rsp+28h+arg_0]
 * 0000000140865D13: add     rsp, 20h
 * 0000000140865D17: pop     rdi
 * 0000000140865D18: retn
 * 0000000140865D1A: mov     ebx, 0C000000Dh
 * 0000000140865D1F: jmp     short loc_140865D0C
 */
