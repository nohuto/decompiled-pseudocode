/*
 * XREFs of KiStackFault @ 0x14042F200
 * Callers:
 *     KiStackFaultShadow @ 0x140AF6740 (KiStackFaultShadow.c)
 * Callees:
 *     KiSaveDebugRegisterState @ 0x14041EFA0 (KiSaveDebugRegisterState.c)
 *     KiStackFault @ 0x14042F200 (KiStackFault.c)
 *     KiExceptionDispatch @ 0x140434940 (KiExceptionDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140435300 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiStackFault @ 0x14042F200
 * Reason: Hex-Rays returned no pseudocode for 0x14042F200
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014042F200: push    rbp
 * 000000014042F201: sub     rsp, 158h
 * 000000014042F208: lea     rbp, [rsp+80h]
 * 000000014042F210: mov     [rbp+0D8h+var_12D], 1
 * 000000014042F214: mov     [rbp+0D8h+var_128], rax
 * 000000014042F218: mov     [rbp+0D8h+var_120], rcx
 * 000000014042F21C: mov     [rbp+0D8h+var_118], rdx
 * 000000014042F220: mov     [rbp+0D8h+var_110], r8
 * 000000014042F224: mov     [rbp+0D8h+var_108], r9
 * 000000014042F228: mov     [rbp+0D8h+var_100], r10
 * 000000014042F22C: mov     [rbp+0D8h+var_F8], r11
 * 000000014042F230: test    [rbp+0D8h+arg_8], 1
 * 000000014042F237: jnz     short loc_14042F273
 * 000000014042F239: xor     edx, edx
 * 000000014042F23B: rdsspq  rdx
 * 000000014042F240: mov     [rbp+0D8h+var_80], rdx
 * 000000014042F244: lfence
 * 000000014042F247: test    word ptr gs:860h, 1
 * 000000014042F252: jnz     short loc_14042F25C
 * 000000014042F254: lfence
 * 000000014042F257: jmp     loc_14042F4E3
 * 000000014042F25C: movzx   eax, word ptr gs:864h
 * 000000014042F265: mov     ecx, 48h ; 'H'
 * 000000014042F26A: xor     edx, edx
 * 000000014042F26C: wrmsr
 * 000000014042F26E: jmp     loc_14042F4E3
 * 000000014042F273: test    cs:KiKvaShadow, 1
 * 000000014042F27A: jnz     short loc_14042F27F
 * 000000014042F27C: swapgs
 * 000000014042F27F: lfence
 * 000000014042F282: mov     rcx, gs:95A8h
 * 000000014042F28B: test    rcx, rcx
 * 000000014042F28E: jz      short loc_14042F2AF
 * 000000014042F290: rdsspq  rdx
 * 000000014042F295: mov     r10, gs:95A0h
 * 000000014042F29E: add     r10, 8
 * 000000014042F2A2: cmp     rdx, r10
 * 000000014042F2A5: jnz     short loc_14042F2AF
 * 000000014042F2A7: rstorssp qword ptr [rcx]
 * 000000014042F2AB: saveprevssp
 * 000000014042F2AF: mov     r10, gs:188h
 * 000000014042F2B8: mov     rcx, gs:188h
 * 000000014042F2C1: mov     rcx, [rcx+220h]
 * 000000014042F2C8: mov     rcx, [rcx+9E0h]
 * 000000014042F2CF: mov     gs:858h, rcx
 * 000000014042F2D8: mov     cx, gs:850h
 * 000000014042F2E1: mov     gs:852h, cx
 * 000000014042F2EA: mov     cx, gs:860h
 * 000000014042F2F3: mov     gs:854h, cx
 * 000000014042F2FC: movzx   eax, word ptr gs:866h
 * 000000014042F305: cmp     gs:864h, ax
 * 000000014042F30E: jz      short loc_14042F322
 * 000000014042F310: mov     gs:864h, ax
 * 000000014042F319: mov     ecx, 48h ; 'H'
 * 000000014042F31E: xor     edx, edx
 * 000000014042F320: wrmsr
 * 000000014042F322: movzx   edx, word ptr gs:860h
 * 000000014042F32B: test    edx, 8
 * 000000014042F331: jz      short loc_14042F34A
 * 000000014042F333: mov     eax, 1
 * 000000014042F338: xor     edx, edx
 * 000000014042F33A: mov     ecx, 49h ; 'I'
 * 000000014042F33F: wrmsr
 * 000000014042F341: movzx   edx, word ptr gs:860h
 * 000000014042F34A: test    edx, 2
 * 000000014042F350: jz      loc_14042F48D
 * 000000014042F356: call    loc_14042F469
 * 000000014042F35B: add     rsp, 8
 * 000000014042F35F: call    loc_14042F472
 * 000000014042F364: add     rsp, 8
 * 000000014042F368: call    loc_14042F35B
 * 000000014042F36D: add     rsp, 8
 * 000000014042F371: call    loc_14042F364
 * 000000014042F376: add     rsp, 8
 * 000000014042F37A: call    loc_14042F36D
 * 000000014042F37F: add     rsp, 8
 * 000000014042F383: call    loc_14042F376
 * 000000014042F388: add     rsp, 8
 * 000000014042F38C: call    loc_14042F37F
 * 000000014042F391: add     rsp, 8
 * 000000014042F395: call    loc_14042F388
 * 000000014042F39A: add     rsp, 8
 * 000000014042F39E: call    loc_14042F391
 * 000000014042F3A3: add     rsp, 8
 * 000000014042F3A7: call    loc_14042F39A
 * 000000014042F3AC: add     rsp, 8
 * 000000014042F3B0: call    loc_14042F3A3
 * 000000014042F3B5: add     rsp, 8
 * 000000014042F3B9: call    loc_14042F3AC
 * 000000014042F3BE: add     rsp, 8
 * 000000014042F3C2: call    loc_14042F3B5
 * 000000014042F3C7: add     rsp, 8
 * 000000014042F3CB: call    loc_14042F3BE
 * 000000014042F3D0: add     rsp, 8
 * 000000014042F3D4: call    loc_14042F3C7
 * 000000014042F3D9: add     rsp, 8
 * 000000014042F3DD: call    loc_14042F3D0
 * 000000014042F3E2: add     rsp, 8
 * 000000014042F3E6: call    loc_14042F3D9
 * 000000014042F3EB: add     rsp, 8
 * 000000014042F3EF: call    loc_14042F3E2
 * 000000014042F3F4: add     rsp, 8
 * 000000014042F3F8: call    loc_14042F3EB
 * 000000014042F3FD: add     rsp, 8
 * 000000014042F401: call    loc_14042F3F4
 * 000000014042F406: add     rsp, 8
 * 000000014042F40A: call    loc_14042F3FD
 * 000000014042F40F: add     rsp, 8
 * 000000014042F413: call    loc_14042F406
 * 000000014042F418: add     rsp, 8
 * 000000014042F41C: call    loc_14042F40F
 * 000000014042F421: add     rsp, 8
 * 000000014042F425: call    loc_14042F418
 * 000000014042F42A: add     rsp, 8
 * 000000014042F42E: call    loc_14042F421
 * 000000014042F433: add     rsp, 8
 * 000000014042F437: call    loc_14042F42A
 * 000000014042F43C: add     rsp, 8
 * 000000014042F440: call    loc_14042F433
 * 000000014042F445: add     rsp, 8
 * 000000014042F449: call    loc_14042F43C
 * 000000014042F44E: add     rsp, 8
 * 000000014042F452: call    loc_14042F445
 * 000000014042F457: add     rsp, 8
 * 000000014042F45B: call    loc_14042F44E
 * 000000014042F460: add     rsp, 8
 * 000000014042F464: call    loc_14042F457
 * 000000014042F469: add     rsp, 8
 * 000000014042F46D: call    loc_14042F460
 * 000000014042F472: add     rsp, 8
 * 000000014042F476: mov     eax, 0DADAh
 * 000000014042F47B: test    byte ptr gs:862h, 8
 * 000000014042F484: jz      short loc_14042F48D
 * 000000014042F486: mov     al, 20h ; ' '
 * 000000014042F488: incsspq rax
 * 000000014042F48D: test    edx, 200h
 * 000000014042F493: jz      short loc_14042F49A
 * 000000014042F495: call    KiFlushBhbDuringTrapEntryOrExit
 * 000000014042F49A: lfence
 * 000000014042F49D: mov     byte ptr gs:856h, 0
 * 000000014042F4A6: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 000000014042F4AD: jz      short loc_14042F4CE
 * 000000014042F4AF: mov     ecx, 6A7h
 * 000000014042F4B4: rdmsr
 * 000000014042F4B6: cmp     edx, 0
 * 000000014042F4B9: jz      short loc_14042F4CE
 * 000000014042F4BB: mov     ecx, edx
 * 000000014042F4BD: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 000000014042F4C3: cmp     edx, ecx
 * 000000014042F4C5: jz      short loc_14042F4CE
 * 000000014042F4C7: mov     ecx, 6A7h
 * 000000014042F4CC: wrmsr
 * 000000014042F4CE: test    byte ptr [r10+3], 3
 * 000000014042F4D3: mov     [rbp+0D8h+var_58], 0
 * 000000014042F4DC: jz      short loc_14042F4E3
 * 000000014042F4DE: call    KiSaveDebugRegisterState
 * 000000014042F4E3: cld
 * 000000014042F4E4: stmxcsr [rbp+0D8h+var_12C]
 * 000000014042F4E8: ldmxcsr dword ptr gs:180h
 * 000000014042F4F1: movaps  [rbp+0D8h+var_E8], xmm0
 * 000000014042F4F5: movaps  [rbp+0D8h+var_D8], xmm1
 * 000000014042F4F9: movaps  [rbp+0D8h+var_C8], xmm2
 * 000000014042F4FD: movaps  [rbp+0D8h+var_B8], xmm3
 * 000000014042F501: movaps  [rbp+0D8h+var_A8], xmm4
 * 000000014042F505: movaps  [rbp+0D8h+var_98], xmm5
 * 000000014042F509: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 000000014042F510: jz      short loc_14042F51E
 * 000000014042F512: test    [rbp+0D8h+arg_8], 1
 * 000000014042F519: jz      short loc_14042F51E
 * 000000014042F51B: stac
 * 000000014042F51E: mov     eax, [rbp+0E0h]
 * 000000014042F524: test    [rbp+0D8h+arg_10], 200h
 * 000000014042F52E: jz      short loc_14042F531
 * 000000014042F530: sti
 * 000000014042F531: mov     ecx, 0C0000005h
 * 000000014042F536: mov     edx, 2
 * 000000014042F53B: mov     r8, [rbp+0D8h+arg_0]
 * 000000014042F542: mov     r9d, [rbp+0E0h]
 * 000000014042F549: or      r9d, 3
 * 000000014042F54D: and     r9d, 0FFFFh
 * 000000014042F554: test    [rbp+0D8h+arg_8], 1
 * 000000014042F55B: jnz     short loc_14042F561
 * 000000014042F55D: or      r9, 0FFFFFFFFFFFFFFFFh
 * 000000014042F561: xor     r10, r10
 * 000000014042F564: call    KiExceptionDispatch
 * 000000014042F569: nop
 * 000000014042F56A: retn
 */
