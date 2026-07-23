/*
 * XREFs of sub_140247A74 @ 0x140247A74
 * Callers:
 *     sub_140312BB0 @ 0x140312BB0 (sub_140312BB0.c)
 *     sub_140582214 @ 0x140582214 (sub_140582214.c)
 * Callees:
 *     sub_1402F32E0 @ 0x1402F32E0 (sub_1402F32E0.c)
 *     sub_1403146E0 @ 0x1403146E0 (sub_1403146E0.c)
 */

/*
 * Hex-Rays decompilation failed for sub_140247A74 @ 0x140247A74
 * Reason: Hex-Rays returned no pseudocode for 0x140247A74
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140247A74: push    rbx
 * 0000000140247A76: sub     rsp, 20h
 * 0000000140247A7A: and     [rsp+28h+arg_8], 0
 * 0000000140247A7F: mov     rbx, r8
 * 0000000140247A82: or      byte ptr [r8+23h], 8
 * 0000000140247A87: mov     rax, 7FFFFFFFFFFFFFFFh
 * 0000000140247A91: lock and [r8+18h], rax
 * 0000000140247A96: shl     rdx, 19h
 * 0000000140247A9A: mov     rax, 0FFFFF68000000000h
 * 0000000140247AA4: shl     rax, 19h
 * 0000000140247AA8: sub     rdx, rax
 * 0000000140247AAB: mov     rax, cs:qword_140D068F0
 * 0000000140247AB2: sar     rdx, 10h
 * 0000000140247AB6: test    rax, rax
 * 0000000140247AB9: jz      short loc_140247ACD
 * 0000000140247ABB: cmp     rdx, cs:qword_140D06AD8
 * 0000000140247AC2: jb      short loc_140247B00
 * 0000000140247AC4: cmp     rdx, cs:qword_140D06AF0
 * 0000000140247ACB: jb      short loc_140247B0E
 * 0000000140247ACD: lea     rax, xmmword_140C4F4F8+0Ch
 * 0000000140247AD4: lock dec dword ptr [rax]
 * 0000000140247AD7: lea     r9, [rsp+28h+arg_8]
 * 0000000140247ADC: mov     r8d, 2
 * 0000000140247AE2: call    sub_1403146E0
 * 0000000140247AE7: and     [rsp+28h+arg_10], 0
 * 0000000140247AEC: lock bts qword ptr [rbx+18h], 3Fh ; '?'
 * 0000000140247AF3: jb      loc_14047B0C6
 * 0000000140247AF9: add     rsp, 20h
 * 0000000140247AFD: pop     rbx
 * 0000000140247AFE: retn
 * 0000000140247B00: cmp     rdx, rax
 * 0000000140247B03: jb      short loc_140247AC4
 * 0000000140247B05: lea     rax, xmmword_140C4F4F8+8
 * 0000000140247B0C: jmp     short loc_140247AD4
 * 0000000140247B0E: cmp     rdx, cs:qword_140D06988
 * 0000000140247B15: jb      short loc_140247ACD
 * 0000000140247B17: jmp     short loc_140247B05
 * 000000014047B0C6: lea     rcx, [rsp+28h+arg_10]
 * 000000014047B0CB: call    sub_1402F32E0
 * 000000014047B0D0: mov     rax, [rbx+18h]
 * 000000014047B0D4: test    rax, rax
 * 000000014047B0D7: js      short loc_14047B0C6
 * 000000014047B0D9: jmp     loc_140247AEC
 */
