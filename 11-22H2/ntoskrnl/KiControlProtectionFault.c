/*
 * XREFs of KiControlProtectionFault @ 0x140431B40
 * Callers:
 *     KiControlProtectionFaultShadow @ 0x140AF7BC0 (KiControlProtectionFaultShadow.c)
 * Callees:
 *     KiRestoreDebugRegisterState @ 0x14041E860 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x14041E8E0 (KiSaveDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x14041F680 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x140424760 (KiInitiateUserApc.c)
 *     KiControlProtectionFault @ 0x140431B40 (KiControlProtectionFault.c)
 *     KiBugCheckDispatch @ 0x1404342C0 (KiBugCheckDispatch.c)
 *     KiExceptionDispatch @ 0x140434340 (KiExceptionDispatch.c)
 *     KiFastFailDispatch @ 0x140434840 (KiFastFailDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140434D00 (KiFlushBhbDuringTrapEntryOrExit.c)
 *     KiUpdateStibpPairing @ 0x1404607C0 (KiUpdateStibpPairing.c)
 *     KiCopyCounters @ 0x140574240 (KiCopyCounters.c)
 *     KiProcessControlProtection @ 0x14057C050 (KiProcessControlProtection.c)
 */

/*
 * Hex-Rays decompilation failed for KiControlProtectionFault @ 0x140431B40
 * Reason: Hex-Rays returned no pseudocode for 0x140431B40
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140431B40: push    rbp
 * 0000000140431B41: sub     rsp, 158h
 * 0000000140431B48: lea     rbp, [rsp+80h]
 * 0000000140431B50: mov     [rbp+0D8h+var_12D], 1
 * 0000000140431B54: mov     [rbp+0D8h+var_128], rax
 * 0000000140431B58: mov     [rbp+0D8h+var_120], rcx
 * 0000000140431B5C: mov     [rbp+0D8h+var_118], rdx
 * 0000000140431B60: mov     [rbp+0D8h+var_110], r8
 * 0000000140431B64: mov     [rbp+0D8h+var_108], r9
 * 0000000140431B68: mov     [rbp+0D8h+var_100], r10
 * 0000000140431B6C: mov     [rbp+0D8h+var_F8], r11
 * 0000000140431B70: test    [rbp+0D8h+arg_8], 1
 * 0000000140431B77: jnz     short loc_140431BB3
 * 0000000140431B79: xor     edx, edx
 * 0000000140431B7B: rdsspq  rdx
 * 0000000140431B80: mov     [rbp+0D8h+var_80], rdx
 * 0000000140431B84: lfence
 * 0000000140431B87: test    word ptr gs:860h, 1
 * 0000000140431B92: jnz     short loc_140431B9C
 * 0000000140431B94: lfence
 * 0000000140431B97: jmp     loc_140431E23
 * 0000000140431B9C: movzx   eax, word ptr gs:864h
 * 0000000140431BA5: mov     ecx, 48h ; 'H'
 * 0000000140431BAA: xor     edx, edx
 * 0000000140431BAC: wrmsr
 * 0000000140431BAE: jmp     loc_140431E23
 * 0000000140431BB3: test    cs:KiKvaShadow, 1
 * 0000000140431BBA: jnz     short loc_140431BBF
 * 0000000140431BBC: swapgs
 * 0000000140431BBF: lfence
 * 0000000140431BC2: mov     rcx, gs:95A8h
 * 0000000140431BCB: test    rcx, rcx
 * 0000000140431BCE: jz      short loc_140431BEF
 * 0000000140431BD0: rdsspq  rdx
 * 0000000140431BD5: mov     r10, gs:95A0h
 * 0000000140431BDE: add     r10, 8
 * 0000000140431BE2: cmp     rdx, r10
 * 0000000140431BE5: jnz     short loc_140431BEF
 * 0000000140431BE7: rstorssp qword ptr [rcx]
 * 0000000140431BEB: saveprevssp
 * 0000000140431BEF: mov     r10, gs:188h
 * 0000000140431BF8: mov     rcx, gs:188h
 * 0000000140431C01: mov     rcx, [rcx+220h]
 * 0000000140431C08: mov     rcx, [rcx+9E0h]
 * 0000000140431C0F: mov     gs:858h, rcx
 * 0000000140431C18: mov     cx, gs:850h
 * 0000000140431C21: mov     gs:852h, cx
 * 0000000140431C2A: mov     cx, gs:860h
 * 0000000140431C33: mov     gs:854h, cx
 * 0000000140431C3C: movzx   eax, word ptr gs:866h
 * 0000000140431C45: cmp     gs:864h, ax
 * 0000000140431C4E: jz      short loc_140431C62
 * 0000000140431C50: mov     gs:864h, ax
 * 0000000140431C59: mov     ecx, 48h ; 'H'
 * 0000000140431C5E: xor     edx, edx
 * 0000000140431C60: wrmsr
 * 0000000140431C62: movzx   edx, word ptr gs:860h
 * 0000000140431C6B: test    edx, 8
 * 0000000140431C71: jz      short loc_140431C8A
 * 0000000140431C73: mov     eax, 1
 * 0000000140431C78: xor     edx, edx
 * 0000000140431C7A: mov     ecx, 49h ; 'I'
 * 0000000140431C7F: wrmsr
 * 0000000140431C81: movzx   edx, word ptr gs:860h
 * 0000000140431C8A: test    edx, 2
 * 0000000140431C90: jz      loc_140431DCD
 * 0000000140431C96: call    loc_140431DA9
 * 0000000140431C9B: add     rsp, 8
 * 0000000140431C9F: call    loc_140431DB2
 * 0000000140431CA4: add     rsp, 8
 * 0000000140431CA8: call    loc_140431C9B
 * 0000000140431CAD: add     rsp, 8
 * 0000000140431CB1: call    loc_140431CA4
 * 0000000140431CB6: add     rsp, 8
 * 0000000140431CBA: call    loc_140431CAD
 * 0000000140431CBF: add     rsp, 8
 * 0000000140431CC3: call    loc_140431CB6
 * 0000000140431CC8: add     rsp, 8
 * 0000000140431CCC: call    loc_140431CBF
 * 0000000140431CD1: add     rsp, 8
 * 0000000140431CD5: call    loc_140431CC8
 * 0000000140431CDA: add     rsp, 8
 * 0000000140431CDE: call    loc_140431CD1
 * 0000000140431CE3: add     rsp, 8
 * 0000000140431CE7: call    loc_140431CDA
 * 0000000140431CEC: add     rsp, 8
 * 0000000140431CF0: call    loc_140431CE3
 * 0000000140431CF5: add     rsp, 8
 * 0000000140431CF9: call    loc_140431CEC
 * 0000000140431CFE: add     rsp, 8
 * 0000000140431D02: call    loc_140431CF5
 * 0000000140431D07: add     rsp, 8
 * 0000000140431D0B: call    loc_140431CFE
 * 0000000140431D10: add     rsp, 8
 * 0000000140431D14: call    loc_140431D07
 * 0000000140431D19: add     rsp, 8
 * 0000000140431D1D: call    loc_140431D10
 * 0000000140431D22: add     rsp, 8
 * 0000000140431D26: call    loc_140431D19
 * 0000000140431D2B: add     rsp, 8
 * 0000000140431D2F: call    loc_140431D22
 * 0000000140431D34: add     rsp, 8
 * 0000000140431D38: call    loc_140431D2B
 * 0000000140431D3D: add     rsp, 8
 * 0000000140431D41: call    loc_140431D34
 * 0000000140431D46: add     rsp, 8
 * 0000000140431D4A: call    loc_140431D3D
 * 0000000140431D4F: add     rsp, 8
 * 0000000140431D53: call    loc_140431D46
 * 0000000140431D58: add     rsp, 8
 * 0000000140431D5C: call    loc_140431D4F
 * 0000000140431D61: add     rsp, 8
 * 0000000140431D65: call    loc_140431D58
 * 0000000140431D6A: add     rsp, 8
 * 0000000140431D6E: call    loc_140431D61
 * 0000000140431D73: add     rsp, 8
 * 0000000140431D77: call    loc_140431D6A
 * 0000000140431D7C: add     rsp, 8
 * 0000000140431D80: call    loc_140431D73
 * 0000000140431D85: add     rsp, 8
 * 0000000140431D89: call    loc_140431D7C
 * 0000000140431D8E: add     rsp, 8
 * 0000000140431D92: call    loc_140431D85
 * 0000000140431D97: add     rsp, 8
 * 0000000140431D9B: call    loc_140431D8E
 * 0000000140431DA0: add     rsp, 8
 * 0000000140431DA4: call    loc_140431D97
 * 0000000140431DA9: add     rsp, 8
 * 0000000140431DAD: call    loc_140431DA0
 * 0000000140431DB2: add     rsp, 8
 * 0000000140431DB6: mov     eax, 0DADAh
 * 0000000140431DBB: test    byte ptr gs:862h, 8
 * 0000000140431DC4: jz      short loc_140431DCD
 * 0000000140431DC6: mov     al, 20h ; ' '
 * 0000000140431DC8: incsspq rax
 * 0000000140431DCD: test    edx, 200h
 * 0000000140431DD3: jz      short loc_140431DDA
 * 0000000140431DD5: call    KiFlushBhbDuringTrapEntryOrExit
 * 0000000140431DDA: lfence
 * 0000000140431DDD: mov     byte ptr gs:856h, 0
 * 0000000140431DE6: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 0000000140431DED: jz      short loc_140431E0E
 * 0000000140431DEF: mov     ecx, 6A7h
 * 0000000140431DF4: rdmsr
 * 0000000140431DF6: cmp     edx, 0
 * 0000000140431DF9: jz      short loc_140431E0E
 * 0000000140431DFB: mov     ecx, edx
 * 0000000140431DFD: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 0000000140431E03: cmp     edx, ecx
 * 0000000140431E05: jz      short loc_140431E0E
 * 0000000140431E07: mov     ecx, 6A7h
 * 0000000140431E0C: wrmsr
 * 0000000140431E0E: test    byte ptr [r10+3], 3
 * 0000000140431E13: mov     [rbp+0D8h+var_58], 0
 * 0000000140431E1C: jz      short loc_140431E23
 * 0000000140431E1E: call    KiSaveDebugRegisterState
 * 0000000140431E23: cld
 * 0000000140431E24: stmxcsr [rbp+0D8h+var_12C]
 * 0000000140431E28: ldmxcsr dword ptr gs:180h
 * 0000000140431E31: movaps  [rbp+0D8h+var_E8], xmm0
 * 0000000140431E35: movaps  [rbp+0D8h+var_D8], xmm1
 * 0000000140431E39: movaps  [rbp+0D8h+var_C8], xmm2
 * 0000000140431E3D: movaps  [rbp+0D8h+var_B8], xmm3
 * 0000000140431E41: movaps  [rbp+0D8h+var_A8], xmm4
 * 0000000140431E45: movaps  [rbp+0D8h+var_98], xmm5
 * 0000000140431E49: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 0000000140431E50: jz      short loc_140431E5E
 * 0000000140431E52: test    [rbp+0D8h+arg_8], 1
 * 0000000140431E59: jz      short loc_140431E5E
 * 0000000140431E5B: stac
 * 0000000140431E5E: mov     eax, [rbp+0E0h]
 * 0000000140431E64: test    [rbp+0D8h+arg_10], 200h
 * 0000000140431E6E: jz      short loc_140431E71
 * 0000000140431E70: sti
 * 0000000140431E71: test    byte ptr gs:8B25h, 40h
 * 0000000140431E7A: jz      loc_140431F13
 * 0000000140431E80: lea     rcx, [rbp+0D8h+var_158]
 * 0000000140431E84: call    KiProcessControlProtection
 * 0000000140431E89: cmp     eax, 1
 * 0000000140431E8C: jz      loc_140431F36
 * 0000000140431E92: cmp     eax, 2
 * 0000000140431E95: jz      short loc_140431EA2
 * 0000000140431E97: cmp     eax, 3
 * 0000000140431E9A: jz      loc_140431F22
 * 0000000140431EA0: jmp     short loc_140431F13
 * 0000000140431EA2: test    [rbp+0D8h+arg_8], 1
 * 0000000140431EA9: jz      short loc_140431EEE
 * 0000000140431EAB: mov     ecx, 6A7h
 * 0000000140431EB0: rdmsr
 * 0000000140431EB2: shl     rdx, 20h
 * 0000000140431EB6: or      rax, rdx
 * 0000000140431EB9: mov     r10, rax
 * 0000000140431EBC: mov     rcx, gs:188h
 * 0000000140431EC5: mov     rcx, [rcx+220h]
 * 0000000140431ECC: mov     r11d, [rcx+9D4h]
 * 0000000140431ED3: and     r11d, 0C0F6C000h
 * 0000000140431EDA: mov     edx, cs:KiUserCetAppcompatOptions
 * 0000000140431EE0: shl     rdx, 20h
 * 0000000140431EE4: or      r11, rdx
 * 0000000140431EE7: mov     edx, 3
 * 0000000140431EEC: jmp     short loc_140431EFA
 * 0000000140431EEE: mov     edx, 2
 * 0000000140431EF3: mov     r10, [rbp+0D8h+var_80]
 * 0000000140431EF7: mov     r10, [r10]
 * 0000000140431EFA: mov     r9, 39h ; '9'
 * 0000000140431F01: mov     ecx, 0C0000409h
 * 0000000140431F06: mov     r8, [rbp+0D8h+arg_0]
 * 0000000140431F0D: call    KiFastFailDispatch
 * 0000000140431F12: nop
 * 0000000140431F13: mov     edx, 15h
 * 0000000140431F18: mov     ecx, 7Fh
 * 0000000140431F1D: call    KiBugCheckDispatch
 * 0000000140431F22: mov     ecx, 80000033h
 * 0000000140431F27: xor     edx, edx
 * 0000000140431F29: mov     r8, [rbp+0D8h+arg_0]
 * 0000000140431F30: call    KiExceptionDispatch
 * 0000000140431F35: nop
 * 0000000140431F36: cli
 * 0000000140431F37: test    [rbp+0D8h+arg_8], 1
 * 0000000140431F3E: jz      loc_14043222C
 * 0000000140431F44: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 0000000140431F4B: jz      short loc_140431F50
 * 0000000140431F4D: stac
 * 0000000140431F50: mov     rcx, gs:188h
 * 0000000140431F59: test    byte ptr [rcx+0C2h], 3
 * 0000000140431F60: jz      short loc_140431F7D
 * 0000000140431F62: mov     ecx, 1
 * 0000000140431F67: mov     cr8, rcx
 * 0000000140431F6B: sti
 * 0000000140431F6C: call    KiInitiateUserApc
 * 0000000140431F71: cli
 * 0000000140431F72: mov     ecx, 0
 * 0000000140431F77: mov     cr8, rcx
 * 0000000140431F7B: jmp     short loc_140431F50
 * 0000000140431F7D: test    byte ptr gs:86Ch, 2
 * 0000000140431F86: jz      short loc_140431F8F
 * 0000000140431F88: xor     ecx, ecx
 * 0000000140431F8A: call    KiUpdateStibpPairing
 * 0000000140431F8F: mov     rcx, gs:188h
 * 0000000140431F98: test    dword ptr [rcx], 8000000h
 * 0000000140431F9E: jz      short loc_140431FA5
 * 0000000140431FA0: call    KiRestoreSetContextState
 * 0000000140431FA5: mov     rcx, gs:188h
 * 0000000140431FAE: test    dword ptr [rcx], 10000h
 * 0000000140431FB4: jz      short loc_140431FCA
 * 0000000140431FB6: test    byte ptr [rcx+2], 1
 * 0000000140431FBA: jz      short loc_140431FCA
 * 0000000140431FBC: call    KiCopyCounters
 * 0000000140431FC1: mov     rcx, gs:188h
 * 0000000140431FCA: ldmxcsr [rbp+0D8h+var_12C]
 * 0000000140431FCE: cmp     [rbp+0D8h+var_58], 0
 * 0000000140431FD6: jz      short loc_140431FDD
 * 0000000140431FD8: call    KiRestoreDebugRegisterState
 * 0000000140431FDD: mov     rcx, gs:188h
 * 0000000140431FE6: bt      dword ptr [rcx+74h], 16h
 * 0000000140431FEB: jnb     short loc_140432017
 * 0000000140431FED: xor     ecx, ecx
 * 0000000140431FEF: rdsspq  rcx
 * 0000000140431FF4: mov     r8, gs:95A8h
 * 0000000140431FFD: add     r8, 8
 * 0000000140432001: cmp     rcx, r8
 * 0000000140432004: jnz     short loc_140432017
 * 0000000140432006: mov     rcx, gs:95A0h
 * 000000014043200F: rstorssp qword ptr [rcx]
 * 0000000140432013: saveprevssp
 * 0000000140432017: movaps  xmm0, [rbp+0D8h+var_E8]
 * 000000014043201B: movaps  xmm1, [rbp+0D8h+var_D8]
 * 000000014043201F: movaps  xmm2, [rbp+0D8h+var_C8]
 * 0000000140432023: movaps  xmm3, [rbp+0D8h+var_B8]
 * 0000000140432027: movaps  xmm4, [rbp+0D8h+var_A8]
 * 000000014043202B: movaps  xmm5, [rbp+0D8h+var_98]
 * 000000014043202F: mov     r11, [rbp+0D8h+var_F8]
 * 0000000140432033: mov     r10, [rbp+0D8h+var_100]
 * 0000000140432037: mov     r9, [rbp+0D8h+var_108]
 * 000000014043203B: mov     r8, [rbp+0D8h+var_110]
 * 000000014043203F: mov     byte ptr gs:856h, 0
 * 0000000140432048: movzx   eax, word ptr gs:86Ah
 * 0000000140432051: cmp     gs:864h, ax
 * 000000014043205A: jz      short loc_14043206E
 * 000000014043205C: mov     gs:864h, ax
 * 0000000140432065: mov     ecx, 48h ; 'H'
 * 000000014043206A: xor     edx, edx
 * 000000014043206C: wrmsr
 * 000000014043206E: btr     word ptr gs:860h, 2
 * 0000000140432079: jnb     short loc_140432089
 * 000000014043207B: mov     eax, 1
 * 0000000140432080: xor     edx, edx
 * 0000000140432082: mov     ecx, 49h ; 'I'
 * 0000000140432087: wrmsr
 * 0000000140432089: btr     word ptr gs:860h, 5
 * 0000000140432094: jnb     loc_1404321D1
 * 000000014043209A: call    loc_1404321AD
 * 000000014043209F: add     rsp, 8
 * 00000001404320A3: call    loc_1404321B6
 * 00000001404320A8: add     rsp, 8
 * 00000001404320AC: call    loc_14043209F
 * 00000001404320B1: add     rsp, 8
 * 00000001404320B5: call    loc_1404320A8
 * 00000001404320BA: add     rsp, 8
 * 00000001404320BE: call    loc_1404320B1
 * 00000001404320C3: add     rsp, 8
 * 00000001404320C7: call    loc_1404320BA
 * 00000001404320CC: add     rsp, 8
 * 00000001404320D0: call    loc_1404320C3
 * 00000001404320D5: add     rsp, 8
 * 00000001404320D9: call    loc_1404320CC
 * 00000001404320DE: add     rsp, 8
 * 00000001404320E2: call    loc_1404320D5
 * 00000001404320E7: add     rsp, 8
 * 00000001404320EB: call    loc_1404320DE
 * 00000001404320F0: add     rsp, 8
 * 00000001404320F4: call    loc_1404320E7
 * 00000001404320F9: add     rsp, 8
 * 00000001404320FD: call    loc_1404320F0
 * 0000000140432102: add     rsp, 8
 * 0000000140432106: call    loc_1404320F9
 * 000000014043210B: add     rsp, 8
 * 000000014043210F: call    loc_140432102
 * 0000000140432114: add     rsp, 8
 * 0000000140432118: call    loc_14043210B
 * 000000014043211D: add     rsp, 8
 * 0000000140432121: call    loc_140432114
 * 0000000140432126: add     rsp, 8
 * 000000014043212A: call    loc_14043211D
 * 000000014043212F: add     rsp, 8
 * 0000000140432133: call    loc_140432126
 * 0000000140432138: add     rsp, 8
 * 000000014043213C: call    loc_14043212F
 * 0000000140432141: add     rsp, 8
 * 0000000140432145: call    loc_140432138
 * 000000014043214A: add     rsp, 8
 * 000000014043214E: call    loc_140432141
 * 0000000140432153: add     rsp, 8
 * 0000000140432157: call    loc_14043214A
 * 000000014043215C: add     rsp, 8
 * 0000000140432160: call    loc_140432153
 * 0000000140432165: add     rsp, 8
 * 0000000140432169: call    loc_14043215C
 * 000000014043216E: add     rsp, 8
 * 0000000140432172: call    loc_140432165
 * 0000000140432177: add     rsp, 8
 * 000000014043217B: call    loc_14043216E
 * 0000000140432180: add     rsp, 8
 * 0000000140432184: call    loc_140432177
 * 0000000140432189: add     rsp, 8
 * 000000014043218D: call    loc_140432180
 * 0000000140432192: add     rsp, 8
 * 0000000140432196: call    loc_140432189
 * 000000014043219B: add     rsp, 8
 * 000000014043219F: call    loc_140432192
 * 00000001404321A4: add     rsp, 8
 * 00000001404321A8: call    loc_14043219B
 * 00000001404321AD: add     rsp, 8
 * 00000001404321B1: call    loc_1404321A4
 * 00000001404321B6: add     rsp, 8
 * 00000001404321BA: mov     eax, 0DADAh
 * 00000001404321BF: test    byte ptr gs:862h, 8
 * 00000001404321C8: jz      short loc_1404321D1
 * 00000001404321CA: mov     al, 20h ; ' '
 * 00000001404321CC: incsspq rax
 * 00000001404321D1: test    word ptr gs:860h, 80h
 * 00000001404321DC: jz      short loc_1404321EA
 * 00000001404321DE: xor     eax, eax
 * 00000001404321E0: xor     edx, edx
 * 00000001404321E2: mov     ecx, 1
 * 00000001404321E7: div     rcx
 * 00000001404321EA: mov     rdx, [rbp+0D8h+var_118]
 * 00000001404321EE: mov     rcx, [rbp+0D8h+var_120]
 * 00000001404321F2: mov     rax, [rbp+0D8h+var_128]
 * 00000001404321F6: mov     rsp, rbp
 * 00000001404321F9: mov     rbp, [rbp+0D8h+var_s0]
 * 0000000140432200: add     rsp, 0E8h
 * 0000000140432207: test    cs:KiKvaShadow, 1
 * 000000014043220E: jz      short loc_140432215
 * 0000000140432210: jmp     KiKernelExit
 * 0000000140432215: test    word ptr gs:860h, 100h
 * 0000000140432220: jz      short loc_140432227
 * 0000000140432222: verw    [rsp-10h+arg_20]
 * 0000000140432227: swapgs
 * 000000014043222A: iretq
 * 000000014043222C: ldmxcsr [rbp+0D8h+var_12C]
 * 0000000140432230: movaps  xmm0, [rbp+0D8h+var_E8]
 * 0000000140432234: movaps  xmm1, [rbp+0D8h+var_D8]
 * 0000000140432238: movaps  xmm2, [rbp+0D8h+var_C8]
 * 000000014043223C: movaps  xmm3, [rbp+0D8h+var_B8]
 * 0000000140432240: movaps  xmm4, [rbp+0D8h+var_A8]
 * 0000000140432244: movaps  xmm5, [rbp+0D8h+var_98]
 * 0000000140432248: mov     r11, [rbp+0D8h+var_F8]
 * 000000014043224C: mov     r10, [rbp+0D8h+var_100]
 * 0000000140432250: mov     r9, [rbp+0D8h+var_108]
 * 0000000140432254: mov     r8, [rbp+0D8h+var_110]
 * 0000000140432258: mov     rdx, [rbp+0D8h+var_118]
 * 000000014043225C: mov     rcx, [rbp+0D8h+var_120]
 * 0000000140432260: mov     rax, [rbp+0D8h+var_128]
 * 0000000140432264: mov     rsp, rbp
 * 0000000140432267: mov     rbp, [rbp+0D8h+var_s0]
 * 000000014043226E: add     rsp, 0E8h
 * 0000000140432275: iretq
 * 0000000140432277: retn
 */
