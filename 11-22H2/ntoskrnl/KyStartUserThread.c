/*
 * XREFs of KyStartUserThread @ 0x140423520
 * Callers:
 *     <none>
 * Callees:
 *     KiSaveDebugRegisterState @ 0x14041E8E0 (KiSaveDebugRegisterState.c)
 *     KyStartUserThread @ 0x140423520 (KyStartUserThread.c)
 *     KxStartUserThread @ 0x140423870 (KxStartUserThread.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140434D00 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KyStartUserThread @ 0x140423520
 * Reason: Hex-Rays returned no pseudocode for 0x140423520
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140423520: sub     rsp, 8
 * 0000000140423524: push    rbp
 * 0000000140423525: sub     rsp, 158h
 * 000000014042352C: lea     rbp, [rsp+80h]
 * 0000000140423534: mov     [rbp+0E8h+var_13D], 1
 * 0000000140423538: mov     [rbp+0E8h+var_138], rax
 * 000000014042353C: mov     [rbp+0E8h+var_130], rcx
 * 0000000140423540: mov     [rbp+0E8h+var_128], rdx
 * 0000000140423544: mov     [rbp+0E8h+var_120], r8
 * 0000000140423548: mov     [rbp+0E8h+var_118], r9
 * 000000014042354C: mov     [rbp+0E8h+var_110], r10
 * 0000000140423550: mov     [rbp+0E8h+var_108], r11
 * 0000000140423554: test    [rbp+0E8h+arg_0], 1
 * 000000014042355B: jnz     short loc_140423597
 * 000000014042355D: xor     edx, edx
 * 000000014042355F: rdsspq  rdx
 * 0000000140423564: mov     [rbp+0E8h+var_90], rdx
 * 0000000140423568: lfence
 * 000000014042356B: test    word ptr gs:860h, 1
 * 0000000140423576: jnz     short loc_140423580
 * 0000000140423578: lfence
 * 000000014042357B: jmp     loc_140423807
 * 0000000140423580: movzx   eax, word ptr gs:864h
 * 0000000140423589: mov     ecx, 48h ; 'H'
 * 000000014042358E: xor     edx, edx
 * 0000000140423590: wrmsr
 * 0000000140423592: jmp     loc_140423807
 * 0000000140423597: test    cs:KiKvaShadow, 1
 * 000000014042359E: jnz     short loc_1404235A3
 * 00000001404235A0: swapgs
 * 00000001404235A3: lfence
 * 00000001404235A6: mov     rcx, gs:95A8h
 * 00000001404235AF: test    rcx, rcx
 * 00000001404235B2: jz      short loc_1404235D3
 * 00000001404235B4: rdsspq  rdx
 * 00000001404235B9: mov     r10, gs:95A0h
 * 00000001404235C2: add     r10, 8
 * 00000001404235C6: cmp     rdx, r10
 * 00000001404235C9: jnz     short loc_1404235D3
 * 00000001404235CB: rstorssp qword ptr [rcx]
 * 00000001404235CF: saveprevssp
 * 00000001404235D3: mov     r10, gs:188h
 * 00000001404235DC: mov     rcx, gs:188h
 * 00000001404235E5: mov     rcx, [rcx+220h]
 * 00000001404235EC: mov     rcx, [rcx+9E0h]
 * 00000001404235F3: mov     gs:858h, rcx
 * 00000001404235FC: mov     cx, gs:850h
 * 0000000140423605: mov     gs:852h, cx
 * 000000014042360E: mov     cx, gs:860h
 * 0000000140423617: mov     gs:854h, cx
 * 0000000140423620: movzx   eax, word ptr gs:866h
 * 0000000140423629: cmp     gs:864h, ax
 * 0000000140423632: jz      short loc_140423646
 * 0000000140423634: mov     gs:864h, ax
 * 000000014042363D: mov     ecx, 48h ; 'H'
 * 0000000140423642: xor     edx, edx
 * 0000000140423644: wrmsr
 * 0000000140423646: movzx   edx, word ptr gs:860h
 * 000000014042364F: test    edx, 8
 * 0000000140423655: jz      short loc_14042366E
 * 0000000140423657: mov     eax, 1
 * 000000014042365C: xor     edx, edx
 * 000000014042365E: mov     ecx, 49h ; 'I'
 * 0000000140423663: wrmsr
 * 0000000140423665: movzx   edx, word ptr gs:860h
 * 000000014042366E: test    edx, 2
 * 0000000140423674: jz      loc_1404237B1
 * 000000014042367A: call    loc_14042378D
 * 000000014042367F: add     rsp, 8
 * 0000000140423683: call    loc_140423796
 * 0000000140423688: add     rsp, 8
 * 000000014042368C: call    loc_14042367F
 * 0000000140423691: add     rsp, 8
 * 0000000140423695: call    loc_140423688
 * 000000014042369A: add     rsp, 8
 * 000000014042369E: call    loc_140423691
 * 00000001404236A3: add     rsp, 8
 * 00000001404236A7: call    loc_14042369A
 * 00000001404236AC: add     rsp, 8
 * 00000001404236B0: call    loc_1404236A3
 * 00000001404236B5: add     rsp, 8
 * 00000001404236B9: call    loc_1404236AC
 * 00000001404236BE: add     rsp, 8
 * 00000001404236C2: call    loc_1404236B5
 * 00000001404236C7: add     rsp, 8
 * 00000001404236CB: call    loc_1404236BE
 * 00000001404236D0: add     rsp, 8
 * 00000001404236D4: call    loc_1404236C7
 * 00000001404236D9: add     rsp, 8
 * 00000001404236DD: call    loc_1404236D0
 * 00000001404236E2: add     rsp, 8
 * 00000001404236E6: call    loc_1404236D9
 * 00000001404236EB: add     rsp, 8
 * 00000001404236EF: call    loc_1404236E2
 * 00000001404236F4: add     rsp, 8
 * 00000001404236F8: call    loc_1404236EB
 * 00000001404236FD: add     rsp, 8
 * 0000000140423701: call    loc_1404236F4
 * 0000000140423706: add     rsp, 8
 * 000000014042370A: call    loc_1404236FD
 * 000000014042370F: add     rsp, 8
 * 0000000140423713: call    loc_140423706
 * 0000000140423718: add     rsp, 8
 * 000000014042371C: call    loc_14042370F
 * 0000000140423721: add     rsp, 8
 * 0000000140423725: call    loc_140423718
 * 000000014042372A: add     rsp, 8
 * 000000014042372E: call    loc_140423721
 * 0000000140423733: add     rsp, 8
 * 0000000140423737: call    loc_14042372A
 * 000000014042373C: add     rsp, 8
 * 0000000140423740: call    loc_140423733
 * 0000000140423745: add     rsp, 8
 * 0000000140423749: call    loc_14042373C
 * 000000014042374E: add     rsp, 8
 * 0000000140423752: call    loc_140423745
 * 0000000140423757: add     rsp, 8
 * 000000014042375B: call    loc_14042374E
 * 0000000140423760: add     rsp, 8
 * 0000000140423764: call    loc_140423757
 * 0000000140423769: add     rsp, 8
 * 000000014042376D: call    loc_140423760
 * 0000000140423772: add     rsp, 8
 * 0000000140423776: call    loc_140423769
 * 000000014042377B: add     rsp, 8
 * 000000014042377F: call    loc_140423772
 * 0000000140423784: add     rsp, 8
 * 0000000140423788: call    loc_14042377B
 * 000000014042378D: add     rsp, 8
 * 0000000140423791: call    loc_140423784
 * 0000000140423796: add     rsp, 8
 * 000000014042379A: mov     eax, 0DADAh
 * 000000014042379F: test    byte ptr gs:862h, 8
 * 00000001404237A8: jz      short loc_1404237B1
 * 00000001404237AA: mov     al, 20h ; ' '
 * 00000001404237AC: incsspq rax
 * 00000001404237B1: test    edx, 200h
 * 00000001404237B7: jz      short loc_1404237BE
 * 00000001404237B9: call    KiFlushBhbDuringTrapEntryOrExit
 * 00000001404237BE: lfence
 * 00000001404237C1: mov     byte ptr gs:856h, 0
 * 00000001404237CA: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 00000001404237D1: jz      short loc_1404237F2
 * 00000001404237D3: mov     ecx, 6A7h
 * 00000001404237D8: rdmsr
 * 00000001404237DA: cmp     edx, 0
 * 00000001404237DD: jz      short loc_1404237F2
 * 00000001404237DF: mov     ecx, edx
 * 00000001404237E1: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 00000001404237E7: cmp     edx, ecx
 * 00000001404237E9: jz      short loc_1404237F2
 * 00000001404237EB: mov     ecx, 6A7h
 * 00000001404237F0: wrmsr
 * 00000001404237F2: test    byte ptr [r10+3], 3
 * 00000001404237F7: mov     [rbp+0E8h+var_68], 0
 * 0000000140423800: jz      short loc_140423807
 * 0000000140423802: call    KiSaveDebugRegisterState
 * 0000000140423807: cld
 * 0000000140423808: stmxcsr [rbp+0E8h+var_13C]
 * 000000014042380C: ldmxcsr dword ptr gs:180h
 * 0000000140423815: movaps  [rbp+0E8h+var_F8], xmm0
 * 0000000140423819: movaps  [rbp+0E8h+var_E8], xmm1
 * 000000014042381D: movaps  [rbp+0E8h+var_D8], xmm2
 * 0000000140423821: movaps  [rbp+0E8h+var_C8], xmm3
 * 0000000140423825: movaps  [rbp+0E8h+var_B8], xmm4
 * 0000000140423829: movaps  [rbp+0E8h+var_A8], xmm5
 * 000000014042382D: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 0000000140423834: jz      short loc_140423842
 * 0000000140423836: test    [rbp+0E8h+arg_0], 1
 * 000000014042383D: jz      short loc_140423842
 * 000000014042383F: stac
 * 0000000140423842: test    [rbp+0E8h+arg_8], 200h
 * 000000014042384C: jz      short loc_14042384F
 * 000000014042384E: sti
 * 000000014042384F: call    KxStartUserThread
 * 0000000140423854: nop     word ptr [rax+rax+00000000h]
 * 0000000140423860: nop
 * 0000000140423861: retn
 */
