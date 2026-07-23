/*
 * XREFs of KiVmbusInterrupt2 @ 0x140425CB0
 * Callers:
 *     KiVmbusInterrupt2Shadow @ 0x140AF7140 (KiVmbusInterrupt2Shadow.c)
 * Callees:
 *     KiCheckForSListAddress @ 0x140310070 (KiCheckForSListAddress.c)
 *     KeWakeProcessor @ 0x140341B10 (KeWakeProcessor.c)
 *     KiSaveDebugRegisterState @ 0x14041F330 (KiSaveDebugRegisterState.c)
 *     KiVmbusInterrupt2 @ 0x140425CB0 (KiVmbusInterrupt2.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140435700 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiVmbusInterrupt2 @ 0x140425CB0
 * Reason: Hex-Rays returned no pseudocode for 0x140425CB0
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140425CB0: push    3
 * 0000000140425CB2: push    rbp
 * 0000000140425CB3: push    rsi
 * 0000000140425CB4: sub     rsp, 150h
 * 0000000140425CBB: lea     rbp, [rsp+168h+var_E8]
 * 0000000140425CC3: mov     byte ptr [rbp-55h], 0
 * 0000000140425CC7: mov     [rbp-50h], rax
 * 0000000140425CCB: mov     [rbp-48h], rcx
 * 0000000140425CCF: mov     [rbp-40h], rdx
 * 0000000140425CD3: mov     [rbp-38h], r8
 * 0000000140425CD7: mov     [rbp-30h], r9
 * 0000000140425CDB: mov     [rbp-28h], r10
 * 0000000140425CDF: mov     [rbp-20h], r11
 * 0000000140425CE3: test    byte ptr [rbp+0F0h], 1
 * 0000000140425CEA: jnz     short loc_140425D26
 * 0000000140425CEC: xor     edx, edx
 * 0000000140425CEE: rdsspq  rdx
 * 0000000140425CF3: mov     [rbp+58h], rdx
 * 0000000140425CF7: lfence
 * 0000000140425CFA: test    word ptr gs:860h, 1
 * 0000000140425D05: jnz     short loc_140425D0F
 * 0000000140425D07: lfence
 * 0000000140425D0A: jmp     loc_140425F96
 * 0000000140425D0F: movzx   eax, word ptr gs:864h
 * 0000000140425D18: mov     ecx, 48h ; 'H'
 * 0000000140425D1D: xor     edx, edx
 * 0000000140425D1F: wrmsr
 * 0000000140425D21: jmp     loc_140425F96
 * 0000000140425D26: test    cs:KiKvaShadow, 1
 * 0000000140425D2D: jnz     short loc_140425D32
 * 0000000140425D2F: swapgs
 * 0000000140425D32: lfence
 * 0000000140425D35: mov     rcx, gs:95A8h
 * 0000000140425D3E: test    rcx, rcx
 * 0000000140425D41: jz      short loc_140425D62
 * 0000000140425D43: rdsspq  rdx
 * 0000000140425D48: mov     r10, gs:95A0h
 * 0000000140425D51: add     r10, 8
 * 0000000140425D55: cmp     rdx, r10
 * 0000000140425D58: jnz     short loc_140425D62
 * 0000000140425D5A: rstorssp qword ptr [rcx]
 * 0000000140425D5E: saveprevssp
 * 0000000140425D62: mov     r10, gs:188h
 * 0000000140425D6B: mov     rcx, gs:188h
 * 0000000140425D74: mov     rcx, [rcx+220h]
 * 0000000140425D7B: mov     rcx, [rcx+9E0h]
 * 0000000140425D82: mov     gs:858h, rcx
 * 0000000140425D8B: mov     cx, gs:850h
 * 0000000140425D94: mov     gs:852h, cx
 * 0000000140425D9D: mov     cx, gs:860h
 * 0000000140425DA6: mov     gs:854h, cx
 * 0000000140425DAF: movzx   eax, word ptr gs:866h
 * 0000000140425DB8: cmp     gs:864h, ax
 * 0000000140425DC1: jz      short loc_140425DD5
 * 0000000140425DC3: mov     gs:864h, ax
 * 0000000140425DCC: mov     ecx, 48h ; 'H'
 * 0000000140425DD1: xor     edx, edx
 * 0000000140425DD3: wrmsr
 * 0000000140425DD5: movzx   edx, word ptr gs:860h
 * 0000000140425DDE: test    edx, 8
 * 0000000140425DE4: jz      short loc_140425DFD
 * 0000000140425DE6: mov     eax, 1
 * 0000000140425DEB: xor     edx, edx
 * 0000000140425DED: mov     ecx, 49h ; 'I'
 * 0000000140425DF2: wrmsr
 * 0000000140425DF4: movzx   edx, word ptr gs:860h
 * 0000000140425DFD: test    edx, 2
 * 0000000140425E03: jz      loc_140425F40
 * 0000000140425E09: call    loc_140425F1C
 * 0000000140425E0E: add     rsp, 8
 * 0000000140425E12: call    loc_140425F25
 * 0000000140425E17: add     rsp, 8
 * 0000000140425E1B: call    loc_140425E0E
 * 0000000140425E20: add     rsp, 8
 * 0000000140425E24: call    loc_140425E17
 * 0000000140425E29: add     rsp, 8
 * 0000000140425E2D: call    loc_140425E20
 * 0000000140425E32: add     rsp, 8
 * 0000000140425E36: call    loc_140425E29
 * 0000000140425E3B: add     rsp, 8
 * 0000000140425E3F: call    loc_140425E32
 * 0000000140425E44: add     rsp, 8
 * 0000000140425E48: call    loc_140425E3B
 * 0000000140425E4D: add     rsp, 8
 * 0000000140425E51: call    loc_140425E44
 * 0000000140425E56: add     rsp, 8
 * 0000000140425E5A: call    loc_140425E4D
 * 0000000140425E5F: add     rsp, 8
 * 0000000140425E63: call    loc_140425E56
 * 0000000140425E68: add     rsp, 8
 * 0000000140425E6C: call    loc_140425E5F
 * 0000000140425E71: add     rsp, 8
 * 0000000140425E75: call    loc_140425E68
 * 0000000140425E7A: add     rsp, 8
 * 0000000140425E7E: call    loc_140425E71
 * 0000000140425E83: add     rsp, 8
 * 0000000140425E87: call    loc_140425E7A
 * 0000000140425E8C: add     rsp, 8
 * 0000000140425E90: call    loc_140425E83
 * 0000000140425E95: add     rsp, 8
 * 0000000140425E99: call    loc_140425E8C
 * 0000000140425E9E: add     rsp, 8
 * 0000000140425EA2: call    loc_140425E95
 * 0000000140425EA7: add     rsp, 8
 * 0000000140425EAB: call    loc_140425E9E
 * 0000000140425EB0: add     rsp, 8
 * 0000000140425EB4: call    loc_140425EA7
 * 0000000140425EB9: add     rsp, 8
 * 0000000140425EBD: call    loc_140425EB0
 * 0000000140425EC2: add     rsp, 8
 * 0000000140425EC6: call    loc_140425EB9
 * 0000000140425ECB: add     rsp, 8
 * 0000000140425ECF: call    loc_140425EC2
 * 0000000140425ED4: add     rsp, 8
 * 0000000140425ED8: call    loc_140425ECB
 * 0000000140425EDD: add     rsp, 8
 * 0000000140425EE1: call    loc_140425ED4
 * 0000000140425EE6: add     rsp, 8
 * 0000000140425EEA: call    loc_140425EDD
 * 0000000140425EEF: add     rsp, 8
 * 0000000140425EF3: call    loc_140425EE6
 * 0000000140425EF8: add     rsp, 8
 * 0000000140425EFC: call    loc_140425EEF
 * 0000000140425F01: add     rsp, 8
 * 0000000140425F05: call    loc_140425EF8
 * 0000000140425F0A: add     rsp, 8
 * 0000000140425F0E: call    loc_140425F01
 * 0000000140425F13: add     rsp, 8
 * 0000000140425F17: call    loc_140425F0A
 * 0000000140425F1C: add     rsp, 8
 * 0000000140425F20: call    loc_140425F13
 * 0000000140425F25: add     rsp, 8
 * 0000000140425F29: mov     eax, 0DADAh
 * 0000000140425F2E: test    byte ptr gs:862h, 8
 * 0000000140425F37: jz      short loc_140425F40
 * 0000000140425F39: mov     al, 20h ; ' '
 * 0000000140425F3B: incsspq rax
 * 0000000140425F40: test    edx, 200h
 * 0000000140425F46: jz      short loc_140425F4D
 * 0000000140425F48: call    KiFlushBhbDuringTrapEntryOrExit
 * 0000000140425F4D: lfence
 * 0000000140425F50: mov     byte ptr gs:856h, 0
 * 0000000140425F59: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 0000000140425F60: jz      short loc_140425F81
 * 0000000140425F62: mov     ecx, 6A7h
 * 0000000140425F67: rdmsr
 * 0000000140425F69: cmp     edx, 0
 * 0000000140425F6C: jz      short loc_140425F81
 * 0000000140425F6E: mov     ecx, edx
 * 0000000140425F70: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 0000000140425F76: cmp     edx, ecx
 * 0000000140425F78: jz      short loc_140425F81
 * 0000000140425F7A: mov     ecx, 6A7h
 * 0000000140425F7F: wrmsr
 * 0000000140425F81: test    byte ptr [r10+3], 3
 * 0000000140425F86: mov     word ptr [rbp+80h], 0
 * 0000000140425F8F: jz      short loc_140425F96
 * 0000000140425F91: call    KiSaveDebugRegisterState
 * 0000000140425F96: cld
 * 0000000140425F97: stmxcsr dword ptr [rbp-54h]
 * 0000000140425F9B: ldmxcsr dword ptr gs:180h
 * 0000000140425FA4: movaps  xmmword ptr [rbp-10h], xmm0
 * 0000000140425FA8: movaps  xmmword ptr [rbp+0], xmm1
 * 0000000140425FAC: movaps  xmmword ptr [rbp+10h], xmm2
 * 0000000140425FB0: movaps  xmmword ptr [rbp+20h], xmm3
 * 0000000140425FB4: movaps  xmmword ptr [rbp+30h], xmm4
 * 0000000140425FB8: movaps  xmmword ptr [rbp+40h], xmm5
 * 0000000140425FBC: cmp     byte ptr gs:82DAh, 0
 * 0000000140425FC5: jz      short loc_140425FCC
 * 0000000140425FC7: call    KeWakeProcessor
 * 0000000140425FCC: lea     rax, ExpInterlockedPopEntrySListResume
 * 0000000140425FD3: cmp     rax, [rbp+0E8h]
 * 0000000140425FDA: jnb     short loc_140425FF5
 * 0000000140425FDC: lea     rax, ExpInterlockedPopEntrySListEnd
 * 0000000140425FE3: cmp     rax, [rbp+0E8h]
 * 0000000140425FEA: jb      short loc_140425FF5
 * 0000000140425FEC: lea     rcx, [rbp-80h]
 * 0000000140425FF0: call    KiCheckForSListAddress
 * 0000000140425FF5: xor     esi, esi
 * 0000000140425FF7: inc     dword ptr gs:82C0h
 * 0000000140425FFF: jmp     KiVmbusInterruptDispatch
 */
