/*
 * XREFs of KiVmbusInterrupt0 @ 0x1404255F0
 * Callers:
 *     KiVmbusInterrupt0Shadow @ 0x140AF7040 (KiVmbusInterrupt0Shadow.c)
 * Callees:
 *     KiCheckForSListAddress @ 0x140310070 (KiCheckForSListAddress.c)
 *     KeWakeProcessor @ 0x140341B10 (KeWakeProcessor.c)
 *     KiSaveDebugRegisterState @ 0x14041F330 (KiSaveDebugRegisterState.c)
 *     KiVmbusInterrupt0 @ 0x1404255F0 (KiVmbusInterrupt0.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140435700 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiVmbusInterrupt0 @ 0x1404255F0
 * Reason: Hex-Rays returned no pseudocode for 0x1404255F0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001404255F0: push    1
 * 00000001404255F2: push    rbp
 * 00000001404255F3: push    rsi
 * 00000001404255F4: sub     rsp, 150h
 * 00000001404255FB: lea     rbp, [rsp+168h+var_E8]
 * 0000000140425603: mov     byte ptr [rbp-55h], 0
 * 0000000140425607: mov     [rbp-50h], rax
 * 000000014042560B: mov     [rbp-48h], rcx
 * 000000014042560F: mov     [rbp-40h], rdx
 * 0000000140425613: mov     [rbp-38h], r8
 * 0000000140425617: mov     [rbp-30h], r9
 * 000000014042561B: mov     [rbp-28h], r10
 * 000000014042561F: mov     [rbp-20h], r11
 * 0000000140425623: test    byte ptr [rbp+0F0h], 1
 * 000000014042562A: jnz     short loc_140425666
 * 000000014042562C: xor     edx, edx
 * 000000014042562E: rdsspq  rdx
 * 0000000140425633: mov     [rbp+58h], rdx
 * 0000000140425637: lfence
 * 000000014042563A: test    word ptr gs:860h, 1
 * 0000000140425645: jnz     short loc_14042564F
 * 0000000140425647: lfence
 * 000000014042564A: jmp     loc_1404258D6
 * 000000014042564F: movzx   eax, word ptr gs:864h
 * 0000000140425658: mov     ecx, 48h ; 'H'
 * 000000014042565D: xor     edx, edx
 * 000000014042565F: wrmsr
 * 0000000140425661: jmp     loc_1404258D6
 * 0000000140425666: test    cs:KiKvaShadow, 1
 * 000000014042566D: jnz     short loc_140425672
 * 000000014042566F: swapgs
 * 0000000140425672: lfence
 * 0000000140425675: mov     rcx, gs:95A8h
 * 000000014042567E: test    rcx, rcx
 * 0000000140425681: jz      short loc_1404256A2
 * 0000000140425683: rdsspq  rdx
 * 0000000140425688: mov     r10, gs:95A0h
 * 0000000140425691: add     r10, 8
 * 0000000140425695: cmp     rdx, r10
 * 0000000140425698: jnz     short loc_1404256A2
 * 000000014042569A: rstorssp qword ptr [rcx]
 * 000000014042569E: saveprevssp
 * 00000001404256A2: mov     r10, gs:188h
 * 00000001404256AB: mov     rcx, gs:188h
 * 00000001404256B4: mov     rcx, [rcx+220h]
 * 00000001404256BB: mov     rcx, [rcx+9E0h]
 * 00000001404256C2: mov     gs:858h, rcx
 * 00000001404256CB: mov     cx, gs:850h
 * 00000001404256D4: mov     gs:852h, cx
 * 00000001404256DD: mov     cx, gs:860h
 * 00000001404256E6: mov     gs:854h, cx
 * 00000001404256EF: movzx   eax, word ptr gs:866h
 * 00000001404256F8: cmp     gs:864h, ax
 * 0000000140425701: jz      short loc_140425715
 * 0000000140425703: mov     gs:864h, ax
 * 000000014042570C: mov     ecx, 48h ; 'H'
 * 0000000140425711: xor     edx, edx
 * 0000000140425713: wrmsr
 * 0000000140425715: movzx   edx, word ptr gs:860h
 * 000000014042571E: test    edx, 8
 * 0000000140425724: jz      short loc_14042573D
 * 0000000140425726: mov     eax, 1
 * 000000014042572B: xor     edx, edx
 * 000000014042572D: mov     ecx, 49h ; 'I'
 * 0000000140425732: wrmsr
 * 0000000140425734: movzx   edx, word ptr gs:860h
 * 000000014042573D: test    edx, 2
 * 0000000140425743: jz      loc_140425880
 * 0000000140425749: call    loc_14042585C
 * 000000014042574E: add     rsp, 8
 * 0000000140425752: call    loc_140425865
 * 0000000140425757: add     rsp, 8
 * 000000014042575B: call    loc_14042574E
 * 0000000140425760: add     rsp, 8
 * 0000000140425764: call    loc_140425757
 * 0000000140425769: add     rsp, 8
 * 000000014042576D: call    loc_140425760
 * 0000000140425772: add     rsp, 8
 * 0000000140425776: call    loc_140425769
 * 000000014042577B: add     rsp, 8
 * 000000014042577F: call    loc_140425772
 * 0000000140425784: add     rsp, 8
 * 0000000140425788: call    loc_14042577B
 * 000000014042578D: add     rsp, 8
 * 0000000140425791: call    loc_140425784
 * 0000000140425796: add     rsp, 8
 * 000000014042579A: call    loc_14042578D
 * 000000014042579F: add     rsp, 8
 * 00000001404257A3: call    loc_140425796
 * 00000001404257A8: add     rsp, 8
 * 00000001404257AC: call    loc_14042579F
 * 00000001404257B1: add     rsp, 8
 * 00000001404257B5: call    loc_1404257A8
 * 00000001404257BA: add     rsp, 8
 * 00000001404257BE: call    loc_1404257B1
 * 00000001404257C3: add     rsp, 8
 * 00000001404257C7: call    loc_1404257BA
 * 00000001404257CC: add     rsp, 8
 * 00000001404257D0: call    loc_1404257C3
 * 00000001404257D5: add     rsp, 8
 * 00000001404257D9: call    loc_1404257CC
 * 00000001404257DE: add     rsp, 8
 * 00000001404257E2: call    loc_1404257D5
 * 00000001404257E7: add     rsp, 8
 * 00000001404257EB: call    loc_1404257DE
 * 00000001404257F0: add     rsp, 8
 * 00000001404257F4: call    loc_1404257E7
 * 00000001404257F9: add     rsp, 8
 * 00000001404257FD: call    loc_1404257F0
 * 0000000140425802: add     rsp, 8
 * 0000000140425806: call    loc_1404257F9
 * 000000014042580B: add     rsp, 8
 * 000000014042580F: call    loc_140425802
 * 0000000140425814: add     rsp, 8
 * 0000000140425818: call    loc_14042580B
 * 000000014042581D: add     rsp, 8
 * 0000000140425821: call    loc_140425814
 * 0000000140425826: add     rsp, 8
 * 000000014042582A: call    loc_14042581D
 * 000000014042582F: add     rsp, 8
 * 0000000140425833: call    loc_140425826
 * 0000000140425838: add     rsp, 8
 * 000000014042583C: call    loc_14042582F
 * 0000000140425841: add     rsp, 8
 * 0000000140425845: call    loc_140425838
 * 000000014042584A: add     rsp, 8
 * 000000014042584E: call    loc_140425841
 * 0000000140425853: add     rsp, 8
 * 0000000140425857: call    loc_14042584A
 * 000000014042585C: add     rsp, 8
 * 0000000140425860: call    loc_140425853
 * 0000000140425865: add     rsp, 8
 * 0000000140425869: mov     eax, 0DADAh
 * 000000014042586E: test    byte ptr gs:862h, 8
 * 0000000140425877: jz      short loc_140425880
 * 0000000140425879: mov     al, 20h ; ' '
 * 000000014042587B: incsspq rax
 * 0000000140425880: test    edx, 200h
 * 0000000140425886: jz      short loc_14042588D
 * 0000000140425888: call    KiFlushBhbDuringTrapEntryOrExit
 * 000000014042588D: lfence
 * 0000000140425890: mov     byte ptr gs:856h, 0
 * 0000000140425899: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 00000001404258A0: jz      short loc_1404258C1
 * 00000001404258A2: mov     ecx, 6A7h
 * 00000001404258A7: rdmsr
 * 00000001404258A9: cmp     edx, 0
 * 00000001404258AC: jz      short loc_1404258C1
 * 00000001404258AE: mov     ecx, edx
 * 00000001404258B0: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 00000001404258B6: cmp     edx, ecx
 * 00000001404258B8: jz      short loc_1404258C1
 * 00000001404258BA: mov     ecx, 6A7h
 * 00000001404258BF: wrmsr
 * 00000001404258C1: test    byte ptr [r10+3], 3
 * 00000001404258C6: mov     word ptr [rbp+80h], 0
 * 00000001404258CF: jz      short loc_1404258D6
 * 00000001404258D1: call    KiSaveDebugRegisterState
 * 00000001404258D6: cld
 * 00000001404258D7: stmxcsr dword ptr [rbp-54h]
 * 00000001404258DB: ldmxcsr dword ptr gs:180h
 * 00000001404258E4: movaps  xmmword ptr [rbp-10h], xmm0
 * 00000001404258E8: movaps  xmmword ptr [rbp+0], xmm1
 * 00000001404258EC: movaps  xmmword ptr [rbp+10h], xmm2
 * 00000001404258F0: movaps  xmmword ptr [rbp+20h], xmm3
 * 00000001404258F4: movaps  xmmword ptr [rbp+30h], xmm4
 * 00000001404258F8: movaps  xmmword ptr [rbp+40h], xmm5
 * 00000001404258FC: cmp     byte ptr gs:82DAh, 0
 * 0000000140425905: jz      short loc_14042590C
 * 0000000140425907: call    KeWakeProcessor
 * 000000014042590C: lea     rax, ExpInterlockedPopEntrySListResume
 * 0000000140425913: cmp     rax, [rbp+0E8h]
 * 000000014042591A: jnb     short loc_140425935
 * 000000014042591C: lea     rax, ExpInterlockedPopEntrySListEnd
 * 0000000140425923: cmp     rax, [rbp+0E8h]
 * 000000014042592A: jb      short loc_140425935
 * 000000014042592C: lea     rcx, [rbp-80h]
 * 0000000140425930: call    KiCheckForSListAddress
 * 0000000140425935: xor     esi, esi
 * 0000000140425937: inc     dword ptr gs:82C0h
 * 000000014042593F: jmp     KiVmbusInterruptDispatch
 */
