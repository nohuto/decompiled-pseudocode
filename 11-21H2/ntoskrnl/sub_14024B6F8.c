/*
 * XREFs of sub_14024B6F8 @ 0x14024B6F8
 * Callers:
 *     sub_14024B4DC @ 0x14024B4DC (sub_14024B4DC.c)
 *     sub_140378DD0 @ 0x140378DD0 (sub_140378DD0.c)
 *     sub_1403D5E00 @ 0x1403D5E00 (sub_1403D5E00.c)
 *     sub_1403EAC70 @ 0x1403EAC70 (sub_1403EAC70.c)
 *     sub_1403EBEB0 @ 0x1403EBEB0 (sub_1403EBEB0.c)
 *     sub_1403EBF10 @ 0x1403EBF10 (sub_1403EBF10.c)
 *     sub_1403ECE50 @ 0x1403ECE50 (sub_1403ECE50.c)
 *     sub_1403F93A0 @ 0x1403F93A0 (sub_1403F93A0.c)
 *     sub_1403FAD10 @ 0x1403FAD10 (sub_1403FAD10.c)
 *     sub_140647CF0 @ 0x140647CF0 (sub_140647CF0.c)
 *     sub_1406481F0 @ 0x1406481F0 (sub_1406481F0.c)
 *     sub_140657010 @ 0x140657010 (sub_140657010.c)
 *     KeUserModeCallback @ 0x1407A3EC0 (KeUserModeCallback.c)
 * Callees:
 *     sub_140AB8580 @ 0x140AB8580 (sub_140AB8580.c)
 */

/*
 * Hex-Rays decompilation failed for sub_14024B6F8 @ 0x14024B6F8
 * Reason: Hex-Rays returned no pseudocode for 0x14024B6F8
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014024B6F8: mov     [rsp+arg_0], rbx
 * 000000014024B6FD: pushfq
 * 000000014024B6FF: sub     rsp, 20h
 * 000000014024B703: mov     rax, qword ptr cs:xmmword_140D06920
 * 000000014024B70A: bt      rax, 29h ; ')'
 * 000000014024B70F: jb      loc_140444606
 * 000000014024B715: lfence
 * 000000014024B718: mov     rbx, [rsp+28h+arg_0]
 * 000000014024B71D: add     rsp, 20h
 * 000000014024B721: pop     rcx
 * 000000014024B722: retn
 * 0000000140444606: mov     ebx, [rsp+28h+var_8]
 * 000000014044460A: cli
 * 000000014044460B: mov     rax, gs:20h
 * 0000000140444614: shr     ebx, 9
 * 0000000140444617: and     bl, 1
 * 000000014044461A: or      byte ptr [rax+6D6h], 1
 * 0000000140444621: mov     al, [rax+6D6h]
 * 0000000140444627: test    al, 2
 * 0000000140444629: jnz     short loc_140444630
 * 000000014044462B: call    sub_140AB8580
 * 0000000140444630: test    bl, bl
 * 0000000140444632: jz      loc_14024B715
 * 0000000140444638: sti
 * 0000000140444639: jmp     loc_14024B715
 */
