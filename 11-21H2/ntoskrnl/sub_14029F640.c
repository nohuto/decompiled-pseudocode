/*
 * XREFs of sub_14029F640 @ 0x14029F640
 * Callers:
 *     sub_14029F120 @ 0x14029F120 (sub_14029F120.c)
 *     sub_14029F350 @ 0x14029F350 (sub_14029F350.c)
 * Callees:
 *     sub_140359F70 @ 0x140359F70 (sub_140359F70.c)
 */

/*
 * Hex-Rays decompilation failed for sub_14029F640 @ 0x14029F640
 * Reason: Hex-Rays returned no pseudocode for 0x14029F640
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014029F640: sub     rsp, 28h
 * 000000014029F644: mov     rax, rdx
 * 000000014029F647: mov     r9, rcx
 * 000000014029F64A: test    dl, 1
 * 000000014029F64D: jz      short loc_14029F692
 * 000000014029F64F: mov     rdx, rax
 * 000000014029F652: and     rdx, 0FFFFFFFFFFFFFFF0h
 * 000000014029F656: mov     r8, rdx
 * 000000014029F659: cmp     qword ptr [rdx+20h], 0
 * 000000014029F65E: jnz     short loc_14029F67D
 * 000000014029F660: mov     rcx, r8
 * 000000014029F663: mov     r8, [r8+18h]
 * 000000014029F667: mov     [r8+28h], rcx
 * 000000014029F66B: mov     rcx, [r8+20h]
 * 000000014029F66F: test    rcx, rcx
 * 000000014029F672: jz      short loc_14029F660
 * 000000014029F674: cmp     r8, rdx
 * 000000014029F677: jz      short loc_14029F67D
 * 000000014029F679: mov     [rdx+20h], rcx
 * 000000014029F67D: lea     rcx, [rax-4]
 * 000000014029F681: lock cmpxchg [r9], rcx
 * 000000014029F686: jnz     short loc_14029F68E
 * 000000014029F688: add     rsp, 28h
 * 000000014029F68C: retn
 * 000000014029F68E: test    al, 1
 * 000000014029F690: jnz     short loc_14029F64F
 * 000000014029F692: mov     rdx, rax
 * 000000014029F695: mov     rcx, r9
 * 000000014029F698: call    sub_140359F70
 * 000000014029F69D: jmp     short loc_14029F688
 */
