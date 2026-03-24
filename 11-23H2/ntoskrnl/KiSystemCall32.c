/*
 * XREFs of KiSystemCall32 @ 0x1404335C0
 * Callers:
 *     <none>
 * Callees:
 *     KiSaveDebugRegisterState @ 0x14041EFA0 (KiSaveDebugRegisterState.c)
 *     KiSystemCall32 @ 0x1404335C0 (KiSystemCall32.c)
 *     KiExceptionDispatch @ 0x140434940 (KiExceptionDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140435300 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiSystemCall32 @ 0x1404335C0
 * Reason: Hex-Rays returned no pseudocode for 0x1404335C0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001404335C0: swapgs
 * 00000001404335C3: mov     gs:10h, rsp
 * 00000001404335CC: mov     rsp, gs:1A8h
 * 00000001404335D5: push    2Bh ; '+'
 * 00000001404335D7: push    qword ptr gs:10h
 * 00000001404335DF: push    r11
 * 00000001404335E1: push    23h ; '#'
 * 00000001404335E3: push    rcx
 * 00000001404335E4: cmp     qword ptr gs:95A8h, 0
 * 00000001404335EE: jz      short loc_1404335F4
 * 00000001404335F0: setssbsy
 * 00000001404335F4: swapgs
 * 00000001404335F7: lfence
 * 00000001404335FA: sub     rsp, 8
 * 00000001404335FE: push    rbp
 * 00000001404335FF: sub     rsp, 158h
 * 0000000140433606: lea     rbp, [rsp+190h+var_110]
 * 000000014043360E: mov     byte ptr [rbp-55h], 1
 * 0000000140433612: mov     [rbp-50h], rax
 * 0000000140433616: mov     [rbp-48h], rcx
 * 000000014043361A: mov     [rbp-40h], rdx
 * 000000014043361E: mov     [rbp-38h], r8
 * 0000000140433622: mov     [rbp-30h], r9
 * 0000000140433626: mov     [rbp-28h], r10
 * 000000014043362A: mov     [rbp-20h], r11
 * 000000014043362E: test    byte ptr [rbp+0F0h], 1
 * 0000000140433635: jnz     short loc_140433671
 * 0000000140433637: xor     edx, edx
 * 0000000140433639: rdsspq  rdx
 * 000000014043363E: mov     [rbp+58h], rdx
 * 0000000140433642: lfence
 * 0000000140433645: test    word ptr gs:860h, 1
 * 0000000140433650: jnz     short loc_14043365A
 * 0000000140433652: lfence
 * 0000000140433655: jmp     loc_1404338E1
 * 000000014043365A: movzx   eax, word ptr gs:864h
 * 0000000140433663: mov     ecx, 48h ; 'H'
 * 0000000140433668: xor     edx, edx
 * 000000014043366A: wrmsr
 * 000000014043366C: jmp     loc_1404338E1
 * 0000000140433671: test    cs:KiKvaShadow, 1
 * 0000000140433678: jnz     short loc_14043367D
 * 000000014043367A: swapgs
 * 000000014043367D: lfence
 * 0000000140433680: mov     rcx, gs:95A8h
 * 0000000140433689: test    rcx, rcx
 * 000000014043368C: jz      short loc_1404336AD
 * 000000014043368E: rdsspq  rdx
 * 0000000140433693: mov     r10, gs:95A0h
 * 000000014043369C: add     r10, 8
 * 00000001404336A0: cmp     rdx, r10
 * 00000001404336A3: jnz     short loc_1404336AD
 * 00000001404336A5: rstorssp qword ptr [rcx]
 * 00000001404336A9: saveprevssp
 * 00000001404336AD: mov     r10, gs:188h
 * 00000001404336B6: mov     rcx, gs:188h
 * 00000001404336BF: mov     rcx, [rcx+220h]
 * 00000001404336C6: mov     rcx, [rcx+9E0h]
 * 00000001404336CD: mov     gs:858h, rcx
 * 00000001404336D6: mov     cx, gs:850h
 * 00000001404336DF: mov     gs:852h, cx
 * 00000001404336E8: mov     cx, gs:860h
 * 00000001404336F1: mov     gs:854h, cx
 * 00000001404336FA: movzx   eax, word ptr gs:866h
 * 0000000140433703: cmp     gs:864h, ax
 * 000000014043370C: jz      short loc_140433720
 * 000000014043370E: mov     gs:864h, ax
 * 0000000140433717: mov     ecx, 48h ; 'H'
 * 000000014043371C: xor     edx, edx
 * 000000014043371E: wrmsr
 * 0000000140433720: movzx   edx, word ptr gs:860h
 * 0000000140433729: test    edx, 8
 * 000000014043372F: jz      short loc_140433748
 * 0000000140433731: mov     eax, 1
 * 0000000140433736: xor     edx, edx
 * 0000000140433738: mov     ecx, 49h ; 'I'
 * 000000014043373D: wrmsr
 * 000000014043373F: movzx   edx, word ptr gs:860h
 * 0000000140433748: test    edx, 2
 * 000000014043374E: jz      loc_14043388B
 * 0000000140433754: call    loc_140433867
 * 0000000140433759: add     rsp, 8
 * 000000014043375D: call    loc_140433870
 * 0000000140433762: add     rsp, 8
 * 0000000140433766: call    loc_140433759
 * 000000014043376B: add     rsp, 8
 * 000000014043376F: call    loc_140433762
 * 0000000140433774: add     rsp, 8
 * 0000000140433778: call    loc_14043376B
 * 000000014043377D: add     rsp, 8
 * 0000000140433781: call    loc_140433774
 * 0000000140433786: add     rsp, 8
 * 000000014043378A: call    loc_14043377D
 * 000000014043378F: add     rsp, 8
 * 0000000140433793: call    loc_140433786
 * 0000000140433798: add     rsp, 8
 * 000000014043379C: call    loc_14043378F
 * 00000001404337A1: add     rsp, 8
 * 00000001404337A5: call    loc_140433798
 * 00000001404337AA: add     rsp, 8
 * 00000001404337AE: call    loc_1404337A1
 * 00000001404337B3: add     rsp, 8
 * 00000001404337B7: call    loc_1404337AA
 * 00000001404337BC: add     rsp, 8
 * 00000001404337C0: call    loc_1404337B3
 * 00000001404337C5: add     rsp, 8
 * 00000001404337C9: call    loc_1404337BC
 * 00000001404337CE: add     rsp, 8
 * 00000001404337D2: call    loc_1404337C5
 * 00000001404337D7: add     rsp, 8
 * 00000001404337DB: call    loc_1404337CE
 * 00000001404337E0: add     rsp, 8
 * 00000001404337E4: call    loc_1404337D7
 * 00000001404337E9: add     rsp, 8
 * 00000001404337ED: call    loc_1404337E0
 * 00000001404337F2: add     rsp, 8
 * 00000001404337F6: call    loc_1404337E9
 * 00000001404337FB: add     rsp, 8
 * 00000001404337FF: call    loc_1404337F2
 * 0000000140433804: add     rsp, 8
 * 0000000140433808: call    loc_1404337FB
 * 000000014043380D: add     rsp, 8
 * 0000000140433811: call    loc_140433804
 * 0000000140433816: add     rsp, 8
 * 000000014043381A: call    loc_14043380D
 * 000000014043381F: add     rsp, 8
 * 0000000140433823: call    loc_140433816
 * 0000000140433828: add     rsp, 8
 * 000000014043382C: call    loc_14043381F
 * 0000000140433831: add     rsp, 8
 * 0000000140433835: call    loc_140433828
 * 000000014043383A: add     rsp, 8
 * 000000014043383E: call    loc_140433831
 * 0000000140433843: add     rsp, 8
 * 0000000140433847: call    loc_14043383A
 * 000000014043384C: add     rsp, 8
 * 0000000140433850: call    loc_140433843
 * 0000000140433855: add     rsp, 8
 * 0000000140433859: call    loc_14043384C
 * 000000014043385E: add     rsp, 8
 * 0000000140433862: call    loc_140433855
 * 0000000140433867: add     rsp, 8
 * 000000014043386B: call    loc_14043385E
 * 0000000140433870: add     rsp, 8
 * 0000000140433874: mov     eax, 0DADAh
 * 0000000140433879: test    byte ptr gs:862h, 8
 * 0000000140433882: jz      short loc_14043388B
 * 0000000140433884: mov     al, 20h ; ' '
 * 0000000140433886: incsspq rax
 * 000000014043388B: test    edx, 200h
 * 0000000140433891: jz      short loc_140433898
 * 0000000140433893: call    KiFlushBhbDuringTrapEntryOrExit
 * 0000000140433898: lfence
 * 000000014043389B: mov     byte ptr gs:856h, 0
 * 00000001404338A4: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 00000001404338AB: jz      short loc_1404338CC
 * 00000001404338AD: mov     ecx, 6A7h
 * 00000001404338B2: rdmsr
 * 00000001404338B4: cmp     edx, 0
 * 00000001404338B7: jz      short loc_1404338CC
 * 00000001404338B9: mov     ecx, edx
 * 00000001404338BB: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 00000001404338C1: cmp     edx, ecx
 * 00000001404338C3: jz      short loc_1404338CC
 * 00000001404338C5: mov     ecx, 6A7h
 * 00000001404338CA: wrmsr
 * 00000001404338CC: test    byte ptr [r10+3], 3
 * 00000001404338D1: mov     word ptr [rbp+80h], 0
 * 00000001404338DA: jz      short loc_1404338E1
 * 00000001404338DC: call    KiSaveDebugRegisterState
 * 00000001404338E1: cld
 * 00000001404338E2: stmxcsr dword ptr [rbp-54h]
 * 00000001404338E6: ldmxcsr dword ptr gs:180h
 * 00000001404338EF: movaps  xmmword ptr [rbp-10h], xmm0
 * 00000001404338F3: movaps  xmmword ptr [rbp+0], xmm1
 * 00000001404338F7: movaps  xmmword ptr [rbp+10h], xmm2
 * 00000001404338FB: movaps  xmmword ptr [rbp+20h], xmm3
 * 00000001404338FF: movaps  xmmword ptr [rbp+30h], xmm4
 * 0000000140433903: movaps  xmmword ptr [rbp+40h], xmm5
 * 0000000140433907: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 000000014043390E: jz      short loc_14043391C
 * 0000000140433910: test    byte ptr [rbp+0F0h], 1
 * 0000000140433917: jz      short loc_14043391C
 * 0000000140433919: stac
 * 000000014043391C: sub     qword ptr [rbp+0E8h], 2
 * 0000000140433924: and     dword ptr [rbp+0ECh], 0
 * 000000014043392B: sti
 * 000000014043392C: mov     ecx, 0C000001Dh
 * 0000000140433931: xor     edx, edx
 * 0000000140433933: mov     r8, [rbp+0E8h]
 * 000000014043393A: call    KiExceptionDispatch
 * 000000014043393F: nop
 * 0000000140433940: retn
 */
