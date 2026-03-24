/*
 * XREFs of KiInvalidOpcodeFault @ 0x14042D300
 * Callers:
 *     KiInvalidOpcodeFaultShadow @ 0x140AF7440 (KiInvalidOpcodeFaultShadow.c)
 * Callees:
 *     KiRestoreDebugRegisterState @ 0x14041E860 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x14041E8E0 (KiSaveDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x14041F680 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x140424760 (KiInitiateUserApc.c)
 *     KiInvalidOpcodeFault @ 0x14042D300 (KiInvalidOpcodeFault.c)
 *     KiExceptionDispatch @ 0x140434340 (KiExceptionDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140434D00 (KiFlushBhbDuringTrapEntryOrExit.c)
 *     KiUpdateStibpPairing @ 0x1404607C0 (KiUpdateStibpPairing.c)
 *     KiCopyCounters @ 0x140574240 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiInvalidOpcodeFault @ 0x14042D300
 * Reason: Hex-Rays returned no pseudocode for 0x14042D300
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014042D300: sub     rsp, 8
 * 000000014042D304: push    rbp
 * 000000014042D305: sub     rsp, 158h
 * 000000014042D30C: lea     rbp, [rsp+80h]
 * 000000014042D314: mov     [rbp+0E8h+var_13D], 1
 * 000000014042D318: mov     [rbp+0E8h+var_138], rax
 * 000000014042D31C: mov     [rbp+0E8h+var_130], rcx
 * 000000014042D320: mov     [rbp+0E8h+var_128], rdx
 * 000000014042D324: mov     [rbp+0E8h+var_120], r8
 * 000000014042D328: mov     [rbp+0E8h+var_118], r9
 * 000000014042D32C: mov     [rbp+0E8h+var_110], r10
 * 000000014042D330: mov     [rbp+0E8h+var_108], r11
 * 000000014042D334: test    [rbp+0E8h+arg_0], 1
 * 000000014042D33B: jnz     short loc_14042D377
 * 000000014042D33D: xor     edx, edx
 * 000000014042D33F: rdsspq  rdx
 * 000000014042D344: mov     [rbp+0E8h+var_90], rdx
 * 000000014042D348: lfence
 * 000000014042D34B: test    word ptr gs:860h, 1
 * 000000014042D356: jnz     short loc_14042D360
 * 000000014042D358: lfence
 * 000000014042D35B: jmp     loc_14042D5E7
 * 000000014042D360: movzx   eax, word ptr gs:864h
 * 000000014042D369: mov     ecx, 48h ; 'H'
 * 000000014042D36E: xor     edx, edx
 * 000000014042D370: wrmsr
 * 000000014042D372: jmp     loc_14042D5E7
 * 000000014042D377: test    cs:KiKvaShadow, 1
 * 000000014042D37E: jnz     short loc_14042D383
 * 000000014042D380: swapgs
 * 000000014042D383: lfence
 * 000000014042D386: mov     rcx, gs:95A8h
 * 000000014042D38F: test    rcx, rcx
 * 000000014042D392: jz      short loc_14042D3B3
 * 000000014042D394: rdsspq  rdx
 * 000000014042D399: mov     r10, gs:95A0h
 * 000000014042D3A2: add     r10, 8
 * 000000014042D3A6: cmp     rdx, r10
 * 000000014042D3A9: jnz     short loc_14042D3B3
 * 000000014042D3AB: rstorssp qword ptr [rcx]
 * 000000014042D3AF: saveprevssp
 * 000000014042D3B3: mov     r10, gs:188h
 * 000000014042D3BC: mov     rcx, gs:188h
 * 000000014042D3C5: mov     rcx, [rcx+220h]
 * 000000014042D3CC: mov     rcx, [rcx+9E0h]
 * 000000014042D3D3: mov     gs:858h, rcx
 * 000000014042D3DC: mov     cx, gs:850h
 * 000000014042D3E5: mov     gs:852h, cx
 * 000000014042D3EE: mov     cx, gs:860h
 * 000000014042D3F7: mov     gs:854h, cx
 * 000000014042D400: movzx   eax, word ptr gs:866h
 * 000000014042D409: cmp     gs:864h, ax
 * 000000014042D412: jz      short loc_14042D426
 * 000000014042D414: mov     gs:864h, ax
 * 000000014042D41D: mov     ecx, 48h ; 'H'
 * 000000014042D422: xor     edx, edx
 * 000000014042D424: wrmsr
 * 000000014042D426: movzx   edx, word ptr gs:860h
 * 000000014042D42F: test    edx, 8
 * 000000014042D435: jz      short loc_14042D44E
 * 000000014042D437: mov     eax, 1
 * 000000014042D43C: xor     edx, edx
 * 000000014042D43E: mov     ecx, 49h ; 'I'
 * 000000014042D443: wrmsr
 * 000000014042D445: movzx   edx, word ptr gs:860h
 * 000000014042D44E: test    edx, 2
 * 000000014042D454: jz      loc_14042D591
 * 000000014042D45A: call    loc_14042D56D
 * 000000014042D45F: add     rsp, 8
 * 000000014042D463: call    loc_14042D576
 * 000000014042D468: add     rsp, 8
 * 000000014042D46C: call    loc_14042D45F
 * 000000014042D471: add     rsp, 8
 * 000000014042D475: call    loc_14042D468
 * 000000014042D47A: add     rsp, 8
 * 000000014042D47E: call    loc_14042D471
 * 000000014042D483: add     rsp, 8
 * 000000014042D487: call    loc_14042D47A
 * 000000014042D48C: add     rsp, 8
 * 000000014042D490: call    loc_14042D483
 * 000000014042D495: add     rsp, 8
 * 000000014042D499: call    loc_14042D48C
 * 000000014042D49E: add     rsp, 8
 * 000000014042D4A2: call    loc_14042D495
 * 000000014042D4A7: add     rsp, 8
 * 000000014042D4AB: call    loc_14042D49E
 * 000000014042D4B0: add     rsp, 8
 * 000000014042D4B4: call    loc_14042D4A7
 * 000000014042D4B9: add     rsp, 8
 * 000000014042D4BD: call    loc_14042D4B0
 * 000000014042D4C2: add     rsp, 8
 * 000000014042D4C6: call    loc_14042D4B9
 * 000000014042D4CB: add     rsp, 8
 * 000000014042D4CF: call    loc_14042D4C2
 * 000000014042D4D4: add     rsp, 8
 * 000000014042D4D8: call    loc_14042D4CB
 * 000000014042D4DD: add     rsp, 8
 * 000000014042D4E1: call    loc_14042D4D4
 * 000000014042D4E6: add     rsp, 8
 * 000000014042D4EA: call    loc_14042D4DD
 * 000000014042D4EF: add     rsp, 8
 * 000000014042D4F3: call    loc_14042D4E6
 * 000000014042D4F8: add     rsp, 8
 * 000000014042D4FC: call    loc_14042D4EF
 * 000000014042D501: add     rsp, 8
 * 000000014042D505: call    loc_14042D4F8
 * 000000014042D50A: add     rsp, 8
 * 000000014042D50E: call    loc_14042D501
 * 000000014042D513: add     rsp, 8
 * 000000014042D517: call    loc_14042D50A
 * 000000014042D51C: add     rsp, 8
 * 000000014042D520: call    loc_14042D513
 * 000000014042D525: add     rsp, 8
 * 000000014042D529: call    loc_14042D51C
 * 000000014042D52E: add     rsp, 8
 * 000000014042D532: call    loc_14042D525
 * 000000014042D537: add     rsp, 8
 * 000000014042D53B: call    loc_14042D52E
 * 000000014042D540: add     rsp, 8
 * 000000014042D544: call    loc_14042D537
 * 000000014042D549: add     rsp, 8
 * 000000014042D54D: call    loc_14042D540
 * 000000014042D552: add     rsp, 8
 * 000000014042D556: call    loc_14042D549
 * 000000014042D55B: add     rsp, 8
 * 000000014042D55F: call    loc_14042D552
 * 000000014042D564: add     rsp, 8
 * 000000014042D568: call    loc_14042D55B
 * 000000014042D56D: add     rsp, 8
 * 000000014042D571: call    loc_14042D564
 * 000000014042D576: add     rsp, 8
 * 000000014042D57A: mov     eax, 0DADAh
 * 000000014042D57F: test    byte ptr gs:862h, 8
 * 000000014042D588: jz      short loc_14042D591
 * 000000014042D58A: mov     al, 20h ; ' '
 * 000000014042D58C: incsspq rax
 * 000000014042D591: test    edx, 200h
 * 000000014042D597: jz      short loc_14042D59E
 * 000000014042D599: call    KiFlushBhbDuringTrapEntryOrExit
 * 000000014042D59E: lfence
 * 000000014042D5A1: mov     byte ptr gs:856h, 0
 * 000000014042D5AA: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 000000014042D5B1: jz      short loc_14042D5D2
 * 000000014042D5B3: mov     ecx, 6A7h
 * 000000014042D5B8: rdmsr
 * 000000014042D5BA: cmp     edx, 0
 * 000000014042D5BD: jz      short loc_14042D5D2
 * 000000014042D5BF: mov     ecx, edx
 * 000000014042D5C1: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 000000014042D5C7: cmp     edx, ecx
 * 000000014042D5C9: jz      short loc_14042D5D2
 * 000000014042D5CB: mov     ecx, 6A7h
 * 000000014042D5D0: wrmsr
 * 000000014042D5D2: test    byte ptr [r10+3], 3
 * 000000014042D5D7: mov     [rbp+0E8h+var_68], 0
 * 000000014042D5E0: jz      short loc_14042D5E7
 * 000000014042D5E2: call    KiSaveDebugRegisterState
 * 000000014042D5E7: cld
 * 000000014042D5E8: stmxcsr [rbp+0E8h+var_13C]
 * 000000014042D5EC: ldmxcsr dword ptr gs:180h
 * 000000014042D5F5: movaps  [rbp+0E8h+var_F8], xmm0
 * 000000014042D5F9: movaps  [rbp+0E8h+var_E8], xmm1
 * 000000014042D5FD: movaps  [rbp+0E8h+var_D8], xmm2
 * 000000014042D601: movaps  [rbp+0E8h+var_C8], xmm3
 * 000000014042D605: movaps  [rbp+0E8h+var_B8], xmm4
 * 000000014042D609: movaps  [rbp+0E8h+var_A8], xmm5
 * 000000014042D60D: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 000000014042D614: jz      short loc_14042D622
 * 000000014042D616: test    [rbp+0E8h+arg_0], 1
 * 000000014042D61D: jz      short loc_14042D622
 * 000000014042D61F: stac
 * 000000014042D622: test    [rbp+0E8h+arg_8], 200h
 * 000000014042D62C: jz      short loc_14042D62F
 * 000000014042D62E: sti
 * 000000014042D62F: mov     ecx, 10000002h
 * 000000014042D634: xor     edx, edx
 * 000000014042D636: mov     r8, [rbp+0E8h]
 * 000000014042D63D: call    KiExceptionDispatch
 * 000000014042D642: nop
 * 000000014042D643: cli
 * 000000014042D644: test    [rbp+0E8h+arg_0], 1
 * 000000014042D64B: jz      loc_14042D939
 * 000000014042D651: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 000000014042D658: jz      short loc_14042D65D
 * 000000014042D65A: stac
 * 000000014042D65D: mov     rcx, gs:188h
 * 000000014042D666: test    byte ptr [rcx+0C2h], 3
 * 000000014042D66D: jz      short loc_14042D68A
 * 000000014042D66F: mov     ecx, 1
 * 000000014042D674: mov     cr8, rcx
 * 000000014042D678: sti
 * 000000014042D679: call    KiInitiateUserApc
 * 000000014042D67E: cli
 * 000000014042D67F: mov     ecx, 0
 * 000000014042D684: mov     cr8, rcx
 * 000000014042D688: jmp     short loc_14042D65D
 * 000000014042D68A: test    byte ptr gs:86Ch, 2
 * 000000014042D693: jz      short loc_14042D69C
 * 000000014042D695: xor     ecx, ecx
 * 000000014042D697: call    KiUpdateStibpPairing
 * 000000014042D69C: mov     rcx, gs:188h
 * 000000014042D6A5: test    dword ptr [rcx], 8000000h
 * 000000014042D6AB: jz      short loc_14042D6B2
 * 000000014042D6AD: call    KiRestoreSetContextState
 * 000000014042D6B2: mov     rcx, gs:188h
 * 000000014042D6BB: test    dword ptr [rcx], 10000h
 * 000000014042D6C1: jz      short loc_14042D6D7
 * 000000014042D6C3: test    byte ptr [rcx+2], 1
 * 000000014042D6C7: jz      short loc_14042D6D7
 * 000000014042D6C9: call    KiCopyCounters
 * 000000014042D6CE: mov     rcx, gs:188h
 * 000000014042D6D7: ldmxcsr [rbp+0E8h+var_13C]
 * 000000014042D6DB: cmp     [rbp+0E8h+var_68], 0
 * 000000014042D6E3: jz      short loc_14042D6EA
 * 000000014042D6E5: call    KiRestoreDebugRegisterState
 * 000000014042D6EA: mov     rcx, gs:188h
 * 000000014042D6F3: bt      dword ptr [rcx+74h], 16h
 * 000000014042D6F8: jnb     short loc_14042D724
 * 000000014042D6FA: xor     ecx, ecx
 * 000000014042D6FC: rdsspq  rcx
 * 000000014042D701: mov     r8, gs:95A8h
 * 000000014042D70A: add     r8, 8
 * 000000014042D70E: cmp     rcx, r8
 * 000000014042D711: jnz     short loc_14042D724
 * 000000014042D713: mov     rcx, gs:95A0h
 * 000000014042D71C: rstorssp qword ptr [rcx]
 * 000000014042D720: saveprevssp
 * 000000014042D724: movaps  xmm0, [rbp+0E8h+var_F8]
 * 000000014042D728: movaps  xmm1, [rbp+0E8h+var_E8]
 * 000000014042D72C: movaps  xmm2, [rbp+0E8h+var_D8]
 * 000000014042D730: movaps  xmm3, [rbp+0E8h+var_C8]
 * 000000014042D734: movaps  xmm4, [rbp+0E8h+var_B8]
 * 000000014042D738: movaps  xmm5, [rbp+0E8h+var_A8]
 * 000000014042D73C: mov     r11, [rbp+0E8h+var_108]
 * 000000014042D740: mov     r10, [rbp+0E8h+var_110]
 * 000000014042D744: mov     r9, [rbp+0E8h+var_118]
 * 000000014042D748: mov     r8, [rbp+0E8h+var_120]
 * 000000014042D74C: mov     byte ptr gs:856h, 0
 * 000000014042D755: movzx   eax, word ptr gs:86Ah
 * 000000014042D75E: cmp     gs:864h, ax
 * 000000014042D767: jz      short loc_14042D77B
 * 000000014042D769: mov     gs:864h, ax
 * 000000014042D772: mov     ecx, 48h ; 'H'
 * 000000014042D777: xor     edx, edx
 * 000000014042D779: wrmsr
 * 000000014042D77B: btr     word ptr gs:860h, 2
 * 000000014042D786: jnb     short loc_14042D796
 * 000000014042D788: mov     eax, 1
 * 000000014042D78D: xor     edx, edx
 * 000000014042D78F: mov     ecx, 49h ; 'I'
 * 000000014042D794: wrmsr
 * 000000014042D796: btr     word ptr gs:860h, 5
 * 000000014042D7A1: jnb     loc_14042D8DE
 * 000000014042D7A7: call    loc_14042D8BA
 * 000000014042D7AC: add     rsp, 8
 * 000000014042D7B0: call    loc_14042D8C3
 * 000000014042D7B5: add     rsp, 8
 * 000000014042D7B9: call    loc_14042D7AC
 * 000000014042D7BE: add     rsp, 8
 * 000000014042D7C2: call    loc_14042D7B5
 * 000000014042D7C7: add     rsp, 8
 * 000000014042D7CB: call    loc_14042D7BE
 * 000000014042D7D0: add     rsp, 8
 * 000000014042D7D4: call    loc_14042D7C7
 * 000000014042D7D9: add     rsp, 8
 * 000000014042D7DD: call    loc_14042D7D0
 * 000000014042D7E2: add     rsp, 8
 * 000000014042D7E6: call    loc_14042D7D9
 * 000000014042D7EB: add     rsp, 8
 * 000000014042D7EF: call    loc_14042D7E2
 * 000000014042D7F4: add     rsp, 8
 * 000000014042D7F8: call    loc_14042D7EB
 * 000000014042D7FD: add     rsp, 8
 * 000000014042D801: call    loc_14042D7F4
 * 000000014042D806: add     rsp, 8
 * 000000014042D80A: call    loc_14042D7FD
 * 000000014042D80F: add     rsp, 8
 * 000000014042D813: call    loc_14042D806
 * 000000014042D818: add     rsp, 8
 * 000000014042D81C: call    loc_14042D80F
 * 000000014042D821: add     rsp, 8
 * 000000014042D825: call    loc_14042D818
 * 000000014042D82A: add     rsp, 8
 * 000000014042D82E: call    loc_14042D821
 * 000000014042D833: add     rsp, 8
 * 000000014042D837: call    loc_14042D82A
 * 000000014042D83C: add     rsp, 8
 * 000000014042D840: call    loc_14042D833
 * 000000014042D845: add     rsp, 8
 * 000000014042D849: call    loc_14042D83C
 * 000000014042D84E: add     rsp, 8
 * 000000014042D852: call    loc_14042D845
 * 000000014042D857: add     rsp, 8
 * 000000014042D85B: call    loc_14042D84E
 * 000000014042D860: add     rsp, 8
 * 000000014042D864: call    loc_14042D857
 * 000000014042D869: add     rsp, 8
 * 000000014042D86D: call    loc_14042D860
 * 000000014042D872: add     rsp, 8
 * 000000014042D876: call    loc_14042D869
 * 000000014042D87B: add     rsp, 8
 * 000000014042D87F: call    loc_14042D872
 * 000000014042D884: add     rsp, 8
 * 000000014042D888: call    loc_14042D87B
 * 000000014042D88D: add     rsp, 8
 * 000000014042D891: call    loc_14042D884
 * 000000014042D896: add     rsp, 8
 * 000000014042D89A: call    loc_14042D88D
 * 000000014042D89F: add     rsp, 8
 * 000000014042D8A3: call    loc_14042D896
 * 000000014042D8A8: add     rsp, 8
 * 000000014042D8AC: call    loc_14042D89F
 * 000000014042D8B1: add     rsp, 8
 * 000000014042D8B5: call    loc_14042D8A8
 * 000000014042D8BA: add     rsp, 8
 * 000000014042D8BE: call    loc_14042D8B1
 * 000000014042D8C3: add     rsp, 8
 * 000000014042D8C7: mov     eax, 0DADAh
 * 000000014042D8CC: test    byte ptr gs:862h, 8
 * 000000014042D8D5: jz      short loc_14042D8DE
 * 000000014042D8D7: mov     al, 20h ; ' '
 * 000000014042D8D9: incsspq rax
 * 000000014042D8DE: test    word ptr gs:860h, 80h
 * 000000014042D8E9: jz      short loc_14042D8F7
 * 000000014042D8EB: xor     eax, eax
 * 000000014042D8ED: xor     edx, edx
 * 000000014042D8EF: mov     ecx, 1
 * 000000014042D8F4: div     rcx
 * 000000014042D8F7: mov     rdx, [rbp+0E8h+var_128]
 * 000000014042D8FB: mov     rcx, [rbp+0E8h+var_130]
 * 000000014042D8FF: mov     rax, [rbp+0E8h+var_138]
 * 000000014042D903: mov     rsp, rbp
 * 000000014042D906: mov     rbp, [rbp+0E8h+var_10]
 * 000000014042D90D: add     rsp, 0E8h
 * 000000014042D914: test    cs:KiKvaShadow, 1
 * 000000014042D91B: jz      short loc_14042D922
 * 000000014042D91D: jmp     KiKernelExit
 * 000000014042D922: test    word ptr gs:860h, 100h
 * 000000014042D92D: jz      short loc_14042D934
 * 000000014042D92F: verw    [rsp+arg_18]
 * 000000014042D934: swapgs
 * 000000014042D937: iretq
 * 000000014042D939: ldmxcsr [rbp+0E8h+var_13C]
 * 000000014042D93D: movaps  xmm0, [rbp+0E8h+var_F8]
 * 000000014042D941: movaps  xmm1, [rbp+0E8h+var_E8]
 * 000000014042D945: movaps  xmm2, [rbp+0E8h+var_D8]
 * 000000014042D949: movaps  xmm3, [rbp+0E8h+var_C8]
 * 000000014042D94D: movaps  xmm4, [rbp+0E8h+var_B8]
 * 000000014042D951: movaps  xmm5, [rbp+0E8h+var_A8]
 * 000000014042D955: mov     r11, [rbp+0E8h+var_108]
 * 000000014042D959: mov     r10, [rbp+0E8h+var_110]
 * 000000014042D95D: mov     r9, [rbp+0E8h+var_118]
 * 000000014042D961: mov     r8, [rbp+0E8h+var_120]
 * 000000014042D965: mov     rdx, [rbp+0E8h+var_128]
 * 000000014042D969: mov     rcx, [rbp+0E8h+var_130]
 * 000000014042D96D: mov     rax, [rbp+0E8h+var_138]
 * 000000014042D971: mov     rsp, rbp
 * 000000014042D974: mov     rbp, [rbp+0E8h+var_10]
 * 000000014042D97B: add     rsp, 0E8h
 * 000000014042D982: iretq
 */
