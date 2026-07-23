/*
 * XREFs of KiPageFault @ 0x14042FD00
 * Callers:
 *     KiPageFaultShadow @ 0x140AF6840 (KiPageFaultShadow.c)
 * Callees:
 *     MmAccessFault @ 0x140235440 (MmAccessFault.c)
 *     KiCheckForSListAddress @ 0x140310070 (KiCheckForSListAddress.c)
 *     KiRestoreDebugRegisterState @ 0x14041F2B0 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x14041F330 (KiSaveDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1404200D0 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x1404251B0 (KiInitiateUserApc.c)
 *     KiPageFault @ 0x14042FD00 (KiPageFault.c)
 *     KiBugCheckDispatch @ 0x140434CC0 (KiBugCheckDispatch.c)
 *     KiExceptionDispatch @ 0x140434D40 (KiExceptionDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140435700 (KiFlushBhbDuringTrapEntryOrExit.c)
 *     KiUpdateStibpPairing @ 0x140461220 (KiUpdateStibpPairing.c)
 *     PsWatchWorkingSet @ 0x140463CC0 (PsWatchWorkingSet.c)
 *     KdSetOwedBreakpoints @ 0x1405686F0 (KdSetOwedBreakpoints.c)
 *     KiCopyCounters @ 0x1405746E0 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiPageFault @ 0x14042FD00
 * Reason: Hex-Rays returned no pseudocode for 0x14042FD00
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014042FD00: push    rbp
 * 000000014042FD01: sub     rsp, 158h
 * 000000014042FD08: lea     rbp, [rsp+80h]
 * 000000014042FD10: mov     [rbp+0D8h+var_12D], 1
 * 000000014042FD14: mov     [rbp+0D8h+var_128], rax
 * 000000014042FD18: mov     [rbp+0D8h+var_120], rcx
 * 000000014042FD1C: mov     [rbp+0D8h+var_118], rdx
 * 000000014042FD20: mov     [rbp+0D8h+var_110], r8
 * 000000014042FD24: mov     [rbp+0D8h+var_108], r9
 * 000000014042FD28: mov     [rbp+0D8h+var_100], r10
 * 000000014042FD2C: mov     [rbp+0D8h+var_F8], r11
 * 000000014042FD30: test    byte ptr [rbp+0D8h+arg_8], 1
 * 000000014042FD37: jnz     short loc_14042FD73
 * 000000014042FD39: xor     edx, edx
 * 000000014042FD3B: rdsspq  rdx
 * 000000014042FD40: mov     [rbp+0D8h+var_80], rdx
 * 000000014042FD44: lfence
 * 000000014042FD47: test    word ptr gs:860h, 1
 * 000000014042FD52: jnz     short loc_14042FD5C
 * 000000014042FD54: lfence
 * 000000014042FD57: jmp     loc_14042FFFA
 * 000000014042FD5C: movzx   eax, word ptr gs:864h
 * 000000014042FD65: mov     ecx, 48h ; 'H'
 * 000000014042FD6A: xor     edx, edx
 * 000000014042FD6C: wrmsr
 * 000000014042FD6E: jmp     loc_14042FFFA
 * 000000014042FD73: test    cs:KiKvaShadow, 1
 * 000000014042FD7A: jnz     short loc_14042FD7F
 * 000000014042FD7C: swapgs
 * 000000014042FD7F: lfence
 * 000000014042FD82: mov     rcx, gs:95A8h
 * 000000014042FD8B: test    rcx, rcx
 * 000000014042FD8E: jz      short loc_14042FDAF
 * 000000014042FD90: rdsspq  rdx
 * 000000014042FD95: mov     r10, gs:95A0h
 * 000000014042FD9E: add     r10, 8
 * 000000014042FDA2: cmp     rdx, r10
 * 000000014042FDA5: jnz     short loc_14042FDAF
 * 000000014042FDA7: rstorssp qword ptr [rcx]
 * 000000014042FDAB: saveprevssp
 * 000000014042FDAF: mov     r10, gs:188h
 * 000000014042FDB8: mov     rcx, gs:188h
 * 000000014042FDC1: mov     rcx, [rcx+220h]
 * 000000014042FDC8: mov     rcx, [rcx+9E0h]
 * 000000014042FDCF: mov     gs:858h, rcx
 * 000000014042FDD8: mov     cx, gs:850h
 * 000000014042FDE1: mov     gs:852h, cx
 * 000000014042FDEA: mov     cx, gs:860h
 * 000000014042FDF3: mov     gs:854h, cx
 * 000000014042FDFC: movzx   eax, word ptr gs:866h
 * 000000014042FE05: cmp     gs:864h, ax
 * 000000014042FE0E: jz      short loc_14042FE22
 * 000000014042FE10: mov     gs:864h, ax
 * 000000014042FE19: mov     ecx, 48h ; 'H'
 * 000000014042FE1E: xor     edx, edx
 * 000000014042FE20: wrmsr
 * 000000014042FE22: movzx   edx, word ptr gs:860h
 * 000000014042FE2B: test    edx, 8
 * 000000014042FE31: jz      short loc_14042FE4A
 * 000000014042FE33: mov     eax, 1
 * 000000014042FE38: xor     edx, edx
 * 000000014042FE3A: mov     ecx, 49h ; 'I'
 * 000000014042FE3F: wrmsr
 * 000000014042FE41: movzx   edx, word ptr gs:860h
 * 000000014042FE4A: test    edx, 2
 * 000000014042FE50: jz      loc_14042FF8D
 * 000000014042FE56: call    loc_14042FF69
 * 000000014042FE5B: add     rsp, 8
 * 000000014042FE5F: call    loc_14042FF72
 * 000000014042FE64: add     rsp, 8
 * 000000014042FE68: call    loc_14042FE5B
 * 000000014042FE6D: add     rsp, 8
 * 000000014042FE71: call    loc_14042FE64
 * 000000014042FE76: add     rsp, 8
 * 000000014042FE7A: call    loc_14042FE6D
 * 000000014042FE7F: add     rsp, 8
 * 000000014042FE83: call    loc_14042FE76
 * 000000014042FE88: add     rsp, 8
 * 000000014042FE8C: call    loc_14042FE7F
 * 000000014042FE91: add     rsp, 8
 * 000000014042FE95: call    loc_14042FE88
 * 000000014042FE9A: add     rsp, 8
 * 000000014042FE9E: call    loc_14042FE91
 * 000000014042FEA3: add     rsp, 8
 * 000000014042FEA7: call    loc_14042FE9A
 * 000000014042FEAC: add     rsp, 8
 * 000000014042FEB0: call    loc_14042FEA3
 * 000000014042FEB5: add     rsp, 8
 * 000000014042FEB9: call    loc_14042FEAC
 * 000000014042FEBE: add     rsp, 8
 * 000000014042FEC2: call    loc_14042FEB5
 * 000000014042FEC7: add     rsp, 8
 * 000000014042FECB: call    loc_14042FEBE
 * 000000014042FED0: add     rsp, 8
 * 000000014042FED4: call    loc_14042FEC7
 * 000000014042FED9: add     rsp, 8
 * 000000014042FEDD: call    loc_14042FED0
 * 000000014042FEE2: add     rsp, 8
 * 000000014042FEE6: call    loc_14042FED9
 * 000000014042FEEB: add     rsp, 8
 * 000000014042FEEF: call    loc_14042FEE2
 * 000000014042FEF4: add     rsp, 8
 * 000000014042FEF8: call    loc_14042FEEB
 * 000000014042FEFD: add     rsp, 8
 * 000000014042FF01: call    loc_14042FEF4
 * 000000014042FF06: add     rsp, 8
 * 000000014042FF0A: call    loc_14042FEFD
 * 000000014042FF0F: add     rsp, 8
 * 000000014042FF13: call    loc_14042FF06
 * 000000014042FF18: add     rsp, 8
 * 000000014042FF1C: call    loc_14042FF0F
 * 000000014042FF21: add     rsp, 8
 * 000000014042FF25: call    loc_14042FF18
 * 000000014042FF2A: add     rsp, 8
 * 000000014042FF2E: call    loc_14042FF21
 * 000000014042FF33: add     rsp, 8
 * 000000014042FF37: call    loc_14042FF2A
 * 000000014042FF3C: add     rsp, 8
 * 000000014042FF40: call    loc_14042FF33
 * 000000014042FF45: add     rsp, 8
 * 000000014042FF49: call    loc_14042FF3C
 * 000000014042FF4E: add     rsp, 8
 * 000000014042FF52: call    loc_14042FF45
 * 000000014042FF57: add     rsp, 8
 * 000000014042FF5B: call    loc_14042FF4E
 * 000000014042FF60: add     rsp, 8
 * 000000014042FF64: call    loc_14042FF57
 * 000000014042FF69: add     rsp, 8
 * 000000014042FF6D: call    loc_14042FF60
 * 000000014042FF72: add     rsp, 8
 * 000000014042FF76: mov     eax, 0DADAh
 * 000000014042FF7B: test    byte ptr gs:862h, 8
 * 000000014042FF84: jz      short loc_14042FF8D
 * 000000014042FF86: mov     al, 20h ; ' '
 * 000000014042FF88: incsspq rax
 * 000000014042FF8D: test    edx, 200h
 * 000000014042FF93: jz      short loc_14042FF9A
 * 000000014042FF95: call    KiFlushBhbDuringTrapEntryOrExit
 * 000000014042FF9A: lfence
 * 000000014042FF9D: mov     byte ptr gs:856h, 0
 * 000000014042FFA6: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 000000014042FFAD: jz      short loc_14042FFCE
 * 000000014042FFAF: mov     ecx, 6A7h
 * 000000014042FFB4: rdmsr
 * 000000014042FFB6: cmp     edx, 0
 * 000000014042FFB9: jz      short loc_14042FFCE
 * 000000014042FFBB: mov     ecx, edx
 * 000000014042FFBD: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 000000014042FFC3: cmp     edx, ecx
 * 000000014042FFC5: jz      short loc_14042FFCE
 * 000000014042FFC7: mov     ecx, 6A7h
 * 000000014042FFCC: wrmsr
 * 000000014042FFCE: cmp     [rbp+0D8h+arg_8], 33h ; '3'
 * 000000014042FFD6: jnz     short loc_14042FFE5
 * 000000014042FFD8: mov     ecx, 0C0000102h
 * 000000014042FFDD: rdmsr
 * 000000014042FFDF: mov     dword ptr [rbp+0D8h+var_F0], eax
 * 000000014042FFE2: mov     dword ptr [rbp+0D8h+var_F0+4], edx
 * 000000014042FFE5: test    byte ptr [r10+3], 3
 * 000000014042FFEA: mov     [rbp+0D8h+var_58], 0
 * 000000014042FFF3: jz      short loc_14042FFFA
 * 000000014042FFF5: call    KiSaveDebugRegisterState
 * 000000014042FFFA: cld
 * 000000014042FFFB: stmxcsr [rbp+0D8h+var_12C]
 * 000000014042FFFF: ldmxcsr dword ptr gs:180h
 * 0000000140430008: movaps  [rbp+0D8h+var_E8], xmm0
 * 000000014043000C: movaps  [rbp+0D8h+var_D8], xmm1
 * 0000000140430010: movaps  [rbp+0D8h+var_C8], xmm2
 * 0000000140430014: movaps  [rbp+0D8h+var_B8], xmm3
 * 0000000140430018: movaps  [rbp+0D8h+var_A8], xmm4
 * 000000014043001C: movaps  [rbp+0D8h+var_98], xmm5
 * 0000000140430020: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 0000000140430027: jz      short loc_140430035
 * 0000000140430029: test    byte ptr [rbp+0D8h+arg_8], 1
 * 0000000140430030: jz      short loc_140430035
 * 0000000140430032: stac
 * 0000000140430035: mov     eax, [rbp+0E0h]
 * 000000014043003B: mov     rcx, cr2
 * 000000014043003E: test    [rbp+0D8h+arg_10], 200h
 * 0000000140430048: jz      short loc_14043004B
 * 000000014043004A: sti
 * 000000014043004B: mov     [rbp+0D8h+var_88], rcx
 * 000000014043004F: bt      [rbp+0D8h+arg_10], 9
 * 0000000140430057: jnb     loc_140430189
 * 000000014043005D: lea     r9, [rbp+0D8h+var_158]
 * 0000000140430061: mov     r8b, byte ptr [rbp+0D8h+arg_8]
 * 0000000140430068: and     r8b, 1
 * 000000014043006C: mov     rdx, rcx; BugCheckParameter1
 * 000000014043006F: mov     ecx, eax; BugCheckParameter2
 * 0000000140430071: shr     eax, 1
 * 0000000140430073: and     eax, 9
 * 0000000140430076: mov     [rbp+0D8h+var_12E], al
 * 0000000140430079: call    MmAccessFault
 * 000000014043007E: test    eax, eax
 * 0000000140430080: jl      short loc_1404300B8
 * 0000000140430082: cmp     cs:PsWatchEnabled, 0
 * 0000000140430089: jz      short loc_14043009D
 * 000000014043008B: mov     r8, [rbp+0D8h+var_88]
 * 000000014043008F: mov     rdx, [rbp+0D8h+arg_0]
 * 0000000140430096: mov     ecx, eax
 * 0000000140430098: call    PsWatchWorkingSet
 * 000000014043009D: cmp     cs:KdpOweBreakpoint, 0
 * 00000001404300A4: jz      loc_14043018F
 * 00000001404300AA: mov     rcx, [rbp+0D8h+var_88]
 * 00000001404300AE: call    KdSetOwedBreakpoints
 * 00000001404300B3: jmp     loc_14043018F
 * 00000001404300B8: test    byte ptr [rbp+0D8h+arg_8], 1
 * 00000001404300BF: jz      short loc_140430113
 * 00000001404300C1: cmp     [rbp+0D8h+arg_8], 33h ; '3'
 * 00000001404300C9: jnz     short loc_140430109
 * 00000001404300CB: mov     r9, gs:188h
 * 00000001404300D4: test    byte ptr [r9+3], 4
 * 00000001404300D9: jz      short loc_1404300E4
 * 00000001404300DB: mov     r8, [r9+640h]
 * 00000001404300E2: jmp     short loc_1404300ED
 * 00000001404300E4: mov     r8, gs:30h
 * 00000001404300ED: cmp     r8, [rbp+0D8h+var_F0]
 * 00000001404300F1: jz      short loc_140430113
 * 00000001404300F3: mov     ecx, 0C0000102h
 * 00000001404300F8: mov     eax, r8d
 * 00000001404300FB: shr     r8, 20h
 * 00000001404300FF: mov     edx, r8d
 * 0000000140430102: wrmsr
 * 0000000140430104: jmp     loc_14043018F
 * 0000000140430109: mov     rcx, [rbp+0D8h+var_88]
 * 000000014043010D: shr     rcx, 20h
 * 0000000140430111: jnz     short loc_14043018F
 * 0000000140430113: mov     ecx, eax
 * 0000000140430115: mov     edx, 2
 * 000000014043011A: cmp     ecx, 0D0000006h
 * 0000000140430120: jz      short loc_140430163
 * 0000000140430122: cmp     ecx, 0C0000005h
 * 0000000140430128: jz      short loc_140430149
 * 000000014043012A: cmp     ecx, 80000001h
 * 0000000140430130: jz      short loc_14043014E
 * 0000000140430132: cmp     ecx, 0C00000FDh
 * 0000000140430138: jz      short loc_14043014E
 * 000000014043013A: mov     ecx, 0C0000006h
 * 000000014043013F: mov     edx, 3
 * 0000000140430144: mov     r11d, eax
 * 0000000140430147: jmp     short loc_14043014E
 * 0000000140430149: mov     ecx, 10000004h
 * 000000014043014E: mov     r10, [rbp+0D8h+var_88]
 * 0000000140430152: movzx   r9, [rbp+0D8h+var_12E]
 * 0000000140430157: mov     r8, [rbp+0D8h+arg_0]
 * 000000014043015E: call    KiExceptionDispatch
 * 0000000140430163: mov     rax, cr8
 * 0000000140430167: mov     r10, [rbp+0D8h+arg_0]
 * 000000014043016E: movzx   r9, [rbp+0D8h+var_12E]
 * 0000000140430173: and     eax, 0FFh
 * 0000000140430178: mov     r8, rax
 * 000000014043017B: mov     rdx, [rbp+0D8h+var_88]
 * 000000014043017F: mov     ecx, 0Ah
 * 0000000140430184: call    KiBugCheckDispatch
 * 0000000140430189: xor     eax, eax
 * 000000014043018B: mov     al, 0FFh
 * 000000014043018D: jmp     short loc_140430167
 * 000000014043018F: mov     rax, cr8
 * 0000000140430193: or      eax, eax
 * 0000000140430195: mov     [rbp+0D8h+var_138], eax
 * 0000000140430198: jnz     short loc_1404301A3
 * 000000014043019A: mov     ecx, 1
 * 000000014043019F: mov     cr8, rcx
 * 00000001404301A3: lea     rcx, [rbp+0D8h+var_158]
 * 00000001404301A7: call    KiCheckForSListAddress
 * 00000001404301AC: mov     ecx, [rbp+0D8h+var_138]
 * 00000001404301AF: or      ecx, ecx
 * 00000001404301B1: jnz     short loc_1404301B7
 * 00000001404301B3: mov     cr8, rcx
 * 00000001404301B7: cli
 * 00000001404301B8: test    byte ptr [rbp+0D8h+arg_8], 1
 * 00000001404301BF: jz      loc_1404304AD
 * 00000001404301C5: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001404301CC: jz      short loc_1404301D1
 * 00000001404301CE: stac
 * 00000001404301D1: mov     rcx, gs:188h
 * 00000001404301DA: test    byte ptr [rcx+0C2h], 3
 * 00000001404301E1: jz      short loc_1404301FE
 * 00000001404301E3: mov     ecx, 1
 * 00000001404301E8: mov     cr8, rcx
 * 00000001404301EC: sti
 * 00000001404301ED: call    KiInitiateUserApc
 * 00000001404301F2: cli
 * 00000001404301F3: mov     ecx, 0
 * 00000001404301F8: mov     cr8, rcx
 * 00000001404301FC: jmp     short loc_1404301D1
 * 00000001404301FE: test    byte ptr gs:86Ch, 2
 * 0000000140430207: jz      short loc_140430210
 * 0000000140430209: xor     ecx, ecx
 * 000000014043020B: call    KiUpdateStibpPairing
 * 0000000140430210: mov     rcx, gs:188h
 * 0000000140430219: test    dword ptr [rcx], 8000000h
 * 000000014043021F: jz      short loc_140430226
 * 0000000140430221: call    KiRestoreSetContextState
 * 0000000140430226: mov     rcx, gs:188h
 * 000000014043022F: test    dword ptr [rcx], 10000h
 * 0000000140430235: jz      short loc_14043024B
 * 0000000140430237: test    byte ptr [rcx+2], 1
 * 000000014043023B: jz      short loc_14043024B
 * 000000014043023D: call    KiCopyCounters
 * 0000000140430242: mov     rcx, gs:188h
 * 000000014043024B: ldmxcsr [rbp+0D8h+var_12C]
 * 000000014043024F: cmp     [rbp+0D8h+var_58], 0
 * 0000000140430257: jz      short loc_14043025E
 * 0000000140430259: call    KiRestoreDebugRegisterState
 * 000000014043025E: mov     rcx, gs:188h
 * 0000000140430267: bt      dword ptr [rcx+74h], 16h
 * 000000014043026C: jnb     short loc_140430298
 * 000000014043026E: xor     ecx, ecx
 * 0000000140430270: rdsspq  rcx
 * 0000000140430275: mov     r8, gs:95A8h
 * 000000014043027E: add     r8, 8
 * 0000000140430282: cmp     rcx, r8
 * 0000000140430285: jnz     short loc_140430298
 * 0000000140430287: mov     rcx, gs:95A0h
 * 0000000140430290: rstorssp qword ptr [rcx]
 * 0000000140430294: saveprevssp
 * 0000000140430298: movaps  xmm0, [rbp+0D8h+var_E8]
 * 000000014043029C: movaps  xmm1, [rbp+0D8h+var_D8]
 * 00000001404302A0: movaps  xmm2, [rbp+0D8h+var_C8]
 * 00000001404302A4: movaps  xmm3, [rbp+0D8h+var_B8]
 * 00000001404302A8: movaps  xmm4, [rbp+0D8h+var_A8]
 * 00000001404302AC: movaps  xmm5, [rbp+0D8h+var_98]
 * 00000001404302B0: mov     r11, [rbp+0D8h+var_F8]
 * 00000001404302B4: mov     r10, [rbp+0D8h+var_100]
 * 00000001404302B8: mov     r9, [rbp+0D8h+var_108]
 * 00000001404302BC: mov     r8, [rbp+0D8h+var_110]
 * 00000001404302C0: mov     byte ptr gs:856h, 0
 * 00000001404302C9: movzx   eax, word ptr gs:86Ah
 * 00000001404302D2: cmp     gs:864h, ax
 * 00000001404302DB: jz      short loc_1404302EF
 * 00000001404302DD: mov     gs:864h, ax
 * 00000001404302E6: mov     ecx, 48h ; 'H'
 * 00000001404302EB: xor     edx, edx
 * 00000001404302ED: wrmsr
 * 00000001404302EF: btr     word ptr gs:860h, 2
 * 00000001404302FA: jnb     short loc_14043030A
 * 00000001404302FC: mov     eax, 1
 * 0000000140430301: xor     edx, edx
 * 0000000140430303: mov     ecx, 49h ; 'I'
 * 0000000140430308: wrmsr
 * 000000014043030A: btr     word ptr gs:860h, 5
 * 0000000140430315: jnb     loc_140430452
 * 000000014043031B: call    loc_14043042E
 * 0000000140430320: add     rsp, 8
 * 0000000140430324: call    loc_140430437
 * 0000000140430329: add     rsp, 8
 * 000000014043032D: call    loc_140430320
 * 0000000140430332: add     rsp, 8
 * 0000000140430336: call    loc_140430329
 * 000000014043033B: add     rsp, 8
 * 000000014043033F: call    loc_140430332
 * 0000000140430344: add     rsp, 8
 * 0000000140430348: call    loc_14043033B
 * 000000014043034D: add     rsp, 8
 * 0000000140430351: call    loc_140430344
 * 0000000140430356: add     rsp, 8
 * 000000014043035A: call    loc_14043034D
 * 000000014043035F: add     rsp, 8
 * 0000000140430363: call    loc_140430356
 * 0000000140430368: add     rsp, 8
 * 000000014043036C: call    loc_14043035F
 * 0000000140430371: add     rsp, 8
 * 0000000140430375: call    loc_140430368
 * 000000014043037A: add     rsp, 8
 * 000000014043037E: call    loc_140430371
 * 0000000140430383: add     rsp, 8
 * 0000000140430387: call    loc_14043037A
 * 000000014043038C: add     rsp, 8
 * 0000000140430390: call    loc_140430383
 * 0000000140430395: add     rsp, 8
 * 0000000140430399: call    loc_14043038C
 * 000000014043039E: add     rsp, 8
 * 00000001404303A2: call    loc_140430395
 * 00000001404303A7: add     rsp, 8
 * 00000001404303AB: call    loc_14043039E
 * 00000001404303B0: add     rsp, 8
 * 00000001404303B4: call    loc_1404303A7
 * 00000001404303B9: add     rsp, 8
 * 00000001404303BD: call    loc_1404303B0
 * 00000001404303C2: add     rsp, 8
 * 00000001404303C6: call    loc_1404303B9
 * 00000001404303CB: add     rsp, 8
 * 00000001404303CF: call    loc_1404303C2
 * 00000001404303D4: add     rsp, 8
 * 00000001404303D8: call    loc_1404303CB
 * 00000001404303DD: add     rsp, 8
 * 00000001404303E1: call    loc_1404303D4
 * 00000001404303E6: add     rsp, 8
 * 00000001404303EA: call    loc_1404303DD
 * 00000001404303EF: add     rsp, 8
 * 00000001404303F3: call    loc_1404303E6
 * 00000001404303F8: add     rsp, 8
 * 00000001404303FC: call    loc_1404303EF
 * 0000000140430401: add     rsp, 8
 * 0000000140430405: call    loc_1404303F8
 * 000000014043040A: add     rsp, 8
 * 000000014043040E: call    loc_140430401
 * 0000000140430413: add     rsp, 8
 * 0000000140430417: call    loc_14043040A
 * 000000014043041C: add     rsp, 8
 * 0000000140430420: call    loc_140430413
 * 0000000140430425: add     rsp, 8
 * 0000000140430429: call    loc_14043041C
 * 000000014043042E: add     rsp, 8
 * 0000000140430432: call    loc_140430425
 * 0000000140430437: add     rsp, 8
 * 000000014043043B: mov     eax, 0DADAh
 * 0000000140430440: test    byte ptr gs:862h, 8
 * 0000000140430449: jz      short loc_140430452
 * 000000014043044B: mov     al, 20h ; ' '
 * 000000014043044D: incsspq rax
 * 0000000140430452: test    word ptr gs:860h, 80h
 * 000000014043045D: jz      short loc_14043046B
 * 000000014043045F: xor     eax, eax
 * 0000000140430461: xor     edx, edx
 * 0000000140430463: mov     ecx, 1
 * 0000000140430468: div     rcx
 * 000000014043046B: mov     rdx, [rbp+0D8h+var_118]
 * 000000014043046F: mov     rcx, [rbp+0D8h+var_120]
 * 0000000140430473: mov     rax, [rbp+0D8h+var_128]
 * 0000000140430477: mov     rsp, rbp
 * 000000014043047A: mov     rbp, [rbp+0D8h+var_s0]
 * 0000000140430481: add     rsp, 0E8h
 * 0000000140430488: test    cs:KiKvaShadow, 1
 * 000000014043048F: jz      short loc_140430496
 * 0000000140430491: jmp     KiKernelExit
 * 0000000140430496: test    word ptr gs:860h, 100h
 * 00000001404304A1: jz      short loc_1404304A8
 * 00000001404304A3: verw    [rsp-10h+arg_20]
 * 00000001404304A8: swapgs
 * 00000001404304AB: iretq
 * 00000001404304AD: ldmxcsr [rbp+0D8h+var_12C]
 * 00000001404304B1: movaps  xmm0, [rbp+0D8h+var_E8]
 * 00000001404304B5: movaps  xmm1, [rbp+0D8h+var_D8]
 * 00000001404304B9: movaps  xmm2, [rbp+0D8h+var_C8]
 * 00000001404304BD: movaps  xmm3, [rbp+0D8h+var_B8]
 * 00000001404304C1: movaps  xmm4, [rbp+0D8h+var_A8]
 * 00000001404304C5: movaps  xmm5, [rbp+0D8h+var_98]
 * 00000001404304C9: mov     r11, [rbp+0D8h+var_F8]
 * 00000001404304CD: mov     r10, [rbp+0D8h+var_100]
 * 00000001404304D1: mov     r9, [rbp+0D8h+var_108]
 * 00000001404304D5: mov     r8, [rbp+0D8h+var_110]
 * 00000001404304D9: mov     rdx, [rbp+0D8h+var_118]
 * 00000001404304DD: mov     rcx, [rbp+0D8h+var_120]
 * 00000001404304E1: mov     rax, [rbp+0D8h+var_128]
 * 00000001404304E5: mov     rsp, rbp
 * 00000001404304E8: mov     rbp, [rbp+0D8h+var_s0]
 * 00000001404304EF: add     rsp, 0E8h
 * 00000001404304F6: iretq
 */
