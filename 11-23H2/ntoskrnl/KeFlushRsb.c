/*
 * XREFs of KeFlushRsb @ 0x140573F24
 * Callers:
 *     MiUnloadSystemImage @ 0x1406962FC (MiUnloadSystemImage.c)
 * Callees:
 *     KiIpiStallOnPacketTargetsPrcb @ 0x1402C0580 (KiIpiStallOnPacketTargetsPrcb.c)
 *     KiIpiSendPacket @ 0x1402C05C0 (KiIpiSendPacket.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14041057C (KiRemoveSystemWorkPriorityKick.c)
 *     KiFlushCurrentRsb @ 0x140435900 (KiFlushCurrentRsb.c)
 */

/*
 * Hex-Rays decompilation failed for KeFlushRsb @ 0x140573F24
 * Reason: Hex-Rays returned no pseudocode for 0x140573F24
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140573F24: mov     [rsp+arg_0], rbx
 * 0000000140573F29: push    rdi
 * 0000000140573F2A: sub     rsp, 30h
 * 0000000140573F2E: mov     rbx, cr8
 * 0000000140573F32: mov     ecx, 0Ch
 * 0000000140573F37: mov     cr8, rcx
 * 0000000140573F3B: mov     eax, cs:KiIrqlFlags
 * 0000000140573F41: or      rdi, 0FFFFFFFFFFFFFFFFh
 * 0000000140573F45: test    eax, eax
 * 0000000140573F47: jz      short loc_140573F89
 * 0000000140573F49: test    al, 1
 * 0000000140573F4B: jz      short loc_140573F89
 * 0000000140573F4D: cmp     bl, 0Fh
 * 0000000140573F50: ja      short loc_140573F89
 * 0000000140573F52: mov     rax, gs:20h
 * 0000000140573F5B: mov     r9, [rax+88B8h]
 * 0000000140573F62: mov     r8d, [r9+14h]
 * 0000000140573F66: cmp     bl, cl
 * 0000000140573F68: jnz     short loc_140573F71
 * 0000000140573F6A: mov     edx, 1000h
 * 0000000140573F6F: jmp     short loc_140573F82
 * 0000000140573F71: movzx   ecx, bl
 * 0000000140573F74: mov     rdx, rdi
 * 0000000140573F77: inc     ecx
 * 0000000140573F79: shl     rdx, cl
 * 0000000140573F7C: and     edx, 1FFCh
 * 0000000140573F82: or      r8d, edx
 * 0000000140573F85: mov     [r9+14h], r8d
 * 0000000140573F89: and     [rsp+38h+var_10], 0
 * 0000000140573F8F: lea     r8, KiFlushRsbTarget
 * 0000000140573F96: and     [rsp+38h+var_18], 0
 * 0000000140573F9C: xor     edx, edx
 * 0000000140573F9E: xor     r9d, r9d
 * 0000000140573FA1: lea     ecx, [rdx+1]
 * 0000000140573FA4: call    KiIpiSendPacket
 * 0000000140573FA9: mov     rdx, gs:20h
 * 0000000140573FB2: call    KiIpiStallOnPacketTargetsPrcb
 * 0000000140573FB7: call    KiFlushCurrentRsb
 * 0000000140573FBC: mov     ecx, cs:KiIrqlFlags
 * 0000000140573FC2: test    ecx, ecx
 * 0000000140573FC4: jz      short loc_14057400D
 * 0000000140573FC6: mov     rax, cr8
 * 0000000140573FCA: test    cl, 1
 * 0000000140573FCD: jz      short loc_14057400D
 * 0000000140573FCF: cmp     al, 0Fh
 * 0000000140573FD1: ja      short loc_14057400D
 * 0000000140573FD3: cmp     bl, 0Fh
 * 0000000140573FD6: ja      short loc_14057400D
 * 0000000140573FD8: cmp     al, 2
 * 0000000140573FDA: jb      short loc_14057400D
 * 0000000140573FDC: mov     r9, gs:20h
 * 0000000140573FE5: movzx   ecx, bl
 * 0000000140573FE8: inc     ecx
 * 0000000140573FEA: shl     rdi, cl
 * 0000000140573FED: mov     r8, [r9+88B8h]
 * 0000000140573FF4: movzx   eax, di
 * 0000000140573FF7: not     eax
 * 0000000140573FF9: mov     edx, [r8+14h]
 * 0000000140573FFD: and     edx, eax
 * 0000000140573FFF: mov     [r8+14h], edx
 * 0000000140574003: jnz     short loc_14057400D
 * 0000000140574005: mov     rcx, r9
 * 0000000140574008: call    KiRemoveSystemWorkPriorityKick
 * 000000014057400D: movzx   eax, bl
 * 0000000140574010: mov     cr8, rax
 * 0000000140574014: mov     rbx, [rsp+38h+arg_0]
 * 0000000140574019: add     rsp, 30h
 * 000000014057401D: pop     rdi
 * 000000014057401E: retn
 */
