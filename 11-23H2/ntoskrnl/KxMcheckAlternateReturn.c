/*
 * XREFs of KxMcheckAlternateReturn @ 0x1404313C0
 * Callers:
 *     KxMcheckAlternateReturnShadow @ 0x140AF6A40 (KxMcheckAlternateReturnShadow.c)
 * Callees:
 *     KiRestoreDebugRegisterState @ 0x14041F2B0 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x14041F330 (KiSaveDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1404200D0 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x1404251B0 (KiInitiateUserApc.c)
 *     KxMcheckAlternateReturn @ 0x1404313C0 (KxMcheckAlternateReturn.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140435700 (KiFlushBhbDuringTrapEntryOrExit.c)
 *     KiUpdateStibpPairing @ 0x140461220 (KiUpdateStibpPairing.c)
 *     KiCopyCounters @ 0x1405746E0 (KiCopyCounters.c)
 *     KiMcheckAlternateReturn @ 0x140580880 (KiMcheckAlternateReturn.c)
 */

/*
 * Hex-Rays decompilation failed for KxMcheckAlternateReturn @ 0x1404313C0
 * Reason: Hex-Rays returned no pseudocode for 0x1404313C0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001404313C0: sub     rsp, 8
 * 00000001404313C4: push    rbp
 * 00000001404313C5: sub     rsp, 158h
 * 00000001404313CC: lea     rbp, [rsp+80h]
 * 00000001404313D4: mov     [rbp+0E8h+var_13D], 1
 * 00000001404313D8: mov     [rbp+0E8h+var_138], rax
 * 00000001404313DC: mov     [rbp+0E8h+var_130], rcx
 * 00000001404313E0: mov     [rbp+0E8h+var_128], rdx
 * 00000001404313E4: mov     [rbp+0E8h+var_120], r8
 * 00000001404313E8: mov     [rbp+0E8h+var_118], r9
 * 00000001404313EC: mov     [rbp+0E8h+var_110], r10
 * 00000001404313F0: mov     [rbp+0E8h+var_108], r11
 * 00000001404313F4: test    [rbp+0E8h+arg_0], 1
 * 00000001404313FB: jnz     short loc_140431437
 * 00000001404313FD: xor     edx, edx
 * 00000001404313FF: rdsspq  rdx
 * 0000000140431404: mov     [rbp+0E8h+var_90], rdx
 * 0000000140431408: lfence
 * 000000014043140B: test    word ptr gs:860h, 1
 * 0000000140431416: jnz     short loc_140431420
 * 0000000140431418: lfence
 * 000000014043141B: jmp     loc_1404316A7
 * 0000000140431420: movzx   eax, word ptr gs:864h
 * 0000000140431429: mov     ecx, 48h ; 'H'
 * 000000014043142E: xor     edx, edx
 * 0000000140431430: wrmsr
 * 0000000140431432: jmp     loc_1404316A7
 * 0000000140431437: test    cs:KiKvaShadow, 1
 * 000000014043143E: jnz     short loc_140431443
 * 0000000140431440: swapgs
 * 0000000140431443: lfence
 * 0000000140431446: mov     rcx, gs:95A8h
 * 000000014043144F: test    rcx, rcx
 * 0000000140431452: jz      short loc_140431473
 * 0000000140431454: rdsspq  rdx
 * 0000000140431459: mov     r10, gs:95A0h
 * 0000000140431462: add     r10, 8
 * 0000000140431466: cmp     rdx, r10
 * 0000000140431469: jnz     short loc_140431473
 * 000000014043146B: rstorssp qword ptr [rcx]
 * 000000014043146F: saveprevssp
 * 0000000140431473: mov     r10, gs:188h
 * 000000014043147C: mov     rcx, gs:188h
 * 0000000140431485: mov     rcx, [rcx+220h]
 * 000000014043148C: mov     rcx, [rcx+9E0h]
 * 0000000140431493: mov     gs:858h, rcx
 * 000000014043149C: mov     cx, gs:850h
 * 00000001404314A5: mov     gs:852h, cx
 * 00000001404314AE: mov     cx, gs:860h
 * 00000001404314B7: mov     gs:854h, cx
 * 00000001404314C0: movzx   eax, word ptr gs:866h
 * 00000001404314C9: cmp     gs:864h, ax
 * 00000001404314D2: jz      short loc_1404314E6
 * 00000001404314D4: mov     gs:864h, ax
 * 00000001404314DD: mov     ecx, 48h ; 'H'
 * 00000001404314E2: xor     edx, edx
 * 00000001404314E4: wrmsr
 * 00000001404314E6: movzx   edx, word ptr gs:860h
 * 00000001404314EF: test    edx, 8
 * 00000001404314F5: jz      short loc_14043150E
 * 00000001404314F7: mov     eax, 1
 * 00000001404314FC: xor     edx, edx
 * 00000001404314FE: mov     ecx, 49h ; 'I'
 * 0000000140431503: wrmsr
 * 0000000140431505: movzx   edx, word ptr gs:860h
 * 000000014043150E: test    edx, 2
 * 0000000140431514: jz      loc_140431651
 * 000000014043151A: call    loc_14043162D
 * 000000014043151F: add     rsp, 8
 * 0000000140431523: call    loc_140431636
 * 0000000140431528: add     rsp, 8
 * 000000014043152C: call    loc_14043151F
 * 0000000140431531: add     rsp, 8
 * 0000000140431535: call    loc_140431528
 * 000000014043153A: add     rsp, 8
 * 000000014043153E: call    loc_140431531
 * 0000000140431543: add     rsp, 8
 * 0000000140431547: call    loc_14043153A
 * 000000014043154C: add     rsp, 8
 * 0000000140431550: call    loc_140431543
 * 0000000140431555: add     rsp, 8
 * 0000000140431559: call    loc_14043154C
 * 000000014043155E: add     rsp, 8
 * 0000000140431562: call    loc_140431555
 * 0000000140431567: add     rsp, 8
 * 000000014043156B: call    loc_14043155E
 * 0000000140431570: add     rsp, 8
 * 0000000140431574: call    loc_140431567
 * 0000000140431579: add     rsp, 8
 * 000000014043157D: call    loc_140431570
 * 0000000140431582: add     rsp, 8
 * 0000000140431586: call    loc_140431579
 * 000000014043158B: add     rsp, 8
 * 000000014043158F: call    loc_140431582
 * 0000000140431594: add     rsp, 8
 * 0000000140431598: call    loc_14043158B
 * 000000014043159D: add     rsp, 8
 * 00000001404315A1: call    loc_140431594
 * 00000001404315A6: add     rsp, 8
 * 00000001404315AA: call    loc_14043159D
 * 00000001404315AF: add     rsp, 8
 * 00000001404315B3: call    loc_1404315A6
 * 00000001404315B8: add     rsp, 8
 * 00000001404315BC: call    loc_1404315AF
 * 00000001404315C1: add     rsp, 8
 * 00000001404315C5: call    loc_1404315B8
 * 00000001404315CA: add     rsp, 8
 * 00000001404315CE: call    loc_1404315C1
 * 00000001404315D3: add     rsp, 8
 * 00000001404315D7: call    loc_1404315CA
 * 00000001404315DC: add     rsp, 8
 * 00000001404315E0: call    loc_1404315D3
 * 00000001404315E5: add     rsp, 8
 * 00000001404315E9: call    loc_1404315DC
 * 00000001404315EE: add     rsp, 8
 * 00000001404315F2: call    loc_1404315E5
 * 00000001404315F7: add     rsp, 8
 * 00000001404315FB: call    loc_1404315EE
 * 0000000140431600: add     rsp, 8
 * 0000000140431604: call    loc_1404315F7
 * 0000000140431609: add     rsp, 8
 * 000000014043160D: call    loc_140431600
 * 0000000140431612: add     rsp, 8
 * 0000000140431616: call    loc_140431609
 * 000000014043161B: add     rsp, 8
 * 000000014043161F: call    loc_140431612
 * 0000000140431624: add     rsp, 8
 * 0000000140431628: call    loc_14043161B
 * 000000014043162D: add     rsp, 8
 * 0000000140431631: call    loc_140431624
 * 0000000140431636: add     rsp, 8
 * 000000014043163A: mov     eax, 0DADAh
 * 000000014043163F: test    byte ptr gs:862h, 8
 * 0000000140431648: jz      short loc_140431651
 * 000000014043164A: mov     al, 20h ; ' '
 * 000000014043164C: incsspq rax
 * 0000000140431651: test    edx, 200h
 * 0000000140431657: jz      short loc_14043165E
 * 0000000140431659: call    KiFlushBhbDuringTrapEntryOrExit
 * 000000014043165E: lfence
 * 0000000140431661: mov     byte ptr gs:856h, 0
 * 000000014043166A: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 0000000140431671: jz      short loc_140431692
 * 0000000140431673: mov     ecx, 6A7h
 * 0000000140431678: rdmsr
 * 000000014043167A: cmp     edx, 0
 * 000000014043167D: jz      short loc_140431692
 * 000000014043167F: mov     ecx, edx
 * 0000000140431681: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 0000000140431687: cmp     edx, ecx
 * 0000000140431689: jz      short loc_140431692
 * 000000014043168B: mov     ecx, 6A7h
 * 0000000140431690: wrmsr
 * 0000000140431692: test    byte ptr [r10+3], 3
 * 0000000140431697: mov     [rbp+0E8h+var_68], 0
 * 00000001404316A0: jz      short loc_1404316A7
 * 00000001404316A2: call    KiSaveDebugRegisterState
 * 00000001404316A7: cld
 * 00000001404316A8: stmxcsr [rbp+0E8h+var_13C]
 * 00000001404316AC: ldmxcsr dword ptr gs:180h
 * 00000001404316B5: movaps  [rbp+0E8h+var_F8], xmm0
 * 00000001404316B9: movaps  [rbp+0E8h+var_E8], xmm1
 * 00000001404316BD: movaps  [rbp+0E8h+var_D8], xmm2
 * 00000001404316C1: movaps  [rbp+0E8h+var_C8], xmm3
 * 00000001404316C5: movaps  [rbp+0E8h+var_B8], xmm4
 * 00000001404316C9: movaps  [rbp+0E8h+var_A8], xmm5
 * 00000001404316CD: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001404316D4: jz      short loc_1404316E2
 * 00000001404316D6: test    [rbp+0E8h+arg_0], 1
 * 00000001404316DD: jz      short loc_1404316E2
 * 00000001404316DF: stac
 * 00000001404316E2: sub     rsp, 30h
 * 00000001404316E6: bt      [rbp+0E8h+arg_8], 9
 * 00000001404316EE: jnb     short loc_1404316F1
 * 00000001404316F0: sti
 * 00000001404316F1: lea     rcx, [rsp+198h+var_178]
 * 00000001404316F6: call    KiMcheckAlternateReturn
 * 00000001404316FB: cli
 * 00000001404316FC: test    [rbp+0E8h+arg_0], 1
 * 0000000140431703: jz      loc_1404319F1
 * 0000000140431709: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 0000000140431710: jz      short loc_140431715
 * 0000000140431712: stac
 * 0000000140431715: mov     rcx, gs:188h
 * 000000014043171E: test    byte ptr [rcx+0C2h], 3
 * 0000000140431725: jz      short loc_140431742
 * 0000000140431727: mov     ecx, 1
 * 000000014043172C: mov     cr8, rcx
 * 0000000140431730: sti
 * 0000000140431731: call    KiInitiateUserApc
 * 0000000140431736: cli
 * 0000000140431737: mov     ecx, 0
 * 000000014043173C: mov     cr8, rcx
 * 0000000140431740: jmp     short loc_140431715
 * 0000000140431742: test    byte ptr gs:86Ch, 2
 * 000000014043174B: jz      short loc_140431754
 * 000000014043174D: xor     ecx, ecx
 * 000000014043174F: call    KiUpdateStibpPairing
 * 0000000140431754: mov     rcx, gs:188h
 * 000000014043175D: test    dword ptr [rcx], 8000000h
 * 0000000140431763: jz      short loc_14043176A
 * 0000000140431765: call    KiRestoreSetContextState
 * 000000014043176A: mov     rcx, gs:188h
 * 0000000140431773: test    dword ptr [rcx], 10000h
 * 0000000140431779: jz      short loc_14043178F
 * 000000014043177B: test    byte ptr [rcx+2], 1
 * 000000014043177F: jz      short loc_14043178F
 * 0000000140431781: call    KiCopyCounters
 * 0000000140431786: mov     rcx, gs:188h
 * 000000014043178F: ldmxcsr [rbp+0E8h+var_13C]
 * 0000000140431793: cmp     [rbp+0E8h+var_68], 0
 * 000000014043179B: jz      short loc_1404317A2
 * 000000014043179D: call    KiRestoreDebugRegisterState
 * 00000001404317A2: mov     rcx, gs:188h
 * 00000001404317AB: bt      dword ptr [rcx+74h], 16h
 * 00000001404317B0: jnb     short loc_1404317DC
 * 00000001404317B2: xor     ecx, ecx
 * 00000001404317B4: rdsspq  rcx
 * 00000001404317B9: mov     r8, gs:95A8h
 * 00000001404317C2: add     r8, 8
 * 00000001404317C6: cmp     rcx, r8
 * 00000001404317C9: jnz     short loc_1404317DC
 * 00000001404317CB: mov     rcx, gs:95A0h
 * 00000001404317D4: rstorssp qword ptr [rcx]
 * 00000001404317D8: saveprevssp
 * 00000001404317DC: movaps  xmm0, [rbp+0E8h+var_F8]
 * 00000001404317E0: movaps  xmm1, [rbp+0E8h+var_E8]
 * 00000001404317E4: movaps  xmm2, [rbp+0E8h+var_D8]
 * 00000001404317E8: movaps  xmm3, [rbp+0E8h+var_C8]
 * 00000001404317EC: movaps  xmm4, [rbp+0E8h+var_B8]
 * 00000001404317F0: movaps  xmm5, [rbp+0E8h+var_A8]
 * 00000001404317F4: mov     r11, [rbp+0E8h+var_108]
 * 00000001404317F8: mov     r10, [rbp+0E8h+var_110]
 * 00000001404317FC: mov     r9, [rbp+0E8h+var_118]
 * 0000000140431800: mov     r8, [rbp+0E8h+var_120]
 * 0000000140431804: mov     byte ptr gs:856h, 0
 * 000000014043180D: movzx   eax, word ptr gs:86Ah
 * 0000000140431816: cmp     gs:864h, ax
 * 000000014043181F: jz      short loc_140431833
 * 0000000140431821: mov     gs:864h, ax
 * 000000014043182A: mov     ecx, 48h ; 'H'
 * 000000014043182F: xor     edx, edx
 * 0000000140431831: wrmsr
 * 0000000140431833: btr     word ptr gs:860h, 2
 * 000000014043183E: jnb     short loc_14043184E
 * 0000000140431840: mov     eax, 1
 * 0000000140431845: xor     edx, edx
 * 0000000140431847: mov     ecx, 49h ; 'I'
 * 000000014043184C: wrmsr
 * 000000014043184E: btr     word ptr gs:860h, 5
 * 0000000140431859: jnb     loc_140431996
 * 000000014043185F: call    loc_140431972
 * 0000000140431864: add     rsp, 8
 * 0000000140431868: call    loc_14043197B
 * 000000014043186D: add     rsp, 8
 * 0000000140431871: call    loc_140431864
 * 0000000140431876: add     rsp, 8
 * 000000014043187A: call    loc_14043186D
 * 000000014043187F: add     rsp, 8
 * 0000000140431883: call    loc_140431876
 * 0000000140431888: add     rsp, 8
 * 000000014043188C: call    loc_14043187F
 * 0000000140431891: add     rsp, 8
 * 0000000140431895: call    loc_140431888
 * 000000014043189A: add     rsp, 8
 * 000000014043189E: call    loc_140431891
 * 00000001404318A3: add     rsp, 8
 * 00000001404318A7: call    loc_14043189A
 * 00000001404318AC: add     rsp, 8
 * 00000001404318B0: call    loc_1404318A3
 * 00000001404318B5: add     rsp, 8
 * 00000001404318B9: call    loc_1404318AC
 * 00000001404318BE: add     rsp, 8
 * 00000001404318C2: call    loc_1404318B5
 * 00000001404318C7: add     rsp, 8
 * 00000001404318CB: call    loc_1404318BE
 * 00000001404318D0: add     rsp, 8
 * 00000001404318D4: call    loc_1404318C7
 * 00000001404318D9: add     rsp, 8
 * 00000001404318DD: call    loc_1404318D0
 * 00000001404318E2: add     rsp, 8
 * 00000001404318E6: call    loc_1404318D9
 * 00000001404318EB: add     rsp, 8
 * 00000001404318EF: call    loc_1404318E2
 * 00000001404318F4: add     rsp, 8
 * 00000001404318F8: call    loc_1404318EB
 * 00000001404318FD: add     rsp, 8
 * 0000000140431901: call    loc_1404318F4
 * 0000000140431906: add     rsp, 8
 * 000000014043190A: call    loc_1404318FD
 * 000000014043190F: add     rsp, 8
 * 0000000140431913: call    loc_140431906
 * 0000000140431918: add     rsp, 8
 * 000000014043191C: call    loc_14043190F
 * 0000000140431921: add     rsp, 8
 * 0000000140431925: call    loc_140431918
 * 000000014043192A: add     rsp, 8
 * 000000014043192E: call    loc_140431921
 * 0000000140431933: add     rsp, 8
 * 0000000140431937: call    loc_14043192A
 * 000000014043193C: add     rsp, 8
 * 0000000140431940: call    loc_140431933
 * 0000000140431945: add     rsp, 8
 * 0000000140431949: call    loc_14043193C
 * 000000014043194E: add     rsp, 8
 * 0000000140431952: call    loc_140431945
 * 0000000140431957: add     rsp, 8
 * 000000014043195B: call    loc_14043194E
 * 0000000140431960: add     rsp, 8
 * 0000000140431964: call    loc_140431957
 * 0000000140431969: add     rsp, 8
 * 000000014043196D: call    loc_140431960
 * 0000000140431972: add     rsp, 8
 * 0000000140431976: call    loc_140431969
 * 000000014043197B: add     rsp, 8
 * 000000014043197F: mov     eax, 0DADAh
 * 0000000140431984: test    byte ptr gs:862h, 8
 * 000000014043198D: jz      short loc_140431996
 * 000000014043198F: mov     al, 20h ; ' '
 * 0000000140431991: incsspq rax
 * 0000000140431996: test    word ptr gs:860h, 80h
 * 00000001404319A1: jz      short loc_1404319AF
 * 00000001404319A3: xor     eax, eax
 * 00000001404319A5: xor     edx, edx
 * 00000001404319A7: mov     ecx, 1
 * 00000001404319AC: div     rcx
 * 00000001404319AF: mov     rdx, [rbp+0E8h+var_128]
 * 00000001404319B3: mov     rcx, [rbp+0E8h+var_130]
 * 00000001404319B7: mov     rax, [rbp+0E8h+var_138]
 * 00000001404319BB: mov     rsp, rbp
 * 00000001404319BE: mov     rbp, [rbp+0E8h+var_10]
 * 00000001404319C5: add     rsp, 0E8h
 * 00000001404319CC: test    cs:KiKvaShadow, 1
 * 00000001404319D3: jz      short loc_1404319DA
 * 00000001404319D5: jmp     KiKernelExit
 * 00000001404319DA: test    word ptr gs:860h, 100h
 * 00000001404319E5: jz      short loc_1404319EC
 * 00000001404319E7: verw    [rsp+arg_18]
 * 00000001404319EC: swapgs
 * 00000001404319EF: iretq
 * 00000001404319F1: ldmxcsr [rbp+0E8h+var_13C]
 * 00000001404319F5: movaps  xmm0, [rbp+0E8h+var_F8]
 * 00000001404319F9: movaps  xmm1, [rbp+0E8h+var_E8]
 * 00000001404319FD: movaps  xmm2, [rbp+0E8h+var_D8]
 * 0000000140431A01: movaps  xmm3, [rbp+0E8h+var_C8]
 * 0000000140431A05: movaps  xmm4, [rbp+0E8h+var_B8]
 * 0000000140431A09: movaps  xmm5, [rbp+0E8h+var_A8]
 * 0000000140431A0D: mov     r11, [rbp+0E8h+var_108]
 * 0000000140431A11: mov     r10, [rbp+0E8h+var_110]
 * 0000000140431A15: mov     r9, [rbp+0E8h+var_118]
 * 0000000140431A19: mov     r8, [rbp+0E8h+var_120]
 * 0000000140431A1D: mov     rdx, [rbp+0E8h+var_128]
 * 0000000140431A21: mov     rcx, [rbp+0E8h+var_130]
 * 0000000140431A25: mov     rax, [rbp+0E8h+var_138]
 * 0000000140431A29: mov     rsp, rbp
 * 0000000140431A2C: mov     rbp, [rbp+0E8h+var_10]
 * 0000000140431A33: add     rsp, 0E8h
 * 0000000140431A3A: iretq
 */
