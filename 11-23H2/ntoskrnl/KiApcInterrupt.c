/*
 * XREFs of KiApcInterrupt @ 0x140424AD0
 * Callers:
 *     KiApcInterruptShadow @ 0x140AF6C40 (KiApcInterruptShadow.c)
 * Callees:
 *     KiDeliverApc @ 0x14030FB20 (KiDeliverApc.c)
 *     HalPerformEndOfInterrupt @ 0x140331AA0 (HalPerformEndOfInterrupt.c)
 *     KiRestoreDebugRegisterState @ 0x14041F2B0 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x14041F330 (KiSaveDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1404200D0 (KiRestoreSetContextState.c)
 *     KiApcInterrupt @ 0x140424AD0 (KiApcInterrupt.c)
 *     KiInitiateUserApc @ 0x1404251B0 (KiInitiateUserApc.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140435700 (KiFlushBhbDuringTrapEntryOrExit.c)
 *     KiUpdateStibpPairing @ 0x140461220 (KiUpdateStibpPairing.c)
 *     KzSetIrqlUnsafe @ 0x14056C720 (KzSetIrqlUnsafe.c)
 *     KiCopyCounters @ 0x1405746E0 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiApcInterrupt @ 0x140424AD0
 * Reason: Hex-Rays returned no pseudocode for 0x140424AD0
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140424AD0: sub     rsp, 8
 * 0000000140424AD4: push    rbp
 * 0000000140424AD5: push    rsi
 * 0000000140424AD6: sub     rsp, 150h
 * 0000000140424ADD: lea     rbp, [rsp+80h]
 * 0000000140424AE5: mov     [rbp+0E8h+var_13D], 0
 * 0000000140424AE9: mov     [rbp+0E8h+var_138], rax
 * 0000000140424AED: mov     [rbp+0E8h+var_130], rcx
 * 0000000140424AF1: mov     [rbp+0E8h+var_128], rdx
 * 0000000140424AF5: mov     [rbp+0E8h+var_120], r8
 * 0000000140424AF9: mov     [rbp+0E8h+var_118], r9
 * 0000000140424AFD: mov     [rbp+0E8h+var_110], r10
 * 0000000140424B01: mov     [rbp+0E8h+var_108], r11
 * 0000000140424B05: test    [rbp+0E8h+arg_0], 1
 * 0000000140424B0C: jnz     short loc_140424B48
 * 0000000140424B0E: xor     edx, edx
 * 0000000140424B10: rdsspq  rdx
 * 0000000140424B15: mov     [rbp+0E8h+var_90], rdx
 * 0000000140424B19: lfence
 * 0000000140424B1C: test    word ptr gs:860h, 1
 * 0000000140424B27: jnz     short loc_140424B31
 * 0000000140424B29: lfence
 * 0000000140424B2C: jmp     loc_140424DB8
 * 0000000140424B31: movzx   eax, word ptr gs:864h
 * 0000000140424B3A: mov     ecx, 48h ; 'H'
 * 0000000140424B3F: xor     edx, edx
 * 0000000140424B41: wrmsr
 * 0000000140424B43: jmp     loc_140424DB8
 * 0000000140424B48: test    cs:KiKvaShadow, 1
 * 0000000140424B4F: jnz     short loc_140424B54
 * 0000000140424B51: swapgs
 * 0000000140424B54: lfence
 * 0000000140424B57: mov     rcx, gs:95A8h
 * 0000000140424B60: test    rcx, rcx
 * 0000000140424B63: jz      short loc_140424B84
 * 0000000140424B65: rdsspq  rdx
 * 0000000140424B6A: mov     r10, gs:95A0h
 * 0000000140424B73: add     r10, 8
 * 0000000140424B77: cmp     rdx, r10
 * 0000000140424B7A: jnz     short loc_140424B84
 * 0000000140424B7C: rstorssp qword ptr [rcx]
 * 0000000140424B80: saveprevssp
 * 0000000140424B84: mov     r10, gs:188h
 * 0000000140424B8D: mov     rcx, gs:188h
 * 0000000140424B96: mov     rcx, [rcx+220h]
 * 0000000140424B9D: mov     rcx, [rcx+9E0h]
 * 0000000140424BA4: mov     gs:858h, rcx
 * 0000000140424BAD: mov     cx, gs:850h
 * 0000000140424BB6: mov     gs:852h, cx
 * 0000000140424BBF: mov     cx, gs:860h
 * 0000000140424BC8: mov     gs:854h, cx
 * 0000000140424BD1: movzx   eax, word ptr gs:866h
 * 0000000140424BDA: cmp     gs:864h, ax
 * 0000000140424BE3: jz      short loc_140424BF7
 * 0000000140424BE5: mov     gs:864h, ax
 * 0000000140424BEE: mov     ecx, 48h ; 'H'
 * 0000000140424BF3: xor     edx, edx
 * 0000000140424BF5: wrmsr
 * 0000000140424BF7: movzx   edx, word ptr gs:860h
 * 0000000140424C00: test    edx, 8
 * 0000000140424C06: jz      short loc_140424C1F
 * 0000000140424C08: mov     eax, 1
 * 0000000140424C0D: xor     edx, edx
 * 0000000140424C0F: mov     ecx, 49h ; 'I'
 * 0000000140424C14: wrmsr
 * 0000000140424C16: movzx   edx, word ptr gs:860h
 * 0000000140424C1F: test    edx, 2
 * 0000000140424C25: jz      loc_140424D62
 * 0000000140424C2B: call    loc_140424D3E
 * 0000000140424C30: add     rsp, 8
 * 0000000140424C34: call    loc_140424D47
 * 0000000140424C39: add     rsp, 8
 * 0000000140424C3D: call    loc_140424C30
 * 0000000140424C42: add     rsp, 8
 * 0000000140424C46: call    loc_140424C39
 * 0000000140424C4B: add     rsp, 8
 * 0000000140424C4F: call    loc_140424C42
 * 0000000140424C54: add     rsp, 8
 * 0000000140424C58: call    loc_140424C4B
 * 0000000140424C5D: add     rsp, 8
 * 0000000140424C61: call    loc_140424C54
 * 0000000140424C66: add     rsp, 8
 * 0000000140424C6A: call    loc_140424C5D
 * 0000000140424C6F: add     rsp, 8
 * 0000000140424C73: call    loc_140424C66
 * 0000000140424C78: add     rsp, 8
 * 0000000140424C7C: call    loc_140424C6F
 * 0000000140424C81: add     rsp, 8
 * 0000000140424C85: call    loc_140424C78
 * 0000000140424C8A: add     rsp, 8
 * 0000000140424C8E: call    loc_140424C81
 * 0000000140424C93: add     rsp, 8
 * 0000000140424C97: call    loc_140424C8A
 * 0000000140424C9C: add     rsp, 8
 * 0000000140424CA0: call    loc_140424C93
 * 0000000140424CA5: add     rsp, 8
 * 0000000140424CA9: call    loc_140424C9C
 * 0000000140424CAE: add     rsp, 8
 * 0000000140424CB2: call    loc_140424CA5
 * 0000000140424CB7: add     rsp, 8
 * 0000000140424CBB: call    loc_140424CAE
 * 0000000140424CC0: add     rsp, 8
 * 0000000140424CC4: call    loc_140424CB7
 * 0000000140424CC9: add     rsp, 8
 * 0000000140424CCD: call    loc_140424CC0
 * 0000000140424CD2: add     rsp, 8
 * 0000000140424CD6: call    loc_140424CC9
 * 0000000140424CDB: add     rsp, 8
 * 0000000140424CDF: call    loc_140424CD2
 * 0000000140424CE4: add     rsp, 8
 * 0000000140424CE8: call    loc_140424CDB
 * 0000000140424CED: add     rsp, 8
 * 0000000140424CF1: call    loc_140424CE4
 * 0000000140424CF6: add     rsp, 8
 * 0000000140424CFA: call    loc_140424CED
 * 0000000140424CFF: add     rsp, 8
 * 0000000140424D03: call    loc_140424CF6
 * 0000000140424D08: add     rsp, 8
 * 0000000140424D0C: call    loc_140424CFF
 * 0000000140424D11: add     rsp, 8
 * 0000000140424D15: call    loc_140424D08
 * 0000000140424D1A: add     rsp, 8
 * 0000000140424D1E: call    loc_140424D11
 * 0000000140424D23: add     rsp, 8
 * 0000000140424D27: call    loc_140424D1A
 * 0000000140424D2C: add     rsp, 8
 * 0000000140424D30: call    loc_140424D23
 * 0000000140424D35: add     rsp, 8
 * 0000000140424D39: call    loc_140424D2C
 * 0000000140424D3E: add     rsp, 8
 * 0000000140424D42: call    loc_140424D35
 * 0000000140424D47: add     rsp, 8
 * 0000000140424D4B: mov     eax, 0DADAh
 * 0000000140424D50: test    byte ptr gs:862h, 8
 * 0000000140424D59: jz      short loc_140424D62
 * 0000000140424D5B: mov     al, 20h ; ' '
 * 0000000140424D5D: incsspq rax
 * 0000000140424D62: test    edx, 200h
 * 0000000140424D68: jz      short loc_140424D6F
 * 0000000140424D6A: call    KiFlushBhbDuringTrapEntryOrExit
 * 0000000140424D6F: lfence
 * 0000000140424D72: mov     byte ptr gs:856h, 0
 * 0000000140424D7B: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 0000000140424D82: jz      short loc_140424DA3
 * 0000000140424D84: mov     ecx, 6A7h
 * 0000000140424D89: rdmsr
 * 0000000140424D8B: cmp     edx, 0
 * 0000000140424D8E: jz      short loc_140424DA3
 * 0000000140424D90: mov     ecx, edx
 * 0000000140424D92: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 0000000140424D98: cmp     edx, ecx
 * 0000000140424D9A: jz      short loc_140424DA3
 * 0000000140424D9C: mov     ecx, 6A7h
 * 0000000140424DA1: wrmsr
 * 0000000140424DA3: test    byte ptr [r10+3], 3
 * 0000000140424DA8: mov     [rbp+0E8h+var_68], 0
 * 0000000140424DB1: jz      short loc_140424DB8
 * 0000000140424DB3: call    KiSaveDebugRegisterState
 * 0000000140424DB8: cld
 * 0000000140424DB9: stmxcsr [rbp+0E8h+var_13C]
 * 0000000140424DBD: ldmxcsr dword ptr gs:180h
 * 0000000140424DC6: movaps  [rbp+0E8h+var_F8], xmm0
 * 0000000140424DCA: movaps  [rbp+0E8h+var_E8], xmm1
 * 0000000140424DCE: movaps  [rbp+0E8h+var_D8], xmm2
 * 0000000140424DD2: movaps  [rbp+0E8h+var_C8], xmm3
 * 0000000140424DD6: movaps  [rbp+0E8h+var_B8], xmm4
 * 0000000140424DDA: movaps  [rbp+0E8h+var_A8], xmm5
 * 0000000140424DDE: xor     esi, esi
 * 0000000140424DE0: inc     dword ptr gs:82C0h
 * 0000000140424DE8: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 0000000140424DEF: jz      short loc_140424DFD
 * 0000000140424DF1: test    [rbp+0E8h+arg_0], 1
 * 0000000140424DF8: jz      short loc_140424DFD
 * 0000000140424DFA: stac
 * 0000000140424DFD: mov     ecx, 1
 * 0000000140424E02: cmp     cs:KiIrqlFlags, 0
 * 0000000140424E09: jz      short loc_140424E12
 * 0000000140424E0B: call    KzSetIrqlUnsafe
 * 0000000140424E10: jmp     short loc_140424E1A
 * 0000000140424E12: mov     rax, cr8
 * 0000000140424E16: mov     cr8, rcx
 * 0000000140424E1A: mov     [rbp+0E8h+var_13F], al
 * 0000000140424E1D: mov     rcx, rsi
 * 0000000140424E20: call    HalPerformEndOfInterrupt
 * 0000000140424E25: sti
 * 0000000140424E26: cmp     byte ptr gs:187h, 0
 * 0000000140424E2F: jnz     short loc_140424E41
 * 0000000140424E31: mov     ecx, 0
 * 0000000140424E36: xor     edx, edx
 * 0000000140424E38: lea     r8, [rbp+0E8h+var_168]
 * 0000000140424E3C: call    KiDeliverApc
 * 0000000140424E41: cli
 * 0000000140424E42: movzx   ecx, [rbp+0E8h+var_13F]
 * 0000000140424E46: cmp     cs:KiIrqlFlags, 0
 * 0000000140424E4D: jz      short loc_140424E56
 * 0000000140424E4F: call    KzSetIrqlUnsafe
 * 0000000140424E54: jmp     short loc_140424E5A
 * 0000000140424E56: mov     cr8, rcx
 * 0000000140424E5A: mov     rsi, [rbp+0E8h+var_18]
 * 0000000140424E61: cli
 * 0000000140424E62: test    [rbp+0E8h+arg_0], 1
 * 0000000140424E69: jz      loc_140425157
 * 0000000140424E6F: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 0000000140424E76: jz      short loc_140424E7B
 * 0000000140424E78: stac
 * 0000000140424E7B: mov     rcx, gs:188h
 * 0000000140424E84: test    byte ptr [rcx+0C2h], 3
 * 0000000140424E8B: jz      short loc_140424EA8
 * 0000000140424E8D: mov     ecx, 1
 * 0000000140424E92: mov     cr8, rcx
 * 0000000140424E96: sti
 * 0000000140424E97: call    KiInitiateUserApc
 * 0000000140424E9C: cli
 * 0000000140424E9D: mov     ecx, 0
 * 0000000140424EA2: mov     cr8, rcx
 * 0000000140424EA6: jmp     short loc_140424E7B
 * 0000000140424EA8: test    byte ptr gs:86Ch, 2
 * 0000000140424EB1: jz      short loc_140424EBA
 * 0000000140424EB3: xor     ecx, ecx
 * 0000000140424EB5: call    KiUpdateStibpPairing
 * 0000000140424EBA: mov     rcx, gs:188h
 * 0000000140424EC3: test    dword ptr [rcx], 8000000h
 * 0000000140424EC9: jz      short loc_140424ED0
 * 0000000140424ECB: call    KiRestoreSetContextState
 * 0000000140424ED0: mov     rcx, gs:188h
 * 0000000140424ED9: test    dword ptr [rcx], 10000h
 * 0000000140424EDF: jz      short loc_140424EF5
 * 0000000140424EE1: test    byte ptr [rcx+2], 1
 * 0000000140424EE5: jz      short loc_140424EF5
 * 0000000140424EE7: call    KiCopyCounters
 * 0000000140424EEC: mov     rcx, gs:188h
 * 0000000140424EF5: ldmxcsr [rbp+0E8h+var_13C]
 * 0000000140424EF9: cmp     [rbp+0E8h+var_68], 0
 * 0000000140424F01: jz      short loc_140424F08
 * 0000000140424F03: call    KiRestoreDebugRegisterState
 * 0000000140424F08: mov     rcx, gs:188h
 * 0000000140424F11: bt      dword ptr [rcx+74h], 16h
 * 0000000140424F16: jnb     short loc_140424F42
 * 0000000140424F18: xor     ecx, ecx
 * 0000000140424F1A: rdsspq  rcx
 * 0000000140424F1F: mov     r8, gs:95A8h
 * 0000000140424F28: add     r8, 8
 * 0000000140424F2C: cmp     rcx, r8
 * 0000000140424F2F: jnz     short loc_140424F42
 * 0000000140424F31: mov     rcx, gs:95A0h
 * 0000000140424F3A: rstorssp qword ptr [rcx]
 * 0000000140424F3E: saveprevssp
 * 0000000140424F42: movaps  xmm0, [rbp+0E8h+var_F8]
 * 0000000140424F46: movaps  xmm1, [rbp+0E8h+var_E8]
 * 0000000140424F4A: movaps  xmm2, [rbp+0E8h+var_D8]
 * 0000000140424F4E: movaps  xmm3, [rbp+0E8h+var_C8]
 * 0000000140424F52: movaps  xmm4, [rbp+0E8h+var_B8]
 * 0000000140424F56: movaps  xmm5, [rbp+0E8h+var_A8]
 * 0000000140424F5A: mov     r11, [rbp+0E8h+var_108]
 * 0000000140424F5E: mov     r10, [rbp+0E8h+var_110]
 * 0000000140424F62: mov     r9, [rbp+0E8h+var_118]
 * 0000000140424F66: mov     r8, [rbp+0E8h+var_120]
 * 0000000140424F6A: mov     byte ptr gs:856h, 0
 * 0000000140424F73: movzx   eax, word ptr gs:86Ah
 * 0000000140424F7C: cmp     gs:864h, ax
 * 0000000140424F85: jz      short loc_140424F99
 * 0000000140424F87: mov     gs:864h, ax
 * 0000000140424F90: mov     ecx, 48h ; 'H'
 * 0000000140424F95: xor     edx, edx
 * 0000000140424F97: wrmsr
 * 0000000140424F99: btr     word ptr gs:860h, 2
 * 0000000140424FA4: jnb     short loc_140424FB4
 * 0000000140424FA6: mov     eax, 1
 * 0000000140424FAB: xor     edx, edx
 * 0000000140424FAD: mov     ecx, 49h ; 'I'
 * 0000000140424FB2: wrmsr
 * 0000000140424FB4: btr     word ptr gs:860h, 5
 * 0000000140424FBF: jnb     loc_1404250FC
 * 0000000140424FC5: call    loc_1404250D8
 * 0000000140424FCA: add     rsp, 8
 * 0000000140424FCE: call    loc_1404250E1
 * 0000000140424FD3: add     rsp, 8
 * 0000000140424FD7: call    loc_140424FCA
 * 0000000140424FDC: add     rsp, 8
 * 0000000140424FE0: call    loc_140424FD3
 * 0000000140424FE5: add     rsp, 8
 * 0000000140424FE9: call    loc_140424FDC
 * 0000000140424FEE: add     rsp, 8
 * 0000000140424FF2: call    loc_140424FE5
 * 0000000140424FF7: add     rsp, 8
 * 0000000140424FFB: call    loc_140424FEE
 * 0000000140425000: add     rsp, 8
 * 0000000140425004: call    loc_140424FF7
 * 0000000140425009: add     rsp, 8
 * 000000014042500D: call    loc_140425000
 * 0000000140425012: add     rsp, 8
 * 0000000140425016: call    loc_140425009
 * 000000014042501B: add     rsp, 8
 * 000000014042501F: call    loc_140425012
 * 0000000140425024: add     rsp, 8
 * 0000000140425028: call    loc_14042501B
 * 000000014042502D: add     rsp, 8
 * 0000000140425031: call    loc_140425024
 * 0000000140425036: add     rsp, 8
 * 000000014042503A: call    loc_14042502D
 * 000000014042503F: add     rsp, 8
 * 0000000140425043: call    loc_140425036
 * 0000000140425048: add     rsp, 8
 * 000000014042504C: call    loc_14042503F
 * 0000000140425051: add     rsp, 8
 * 0000000140425055: call    loc_140425048
 * 000000014042505A: add     rsp, 8
 * 000000014042505E: call    loc_140425051
 * 0000000140425063: add     rsp, 8
 * 0000000140425067: call    loc_14042505A
 * 000000014042506C: add     rsp, 8
 * 0000000140425070: call    loc_140425063
 * 0000000140425075: add     rsp, 8
 * 0000000140425079: call    loc_14042506C
 * 000000014042507E: add     rsp, 8
 * 0000000140425082: call    loc_140425075
 * 0000000140425087: add     rsp, 8
 * 000000014042508B: call    loc_14042507E
 * 0000000140425090: add     rsp, 8
 * 0000000140425094: call    loc_140425087
 * 0000000140425099: add     rsp, 8
 * 000000014042509D: call    loc_140425090
 * 00000001404250A2: add     rsp, 8
 * 00000001404250A6: call    loc_140425099
 * 00000001404250AB: add     rsp, 8
 * 00000001404250AF: call    loc_1404250A2
 * 00000001404250B4: add     rsp, 8
 * 00000001404250B8: call    loc_1404250AB
 * 00000001404250BD: add     rsp, 8
 * 00000001404250C1: call    loc_1404250B4
 * 00000001404250C6: add     rsp, 8
 * 00000001404250CA: call    loc_1404250BD
 * 00000001404250CF: add     rsp, 8
 * 00000001404250D3: call    loc_1404250C6
 * 00000001404250D8: add     rsp, 8
 * 00000001404250DC: call    loc_1404250CF
 * 00000001404250E1: add     rsp, 8
 * 00000001404250E5: mov     eax, 0DADAh
 * 00000001404250EA: test    byte ptr gs:862h, 8
 * 00000001404250F3: jz      short loc_1404250FC
 * 00000001404250F5: mov     al, 20h ; ' '
 * 00000001404250F7: incsspq rax
 * 00000001404250FC: test    word ptr gs:860h, 80h
 * 0000000140425107: jz      short loc_140425115
 * 0000000140425109: xor     eax, eax
 * 000000014042510B: xor     edx, edx
 * 000000014042510D: mov     ecx, 1
 * 0000000140425112: div     rcx
 * 0000000140425115: mov     rdx, [rbp+0E8h+var_128]
 * 0000000140425119: mov     rcx, [rbp+0E8h+var_130]
 * 000000014042511D: mov     rax, [rbp+0E8h+var_138]
 * 0000000140425121: mov     rsp, rbp
 * 0000000140425124: mov     rbp, [rbp+0E8h+var_10]
 * 000000014042512B: add     rsp, 0E8h
 * 0000000140425132: test    cs:KiKvaShadow, 1
 * 0000000140425139: jz      short loc_140425140
 * 000000014042513B: jmp     KiKernelExit
 * 0000000140425140: test    word ptr gs:860h, 100h
 * 000000014042514B: jz      short loc_140425152
 * 000000014042514D: verw    [rsp+arg_18]
 * 0000000140425152: swapgs
 * 0000000140425155: iretq
 * 0000000140425157: ldmxcsr [rbp+0E8h+var_13C]
 * 000000014042515B: movaps  xmm0, [rbp+0E8h+var_F8]
 * 000000014042515F: movaps  xmm1, [rbp+0E8h+var_E8]
 * 0000000140425163: movaps  xmm2, [rbp+0E8h+var_D8]
 * 0000000140425167: movaps  xmm3, [rbp+0E8h+var_C8]
 * 000000014042516B: movaps  xmm4, [rbp+0E8h+var_B8]
 * 000000014042516F: movaps  xmm5, [rbp+0E8h+var_A8]
 * 0000000140425173: mov     r11, [rbp+0E8h+var_108]
 * 0000000140425177: mov     r10, [rbp+0E8h+var_110]
 * 000000014042517B: mov     r9, [rbp+0E8h+var_118]
 * 000000014042517F: mov     r8, [rbp+0E8h+var_120]
 * 0000000140425183: mov     rdx, [rbp+0E8h+var_128]
 * 0000000140425187: mov     rcx, [rbp+0E8h+var_130]
 * 000000014042518B: mov     rax, [rbp+0E8h+var_138]
 * 000000014042518F: mov     rsp, rbp
 * 0000000140425192: mov     rbp, [rbp+0E8h+var_10]
 * 0000000140425199: add     rsp, 0E8h
 * 00000001404251A0: iretq
 */
