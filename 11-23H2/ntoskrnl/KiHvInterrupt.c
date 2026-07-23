/*
 * XREFs of KiHvInterrupt @ 0x140425290
 * Callers:
 *     KiHvInterruptShadow @ 0x140AF6FC0 (KiHvInterruptShadow.c)
 * Callees:
 *     KiCheckForSListAddress @ 0x140310070 (KiCheckForSListAddress.c)
 *     KeWakeProcessor @ 0x140341B10 (KeWakeProcessor.c)
 *     KiSaveDebugRegisterState @ 0x14041F330 (KiSaveDebugRegisterState.c)
 *     KiHvInterrupt @ 0x140425290 (KiHvInterrupt.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140435700 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiHvInterrupt @ 0x140425290
 * Reason: Hex-Rays returned no pseudocode for 0x140425290
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140425290: push    0
 * 0000000140425292: push    rbp
 * 0000000140425293: push    rsi
 * 0000000140425294: sub     rsp, 150h
 * 000000014042529B: lea     rbp, [rsp+168h+var_E8]
 * 00000001404252A3: mov     byte ptr [rbp-55h], 0
 * 00000001404252A7: mov     [rbp-50h], rax
 * 00000001404252AB: mov     [rbp-48h], rcx
 * 00000001404252AF: mov     [rbp-40h], rdx
 * 00000001404252B3: mov     [rbp-38h], r8
 * 00000001404252B7: mov     [rbp-30h], r9
 * 00000001404252BB: mov     [rbp-28h], r10
 * 00000001404252BF: mov     [rbp-20h], r11
 * 00000001404252C3: test    byte ptr [rbp+0F0h], 1
 * 00000001404252CA: jnz     short loc_140425306
 * 00000001404252CC: xor     edx, edx
 * 00000001404252CE: rdsspq  rdx
 * 00000001404252D3: mov     [rbp+58h], rdx
 * 00000001404252D7: lfence
 * 00000001404252DA: test    word ptr gs:860h, 1
 * 00000001404252E5: jnz     short loc_1404252EF
 * 00000001404252E7: lfence
 * 00000001404252EA: jmp     loc_140425576
 * 00000001404252EF: movzx   eax, word ptr gs:864h
 * 00000001404252F8: mov     ecx, 48h ; 'H'
 * 00000001404252FD: xor     edx, edx
 * 00000001404252FF: wrmsr
 * 0000000140425301: jmp     loc_140425576
 * 0000000140425306: test    cs:KiKvaShadow, 1
 * 000000014042530D: jnz     short loc_140425312
 * 000000014042530F: swapgs
 * 0000000140425312: lfence
 * 0000000140425315: mov     rcx, gs:95A8h
 * 000000014042531E: test    rcx, rcx
 * 0000000140425321: jz      short loc_140425342
 * 0000000140425323: rdsspq  rdx
 * 0000000140425328: mov     r10, gs:95A0h
 * 0000000140425331: add     r10, 8
 * 0000000140425335: cmp     rdx, r10
 * 0000000140425338: jnz     short loc_140425342
 * 000000014042533A: rstorssp qword ptr [rcx]
 * 000000014042533E: saveprevssp
 * 0000000140425342: mov     r10, gs:188h
 * 000000014042534B: mov     rcx, gs:188h
 * 0000000140425354: mov     rcx, [rcx+220h]
 * 000000014042535B: mov     rcx, [rcx+9E0h]
 * 0000000140425362: mov     gs:858h, rcx
 * 000000014042536B: mov     cx, gs:850h
 * 0000000140425374: mov     gs:852h, cx
 * 000000014042537D: mov     cx, gs:860h
 * 0000000140425386: mov     gs:854h, cx
 * 000000014042538F: movzx   eax, word ptr gs:866h
 * 0000000140425398: cmp     gs:864h, ax
 * 00000001404253A1: jz      short loc_1404253B5
 * 00000001404253A3: mov     gs:864h, ax
 * 00000001404253AC: mov     ecx, 48h ; 'H'
 * 00000001404253B1: xor     edx, edx
 * 00000001404253B3: wrmsr
 * 00000001404253B5: movzx   edx, word ptr gs:860h
 * 00000001404253BE: test    edx, 8
 * 00000001404253C4: jz      short loc_1404253DD
 * 00000001404253C6: mov     eax, 1
 * 00000001404253CB: xor     edx, edx
 * 00000001404253CD: mov     ecx, 49h ; 'I'
 * 00000001404253D2: wrmsr
 * 00000001404253D4: movzx   edx, word ptr gs:860h
 * 00000001404253DD: test    edx, 2
 * 00000001404253E3: jz      loc_140425520
 * 00000001404253E9: call    loc_1404254FC
 * 00000001404253EE: add     rsp, 8
 * 00000001404253F2: call    loc_140425505
 * 00000001404253F7: add     rsp, 8
 * 00000001404253FB: call    loc_1404253EE
 * 0000000140425400: add     rsp, 8
 * 0000000140425404: call    loc_1404253F7
 * 0000000140425409: add     rsp, 8
 * 000000014042540D: call    loc_140425400
 * 0000000140425412: add     rsp, 8
 * 0000000140425416: call    loc_140425409
 * 000000014042541B: add     rsp, 8
 * 000000014042541F: call    loc_140425412
 * 0000000140425424: add     rsp, 8
 * 0000000140425428: call    loc_14042541B
 * 000000014042542D: add     rsp, 8
 * 0000000140425431: call    loc_140425424
 * 0000000140425436: add     rsp, 8
 * 000000014042543A: call    loc_14042542D
 * 000000014042543F: add     rsp, 8
 * 0000000140425443: call    loc_140425436
 * 0000000140425448: add     rsp, 8
 * 000000014042544C: call    loc_14042543F
 * 0000000140425451: add     rsp, 8
 * 0000000140425455: call    loc_140425448
 * 000000014042545A: add     rsp, 8
 * 000000014042545E: call    loc_140425451
 * 0000000140425463: add     rsp, 8
 * 0000000140425467: call    loc_14042545A
 * 000000014042546C: add     rsp, 8
 * 0000000140425470: call    loc_140425463
 * 0000000140425475: add     rsp, 8
 * 0000000140425479: call    loc_14042546C
 * 000000014042547E: add     rsp, 8
 * 0000000140425482: call    loc_140425475
 * 0000000140425487: add     rsp, 8
 * 000000014042548B: call    loc_14042547E
 * 0000000140425490: add     rsp, 8
 * 0000000140425494: call    loc_140425487
 * 0000000140425499: add     rsp, 8
 * 000000014042549D: call    loc_140425490
 * 00000001404254A2: add     rsp, 8
 * 00000001404254A6: call    loc_140425499
 * 00000001404254AB: add     rsp, 8
 * 00000001404254AF: call    loc_1404254A2
 * 00000001404254B4: add     rsp, 8
 * 00000001404254B8: call    loc_1404254AB
 * 00000001404254BD: add     rsp, 8
 * 00000001404254C1: call    loc_1404254B4
 * 00000001404254C6: add     rsp, 8
 * 00000001404254CA: call    loc_1404254BD
 * 00000001404254CF: add     rsp, 8
 * 00000001404254D3: call    loc_1404254C6
 * 00000001404254D8: add     rsp, 8
 * 00000001404254DC: call    loc_1404254CF
 * 00000001404254E1: add     rsp, 8
 * 00000001404254E5: call    loc_1404254D8
 * 00000001404254EA: add     rsp, 8
 * 00000001404254EE: call    loc_1404254E1
 * 00000001404254F3: add     rsp, 8
 * 00000001404254F7: call    loc_1404254EA
 * 00000001404254FC: add     rsp, 8
 * 0000000140425500: call    loc_1404254F3
 * 0000000140425505: add     rsp, 8
 * 0000000140425509: mov     eax, 0DADAh
 * 000000014042550E: test    byte ptr gs:862h, 8
 * 0000000140425517: jz      short loc_140425520
 * 0000000140425519: mov     al, 20h ; ' '
 * 000000014042551B: incsspq rax
 * 0000000140425520: test    edx, 200h
 * 0000000140425526: jz      short loc_14042552D
 * 0000000140425528: call    KiFlushBhbDuringTrapEntryOrExit
 * 000000014042552D: lfence
 * 0000000140425530: mov     byte ptr gs:856h, 0
 * 0000000140425539: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 0000000140425540: jz      short loc_140425561
 * 0000000140425542: mov     ecx, 6A7h
 * 0000000140425547: rdmsr
 * 0000000140425549: cmp     edx, 0
 * 000000014042554C: jz      short loc_140425561
 * 000000014042554E: mov     ecx, edx
 * 0000000140425550: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 0000000140425556: cmp     edx, ecx
 * 0000000140425558: jz      short loc_140425561
 * 000000014042555A: mov     ecx, 6A7h
 * 000000014042555F: wrmsr
 * 0000000140425561: test    byte ptr [r10+3], 3
 * 0000000140425566: mov     word ptr [rbp+80h], 0
 * 000000014042556F: jz      short loc_140425576
 * 0000000140425571: call    KiSaveDebugRegisterState
 * 0000000140425576: cld
 * 0000000140425577: stmxcsr dword ptr [rbp-54h]
 * 000000014042557B: ldmxcsr dword ptr gs:180h
 * 0000000140425584: movaps  xmmword ptr [rbp-10h], xmm0
 * 0000000140425588: movaps  xmmword ptr [rbp+0], xmm1
 * 000000014042558C: movaps  xmmword ptr [rbp+10h], xmm2
 * 0000000140425590: movaps  xmmword ptr [rbp+20h], xmm3
 * 0000000140425594: movaps  xmmword ptr [rbp+30h], xmm4
 * 0000000140425598: movaps  xmmword ptr [rbp+40h], xmm5
 * 000000014042559C: cmp     byte ptr gs:82DAh, 0
 * 00000001404255A5: jz      short loc_1404255AC
 * 00000001404255A7: call    KeWakeProcessor
 * 00000001404255AC: lea     rax, ExpInterlockedPopEntrySListResume
 * 00000001404255B3: cmp     rax, [rbp+0E8h]
 * 00000001404255BA: jnb     short loc_1404255D5
 * 00000001404255BC: lea     rax, ExpInterlockedPopEntrySListEnd
 * 00000001404255C3: cmp     rax, [rbp+0E8h]
 * 00000001404255CA: jb      short loc_1404255D5
 * 00000001404255CC: lea     rcx, [rbp-80h]
 * 00000001404255D0: call    KiCheckForSListAddress
 * 00000001404255D5: xor     esi, esi
 * 00000001404255D7: inc     dword ptr gs:82C0h
 * 00000001404255DF: jmp     KiHvInterruptDispatch
 */
