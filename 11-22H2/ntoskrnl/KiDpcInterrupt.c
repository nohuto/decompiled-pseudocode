/*
 * XREFs of KiDpcInterrupt @ 0x140426C50
 * Callers:
 *     KiDpcInterruptShadow @ 0x140AF7F40 (KiDpcInterruptShadow.c)
 * Callees:
 *     KiDispatchInterrupt @ 0x140249510 (KiDispatchInterrupt.c)
 *     HalPerformEndOfInterrupt @ 0x140331670 (HalPerformEndOfInterrupt.c)
 *     KiRestoreDebugRegisterState @ 0x14041E860 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x14041E8E0 (KiSaveDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x14041F680 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x140424760 (KiInitiateUserApc.c)
 *     KiDpcInterrupt @ 0x140426C50 (KiDpcInterrupt.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140434D00 (KiFlushBhbDuringTrapEntryOrExit.c)
 *     KiUpdateStibpPairing @ 0x1404607C0 (KiUpdateStibpPairing.c)
 *     KzSetIrqlUnsafe @ 0x14056C100 (KzSetIrqlUnsafe.c)
 *     KiCopyCounters @ 0x140574240 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiDpcInterrupt @ 0x140426C50
 * Reason: Hex-Rays returned no pseudocode for 0x140426C50
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140426C50: sub     rsp, 8
 * 0000000140426C54: push    rbp
 * 0000000140426C55: push    rsi
 * 0000000140426C56: sub     rsp, 150h
 * 0000000140426C5D: lea     rbp, [rsp+80h]
 * 0000000140426C65: mov     byte ptr [rbp+0E8h+var_13F+2], 0
 * 0000000140426C69: mov     [rbp+0E8h+var_13F+7], rax
 * 0000000140426C6D: mov     [rbp+0E8h+var_130], rcx
 * 0000000140426C71: mov     [rbp+0E8h+var_128], rdx
 * 0000000140426C75: mov     [rbp+0E8h+var_120], r8
 * 0000000140426C79: mov     [rbp+0E8h+var_118], r9
 * 0000000140426C7D: mov     [rbp+0E8h+var_110], r10
 * 0000000140426C81: mov     [rbp+0E8h+var_108], r11
 * 0000000140426C85: test    [rbp+0E8h+arg_0], 1
 * 0000000140426C8C: jnz     short loc_140426CC8
 * 0000000140426C8E: xor     edx, edx
 * 0000000140426C90: rdsspq  rdx
 * 0000000140426C95: mov     [rbp+0E8h+var_90], rdx
 * 0000000140426C99: lfence
 * 0000000140426C9C: test    word ptr gs:860h, 1
 * 0000000140426CA7: jnz     short loc_140426CB1
 * 0000000140426CA9: lfence
 * 0000000140426CAC: jmp     loc_140426F38
 * 0000000140426CB1: movzx   eax, word ptr gs:864h
 * 0000000140426CBA: mov     ecx, 48h ; 'H'
 * 0000000140426CBF: xor     edx, edx
 * 0000000140426CC1: wrmsr
 * 0000000140426CC3: jmp     loc_140426F38
 * 0000000140426CC8: test    cs:KiKvaShadow, 1
 * 0000000140426CCF: jnz     short loc_140426CD4
 * 0000000140426CD1: swapgs
 * 0000000140426CD4: lfence
 * 0000000140426CD7: mov     rcx, gs:95A8h
 * 0000000140426CE0: test    rcx, rcx
 * 0000000140426CE3: jz      short loc_140426D04
 * 0000000140426CE5: rdsspq  rdx
 * 0000000140426CEA: mov     r10, gs:95A0h
 * 0000000140426CF3: add     r10, 8
 * 0000000140426CF7: cmp     rdx, r10
 * 0000000140426CFA: jnz     short loc_140426D04
 * 0000000140426CFC: rstorssp qword ptr [rcx]
 * 0000000140426D00: saveprevssp
 * 0000000140426D04: mov     r10, gs:188h
 * 0000000140426D0D: mov     rcx, gs:188h
 * 0000000140426D16: mov     rcx, [rcx+220h]
 * 0000000140426D1D: mov     rcx, [rcx+9E0h]
 * 0000000140426D24: mov     gs:858h, rcx
 * 0000000140426D2D: mov     cx, gs:850h
 * 0000000140426D36: mov     gs:852h, cx
 * 0000000140426D3F: mov     cx, gs:860h
 * 0000000140426D48: mov     gs:854h, cx
 * 0000000140426D51: movzx   eax, word ptr gs:866h
 * 0000000140426D5A: cmp     gs:864h, ax
 * 0000000140426D63: jz      short loc_140426D77
 * 0000000140426D65: mov     gs:864h, ax
 * 0000000140426D6E: mov     ecx, 48h ; 'H'
 * 0000000140426D73: xor     edx, edx
 * 0000000140426D75: wrmsr
 * 0000000140426D77: movzx   edx, word ptr gs:860h
 * 0000000140426D80: test    edx, 8
 * 0000000140426D86: jz      short loc_140426D9F
 * 0000000140426D88: mov     eax, 1
 * 0000000140426D8D: xor     edx, edx
 * 0000000140426D8F: mov     ecx, 49h ; 'I'
 * 0000000140426D94: wrmsr
 * 0000000140426D96: movzx   edx, word ptr gs:860h
 * 0000000140426D9F: test    edx, 2
 * 0000000140426DA5: jz      loc_140426EE2
 * 0000000140426DAB: call    loc_140426EBE
 * 0000000140426DB0: add     rsp, 8
 * 0000000140426DB4: call    loc_140426EC7
 * 0000000140426DB9: add     rsp, 8
 * 0000000140426DBD: call    loc_140426DB0
 * 0000000140426DC2: add     rsp, 8
 * 0000000140426DC6: call    loc_140426DB9
 * 0000000140426DCB: add     rsp, 8
 * 0000000140426DCF: call    loc_140426DC2
 * 0000000140426DD4: add     rsp, 8
 * 0000000140426DD8: call    loc_140426DCB
 * 0000000140426DDD: add     rsp, 8
 * 0000000140426DE1: call    loc_140426DD4
 * 0000000140426DE6: add     rsp, 8
 * 0000000140426DEA: call    loc_140426DDD
 * 0000000140426DEF: add     rsp, 8
 * 0000000140426DF3: call    loc_140426DE6
 * 0000000140426DF8: add     rsp, 8
 * 0000000140426DFC: call    loc_140426DEF
 * 0000000140426E01: add     rsp, 8
 * 0000000140426E05: call    loc_140426DF8
 * 0000000140426E0A: add     rsp, 8
 * 0000000140426E0E: call    loc_140426E01
 * 0000000140426E13: add     rsp, 8
 * 0000000140426E17: call    loc_140426E0A
 * 0000000140426E1C: add     rsp, 8
 * 0000000140426E20: call    loc_140426E13
 * 0000000140426E25: add     rsp, 8
 * 0000000140426E29: call    loc_140426E1C
 * 0000000140426E2E: add     rsp, 8
 * 0000000140426E32: call    loc_140426E25
 * 0000000140426E37: add     rsp, 8
 * 0000000140426E3B: call    loc_140426E2E
 * 0000000140426E40: add     rsp, 8
 * 0000000140426E44: call    loc_140426E37
 * 0000000140426E49: add     rsp, 8
 * 0000000140426E4D: call    loc_140426E40
 * 0000000140426E52: add     rsp, 8
 * 0000000140426E56: call    loc_140426E49
 * 0000000140426E5B: add     rsp, 8
 * 0000000140426E5F: call    loc_140426E52
 * 0000000140426E64: add     rsp, 8
 * 0000000140426E68: call    loc_140426E5B
 * 0000000140426E6D: add     rsp, 8
 * 0000000140426E71: call    loc_140426E64
 * 0000000140426E76: add     rsp, 8
 * 0000000140426E7A: call    loc_140426E6D
 * 0000000140426E7F: add     rsp, 8
 * 0000000140426E83: call    loc_140426E76
 * 0000000140426E88: add     rsp, 8
 * 0000000140426E8C: call    loc_140426E7F
 * 0000000140426E91: add     rsp, 8
 * 0000000140426E95: call    loc_140426E88
 * 0000000140426E9A: add     rsp, 8
 * 0000000140426E9E: call    loc_140426E91
 * 0000000140426EA3: add     rsp, 8
 * 0000000140426EA7: call    loc_140426E9A
 * 0000000140426EAC: add     rsp, 8
 * 0000000140426EB0: call    loc_140426EA3
 * 0000000140426EB5: add     rsp, 8
 * 0000000140426EB9: call    loc_140426EAC
 * 0000000140426EBE: add     rsp, 8
 * 0000000140426EC2: call    loc_140426EB5
 * 0000000140426EC7: add     rsp, 8
 * 0000000140426ECB: mov     eax, 0DADAh
 * 0000000140426ED0: test    byte ptr gs:862h, 8
 * 0000000140426ED9: jz      short loc_140426EE2
 * 0000000140426EDB: mov     al, 20h ; ' '
 * 0000000140426EDD: incsspq rax
 * 0000000140426EE2: test    edx, 200h
 * 0000000140426EE8: jz      short loc_140426EEF
 * 0000000140426EEA: call    KiFlushBhbDuringTrapEntryOrExit
 * 0000000140426EEF: lfence
 * 0000000140426EF2: mov     byte ptr gs:856h, 0
 * 0000000140426EFB: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 0000000140426F02: jz      short loc_140426F23
 * 0000000140426F04: mov     ecx, 6A7h
 * 0000000140426F09: rdmsr
 * 0000000140426F0B: cmp     edx, 0
 * 0000000140426F0E: jz      short loc_140426F23
 * 0000000140426F10: mov     ecx, edx
 * 0000000140426F12: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 0000000140426F18: cmp     edx, ecx
 * 0000000140426F1A: jz      short loc_140426F23
 * 0000000140426F1C: mov     ecx, 6A7h
 * 0000000140426F21: wrmsr
 * 0000000140426F23: test    byte ptr [r10+3], 3
 * 0000000140426F28: mov     [rbp+0E8h+var_68], 0
 * 0000000140426F31: jz      short loc_140426F38
 * 0000000140426F33: call    KiSaveDebugRegisterState
 * 0000000140426F38: cld
 * 0000000140426F39: stmxcsr dword ptr [rbp+0E8h+var_13F+3]
 * 0000000140426F3D: ldmxcsr dword ptr gs:180h
 * 0000000140426F46: movaps  [rbp+0E8h+var_F8], xmm0
 * 0000000140426F4A: movaps  [rbp+0E8h+var_E8], xmm1
 * 0000000140426F4E: movaps  [rbp+0E8h+var_D8], xmm2
 * 0000000140426F52: movaps  [rbp+0E8h+var_C8], xmm3
 * 0000000140426F56: movaps  [rbp+0E8h+var_B8], xmm4
 * 0000000140426F5A: movaps  [rbp+0E8h+var_A8], xmm5
 * 0000000140426F5E: xor     esi, esi
 * 0000000140426F60: inc     dword ptr gs:82C0h
 * 0000000140426F68: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 0000000140426F6F: jz      short loc_140426F74
 * 0000000140426F71: clac
 * 0000000140426F74: mov     ecx, 2
 * 0000000140426F79: cmp     cs:KiIrqlFlags, 0
 * 0000000140426F80: jz      short loc_140426F89
 * 0000000140426F82: call    KzSetIrqlUnsafe
 * 0000000140426F87: jmp     short loc_140426F91
 * 0000000140426F89: mov     rax, cr8
 * 0000000140426F8D: mov     cr8, rcx
 * 0000000140426F91: mov     byte ptr [rbp+0E8h+var_13F], al
 * 0000000140426F94: mov     rcx, rsi
 * 0000000140426F97: call    HalPerformEndOfInterrupt
 * 0000000140426F9C: sti
 * 0000000140426F9D: cmp     byte ptr gs:187h, 0
 * 0000000140426FA6: jnz     short loc_140426FB5
 * 0000000140426FA8: mov     rcx, [rbp+0E8h+var_13F]
 * 0000000140426FAC: lea     rdx, [rbp+0E8h+var_168]
 * 0000000140426FB0: call    KiDispatchInterrupt
 * 0000000140426FB5: cli
 * 0000000140426FB6: movzx   ecx, byte ptr [rbp+0E8h+var_13F]
 * 0000000140426FBA: cmp     cs:KiIrqlFlags, 0
 * 0000000140426FC1: jz      short loc_140426FCA
 * 0000000140426FC3: call    KzSetIrqlUnsafe
 * 0000000140426FC8: jmp     short loc_140426FCE
 * 0000000140426FCA: mov     cr8, rcx
 * 0000000140426FCE: mov     rsi, [rbp+0E8h+var_18]
 * 0000000140426FD5: cli
 * 0000000140426FD6: test    [rbp+0E8h+arg_0], 1
 * 0000000140426FDD: jz      loc_1404272CB
 * 0000000140426FE3: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 0000000140426FEA: jz      short loc_140426FEF
 * 0000000140426FEC: stac
 * 0000000140426FEF: mov     rcx, gs:188h
 * 0000000140426FF8: test    byte ptr [rcx+0C2h], 3
 * 0000000140426FFF: jz      short loc_14042701C
 * 0000000140427001: mov     ecx, 1
 * 0000000140427006: mov     cr8, rcx
 * 000000014042700A: sti
 * 000000014042700B: call    KiInitiateUserApc
 * 0000000140427010: cli
 * 0000000140427011: mov     ecx, 0
 * 0000000140427016: mov     cr8, rcx
 * 000000014042701A: jmp     short loc_140426FEF
 * 000000014042701C: test    byte ptr gs:86Ch, 2
 * 0000000140427025: jz      short loc_14042702E
 * 0000000140427027: xor     ecx, ecx
 * 0000000140427029: call    KiUpdateStibpPairing
 * 000000014042702E: mov     rcx, gs:188h
 * 0000000140427037: test    dword ptr [rcx], 8000000h
 * 000000014042703D: jz      short loc_140427044
 * 000000014042703F: call    KiRestoreSetContextState
 * 0000000140427044: mov     rcx, gs:188h
 * 000000014042704D: test    dword ptr [rcx], 10000h
 * 0000000140427053: jz      short loc_140427069
 * 0000000140427055: test    byte ptr [rcx+2], 1
 * 0000000140427059: jz      short loc_140427069
 * 000000014042705B: call    KiCopyCounters
 * 0000000140427060: mov     rcx, gs:188h
 * 0000000140427069: ldmxcsr dword ptr [rbp+0E8h+var_13F+3]
 * 000000014042706D: cmp     [rbp+0E8h+var_68], 0
 * 0000000140427075: jz      short loc_14042707C
 * 0000000140427077: call    KiRestoreDebugRegisterState
 * 000000014042707C: mov     rcx, gs:188h
 * 0000000140427085: bt      dword ptr [rcx+74h], 16h
 * 000000014042708A: jnb     short loc_1404270B6
 * 000000014042708C: xor     ecx, ecx
 * 000000014042708E: rdsspq  rcx
 * 0000000140427093: mov     r8, gs:95A8h
 * 000000014042709C: add     r8, 8
 * 00000001404270A0: cmp     rcx, r8
 * 00000001404270A3: jnz     short loc_1404270B6
 * 00000001404270A5: mov     rcx, gs:95A0h
 * 00000001404270AE: rstorssp qword ptr [rcx]
 * 00000001404270B2: saveprevssp
 * 00000001404270B6: movaps  xmm0, [rbp+0E8h+var_F8]
 * 00000001404270BA: movaps  xmm1, [rbp+0E8h+var_E8]
 * 00000001404270BE: movaps  xmm2, [rbp+0E8h+var_D8]
 * 00000001404270C2: movaps  xmm3, [rbp+0E8h+var_C8]
 * 00000001404270C6: movaps  xmm4, [rbp+0E8h+var_B8]
 * 00000001404270CA: movaps  xmm5, [rbp+0E8h+var_A8]
 * 00000001404270CE: mov     r11, [rbp+0E8h+var_108]
 * 00000001404270D2: mov     r10, [rbp+0E8h+var_110]
 * 00000001404270D6: mov     r9, [rbp+0E8h+var_118]
 * 00000001404270DA: mov     r8, [rbp+0E8h+var_120]
 * 00000001404270DE: mov     byte ptr gs:856h, 0
 * 00000001404270E7: movzx   eax, word ptr gs:86Ah
 * 00000001404270F0: cmp     gs:864h, ax
 * 00000001404270F9: jz      short loc_14042710D
 * 00000001404270FB: mov     gs:864h, ax
 * 0000000140427104: mov     ecx, 48h ; 'H'
 * 0000000140427109: xor     edx, edx
 * 000000014042710B: wrmsr
 * 000000014042710D: btr     word ptr gs:860h, 2
 * 0000000140427118: jnb     short loc_140427128
 * 000000014042711A: mov     eax, 1
 * 000000014042711F: xor     edx, edx
 * 0000000140427121: mov     ecx, 49h ; 'I'
 * 0000000140427126: wrmsr
 * 0000000140427128: btr     word ptr gs:860h, 5
 * 0000000140427133: jnb     loc_140427270
 * 0000000140427139: call    loc_14042724C
 * 000000014042713E: add     rsp, 8
 * 0000000140427142: call    loc_140427255
 * 0000000140427147: add     rsp, 8
 * 000000014042714B: call    loc_14042713E
 * 0000000140427150: add     rsp, 8
 * 0000000140427154: call    loc_140427147
 * 0000000140427159: add     rsp, 8
 * 000000014042715D: call    loc_140427150
 * 0000000140427162: add     rsp, 8
 * 0000000140427166: call    loc_140427159
 * 000000014042716B: add     rsp, 8
 * 000000014042716F: call    loc_140427162
 * 0000000140427174: add     rsp, 8
 * 0000000140427178: call    loc_14042716B
 * 000000014042717D: add     rsp, 8
 * 0000000140427181: call    loc_140427174
 * 0000000140427186: add     rsp, 8
 * 000000014042718A: call    loc_14042717D
 * 000000014042718F: add     rsp, 8
 * 0000000140427193: call    loc_140427186
 * 0000000140427198: add     rsp, 8
 * 000000014042719C: call    loc_14042718F
 * 00000001404271A1: add     rsp, 8
 * 00000001404271A5: call    loc_140427198
 * 00000001404271AA: add     rsp, 8
 * 00000001404271AE: call    loc_1404271A1
 * 00000001404271B3: add     rsp, 8
 * 00000001404271B7: call    loc_1404271AA
 * 00000001404271BC: add     rsp, 8
 * 00000001404271C0: call    loc_1404271B3
 * 00000001404271C5: add     rsp, 8
 * 00000001404271C9: call    loc_1404271BC
 * 00000001404271CE: add     rsp, 8
 * 00000001404271D2: call    loc_1404271C5
 * 00000001404271D7: add     rsp, 8
 * 00000001404271DB: call    loc_1404271CE
 * 00000001404271E0: add     rsp, 8
 * 00000001404271E4: call    loc_1404271D7
 * 00000001404271E9: add     rsp, 8
 * 00000001404271ED: call    loc_1404271E0
 * 00000001404271F2: add     rsp, 8
 * 00000001404271F6: call    loc_1404271E9
 * 00000001404271FB: add     rsp, 8
 * 00000001404271FF: call    loc_1404271F2
 * 0000000140427204: add     rsp, 8
 * 0000000140427208: call    loc_1404271FB
 * 000000014042720D: add     rsp, 8
 * 0000000140427211: call    loc_140427204
 * 0000000140427216: add     rsp, 8
 * 000000014042721A: call    loc_14042720D
 * 000000014042721F: add     rsp, 8
 * 0000000140427223: call    loc_140427216
 * 0000000140427228: add     rsp, 8
 * 000000014042722C: call    loc_14042721F
 * 0000000140427231: add     rsp, 8
 * 0000000140427235: call    loc_140427228
 * 000000014042723A: add     rsp, 8
 * 000000014042723E: call    loc_140427231
 * 0000000140427243: add     rsp, 8
 * 0000000140427247: call    loc_14042723A
 * 000000014042724C: add     rsp, 8
 * 0000000140427250: call    loc_140427243
 * 0000000140427255: add     rsp, 8
 * 0000000140427259: mov     eax, 0DADAh
 * 000000014042725E: test    byte ptr gs:862h, 8
 * 0000000140427267: jz      short loc_140427270
 * 0000000140427269: mov     al, 20h ; ' '
 * 000000014042726B: incsspq rax
 * 0000000140427270: test    word ptr gs:860h, 80h
 * 000000014042727B: jz      short loc_140427289
 * 000000014042727D: xor     eax, eax
 * 000000014042727F: xor     edx, edx
 * 0000000140427281: mov     ecx, 1
 * 0000000140427286: div     rcx
 * 0000000140427289: mov     rdx, [rbp+0E8h+var_128]
 * 000000014042728D: mov     rcx, [rbp+0E8h+var_130]
 * 0000000140427291: mov     rax, [rbp+0E8h+var_13F+7]
 * 0000000140427295: mov     rsp, rbp
 * 0000000140427298: mov     rbp, [rbp+0E8h+var_10]
 * 000000014042729F: add     rsp, 0E8h
 * 00000001404272A6: test    cs:KiKvaShadow, 1
 * 00000001404272AD: jz      short loc_1404272B4
 * 00000001404272AF: jmp     KiKernelExit
 * 00000001404272B4: test    word ptr gs:860h, 100h
 * 00000001404272BF: jz      short loc_1404272C6
 * 00000001404272C1: verw    [rsp+arg_18]
 * 00000001404272C6: swapgs
 * 00000001404272C9: iretq
 * 00000001404272CB: ldmxcsr dword ptr [rbp+0E8h+var_13F+3]
 * 00000001404272CF: movaps  xmm0, [rbp+0E8h+var_F8]
 * 00000001404272D3: movaps  xmm1, [rbp+0E8h+var_E8]
 * 00000001404272D7: movaps  xmm2, [rbp+0E8h+var_D8]
 * 00000001404272DB: movaps  xmm3, [rbp+0E8h+var_C8]
 * 00000001404272DF: movaps  xmm4, [rbp+0E8h+var_B8]
 * 00000001404272E3: movaps  xmm5, [rbp+0E8h+var_A8]
 * 00000001404272E7: mov     r11, [rbp+0E8h+var_108]
 * 00000001404272EB: mov     r10, [rbp+0E8h+var_110]
 * 00000001404272EF: mov     r9, [rbp+0E8h+var_118]
 * 00000001404272F3: mov     r8, [rbp+0E8h+var_120]
 * 00000001404272F7: mov     rdx, [rbp+0E8h+var_128]
 * 00000001404272FB: mov     rcx, [rbp+0E8h+var_130]
 * 00000001404272FF: mov     rax, [rbp+0E8h+var_13F+7]
 * 0000000140427303: mov     rsp, rbp
 * 0000000140427306: mov     rbp, [rbp+0E8h+var_10]
 * 000000014042730D: add     rsp, 0E8h
 * 0000000140427314: iretq
 */
