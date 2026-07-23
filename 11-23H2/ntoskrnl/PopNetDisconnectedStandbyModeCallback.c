/*
 * XREFs of PopNetDisconnectedStandbyModeCallback @ 0x140865A00
 * Callers:
 *     <none>
 * Callees:
 *     PopReleasePolicyLock @ 0x140A87BA4 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A87BE4 (PopAcquirePolicyLock.c)
 */

/*
 * Hex-Rays decompilation failed for PopNetDisconnectedStandbyModeCallback @ 0x140865A00
 * Reason: Hex-Rays returned no pseudocode for 0x140865A00
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140865A00: mov     [rsp+arg_0], rbx
 * 0000000140865A05: push    rdi
 * 0000000140865A06: sub     rsp, 20h
 * 0000000140865A0A: mov     rdi, rdx
 * 0000000140865A0D: cmp     r8d, 4
 * 0000000140865A11: jnz     short loc_140865A3A
 * 0000000140865A13: cmp     dword ptr [rdx], 1
 * 0000000140865A16: ja      short loc_140865A3A
 * 0000000140865A18: xor     ebx, ebx
 * 0000000140865A1A: call    PopAcquirePolicyLock
 * 0000000140865A1F: mov     eax, [rdi]
 * 0000000140865A21: mov     cs:dword_140C3D9BC, eax
 * 0000000140865A27: call    PopReleasePolicyLock
 * 0000000140865A2C: mov     eax, ebx
 * 0000000140865A2E: mov     rbx, [rsp+28h+arg_0]
 * 0000000140865A33: add     rsp, 20h
 * 0000000140865A37: pop     rdi
 * 0000000140865A38: retn
 * 0000000140865A3A: mov     ebx, 0C000000Dh
 * 0000000140865A3F: jmp     short loc_140865A2C
 */
