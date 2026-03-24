/*
 * XREFs of ?PrepareNextVSync@BLTQUEUE_EMULATED_VSYNC_SOURCE@@UEAAX_J@Z @ 0x1C01DC310
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

/*
 * Hex-Rays decompilation failed for ?PrepareNextVSync@BLTQUEUE_EMULATED_VSYNC_SOURCE@@UEAAX_J@Z @ 0x1C01DC310
 * Reason: Hex-Rays returned no pseudocode for 0x1C01DC310
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C01DC310: sub     rsp, 28h
 * 00000001C01DC314: cmp     byte ptr [rcx+8], 0
 * 00000001C01DC318: jnz     loc_1C028F44A
 * 00000001C01DC31E: add     rsp, 28h
 * 00000001C01DC322: retn
 * 00000001C028F44A: mov     rcx, [rcx+10h]
 * 00000001C028F44E: xor     r9d, r9d
 * 00000001C028F451: xor     r8d, r8d
 * 00000001C028F454: call    cs:__imp_ExSetTimer
 * 00000001C028F45B: nop     dword ptr [rax+rax+00h]
 * 00000001C028F460: nop
 * 00000001C028F461: jmp     loc_1C01DC31E
 */
