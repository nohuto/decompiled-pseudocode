/*
 * XREFs of KiAlignmentFault @ 0x140430500
 * Callers:
 *     KiAlignmentFaultShadow @ 0x140AF6940 (KiAlignmentFaultShadow.c)
 * Callees:
 *     KiSaveDebugRegisterState @ 0x14041EFA0 (KiSaveDebugRegisterState.c)
 *     KiAlignmentFault @ 0x140430500 (KiAlignmentFault.c)
 *     KiExceptionDispatch @ 0x140434940 (KiExceptionDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140435300 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiAlignmentFault @ 0x140430500
 * Reason: Hex-Rays returned no pseudocode for 0x140430500
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140430500: push    rbp
 * 0000000140430501: sub     rsp, 158h
 * 0000000140430508: lea     rbp, [rsp+80h]
 * 0000000140430510: mov     [rbp+0D8h+var_12D], 1
 * 0000000140430514: mov     [rbp+0D8h+var_128], rax
 * 0000000140430518: mov     [rbp+0D8h+var_120], rcx
 * 000000014043051C: mov     [rbp+0D8h+var_118], rdx
 * 0000000140430520: mov     [rbp+0D8h+var_110], r8
 * 0000000140430524: mov     [rbp+0D8h+var_108], r9
 * 0000000140430528: mov     [rbp+0D8h+var_100], r10
 * 000000014043052C: mov     [rbp+0D8h+var_F8], r11
 * 0000000140430530: test    [rbp+0D8h+arg_8], 1
 * 0000000140430537: jnz     short loc_140430573
 * 0000000140430539: xor     edx, edx
 * 000000014043053B: rdsspq  rdx
 * 0000000140430540: mov     [rbp+0D8h+var_80], rdx
 * 0000000140430544: lfence
 * 0000000140430547: test    word ptr gs:860h, 1
 * 0000000140430552: jnz     short loc_14043055C
 * 0000000140430554: lfence
 * 0000000140430557: jmp     loc_1404307E3
 * 000000014043055C: movzx   eax, word ptr gs:864h
 * 0000000140430565: mov     ecx, 48h ; 'H'
 * 000000014043056A: xor     edx, edx
 * 000000014043056C: wrmsr
 * 000000014043056E: jmp     loc_1404307E3
 * 0000000140430573: test    cs:KiKvaShadow, 1
 * 000000014043057A: jnz     short loc_14043057F
 * 000000014043057C: swapgs
 * 000000014043057F: lfence
 * 0000000140430582: mov     rcx, gs:95A8h
 * 000000014043058B: test    rcx, rcx
 * 000000014043058E: jz      short loc_1404305AF
 * 0000000140430590: rdsspq  rdx
 * 0000000140430595: mov     r10, gs:95A0h
 * 000000014043059E: add     r10, 8
 * 00000001404305A2: cmp     rdx, r10
 * 00000001404305A5: jnz     short loc_1404305AF
 * 00000001404305A7: rstorssp qword ptr [rcx]
 * 00000001404305AB: saveprevssp
 * 00000001404305AF: mov     r10, gs:188h
 * 00000001404305B8: mov     rcx, gs:188h
 * 00000001404305C1: mov     rcx, [rcx+220h]
 * 00000001404305C8: mov     rcx, [rcx+9E0h]
 * 00000001404305CF: mov     gs:858h, rcx
 * 00000001404305D8: mov     cx, gs:850h
 * 00000001404305E1: mov     gs:852h, cx
 * 00000001404305EA: mov     cx, gs:860h
 * 00000001404305F3: mov     gs:854h, cx
 * 00000001404305FC: movzx   eax, word ptr gs:866h
 * 0000000140430605: cmp     gs:864h, ax
 * 000000014043060E: jz      short loc_140430622
 * 0000000140430610: mov     gs:864h, ax
 * 0000000140430619: mov     ecx, 48h ; 'H'
 * 000000014043061E: xor     edx, edx
 * 0000000140430620: wrmsr
 * 0000000140430622: movzx   edx, word ptr gs:860h
 * 000000014043062B: test    edx, 8
 * 0000000140430631: jz      short loc_14043064A
 * 0000000140430633: mov     eax, 1
 * 0000000140430638: xor     edx, edx
 * 000000014043063A: mov     ecx, 49h ; 'I'
 * 000000014043063F: wrmsr
 * 0000000140430641: movzx   edx, word ptr gs:860h
 * 000000014043064A: test    edx, 2
 * 0000000140430650: jz      loc_14043078D
 * 0000000140430656: call    loc_140430769
 * 000000014043065B: add     rsp, 8
 * 000000014043065F: call    loc_140430772
 * 0000000140430664: add     rsp, 8
 * 0000000140430668: call    loc_14043065B
 * 000000014043066D: add     rsp, 8
 * 0000000140430671: call    loc_140430664
 * 0000000140430676: add     rsp, 8
 * 000000014043067A: call    loc_14043066D
 * 000000014043067F: add     rsp, 8
 * 0000000140430683: call    loc_140430676
 * 0000000140430688: add     rsp, 8
 * 000000014043068C: call    loc_14043067F
 * 0000000140430691: add     rsp, 8
 * 0000000140430695: call    loc_140430688
 * 000000014043069A: add     rsp, 8
 * 000000014043069E: call    loc_140430691
 * 00000001404306A3: add     rsp, 8
 * 00000001404306A7: call    loc_14043069A
 * 00000001404306AC: add     rsp, 8
 * 00000001404306B0: call    loc_1404306A3
 * 00000001404306B5: add     rsp, 8
 * 00000001404306B9: call    loc_1404306AC
 * 00000001404306BE: add     rsp, 8
 * 00000001404306C2: call    loc_1404306B5
 * 00000001404306C7: add     rsp, 8
 * 00000001404306CB: call    loc_1404306BE
 * 00000001404306D0: add     rsp, 8
 * 00000001404306D4: call    loc_1404306C7
 * 00000001404306D9: add     rsp, 8
 * 00000001404306DD: call    loc_1404306D0
 * 00000001404306E2: add     rsp, 8
 * 00000001404306E6: call    loc_1404306D9
 * 00000001404306EB: add     rsp, 8
 * 00000001404306EF: call    loc_1404306E2
 * 00000001404306F4: add     rsp, 8
 * 00000001404306F8: call    loc_1404306EB
 * 00000001404306FD: add     rsp, 8
 * 0000000140430701: call    loc_1404306F4
 * 0000000140430706: add     rsp, 8
 * 000000014043070A: call    loc_1404306FD
 * 000000014043070F: add     rsp, 8
 * 0000000140430713: call    loc_140430706
 * 0000000140430718: add     rsp, 8
 * 000000014043071C: call    loc_14043070F
 * 0000000140430721: add     rsp, 8
 * 0000000140430725: call    loc_140430718
 * 000000014043072A: add     rsp, 8
 * 000000014043072E: call    loc_140430721
 * 0000000140430733: add     rsp, 8
 * 0000000140430737: call    loc_14043072A
 * 000000014043073C: add     rsp, 8
 * 0000000140430740: call    loc_140430733
 * 0000000140430745: add     rsp, 8
 * 0000000140430749: call    loc_14043073C
 * 000000014043074E: add     rsp, 8
 * 0000000140430752: call    loc_140430745
 * 0000000140430757: add     rsp, 8
 * 000000014043075B: call    loc_14043074E
 * 0000000140430760: add     rsp, 8
 * 0000000140430764: call    loc_140430757
 * 0000000140430769: add     rsp, 8
 * 000000014043076D: call    loc_140430760
 * 0000000140430772: add     rsp, 8
 * 0000000140430776: mov     eax, 0DADAh
 * 000000014043077B: test    byte ptr gs:862h, 8
 * 0000000140430784: jz      short loc_14043078D
 * 0000000140430786: mov     al, 20h ; ' '
 * 0000000140430788: incsspq rax
 * 000000014043078D: test    edx, 200h
 * 0000000140430793: jz      short loc_14043079A
 * 0000000140430795: call    KiFlushBhbDuringTrapEntryOrExit
 * 000000014043079A: lfence
 * 000000014043079D: mov     byte ptr gs:856h, 0
 * 00000001404307A6: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 00000001404307AD: jz      short loc_1404307CE
 * 00000001404307AF: mov     ecx, 6A7h
 * 00000001404307B4: rdmsr
 * 00000001404307B6: cmp     edx, 0
 * 00000001404307B9: jz      short loc_1404307CE
 * 00000001404307BB: mov     ecx, edx
 * 00000001404307BD: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 00000001404307C3: cmp     edx, ecx
 * 00000001404307C5: jz      short loc_1404307CE
 * 00000001404307C7: mov     ecx, 6A7h
 * 00000001404307CC: wrmsr
 * 00000001404307CE: test    byte ptr [r10+3], 3
 * 00000001404307D3: mov     [rbp+0D8h+var_58], 0
 * 00000001404307DC: jz      short loc_1404307E3
 * 00000001404307DE: call    KiSaveDebugRegisterState
 * 00000001404307E3: cld
 * 00000001404307E4: stmxcsr [rbp+0D8h+var_12C]
 * 00000001404307E8: ldmxcsr dword ptr gs:180h
 * 00000001404307F1: movaps  [rbp+0D8h+var_E8], xmm0
 * 00000001404307F5: movaps  [rbp+0D8h+var_D8], xmm1
 * 00000001404307F9: movaps  [rbp+0D8h+var_C8], xmm2
 * 00000001404307FD: movaps  [rbp+0D8h+var_B8], xmm3
 * 0000000140430801: movaps  [rbp+0D8h+var_A8], xmm4
 * 0000000140430805: movaps  [rbp+0D8h+var_98], xmm5
 * 0000000140430809: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 0000000140430810: jz      short loc_14043081E
 * 0000000140430812: test    [rbp+0D8h+arg_8], 1
 * 0000000140430819: jz      short loc_14043081E
 * 000000014043081B: stac
 * 000000014043081E: mov     eax, [rbp+0E0h]
 * 0000000140430824: test    [rbp+0D8h+arg_10], 200h
 * 000000014043082E: jz      short loc_140430831
 * 0000000140430830: sti
 * 0000000140430831: mov     ecx, 80000002h
 * 0000000140430836: xor     edx, edx
 * 0000000140430838: mov     r8, [rbp+0D8h+arg_0]
 * 000000014043083F: call    KiExceptionDispatch
 * 0000000140430844: nop
 * 0000000140430845: retn
 */
