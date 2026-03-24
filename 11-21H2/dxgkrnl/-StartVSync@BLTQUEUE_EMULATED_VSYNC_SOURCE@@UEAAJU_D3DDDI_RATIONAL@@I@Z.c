/*
 * XREFs of ?StartVSync@BLTQUEUE_EMULATED_VSYNC_SOURCE@@UEAAJU_D3DDDI_RATIONAL@@I@Z @ 0x1C01E9E10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

/*
 * Hex-Rays decompilation failed for ?StartVSync@BLTQUEUE_EMULATED_VSYNC_SOURCE@@UEAAJU_D3DDDI_RATIONAL@@I@Z @ 0x1C01E9E10
 * Reason: Hex-Rays returned no pseudocode for 0x1C01E9E10
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C01E9E10: sub     rsp, 28h
 * 00000001C01E9E14: xor     r10d, r10d
 * 00000001C01E9E17: mov     r8, rdx
 * 00000001C01E9E1A: mov     r11, rcx
 * 00000001C01E9E1D: cmp     [rcx+8], r10b
 * 00000001C01E9E21: jnz     short loc_1C01E9E38
 * 00000001C01E9E23: mov     rax, rdx
 * 00000001C01E9E26: xor     edx, edx
 * 00000001C01E9E28: shr     rax, 20h
 * 00000001C01E9E2C: imul    eax, 989680h
 * 00000001C01E9E32: div     r8d
 * 00000001C01E9E35: mov     r10d, eax
 * 00000001C01E9E38: mov     ecx, r8d
 * 00000001C01E9E3B: mov     rax, r8
 * 00000001C01E9E3E: shr     rax, 20h
 * 00000001C01E9E42: xor     r9d, r9d
 * 00000001C01E9E45: imul    rax, 0FFFFFFFFFF676980h
 * 00000001C01E9E4C: mov     r8, r10
 * 00000001C01E9E4F: cqo
 * 00000001C01E9E51: idiv    rcx
 * 00000001C01E9E54: mov     rcx, [r11+10h]
 * 00000001C01E9E58: mov     rdx, rax
 * 00000001C01E9E5B: call    cs:__imp_ExSetTimer
 * 00000001C01E9E62: nop     dword ptr [rax+rax+00h]
 * 00000001C01E9E67: xor     eax, eax
 * 00000001C01E9E69: add     rsp, 28h
 * 00000001C01E9E6D: retn
 */
