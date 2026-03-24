/*
 * XREFs of KiHvInterrupt @ 0x140424840
 * Callers:
 *     KiHvInterruptShadow @ 0x140AF7FC0 (KiHvInterruptShadow.c)
 * Callees:
 *     KiCheckForSListAddress @ 0x14030FC00 (KiCheckForSListAddress.c)
 *     KeWakeProcessor @ 0x140341390 (KeWakeProcessor.c)
 *     KiSaveDebugRegisterState @ 0x14041E8E0 (KiSaveDebugRegisterState.c)
 *     KiHvInterrupt @ 0x140424840 (KiHvInterrupt.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140434D00 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiHvInterrupt @ 0x140424840
 * Reason: Hex-Rays returned no pseudocode for 0x140424840
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140424840: push    0
 * 0000000140424842: push    rbp
 * 0000000140424843: push    rsi
 * 0000000140424844: sub     rsp, 150h
 * 000000014042484B: lea     rbp, [rsp+168h+var_E8]
 * 0000000140424853: mov     byte ptr [rbp-55h], 0
 * 0000000140424857: mov     [rbp-50h], rax
 * 000000014042485B: mov     [rbp-48h], rcx
 * 000000014042485F: mov     [rbp-40h], rdx
 * 0000000140424863: mov     [rbp-38h], r8
 * 0000000140424867: mov     [rbp-30h], r9
 * 000000014042486B: mov     [rbp-28h], r10
 * 000000014042486F: mov     [rbp-20h], r11
 * 0000000140424873: test    byte ptr [rbp+0F0h], 1
 * 000000014042487A: jnz     short loc_1404248B6
 * 000000014042487C: xor     edx, edx
 * 000000014042487E: rdsspq  rdx
 * 0000000140424883: mov     [rbp+58h], rdx
 * 0000000140424887: lfence
 * 000000014042488A: test    word ptr gs:860h, 1
 * 0000000140424895: jnz     short loc_14042489F
 * 0000000140424897: lfence
 * 000000014042489A: jmp     loc_140424B26
 * 000000014042489F: movzx   eax, word ptr gs:864h
 * 00000001404248A8: mov     ecx, 48h ; 'H'
 * 00000001404248AD: xor     edx, edx
 * 00000001404248AF: wrmsr
 * 00000001404248B1: jmp     loc_140424B26
 * 00000001404248B6: test    cs:KiKvaShadow, 1
 * 00000001404248BD: jnz     short loc_1404248C2
 * 00000001404248BF: swapgs
 * 00000001404248C2: lfence
 * 00000001404248C5: mov     rcx, gs:95A8h
 * 00000001404248CE: test    rcx, rcx
 * 00000001404248D1: jz      short loc_1404248F2
 * 00000001404248D3: rdsspq  rdx
 * 00000001404248D8: mov     r10, gs:95A0h
 * 00000001404248E1: add     r10, 8
 * 00000001404248E5: cmp     rdx, r10
 * 00000001404248E8: jnz     short loc_1404248F2
 * 00000001404248EA: rstorssp qword ptr [rcx]
 * 00000001404248EE: saveprevssp
 * 00000001404248F2: mov     r10, gs:188h
 * 00000001404248FB: mov     rcx, gs:188h
 * 0000000140424904: mov     rcx, [rcx+220h]
 * 000000014042490B: mov     rcx, [rcx+9E0h]
 * 0000000140424912: mov     gs:858h, rcx
 * 000000014042491B: mov     cx, gs:850h
 * 0000000140424924: mov     gs:852h, cx
 * 000000014042492D: mov     cx, gs:860h
 * 0000000140424936: mov     gs:854h, cx
 * 000000014042493F: movzx   eax, word ptr gs:866h
 * 0000000140424948: cmp     gs:864h, ax
 * 0000000140424951: jz      short loc_140424965
 * 0000000140424953: mov     gs:864h, ax
 * 000000014042495C: mov     ecx, 48h ; 'H'
 * 0000000140424961: xor     edx, edx
 * 0000000140424963: wrmsr
 * 0000000140424965: movzx   edx, word ptr gs:860h
 * 000000014042496E: test    edx, 8
 * 0000000140424974: jz      short loc_14042498D
 * 0000000140424976: mov     eax, 1
 * 000000014042497B: xor     edx, edx
 * 000000014042497D: mov     ecx, 49h ; 'I'
 * 0000000140424982: wrmsr
 * 0000000140424984: movzx   edx, word ptr gs:860h
 * 000000014042498D: test    edx, 2
 * 0000000140424993: jz      loc_140424AD0
 * 0000000140424999: call    loc_140424AAC
 * 000000014042499E: add     rsp, 8
 * 00000001404249A2: call    loc_140424AB5
 * 00000001404249A7: add     rsp, 8
 * 00000001404249AB: call    loc_14042499E
 * 00000001404249B0: add     rsp, 8
 * 00000001404249B4: call    loc_1404249A7
 * 00000001404249B9: add     rsp, 8
 * 00000001404249BD: call    loc_1404249B0
 * 00000001404249C2: add     rsp, 8
 * 00000001404249C6: call    loc_1404249B9
 * 00000001404249CB: add     rsp, 8
 * 00000001404249CF: call    loc_1404249C2
 * 00000001404249D4: add     rsp, 8
 * 00000001404249D8: call    loc_1404249CB
 * 00000001404249DD: add     rsp, 8
 * 00000001404249E1: call    loc_1404249D4
 * 00000001404249E6: add     rsp, 8
 * 00000001404249EA: call    loc_1404249DD
 * 00000001404249EF: add     rsp, 8
 * 00000001404249F3: call    loc_1404249E6
 * 00000001404249F8: add     rsp, 8
 * 00000001404249FC: call    loc_1404249EF
 * 0000000140424A01: add     rsp, 8
 * 0000000140424A05: call    loc_1404249F8
 * 0000000140424A0A: add     rsp, 8
 * 0000000140424A0E: call    loc_140424A01
 * 0000000140424A13: add     rsp, 8
 * 0000000140424A17: call    loc_140424A0A
 * 0000000140424A1C: add     rsp, 8
 * 0000000140424A20: call    loc_140424A13
 * 0000000140424A25: add     rsp, 8
 * 0000000140424A29: call    loc_140424A1C
 * 0000000140424A2E: add     rsp, 8
 * 0000000140424A32: call    loc_140424A25
 * 0000000140424A37: add     rsp, 8
 * 0000000140424A3B: call    loc_140424A2E
 * 0000000140424A40: add     rsp, 8
 * 0000000140424A44: call    loc_140424A37
 * 0000000140424A49: add     rsp, 8
 * 0000000140424A4D: call    loc_140424A40
 * 0000000140424A52: add     rsp, 8
 * 0000000140424A56: call    loc_140424A49
 * 0000000140424A5B: add     rsp, 8
 * 0000000140424A5F: call    loc_140424A52
 * 0000000140424A64: add     rsp, 8
 * 0000000140424A68: call    loc_140424A5B
 * 0000000140424A6D: add     rsp, 8
 * 0000000140424A71: call    loc_140424A64
 * 0000000140424A76: add     rsp, 8
 * 0000000140424A7A: call    loc_140424A6D
 * 0000000140424A7F: add     rsp, 8
 * 0000000140424A83: call    loc_140424A76
 * 0000000140424A88: add     rsp, 8
 * 0000000140424A8C: call    loc_140424A7F
 * 0000000140424A91: add     rsp, 8
 * 0000000140424A95: call    loc_140424A88
 * 0000000140424A9A: add     rsp, 8
 * 0000000140424A9E: call    loc_140424A91
 * 0000000140424AA3: add     rsp, 8
 * 0000000140424AA7: call    loc_140424A9A
 * 0000000140424AAC: add     rsp, 8
 * 0000000140424AB0: call    loc_140424AA3
 * 0000000140424AB5: add     rsp, 8
 * 0000000140424AB9: mov     eax, 0DADAh
 * 0000000140424ABE: test    byte ptr gs:862h, 8
 * 0000000140424AC7: jz      short loc_140424AD0
 * 0000000140424AC9: mov     al, 20h ; ' '
 * 0000000140424ACB: incsspq rax
 * 0000000140424AD0: test    edx, 200h
 * 0000000140424AD6: jz      short loc_140424ADD
 * 0000000140424AD8: call    KiFlushBhbDuringTrapEntryOrExit
 * 0000000140424ADD: lfence
 * 0000000140424AE0: mov     byte ptr gs:856h, 0
 * 0000000140424AE9: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 0000000140424AF0: jz      short loc_140424B11
 * 0000000140424AF2: mov     ecx, 6A7h
 * 0000000140424AF7: rdmsr
 * 0000000140424AF9: cmp     edx, 0
 * 0000000140424AFC: jz      short loc_140424B11
 * 0000000140424AFE: mov     ecx, edx
 * 0000000140424B00: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 0000000140424B06: cmp     edx, ecx
 * 0000000140424B08: jz      short loc_140424B11
 * 0000000140424B0A: mov     ecx, 6A7h
 * 0000000140424B0F: wrmsr
 * 0000000140424B11: test    byte ptr [r10+3], 3
 * 0000000140424B16: mov     word ptr [rbp+80h], 0
 * 0000000140424B1F: jz      short loc_140424B26
 * 0000000140424B21: call    KiSaveDebugRegisterState
 * 0000000140424B26: cld
 * 0000000140424B27: stmxcsr dword ptr [rbp-54h]
 * 0000000140424B2B: ldmxcsr dword ptr gs:180h
 * 0000000140424B34: movaps  xmmword ptr [rbp-10h], xmm0
 * 0000000140424B38: movaps  xmmword ptr [rbp+0], xmm1
 * 0000000140424B3C: movaps  xmmword ptr [rbp+10h], xmm2
 * 0000000140424B40: movaps  xmmword ptr [rbp+20h], xmm3
 * 0000000140424B44: movaps  xmmword ptr [rbp+30h], xmm4
 * 0000000140424B48: movaps  xmmword ptr [rbp+40h], xmm5
 * 0000000140424B4C: cmp     byte ptr gs:82DAh, 0
 * 0000000140424B55: jz      short loc_140424B5C
 * 0000000140424B57: call    KeWakeProcessor
 * 0000000140424B5C: lea     rax, ExpInterlockedPopEntrySListResume
 * 0000000140424B63: cmp     rax, [rbp+0E8h]
 * 0000000140424B6A: jnb     short loc_140424B85
 * 0000000140424B6C: lea     rax, ExpInterlockedPopEntrySListEnd
 * 0000000140424B73: cmp     rax, [rbp+0E8h]
 * 0000000140424B7A: jb      short loc_140424B85
 * 0000000140424B7C: lea     rcx, [rbp-80h]
 * 0000000140424B80: call    KiCheckForSListAddress
 * 0000000140424B85: xor     esi, esi
 * 0000000140424B87: inc     dword ptr gs:82C0h
 * 0000000140424B8F: jmp     KiHvInterruptDispatch
 */
