/*
 * XREFs of sub_1406800D0 @ 0x1406800D0
 * Callers:
 *     sub_14067CE4C @ 0x14067CE4C (sub_14067CE4C.c)
 * Callees:
 *     sub_14068934C @ 0x14068934C (sub_14068934C.c)
 *     sub_1406893EC @ 0x1406893EC (sub_1406893EC.c)
 *     sub_1406CE3EC @ 0x1406CE3EC (sub_1406CE3EC.c)
 *     sub_14071BF40 @ 0x14071BF40 (sub_14071BF40.c)
 *     sub_140AB4260 @ 0x140AB4260 (sub_140AB4260.c)
 *     sub_140AB4370 @ 0x140AB4370 (sub_140AB4370.c)
 */

/*
 * Hex-Rays decompilation failed for sub_1406800D0 @ 0x1406800D0
 * Reason: Hex-Rays returned no pseudocode for 0x1406800D0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001406800D0: push    rbx
 * 00000001406800D2: sub     rsp, 20h
 * 00000001406800D6: mov     rbx, rcx
 * 00000001406800D9: test    edx, edx
 * 00000001406800DB: js      loc_14088C32E
 * 00000001406800E1: call    sub_140AB4370
 * 00000001406800E6: mov     rcx, rbx; BugCheckParameter4
 * 00000001406800E9: call    sub_14071BF40
 * 00000001406800EE: call    sub_140AB4260
 * 00000001406800F3: add     rsp, 20h
 * 00000001406800F7: pop     rbx
 * 00000001406800F8: retn
 * 000000014088C32E: call    sub_1406893EC
 * 000000014088C333: call    sub_140AB4370
 * 000000014088C338: mov     rax, [rbx+20h]
 * 000000014088C33C: mov     rcx, rbx; BugCheckParameter4
 * 000000014088C33F: cmp     byte ptr [rax+0B80h], 1
 * 000000014088C346: jnz     short loc_14088C358
 * 000000014088C348: call    sub_14071BF40
 * 000000014088C34D: mov     rcx, [rbx+20h]
 * 000000014088C351: call    sub_1406CE3EC
 * 000000014088C356: jmp     short loc_14088C35D
 * 000000014088C358: call    sub_14071BF40
 * 000000014088C35D: call    sub_140AB4260
 * 000000014088C362: call    sub_14068934C
 * 000000014088C367: nop
 * 000000014088C368: jmp     loc_1406800F3
 */
