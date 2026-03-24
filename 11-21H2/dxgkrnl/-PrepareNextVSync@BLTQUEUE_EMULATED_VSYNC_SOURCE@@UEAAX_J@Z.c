/*
 * XREFs of ?PrepareNextVSync@BLTQUEUE_EMULATED_VSYNC_SOURCE@@UEAAX_J@Z @ 0x1C01DEAA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

/*
 * Hex-Rays decompilation failed for ?PrepareNextVSync@BLTQUEUE_EMULATED_VSYNC_SOURCE@@UEAAX_J@Z @ 0x1C01DEAA0
 * Reason: Hex-Rays returned no pseudocode for 0x1C01DEAA0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C01DEAA0: sub     rsp, 28h
 * 00000001C01DEAA4: cmp     byte ptr [rcx+8], 0
 * 00000001C01DEAA8: jnz     loc_1C02A14F4
 * 00000001C01DEAAE: add     rsp, 28h
 * 00000001C01DEAB2: retn
 * 00000001C02A14F4: mov     rcx, [rcx+10h]
 * 00000001C02A14F8: xor     r9d, r9d
 * 00000001C02A14FB: xor     r8d, r8d
 * 00000001C02A14FE: call    cs:__imp_ExSetTimer
 * 00000001C02A1505: nop     dword ptr [rax+rax+00h]
 * 00000001C02A150A: nop
 * 00000001C02A150B: jmp     loc_1C01DEAAE
 */
