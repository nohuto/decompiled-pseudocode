/*
 * XREFs of PopNetConnectivityInStandbyCallback @ 0x140865A50
 * Callers:
 *     <none>
 * Callees:
 *     PopReleasePolicyLock @ 0x140A87BA4 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A87BE4 (PopAcquirePolicyLock.c)
 */

/*
 * Hex-Rays decompilation failed for PopNetConnectivityInStandbyCallback @ 0x140865A50
 * Reason: Hex-Rays returned no pseudocode for 0x140865A50
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140865A50: mov     [rsp+arg_0], rbx
 * 0000000140865A55: push    rdi
 * 0000000140865A56: sub     rsp, 20h
 * 0000000140865A5A: mov     rdi, rdx
 * 0000000140865A5D: cmp     r8d, 4
 * 0000000140865A61: jnz     short loc_140865A8A
 * 0000000140865A63: cmp     dword ptr [rdx], 2
 * 0000000140865A66: ja      short loc_140865A8A
 * 0000000140865A68: xor     ebx, ebx
 * 0000000140865A6A: call    PopAcquirePolicyLock
 * 0000000140865A6F: mov     eax, [rdi]
 * 0000000140865A71: mov     cs:dword_140C3D9B8, eax
 * 0000000140865A77: call    PopReleasePolicyLock
 * 0000000140865A7C: mov     eax, ebx
 * 0000000140865A7E: mov     rbx, [rsp+28h+arg_0]
 * 0000000140865A83: add     rsp, 20h
 * 0000000140865A87: pop     rdi
 * 0000000140865A88: retn
 * 0000000140865A8A: mov     ebx, 0C000000Dh
 * 0000000140865A8F: jmp     short loc_140865A7C
 */
