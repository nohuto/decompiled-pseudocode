/*
 * XREFs of KiInvalidOpcodeFault @ 0x14042DD00
 * Callers:
 *     KiInvalidOpcodeFaultShadow @ 0x140AF6440 (KiInvalidOpcodeFaultShadow.c)
 * Callees:
 *     KiRestoreDebugRegisterState @ 0x14041F2B0 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x14041F330 (KiSaveDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1404200D0 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x1404251B0 (KiInitiateUserApc.c)
 *     KiInvalidOpcodeFault @ 0x14042DD00 (KiInvalidOpcodeFault.c)
 *     KiExceptionDispatch @ 0x140434D40 (KiExceptionDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140435700 (KiFlushBhbDuringTrapEntryOrExit.c)
 *     KiUpdateStibpPairing @ 0x140461220 (KiUpdateStibpPairing.c)
 *     KiCopyCounters @ 0x1405746E0 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiInvalidOpcodeFault @ 0x14042DD00
 * Reason: Hex-Rays returned no pseudocode for 0x14042DD00
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014042DD00: sub     rsp, 8
 * 000000014042DD04: push    rbp
 * 000000014042DD05: sub     rsp, 158h
 * 000000014042DD0C: lea     rbp, [rsp+80h]
 * 000000014042DD14: mov     [rbp+0E8h+var_13D], 1
 * 000000014042DD18: mov     [rbp+0E8h+var_138], rax
 * 000000014042DD1C: mov     [rbp+0E8h+var_130], rcx
 * 000000014042DD20: mov     [rbp+0E8h+var_128], rdx
 * 000000014042DD24: mov     [rbp+0E8h+var_120], r8
 * 000000014042DD28: mov     [rbp+0E8h+var_118], r9
 * 000000014042DD2C: mov     [rbp+0E8h+var_110], r10
 * 000000014042DD30: mov     [rbp+0E8h+var_108], r11
 * 000000014042DD34: test    [rbp+0E8h+arg_0], 1
 * 000000014042DD3B: jnz     short loc_14042DD77
 * 000000014042DD3D: xor     edx, edx
 * 000000014042DD3F: rdsspq  rdx
 * 000000014042DD44: mov     [rbp+0E8h+var_90], rdx
 * 000000014042DD48: lfence
 * 000000014042DD4B: test    word ptr gs:860h, 1
 * 000000014042DD56: jnz     short loc_14042DD60
 * 000000014042DD58: lfence
 * 000000014042DD5B: jmp     loc_14042DFE7
 * 000000014042DD60: movzx   eax, word ptr gs:864h
 * 000000014042DD69: mov     ecx, 48h ; 'H'
 * 000000014042DD6E: xor     edx, edx
 * 000000014042DD70: wrmsr
 * 000000014042DD72: jmp     loc_14042DFE7
 * 000000014042DD77: test    cs:KiKvaShadow, 1
 * 000000014042DD7E: jnz     short loc_14042DD83
 * 000000014042DD80: swapgs
 * 000000014042DD83: lfence
 * 000000014042DD86: mov     rcx, gs:95A8h
 * 000000014042DD8F: test    rcx, rcx
 * 000000014042DD92: jz      short loc_14042DDB3
 * 000000014042DD94: rdsspq  rdx
 * 000000014042DD99: mov     r10, gs:95A0h
 * 000000014042DDA2: add     r10, 8
 * 000000014042DDA6: cmp     rdx, r10
 * 000000014042DDA9: jnz     short loc_14042DDB3
 * 000000014042DDAB: rstorssp qword ptr [rcx]
 * 000000014042DDAF: saveprevssp
 * 000000014042DDB3: mov     r10, gs:188h
 * 000000014042DDBC: mov     rcx, gs:188h
 * 000000014042DDC5: mov     rcx, [rcx+220h]
 * 000000014042DDCC: mov     rcx, [rcx+9E0h]
 * 000000014042DDD3: mov     gs:858h, rcx
 * 000000014042DDDC: mov     cx, gs:850h
 * 000000014042DDE5: mov     gs:852h, cx
 * 000000014042DDEE: mov     cx, gs:860h
 * 000000014042DDF7: mov     gs:854h, cx
 * 000000014042DE00: movzx   eax, word ptr gs:866h
 * 000000014042DE09: cmp     gs:864h, ax
 * 000000014042DE12: jz      short loc_14042DE26
 * 000000014042DE14: mov     gs:864h, ax
 * 000000014042DE1D: mov     ecx, 48h ; 'H'
 * 000000014042DE22: xor     edx, edx
 * 000000014042DE24: wrmsr
 * 000000014042DE26: movzx   edx, word ptr gs:860h
 * 000000014042DE2F: test    edx, 8
 * 000000014042DE35: jz      short loc_14042DE4E
 * 000000014042DE37: mov     eax, 1
 * 000000014042DE3C: xor     edx, edx
 * 000000014042DE3E: mov     ecx, 49h ; 'I'
 * 000000014042DE43: wrmsr
 * 000000014042DE45: movzx   edx, word ptr gs:860h
 * 000000014042DE4E: test    edx, 2
 * 000000014042DE54: jz      loc_14042DF91
 * 000000014042DE5A: call    loc_14042DF6D
 * 000000014042DE5F: add     rsp, 8
 * 000000014042DE63: call    loc_14042DF76
 * 000000014042DE68: add     rsp, 8
 * 000000014042DE6C: call    loc_14042DE5F
 * 000000014042DE71: add     rsp, 8
 * 000000014042DE75: call    loc_14042DE68
 * 000000014042DE7A: add     rsp, 8
 * 000000014042DE7E: call    loc_14042DE71
 * 000000014042DE83: add     rsp, 8
 * 000000014042DE87: call    loc_14042DE7A
 * 000000014042DE8C: add     rsp, 8
 * 000000014042DE90: call    loc_14042DE83
 * 000000014042DE95: add     rsp, 8
 * 000000014042DE99: call    loc_14042DE8C
 * 000000014042DE9E: add     rsp, 8
 * 000000014042DEA2: call    loc_14042DE95
 * 000000014042DEA7: add     rsp, 8
 * 000000014042DEAB: call    loc_14042DE9E
 * 000000014042DEB0: add     rsp, 8
 * 000000014042DEB4: call    loc_14042DEA7
 * 000000014042DEB9: add     rsp, 8
 * 000000014042DEBD: call    loc_14042DEB0
 * 000000014042DEC2: add     rsp, 8
 * 000000014042DEC6: call    loc_14042DEB9
 * 000000014042DECB: add     rsp, 8
 * 000000014042DECF: call    loc_14042DEC2
 * 000000014042DED4: add     rsp, 8
 * 000000014042DED8: call    loc_14042DECB
 * 000000014042DEDD: add     rsp, 8
 * 000000014042DEE1: call    loc_14042DED4
 * 000000014042DEE6: add     rsp, 8
 * 000000014042DEEA: call    loc_14042DEDD
 * 000000014042DEEF: add     rsp, 8
 * 000000014042DEF3: call    loc_14042DEE6
 * 000000014042DEF8: add     rsp, 8
 * 000000014042DEFC: call    loc_14042DEEF
 * 000000014042DF01: add     rsp, 8
 * 000000014042DF05: call    loc_14042DEF8
 * 000000014042DF0A: add     rsp, 8
 * 000000014042DF0E: call    loc_14042DF01
 * 000000014042DF13: add     rsp, 8
 * 000000014042DF17: call    loc_14042DF0A
 * 000000014042DF1C: add     rsp, 8
 * 000000014042DF20: call    loc_14042DF13
 * 000000014042DF25: add     rsp, 8
 * 000000014042DF29: call    loc_14042DF1C
 * 000000014042DF2E: add     rsp, 8
 * 000000014042DF32: call    loc_14042DF25
 * 000000014042DF37: add     rsp, 8
 * 000000014042DF3B: call    loc_14042DF2E
 * 000000014042DF40: add     rsp, 8
 * 000000014042DF44: call    loc_14042DF37
 * 000000014042DF49: add     rsp, 8
 * 000000014042DF4D: call    loc_14042DF40
 * 000000014042DF52: add     rsp, 8
 * 000000014042DF56: call    loc_14042DF49
 * 000000014042DF5B: add     rsp, 8
 * 000000014042DF5F: call    loc_14042DF52
 * 000000014042DF64: add     rsp, 8
 * 000000014042DF68: call    loc_14042DF5B
 * 000000014042DF6D: add     rsp, 8
 * 000000014042DF71: call    loc_14042DF64
 * 000000014042DF76: add     rsp, 8
 * 000000014042DF7A: mov     eax, 0DADAh
 * 000000014042DF7F: test    byte ptr gs:862h, 8
 * 000000014042DF88: jz      short loc_14042DF91
 * 000000014042DF8A: mov     al, 20h ; ' '
 * 000000014042DF8C: incsspq rax
 * 000000014042DF91: test    edx, 200h
 * 000000014042DF97: jz      short loc_14042DF9E
 * 000000014042DF99: call    KiFlushBhbDuringTrapEntryOrExit
 * 000000014042DF9E: lfence
 * 000000014042DFA1: mov     byte ptr gs:856h, 0
 * 000000014042DFAA: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 000000014042DFB1: jz      short loc_14042DFD2
 * 000000014042DFB3: mov     ecx, 6A7h
 * 000000014042DFB8: rdmsr
 * 000000014042DFBA: cmp     edx, 0
 * 000000014042DFBD: jz      short loc_14042DFD2
 * 000000014042DFBF: mov     ecx, edx
 * 000000014042DFC1: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 000000014042DFC7: cmp     edx, ecx
 * 000000014042DFC9: jz      short loc_14042DFD2
 * 000000014042DFCB: mov     ecx, 6A7h
 * 000000014042DFD0: wrmsr
 * 000000014042DFD2: test    byte ptr [r10+3], 3
 * 000000014042DFD7: mov     [rbp+0E8h+var_68], 0
 * 000000014042DFE0: jz      short loc_14042DFE7
 * 000000014042DFE2: call    KiSaveDebugRegisterState
 * 000000014042DFE7: cld
 * 000000014042DFE8: stmxcsr [rbp+0E8h+var_13C]
 * 000000014042DFEC: ldmxcsr dword ptr gs:180h
 * 000000014042DFF5: movaps  [rbp+0E8h+var_F8], xmm0
 * 000000014042DFF9: movaps  [rbp+0E8h+var_E8], xmm1
 * 000000014042DFFD: movaps  [rbp+0E8h+var_D8], xmm2
 * 000000014042E001: movaps  [rbp+0E8h+var_C8], xmm3
 * 000000014042E005: movaps  [rbp+0E8h+var_B8], xmm4
 * 000000014042E009: movaps  [rbp+0E8h+var_A8], xmm5
 * 000000014042E00D: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 000000014042E014: jz      short loc_14042E022
 * 000000014042E016: test    [rbp+0E8h+arg_0], 1
 * 000000014042E01D: jz      short loc_14042E022
 * 000000014042E01F: stac
 * 000000014042E022: test    [rbp+0E8h+arg_8], 200h
 * 000000014042E02C: jz      short loc_14042E02F
 * 000000014042E02E: sti
 * 000000014042E02F: mov     ecx, 10000002h
 * 000000014042E034: xor     edx, edx
 * 000000014042E036: mov     r8, [rbp+0E8h]
 * 000000014042E03D: call    KiExceptionDispatch
 * 000000014042E042: nop
 * 000000014042E043: cli
 * 000000014042E044: test    [rbp+0E8h+arg_0], 1
 * 000000014042E04B: jz      loc_14042E339
 * 000000014042E051: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 000000014042E058: jz      short loc_14042E05D
 * 000000014042E05A: stac
 * 000000014042E05D: mov     rcx, gs:188h
 * 000000014042E066: test    byte ptr [rcx+0C2h], 3
 * 000000014042E06D: jz      short loc_14042E08A
 * 000000014042E06F: mov     ecx, 1
 * 000000014042E074: mov     cr8, rcx
 * 000000014042E078: sti
 * 000000014042E079: call    KiInitiateUserApc
 * 000000014042E07E: cli
 * 000000014042E07F: mov     ecx, 0
 * 000000014042E084: mov     cr8, rcx
 * 000000014042E088: jmp     short loc_14042E05D
 * 000000014042E08A: test    byte ptr gs:86Ch, 2
 * 000000014042E093: jz      short loc_14042E09C
 * 000000014042E095: xor     ecx, ecx
 * 000000014042E097: call    KiUpdateStibpPairing
 * 000000014042E09C: mov     rcx, gs:188h
 * 000000014042E0A5: test    dword ptr [rcx], 8000000h
 * 000000014042E0AB: jz      short loc_14042E0B2
 * 000000014042E0AD: call    KiRestoreSetContextState
 * 000000014042E0B2: mov     rcx, gs:188h
 * 000000014042E0BB: test    dword ptr [rcx], 10000h
 * 000000014042E0C1: jz      short loc_14042E0D7
 * 000000014042E0C3: test    byte ptr [rcx+2], 1
 * 000000014042E0C7: jz      short loc_14042E0D7
 * 000000014042E0C9: call    KiCopyCounters
 * 000000014042E0CE: mov     rcx, gs:188h
 * 000000014042E0D7: ldmxcsr [rbp+0E8h+var_13C]
 * 000000014042E0DB: cmp     [rbp+0E8h+var_68], 0
 * 000000014042E0E3: jz      short loc_14042E0EA
 * 000000014042E0E5: call    KiRestoreDebugRegisterState
 * 000000014042E0EA: mov     rcx, gs:188h
 * 000000014042E0F3: bt      dword ptr [rcx+74h], 16h
 * 000000014042E0F8: jnb     short loc_14042E124
 * 000000014042E0FA: xor     ecx, ecx
 * 000000014042E0FC: rdsspq  rcx
 * 000000014042E101: mov     r8, gs:95A8h
 * 000000014042E10A: add     r8, 8
 * 000000014042E10E: cmp     rcx, r8
 * 000000014042E111: jnz     short loc_14042E124
 * 000000014042E113: mov     rcx, gs:95A0h
 * 000000014042E11C: rstorssp qword ptr [rcx]
 * 000000014042E120: saveprevssp
 * 000000014042E124: movaps  xmm0, [rbp+0E8h+var_F8]
 * 000000014042E128: movaps  xmm1, [rbp+0E8h+var_E8]
 * 000000014042E12C: movaps  xmm2, [rbp+0E8h+var_D8]
 * 000000014042E130: movaps  xmm3, [rbp+0E8h+var_C8]
 * 000000014042E134: movaps  xmm4, [rbp+0E8h+var_B8]
 * 000000014042E138: movaps  xmm5, [rbp+0E8h+var_A8]
 * 000000014042E13C: mov     r11, [rbp+0E8h+var_108]
 * 000000014042E140: mov     r10, [rbp+0E8h+var_110]
 * 000000014042E144: mov     r9, [rbp+0E8h+var_118]
 * 000000014042E148: mov     r8, [rbp+0E8h+var_120]
 * 000000014042E14C: mov     byte ptr gs:856h, 0
 * 000000014042E155: movzx   eax, word ptr gs:86Ah
 * 000000014042E15E: cmp     gs:864h, ax
 * 000000014042E167: jz      short loc_14042E17B
 * 000000014042E169: mov     gs:864h, ax
 * 000000014042E172: mov     ecx, 48h ; 'H'
 * 000000014042E177: xor     edx, edx
 * 000000014042E179: wrmsr
 * 000000014042E17B: btr     word ptr gs:860h, 2
 * 000000014042E186: jnb     short loc_14042E196
 * 000000014042E188: mov     eax, 1
 * 000000014042E18D: xor     edx, edx
 * 000000014042E18F: mov     ecx, 49h ; 'I'
 * 000000014042E194: wrmsr
 * 000000014042E196: btr     word ptr gs:860h, 5
 * 000000014042E1A1: jnb     loc_14042E2DE
 * 000000014042E1A7: call    loc_14042E2BA
 * 000000014042E1AC: add     rsp, 8
 * 000000014042E1B0: call    loc_14042E2C3
 * 000000014042E1B5: add     rsp, 8
 * 000000014042E1B9: call    loc_14042E1AC
 * 000000014042E1BE: add     rsp, 8
 * 000000014042E1C2: call    loc_14042E1B5
 * 000000014042E1C7: add     rsp, 8
 * 000000014042E1CB: call    loc_14042E1BE
 * 000000014042E1D0: add     rsp, 8
 * 000000014042E1D4: call    loc_14042E1C7
 * 000000014042E1D9: add     rsp, 8
 * 000000014042E1DD: call    loc_14042E1D0
 * 000000014042E1E2: add     rsp, 8
 * 000000014042E1E6: call    loc_14042E1D9
 * 000000014042E1EB: add     rsp, 8
 * 000000014042E1EF: call    loc_14042E1E2
 * 000000014042E1F4: add     rsp, 8
 * 000000014042E1F8: call    loc_14042E1EB
 * 000000014042E1FD: add     rsp, 8
 * 000000014042E201: call    loc_14042E1F4
 * 000000014042E206: add     rsp, 8
 * 000000014042E20A: call    loc_14042E1FD
 * 000000014042E20F: add     rsp, 8
 * 000000014042E213: call    loc_14042E206
 * 000000014042E218: add     rsp, 8
 * 000000014042E21C: call    loc_14042E20F
 * 000000014042E221: add     rsp, 8
 * 000000014042E225: call    loc_14042E218
 * 000000014042E22A: add     rsp, 8
 * 000000014042E22E: call    loc_14042E221
 * 000000014042E233: add     rsp, 8
 * 000000014042E237: call    loc_14042E22A
 * 000000014042E23C: add     rsp, 8
 * 000000014042E240: call    loc_14042E233
 * 000000014042E245: add     rsp, 8
 * 000000014042E249: call    loc_14042E23C
 * 000000014042E24E: add     rsp, 8
 * 000000014042E252: call    loc_14042E245
 * 000000014042E257: add     rsp, 8
 * 000000014042E25B: call    loc_14042E24E
 * 000000014042E260: add     rsp, 8
 * 000000014042E264: call    loc_14042E257
 * 000000014042E269: add     rsp, 8
 * 000000014042E26D: call    loc_14042E260
 * 000000014042E272: add     rsp, 8
 * 000000014042E276: call    loc_14042E269
 * 000000014042E27B: add     rsp, 8
 * 000000014042E27F: call    loc_14042E272
 * 000000014042E284: add     rsp, 8
 * 000000014042E288: call    loc_14042E27B
 * 000000014042E28D: add     rsp, 8
 * 000000014042E291: call    loc_14042E284
 * 000000014042E296: add     rsp, 8
 * 000000014042E29A: call    loc_14042E28D
 * 000000014042E29F: add     rsp, 8
 * 000000014042E2A3: call    loc_14042E296
 * 000000014042E2A8: add     rsp, 8
 * 000000014042E2AC: call    loc_14042E29F
 * 000000014042E2B1: add     rsp, 8
 * 000000014042E2B5: call    loc_14042E2A8
 * 000000014042E2BA: add     rsp, 8
 * 000000014042E2BE: call    loc_14042E2B1
 * 000000014042E2C3: add     rsp, 8
 * 000000014042E2C7: mov     eax, 0DADAh
 * 000000014042E2CC: test    byte ptr gs:862h, 8
 * 000000014042E2D5: jz      short loc_14042E2DE
 * 000000014042E2D7: mov     al, 20h ; ' '
 * 000000014042E2D9: incsspq rax
 * 000000014042E2DE: test    word ptr gs:860h, 80h
 * 000000014042E2E9: jz      short loc_14042E2F7
 * 000000014042E2EB: xor     eax, eax
 * 000000014042E2ED: xor     edx, edx
 * 000000014042E2EF: mov     ecx, 1
 * 000000014042E2F4: div     rcx
 * 000000014042E2F7: mov     rdx, [rbp+0E8h+var_128]
 * 000000014042E2FB: mov     rcx, [rbp+0E8h+var_130]
 * 000000014042E2FF: mov     rax, [rbp+0E8h+var_138]
 * 000000014042E303: mov     rsp, rbp
 * 000000014042E306: mov     rbp, [rbp+0E8h+var_10]
 * 000000014042E30D: add     rsp, 0E8h
 * 000000014042E314: test    cs:KiKvaShadow, 1
 * 000000014042E31B: jz      short loc_14042E322
 * 000000014042E31D: jmp     KiKernelExit
 * 000000014042E322: test    word ptr gs:860h, 100h
 * 000000014042E32D: jz      short loc_14042E334
 * 000000014042E32F: verw    [rsp+arg_18]
 * 000000014042E334: swapgs
 * 000000014042E337: iretq
 * 000000014042E339: ldmxcsr [rbp+0E8h+var_13C]
 * 000000014042E33D: movaps  xmm0, [rbp+0E8h+var_F8]
 * 000000014042E341: movaps  xmm1, [rbp+0E8h+var_E8]
 * 000000014042E345: movaps  xmm2, [rbp+0E8h+var_D8]
 * 000000014042E349: movaps  xmm3, [rbp+0E8h+var_C8]
 * 000000014042E34D: movaps  xmm4, [rbp+0E8h+var_B8]
 * 000000014042E351: movaps  xmm5, [rbp+0E8h+var_A8]
 * 000000014042E355: mov     r11, [rbp+0E8h+var_108]
 * 000000014042E359: mov     r10, [rbp+0E8h+var_110]
 * 000000014042E35D: mov     r9, [rbp+0E8h+var_118]
 * 000000014042E361: mov     r8, [rbp+0E8h+var_120]
 * 000000014042E365: mov     rdx, [rbp+0E8h+var_128]
 * 000000014042E369: mov     rcx, [rbp+0E8h+var_130]
 * 000000014042E36D: mov     rax, [rbp+0E8h+var_138]
 * 000000014042E371: mov     rsp, rbp
 * 000000014042E374: mov     rbp, [rbp+0E8h+var_10]
 * 000000014042E37B: add     rsp, 0E8h
 * 000000014042E382: iretq
 */
