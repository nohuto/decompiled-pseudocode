/*
 * XREFs of KiVmbusInterrupt2 @ 0x140425260
 * Callers:
 *     KiVmbusInterrupt2Shadow @ 0x140AF8140 (KiVmbusInterrupt2Shadow.c)
 * Callees:
 *     KiCheckForSListAddress @ 0x14030FC00 (KiCheckForSListAddress.c)
 *     KeWakeProcessor @ 0x140341390 (KeWakeProcessor.c)
 *     KiSaveDebugRegisterState @ 0x14041E8E0 (KiSaveDebugRegisterState.c)
 *     KiVmbusInterrupt2 @ 0x140425260 (KiVmbusInterrupt2.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140434D00 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiVmbusInterrupt2 @ 0x140425260
 * Reason: Hex-Rays returned no pseudocode for 0x140425260
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140425260: push    3
 * 0000000140425262: push    rbp
 * 0000000140425263: push    rsi
 * 0000000140425264: sub     rsp, 150h
 * 000000014042526B: lea     rbp, [rsp+168h+var_E8]
 * 0000000140425273: mov     byte ptr [rbp-55h], 0
 * 0000000140425277: mov     [rbp-50h], rax
 * 000000014042527B: mov     [rbp-48h], rcx
 * 000000014042527F: mov     [rbp-40h], rdx
 * 0000000140425283: mov     [rbp-38h], r8
 * 0000000140425287: mov     [rbp-30h], r9
 * 000000014042528B: mov     [rbp-28h], r10
 * 000000014042528F: mov     [rbp-20h], r11
 * 0000000140425293: test    byte ptr [rbp+0F0h], 1
 * 000000014042529A: jnz     short loc_1404252D6
 * 000000014042529C: xor     edx, edx
 * 000000014042529E: rdsspq  rdx
 * 00000001404252A3: mov     [rbp+58h], rdx
 * 00000001404252A7: lfence
 * 00000001404252AA: test    word ptr gs:860h, 1
 * 00000001404252B5: jnz     short loc_1404252BF
 * 00000001404252B7: lfence
 * 00000001404252BA: jmp     loc_140425546
 * 00000001404252BF: movzx   eax, word ptr gs:864h
 * 00000001404252C8: mov     ecx, 48h ; 'H'
 * 00000001404252CD: xor     edx, edx
 * 00000001404252CF: wrmsr
 * 00000001404252D1: jmp     loc_140425546
 * 00000001404252D6: test    cs:KiKvaShadow, 1
 * 00000001404252DD: jnz     short loc_1404252E2
 * 00000001404252DF: swapgs
 * 00000001404252E2: lfence
 * 00000001404252E5: mov     rcx, gs:95A8h
 * 00000001404252EE: test    rcx, rcx
 * 00000001404252F1: jz      short loc_140425312
 * 00000001404252F3: rdsspq  rdx
 * 00000001404252F8: mov     r10, gs:95A0h
 * 0000000140425301: add     r10, 8
 * 0000000140425305: cmp     rdx, r10
 * 0000000140425308: jnz     short loc_140425312
 * 000000014042530A: rstorssp qword ptr [rcx]
 * 000000014042530E: saveprevssp
 * 0000000140425312: mov     r10, gs:188h
 * 000000014042531B: mov     rcx, gs:188h
 * 0000000140425324: mov     rcx, [rcx+220h]
 * 000000014042532B: mov     rcx, [rcx+9E0h]
 * 0000000140425332: mov     gs:858h, rcx
 * 000000014042533B: mov     cx, gs:850h
 * 0000000140425344: mov     gs:852h, cx
 * 000000014042534D: mov     cx, gs:860h
 * 0000000140425356: mov     gs:854h, cx
 * 000000014042535F: movzx   eax, word ptr gs:866h
 * 0000000140425368: cmp     gs:864h, ax
 * 0000000140425371: jz      short loc_140425385
 * 0000000140425373: mov     gs:864h, ax
 * 000000014042537C: mov     ecx, 48h ; 'H'
 * 0000000140425381: xor     edx, edx
 * 0000000140425383: wrmsr
 * 0000000140425385: movzx   edx, word ptr gs:860h
 * 000000014042538E: test    edx, 8
 * 0000000140425394: jz      short loc_1404253AD
 * 0000000140425396: mov     eax, 1
 * 000000014042539B: xor     edx, edx
 * 000000014042539D: mov     ecx, 49h ; 'I'
 * 00000001404253A2: wrmsr
 * 00000001404253A4: movzx   edx, word ptr gs:860h
 * 00000001404253AD: test    edx, 2
 * 00000001404253B3: jz      loc_1404254F0
 * 00000001404253B9: call    loc_1404254CC
 * 00000001404253BE: add     rsp, 8
 * 00000001404253C2: call    loc_1404254D5
 * 00000001404253C7: add     rsp, 8
 * 00000001404253CB: call    loc_1404253BE
 * 00000001404253D0: add     rsp, 8
 * 00000001404253D4: call    loc_1404253C7
 * 00000001404253D9: add     rsp, 8
 * 00000001404253DD: call    loc_1404253D0
 * 00000001404253E2: add     rsp, 8
 * 00000001404253E6: call    loc_1404253D9
 * 00000001404253EB: add     rsp, 8
 * 00000001404253EF: call    loc_1404253E2
 * 00000001404253F4: add     rsp, 8
 * 00000001404253F8: call    loc_1404253EB
 * 00000001404253FD: add     rsp, 8
 * 0000000140425401: call    loc_1404253F4
 * 0000000140425406: add     rsp, 8
 * 000000014042540A: call    loc_1404253FD
 * 000000014042540F: add     rsp, 8
 * 0000000140425413: call    loc_140425406
 * 0000000140425418: add     rsp, 8
 * 000000014042541C: call    loc_14042540F
 * 0000000140425421: add     rsp, 8
 * 0000000140425425: call    loc_140425418
 * 000000014042542A: add     rsp, 8
 * 000000014042542E: call    loc_140425421
 * 0000000140425433: add     rsp, 8
 * 0000000140425437: call    loc_14042542A
 * 000000014042543C: add     rsp, 8
 * 0000000140425440: call    loc_140425433
 * 0000000140425445: add     rsp, 8
 * 0000000140425449: call    loc_14042543C
 * 000000014042544E: add     rsp, 8
 * 0000000140425452: call    loc_140425445
 * 0000000140425457: add     rsp, 8
 * 000000014042545B: call    loc_14042544E
 * 0000000140425460: add     rsp, 8
 * 0000000140425464: call    loc_140425457
 * 0000000140425469: add     rsp, 8
 * 000000014042546D: call    loc_140425460
 * 0000000140425472: add     rsp, 8
 * 0000000140425476: call    loc_140425469
 * 000000014042547B: add     rsp, 8
 * 000000014042547F: call    loc_140425472
 * 0000000140425484: add     rsp, 8
 * 0000000140425488: call    loc_14042547B
 * 000000014042548D: add     rsp, 8
 * 0000000140425491: call    loc_140425484
 * 0000000140425496: add     rsp, 8
 * 000000014042549A: call    loc_14042548D
 * 000000014042549F: add     rsp, 8
 * 00000001404254A3: call    loc_140425496
 * 00000001404254A8: add     rsp, 8
 * 00000001404254AC: call    loc_14042549F
 * 00000001404254B1: add     rsp, 8
 * 00000001404254B5: call    loc_1404254A8
 * 00000001404254BA: add     rsp, 8
 * 00000001404254BE: call    loc_1404254B1
 * 00000001404254C3: add     rsp, 8
 * 00000001404254C7: call    loc_1404254BA
 * 00000001404254CC: add     rsp, 8
 * 00000001404254D0: call    loc_1404254C3
 * 00000001404254D5: add     rsp, 8
 * 00000001404254D9: mov     eax, 0DADAh
 * 00000001404254DE: test    byte ptr gs:862h, 8
 * 00000001404254E7: jz      short loc_1404254F0
 * 00000001404254E9: mov     al, 20h ; ' '
 * 00000001404254EB: incsspq rax
 * 00000001404254F0: test    edx, 200h
 * 00000001404254F6: jz      short loc_1404254FD
 * 00000001404254F8: call    KiFlushBhbDuringTrapEntryOrExit
 * 00000001404254FD: lfence
 * 0000000140425500: mov     byte ptr gs:856h, 0
 * 0000000140425509: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 0000000140425510: jz      short loc_140425531
 * 0000000140425512: mov     ecx, 6A7h
 * 0000000140425517: rdmsr
 * 0000000140425519: cmp     edx, 0
 * 000000014042551C: jz      short loc_140425531
 * 000000014042551E: mov     ecx, edx
 * 0000000140425520: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 0000000140425526: cmp     edx, ecx
 * 0000000140425528: jz      short loc_140425531
 * 000000014042552A: mov     ecx, 6A7h
 * 000000014042552F: wrmsr
 * 0000000140425531: test    byte ptr [r10+3], 3
 * 0000000140425536: mov     word ptr [rbp+80h], 0
 * 000000014042553F: jz      short loc_140425546
 * 0000000140425541: call    KiSaveDebugRegisterState
 * 0000000140425546: cld
 * 0000000140425547: stmxcsr dword ptr [rbp-54h]
 * 000000014042554B: ldmxcsr dword ptr gs:180h
 * 0000000140425554: movaps  xmmword ptr [rbp-10h], xmm0
 * 0000000140425558: movaps  xmmword ptr [rbp+0], xmm1
 * 000000014042555C: movaps  xmmword ptr [rbp+10h], xmm2
 * 0000000140425560: movaps  xmmword ptr [rbp+20h], xmm3
 * 0000000140425564: movaps  xmmword ptr [rbp+30h], xmm4
 * 0000000140425568: movaps  xmmword ptr [rbp+40h], xmm5
 * 000000014042556C: cmp     byte ptr gs:82DAh, 0
 * 0000000140425575: jz      short loc_14042557C
 * 0000000140425577: call    KeWakeProcessor
 * 000000014042557C: lea     rax, ExpInterlockedPopEntrySListResume
 * 0000000140425583: cmp     rax, [rbp+0E8h]
 * 000000014042558A: jnb     short loc_1404255A5
 * 000000014042558C: lea     rax, ExpInterlockedPopEntrySListEnd
 * 0000000140425593: cmp     rax, [rbp+0E8h]
 * 000000014042559A: jb      short loc_1404255A5
 * 000000014042559C: lea     rcx, [rbp-80h]
 * 00000001404255A0: call    KiCheckForSListAddress
 * 00000001404255A5: xor     esi, esi
 * 00000001404255A7: inc     dword ptr gs:82C0h
 * 00000001404255AF: jmp     KiVmbusInterruptDispatch
 */
