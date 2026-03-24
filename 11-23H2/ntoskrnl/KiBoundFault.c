/*
 * XREFs of KiBoundFault @ 0x14042D200
 * Callers:
 *     KiBoundFaultShadow @ 0x140AF63C0 (KiBoundFaultShadow.c)
 * Callees:
 *     KiRestoreDebugRegisterState @ 0x14041EF20 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x14041EFA0 (KiSaveDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x14041FD40 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x140424E20 (KiInitiateUserApc.c)
 *     KiBoundFault @ 0x14042D200 (KiBoundFault.c)
 *     KiBugCheckDispatch @ 0x1404348C0 (KiBugCheckDispatch.c)
 *     KiExceptionDispatch @ 0x140434940 (KiExceptionDispatch.c)
 *     KiFastFailDispatch @ 0x140434E40 (KiFastFailDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140435300 (KiFlushBhbDuringTrapEntryOrExit.c)
 *     KiUpdateStibpPairing @ 0x140460E20 (KiUpdateStibpPairing.c)
 *     KiHandleBound @ 0x14056CCC0 (KiHandleBound.c)
 *     KiCopyCounters @ 0x1405741A0 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiBoundFault @ 0x14042D200
 * Reason: Hex-Rays returned no pseudocode for 0x14042D200
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014042D200: sub     rsp, 8
 * 000000014042D204: push    rbp
 * 000000014042D205: sub     rsp, 158h
 * 000000014042D20C: lea     rbp, [rsp+80h]
 * 000000014042D214: mov     [rbp+0E8h+var_13D], 1
 * 000000014042D218: mov     [rbp+0E8h+var_138], rax
 * 000000014042D21C: mov     [rbp+0E8h+var_130], rcx
 * 000000014042D220: mov     [rbp+0E8h+var_128], rdx
 * 000000014042D224: mov     [rbp+0E8h+var_120], r8
 * 000000014042D228: mov     [rbp+0E8h+var_118], r9
 * 000000014042D22C: mov     [rbp+0E8h+var_110], r10
 * 000000014042D230: mov     [rbp+0E8h+var_108], r11
 * 000000014042D234: test    [rbp+0E8h+arg_0], 1
 * 000000014042D23B: jnz     short loc_14042D277
 * 000000014042D23D: xor     edx, edx
 * 000000014042D23F: rdsspq  rdx
 * 000000014042D244: mov     [rbp+0E8h+var_90], rdx
 * 000000014042D248: lfence
 * 000000014042D24B: test    word ptr gs:860h, 1
 * 000000014042D256: jnz     short loc_14042D260
 * 000000014042D258: lfence
 * 000000014042D25B: jmp     loc_14042D4E7
 * 000000014042D260: movzx   eax, word ptr gs:864h
 * 000000014042D269: mov     ecx, 48h ; 'H'
 * 000000014042D26E: xor     edx, edx
 * 000000014042D270: wrmsr
 * 000000014042D272: jmp     loc_14042D4E7
 * 000000014042D277: test    cs:KiKvaShadow, 1
 * 000000014042D27E: jnz     short loc_14042D283
 * 000000014042D280: swapgs
 * 000000014042D283: lfence
 * 000000014042D286: mov     rcx, gs:95A8h
 * 000000014042D28F: test    rcx, rcx
 * 000000014042D292: jz      short loc_14042D2B3
 * 000000014042D294: rdsspq  rdx
 * 000000014042D299: mov     r10, gs:95A0h
 * 000000014042D2A2: add     r10, 8
 * 000000014042D2A6: cmp     rdx, r10
 * 000000014042D2A9: jnz     short loc_14042D2B3
 * 000000014042D2AB: rstorssp qword ptr [rcx]
 * 000000014042D2AF: saveprevssp
 * 000000014042D2B3: mov     r10, gs:188h
 * 000000014042D2BC: mov     rcx, gs:188h
 * 000000014042D2C5: mov     rcx, [rcx+220h]
 * 000000014042D2CC: mov     rcx, [rcx+9E0h]
 * 000000014042D2D3: mov     gs:858h, rcx
 * 000000014042D2DC: mov     cx, gs:850h
 * 000000014042D2E5: mov     gs:852h, cx
 * 000000014042D2EE: mov     cx, gs:860h
 * 000000014042D2F7: mov     gs:854h, cx
 * 000000014042D300: movzx   eax, word ptr gs:866h
 * 000000014042D309: cmp     gs:864h, ax
 * 000000014042D312: jz      short loc_14042D326
 * 000000014042D314: mov     gs:864h, ax
 * 000000014042D31D: mov     ecx, 48h ; 'H'
 * 000000014042D322: xor     edx, edx
 * 000000014042D324: wrmsr
 * 000000014042D326: movzx   edx, word ptr gs:860h
 * 000000014042D32F: test    edx, 8
 * 000000014042D335: jz      short loc_14042D34E
 * 000000014042D337: mov     eax, 1
 * 000000014042D33C: xor     edx, edx
 * 000000014042D33E: mov     ecx, 49h ; 'I'
 * 000000014042D343: wrmsr
 * 000000014042D345: movzx   edx, word ptr gs:860h
 * 000000014042D34E: test    edx, 2
 * 000000014042D354: jz      loc_14042D491
 * 000000014042D35A: call    loc_14042D46D
 * 000000014042D35F: add     rsp, 8
 * 000000014042D363: call    loc_14042D476
 * 000000014042D368: add     rsp, 8
 * 000000014042D36C: call    loc_14042D35F
 * 000000014042D371: add     rsp, 8
 * 000000014042D375: call    loc_14042D368
 * 000000014042D37A: add     rsp, 8
 * 000000014042D37E: call    loc_14042D371
 * 000000014042D383: add     rsp, 8
 * 000000014042D387: call    loc_14042D37A
 * 000000014042D38C: add     rsp, 8
 * 000000014042D390: call    loc_14042D383
 * 000000014042D395: add     rsp, 8
 * 000000014042D399: call    loc_14042D38C
 * 000000014042D39E: add     rsp, 8
 * 000000014042D3A2: call    loc_14042D395
 * 000000014042D3A7: add     rsp, 8
 * 000000014042D3AB: call    loc_14042D39E
 * 000000014042D3B0: add     rsp, 8
 * 000000014042D3B4: call    loc_14042D3A7
 * 000000014042D3B9: add     rsp, 8
 * 000000014042D3BD: call    loc_14042D3B0
 * 000000014042D3C2: add     rsp, 8
 * 000000014042D3C6: call    loc_14042D3B9
 * 000000014042D3CB: add     rsp, 8
 * 000000014042D3CF: call    loc_14042D3C2
 * 000000014042D3D4: add     rsp, 8
 * 000000014042D3D8: call    loc_14042D3CB
 * 000000014042D3DD: add     rsp, 8
 * 000000014042D3E1: call    loc_14042D3D4
 * 000000014042D3E6: add     rsp, 8
 * 000000014042D3EA: call    loc_14042D3DD
 * 000000014042D3EF: add     rsp, 8
 * 000000014042D3F3: call    loc_14042D3E6
 * 000000014042D3F8: add     rsp, 8
 * 000000014042D3FC: call    loc_14042D3EF
 * 000000014042D401: add     rsp, 8
 * 000000014042D405: call    loc_14042D3F8
 * 000000014042D40A: add     rsp, 8
 * 000000014042D40E: call    loc_14042D401
 * 000000014042D413: add     rsp, 8
 * 000000014042D417: call    loc_14042D40A
 * 000000014042D41C: add     rsp, 8
 * 000000014042D420: call    loc_14042D413
 * 000000014042D425: add     rsp, 8
 * 000000014042D429: call    loc_14042D41C
 * 000000014042D42E: add     rsp, 8
 * 000000014042D432: call    loc_14042D425
 * 000000014042D437: add     rsp, 8
 * 000000014042D43B: call    loc_14042D42E
 * 000000014042D440: add     rsp, 8
 * 000000014042D444: call    loc_14042D437
 * 000000014042D449: add     rsp, 8
 * 000000014042D44D: call    loc_14042D440
 * 000000014042D452: add     rsp, 8
 * 000000014042D456: call    loc_14042D449
 * 000000014042D45B: add     rsp, 8
 * 000000014042D45F: call    loc_14042D452
 * 000000014042D464: add     rsp, 8
 * 000000014042D468: call    loc_14042D45B
 * 000000014042D46D: add     rsp, 8
 * 000000014042D471: call    loc_14042D464
 * 000000014042D476: add     rsp, 8
 * 000000014042D47A: mov     eax, 0DADAh
 * 000000014042D47F: test    byte ptr gs:862h, 8
 * 000000014042D488: jz      short loc_14042D491
 * 000000014042D48A: mov     al, 20h ; ' '
 * 000000014042D48C: incsspq rax
 * 000000014042D491: test    edx, 200h
 * 000000014042D497: jz      short loc_14042D49E
 * 000000014042D499: call    KiFlushBhbDuringTrapEntryOrExit
 * 000000014042D49E: lfence
 * 000000014042D4A1: mov     byte ptr gs:856h, 0
 * 000000014042D4AA: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 000000014042D4B1: jz      short loc_14042D4D2
 * 000000014042D4B3: mov     ecx, 6A7h
 * 000000014042D4B8: rdmsr
 * 000000014042D4BA: cmp     edx, 0
 * 000000014042D4BD: jz      short loc_14042D4D2
 * 000000014042D4BF: mov     ecx, edx
 * 000000014042D4C1: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 000000014042D4C7: cmp     edx, ecx
 * 000000014042D4C9: jz      short loc_14042D4D2
 * 000000014042D4CB: mov     ecx, 6A7h
 * 000000014042D4D0: wrmsr
 * 000000014042D4D2: test    byte ptr [r10+3], 3
 * 000000014042D4D7: mov     [rbp+0E8h+var_68], 0
 * 000000014042D4E0: jz      short loc_14042D4E7
 * 000000014042D4E2: call    KiSaveDebugRegisterState
 * 000000014042D4E7: cld
 * 000000014042D4E8: stmxcsr [rbp+0E8h+var_13C]
 * 000000014042D4EC: ldmxcsr dword ptr gs:180h
 * 000000014042D4F5: movaps  [rbp+0E8h+var_F8], xmm0
 * 000000014042D4F9: movaps  [rbp+0E8h+var_E8], xmm1
 * 000000014042D4FD: movaps  [rbp+0E8h+var_D8], xmm2
 * 000000014042D501: movaps  [rbp+0E8h+var_C8], xmm3
 * 000000014042D505: movaps  [rbp+0E8h+var_B8], xmm4
 * 000000014042D509: movaps  [rbp+0E8h+var_A8], xmm5
 * 000000014042D50D: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 000000014042D514: jz      short loc_14042D522
 * 000000014042D516: test    [rbp+0E8h+arg_0], 1
 * 000000014042D51D: jz      short loc_14042D522
 * 000000014042D51F: stac
 * 000000014042D522: test    [rbp+0E8h+arg_8], 200h
 * 000000014042D52C: jz      short loc_14042D52F
 * 000000014042D52E: sti
 * 000000014042D52F: test    [rbp+0E8h+arg_0], 1
 * 000000014042D536: jz      short loc_14042D579
 * 000000014042D538: call    KiHandleBound
 * 000000014042D53D: cmp     eax, 0
 * 000000014042D540: jz      short loc_14042D579
 * 000000014042D542: cmp     eax, 1
 * 000000014042D545: jz      short loc_14042D58D
 * 000000014042D547: cmp     eax, 2
 * 000000014042D54A: jz      short loc_14042D55B
 * 000000014042D54C: mov     edx, 5
 * 000000014042D551: mov     ecx, 7Fh
 * 000000014042D556: call    KiBugCheckDispatch
 * 000000014042D55B: mov     r9, 1Ch
 * 000000014042D562: mov     ecx, 0C0000409h
 * 000000014042D567: mov     edx, 1
 * 000000014042D56C: mov     r8, [rbp+0E8h]
 * 000000014042D573: call    KiFastFailDispatch
 * 000000014042D578: nop
 * 000000014042D579: mov     ecx, 0C000008Ch
 * 000000014042D57E: xor     edx, edx
 * 000000014042D580: mov     r8, [rbp+0E8h]
 * 000000014042D587: call    KiExceptionDispatch
 * 000000014042D58C: nop
 * 000000014042D58D: cli
 * 000000014042D58E: test    [rbp+0E8h+arg_0], 1
 * 000000014042D595: jz      loc_14042D883
 * 000000014042D59B: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 000000014042D5A2: jz      short loc_14042D5A7
 * 000000014042D5A4: stac
 * 000000014042D5A7: mov     rcx, gs:188h
 * 000000014042D5B0: test    byte ptr [rcx+0C2h], 3
 * 000000014042D5B7: jz      short loc_14042D5D4
 * 000000014042D5B9: mov     ecx, 1
 * 000000014042D5BE: mov     cr8, rcx
 * 000000014042D5C2: sti
 * 000000014042D5C3: call    KiInitiateUserApc
 * 000000014042D5C8: cli
 * 000000014042D5C9: mov     ecx, 0
 * 000000014042D5CE: mov     cr8, rcx
 * 000000014042D5D2: jmp     short loc_14042D5A7
 * 000000014042D5D4: test    byte ptr gs:86Ch, 2
 * 000000014042D5DD: jz      short loc_14042D5E6
 * 000000014042D5DF: xor     ecx, ecx
 * 000000014042D5E1: call    KiUpdateStibpPairing
 * 000000014042D5E6: mov     rcx, gs:188h
 * 000000014042D5EF: test    dword ptr [rcx], 8000000h
 * 000000014042D5F5: jz      short loc_14042D5FC
 * 000000014042D5F7: call    KiRestoreSetContextState
 * 000000014042D5FC: mov     rcx, gs:188h
 * 000000014042D605: test    dword ptr [rcx], 10000h
 * 000000014042D60B: jz      short loc_14042D621
 * 000000014042D60D: test    byte ptr [rcx+2], 1
 * 000000014042D611: jz      short loc_14042D621
 * 000000014042D613: call    KiCopyCounters
 * 000000014042D618: mov     rcx, gs:188h
 * 000000014042D621: ldmxcsr [rbp+0E8h+var_13C]
 * 000000014042D625: cmp     [rbp+0E8h+var_68], 0
 * 000000014042D62D: jz      short loc_14042D634
 * 000000014042D62F: call    KiRestoreDebugRegisterState
 * 000000014042D634: mov     rcx, gs:188h
 * 000000014042D63D: bt      dword ptr [rcx+74h], 16h
 * 000000014042D642: jnb     short loc_14042D66E
 * 000000014042D644: xor     ecx, ecx
 * 000000014042D646: rdsspq  rcx
 * 000000014042D64B: mov     r8, gs:95A8h
 * 000000014042D654: add     r8, 8
 * 000000014042D658: cmp     rcx, r8
 * 000000014042D65B: jnz     short loc_14042D66E
 * 000000014042D65D: mov     rcx, gs:95A0h
 * 000000014042D666: rstorssp qword ptr [rcx]
 * 000000014042D66A: saveprevssp
 * 000000014042D66E: movaps  xmm0, [rbp+0E8h+var_F8]
 * 000000014042D672: movaps  xmm1, [rbp+0E8h+var_E8]
 * 000000014042D676: movaps  xmm2, [rbp+0E8h+var_D8]
 * 000000014042D67A: movaps  xmm3, [rbp+0E8h+var_C8]
 * 000000014042D67E: movaps  xmm4, [rbp+0E8h+var_B8]
 * 000000014042D682: movaps  xmm5, [rbp+0E8h+var_A8]
 * 000000014042D686: mov     r11, [rbp+0E8h+var_108]
 * 000000014042D68A: mov     r10, [rbp+0E8h+var_110]
 * 000000014042D68E: mov     r9, [rbp+0E8h+var_118]
 * 000000014042D692: mov     r8, [rbp+0E8h+var_120]
 * 000000014042D696: mov     byte ptr gs:856h, 0
 * 000000014042D69F: movzx   eax, word ptr gs:86Ah
 * 000000014042D6A8: cmp     gs:864h, ax
 * 000000014042D6B1: jz      short loc_14042D6C5
 * 000000014042D6B3: mov     gs:864h, ax
 * 000000014042D6BC: mov     ecx, 48h ; 'H'
 * 000000014042D6C1: xor     edx, edx
 * 000000014042D6C3: wrmsr
 * 000000014042D6C5: btr     word ptr gs:860h, 2
 * 000000014042D6D0: jnb     short loc_14042D6E0
 * 000000014042D6D2: mov     eax, 1
 * 000000014042D6D7: xor     edx, edx
 * 000000014042D6D9: mov     ecx, 49h ; 'I'
 * 000000014042D6DE: wrmsr
 * 000000014042D6E0: btr     word ptr gs:860h, 5
 * 000000014042D6EB: jnb     loc_14042D828
 * 000000014042D6F1: call    loc_14042D804
 * 000000014042D6F6: add     rsp, 8
 * 000000014042D6FA: call    loc_14042D80D
 * 000000014042D6FF: add     rsp, 8
 * 000000014042D703: call    loc_14042D6F6
 * 000000014042D708: add     rsp, 8
 * 000000014042D70C: call    loc_14042D6FF
 * 000000014042D711: add     rsp, 8
 * 000000014042D715: call    loc_14042D708
 * 000000014042D71A: add     rsp, 8
 * 000000014042D71E: call    loc_14042D711
 * 000000014042D723: add     rsp, 8
 * 000000014042D727: call    loc_14042D71A
 * 000000014042D72C: add     rsp, 8
 * 000000014042D730: call    loc_14042D723
 * 000000014042D735: add     rsp, 8
 * 000000014042D739: call    loc_14042D72C
 * 000000014042D73E: add     rsp, 8
 * 000000014042D742: call    loc_14042D735
 * 000000014042D747: add     rsp, 8
 * 000000014042D74B: call    loc_14042D73E
 * 000000014042D750: add     rsp, 8
 * 000000014042D754: call    loc_14042D747
 * 000000014042D759: add     rsp, 8
 * 000000014042D75D: call    loc_14042D750
 * 000000014042D762: add     rsp, 8
 * 000000014042D766: call    loc_14042D759
 * 000000014042D76B: add     rsp, 8
 * 000000014042D76F: call    loc_14042D762
 * 000000014042D774: add     rsp, 8
 * 000000014042D778: call    loc_14042D76B
 * 000000014042D77D: add     rsp, 8
 * 000000014042D781: call    loc_14042D774
 * 000000014042D786: add     rsp, 8
 * 000000014042D78A: call    loc_14042D77D
 * 000000014042D78F: add     rsp, 8
 * 000000014042D793: call    loc_14042D786
 * 000000014042D798: add     rsp, 8
 * 000000014042D79C: call    loc_14042D78F
 * 000000014042D7A1: add     rsp, 8
 * 000000014042D7A5: call    loc_14042D798
 * 000000014042D7AA: add     rsp, 8
 * 000000014042D7AE: call    loc_14042D7A1
 * 000000014042D7B3: add     rsp, 8
 * 000000014042D7B7: call    loc_14042D7AA
 * 000000014042D7BC: add     rsp, 8
 * 000000014042D7C0: call    loc_14042D7B3
 * 000000014042D7C5: add     rsp, 8
 * 000000014042D7C9: call    loc_14042D7BC
 * 000000014042D7CE: add     rsp, 8
 * 000000014042D7D2: call    loc_14042D7C5
 * 000000014042D7D7: add     rsp, 8
 * 000000014042D7DB: call    loc_14042D7CE
 * 000000014042D7E0: add     rsp, 8
 * 000000014042D7E4: call    loc_14042D7D7
 * 000000014042D7E9: add     rsp, 8
 * 000000014042D7ED: call    loc_14042D7E0
 * 000000014042D7F2: add     rsp, 8
 * 000000014042D7F6: call    loc_14042D7E9
 * 000000014042D7FB: add     rsp, 8
 * 000000014042D7FF: call    loc_14042D7F2
 * 000000014042D804: add     rsp, 8
 * 000000014042D808: call    loc_14042D7FB
 * 000000014042D80D: add     rsp, 8
 * 000000014042D811: mov     eax, 0DADAh
 * 000000014042D816: test    byte ptr gs:862h, 8
 * 000000014042D81F: jz      short loc_14042D828
 * 000000014042D821: mov     al, 20h ; ' '
 * 000000014042D823: incsspq rax
 * 000000014042D828: test    word ptr gs:860h, 80h
 * 000000014042D833: jz      short loc_14042D841
 * 000000014042D835: xor     eax, eax
 * 000000014042D837: xor     edx, edx
 * 000000014042D839: mov     ecx, 1
 * 000000014042D83E: div     rcx
 * 000000014042D841: mov     rdx, [rbp+0E8h+var_128]
 * 000000014042D845: mov     rcx, [rbp+0E8h+var_130]
 * 000000014042D849: mov     rax, [rbp+0E8h+var_138]
 * 000000014042D84D: mov     rsp, rbp
 * 000000014042D850: mov     rbp, [rbp+0E8h+var_10]
 * 000000014042D857: add     rsp, 0E8h
 * 000000014042D85E: test    cs:KiKvaShadow, 1
 * 000000014042D865: jz      short loc_14042D86C
 * 000000014042D867: jmp     KiKernelExit
 * 000000014042D86C: test    word ptr gs:860h, 100h
 * 000000014042D877: jz      short loc_14042D87E
 * 000000014042D879: verw    [rsp+arg_18]
 * 000000014042D87E: swapgs
 * 000000014042D881: iretq
 * 000000014042D883: ldmxcsr [rbp+0E8h+var_13C]
 * 000000014042D887: movaps  xmm0, [rbp+0E8h+var_F8]
 * 000000014042D88B: movaps  xmm1, [rbp+0E8h+var_E8]
 * 000000014042D88F: movaps  xmm2, [rbp+0E8h+var_D8]
 * 000000014042D893: movaps  xmm3, [rbp+0E8h+var_C8]
 * 000000014042D897: movaps  xmm4, [rbp+0E8h+var_B8]
 * 000000014042D89B: movaps  xmm5, [rbp+0E8h+var_A8]
 * 000000014042D89F: mov     r11, [rbp+0E8h+var_108]
 * 000000014042D8A3: mov     r10, [rbp+0E8h+var_110]
 * 000000014042D8A7: mov     r9, [rbp+0E8h+var_118]
 * 000000014042D8AB: mov     r8, [rbp+0E8h+var_120]
 * 000000014042D8AF: mov     rdx, [rbp+0E8h+var_128]
 * 000000014042D8B3: mov     rcx, [rbp+0E8h+var_130]
 * 000000014042D8B7: mov     rax, [rbp+0E8h+var_138]
 * 000000014042D8BB: mov     rsp, rbp
 * 000000014042D8BE: mov     rbp, [rbp+0E8h+var_10]
 * 000000014042D8C5: add     rsp, 0E8h
 * 000000014042D8CC: iretq
 */
