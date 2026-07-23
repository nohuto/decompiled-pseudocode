/*
 * XREFs of sub_14067FE98 @ 0x14067FE98
 * Callers:
 *     sub_14067C9E8 @ 0x14067C9E8 (sub_14067C9E8.c)
 *     sub_14067CE4C @ 0x14067CE4C (sub_14067CE4C.c)
 *     sub_14067F8D0 @ 0x14067F8D0 (sub_14067F8D0.c)
 *     sub_140690978 @ 0x140690978 (sub_140690978.c)
 *     sub_14069E454 @ 0x14069E454 (sub_14069E454.c)
 *     sub_1407349A0 @ 0x1407349A0 (sub_1407349A0.c)
 *     sub_1407E5600 @ 0x1407E5600 (sub_1407E5600.c)
 *     sub_14083451C @ 0x14083451C (sub_14083451C.c)
 *     sub_14090E9C0 @ 0x14090E9C0 (sub_14090E9C0.c)
 *     sub_14090EC00 @ 0x14090EC00 (sub_14090EC00.c)
 *     sub_140914914 @ 0x140914914 (sub_140914914.c)
 *     sub_140915DB8 @ 0x140915DB8 (sub_140915DB8.c)
 *     sub_14091607C @ 0x14091607C (sub_14091607C.c)
 *     sub_140916918 @ 0x140916918 (sub_140916918.c)
 *     sub_140925ED0 @ 0x140925ED0 (sub_140925ED0.c)
 *     sub_140B15F88 @ 0x140B15F88 (sub_140B15F88.c)
 * Callees:
 *     sub_1406D17F4 @ 0x1406D17F4 (sub_1406D17F4.c)
 *     sub_14071BF40 @ 0x14071BF40 (sub_14071BF40.c)
 *     sub_140AB4260 @ 0x140AB4260 (sub_140AB4260.c)
 *     sub_140AB4370 @ 0x140AB4370 (sub_140AB4370.c)
 */

/*
 * Hex-Rays decompilation failed for sub_14067FE98 @ 0x14067FE98
 * Reason: Hex-Rays returned no pseudocode for 0x14067FE98
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014067FE98: mov     [rsp+arg_0], rbx
 * 000000014067FE9D: push    rdi
 * 000000014067FE9E: sub     rsp, 20h
 * 000000014067FEA2: mov     rbx, rcx
 * 000000014067FEA5: mov     dil, dl
 * 000000014067FEA8: mov     rcx, [rcx+58h]
 * 000000014067FEAC: test    rcx, rcx
 * 000000014067FEAF: jnz     loc_14088C2AA
 * 000000014067FEB5: add     rbx, 90h
 * 000000014067FEBC: mov     rax, [rbx]
 * 000000014067FEBF: cmp     [rax+8], rbx
 * 000000014067FEC3: jnz     short loc_14067FEF0
 * 000000014067FEC5: mov     rcx, [rax]
 * 000000014067FEC8: cmp     [rcx+8], rax
 * 000000014067FECC: jnz     short loc_14067FEF0
 * 000000014067FECE: mov     [rbx], rcx
 * 000000014067FED1: mov     [rcx+8], rbx
 * 000000014067FED5: cmp     rax, rbx
 * 000000014067FED8: jnz     short loc_14067FEE6
 * 000000014067FEDA: mov     rbx, [rsp+28h+arg_0]
 * 000000014067FEDF: add     rsp, 20h
 * 000000014067FEE3: pop     rdi
 * 000000014067FEE4: retn
 * 000000014067FEE6: mov     rcx, rax
 * 000000014067FEE9: call    sub_1406D17F4
 * 000000014067FEEE: jmp     short loc_14067FEBC
 * 000000014067FEF0: mov     ecx, 3
 * 000000014067FEF5: int     29h; Win8: RtlFailFast(ecx)
 * 000000014088C2AA: test    dil, dil
 * 000000014088C2AD: jnz     short loc_14088C2B8
 * 000000014088C2AF: call    sub_140AB4370
 * 000000014088C2B4: mov     rcx, [rbx+58h]; BugCheckParameter4
 * 000000014088C2B8: call    sub_14071BF40
 * 000000014088C2BD: test    dil, dil
 * 000000014088C2C0: jnz     loc_14067FEB5
 * 000000014088C2C6: call    sub_140AB4260
 * 000000014088C2CB: nop
 * 000000014088C2CC: jmp     loc_14067FEB5
 */
