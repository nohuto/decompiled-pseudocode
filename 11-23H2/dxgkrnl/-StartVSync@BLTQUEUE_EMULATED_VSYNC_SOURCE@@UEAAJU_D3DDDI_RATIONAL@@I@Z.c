/*
 * XREFs of ?StartVSync@BLTQUEUE_EMULATED_VSYNC_SOURCE@@UEAAJU_D3DDDI_RATIONAL@@I@Z @ 0x1C01EA980
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

/*
 * Hex-Rays decompilation failed for ?StartVSync@BLTQUEUE_EMULATED_VSYNC_SOURCE@@UEAAJU_D3DDDI_RATIONAL@@I@Z @ 0x1C01EA980
 * Reason: Hex-Rays returned no pseudocode for 0x1C01EA980
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C01EA980: sub     rsp, 28h
 * 00000001C01EA984: xor     r10d, r10d
 * 00000001C01EA987: mov     r8, rdx
 * 00000001C01EA98A: mov     r11, rcx
 * 00000001C01EA98D: cmp     [rcx+8], r10b
 * 00000001C01EA991: jnz     short loc_1C01EA9A8
 * 00000001C01EA993: mov     rax, rdx
 * 00000001C01EA996: xor     edx, edx
 * 00000001C01EA998: shr     rax, 20h
 * 00000001C01EA99C: imul    eax, 989680h
 * 00000001C01EA9A2: div     r8d
 * 00000001C01EA9A5: mov     r10d, eax
 * 00000001C01EA9A8: mov     ecx, r8d
 * 00000001C01EA9AB: mov     rax, r8
 * 00000001C01EA9AE: shr     rax, 20h
 * 00000001C01EA9B2: xor     r9d, r9d
 * 00000001C01EA9B5: imul    rax, 0FFFFFFFFFF676980h
 * 00000001C01EA9BC: mov     r8, r10
 * 00000001C01EA9BF: cqo
 * 00000001C01EA9C1: idiv    rcx
 * 00000001C01EA9C4: mov     rcx, [r11+10h]
 * 00000001C01EA9C8: mov     rdx, rax
 * 00000001C01EA9CB: call    cs:__imp_ExSetTimer
 * 00000001C01EA9D2: nop     dword ptr [rax+rax+00h]
 * 00000001C01EA9D7: xor     eax, eax
 * 00000001C01EA9D9: add     rsp, 28h
 * 00000001C01EA9DD: retn
 */
