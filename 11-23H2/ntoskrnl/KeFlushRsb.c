/*
 * XREFs of KeFlushRsb @ 0x1405739E4
 * Callers:
 *     MiUnloadSystemImage @ 0x1406962FC (MiUnloadSystemImage.c)
 * Callees:
 *     KiIpiStallOnPacketTargetsPrcb @ 0x1402C02F0 (KiIpiStallOnPacketTargetsPrcb.c)
 *     KiIpiSendPacket @ 0x1402C0330 (KiIpiSendPacket.c)
 *     KiFlushCurrentRsb @ 0x140435500 (KiFlushCurrentRsb.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DEB4 (KiRemoveSystemWorkPriorityKick.c)
 */

/*
 * Hex-Rays decompilation failed for KeFlushRsb @ 0x1405739E4
 * Reason: Hex-Rays returned no pseudocode for 0x1405739E4
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001405739E4: mov     [rsp+arg_0], rbx
 * 00000001405739E9: push    rdi
 * 00000001405739EA: sub     rsp, 30h
 * 00000001405739EE: mov     rbx, cr8
 * 00000001405739F2: mov     ecx, 0Ch
 * 00000001405739F7: mov     cr8, rcx
 * 00000001405739FB: mov     eax, cs:KiIrqlFlags
 * 0000000140573A01: or      rdi, 0FFFFFFFFFFFFFFFFh
 * 0000000140573A05: test    eax, eax
 * 0000000140573A07: jz      short loc_140573A49
 * 0000000140573A09: test    al, 1
 * 0000000140573A0B: jz      short loc_140573A49
 * 0000000140573A0D: cmp     bl, 0Fh
 * 0000000140573A10: ja      short loc_140573A49
 * 0000000140573A12: mov     rax, gs:20h
 * 0000000140573A1B: mov     r9, [rax+88B8h]
 * 0000000140573A22: mov     r8d, [r9+14h]
 * 0000000140573A26: cmp     bl, cl
 * 0000000140573A28: jnz     short loc_140573A31
 * 0000000140573A2A: mov     edx, 1000h
 * 0000000140573A2F: jmp     short loc_140573A42
 * 0000000140573A31: movzx   ecx, bl
 * 0000000140573A34: mov     rdx, rdi
 * 0000000140573A37: inc     ecx
 * 0000000140573A39: shl     rdx, cl
 * 0000000140573A3C: and     edx, 1FFCh
 * 0000000140573A42: or      r8d, edx
 * 0000000140573A45: mov     [r9+14h], r8d
 * 0000000140573A49: and     [rsp+38h+var_10], 0
 * 0000000140573A4F: lea     r8, KiFlushRsbTarget
 * 0000000140573A56: and     [rsp+38h+var_18], 0
 * 0000000140573A5C: xor     edx, edx
 * 0000000140573A5E: xor     r9d, r9d
 * 0000000140573A61: lea     ecx, [rdx+1]
 * 0000000140573A64: call    KiIpiSendPacket
 * 0000000140573A69: mov     rdx, gs:20h
 * 0000000140573A72: call    KiIpiStallOnPacketTargetsPrcb
 * 0000000140573A77: call    KiFlushCurrentRsb
 * 0000000140573A7C: mov     ecx, cs:KiIrqlFlags
 * 0000000140573A82: test    ecx, ecx
 * 0000000140573A84: jz      short loc_140573ACD
 * 0000000140573A86: mov     rax, cr8
 * 0000000140573A8A: test    cl, 1
 * 0000000140573A8D: jz      short loc_140573ACD
 * 0000000140573A8F: cmp     al, 0Fh
 * 0000000140573A91: ja      short loc_140573ACD
 * 0000000140573A93: cmp     bl, 0Fh
 * 0000000140573A96: ja      short loc_140573ACD
 * 0000000140573A98: cmp     al, 2
 * 0000000140573A9A: jb      short loc_140573ACD
 * 0000000140573A9C: mov     r9, gs:20h
 * 0000000140573AA5: movzx   ecx, bl
 * 0000000140573AA8: inc     ecx
 * 0000000140573AAA: shl     rdi, cl
 * 0000000140573AAD: mov     r8, [r9+88B8h]
 * 0000000140573AB4: movzx   eax, di
 * 0000000140573AB7: not     eax
 * 0000000140573AB9: mov     edx, [r8+14h]
 * 0000000140573ABD: and     edx, eax
 * 0000000140573ABF: mov     [r8+14h], edx
 * 0000000140573AC3: jnz     short loc_140573ACD
 * 0000000140573AC5: mov     rcx, r9
 * 0000000140573AC8: call    KiRemoveSystemWorkPriorityKick
 * 0000000140573ACD: movzx   eax, bl
 * 0000000140573AD0: mov     cr8, rax
 * 0000000140573AD4: mov     rbx, [rsp+38h+arg_0]
 * 0000000140573AD9: add     rsp, 30h
 * 0000000140573ADD: pop     rdi
 * 0000000140573ADE: retn
 */
