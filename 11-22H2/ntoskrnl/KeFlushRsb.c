/*
 * XREFs of KeFlushRsb @ 0x140573A84
 * Callers:
 *     MiUnloadSystemImage @ 0x1406962FC (MiUnloadSystemImage.c)
 * Callees:
 *     KiIpiStallOnPacketTargetsPrcb @ 0x1402C02C0 (KiIpiStallOnPacketTargetsPrcb.c)
 *     KiIpiSendPacket @ 0x1402C0300 (KiIpiSendPacket.c)
 *     KiFlushCurrentRsb @ 0x140434F00 (KiFlushCurrentRsb.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 */

/*
 * Hex-Rays decompilation failed for KeFlushRsb @ 0x140573A84
 * Reason: Hex-Rays returned no pseudocode for 0x140573A84
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140573A84: mov     [rsp+arg_0], rbx
 * 0000000140573A89: push    rdi
 * 0000000140573A8A: sub     rsp, 30h
 * 0000000140573A8E: mov     rbx, cr8
 * 0000000140573A92: mov     ecx, 0Ch
 * 0000000140573A97: mov     cr8, rcx
 * 0000000140573A9B: mov     eax, cs:KiIrqlFlags
 * 0000000140573AA1: or      rdi, 0FFFFFFFFFFFFFFFFh
 * 0000000140573AA5: test    eax, eax
 * 0000000140573AA7: jz      short loc_140573AE9
 * 0000000140573AA9: test    al, 1
 * 0000000140573AAB: jz      short loc_140573AE9
 * 0000000140573AAD: cmp     bl, 0Fh
 * 0000000140573AB0: ja      short loc_140573AE9
 * 0000000140573AB2: mov     rax, gs:20h
 * 0000000140573ABB: mov     r9, [rax+88B8h]
 * 0000000140573AC2: mov     r8d, [r9+14h]
 * 0000000140573AC6: cmp     bl, cl
 * 0000000140573AC8: jnz     short loc_140573AD1
 * 0000000140573ACA: mov     edx, 1000h
 * 0000000140573ACF: jmp     short loc_140573AE2
 * 0000000140573AD1: movzx   ecx, bl
 * 0000000140573AD4: mov     rdx, rdi
 * 0000000140573AD7: inc     ecx
 * 0000000140573AD9: shl     rdx, cl
 * 0000000140573ADC: and     edx, 1FFCh
 * 0000000140573AE2: or      r8d, edx
 * 0000000140573AE5: mov     [r9+14h], r8d
 * 0000000140573AE9: and     [rsp+38h+var_10], 0
 * 0000000140573AEF: lea     r8, KiFlushRsbTarget
 * 0000000140573AF6: and     [rsp+38h+var_18], 0
 * 0000000140573AFC: xor     edx, edx
 * 0000000140573AFE: xor     r9d, r9d
 * 0000000140573B01: lea     ecx, [rdx+1]
 * 0000000140573B04: call    KiIpiSendPacket
 * 0000000140573B09: mov     rdx, gs:20h
 * 0000000140573B12: call    KiIpiStallOnPacketTargetsPrcb
 * 0000000140573B17: call    KiFlushCurrentRsb
 * 0000000140573B1C: mov     ecx, cs:KiIrqlFlags
 * 0000000140573B22: test    ecx, ecx
 * 0000000140573B24: jz      short loc_140573B6D
 * 0000000140573B26: mov     rax, cr8
 * 0000000140573B2A: test    cl, 1
 * 0000000140573B2D: jz      short loc_140573B6D
 * 0000000140573B2F: cmp     al, 0Fh
 * 0000000140573B31: ja      short loc_140573B6D
 * 0000000140573B33: cmp     bl, 0Fh
 * 0000000140573B36: ja      short loc_140573B6D
 * 0000000140573B38: cmp     al, 2
 * 0000000140573B3A: jb      short loc_140573B6D
 * 0000000140573B3C: mov     r9, gs:20h
 * 0000000140573B45: movzx   ecx, bl
 * 0000000140573B48: inc     ecx
 * 0000000140573B4A: shl     rdi, cl
 * 0000000140573B4D: mov     r8, [r9+88B8h]
 * 0000000140573B54: movzx   eax, di
 * 0000000140573B57: not     eax
 * 0000000140573B59: mov     edx, [r8+14h]
 * 0000000140573B5D: and     edx, eax
 * 0000000140573B5F: mov     [r8+14h], edx
 * 0000000140573B63: jnz     short loc_140573B6D
 * 0000000140573B65: mov     rcx, r9
 * 0000000140573B68: call    KiRemoveSystemWorkPriorityKick
 * 0000000140573B6D: movzx   eax, bl
 * 0000000140573B70: mov     cr8, rax
 * 0000000140573B74: mov     rbx, [rsp+38h+arg_0]
 * 0000000140573B79: add     rsp, 30h
 * 0000000140573B7D: pop     rdi
 * 0000000140573B7E: retn
 */
