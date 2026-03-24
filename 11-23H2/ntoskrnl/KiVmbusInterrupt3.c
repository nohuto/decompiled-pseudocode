/*
 * XREFs of KiVmbusInterrupt3 @ 0x140425C80
 * Callers:
 *     KiVmbusInterrupt3Shadow @ 0x140AF71C0 (KiVmbusInterrupt3Shadow.c)
 * Callees:
 *     KiCheckForSListAddress @ 0x14030FDE0 (KiCheckForSListAddress.c)
 *     KeWakeProcessor @ 0x140341880 (KeWakeProcessor.c)
 *     KiSaveDebugRegisterState @ 0x14041EFA0 (KiSaveDebugRegisterState.c)
 *     KiVmbusInterrupt3 @ 0x140425C80 (KiVmbusInterrupt3.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140435300 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiVmbusInterrupt3 @ 0x140425C80
 * Reason: Hex-Rays returned no pseudocode for 0x140425C80
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140425C80: push    4
 * 0000000140425C82: push    rbp
 * 0000000140425C83: push    rsi
 * 0000000140425C84: sub     rsp, 150h
 * 0000000140425C8B: lea     rbp, [rsp+168h+var_E8]
 * 0000000140425C93: mov     byte ptr [rbp-55h], 0
 * 0000000140425C97: mov     [rbp-50h], rax
 * 0000000140425C9B: mov     [rbp-48h], rcx
 * 0000000140425C9F: mov     [rbp-40h], rdx
 * 0000000140425CA3: mov     [rbp-38h], r8
 * 0000000140425CA7: mov     [rbp-30h], r9
 * 0000000140425CAB: mov     [rbp-28h], r10
 * 0000000140425CAF: mov     [rbp-20h], r11
 * 0000000140425CB3: test    byte ptr [rbp+0F0h], 1
 * 0000000140425CBA: jnz     short loc_140425CF6
 * 0000000140425CBC: xor     edx, edx
 * 0000000140425CBE: rdsspq  rdx
 * 0000000140425CC3: mov     [rbp+58h], rdx
 * 0000000140425CC7: lfence
 * 0000000140425CCA: test    word ptr gs:860h, 1
 * 0000000140425CD5: jnz     short loc_140425CDF
 * 0000000140425CD7: lfence
 * 0000000140425CDA: jmp     loc_140425F66
 * 0000000140425CDF: movzx   eax, word ptr gs:864h
 * 0000000140425CE8: mov     ecx, 48h ; 'H'
 * 0000000140425CED: xor     edx, edx
 * 0000000140425CEF: wrmsr
 * 0000000140425CF1: jmp     loc_140425F66
 * 0000000140425CF6: test    cs:KiKvaShadow, 1
 * 0000000140425CFD: jnz     short loc_140425D02
 * 0000000140425CFF: swapgs
 * 0000000140425D02: lfence
 * 0000000140425D05: mov     rcx, gs:95A8h
 * 0000000140425D0E: test    rcx, rcx
 * 0000000140425D11: jz      short loc_140425D32
 * 0000000140425D13: rdsspq  rdx
 * 0000000140425D18: mov     r10, gs:95A0h
 * 0000000140425D21: add     r10, 8
 * 0000000140425D25: cmp     rdx, r10
 * 0000000140425D28: jnz     short loc_140425D32
 * 0000000140425D2A: rstorssp qword ptr [rcx]
 * 0000000140425D2E: saveprevssp
 * 0000000140425D32: mov     r10, gs:188h
 * 0000000140425D3B: mov     rcx, gs:188h
 * 0000000140425D44: mov     rcx, [rcx+220h]
 * 0000000140425D4B: mov     rcx, [rcx+9E0h]
 * 0000000140425D52: mov     gs:858h, rcx
 * 0000000140425D5B: mov     cx, gs:850h
 * 0000000140425D64: mov     gs:852h, cx
 * 0000000140425D6D: mov     cx, gs:860h
 * 0000000140425D76: mov     gs:854h, cx
 * 0000000140425D7F: movzx   eax, word ptr gs:866h
 * 0000000140425D88: cmp     gs:864h, ax
 * 0000000140425D91: jz      short loc_140425DA5
 * 0000000140425D93: mov     gs:864h, ax
 * 0000000140425D9C: mov     ecx, 48h ; 'H'
 * 0000000140425DA1: xor     edx, edx
 * 0000000140425DA3: wrmsr
 * 0000000140425DA5: movzx   edx, word ptr gs:860h
 * 0000000140425DAE: test    edx, 8
 * 0000000140425DB4: jz      short loc_140425DCD
 * 0000000140425DB6: mov     eax, 1
 * 0000000140425DBB: xor     edx, edx
 * 0000000140425DBD: mov     ecx, 49h ; 'I'
 * 0000000140425DC2: wrmsr
 * 0000000140425DC4: movzx   edx, word ptr gs:860h
 * 0000000140425DCD: test    edx, 2
 * 0000000140425DD3: jz      loc_140425F10
 * 0000000140425DD9: call    loc_140425EEC
 * 0000000140425DDE: add     rsp, 8
 * 0000000140425DE2: call    loc_140425EF5
 * 0000000140425DE7: add     rsp, 8
 * 0000000140425DEB: call    loc_140425DDE
 * 0000000140425DF0: add     rsp, 8
 * 0000000140425DF4: call    loc_140425DE7
 * 0000000140425DF9: add     rsp, 8
 * 0000000140425DFD: call    loc_140425DF0
 * 0000000140425E02: add     rsp, 8
 * 0000000140425E06: call    loc_140425DF9
 * 0000000140425E0B: add     rsp, 8
 * 0000000140425E0F: call    loc_140425E02
 * 0000000140425E14: add     rsp, 8
 * 0000000140425E18: call    loc_140425E0B
 * 0000000140425E1D: add     rsp, 8
 * 0000000140425E21: call    loc_140425E14
 * 0000000140425E26: add     rsp, 8
 * 0000000140425E2A: call    loc_140425E1D
 * 0000000140425E2F: add     rsp, 8
 * 0000000140425E33: call    loc_140425E26
 * 0000000140425E38: add     rsp, 8
 * 0000000140425E3C: call    loc_140425E2F
 * 0000000140425E41: add     rsp, 8
 * 0000000140425E45: call    loc_140425E38
 * 0000000140425E4A: add     rsp, 8
 * 0000000140425E4E: call    loc_140425E41
 * 0000000140425E53: add     rsp, 8
 * 0000000140425E57: call    loc_140425E4A
 * 0000000140425E5C: add     rsp, 8
 * 0000000140425E60: call    loc_140425E53
 * 0000000140425E65: add     rsp, 8
 * 0000000140425E69: call    loc_140425E5C
 * 0000000140425E6E: add     rsp, 8
 * 0000000140425E72: call    loc_140425E65
 * 0000000140425E77: add     rsp, 8
 * 0000000140425E7B: call    loc_140425E6E
 * 0000000140425E80: add     rsp, 8
 * 0000000140425E84: call    loc_140425E77
 * 0000000140425E89: add     rsp, 8
 * 0000000140425E8D: call    loc_140425E80
 * 0000000140425E92: add     rsp, 8
 * 0000000140425E96: call    loc_140425E89
 * 0000000140425E9B: add     rsp, 8
 * 0000000140425E9F: call    loc_140425E92
 * 0000000140425EA4: add     rsp, 8
 * 0000000140425EA8: call    loc_140425E9B
 * 0000000140425EAD: add     rsp, 8
 * 0000000140425EB1: call    loc_140425EA4
 * 0000000140425EB6: add     rsp, 8
 * 0000000140425EBA: call    loc_140425EAD
 * 0000000140425EBF: add     rsp, 8
 * 0000000140425EC3: call    loc_140425EB6
 * 0000000140425EC8: add     rsp, 8
 * 0000000140425ECC: call    loc_140425EBF
 * 0000000140425ED1: add     rsp, 8
 * 0000000140425ED5: call    loc_140425EC8
 * 0000000140425EDA: add     rsp, 8
 * 0000000140425EDE: call    loc_140425ED1
 * 0000000140425EE3: add     rsp, 8
 * 0000000140425EE7: call    loc_140425EDA
 * 0000000140425EEC: add     rsp, 8
 * 0000000140425EF0: call    loc_140425EE3
 * 0000000140425EF5: add     rsp, 8
 * 0000000140425EF9: mov     eax, 0DADAh
 * 0000000140425EFE: test    byte ptr gs:862h, 8
 * 0000000140425F07: jz      short loc_140425F10
 * 0000000140425F09: mov     al, 20h ; ' '
 * 0000000140425F0B: incsspq rax
 * 0000000140425F10: test    edx, 200h
 * 0000000140425F16: jz      short loc_140425F1D
 * 0000000140425F18: call    KiFlushBhbDuringTrapEntryOrExit
 * 0000000140425F1D: lfence
 * 0000000140425F20: mov     byte ptr gs:856h, 0
 * 0000000140425F29: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 0000000140425F30: jz      short loc_140425F51
 * 0000000140425F32: mov     ecx, 6A7h
 * 0000000140425F37: rdmsr
 * 0000000140425F39: cmp     edx, 0
 * 0000000140425F3C: jz      short loc_140425F51
 * 0000000140425F3E: mov     ecx, edx
 * 0000000140425F40: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 0000000140425F46: cmp     edx, ecx
 * 0000000140425F48: jz      short loc_140425F51
 * 0000000140425F4A: mov     ecx, 6A7h
 * 0000000140425F4F: wrmsr
 * 0000000140425F51: test    byte ptr [r10+3], 3
 * 0000000140425F56: mov     word ptr [rbp+80h], 0
 * 0000000140425F5F: jz      short loc_140425F66
 * 0000000140425F61: call    KiSaveDebugRegisterState
 * 0000000140425F66: cld
 * 0000000140425F67: stmxcsr dword ptr [rbp-54h]
 * 0000000140425F6B: ldmxcsr dword ptr gs:180h
 * 0000000140425F74: movaps  xmmword ptr [rbp-10h], xmm0
 * 0000000140425F78: movaps  xmmword ptr [rbp+0], xmm1
 * 0000000140425F7C: movaps  xmmword ptr [rbp+10h], xmm2
 * 0000000140425F80: movaps  xmmword ptr [rbp+20h], xmm3
 * 0000000140425F84: movaps  xmmword ptr [rbp+30h], xmm4
 * 0000000140425F88: movaps  xmmword ptr [rbp+40h], xmm5
 * 0000000140425F8C: cmp     byte ptr gs:82DAh, 0
 * 0000000140425F95: jz      short loc_140425F9C
 * 0000000140425F97: call    KeWakeProcessor
 * 0000000140425F9C: lea     rax, ExpInterlockedPopEntrySListResume
 * 0000000140425FA3: cmp     rax, [rbp+0E8h]
 * 0000000140425FAA: jnb     short loc_140425FC5
 * 0000000140425FAC: lea     rax, ExpInterlockedPopEntrySListEnd
 * 0000000140425FB3: cmp     rax, [rbp+0E8h]
 * 0000000140425FBA: jb      short loc_140425FC5
 * 0000000140425FBC: lea     rcx, [rbp-80h]
 * 0000000140425FC0: call    KiCheckForSListAddress
 * 0000000140425FC5: xor     esi, esi
 * 0000000140425FC7: inc     dword ptr gs:82C0h
 * 0000000140425FCF: jmp     KiVmbusInterruptDispatch
 */
