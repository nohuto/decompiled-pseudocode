/*
 * XREFs of KiVirtualizationException @ 0x140431E40
 * Callers:
 *     KiVirtualizationExceptionShadow @ 0x140AF6B40 (KiVirtualizationExceptionShadow.c)
 * Callees:
 *     KzLowerIrql @ 0x14023E560 (KzLowerIrql.c)
 *     KzRaiseIrql @ 0x1402AFFF0 (KzRaiseIrql.c)
 *     KiRestoreDebugRegisterState @ 0x14041F2B0 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x14041F330 (KiSaveDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1404200D0 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x1404251B0 (KiInitiateUserApc.c)
 *     KiVirtualizationException @ 0x140431E40 (KiVirtualizationException.c)
 *     KiBugCheckDispatch @ 0x140434CC0 (KiBugCheckDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140435700 (KiFlushBhbDuringTrapEntryOrExit.c)
 *     KiUpdateStibpPairing @ 0x140461220 (KiUpdateStibpPairing.c)
 *     KiCopyCounters @ 0x1405746E0 (KiCopyCounters.c)
 *     KiEpfHandleNotification @ 0x140579500 (KiEpfHandleNotification.c)
 */

/*
 * Hex-Rays decompilation failed for KiVirtualizationException @ 0x140431E40
 * Reason: Hex-Rays returned no pseudocode for 0x140431E40
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140431E40: sub     rsp, 8
 * 0000000140431E44: push    rbp
 * 0000000140431E45: sub     rsp, 158h
 * 0000000140431E4C: lea     rbp, [rsp+80h]
 * 0000000140431E54: mov     [rbp+0E8h+var_13D], 1
 * 0000000140431E58: mov     [rbp+0E8h+var_138], rax
 * 0000000140431E5C: mov     [rbp+0E8h+var_130], rcx
 * 0000000140431E60: mov     [rbp+0E8h+var_128], rdx
 * 0000000140431E64: mov     [rbp+0E8h+var_120], r8
 * 0000000140431E68: mov     [rbp+0E8h+var_118], r9
 * 0000000140431E6C: mov     [rbp+0E8h+var_110], r10
 * 0000000140431E70: mov     [rbp+0E8h+var_108], r11
 * 0000000140431E74: test    [rbp+0E8h+arg_0], 1
 * 0000000140431E7B: jnz     short loc_140431EB7
 * 0000000140431E7D: xor     edx, edx
 * 0000000140431E7F: rdsspq  rdx
 * 0000000140431E84: mov     [rbp+0E8h+var_90], rdx
 * 0000000140431E88: lfence
 * 0000000140431E8B: test    word ptr gs:860h, 1
 * 0000000140431E96: jnz     short loc_140431EA0
 * 0000000140431E98: lfence
 * 0000000140431E9B: jmp     loc_140432127
 * 0000000140431EA0: movzx   eax, word ptr gs:864h
 * 0000000140431EA9: mov     ecx, 48h ; 'H'
 * 0000000140431EAE: xor     edx, edx
 * 0000000140431EB0: wrmsr
 * 0000000140431EB2: jmp     loc_140432127
 * 0000000140431EB7: test    cs:KiKvaShadow, 1
 * 0000000140431EBE: jnz     short loc_140431EC3
 * 0000000140431EC0: swapgs
 * 0000000140431EC3: lfence
 * 0000000140431EC6: mov     rcx, gs:95A8h
 * 0000000140431ECF: test    rcx, rcx
 * 0000000140431ED2: jz      short loc_140431EF3
 * 0000000140431ED4: rdsspq  rdx
 * 0000000140431ED9: mov     r10, gs:95A0h
 * 0000000140431EE2: add     r10, 8
 * 0000000140431EE6: cmp     rdx, r10
 * 0000000140431EE9: jnz     short loc_140431EF3
 * 0000000140431EEB: rstorssp qword ptr [rcx]
 * 0000000140431EEF: saveprevssp
 * 0000000140431EF3: mov     r10, gs:188h
 * 0000000140431EFC: mov     rcx, gs:188h
 * 0000000140431F05: mov     rcx, [rcx+220h]
 * 0000000140431F0C: mov     rcx, [rcx+9E0h]
 * 0000000140431F13: mov     gs:858h, rcx
 * 0000000140431F1C: mov     cx, gs:850h
 * 0000000140431F25: mov     gs:852h, cx
 * 0000000140431F2E: mov     cx, gs:860h
 * 0000000140431F37: mov     gs:854h, cx
 * 0000000140431F40: movzx   eax, word ptr gs:866h
 * 0000000140431F49: cmp     gs:864h, ax
 * 0000000140431F52: jz      short loc_140431F66
 * 0000000140431F54: mov     gs:864h, ax
 * 0000000140431F5D: mov     ecx, 48h ; 'H'
 * 0000000140431F62: xor     edx, edx
 * 0000000140431F64: wrmsr
 * 0000000140431F66: movzx   edx, word ptr gs:860h
 * 0000000140431F6F: test    edx, 8
 * 0000000140431F75: jz      short loc_140431F8E
 * 0000000140431F77: mov     eax, 1
 * 0000000140431F7C: xor     edx, edx
 * 0000000140431F7E: mov     ecx, 49h ; 'I'
 * 0000000140431F83: wrmsr
 * 0000000140431F85: movzx   edx, word ptr gs:860h
 * 0000000140431F8E: test    edx, 2
 * 0000000140431F94: jz      loc_1404320D1
 * 0000000140431F9A: call    loc_1404320AD
 * 0000000140431F9F: add     rsp, 8
 * 0000000140431FA3: call    loc_1404320B6
 * 0000000140431FA8: add     rsp, 8
 * 0000000140431FAC: call    loc_140431F9F
 * 0000000140431FB1: add     rsp, 8
 * 0000000140431FB5: call    loc_140431FA8
 * 0000000140431FBA: add     rsp, 8
 * 0000000140431FBE: call    loc_140431FB1
 * 0000000140431FC3: add     rsp, 8
 * 0000000140431FC7: call    loc_140431FBA
 * 0000000140431FCC: add     rsp, 8
 * 0000000140431FD0: call    loc_140431FC3
 * 0000000140431FD5: add     rsp, 8
 * 0000000140431FD9: call    loc_140431FCC
 * 0000000140431FDE: add     rsp, 8
 * 0000000140431FE2: call    loc_140431FD5
 * 0000000140431FE7: add     rsp, 8
 * 0000000140431FEB: call    loc_140431FDE
 * 0000000140431FF0: add     rsp, 8
 * 0000000140431FF4: call    loc_140431FE7
 * 0000000140431FF9: add     rsp, 8
 * 0000000140431FFD: call    loc_140431FF0
 * 0000000140432002: add     rsp, 8
 * 0000000140432006: call    loc_140431FF9
 * 000000014043200B: add     rsp, 8
 * 000000014043200F: call    loc_140432002
 * 0000000140432014: add     rsp, 8
 * 0000000140432018: call    loc_14043200B
 * 000000014043201D: add     rsp, 8
 * 0000000140432021: call    loc_140432014
 * 0000000140432026: add     rsp, 8
 * 000000014043202A: call    loc_14043201D
 * 000000014043202F: add     rsp, 8
 * 0000000140432033: call    loc_140432026
 * 0000000140432038: add     rsp, 8
 * 000000014043203C: call    loc_14043202F
 * 0000000140432041: add     rsp, 8
 * 0000000140432045: call    loc_140432038
 * 000000014043204A: add     rsp, 8
 * 000000014043204E: call    loc_140432041
 * 0000000140432053: add     rsp, 8
 * 0000000140432057: call    loc_14043204A
 * 000000014043205C: add     rsp, 8
 * 0000000140432060: call    loc_140432053
 * 0000000140432065: add     rsp, 8
 * 0000000140432069: call    loc_14043205C
 * 000000014043206E: add     rsp, 8
 * 0000000140432072: call    loc_140432065
 * 0000000140432077: add     rsp, 8
 * 000000014043207B: call    loc_14043206E
 * 0000000140432080: add     rsp, 8
 * 0000000140432084: call    loc_140432077
 * 0000000140432089: add     rsp, 8
 * 000000014043208D: call    loc_140432080
 * 0000000140432092: add     rsp, 8
 * 0000000140432096: call    loc_140432089
 * 000000014043209B: add     rsp, 8
 * 000000014043209F: call    loc_140432092
 * 00000001404320A4: add     rsp, 8
 * 00000001404320A8: call    loc_14043209B
 * 00000001404320AD: add     rsp, 8
 * 00000001404320B1: call    loc_1404320A4
 * 00000001404320B6: add     rsp, 8
 * 00000001404320BA: mov     eax, 0DADAh
 * 00000001404320BF: test    byte ptr gs:862h, 8
 * 00000001404320C8: jz      short loc_1404320D1
 * 00000001404320CA: mov     al, 20h ; ' '
 * 00000001404320CC: incsspq rax
 * 00000001404320D1: test    edx, 200h
 * 00000001404320D7: jz      short loc_1404320DE
 * 00000001404320D9: call    KiFlushBhbDuringTrapEntryOrExit
 * 00000001404320DE: lfence
 * 00000001404320E1: mov     byte ptr gs:856h, 0
 * 00000001404320EA: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 00000001404320F1: jz      short loc_140432112
 * 00000001404320F3: mov     ecx, 6A7h
 * 00000001404320F8: rdmsr
 * 00000001404320FA: cmp     edx, 0
 * 00000001404320FD: jz      short loc_140432112
 * 00000001404320FF: mov     ecx, edx
 * 0000000140432101: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 0000000140432107: cmp     edx, ecx
 * 0000000140432109: jz      short loc_140432112
 * 000000014043210B: mov     ecx, 6A7h
 * 0000000140432110: wrmsr
 * 0000000140432112: test    byte ptr [r10+3], 3
 * 0000000140432117: mov     [rbp+0E8h+var_68], 0
 * 0000000140432120: jz      short loc_140432127
 * 0000000140432122: call    KiSaveDebugRegisterState
 * 0000000140432127: cld
 * 0000000140432128: stmxcsr [rbp+0E8h+var_13C]
 * 000000014043212C: ldmxcsr dword ptr gs:180h
 * 0000000140432135: movaps  [rbp+0E8h+var_F8], xmm0
 * 0000000140432139: movaps  [rbp+0E8h+var_E8], xmm1
 * 000000014043213D: movaps  [rbp+0E8h+var_D8], xmm2
 * 0000000140432141: movaps  [rbp+0E8h+var_C8], xmm3
 * 0000000140432145: movaps  [rbp+0E8h+var_B8], xmm4
 * 0000000140432149: movaps  [rbp+0E8h+var_A8], xmm5
 * 000000014043214D: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 0000000140432154: jz      short loc_140432162
 * 0000000140432156: test    [rbp+0E8h+arg_0], 1
 * 000000014043215D: jz      short loc_140432162
 * 000000014043215F: stac
 * 0000000140432162: mov     r9, gs:8888h
 * 000000014043216B: test    r9, r9
 * 000000014043216E: jz      loc_14043250C
 * 0000000140432174: cmp     dword ptr [r9+44h], 1
 * 0000000140432179: jnz     loc_14043250C
 * 000000014043217F: test    [rbp+0E8h+arg_8], 200h
 * 0000000140432189: jz      loc_14043250C
 * 000000014043218F: mov     rax, cr8
 * 0000000140432193: mov     dword ptr [rbp+0E8h+NewIrql], eax
 * 0000000140432196: cmp     al, 2
 * 0000000140432198: jge     loc_14043250C
 * 000000014043219E: mov     ecx, 2; NewIrql
 * 00000001404321A3: call    KzRaiseIrql
 * 00000001404321A8: sti
 * 00000001404321A9: mov     r9, gs:8888h
 * 00000001404321B2: mov     rcx, [r9+48h]
 * 00000001404321B6: mov     dword ptr [r9+44h], 0
 * 00000001404321BE: call    KiEpfHandleNotification
 * 00000001404321C3: cli
 * 00000001404321C4: mov     ecx, dword ptr [rbp+0E8h+NewIrql]; NewIrql
 * 00000001404321C7: call    KzLowerIrql
 * 00000001404321CC: test    [rbp+0E8h+arg_0], 1
 * 00000001404321D3: jz      loc_1404324C1
 * 00000001404321D9: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001404321E0: jz      short loc_1404321E5
 * 00000001404321E2: stac
 * 00000001404321E5: mov     rcx, gs:188h
 * 00000001404321EE: test    byte ptr [rcx+0C2h], 3
 * 00000001404321F5: jz      short loc_140432212
 * 00000001404321F7: mov     ecx, 1
 * 00000001404321FC: mov     cr8, rcx
 * 0000000140432200: sti
 * 0000000140432201: call    KiInitiateUserApc
 * 0000000140432206: cli
 * 0000000140432207: mov     ecx, 0
 * 000000014043220C: mov     cr8, rcx
 * 0000000140432210: jmp     short loc_1404321E5
 * 0000000140432212: test    byte ptr gs:86Ch, 2
 * 000000014043221B: jz      short loc_140432224
 * 000000014043221D: xor     ecx, ecx
 * 000000014043221F: call    KiUpdateStibpPairing
 * 0000000140432224: mov     rcx, gs:188h
 * 000000014043222D: test    dword ptr [rcx], 8000000h
 * 0000000140432233: jz      short loc_14043223A
 * 0000000140432235: call    KiRestoreSetContextState
 * 000000014043223A: mov     rcx, gs:188h
 * 0000000140432243: test    dword ptr [rcx], 10000h
 * 0000000140432249: jz      short loc_14043225F
 * 000000014043224B: test    byte ptr [rcx+2], 1
 * 000000014043224F: jz      short loc_14043225F
 * 0000000140432251: call    KiCopyCounters
 * 0000000140432256: mov     rcx, gs:188h
 * 000000014043225F: ldmxcsr [rbp+0E8h+var_13C]
 * 0000000140432263: cmp     [rbp+0E8h+var_68], 0
 * 000000014043226B: jz      short loc_140432272
 * 000000014043226D: call    KiRestoreDebugRegisterState
 * 0000000140432272: mov     rcx, gs:188h
 * 000000014043227B: bt      dword ptr [rcx+74h], 16h
 * 0000000140432280: jnb     short loc_1404322AC
 * 0000000140432282: xor     ecx, ecx
 * 0000000140432284: rdsspq  rcx
 * 0000000140432289: mov     r8, gs:95A8h
 * 0000000140432292: add     r8, 8
 * 0000000140432296: cmp     rcx, r8
 * 0000000140432299: jnz     short loc_1404322AC
 * 000000014043229B: mov     rcx, gs:95A0h
 * 00000001404322A4: rstorssp qword ptr [rcx]
 * 00000001404322A8: saveprevssp
 * 00000001404322AC: movaps  xmm0, [rbp+0E8h+var_F8]
 * 00000001404322B0: movaps  xmm1, [rbp+0E8h+var_E8]
 * 00000001404322B4: movaps  xmm2, [rbp+0E8h+var_D8]
 * 00000001404322B8: movaps  xmm3, [rbp+0E8h+var_C8]
 * 00000001404322BC: movaps  xmm4, [rbp+0E8h+var_B8]
 * 00000001404322C0: movaps  xmm5, [rbp+0E8h+var_A8]
 * 00000001404322C4: mov     r11, [rbp+0E8h+var_108]
 * 00000001404322C8: mov     r10, [rbp+0E8h+var_110]
 * 00000001404322CC: mov     r9, [rbp+0E8h+var_118]
 * 00000001404322D0: mov     r8, [rbp+0E8h+var_120]
 * 00000001404322D4: mov     byte ptr gs:856h, 0
 * 00000001404322DD: movzx   eax, word ptr gs:86Ah
 * 00000001404322E6: cmp     gs:864h, ax
 * 00000001404322EF: jz      short loc_140432303
 * 00000001404322F1: mov     gs:864h, ax
 * 00000001404322FA: mov     ecx, 48h ; 'H'
 * 00000001404322FF: xor     edx, edx
 * 0000000140432301: wrmsr
 * 0000000140432303: btr     word ptr gs:860h, 2
 * 000000014043230E: jnb     short loc_14043231E
 * 0000000140432310: mov     eax, 1
 * 0000000140432315: xor     edx, edx
 * 0000000140432317: mov     ecx, 49h ; 'I'
 * 000000014043231C: wrmsr
 * 000000014043231E: btr     word ptr gs:860h, 5
 * 0000000140432329: jnb     loc_140432466
 * 000000014043232F: call    loc_140432442
 * 0000000140432334: add     rsp, 8
 * 0000000140432338: call    loc_14043244B
 * 000000014043233D: add     rsp, 8
 * 0000000140432341: call    loc_140432334
 * 0000000140432346: add     rsp, 8
 * 000000014043234A: call    loc_14043233D
 * 000000014043234F: add     rsp, 8
 * 0000000140432353: call    loc_140432346
 * 0000000140432358: add     rsp, 8
 * 000000014043235C: call    loc_14043234F
 * 0000000140432361: add     rsp, 8
 * 0000000140432365: call    loc_140432358
 * 000000014043236A: add     rsp, 8
 * 000000014043236E: call    loc_140432361
 * 0000000140432373: add     rsp, 8
 * 0000000140432377: call    loc_14043236A
 * 000000014043237C: add     rsp, 8
 * 0000000140432380: call    loc_140432373
 * 0000000140432385: add     rsp, 8
 * 0000000140432389: call    loc_14043237C
 * 000000014043238E: add     rsp, 8
 * 0000000140432392: call    loc_140432385
 * 0000000140432397: add     rsp, 8
 * 000000014043239B: call    loc_14043238E
 * 00000001404323A0: add     rsp, 8
 * 00000001404323A4: call    loc_140432397
 * 00000001404323A9: add     rsp, 8
 * 00000001404323AD: call    loc_1404323A0
 * 00000001404323B2: add     rsp, 8
 * 00000001404323B6: call    loc_1404323A9
 * 00000001404323BB: add     rsp, 8
 * 00000001404323BF: call    loc_1404323B2
 * 00000001404323C4: add     rsp, 8
 * 00000001404323C8: call    loc_1404323BB
 * 00000001404323CD: add     rsp, 8
 * 00000001404323D1: call    loc_1404323C4
 * 00000001404323D6: add     rsp, 8
 * 00000001404323DA: call    loc_1404323CD
 * 00000001404323DF: add     rsp, 8
 * 00000001404323E3: call    loc_1404323D6
 * 00000001404323E8: add     rsp, 8
 * 00000001404323EC: call    loc_1404323DF
 * 00000001404323F1: add     rsp, 8
 * 00000001404323F5: call    loc_1404323E8
 * 00000001404323FA: add     rsp, 8
 * 00000001404323FE: call    loc_1404323F1
 * 0000000140432403: add     rsp, 8
 * 0000000140432407: call    loc_1404323FA
 * 000000014043240C: add     rsp, 8
 * 0000000140432410: call    loc_140432403
 * 0000000140432415: add     rsp, 8
 * 0000000140432419: call    loc_14043240C
 * 000000014043241E: add     rsp, 8
 * 0000000140432422: call    loc_140432415
 * 0000000140432427: add     rsp, 8
 * 000000014043242B: call    loc_14043241E
 * 0000000140432430: add     rsp, 8
 * 0000000140432434: call    loc_140432427
 * 0000000140432439: add     rsp, 8
 * 000000014043243D: call    loc_140432430
 * 0000000140432442: add     rsp, 8
 * 0000000140432446: call    loc_140432439
 * 000000014043244B: add     rsp, 8
 * 000000014043244F: mov     eax, 0DADAh
 * 0000000140432454: test    byte ptr gs:862h, 8
 * 000000014043245D: jz      short loc_140432466
 * 000000014043245F: mov     al, 20h ; ' '
 * 0000000140432461: incsspq rax
 * 0000000140432466: test    word ptr gs:860h, 80h
 * 0000000140432471: jz      short loc_14043247F
 * 0000000140432473: xor     eax, eax
 * 0000000140432475: xor     edx, edx
 * 0000000140432477: mov     ecx, 1
 * 000000014043247C: div     rcx
 * 000000014043247F: mov     rdx, [rbp+0E8h+var_128]
 * 0000000140432483: mov     rcx, [rbp+0E8h+var_130]
 * 0000000140432487: mov     rax, [rbp+0E8h+var_138]
 * 000000014043248B: mov     rsp, rbp
 * 000000014043248E: mov     rbp, [rbp+0E8h+var_10]
 * 0000000140432495: add     rsp, 0E8h
 * 000000014043249C: test    cs:KiKvaShadow, 1
 * 00000001404324A3: jz      short loc_1404324AA
 * 00000001404324A5: jmp     KiKernelExit
 * 00000001404324AA: test    word ptr gs:860h, 100h
 * 00000001404324B5: jz      short loc_1404324BC
 * 00000001404324B7: verw    [rsp+arg_18]
 * 00000001404324BC: swapgs
 * 00000001404324BF: iretq
 * 00000001404324C1: ldmxcsr [rbp+0E8h+var_13C]
 * 00000001404324C5: movaps  xmm0, [rbp+0E8h+var_F8]
 * 00000001404324C9: movaps  xmm1, [rbp+0E8h+var_E8]
 * 00000001404324CD: movaps  xmm2, [rbp+0E8h+var_D8]
 * 00000001404324D1: movaps  xmm3, [rbp+0E8h+var_C8]
 * 00000001404324D5: movaps  xmm4, [rbp+0E8h+var_B8]
 * 00000001404324D9: movaps  xmm5, [rbp+0E8h+var_A8]
 * 00000001404324DD: mov     r11, [rbp+0E8h+var_108]
 * 00000001404324E1: mov     r10, [rbp+0E8h+var_110]
 * 00000001404324E5: mov     r9, [rbp+0E8h+var_118]
 * 00000001404324E9: mov     r8, [rbp+0E8h+var_120]
 * 00000001404324ED: mov     rdx, [rbp+0E8h+var_128]
 * 00000001404324F1: mov     rcx, [rbp+0E8h+var_130]
 * 00000001404324F5: mov     rax, [rbp+0E8h+var_138]
 * 00000001404324F9: mov     rsp, rbp
 * 00000001404324FC: mov     rbp, [rbp+0E8h+var_10]
 * 0000000140432503: add     rsp, 0E8h
 * 000000014043250A: iretq
 * 000000014043250C: mov     r10, [rbp+0E8h]
 * 0000000140432513: mov     r9, gs:8888h
 * 000000014043251C: movzx   r8, [rbp+0E8h+NewIrql]
 * 0000000140432521: mov     ecx, 7Fh
 * 0000000140432526: mov     edx, 20h ; ' '
 * 000000014043252B: call    KiBugCheckDispatch
 */
