/*
 * XREFs of KiVmbusInterrupt3 @ 0x140426010
 * Callers:
 *     KiVmbusInterrupt3Shadow @ 0x140AF71C0 (KiVmbusInterrupt3Shadow.c)
 * Callees:
 *     KiCheckForSListAddress @ 0x140310070 (KiCheckForSListAddress.c)
 *     KeWakeProcessor @ 0x140341B10 (KeWakeProcessor.c)
 *     KiSaveDebugRegisterState @ 0x14041F330 (KiSaveDebugRegisterState.c)
 *     KiVmbusInterrupt3 @ 0x140426010 (KiVmbusInterrupt3.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140435700 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiVmbusInterrupt3 @ 0x140426010
 * Reason: Hex-Rays returned no pseudocode for 0x140426010
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140426010: push    4
 * 0000000140426012: push    rbp
 * 0000000140426013: push    rsi
 * 0000000140426014: sub     rsp, 150h
 * 000000014042601B: lea     rbp, [rsp+168h+var_E8]
 * 0000000140426023: mov     byte ptr [rbp-55h], 0
 * 0000000140426027: mov     [rbp-50h], rax
 * 000000014042602B: mov     [rbp-48h], rcx
 * 000000014042602F: mov     [rbp-40h], rdx
 * 0000000140426033: mov     [rbp-38h], r8
 * 0000000140426037: mov     [rbp-30h], r9
 * 000000014042603B: mov     [rbp-28h], r10
 * 000000014042603F: mov     [rbp-20h], r11
 * 0000000140426043: test    byte ptr [rbp+0F0h], 1
 * 000000014042604A: jnz     short loc_140426086
 * 000000014042604C: xor     edx, edx
 * 000000014042604E: rdsspq  rdx
 * 0000000140426053: mov     [rbp+58h], rdx
 * 0000000140426057: lfence
 * 000000014042605A: test    word ptr gs:860h, 1
 * 0000000140426065: jnz     short loc_14042606F
 * 0000000140426067: lfence
 * 000000014042606A: jmp     loc_1404262F6
 * 000000014042606F: movzx   eax, word ptr gs:864h
 * 0000000140426078: mov     ecx, 48h ; 'H'
 * 000000014042607D: xor     edx, edx
 * 000000014042607F: wrmsr
 * 0000000140426081: jmp     loc_1404262F6
 * 0000000140426086: test    cs:KiKvaShadow, 1
 * 000000014042608D: jnz     short loc_140426092
 * 000000014042608F: swapgs
 * 0000000140426092: lfence
 * 0000000140426095: mov     rcx, gs:95A8h
 * 000000014042609E: test    rcx, rcx
 * 00000001404260A1: jz      short loc_1404260C2
 * 00000001404260A3: rdsspq  rdx
 * 00000001404260A8: mov     r10, gs:95A0h
 * 00000001404260B1: add     r10, 8
 * 00000001404260B5: cmp     rdx, r10
 * 00000001404260B8: jnz     short loc_1404260C2
 * 00000001404260BA: rstorssp qword ptr [rcx]
 * 00000001404260BE: saveprevssp
 * 00000001404260C2: mov     r10, gs:188h
 * 00000001404260CB: mov     rcx, gs:188h
 * 00000001404260D4: mov     rcx, [rcx+220h]
 * 00000001404260DB: mov     rcx, [rcx+9E0h]
 * 00000001404260E2: mov     gs:858h, rcx
 * 00000001404260EB: mov     cx, gs:850h
 * 00000001404260F4: mov     gs:852h, cx
 * 00000001404260FD: mov     cx, gs:860h
 * 0000000140426106: mov     gs:854h, cx
 * 000000014042610F: movzx   eax, word ptr gs:866h
 * 0000000140426118: cmp     gs:864h, ax
 * 0000000140426121: jz      short loc_140426135
 * 0000000140426123: mov     gs:864h, ax
 * 000000014042612C: mov     ecx, 48h ; 'H'
 * 0000000140426131: xor     edx, edx
 * 0000000140426133: wrmsr
 * 0000000140426135: movzx   edx, word ptr gs:860h
 * 000000014042613E: test    edx, 8
 * 0000000140426144: jz      short loc_14042615D
 * 0000000140426146: mov     eax, 1
 * 000000014042614B: xor     edx, edx
 * 000000014042614D: mov     ecx, 49h ; 'I'
 * 0000000140426152: wrmsr
 * 0000000140426154: movzx   edx, word ptr gs:860h
 * 000000014042615D: test    edx, 2
 * 0000000140426163: jz      loc_1404262A0
 * 0000000140426169: call    loc_14042627C
 * 000000014042616E: add     rsp, 8
 * 0000000140426172: call    loc_140426285
 * 0000000140426177: add     rsp, 8
 * 000000014042617B: call    loc_14042616E
 * 0000000140426180: add     rsp, 8
 * 0000000140426184: call    loc_140426177
 * 0000000140426189: add     rsp, 8
 * 000000014042618D: call    loc_140426180
 * 0000000140426192: add     rsp, 8
 * 0000000140426196: call    loc_140426189
 * 000000014042619B: add     rsp, 8
 * 000000014042619F: call    loc_140426192
 * 00000001404261A4: add     rsp, 8
 * 00000001404261A8: call    loc_14042619B
 * 00000001404261AD: add     rsp, 8
 * 00000001404261B1: call    loc_1404261A4
 * 00000001404261B6: add     rsp, 8
 * 00000001404261BA: call    loc_1404261AD
 * 00000001404261BF: add     rsp, 8
 * 00000001404261C3: call    loc_1404261B6
 * 00000001404261C8: add     rsp, 8
 * 00000001404261CC: call    loc_1404261BF
 * 00000001404261D1: add     rsp, 8
 * 00000001404261D5: call    loc_1404261C8
 * 00000001404261DA: add     rsp, 8
 * 00000001404261DE: call    loc_1404261D1
 * 00000001404261E3: add     rsp, 8
 * 00000001404261E7: call    loc_1404261DA
 * 00000001404261EC: add     rsp, 8
 * 00000001404261F0: call    loc_1404261E3
 * 00000001404261F5: add     rsp, 8
 * 00000001404261F9: call    loc_1404261EC
 * 00000001404261FE: add     rsp, 8
 * 0000000140426202: call    loc_1404261F5
 * 0000000140426207: add     rsp, 8
 * 000000014042620B: call    loc_1404261FE
 * 0000000140426210: add     rsp, 8
 * 0000000140426214: call    loc_140426207
 * 0000000140426219: add     rsp, 8
 * 000000014042621D: call    loc_140426210
 * 0000000140426222: add     rsp, 8
 * 0000000140426226: call    loc_140426219
 * 000000014042622B: add     rsp, 8
 * 000000014042622F: call    loc_140426222
 * 0000000140426234: add     rsp, 8
 * 0000000140426238: call    loc_14042622B
 * 000000014042623D: add     rsp, 8
 * 0000000140426241: call    loc_140426234
 * 0000000140426246: add     rsp, 8
 * 000000014042624A: call    loc_14042623D
 * 000000014042624F: add     rsp, 8
 * 0000000140426253: call    loc_140426246
 * 0000000140426258: add     rsp, 8
 * 000000014042625C: call    loc_14042624F
 * 0000000140426261: add     rsp, 8
 * 0000000140426265: call    loc_140426258
 * 000000014042626A: add     rsp, 8
 * 000000014042626E: call    loc_140426261
 * 0000000140426273: add     rsp, 8
 * 0000000140426277: call    loc_14042626A
 * 000000014042627C: add     rsp, 8
 * 0000000140426280: call    loc_140426273
 * 0000000140426285: add     rsp, 8
 * 0000000140426289: mov     eax, 0DADAh
 * 000000014042628E: test    byte ptr gs:862h, 8
 * 0000000140426297: jz      short loc_1404262A0
 * 0000000140426299: mov     al, 20h ; ' '
 * 000000014042629B: incsspq rax
 * 00000001404262A0: test    edx, 200h
 * 00000001404262A6: jz      short loc_1404262AD
 * 00000001404262A8: call    KiFlushBhbDuringTrapEntryOrExit
 * 00000001404262AD: lfence
 * 00000001404262B0: mov     byte ptr gs:856h, 0
 * 00000001404262B9: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 00000001404262C0: jz      short loc_1404262E1
 * 00000001404262C2: mov     ecx, 6A7h
 * 00000001404262C7: rdmsr
 * 00000001404262C9: cmp     edx, 0
 * 00000001404262CC: jz      short loc_1404262E1
 * 00000001404262CE: mov     ecx, edx
 * 00000001404262D0: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 00000001404262D6: cmp     edx, ecx
 * 00000001404262D8: jz      short loc_1404262E1
 * 00000001404262DA: mov     ecx, 6A7h
 * 00000001404262DF: wrmsr
 * 00000001404262E1: test    byte ptr [r10+3], 3
 * 00000001404262E6: mov     word ptr [rbp+80h], 0
 * 00000001404262EF: jz      short loc_1404262F6
 * 00000001404262F1: call    KiSaveDebugRegisterState
 * 00000001404262F6: cld
 * 00000001404262F7: stmxcsr dword ptr [rbp-54h]
 * 00000001404262FB: ldmxcsr dword ptr gs:180h
 * 0000000140426304: movaps  xmmword ptr [rbp-10h], xmm0
 * 0000000140426308: movaps  xmmword ptr [rbp+0], xmm1
 * 000000014042630C: movaps  xmmword ptr [rbp+10h], xmm2
 * 0000000140426310: movaps  xmmword ptr [rbp+20h], xmm3
 * 0000000140426314: movaps  xmmword ptr [rbp+30h], xmm4
 * 0000000140426318: movaps  xmmword ptr [rbp+40h], xmm5
 * 000000014042631C: cmp     byte ptr gs:82DAh, 0
 * 0000000140426325: jz      short loc_14042632C
 * 0000000140426327: call    KeWakeProcessor
 * 000000014042632C: lea     rax, ExpInterlockedPopEntrySListResume
 * 0000000140426333: cmp     rax, [rbp+0E8h]
 * 000000014042633A: jnb     short loc_140426355
 * 000000014042633C: lea     rax, ExpInterlockedPopEntrySListEnd
 * 0000000140426343: cmp     rax, [rbp+0E8h]
 * 000000014042634A: jb      short loc_140426355
 * 000000014042634C: lea     rcx, [rbp-80h]
 * 0000000140426350: call    KiCheckForSListAddress
 * 0000000140426355: xor     esi, esi
 * 0000000140426357: inc     dword ptr gs:82C0h
 * 000000014042635F: jmp     KiVmbusInterruptDispatch
 */
