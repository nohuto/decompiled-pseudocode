/*
 * XREFs of KiBoundFault @ 0x14042D600
 * Callers:
 *     KiBoundFaultShadow @ 0x140AF63C0 (KiBoundFaultShadow.c)
 * Callees:
 *     KiRestoreDebugRegisterState @ 0x14041F2B0 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x14041F330 (KiSaveDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1404200D0 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x1404251B0 (KiInitiateUserApc.c)
 *     KiBoundFault @ 0x14042D600 (KiBoundFault.c)
 *     KiBugCheckDispatch @ 0x140434CC0 (KiBugCheckDispatch.c)
 *     KiExceptionDispatch @ 0x140434D40 (KiExceptionDispatch.c)
 *     KiFastFailDispatch @ 0x140435240 (KiFastFailDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140435700 (KiFlushBhbDuringTrapEntryOrExit.c)
 *     KiUpdateStibpPairing @ 0x140461220 (KiUpdateStibpPairing.c)
 *     KiHandleBound @ 0x14056D380 (KiHandleBound.c)
 *     KiCopyCounters @ 0x1405746E0 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiBoundFault @ 0x14042D600
 * Reason: Hex-Rays returned no pseudocode for 0x14042D600
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014042D600: sub     rsp, 8
 * 000000014042D604: push    rbp
 * 000000014042D605: sub     rsp, 158h
 * 000000014042D60C: lea     rbp, [rsp+80h]
 * 000000014042D614: mov     [rbp+0E8h+var_13D], 1
 * 000000014042D618: mov     [rbp+0E8h+var_138], rax
 * 000000014042D61C: mov     [rbp+0E8h+var_130], rcx
 * 000000014042D620: mov     [rbp+0E8h+var_128], rdx
 * 000000014042D624: mov     [rbp+0E8h+var_120], r8
 * 000000014042D628: mov     [rbp+0E8h+var_118], r9
 * 000000014042D62C: mov     [rbp+0E8h+var_110], r10
 * 000000014042D630: mov     [rbp+0E8h+var_108], r11
 * 000000014042D634: test    [rbp+0E8h+arg_0], 1
 * 000000014042D63B: jnz     short loc_14042D677
 * 000000014042D63D: xor     edx, edx
 * 000000014042D63F: rdsspq  rdx
 * 000000014042D644: mov     [rbp+0E8h+var_90], rdx
 * 000000014042D648: lfence
 * 000000014042D64B: test    word ptr gs:860h, 1
 * 000000014042D656: jnz     short loc_14042D660
 * 000000014042D658: lfence
 * 000000014042D65B: jmp     loc_14042D8E7
 * 000000014042D660: movzx   eax, word ptr gs:864h
 * 000000014042D669: mov     ecx, 48h ; 'H'
 * 000000014042D66E: xor     edx, edx
 * 000000014042D670: wrmsr
 * 000000014042D672: jmp     loc_14042D8E7
 * 000000014042D677: test    cs:KiKvaShadow, 1
 * 000000014042D67E: jnz     short loc_14042D683
 * 000000014042D680: swapgs
 * 000000014042D683: lfence
 * 000000014042D686: mov     rcx, gs:95A8h
 * 000000014042D68F: test    rcx, rcx
 * 000000014042D692: jz      short loc_14042D6B3
 * 000000014042D694: rdsspq  rdx
 * 000000014042D699: mov     r10, gs:95A0h
 * 000000014042D6A2: add     r10, 8
 * 000000014042D6A6: cmp     rdx, r10
 * 000000014042D6A9: jnz     short loc_14042D6B3
 * 000000014042D6AB: rstorssp qword ptr [rcx]
 * 000000014042D6AF: saveprevssp
 * 000000014042D6B3: mov     r10, gs:188h
 * 000000014042D6BC: mov     rcx, gs:188h
 * 000000014042D6C5: mov     rcx, [rcx+220h]
 * 000000014042D6CC: mov     rcx, [rcx+9E0h]
 * 000000014042D6D3: mov     gs:858h, rcx
 * 000000014042D6DC: mov     cx, gs:850h
 * 000000014042D6E5: mov     gs:852h, cx
 * 000000014042D6EE: mov     cx, gs:860h
 * 000000014042D6F7: mov     gs:854h, cx
 * 000000014042D700: movzx   eax, word ptr gs:866h
 * 000000014042D709: cmp     gs:864h, ax
 * 000000014042D712: jz      short loc_14042D726
 * 000000014042D714: mov     gs:864h, ax
 * 000000014042D71D: mov     ecx, 48h ; 'H'
 * 000000014042D722: xor     edx, edx
 * 000000014042D724: wrmsr
 * 000000014042D726: movzx   edx, word ptr gs:860h
 * 000000014042D72F: test    edx, 8
 * 000000014042D735: jz      short loc_14042D74E
 * 000000014042D737: mov     eax, 1
 * 000000014042D73C: xor     edx, edx
 * 000000014042D73E: mov     ecx, 49h ; 'I'
 * 000000014042D743: wrmsr
 * 000000014042D745: movzx   edx, word ptr gs:860h
 * 000000014042D74E: test    edx, 2
 * 000000014042D754: jz      loc_14042D891
 * 000000014042D75A: call    loc_14042D86D
 * 000000014042D75F: add     rsp, 8
 * 000000014042D763: call    loc_14042D876
 * 000000014042D768: add     rsp, 8
 * 000000014042D76C: call    loc_14042D75F
 * 000000014042D771: add     rsp, 8
 * 000000014042D775: call    loc_14042D768
 * 000000014042D77A: add     rsp, 8
 * 000000014042D77E: call    loc_14042D771
 * 000000014042D783: add     rsp, 8
 * 000000014042D787: call    loc_14042D77A
 * 000000014042D78C: add     rsp, 8
 * 000000014042D790: call    loc_14042D783
 * 000000014042D795: add     rsp, 8
 * 000000014042D799: call    loc_14042D78C
 * 000000014042D79E: add     rsp, 8
 * 000000014042D7A2: call    loc_14042D795
 * 000000014042D7A7: add     rsp, 8
 * 000000014042D7AB: call    loc_14042D79E
 * 000000014042D7B0: add     rsp, 8
 * 000000014042D7B4: call    loc_14042D7A7
 * 000000014042D7B9: add     rsp, 8
 * 000000014042D7BD: call    loc_14042D7B0
 * 000000014042D7C2: add     rsp, 8
 * 000000014042D7C6: call    loc_14042D7B9
 * 000000014042D7CB: add     rsp, 8
 * 000000014042D7CF: call    loc_14042D7C2
 * 000000014042D7D4: add     rsp, 8
 * 000000014042D7D8: call    loc_14042D7CB
 * 000000014042D7DD: add     rsp, 8
 * 000000014042D7E1: call    loc_14042D7D4
 * 000000014042D7E6: add     rsp, 8
 * 000000014042D7EA: call    loc_14042D7DD
 * 000000014042D7EF: add     rsp, 8
 * 000000014042D7F3: call    loc_14042D7E6
 * 000000014042D7F8: add     rsp, 8
 * 000000014042D7FC: call    loc_14042D7EF
 * 000000014042D801: add     rsp, 8
 * 000000014042D805: call    loc_14042D7F8
 * 000000014042D80A: add     rsp, 8
 * 000000014042D80E: call    loc_14042D801
 * 000000014042D813: add     rsp, 8
 * 000000014042D817: call    loc_14042D80A
 * 000000014042D81C: add     rsp, 8
 * 000000014042D820: call    loc_14042D813
 * 000000014042D825: add     rsp, 8
 * 000000014042D829: call    loc_14042D81C
 * 000000014042D82E: add     rsp, 8
 * 000000014042D832: call    loc_14042D825
 * 000000014042D837: add     rsp, 8
 * 000000014042D83B: call    loc_14042D82E
 * 000000014042D840: add     rsp, 8
 * 000000014042D844: call    loc_14042D837
 * 000000014042D849: add     rsp, 8
 * 000000014042D84D: call    loc_14042D840
 * 000000014042D852: add     rsp, 8
 * 000000014042D856: call    loc_14042D849
 * 000000014042D85B: add     rsp, 8
 * 000000014042D85F: call    loc_14042D852
 * 000000014042D864: add     rsp, 8
 * 000000014042D868: call    loc_14042D85B
 * 000000014042D86D: add     rsp, 8
 * 000000014042D871: call    loc_14042D864
 * 000000014042D876: add     rsp, 8
 * 000000014042D87A: mov     eax, 0DADAh
 * 000000014042D87F: test    byte ptr gs:862h, 8
 * 000000014042D888: jz      short loc_14042D891
 * 000000014042D88A: mov     al, 20h ; ' '
 * 000000014042D88C: incsspq rax
 * 000000014042D891: test    edx, 200h
 * 000000014042D897: jz      short loc_14042D89E
 * 000000014042D899: call    KiFlushBhbDuringTrapEntryOrExit
 * 000000014042D89E: lfence
 * 000000014042D8A1: mov     byte ptr gs:856h, 0
 * 000000014042D8AA: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 000000014042D8B1: jz      short loc_14042D8D2
 * 000000014042D8B3: mov     ecx, 6A7h
 * 000000014042D8B8: rdmsr
 * 000000014042D8BA: cmp     edx, 0
 * 000000014042D8BD: jz      short loc_14042D8D2
 * 000000014042D8BF: mov     ecx, edx
 * 000000014042D8C1: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 000000014042D8C7: cmp     edx, ecx
 * 000000014042D8C9: jz      short loc_14042D8D2
 * 000000014042D8CB: mov     ecx, 6A7h
 * 000000014042D8D0: wrmsr
 * 000000014042D8D2: test    byte ptr [r10+3], 3
 * 000000014042D8D7: mov     [rbp+0E8h+var_68], 0
 * 000000014042D8E0: jz      short loc_14042D8E7
 * 000000014042D8E2: call    KiSaveDebugRegisterState
 * 000000014042D8E7: cld
 * 000000014042D8E8: stmxcsr [rbp+0E8h+var_13C]
 * 000000014042D8EC: ldmxcsr dword ptr gs:180h
 * 000000014042D8F5: movaps  [rbp+0E8h+var_F8], xmm0
 * 000000014042D8F9: movaps  [rbp+0E8h+var_E8], xmm1
 * 000000014042D8FD: movaps  [rbp+0E8h+var_D8], xmm2
 * 000000014042D901: movaps  [rbp+0E8h+var_C8], xmm3
 * 000000014042D905: movaps  [rbp+0E8h+var_B8], xmm4
 * 000000014042D909: movaps  [rbp+0E8h+var_A8], xmm5
 * 000000014042D90D: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 000000014042D914: jz      short loc_14042D922
 * 000000014042D916: test    [rbp+0E8h+arg_0], 1
 * 000000014042D91D: jz      short loc_14042D922
 * 000000014042D91F: stac
 * 000000014042D922: test    [rbp+0E8h+arg_8], 200h
 * 000000014042D92C: jz      short loc_14042D92F
 * 000000014042D92E: sti
 * 000000014042D92F: test    [rbp+0E8h+arg_0], 1
 * 000000014042D936: jz      short loc_14042D979
 * 000000014042D938: call    KiHandleBound
 * 000000014042D93D: cmp     eax, 0
 * 000000014042D940: jz      short loc_14042D979
 * 000000014042D942: cmp     eax, 1
 * 000000014042D945: jz      short loc_14042D98D
 * 000000014042D947: cmp     eax, 2
 * 000000014042D94A: jz      short loc_14042D95B
 * 000000014042D94C: mov     edx, 5
 * 000000014042D951: mov     ecx, 7Fh
 * 000000014042D956: call    KiBugCheckDispatch
 * 000000014042D95B: mov     r9, 1Ch
 * 000000014042D962: mov     ecx, 0C0000409h
 * 000000014042D967: mov     edx, 1
 * 000000014042D96C: mov     r8, [rbp+0E8h]
 * 000000014042D973: call    KiFastFailDispatch
 * 000000014042D978: nop
 * 000000014042D979: mov     ecx, 0C000008Ch
 * 000000014042D97E: xor     edx, edx
 * 000000014042D980: mov     r8, [rbp+0E8h]
 * 000000014042D987: call    KiExceptionDispatch
 * 000000014042D98C: nop
 * 000000014042D98D: cli
 * 000000014042D98E: test    [rbp+0E8h+arg_0], 1
 * 000000014042D995: jz      loc_14042DC83
 * 000000014042D99B: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 000000014042D9A2: jz      short loc_14042D9A7
 * 000000014042D9A4: stac
 * 000000014042D9A7: mov     rcx, gs:188h
 * 000000014042D9B0: test    byte ptr [rcx+0C2h], 3
 * 000000014042D9B7: jz      short loc_14042D9D4
 * 000000014042D9B9: mov     ecx, 1
 * 000000014042D9BE: mov     cr8, rcx
 * 000000014042D9C2: sti
 * 000000014042D9C3: call    KiInitiateUserApc
 * 000000014042D9C8: cli
 * 000000014042D9C9: mov     ecx, 0
 * 000000014042D9CE: mov     cr8, rcx
 * 000000014042D9D2: jmp     short loc_14042D9A7
 * 000000014042D9D4: test    byte ptr gs:86Ch, 2
 * 000000014042D9DD: jz      short loc_14042D9E6
 * 000000014042D9DF: xor     ecx, ecx
 * 000000014042D9E1: call    KiUpdateStibpPairing
 * 000000014042D9E6: mov     rcx, gs:188h
 * 000000014042D9EF: test    dword ptr [rcx], 8000000h
 * 000000014042D9F5: jz      short loc_14042D9FC
 * 000000014042D9F7: call    KiRestoreSetContextState
 * 000000014042D9FC: mov     rcx, gs:188h
 * 000000014042DA05: test    dword ptr [rcx], 10000h
 * 000000014042DA0B: jz      short loc_14042DA21
 * 000000014042DA0D: test    byte ptr [rcx+2], 1
 * 000000014042DA11: jz      short loc_14042DA21
 * 000000014042DA13: call    KiCopyCounters
 * 000000014042DA18: mov     rcx, gs:188h
 * 000000014042DA21: ldmxcsr [rbp+0E8h+var_13C]
 * 000000014042DA25: cmp     [rbp+0E8h+var_68], 0
 * 000000014042DA2D: jz      short loc_14042DA34
 * 000000014042DA2F: call    KiRestoreDebugRegisterState
 * 000000014042DA34: mov     rcx, gs:188h
 * 000000014042DA3D: bt      dword ptr [rcx+74h], 16h
 * 000000014042DA42: jnb     short loc_14042DA6E
 * 000000014042DA44: xor     ecx, ecx
 * 000000014042DA46: rdsspq  rcx
 * 000000014042DA4B: mov     r8, gs:95A8h
 * 000000014042DA54: add     r8, 8
 * 000000014042DA58: cmp     rcx, r8
 * 000000014042DA5B: jnz     short loc_14042DA6E
 * 000000014042DA5D: mov     rcx, gs:95A0h
 * 000000014042DA66: rstorssp qword ptr [rcx]
 * 000000014042DA6A: saveprevssp
 * 000000014042DA6E: movaps  xmm0, [rbp+0E8h+var_F8]
 * 000000014042DA72: movaps  xmm1, [rbp+0E8h+var_E8]
 * 000000014042DA76: movaps  xmm2, [rbp+0E8h+var_D8]
 * 000000014042DA7A: movaps  xmm3, [rbp+0E8h+var_C8]
 * 000000014042DA7E: movaps  xmm4, [rbp+0E8h+var_B8]
 * 000000014042DA82: movaps  xmm5, [rbp+0E8h+var_A8]
 * 000000014042DA86: mov     r11, [rbp+0E8h+var_108]
 * 000000014042DA8A: mov     r10, [rbp+0E8h+var_110]
 * 000000014042DA8E: mov     r9, [rbp+0E8h+var_118]
 * 000000014042DA92: mov     r8, [rbp+0E8h+var_120]
 * 000000014042DA96: mov     byte ptr gs:856h, 0
 * 000000014042DA9F: movzx   eax, word ptr gs:86Ah
 * 000000014042DAA8: cmp     gs:864h, ax
 * 000000014042DAB1: jz      short loc_14042DAC5
 * 000000014042DAB3: mov     gs:864h, ax
 * 000000014042DABC: mov     ecx, 48h ; 'H'
 * 000000014042DAC1: xor     edx, edx
 * 000000014042DAC3: wrmsr
 * 000000014042DAC5: btr     word ptr gs:860h, 2
 * 000000014042DAD0: jnb     short loc_14042DAE0
 * 000000014042DAD2: mov     eax, 1
 * 000000014042DAD7: xor     edx, edx
 * 000000014042DAD9: mov     ecx, 49h ; 'I'
 * 000000014042DADE: wrmsr
 * 000000014042DAE0: btr     word ptr gs:860h, 5
 * 000000014042DAEB: jnb     loc_14042DC28
 * 000000014042DAF1: call    loc_14042DC04
 * 000000014042DAF6: add     rsp, 8
 * 000000014042DAFA: call    loc_14042DC0D
 * 000000014042DAFF: add     rsp, 8
 * 000000014042DB03: call    loc_14042DAF6
 * 000000014042DB08: add     rsp, 8
 * 000000014042DB0C: call    loc_14042DAFF
 * 000000014042DB11: add     rsp, 8
 * 000000014042DB15: call    loc_14042DB08
 * 000000014042DB1A: add     rsp, 8
 * 000000014042DB1E: call    loc_14042DB11
 * 000000014042DB23: add     rsp, 8
 * 000000014042DB27: call    loc_14042DB1A
 * 000000014042DB2C: add     rsp, 8
 * 000000014042DB30: call    loc_14042DB23
 * 000000014042DB35: add     rsp, 8
 * 000000014042DB39: call    loc_14042DB2C
 * 000000014042DB3E: add     rsp, 8
 * 000000014042DB42: call    loc_14042DB35
 * 000000014042DB47: add     rsp, 8
 * 000000014042DB4B: call    loc_14042DB3E
 * 000000014042DB50: add     rsp, 8
 * 000000014042DB54: call    loc_14042DB47
 * 000000014042DB59: add     rsp, 8
 * 000000014042DB5D: call    loc_14042DB50
 * 000000014042DB62: add     rsp, 8
 * 000000014042DB66: call    loc_14042DB59
 * 000000014042DB6B: add     rsp, 8
 * 000000014042DB6F: call    loc_14042DB62
 * 000000014042DB74: add     rsp, 8
 * 000000014042DB78: call    loc_14042DB6B
 * 000000014042DB7D: add     rsp, 8
 * 000000014042DB81: call    loc_14042DB74
 * 000000014042DB86: add     rsp, 8
 * 000000014042DB8A: call    loc_14042DB7D
 * 000000014042DB8F: add     rsp, 8
 * 000000014042DB93: call    loc_14042DB86
 * 000000014042DB98: add     rsp, 8
 * 000000014042DB9C: call    loc_14042DB8F
 * 000000014042DBA1: add     rsp, 8
 * 000000014042DBA5: call    loc_14042DB98
 * 000000014042DBAA: add     rsp, 8
 * 000000014042DBAE: call    loc_14042DBA1
 * 000000014042DBB3: add     rsp, 8
 * 000000014042DBB7: call    loc_14042DBAA
 * 000000014042DBBC: add     rsp, 8
 * 000000014042DBC0: call    loc_14042DBB3
 * 000000014042DBC5: add     rsp, 8
 * 000000014042DBC9: call    loc_14042DBBC
 * 000000014042DBCE: add     rsp, 8
 * 000000014042DBD2: call    loc_14042DBC5
 * 000000014042DBD7: add     rsp, 8
 * 000000014042DBDB: call    loc_14042DBCE
 * 000000014042DBE0: add     rsp, 8
 * 000000014042DBE4: call    loc_14042DBD7
 * 000000014042DBE9: add     rsp, 8
 * 000000014042DBED: call    loc_14042DBE0
 * 000000014042DBF2: add     rsp, 8
 * 000000014042DBF6: call    loc_14042DBE9
 * 000000014042DBFB: add     rsp, 8
 * 000000014042DBFF: call    loc_14042DBF2
 * 000000014042DC04: add     rsp, 8
 * 000000014042DC08: call    loc_14042DBFB
 * 000000014042DC0D: add     rsp, 8
 * 000000014042DC11: mov     eax, 0DADAh
 * 000000014042DC16: test    byte ptr gs:862h, 8
 * 000000014042DC1F: jz      short loc_14042DC28
 * 000000014042DC21: mov     al, 20h ; ' '
 * 000000014042DC23: incsspq rax
 * 000000014042DC28: test    word ptr gs:860h, 80h
 * 000000014042DC33: jz      short loc_14042DC41
 * 000000014042DC35: xor     eax, eax
 * 000000014042DC37: xor     edx, edx
 * 000000014042DC39: mov     ecx, 1
 * 000000014042DC3E: div     rcx
 * 000000014042DC41: mov     rdx, [rbp+0E8h+var_128]
 * 000000014042DC45: mov     rcx, [rbp+0E8h+var_130]
 * 000000014042DC49: mov     rax, [rbp+0E8h+var_138]
 * 000000014042DC4D: mov     rsp, rbp
 * 000000014042DC50: mov     rbp, [rbp+0E8h+var_10]
 * 000000014042DC57: add     rsp, 0E8h
 * 000000014042DC5E: test    cs:KiKvaShadow, 1
 * 000000014042DC65: jz      short loc_14042DC6C
 * 000000014042DC67: jmp     KiKernelExit
 * 000000014042DC6C: test    word ptr gs:860h, 100h
 * 000000014042DC77: jz      short loc_14042DC7E
 * 000000014042DC79: verw    [rsp+arg_18]
 * 000000014042DC7E: swapgs
 * 000000014042DC81: iretq
 * 000000014042DC83: ldmxcsr [rbp+0E8h+var_13C]
 * 000000014042DC87: movaps  xmm0, [rbp+0E8h+var_F8]
 * 000000014042DC8B: movaps  xmm1, [rbp+0E8h+var_E8]
 * 000000014042DC8F: movaps  xmm2, [rbp+0E8h+var_D8]
 * 000000014042DC93: movaps  xmm3, [rbp+0E8h+var_C8]
 * 000000014042DC97: movaps  xmm4, [rbp+0E8h+var_B8]
 * 000000014042DC9B: movaps  xmm5, [rbp+0E8h+var_A8]
 * 000000014042DC9F: mov     r11, [rbp+0E8h+var_108]
 * 000000014042DCA3: mov     r10, [rbp+0E8h+var_110]
 * 000000014042DCA7: mov     r9, [rbp+0E8h+var_118]
 * 000000014042DCAB: mov     r8, [rbp+0E8h+var_120]
 * 000000014042DCAF: mov     rdx, [rbp+0E8h+var_128]
 * 000000014042DCB3: mov     rcx, [rbp+0E8h+var_130]
 * 000000014042DCB7: mov     rax, [rbp+0E8h+var_138]
 * 000000014042DCBB: mov     rsp, rbp
 * 000000014042DCBE: mov     rbp, [rbp+0E8h+var_10]
 * 000000014042DCC5: add     rsp, 0E8h
 * 000000014042DCCC: iretq
 */
