/*
 * XREFs of AcpiPccWatchdog @ 0x1C005B210
 * Callers:
 *     <none>
 * Callees:
 *     AcpiPccCommandComplete @ 0x1C005A8D0 (AcpiPccCommandComplete.c)
 */

/*
 * Hex-Rays decompilation failed for AcpiPccWatchdog @ 0x1C005B210
 * Reason: Hex-Rays returned no pseudocode for 0x1C005B210
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C005B210: sub     rsp, 28h
 * 00000001C005B214: mov     eax, [rdx+1B0h]
 * 00000001C005B21A: mov     r8, rdx
 * 00000001C005B21D: test    eax, eax
 * 00000001C005B21F: jz      short loc_1C005B24A
 * 00000001C005B221: mov     rax, [rdx+38h]
 * 00000001C005B225: movzx   ecx, word ptr [rax]
 * 00000001C005B228: test    cl, 1
 * 00000001C005B22B: jnz     short loc_1C005B242
 * 00000001C005B22D: inc     dword ptr [rdx+280h]
 * 00000001C005B233: cmp     dword ptr [rdx+280h], 5
 * 00000001C005B23A: jbe     short loc_1C005B250
 * 00000001C005B23C: inc     dword ptr [rdx+284h]
 * 00000001C005B242: mov     rcx, r8
 * 00000001C005B245: call    AcpiPccCommandComplete
 * 00000001C005B24A: add     rsp, 28h
 * 00000001C005B24E: retn
 * 00000001C005B250: mov     eax, [rdx+0Ch]
 * 00000001C005B253: lea     rcx, [r8+1B8h]
 * 00000001C005B25A: imul    rdx, rax, -0Ah
 * 00000001C005B25E: xor     r9d, r9d
 * 00000001C005B261: xor     r8d, r8d
 * 00000001C005B264: call    cs:__imp_KeSetTimer2
 * 00000001C005B26B: nop     dword ptr [rax+rax+00h]
 * 00000001C005B270: jmp     short loc_1C005B24A
 */
