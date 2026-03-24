/*
 * XREFs of KiBoundFault @ 0x14042CC00
 * Callers:
 *     KiBoundFaultShadow @ 0x140AF73C0 (KiBoundFaultShadow.c)
 * Callees:
 *     KiRestoreDebugRegisterState @ 0x14041E860 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x14041E8E0 (KiSaveDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x14041F680 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x140424760 (KiInitiateUserApc.c)
 *     KiBoundFault @ 0x14042CC00 (KiBoundFault.c)
 *     KiBugCheckDispatch @ 0x1404342C0 (KiBugCheckDispatch.c)
 *     KiExceptionDispatch @ 0x140434340 (KiExceptionDispatch.c)
 *     KiFastFailDispatch @ 0x140434840 (KiFastFailDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140434D00 (KiFlushBhbDuringTrapEntryOrExit.c)
 *     KiUpdateStibpPairing @ 0x1404607C0 (KiUpdateStibpPairing.c)
 *     KiHandleBound @ 0x14056CD60 (KiHandleBound.c)
 *     KiCopyCounters @ 0x140574240 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiBoundFault @ 0x14042CC00
 * Reason: Hex-Rays returned no pseudocode for 0x14042CC00
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014042CC00: sub     rsp, 8
 * 000000014042CC04: push    rbp
 * 000000014042CC05: sub     rsp, 158h
 * 000000014042CC0C: lea     rbp, [rsp+80h]
 * 000000014042CC14: mov     [rbp+0E8h+var_13D], 1
 * 000000014042CC18: mov     [rbp+0E8h+var_138], rax
 * 000000014042CC1C: mov     [rbp+0E8h+var_130], rcx
 * 000000014042CC20: mov     [rbp+0E8h+var_128], rdx
 * 000000014042CC24: mov     [rbp+0E8h+var_120], r8
 * 000000014042CC28: mov     [rbp+0E8h+var_118], r9
 * 000000014042CC2C: mov     [rbp+0E8h+var_110], r10
 * 000000014042CC30: mov     [rbp+0E8h+var_108], r11
 * 000000014042CC34: test    [rbp+0E8h+arg_0], 1
 * 000000014042CC3B: jnz     short loc_14042CC77
 * 000000014042CC3D: xor     edx, edx
 * 000000014042CC3F: rdsspq  rdx
 * 000000014042CC44: mov     [rbp+0E8h+var_90], rdx
 * 000000014042CC48: lfence
 * 000000014042CC4B: test    word ptr gs:860h, 1
 * 000000014042CC56: jnz     short loc_14042CC60
 * 000000014042CC58: lfence
 * 000000014042CC5B: jmp     loc_14042CEE7
 * 000000014042CC60: movzx   eax, word ptr gs:864h
 * 000000014042CC69: mov     ecx, 48h ; 'H'
 * 000000014042CC6E: xor     edx, edx
 * 000000014042CC70: wrmsr
 * 000000014042CC72: jmp     loc_14042CEE7
 * 000000014042CC77: test    cs:KiKvaShadow, 1
 * 000000014042CC7E: jnz     short loc_14042CC83
 * 000000014042CC80: swapgs
 * 000000014042CC83: lfence
 * 000000014042CC86: mov     rcx, gs:95A8h
 * 000000014042CC8F: test    rcx, rcx
 * 000000014042CC92: jz      short loc_14042CCB3
 * 000000014042CC94: rdsspq  rdx
 * 000000014042CC99: mov     r10, gs:95A0h
 * 000000014042CCA2: add     r10, 8
 * 000000014042CCA6: cmp     rdx, r10
 * 000000014042CCA9: jnz     short loc_14042CCB3
 * 000000014042CCAB: rstorssp qword ptr [rcx]
 * 000000014042CCAF: saveprevssp
 * 000000014042CCB3: mov     r10, gs:188h
 * 000000014042CCBC: mov     rcx, gs:188h
 * 000000014042CCC5: mov     rcx, [rcx+220h]
 * 000000014042CCCC: mov     rcx, [rcx+9E0h]
 * 000000014042CCD3: mov     gs:858h, rcx
 * 000000014042CCDC: mov     cx, gs:850h
 * 000000014042CCE5: mov     gs:852h, cx
 * 000000014042CCEE: mov     cx, gs:860h
 * 000000014042CCF7: mov     gs:854h, cx
 * 000000014042CD00: movzx   eax, word ptr gs:866h
 * 000000014042CD09: cmp     gs:864h, ax
 * 000000014042CD12: jz      short loc_14042CD26
 * 000000014042CD14: mov     gs:864h, ax
 * 000000014042CD1D: mov     ecx, 48h ; 'H'
 * 000000014042CD22: xor     edx, edx
 * 000000014042CD24: wrmsr
 * 000000014042CD26: movzx   edx, word ptr gs:860h
 * 000000014042CD2F: test    edx, 8
 * 000000014042CD35: jz      short loc_14042CD4E
 * 000000014042CD37: mov     eax, 1
 * 000000014042CD3C: xor     edx, edx
 * 000000014042CD3E: mov     ecx, 49h ; 'I'
 * 000000014042CD43: wrmsr
 * 000000014042CD45: movzx   edx, word ptr gs:860h
 * 000000014042CD4E: test    edx, 2
 * 000000014042CD54: jz      loc_14042CE91
 * 000000014042CD5A: call    loc_14042CE6D
 * 000000014042CD5F: add     rsp, 8
 * 000000014042CD63: call    loc_14042CE76
 * 000000014042CD68: add     rsp, 8
 * 000000014042CD6C: call    loc_14042CD5F
 * 000000014042CD71: add     rsp, 8
 * 000000014042CD75: call    loc_14042CD68
 * 000000014042CD7A: add     rsp, 8
 * 000000014042CD7E: call    loc_14042CD71
 * 000000014042CD83: add     rsp, 8
 * 000000014042CD87: call    loc_14042CD7A
 * 000000014042CD8C: add     rsp, 8
 * 000000014042CD90: call    loc_14042CD83
 * 000000014042CD95: add     rsp, 8
 * 000000014042CD99: call    loc_14042CD8C
 * 000000014042CD9E: add     rsp, 8
 * 000000014042CDA2: call    loc_14042CD95
 * 000000014042CDA7: add     rsp, 8
 * 000000014042CDAB: call    loc_14042CD9E
 * 000000014042CDB0: add     rsp, 8
 * 000000014042CDB4: call    loc_14042CDA7
 * 000000014042CDB9: add     rsp, 8
 * 000000014042CDBD: call    loc_14042CDB0
 * 000000014042CDC2: add     rsp, 8
 * 000000014042CDC6: call    loc_14042CDB9
 * 000000014042CDCB: add     rsp, 8
 * 000000014042CDCF: call    loc_14042CDC2
 * 000000014042CDD4: add     rsp, 8
 * 000000014042CDD8: call    loc_14042CDCB
 * 000000014042CDDD: add     rsp, 8
 * 000000014042CDE1: call    loc_14042CDD4
 * 000000014042CDE6: add     rsp, 8
 * 000000014042CDEA: call    loc_14042CDDD
 * 000000014042CDEF: add     rsp, 8
 * 000000014042CDF3: call    loc_14042CDE6
 * 000000014042CDF8: add     rsp, 8
 * 000000014042CDFC: call    loc_14042CDEF
 * 000000014042CE01: add     rsp, 8
 * 000000014042CE05: call    loc_14042CDF8
 * 000000014042CE0A: add     rsp, 8
 * 000000014042CE0E: call    loc_14042CE01
 * 000000014042CE13: add     rsp, 8
 * 000000014042CE17: call    loc_14042CE0A
 * 000000014042CE1C: add     rsp, 8
 * 000000014042CE20: call    loc_14042CE13
 * 000000014042CE25: add     rsp, 8
 * 000000014042CE29: call    loc_14042CE1C
 * 000000014042CE2E: add     rsp, 8
 * 000000014042CE32: call    loc_14042CE25
 * 000000014042CE37: add     rsp, 8
 * 000000014042CE3B: call    loc_14042CE2E
 * 000000014042CE40: add     rsp, 8
 * 000000014042CE44: call    loc_14042CE37
 * 000000014042CE49: add     rsp, 8
 * 000000014042CE4D: call    loc_14042CE40
 * 000000014042CE52: add     rsp, 8
 * 000000014042CE56: call    loc_14042CE49
 * 000000014042CE5B: add     rsp, 8
 * 000000014042CE5F: call    loc_14042CE52
 * 000000014042CE64: add     rsp, 8
 * 000000014042CE68: call    loc_14042CE5B
 * 000000014042CE6D: add     rsp, 8
 * 000000014042CE71: call    loc_14042CE64
 * 000000014042CE76: add     rsp, 8
 * 000000014042CE7A: mov     eax, 0DADAh
 * 000000014042CE7F: test    byte ptr gs:862h, 8
 * 000000014042CE88: jz      short loc_14042CE91
 * 000000014042CE8A: mov     al, 20h ; ' '
 * 000000014042CE8C: incsspq rax
 * 000000014042CE91: test    edx, 200h
 * 000000014042CE97: jz      short loc_14042CE9E
 * 000000014042CE99: call    KiFlushBhbDuringTrapEntryOrExit
 * 000000014042CE9E: lfence
 * 000000014042CEA1: mov     byte ptr gs:856h, 0
 * 000000014042CEAA: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 000000014042CEB1: jz      short loc_14042CED2
 * 000000014042CEB3: mov     ecx, 6A7h
 * 000000014042CEB8: rdmsr
 * 000000014042CEBA: cmp     edx, 0
 * 000000014042CEBD: jz      short loc_14042CED2
 * 000000014042CEBF: mov     ecx, edx
 * 000000014042CEC1: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 000000014042CEC7: cmp     edx, ecx
 * 000000014042CEC9: jz      short loc_14042CED2
 * 000000014042CECB: mov     ecx, 6A7h
 * 000000014042CED0: wrmsr
 * 000000014042CED2: test    byte ptr [r10+3], 3
 * 000000014042CED7: mov     [rbp+0E8h+var_68], 0
 * 000000014042CEE0: jz      short loc_14042CEE7
 * 000000014042CEE2: call    KiSaveDebugRegisterState
 * 000000014042CEE7: cld
 * 000000014042CEE8: stmxcsr [rbp+0E8h+var_13C]
 * 000000014042CEEC: ldmxcsr dword ptr gs:180h
 * 000000014042CEF5: movaps  [rbp+0E8h+var_F8], xmm0
 * 000000014042CEF9: movaps  [rbp+0E8h+var_E8], xmm1
 * 000000014042CEFD: movaps  [rbp+0E8h+var_D8], xmm2
 * 000000014042CF01: movaps  [rbp+0E8h+var_C8], xmm3
 * 000000014042CF05: movaps  [rbp+0E8h+var_B8], xmm4
 * 000000014042CF09: movaps  [rbp+0E8h+var_A8], xmm5
 * 000000014042CF0D: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 000000014042CF14: jz      short loc_14042CF22
 * 000000014042CF16: test    [rbp+0E8h+arg_0], 1
 * 000000014042CF1D: jz      short loc_14042CF22
 * 000000014042CF1F: stac
 * 000000014042CF22: test    [rbp+0E8h+arg_8], 200h
 * 000000014042CF2C: jz      short loc_14042CF2F
 * 000000014042CF2E: sti
 * 000000014042CF2F: test    [rbp+0E8h+arg_0], 1
 * 000000014042CF36: jz      short loc_14042CF79
 * 000000014042CF38: call    KiHandleBound
 * 000000014042CF3D: cmp     eax, 0
 * 000000014042CF40: jz      short loc_14042CF79
 * 000000014042CF42: cmp     eax, 1
 * 000000014042CF45: jz      short loc_14042CF8D
 * 000000014042CF47: cmp     eax, 2
 * 000000014042CF4A: jz      short loc_14042CF5B
 * 000000014042CF4C: mov     edx, 5
 * 000000014042CF51: mov     ecx, 7Fh
 * 000000014042CF56: call    KiBugCheckDispatch
 * 000000014042CF5B: mov     r9, 1Ch
 * 000000014042CF62: mov     ecx, 0C0000409h
 * 000000014042CF67: mov     edx, 1
 * 000000014042CF6C: mov     r8, [rbp+0E8h]
 * 000000014042CF73: call    KiFastFailDispatch
 * 000000014042CF78: nop
 * 000000014042CF79: mov     ecx, 0C000008Ch
 * 000000014042CF7E: xor     edx, edx
 * 000000014042CF80: mov     r8, [rbp+0E8h]
 * 000000014042CF87: call    KiExceptionDispatch
 * 000000014042CF8C: nop
 * 000000014042CF8D: cli
 * 000000014042CF8E: test    [rbp+0E8h+arg_0], 1
 * 000000014042CF95: jz      loc_14042D283
 * 000000014042CF9B: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 000000014042CFA2: jz      short loc_14042CFA7
 * 000000014042CFA4: stac
 * 000000014042CFA7: mov     rcx, gs:188h
 * 000000014042CFB0: test    byte ptr [rcx+0C2h], 3
 * 000000014042CFB7: jz      short loc_14042CFD4
 * 000000014042CFB9: mov     ecx, 1
 * 000000014042CFBE: mov     cr8, rcx
 * 000000014042CFC2: sti
 * 000000014042CFC3: call    KiInitiateUserApc
 * 000000014042CFC8: cli
 * 000000014042CFC9: mov     ecx, 0
 * 000000014042CFCE: mov     cr8, rcx
 * 000000014042CFD2: jmp     short loc_14042CFA7
 * 000000014042CFD4: test    byte ptr gs:86Ch, 2
 * 000000014042CFDD: jz      short loc_14042CFE6
 * 000000014042CFDF: xor     ecx, ecx
 * 000000014042CFE1: call    KiUpdateStibpPairing
 * 000000014042CFE6: mov     rcx, gs:188h
 * 000000014042CFEF: test    dword ptr [rcx], 8000000h
 * 000000014042CFF5: jz      short loc_14042CFFC
 * 000000014042CFF7: call    KiRestoreSetContextState
 * 000000014042CFFC: mov     rcx, gs:188h
 * 000000014042D005: test    dword ptr [rcx], 10000h
 * 000000014042D00B: jz      short loc_14042D021
 * 000000014042D00D: test    byte ptr [rcx+2], 1
 * 000000014042D011: jz      short loc_14042D021
 * 000000014042D013: call    KiCopyCounters
 * 000000014042D018: mov     rcx, gs:188h
 * 000000014042D021: ldmxcsr [rbp+0E8h+var_13C]
 * 000000014042D025: cmp     [rbp+0E8h+var_68], 0
 * 000000014042D02D: jz      short loc_14042D034
 * 000000014042D02F: call    KiRestoreDebugRegisterState
 * 000000014042D034: mov     rcx, gs:188h
 * 000000014042D03D: bt      dword ptr [rcx+74h], 16h
 * 000000014042D042: jnb     short loc_14042D06E
 * 000000014042D044: xor     ecx, ecx
 * 000000014042D046: rdsspq  rcx
 * 000000014042D04B: mov     r8, gs:95A8h
 * 000000014042D054: add     r8, 8
 * 000000014042D058: cmp     rcx, r8
 * 000000014042D05B: jnz     short loc_14042D06E
 * 000000014042D05D: mov     rcx, gs:95A0h
 * 000000014042D066: rstorssp qword ptr [rcx]
 * 000000014042D06A: saveprevssp
 * 000000014042D06E: movaps  xmm0, [rbp+0E8h+var_F8]
 * 000000014042D072: movaps  xmm1, [rbp+0E8h+var_E8]
 * 000000014042D076: movaps  xmm2, [rbp+0E8h+var_D8]
 * 000000014042D07A: movaps  xmm3, [rbp+0E8h+var_C8]
 * 000000014042D07E: movaps  xmm4, [rbp+0E8h+var_B8]
 * 000000014042D082: movaps  xmm5, [rbp+0E8h+var_A8]
 * 000000014042D086: mov     r11, [rbp+0E8h+var_108]
 * 000000014042D08A: mov     r10, [rbp+0E8h+var_110]
 * 000000014042D08E: mov     r9, [rbp+0E8h+var_118]
 * 000000014042D092: mov     r8, [rbp+0E8h+var_120]
 * 000000014042D096: mov     byte ptr gs:856h, 0
 * 000000014042D09F: movzx   eax, word ptr gs:86Ah
 * 000000014042D0A8: cmp     gs:864h, ax
 * 000000014042D0B1: jz      short loc_14042D0C5
 * 000000014042D0B3: mov     gs:864h, ax
 * 000000014042D0BC: mov     ecx, 48h ; 'H'
 * 000000014042D0C1: xor     edx, edx
 * 000000014042D0C3: wrmsr
 * 000000014042D0C5: btr     word ptr gs:860h, 2
 * 000000014042D0D0: jnb     short loc_14042D0E0
 * 000000014042D0D2: mov     eax, 1
 * 000000014042D0D7: xor     edx, edx
 * 000000014042D0D9: mov     ecx, 49h ; 'I'
 * 000000014042D0DE: wrmsr
 * 000000014042D0E0: btr     word ptr gs:860h, 5
 * 000000014042D0EB: jnb     loc_14042D228
 * 000000014042D0F1: call    loc_14042D204
 * 000000014042D0F6: add     rsp, 8
 * 000000014042D0FA: call    loc_14042D20D
 * 000000014042D0FF: add     rsp, 8
 * 000000014042D103: call    loc_14042D0F6
 * 000000014042D108: add     rsp, 8
 * 000000014042D10C: call    loc_14042D0FF
 * 000000014042D111: add     rsp, 8
 * 000000014042D115: call    loc_14042D108
 * 000000014042D11A: add     rsp, 8
 * 000000014042D11E: call    loc_14042D111
 * 000000014042D123: add     rsp, 8
 * 000000014042D127: call    loc_14042D11A
 * 000000014042D12C: add     rsp, 8
 * 000000014042D130: call    loc_14042D123
 * 000000014042D135: add     rsp, 8
 * 000000014042D139: call    loc_14042D12C
 * 000000014042D13E: add     rsp, 8
 * 000000014042D142: call    loc_14042D135
 * 000000014042D147: add     rsp, 8
 * 000000014042D14B: call    loc_14042D13E
 * 000000014042D150: add     rsp, 8
 * 000000014042D154: call    loc_14042D147
 * 000000014042D159: add     rsp, 8
 * 000000014042D15D: call    loc_14042D150
 * 000000014042D162: add     rsp, 8
 * 000000014042D166: call    loc_14042D159
 * 000000014042D16B: add     rsp, 8
 * 000000014042D16F: call    loc_14042D162
 * 000000014042D174: add     rsp, 8
 * 000000014042D178: call    loc_14042D16B
 * 000000014042D17D: add     rsp, 8
 * 000000014042D181: call    loc_14042D174
 * 000000014042D186: add     rsp, 8
 * 000000014042D18A: call    loc_14042D17D
 * 000000014042D18F: add     rsp, 8
 * 000000014042D193: call    loc_14042D186
 * 000000014042D198: add     rsp, 8
 * 000000014042D19C: call    loc_14042D18F
 * 000000014042D1A1: add     rsp, 8
 * 000000014042D1A5: call    loc_14042D198
 * 000000014042D1AA: add     rsp, 8
 * 000000014042D1AE: call    loc_14042D1A1
 * 000000014042D1B3: add     rsp, 8
 * 000000014042D1B7: call    loc_14042D1AA
 * 000000014042D1BC: add     rsp, 8
 * 000000014042D1C0: call    loc_14042D1B3
 * 000000014042D1C5: add     rsp, 8
 * 000000014042D1C9: call    loc_14042D1BC
 * 000000014042D1CE: add     rsp, 8
 * 000000014042D1D2: call    loc_14042D1C5
 * 000000014042D1D7: add     rsp, 8
 * 000000014042D1DB: call    loc_14042D1CE
 * 000000014042D1E0: add     rsp, 8
 * 000000014042D1E4: call    loc_14042D1D7
 * 000000014042D1E9: add     rsp, 8
 * 000000014042D1ED: call    loc_14042D1E0
 * 000000014042D1F2: add     rsp, 8
 * 000000014042D1F6: call    loc_14042D1E9
 * 000000014042D1FB: add     rsp, 8
 * 000000014042D1FF: call    loc_14042D1F2
 * 000000014042D204: add     rsp, 8
 * 000000014042D208: call    loc_14042D1FB
 * 000000014042D20D: add     rsp, 8
 * 000000014042D211: mov     eax, 0DADAh
 * 000000014042D216: test    byte ptr gs:862h, 8
 * 000000014042D21F: jz      short loc_14042D228
 * 000000014042D221: mov     al, 20h ; ' '
 * 000000014042D223: incsspq rax
 * 000000014042D228: test    word ptr gs:860h, 80h
 * 000000014042D233: jz      short loc_14042D241
 * 000000014042D235: xor     eax, eax
 * 000000014042D237: xor     edx, edx
 * 000000014042D239: mov     ecx, 1
 * 000000014042D23E: div     rcx
 * 000000014042D241: mov     rdx, [rbp+0E8h+var_128]
 * 000000014042D245: mov     rcx, [rbp+0E8h+var_130]
 * 000000014042D249: mov     rax, [rbp+0E8h+var_138]
 * 000000014042D24D: mov     rsp, rbp
 * 000000014042D250: mov     rbp, [rbp+0E8h+var_10]
 * 000000014042D257: add     rsp, 0E8h
 * 000000014042D25E: test    cs:KiKvaShadow, 1
 * 000000014042D265: jz      short loc_14042D26C
 * 000000014042D267: jmp     KiKernelExit
 * 000000014042D26C: test    word ptr gs:860h, 100h
 * 000000014042D277: jz      short loc_14042D27E
 * 000000014042D279: verw    [rsp+arg_18]
 * 000000014042D27E: swapgs
 * 000000014042D281: iretq
 * 000000014042D283: ldmxcsr [rbp+0E8h+var_13C]
 * 000000014042D287: movaps  xmm0, [rbp+0E8h+var_F8]
 * 000000014042D28B: movaps  xmm1, [rbp+0E8h+var_E8]
 * 000000014042D28F: movaps  xmm2, [rbp+0E8h+var_D8]
 * 000000014042D293: movaps  xmm3, [rbp+0E8h+var_C8]
 * 000000014042D297: movaps  xmm4, [rbp+0E8h+var_B8]
 * 000000014042D29B: movaps  xmm5, [rbp+0E8h+var_A8]
 * 000000014042D29F: mov     r11, [rbp+0E8h+var_108]
 * 000000014042D2A3: mov     r10, [rbp+0E8h+var_110]
 * 000000014042D2A7: mov     r9, [rbp+0E8h+var_118]
 * 000000014042D2AB: mov     r8, [rbp+0E8h+var_120]
 * 000000014042D2AF: mov     rdx, [rbp+0E8h+var_128]
 * 000000014042D2B3: mov     rcx, [rbp+0E8h+var_130]
 * 000000014042D2B7: mov     rax, [rbp+0E8h+var_138]
 * 000000014042D2BB: mov     rsp, rbp
 * 000000014042D2BE: mov     rbp, [rbp+0E8h+var_10]
 * 000000014042D2C5: add     rsp, 0E8h
 * 000000014042D2CC: iretq
 */
