/*
 * XREFs of KiVmbusInterrupt3 @ 0x1404255C0
 * Callers:
 *     KiVmbusInterrupt3Shadow @ 0x140AF81C0 (KiVmbusInterrupt3Shadow.c)
 * Callees:
 *     KiCheckForSListAddress @ 0x14030FC00 (KiCheckForSListAddress.c)
 *     KeWakeProcessor @ 0x140341390 (KeWakeProcessor.c)
 *     KiSaveDebugRegisterState @ 0x14041E8E0 (KiSaveDebugRegisterState.c)
 *     KiVmbusInterrupt3 @ 0x1404255C0 (KiVmbusInterrupt3.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140434D00 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiVmbusInterrupt3 @ 0x1404255C0
 * Reason: Hex-Rays returned no pseudocode for 0x1404255C0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001404255C0: push    4
 * 00000001404255C2: push    rbp
 * 00000001404255C3: push    rsi
 * 00000001404255C4: sub     rsp, 150h
 * 00000001404255CB: lea     rbp, [rsp+168h+var_E8]
 * 00000001404255D3: mov     byte ptr [rbp-55h], 0
 * 00000001404255D7: mov     [rbp-50h], rax
 * 00000001404255DB: mov     [rbp-48h], rcx
 * 00000001404255DF: mov     [rbp-40h], rdx
 * 00000001404255E3: mov     [rbp-38h], r8
 * 00000001404255E7: mov     [rbp-30h], r9
 * 00000001404255EB: mov     [rbp-28h], r10
 * 00000001404255EF: mov     [rbp-20h], r11
 * 00000001404255F3: test    byte ptr [rbp+0F0h], 1
 * 00000001404255FA: jnz     short loc_140425636
 * 00000001404255FC: xor     edx, edx
 * 00000001404255FE: rdsspq  rdx
 * 0000000140425603: mov     [rbp+58h], rdx
 * 0000000140425607: lfence
 * 000000014042560A: test    word ptr gs:860h, 1
 * 0000000140425615: jnz     short loc_14042561F
 * 0000000140425617: lfence
 * 000000014042561A: jmp     loc_1404258A6
 * 000000014042561F: movzx   eax, word ptr gs:864h
 * 0000000140425628: mov     ecx, 48h ; 'H'
 * 000000014042562D: xor     edx, edx
 * 000000014042562F: wrmsr
 * 0000000140425631: jmp     loc_1404258A6
 * 0000000140425636: test    cs:KiKvaShadow, 1
 * 000000014042563D: jnz     short loc_140425642
 * 000000014042563F: swapgs
 * 0000000140425642: lfence
 * 0000000140425645: mov     rcx, gs:95A8h
 * 000000014042564E: test    rcx, rcx
 * 0000000140425651: jz      short loc_140425672
 * 0000000140425653: rdsspq  rdx
 * 0000000140425658: mov     r10, gs:95A0h
 * 0000000140425661: add     r10, 8
 * 0000000140425665: cmp     rdx, r10
 * 0000000140425668: jnz     short loc_140425672
 * 000000014042566A: rstorssp qword ptr [rcx]
 * 000000014042566E: saveprevssp
 * 0000000140425672: mov     r10, gs:188h
 * 000000014042567B: mov     rcx, gs:188h
 * 0000000140425684: mov     rcx, [rcx+220h]
 * 000000014042568B: mov     rcx, [rcx+9E0h]
 * 0000000140425692: mov     gs:858h, rcx
 * 000000014042569B: mov     cx, gs:850h
 * 00000001404256A4: mov     gs:852h, cx
 * 00000001404256AD: mov     cx, gs:860h
 * 00000001404256B6: mov     gs:854h, cx
 * 00000001404256BF: movzx   eax, word ptr gs:866h
 * 00000001404256C8: cmp     gs:864h, ax
 * 00000001404256D1: jz      short loc_1404256E5
 * 00000001404256D3: mov     gs:864h, ax
 * 00000001404256DC: mov     ecx, 48h ; 'H'
 * 00000001404256E1: xor     edx, edx
 * 00000001404256E3: wrmsr
 * 00000001404256E5: movzx   edx, word ptr gs:860h
 * 00000001404256EE: test    edx, 8
 * 00000001404256F4: jz      short loc_14042570D
 * 00000001404256F6: mov     eax, 1
 * 00000001404256FB: xor     edx, edx
 * 00000001404256FD: mov     ecx, 49h ; 'I'
 * 0000000140425702: wrmsr
 * 0000000140425704: movzx   edx, word ptr gs:860h
 * 000000014042570D: test    edx, 2
 * 0000000140425713: jz      loc_140425850
 * 0000000140425719: call    loc_14042582C
 * 000000014042571E: add     rsp, 8
 * 0000000140425722: call    loc_140425835
 * 0000000140425727: add     rsp, 8
 * 000000014042572B: call    loc_14042571E
 * 0000000140425730: add     rsp, 8
 * 0000000140425734: call    loc_140425727
 * 0000000140425739: add     rsp, 8
 * 000000014042573D: call    loc_140425730
 * 0000000140425742: add     rsp, 8
 * 0000000140425746: call    loc_140425739
 * 000000014042574B: add     rsp, 8
 * 000000014042574F: call    loc_140425742
 * 0000000140425754: add     rsp, 8
 * 0000000140425758: call    loc_14042574B
 * 000000014042575D: add     rsp, 8
 * 0000000140425761: call    loc_140425754
 * 0000000140425766: add     rsp, 8
 * 000000014042576A: call    loc_14042575D
 * 000000014042576F: add     rsp, 8
 * 0000000140425773: call    loc_140425766
 * 0000000140425778: add     rsp, 8
 * 000000014042577C: call    loc_14042576F
 * 0000000140425781: add     rsp, 8
 * 0000000140425785: call    loc_140425778
 * 000000014042578A: add     rsp, 8
 * 000000014042578E: call    loc_140425781
 * 0000000140425793: add     rsp, 8
 * 0000000140425797: call    loc_14042578A
 * 000000014042579C: add     rsp, 8
 * 00000001404257A0: call    loc_140425793
 * 00000001404257A5: add     rsp, 8
 * 00000001404257A9: call    loc_14042579C
 * 00000001404257AE: add     rsp, 8
 * 00000001404257B2: call    loc_1404257A5
 * 00000001404257B7: add     rsp, 8
 * 00000001404257BB: call    loc_1404257AE
 * 00000001404257C0: add     rsp, 8
 * 00000001404257C4: call    loc_1404257B7
 * 00000001404257C9: add     rsp, 8
 * 00000001404257CD: call    loc_1404257C0
 * 00000001404257D2: add     rsp, 8
 * 00000001404257D6: call    loc_1404257C9
 * 00000001404257DB: add     rsp, 8
 * 00000001404257DF: call    loc_1404257D2
 * 00000001404257E4: add     rsp, 8
 * 00000001404257E8: call    loc_1404257DB
 * 00000001404257ED: add     rsp, 8
 * 00000001404257F1: call    loc_1404257E4
 * 00000001404257F6: add     rsp, 8
 * 00000001404257FA: call    loc_1404257ED
 * 00000001404257FF: add     rsp, 8
 * 0000000140425803: call    loc_1404257F6
 * 0000000140425808: add     rsp, 8
 * 000000014042580C: call    loc_1404257FF
 * 0000000140425811: add     rsp, 8
 * 0000000140425815: call    loc_140425808
 * 000000014042581A: add     rsp, 8
 * 000000014042581E: call    loc_140425811
 * 0000000140425823: add     rsp, 8
 * 0000000140425827: call    loc_14042581A
 * 000000014042582C: add     rsp, 8
 * 0000000140425830: call    loc_140425823
 * 0000000140425835: add     rsp, 8
 * 0000000140425839: mov     eax, 0DADAh
 * 000000014042583E: test    byte ptr gs:862h, 8
 * 0000000140425847: jz      short loc_140425850
 * 0000000140425849: mov     al, 20h ; ' '
 * 000000014042584B: incsspq rax
 * 0000000140425850: test    edx, 200h
 * 0000000140425856: jz      short loc_14042585D
 * 0000000140425858: call    KiFlushBhbDuringTrapEntryOrExit
 * 000000014042585D: lfence
 * 0000000140425860: mov     byte ptr gs:856h, 0
 * 0000000140425869: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 0000000140425870: jz      short loc_140425891
 * 0000000140425872: mov     ecx, 6A7h
 * 0000000140425877: rdmsr
 * 0000000140425879: cmp     edx, 0
 * 000000014042587C: jz      short loc_140425891
 * 000000014042587E: mov     ecx, edx
 * 0000000140425880: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 0000000140425886: cmp     edx, ecx
 * 0000000140425888: jz      short loc_140425891
 * 000000014042588A: mov     ecx, 6A7h
 * 000000014042588F: wrmsr
 * 0000000140425891: test    byte ptr [r10+3], 3
 * 0000000140425896: mov     word ptr [rbp+80h], 0
 * 000000014042589F: jz      short loc_1404258A6
 * 00000001404258A1: call    KiSaveDebugRegisterState
 * 00000001404258A6: cld
 * 00000001404258A7: stmxcsr dword ptr [rbp-54h]
 * 00000001404258AB: ldmxcsr dword ptr gs:180h
 * 00000001404258B4: movaps  xmmword ptr [rbp-10h], xmm0
 * 00000001404258B8: movaps  xmmword ptr [rbp+0], xmm1
 * 00000001404258BC: movaps  xmmword ptr [rbp+10h], xmm2
 * 00000001404258C0: movaps  xmmword ptr [rbp+20h], xmm3
 * 00000001404258C4: movaps  xmmword ptr [rbp+30h], xmm4
 * 00000001404258C8: movaps  xmmword ptr [rbp+40h], xmm5
 * 00000001404258CC: cmp     byte ptr gs:82DAh, 0
 * 00000001404258D5: jz      short loc_1404258DC
 * 00000001404258D7: call    KeWakeProcessor
 * 00000001404258DC: lea     rax, ExpInterlockedPopEntrySListResume
 * 00000001404258E3: cmp     rax, [rbp+0E8h]
 * 00000001404258EA: jnb     short loc_140425905
 * 00000001404258EC: lea     rax, ExpInterlockedPopEntrySListEnd
 * 00000001404258F3: cmp     rax, [rbp+0E8h]
 * 00000001404258FA: jb      short loc_140425905
 * 00000001404258FC: lea     rcx, [rbp-80h]
 * 0000000140425900: call    KiCheckForSListAddress
 * 0000000140425905: xor     esi, esi
 * 0000000140425907: inc     dword ptr gs:82C0h
 * 000000014042590F: jmp     KiVmbusInterruptDispatch
 */
