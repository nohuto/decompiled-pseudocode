/*
 * XREFs of KxMcheckAlternateReturn @ 0x140430FC0
 * Callers:
 *     KxMcheckAlternateReturnShadow @ 0x140AF6A40 (KxMcheckAlternateReturnShadow.c)
 * Callees:
 *     KiRestoreDebugRegisterState @ 0x14041EF20 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x14041EFA0 (KiSaveDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x14041FD40 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x140424E20 (KiInitiateUserApc.c)
 *     KxMcheckAlternateReturn @ 0x140430FC0 (KxMcheckAlternateReturn.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140435300 (KiFlushBhbDuringTrapEntryOrExit.c)
 *     KiUpdateStibpPairing @ 0x140460E20 (KiUpdateStibpPairing.c)
 *     KiCopyCounters @ 0x1405741A0 (KiCopyCounters.c)
 *     KiMcheckAlternateReturn @ 0x140580390 (KiMcheckAlternateReturn.c)
 */

/*
 * Hex-Rays decompilation failed for KxMcheckAlternateReturn @ 0x140430FC0
 * Reason: Hex-Rays returned no pseudocode for 0x140430FC0
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140430FC0: sub     rsp, 8
 * 0000000140430FC4: push    rbp
 * 0000000140430FC5: sub     rsp, 158h
 * 0000000140430FCC: lea     rbp, [rsp+80h]
 * 0000000140430FD4: mov     [rbp+0E8h+var_13D], 1
 * 0000000140430FD8: mov     [rbp+0E8h+var_138], rax
 * 0000000140430FDC: mov     [rbp+0E8h+var_130], rcx
 * 0000000140430FE0: mov     [rbp+0E8h+var_128], rdx
 * 0000000140430FE4: mov     [rbp+0E8h+var_120], r8
 * 0000000140430FE8: mov     [rbp+0E8h+var_118], r9
 * 0000000140430FEC: mov     [rbp+0E8h+var_110], r10
 * 0000000140430FF0: mov     [rbp+0E8h+var_108], r11
 * 0000000140430FF4: test    [rbp+0E8h+arg_0], 1
 * 0000000140430FFB: jnz     short loc_140431037
 * 0000000140430FFD: xor     edx, edx
 * 0000000140430FFF: rdsspq  rdx
 * 0000000140431004: mov     [rbp+0E8h+var_90], rdx
 * 0000000140431008: lfence
 * 000000014043100B: test    word ptr gs:860h, 1
 * 0000000140431016: jnz     short loc_140431020
 * 0000000140431018: lfence
 * 000000014043101B: jmp     loc_1404312A7
 * 0000000140431020: movzx   eax, word ptr gs:864h
 * 0000000140431029: mov     ecx, 48h ; 'H'
 * 000000014043102E: xor     edx, edx
 * 0000000140431030: wrmsr
 * 0000000140431032: jmp     loc_1404312A7
 * 0000000140431037: test    cs:KiKvaShadow, 1
 * 000000014043103E: jnz     short loc_140431043
 * 0000000140431040: swapgs
 * 0000000140431043: lfence
 * 0000000140431046: mov     rcx, gs:95A8h
 * 000000014043104F: test    rcx, rcx
 * 0000000140431052: jz      short loc_140431073
 * 0000000140431054: rdsspq  rdx
 * 0000000140431059: mov     r10, gs:95A0h
 * 0000000140431062: add     r10, 8
 * 0000000140431066: cmp     rdx, r10
 * 0000000140431069: jnz     short loc_140431073
 * 000000014043106B: rstorssp qword ptr [rcx]
 * 000000014043106F: saveprevssp
 * 0000000140431073: mov     r10, gs:188h
 * 000000014043107C: mov     rcx, gs:188h
 * 0000000140431085: mov     rcx, [rcx+220h]
 * 000000014043108C: mov     rcx, [rcx+9E0h]
 * 0000000140431093: mov     gs:858h, rcx
 * 000000014043109C: mov     cx, gs:850h
 * 00000001404310A5: mov     gs:852h, cx
 * 00000001404310AE: mov     cx, gs:860h
 * 00000001404310B7: mov     gs:854h, cx
 * 00000001404310C0: movzx   eax, word ptr gs:866h
 * 00000001404310C9: cmp     gs:864h, ax
 * 00000001404310D2: jz      short loc_1404310E6
 * 00000001404310D4: mov     gs:864h, ax
 * 00000001404310DD: mov     ecx, 48h ; 'H'
 * 00000001404310E2: xor     edx, edx
 * 00000001404310E4: wrmsr
 * 00000001404310E6: movzx   edx, word ptr gs:860h
 * 00000001404310EF: test    edx, 8
 * 00000001404310F5: jz      short loc_14043110E
 * 00000001404310F7: mov     eax, 1
 * 00000001404310FC: xor     edx, edx
 * 00000001404310FE: mov     ecx, 49h ; 'I'
 * 0000000140431103: wrmsr
 * 0000000140431105: movzx   edx, word ptr gs:860h
 * 000000014043110E: test    edx, 2
 * 0000000140431114: jz      loc_140431251
 * 000000014043111A: call    loc_14043122D
 * 000000014043111F: add     rsp, 8
 * 0000000140431123: call    loc_140431236
 * 0000000140431128: add     rsp, 8
 * 000000014043112C: call    loc_14043111F
 * 0000000140431131: add     rsp, 8
 * 0000000140431135: call    loc_140431128
 * 000000014043113A: add     rsp, 8
 * 000000014043113E: call    loc_140431131
 * 0000000140431143: add     rsp, 8
 * 0000000140431147: call    loc_14043113A
 * 000000014043114C: add     rsp, 8
 * 0000000140431150: call    loc_140431143
 * 0000000140431155: add     rsp, 8
 * 0000000140431159: call    loc_14043114C
 * 000000014043115E: add     rsp, 8
 * 0000000140431162: call    loc_140431155
 * 0000000140431167: add     rsp, 8
 * 000000014043116B: call    loc_14043115E
 * 0000000140431170: add     rsp, 8
 * 0000000140431174: call    loc_140431167
 * 0000000140431179: add     rsp, 8
 * 000000014043117D: call    loc_140431170
 * 0000000140431182: add     rsp, 8
 * 0000000140431186: call    loc_140431179
 * 000000014043118B: add     rsp, 8
 * 000000014043118F: call    loc_140431182
 * 0000000140431194: add     rsp, 8
 * 0000000140431198: call    loc_14043118B
 * 000000014043119D: add     rsp, 8
 * 00000001404311A1: call    loc_140431194
 * 00000001404311A6: add     rsp, 8
 * 00000001404311AA: call    loc_14043119D
 * 00000001404311AF: add     rsp, 8
 * 00000001404311B3: call    loc_1404311A6
 * 00000001404311B8: add     rsp, 8
 * 00000001404311BC: call    loc_1404311AF
 * 00000001404311C1: add     rsp, 8
 * 00000001404311C5: call    loc_1404311B8
 * 00000001404311CA: add     rsp, 8
 * 00000001404311CE: call    loc_1404311C1
 * 00000001404311D3: add     rsp, 8
 * 00000001404311D7: call    loc_1404311CA
 * 00000001404311DC: add     rsp, 8
 * 00000001404311E0: call    loc_1404311D3
 * 00000001404311E5: add     rsp, 8
 * 00000001404311E9: call    loc_1404311DC
 * 00000001404311EE: add     rsp, 8
 * 00000001404311F2: call    loc_1404311E5
 * 00000001404311F7: add     rsp, 8
 * 00000001404311FB: call    loc_1404311EE
 * 0000000140431200: add     rsp, 8
 * 0000000140431204: call    loc_1404311F7
 * 0000000140431209: add     rsp, 8
 * 000000014043120D: call    loc_140431200
 * 0000000140431212: add     rsp, 8
 * 0000000140431216: call    loc_140431209
 * 000000014043121B: add     rsp, 8
 * 000000014043121F: call    loc_140431212
 * 0000000140431224: add     rsp, 8
 * 0000000140431228: call    loc_14043121B
 * 000000014043122D: add     rsp, 8
 * 0000000140431231: call    loc_140431224
 * 0000000140431236: add     rsp, 8
 * 000000014043123A: mov     eax, 0DADAh
 * 000000014043123F: test    byte ptr gs:862h, 8
 * 0000000140431248: jz      short loc_140431251
 * 000000014043124A: mov     al, 20h ; ' '
 * 000000014043124C: incsspq rax
 * 0000000140431251: test    edx, 200h
 * 0000000140431257: jz      short loc_14043125E
 * 0000000140431259: call    KiFlushBhbDuringTrapEntryOrExit
 * 000000014043125E: lfence
 * 0000000140431261: mov     byte ptr gs:856h, 0
 * 000000014043126A: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 0000000140431271: jz      short loc_140431292
 * 0000000140431273: mov     ecx, 6A7h
 * 0000000140431278: rdmsr
 * 000000014043127A: cmp     edx, 0
 * 000000014043127D: jz      short loc_140431292
 * 000000014043127F: mov     ecx, edx
 * 0000000140431281: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 0000000140431287: cmp     edx, ecx
 * 0000000140431289: jz      short loc_140431292
 * 000000014043128B: mov     ecx, 6A7h
 * 0000000140431290: wrmsr
 * 0000000140431292: test    byte ptr [r10+3], 3
 * 0000000140431297: mov     [rbp+0E8h+var_68], 0
 * 00000001404312A0: jz      short loc_1404312A7
 * 00000001404312A2: call    KiSaveDebugRegisterState
 * 00000001404312A7: cld
 * 00000001404312A8: stmxcsr [rbp+0E8h+var_13C]
 * 00000001404312AC: ldmxcsr dword ptr gs:180h
 * 00000001404312B5: movaps  [rbp+0E8h+var_F8], xmm0
 * 00000001404312B9: movaps  [rbp+0E8h+var_E8], xmm1
 * 00000001404312BD: movaps  [rbp+0E8h+var_D8], xmm2
 * 00000001404312C1: movaps  [rbp+0E8h+var_C8], xmm3
 * 00000001404312C5: movaps  [rbp+0E8h+var_B8], xmm4
 * 00000001404312C9: movaps  [rbp+0E8h+var_A8], xmm5
 * 00000001404312CD: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001404312D4: jz      short loc_1404312E2
 * 00000001404312D6: test    [rbp+0E8h+arg_0], 1
 * 00000001404312DD: jz      short loc_1404312E2
 * 00000001404312DF: stac
 * 00000001404312E2: sub     rsp, 30h
 * 00000001404312E6: bt      [rbp+0E8h+arg_8], 9
 * 00000001404312EE: jnb     short loc_1404312F1
 * 00000001404312F0: sti
 * 00000001404312F1: lea     rcx, [rsp+198h+var_178]
 * 00000001404312F6: call    KiMcheckAlternateReturn
 * 00000001404312FB: cli
 * 00000001404312FC: test    [rbp+0E8h+arg_0], 1
 * 0000000140431303: jz      loc_1404315F1
 * 0000000140431309: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 0000000140431310: jz      short loc_140431315
 * 0000000140431312: stac
 * 0000000140431315: mov     rcx, gs:188h
 * 000000014043131E: test    byte ptr [rcx+0C2h], 3
 * 0000000140431325: jz      short loc_140431342
 * 0000000140431327: mov     ecx, 1
 * 000000014043132C: mov     cr8, rcx
 * 0000000140431330: sti
 * 0000000140431331: call    KiInitiateUserApc
 * 0000000140431336: cli
 * 0000000140431337: mov     ecx, 0
 * 000000014043133C: mov     cr8, rcx
 * 0000000140431340: jmp     short loc_140431315
 * 0000000140431342: test    byte ptr gs:86Ch, 2
 * 000000014043134B: jz      short loc_140431354
 * 000000014043134D: xor     ecx, ecx
 * 000000014043134F: call    KiUpdateStibpPairing
 * 0000000140431354: mov     rcx, gs:188h
 * 000000014043135D: test    dword ptr [rcx], 8000000h
 * 0000000140431363: jz      short loc_14043136A
 * 0000000140431365: call    KiRestoreSetContextState
 * 000000014043136A: mov     rcx, gs:188h
 * 0000000140431373: test    dword ptr [rcx], 10000h
 * 0000000140431379: jz      short loc_14043138F
 * 000000014043137B: test    byte ptr [rcx+2], 1
 * 000000014043137F: jz      short loc_14043138F
 * 0000000140431381: call    KiCopyCounters
 * 0000000140431386: mov     rcx, gs:188h
 * 000000014043138F: ldmxcsr [rbp+0E8h+var_13C]
 * 0000000140431393: cmp     [rbp+0E8h+var_68], 0
 * 000000014043139B: jz      short loc_1404313A2
 * 000000014043139D: call    KiRestoreDebugRegisterState
 * 00000001404313A2: mov     rcx, gs:188h
 * 00000001404313AB: bt      dword ptr [rcx+74h], 16h
 * 00000001404313B0: jnb     short loc_1404313DC
 * 00000001404313B2: xor     ecx, ecx
 * 00000001404313B4: rdsspq  rcx
 * 00000001404313B9: mov     r8, gs:95A8h
 * 00000001404313C2: add     r8, 8
 * 00000001404313C6: cmp     rcx, r8
 * 00000001404313C9: jnz     short loc_1404313DC
 * 00000001404313CB: mov     rcx, gs:95A0h
 * 00000001404313D4: rstorssp qword ptr [rcx]
 * 00000001404313D8: saveprevssp
 * 00000001404313DC: movaps  xmm0, [rbp+0E8h+var_F8]
 * 00000001404313E0: movaps  xmm1, [rbp+0E8h+var_E8]
 * 00000001404313E4: movaps  xmm2, [rbp+0E8h+var_D8]
 * 00000001404313E8: movaps  xmm3, [rbp+0E8h+var_C8]
 * 00000001404313EC: movaps  xmm4, [rbp+0E8h+var_B8]
 * 00000001404313F0: movaps  xmm5, [rbp+0E8h+var_A8]
 * 00000001404313F4: mov     r11, [rbp+0E8h+var_108]
 * 00000001404313F8: mov     r10, [rbp+0E8h+var_110]
 * 00000001404313FC: mov     r9, [rbp+0E8h+var_118]
 * 0000000140431400: mov     r8, [rbp+0E8h+var_120]
 * 0000000140431404: mov     byte ptr gs:856h, 0
 * 000000014043140D: movzx   eax, word ptr gs:86Ah
 * 0000000140431416: cmp     gs:864h, ax
 * 000000014043141F: jz      short loc_140431433
 * 0000000140431421: mov     gs:864h, ax
 * 000000014043142A: mov     ecx, 48h ; 'H'
 * 000000014043142F: xor     edx, edx
 * 0000000140431431: wrmsr
 * 0000000140431433: btr     word ptr gs:860h, 2
 * 000000014043143E: jnb     short loc_14043144E
 * 0000000140431440: mov     eax, 1
 * 0000000140431445: xor     edx, edx
 * 0000000140431447: mov     ecx, 49h ; 'I'
 * 000000014043144C: wrmsr
 * 000000014043144E: btr     word ptr gs:860h, 5
 * 0000000140431459: jnb     loc_140431596
 * 000000014043145F: call    loc_140431572
 * 0000000140431464: add     rsp, 8
 * 0000000140431468: call    loc_14043157B
 * 000000014043146D: add     rsp, 8
 * 0000000140431471: call    loc_140431464
 * 0000000140431476: add     rsp, 8
 * 000000014043147A: call    loc_14043146D
 * 000000014043147F: add     rsp, 8
 * 0000000140431483: call    loc_140431476
 * 0000000140431488: add     rsp, 8
 * 000000014043148C: call    loc_14043147F
 * 0000000140431491: add     rsp, 8
 * 0000000140431495: call    loc_140431488
 * 000000014043149A: add     rsp, 8
 * 000000014043149E: call    loc_140431491
 * 00000001404314A3: add     rsp, 8
 * 00000001404314A7: call    loc_14043149A
 * 00000001404314AC: add     rsp, 8
 * 00000001404314B0: call    loc_1404314A3
 * 00000001404314B5: add     rsp, 8
 * 00000001404314B9: call    loc_1404314AC
 * 00000001404314BE: add     rsp, 8
 * 00000001404314C2: call    loc_1404314B5
 * 00000001404314C7: add     rsp, 8
 * 00000001404314CB: call    loc_1404314BE
 * 00000001404314D0: add     rsp, 8
 * 00000001404314D4: call    loc_1404314C7
 * 00000001404314D9: add     rsp, 8
 * 00000001404314DD: call    loc_1404314D0
 * 00000001404314E2: add     rsp, 8
 * 00000001404314E6: call    loc_1404314D9
 * 00000001404314EB: add     rsp, 8
 * 00000001404314EF: call    loc_1404314E2
 * 00000001404314F4: add     rsp, 8
 * 00000001404314F8: call    loc_1404314EB
 * 00000001404314FD: add     rsp, 8
 * 0000000140431501: call    loc_1404314F4
 * 0000000140431506: add     rsp, 8
 * 000000014043150A: call    loc_1404314FD
 * 000000014043150F: add     rsp, 8
 * 0000000140431513: call    loc_140431506
 * 0000000140431518: add     rsp, 8
 * 000000014043151C: call    loc_14043150F
 * 0000000140431521: add     rsp, 8
 * 0000000140431525: call    loc_140431518
 * 000000014043152A: add     rsp, 8
 * 000000014043152E: call    loc_140431521
 * 0000000140431533: add     rsp, 8
 * 0000000140431537: call    loc_14043152A
 * 000000014043153C: add     rsp, 8
 * 0000000140431540: call    loc_140431533
 * 0000000140431545: add     rsp, 8
 * 0000000140431549: call    loc_14043153C
 * 000000014043154E: add     rsp, 8
 * 0000000140431552: call    loc_140431545
 * 0000000140431557: add     rsp, 8
 * 000000014043155B: call    loc_14043154E
 * 0000000140431560: add     rsp, 8
 * 0000000140431564: call    loc_140431557
 * 0000000140431569: add     rsp, 8
 * 000000014043156D: call    loc_140431560
 * 0000000140431572: add     rsp, 8
 * 0000000140431576: call    loc_140431569
 * 000000014043157B: add     rsp, 8
 * 000000014043157F: mov     eax, 0DADAh
 * 0000000140431584: test    byte ptr gs:862h, 8
 * 000000014043158D: jz      short loc_140431596
 * 000000014043158F: mov     al, 20h ; ' '
 * 0000000140431591: incsspq rax
 * 0000000140431596: test    word ptr gs:860h, 80h
 * 00000001404315A1: jz      short loc_1404315AF
 * 00000001404315A3: xor     eax, eax
 * 00000001404315A5: xor     edx, edx
 * 00000001404315A7: mov     ecx, 1
 * 00000001404315AC: div     rcx
 * 00000001404315AF: mov     rdx, [rbp+0E8h+var_128]
 * 00000001404315B3: mov     rcx, [rbp+0E8h+var_130]
 * 00000001404315B7: mov     rax, [rbp+0E8h+var_138]
 * 00000001404315BB: mov     rsp, rbp
 * 00000001404315BE: mov     rbp, [rbp+0E8h+var_10]
 * 00000001404315C5: add     rsp, 0E8h
 * 00000001404315CC: test    cs:KiKvaShadow, 1
 * 00000001404315D3: jz      short loc_1404315DA
 * 00000001404315D5: jmp     KiKernelExit
 * 00000001404315DA: test    word ptr gs:860h, 100h
 * 00000001404315E5: jz      short loc_1404315EC
 * 00000001404315E7: verw    [rsp+arg_18]
 * 00000001404315EC: swapgs
 * 00000001404315EF: iretq
 * 00000001404315F1: ldmxcsr [rbp+0E8h+var_13C]
 * 00000001404315F5: movaps  xmm0, [rbp+0E8h+var_F8]
 * 00000001404315F9: movaps  xmm1, [rbp+0E8h+var_E8]
 * 00000001404315FD: movaps  xmm2, [rbp+0E8h+var_D8]
 * 0000000140431601: movaps  xmm3, [rbp+0E8h+var_C8]
 * 0000000140431605: movaps  xmm4, [rbp+0E8h+var_B8]
 * 0000000140431609: movaps  xmm5, [rbp+0E8h+var_A8]
 * 000000014043160D: mov     r11, [rbp+0E8h+var_108]
 * 0000000140431611: mov     r10, [rbp+0E8h+var_110]
 * 0000000140431615: mov     r9, [rbp+0E8h+var_118]
 * 0000000140431619: mov     r8, [rbp+0E8h+var_120]
 * 000000014043161D: mov     rdx, [rbp+0E8h+var_128]
 * 0000000140431621: mov     rcx, [rbp+0E8h+var_130]
 * 0000000140431625: mov     rax, [rbp+0E8h+var_138]
 * 0000000140431629: mov     rsp, rbp
 * 000000014043162C: mov     rbp, [rbp+0E8h+var_10]
 * 0000000140431633: add     rsp, 0E8h
 * 000000014043163A: iretq
 */
