/*
 * XREFs of KiSwInterrupt @ 0x140426B20
 * Callers:
 *     KiSwInterruptShadow @ 0x140AF6CC0 (KiSwInterruptShadow.c)
 * Callees:
 *     KiEndThreadAccountingPeriod @ 0x140248430 (KiEndThreadAccountingPeriod.c)
 *     HalRequestSoftwareInterrupt @ 0x140254D10 (HalRequestSoftwareInterrupt.c)
 *     KiBeginThreadAccountingPeriod @ 0x140308DB0 (KiBeginThreadAccountingPeriod.c)
 *     KiCheckForSListAddress @ 0x14030FDE0 (KiCheckForSListAddress.c)
 *     HalPerformEndOfInterrupt @ 0x140331810 (HalPerformEndOfInterrupt.c)
 *     KeWakeProcessor @ 0x140341880 (KeWakeProcessor.c)
 *     KiSwInterruptDispatch @ 0x1403E45D0 (KiSwInterruptDispatch.c)
 *     KiRestoreDebugRegisterState @ 0x14041EF20 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x14041EFA0 (KiSaveDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x14041FD40 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x140424E20 (KiInitiateUserApc.c)
 *     KiSwInterrupt @ 0x140426B20 (KiSwInterrupt.c)
 *     KiDpcInterruptBypass @ 0x1404279E0 (KiDpcInterruptBypass.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140435300 (KiFlushBhbDuringTrapEntryOrExit.c)
 *     KiUpdateStibpPairing @ 0x140460E20 (KiUpdateStibpPairing.c)
 *     KzSetIrqlUnsafe @ 0x14056C060 (KzSetIrqlUnsafe.c)
 *     KiCopyCounters @ 0x1405741A0 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiSwInterrupt @ 0x140426B20
 * Reason: Hex-Rays returned no pseudocode for 0x140426B20
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140426B20: sub     rsp, 8
 * 0000000140426B24: push    rbp
 * 0000000140426B25: push    rsi
 * 0000000140426B26: sub     rsp, 150h
 * 0000000140426B2D: lea     rbp, [rsp+80h]
 * 0000000140426B35: mov     [rbp+0E8h+var_13D], 0
 * 0000000140426B39: mov     [rbp+0E8h+var_138], rax
 * 0000000140426B3D: mov     [rbp+0E8h+var_130], rcx
 * 0000000140426B41: mov     [rbp+0E8h+var_128], rdx
 * 0000000140426B45: mov     [rbp+0E8h+var_120], r8
 * 0000000140426B49: mov     [rbp+0E8h+var_118], r9
 * 0000000140426B4D: mov     [rbp+0E8h+var_110], r10
 * 0000000140426B51: mov     [rbp+0E8h+var_108], r11
 * 0000000140426B55: test    [rbp+0E8h+arg_0], 1
 * 0000000140426B5C: jnz     short loc_140426B98
 * 0000000140426B5E: xor     edx, edx
 * 0000000140426B60: rdsspq  rdx
 * 0000000140426B65: mov     [rbp+0E8h+var_90], rdx
 * 0000000140426B69: lfence
 * 0000000140426B6C: test    word ptr gs:860h, 1
 * 0000000140426B77: jnz     short loc_140426B81
 * 0000000140426B79: lfence
 * 0000000140426B7C: jmp     loc_140426E08
 * 0000000140426B81: movzx   eax, word ptr gs:864h
 * 0000000140426B8A: mov     ecx, 48h ; 'H'
 * 0000000140426B8F: xor     edx, edx
 * 0000000140426B91: wrmsr
 * 0000000140426B93: jmp     loc_140426E08
 * 0000000140426B98: test    cs:KiKvaShadow, 1
 * 0000000140426B9F: jnz     short loc_140426BA4
 * 0000000140426BA1: swapgs
 * 0000000140426BA4: lfence
 * 0000000140426BA7: mov     rcx, gs:95A8h
 * 0000000140426BB0: test    rcx, rcx
 * 0000000140426BB3: jz      short loc_140426BD4
 * 0000000140426BB5: rdsspq  rdx
 * 0000000140426BBA: mov     r10, gs:95A0h
 * 0000000140426BC3: add     r10, 8
 * 0000000140426BC7: cmp     rdx, r10
 * 0000000140426BCA: jnz     short loc_140426BD4
 * 0000000140426BCC: rstorssp qword ptr [rcx]
 * 0000000140426BD0: saveprevssp
 * 0000000140426BD4: mov     r10, gs:188h
 * 0000000140426BDD: mov     rcx, gs:188h
 * 0000000140426BE6: mov     rcx, [rcx+220h]
 * 0000000140426BED: mov     rcx, [rcx+9E0h]
 * 0000000140426BF4: mov     gs:858h, rcx
 * 0000000140426BFD: mov     cx, gs:850h
 * 0000000140426C06: mov     gs:852h, cx
 * 0000000140426C0F: mov     cx, gs:860h
 * 0000000140426C18: mov     gs:854h, cx
 * 0000000140426C21: movzx   eax, word ptr gs:866h
 * 0000000140426C2A: cmp     gs:864h, ax
 * 0000000140426C33: jz      short loc_140426C47
 * 0000000140426C35: mov     gs:864h, ax
 * 0000000140426C3E: mov     ecx, 48h ; 'H'
 * 0000000140426C43: xor     edx, edx
 * 0000000140426C45: wrmsr
 * 0000000140426C47: movzx   edx, word ptr gs:860h
 * 0000000140426C50: test    edx, 8
 * 0000000140426C56: jz      short loc_140426C6F
 * 0000000140426C58: mov     eax, 1
 * 0000000140426C5D: xor     edx, edx
 * 0000000140426C5F: mov     ecx, 49h ; 'I'
 * 0000000140426C64: wrmsr
 * 0000000140426C66: movzx   edx, word ptr gs:860h
 * 0000000140426C6F: test    edx, 2
 * 0000000140426C75: jz      loc_140426DB2
 * 0000000140426C7B: call    loc_140426D8E
 * 0000000140426C80: add     rsp, 8
 * 0000000140426C84: call    loc_140426D97
 * 0000000140426C89: add     rsp, 8
 * 0000000140426C8D: call    loc_140426C80
 * 0000000140426C92: add     rsp, 8
 * 0000000140426C96: call    loc_140426C89
 * 0000000140426C9B: add     rsp, 8
 * 0000000140426C9F: call    loc_140426C92
 * 0000000140426CA4: add     rsp, 8
 * 0000000140426CA8: call    loc_140426C9B
 * 0000000140426CAD: add     rsp, 8
 * 0000000140426CB1: call    loc_140426CA4
 * 0000000140426CB6: add     rsp, 8
 * 0000000140426CBA: call    loc_140426CAD
 * 0000000140426CBF: add     rsp, 8
 * 0000000140426CC3: call    loc_140426CB6
 * 0000000140426CC8: add     rsp, 8
 * 0000000140426CCC: call    loc_140426CBF
 * 0000000140426CD1: add     rsp, 8
 * 0000000140426CD5: call    loc_140426CC8
 * 0000000140426CDA: add     rsp, 8
 * 0000000140426CDE: call    loc_140426CD1
 * 0000000140426CE3: add     rsp, 8
 * 0000000140426CE7: call    loc_140426CDA
 * 0000000140426CEC: add     rsp, 8
 * 0000000140426CF0: call    loc_140426CE3
 * 0000000140426CF5: add     rsp, 8
 * 0000000140426CF9: call    loc_140426CEC
 * 0000000140426CFE: add     rsp, 8
 * 0000000140426D02: call    loc_140426CF5
 * 0000000140426D07: add     rsp, 8
 * 0000000140426D0B: call    loc_140426CFE
 * 0000000140426D10: add     rsp, 8
 * 0000000140426D14: call    loc_140426D07
 * 0000000140426D19: add     rsp, 8
 * 0000000140426D1D: call    loc_140426D10
 * 0000000140426D22: add     rsp, 8
 * 0000000140426D26: call    loc_140426D19
 * 0000000140426D2B: add     rsp, 8
 * 0000000140426D2F: call    loc_140426D22
 * 0000000140426D34: add     rsp, 8
 * 0000000140426D38: call    loc_140426D2B
 * 0000000140426D3D: add     rsp, 8
 * 0000000140426D41: call    loc_140426D34
 * 0000000140426D46: add     rsp, 8
 * 0000000140426D4A: call    loc_140426D3D
 * 0000000140426D4F: add     rsp, 8
 * 0000000140426D53: call    loc_140426D46
 * 0000000140426D58: add     rsp, 8
 * 0000000140426D5C: call    loc_140426D4F
 * 0000000140426D61: add     rsp, 8
 * 0000000140426D65: call    loc_140426D58
 * 0000000140426D6A: add     rsp, 8
 * 0000000140426D6E: call    loc_140426D61
 * 0000000140426D73: add     rsp, 8
 * 0000000140426D77: call    loc_140426D6A
 * 0000000140426D7C: add     rsp, 8
 * 0000000140426D80: call    loc_140426D73
 * 0000000140426D85: add     rsp, 8
 * 0000000140426D89: call    loc_140426D7C
 * 0000000140426D8E: add     rsp, 8
 * 0000000140426D92: call    loc_140426D85
 * 0000000140426D97: add     rsp, 8
 * 0000000140426D9B: mov     eax, 0DADAh
 * 0000000140426DA0: test    byte ptr gs:862h, 8
 * 0000000140426DA9: jz      short loc_140426DB2
 * 0000000140426DAB: mov     al, 20h ; ' '
 * 0000000140426DAD: incsspq rax
 * 0000000140426DB2: test    edx, 200h
 * 0000000140426DB8: jz      short loc_140426DBF
 * 0000000140426DBA: call    KiFlushBhbDuringTrapEntryOrExit
 * 0000000140426DBF: lfence
 * 0000000140426DC2: mov     byte ptr gs:856h, 0
 * 0000000140426DCB: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 0000000140426DD2: jz      short loc_140426DF3
 * 0000000140426DD4: mov     ecx, 6A7h
 * 0000000140426DD9: rdmsr
 * 0000000140426DDB: cmp     edx, 0
 * 0000000140426DDE: jz      short loc_140426DF3
 * 0000000140426DE0: mov     ecx, edx
 * 0000000140426DE2: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 0000000140426DE8: cmp     edx, ecx
 * 0000000140426DEA: jz      short loc_140426DF3
 * 0000000140426DEC: mov     ecx, 6A7h
 * 0000000140426DF1: wrmsr
 * 0000000140426DF3: test    byte ptr [r10+3], 3
 * 0000000140426DF8: mov     [rbp+0E8h+var_68], 0
 * 0000000140426E01: jz      short loc_140426E08
 * 0000000140426E03: call    KiSaveDebugRegisterState
 * 0000000140426E08: cld
 * 0000000140426E09: stmxcsr [rbp+0E8h+var_13C]
 * 0000000140426E0D: ldmxcsr dword ptr gs:180h
 * 0000000140426E16: movaps  [rbp+0E8h+var_F8], xmm0
 * 0000000140426E1A: movaps  [rbp+0E8h+var_E8], xmm1
 * 0000000140426E1E: movaps  [rbp+0E8h+var_D8], xmm2
 * 0000000140426E22: movaps  [rbp+0E8h+var_C8], xmm3
 * 0000000140426E26: movaps  [rbp+0E8h+var_B8], xmm4
 * 0000000140426E2A: movaps  [rbp+0E8h+var_A8], xmm5
 * 0000000140426E2E: cmp     byte ptr gs:82DAh, 0
 * 0000000140426E37: jz      short loc_140426E3E
 * 0000000140426E39: call    KeWakeProcessor
 * 0000000140426E3E: lea     rax, ExpInterlockedPopEntrySListResume
 * 0000000140426E45: cmp     rax, [rbp+0E8h]
 * 0000000140426E4C: jnb     short loc_140426E67
 * 0000000140426E4E: lea     rax, ExpInterlockedPopEntrySListEnd
 * 0000000140426E55: cmp     rax, [rbp+0E8h]
 * 0000000140426E5C: jb      short loc_140426E67
 * 0000000140426E5E: lea     rcx, [rbp+0E8h+var_168]
 * 0000000140426E62: call    KiCheckForSListAddress
 * 0000000140426E67: xor     esi, esi
 * 0000000140426E69: inc     dword ptr gs:82C0h
 * 0000000140426E71: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 0000000140426E78: jz      short loc_140426E7D
 * 0000000140426E7A: clac
 * 0000000140426E7D: mov     ecx, 2
 * 0000000140426E82: cmp     cs:KiIrqlFlags, 0
 * 0000000140426E89: jz      short loc_140426E92
 * 0000000140426E8B: call    KzSetIrqlUnsafe
 * 0000000140426E90: jmp     short loc_140426E9A
 * 0000000140426E92: mov     rax, cr8
 * 0000000140426E96: mov     cr8, rcx
 * 0000000140426E9A: mov     [rbp+0E8h+var_13F], al
 * 0000000140426E9D: mov     rcx, gs:20h
 * 0000000140426EA6: inc     byte ptr [rcx+20h]
 * 0000000140426EA9: cmp     byte ptr [rcx+20h], 1
 * 0000000140426EAD: jnz     short loc_140426EFF
 * 0000000140426EAF: rdtsc
 * 0000000140426EB1: shl     rdx, 20h
 * 0000000140426EB5: or      rax, rdx
 * 0000000140426EB8: mov     r8, [rcx+8]
 * 0000000140426EBC: sub     rax, [rcx+8180h]
 * 0000000140426EC3: add     [r8+48h], rax
 * 0000000140426EC7: mov     edx, [r8+50h]
 * 0000000140426ECB: add     [rcx+8180h], rax
 * 0000000140426ED2: add     rdx, rax
 * 0000000140426ED5: mov     ecx, edx
 * 0000000140426ED7: shr     rdx, 20h
 * 0000000140426EDB: jz      short loc_140426EE0
 * 0000000140426EDD: or      ecx, 0FFFFFFFFh
 * 0000000140426EE0: mov     [r8+50h], ecx
 * 0000000140426EE4: test    byte ptr [r8+2], 0BEh
 * 0000000140426EE9: jz      short loc_140426EFF
 * 0000000140426EEB: mov     rdx, r8
 * 0000000140426EEE: mov     r8, rax
 * 0000000140426EF1: mov     rcx, gs:20h
 * 0000000140426EFA: call    KiEndThreadAccountingPeriod
 * 0000000140426EFF: sti
 * 0000000140426F00: lea     rcx, [rbp+0E8h+var_168]
 * 0000000140426F04: call    KiSwInterruptDispatch
 * 0000000140426F09: cli
 * 0000000140426F0A: mov     rcx, rsi
 * 0000000140426F0D: call    HalPerformEndOfInterrupt
 * 0000000140426F12: mov     rcx, gs:20h
 * 0000000140426F1B: cmp     byte ptr [rcx+20h], 1
 * 0000000140426F1F: ja      short loc_140426F9B
 * 0000000140426F21: rdtsc
 * 0000000140426F23: shl     rdx, 20h
 * 0000000140426F27: or      rax, rdx
 * 0000000140426F2A: sub     rax, [rcx+8180h]
 * 0000000140426F31: add     [rcx+8278h], rax
 * 0000000140426F38: add     [rcx+8180h], rax
 * 0000000140426F3F: mov     r8, rax
 * 0000000140426F42: mov     rax, [rcx+8]
 * 0000000140426F46: test    byte ptr [rax+2], 72h
 * 0000000140426F4A: jz      short loc_140426F5F
 * 0000000140426F4C: xor     edx, edx
 * 0000000140426F4E: call    KiBeginThreadAccountingPeriod
 * 0000000140426F53: mov     rcx, gs:20h
 * 0000000140426F5C: inc     byte ptr [rcx+20h]
 * 0000000140426F5F: mov     dl, [rcx+6]
 * 0000000140426F62: and     byte ptr [rcx+6], 0
 * 0000000140426F66: cmp     byte ptr [rcx+7], 0
 * 0000000140426F6A: jnz     short loc_140426F9B
 * 0000000140426F6C: test    dl, dl
 * 0000000140426F6E: jz      short loc_140426F9B
 * 0000000140426F70: cmp     [rbp+0E8h+var_13F], 2
 * 0000000140426F74: jnb     short loc_140426F81
 * 0000000140426F76: and     byte ptr [rcx+20h], 0
 * 0000000140426F7A: call    KiDpcInterruptBypass
 * 0000000140426F7F: jmp     short loc_140426F9E
 * 0000000140426F81: mov     ecx, 2
 * 0000000140426F86: call    cs:__imp_HalRequestSoftwareInterrupt
 * 0000000140426F8D: nop     dword ptr [rax+rax+00h]
 * 0000000140426F92: mov     rcx, gs:20h
 * 0000000140426F9B: dec     byte ptr [rcx+20h]
 * 0000000140426F9E: movzx   ecx, [rbp+0E8h+var_13F]
 * 0000000140426FA2: cmp     cs:KiIrqlFlags, 0
 * 0000000140426FA9: jz      short loc_140426FB2
 * 0000000140426FAB: call    KzSetIrqlUnsafe
 * 0000000140426FB0: jmp     short loc_140426FB6
 * 0000000140426FB2: mov     cr8, rcx
 * 0000000140426FB6: mov     rsi, [rbp+0E8h+var_18]
 * 0000000140426FBD: cli
 * 0000000140426FBE: test    [rbp+0E8h+arg_0], 1
 * 0000000140426FC5: jz      loc_1404272B3
 * 0000000140426FCB: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 0000000140426FD2: jz      short loc_140426FD7
 * 0000000140426FD4: stac
 * 0000000140426FD7: mov     rcx, gs:188h
 * 0000000140426FE0: test    byte ptr [rcx+0C2h], 3
 * 0000000140426FE7: jz      short loc_140427004
 * 0000000140426FE9: mov     ecx, 1
 * 0000000140426FEE: mov     cr8, rcx
 * 0000000140426FF2: sti
 * 0000000140426FF3: call    KiInitiateUserApc
 * 0000000140426FF8: cli
 * 0000000140426FF9: mov     ecx, 0
 * 0000000140426FFE: mov     cr8, rcx
 * 0000000140427002: jmp     short loc_140426FD7
 * 0000000140427004: test    byte ptr gs:86Ch, 2
 * 000000014042700D: jz      short loc_140427016
 * 000000014042700F: xor     ecx, ecx
 * 0000000140427011: call    KiUpdateStibpPairing
 * 0000000140427016: mov     rcx, gs:188h
 * 000000014042701F: test    dword ptr [rcx], 8000000h
 * 0000000140427025: jz      short loc_14042702C
 * 0000000140427027: call    KiRestoreSetContextState
 * 000000014042702C: mov     rcx, gs:188h
 * 0000000140427035: test    dword ptr [rcx], 10000h
 * 000000014042703B: jz      short loc_140427051
 * 000000014042703D: test    byte ptr [rcx+2], 1
 * 0000000140427041: jz      short loc_140427051
 * 0000000140427043: call    KiCopyCounters
 * 0000000140427048: mov     rcx, gs:188h
 * 0000000140427051: ldmxcsr [rbp+0E8h+var_13C]
 * 0000000140427055: cmp     [rbp+0E8h+var_68], 0
 * 000000014042705D: jz      short loc_140427064
 * 000000014042705F: call    KiRestoreDebugRegisterState
 * 0000000140427064: mov     rcx, gs:188h
 * 000000014042706D: bt      dword ptr [rcx+74h], 16h
 * 0000000140427072: jnb     short loc_14042709E
 * 0000000140427074: xor     ecx, ecx
 * 0000000140427076: rdsspq  rcx
 * 000000014042707B: mov     r8, gs:95A8h
 * 0000000140427084: add     r8, 8
 * 0000000140427088: cmp     rcx, r8
 * 000000014042708B: jnz     short loc_14042709E
 * 000000014042708D: mov     rcx, gs:95A0h
 * 0000000140427096: rstorssp qword ptr [rcx]
 * 000000014042709A: saveprevssp
 * 000000014042709E: movaps  xmm0, [rbp+0E8h+var_F8]
 * 00000001404270A2: movaps  xmm1, [rbp+0E8h+var_E8]
 * 00000001404270A6: movaps  xmm2, [rbp+0E8h+var_D8]
 * 00000001404270AA: movaps  xmm3, [rbp+0E8h+var_C8]
 * 00000001404270AE: movaps  xmm4, [rbp+0E8h+var_B8]
 * 00000001404270B2: movaps  xmm5, [rbp+0E8h+var_A8]
 * 00000001404270B6: mov     r11, [rbp+0E8h+var_108]
 * 00000001404270BA: mov     r10, [rbp+0E8h+var_110]
 * 00000001404270BE: mov     r9, [rbp+0E8h+var_118]
 * 00000001404270C2: mov     r8, [rbp+0E8h+var_120]
 * 00000001404270C6: mov     byte ptr gs:856h, 0
 * 00000001404270CF: movzx   eax, word ptr gs:86Ah
 * 00000001404270D8: cmp     gs:864h, ax
 * 00000001404270E1: jz      short loc_1404270F5
 * 00000001404270E3: mov     gs:864h, ax
 * 00000001404270EC: mov     ecx, 48h ; 'H'
 * 00000001404270F1: xor     edx, edx
 * 00000001404270F3: wrmsr
 * 00000001404270F5: btr     word ptr gs:860h, 2
 * 0000000140427100: jnb     short loc_140427110
 * 0000000140427102: mov     eax, 1
 * 0000000140427107: xor     edx, edx
 * 0000000140427109: mov     ecx, 49h ; 'I'
 * 000000014042710E: wrmsr
 * 0000000140427110: btr     word ptr gs:860h, 5
 * 000000014042711B: jnb     loc_140427258
 * 0000000140427121: call    loc_140427234
 * 0000000140427126: add     rsp, 8
 * 000000014042712A: call    loc_14042723D
 * 000000014042712F: add     rsp, 8
 * 0000000140427133: call    loc_140427126
 * 0000000140427138: add     rsp, 8
 * 000000014042713C: call    loc_14042712F
 * 0000000140427141: add     rsp, 8
 * 0000000140427145: call    loc_140427138
 * 000000014042714A: add     rsp, 8
 * 000000014042714E: call    loc_140427141
 * 0000000140427153: add     rsp, 8
 * 0000000140427157: call    loc_14042714A
 * 000000014042715C: add     rsp, 8
 * 0000000140427160: call    loc_140427153
 * 0000000140427165: add     rsp, 8
 * 0000000140427169: call    loc_14042715C
 * 000000014042716E: add     rsp, 8
 * 0000000140427172: call    loc_140427165
 * 0000000140427177: add     rsp, 8
 * 000000014042717B: call    loc_14042716E
 * 0000000140427180: add     rsp, 8
 * 0000000140427184: call    loc_140427177
 * 0000000140427189: add     rsp, 8
 * 000000014042718D: call    loc_140427180
 * 0000000140427192: add     rsp, 8
 * 0000000140427196: call    loc_140427189
 * 000000014042719B: add     rsp, 8
 * 000000014042719F: call    loc_140427192
 * 00000001404271A4: add     rsp, 8
 * 00000001404271A8: call    loc_14042719B
 * 00000001404271AD: add     rsp, 8
 * 00000001404271B1: call    loc_1404271A4
 * 00000001404271B6: add     rsp, 8
 * 00000001404271BA: call    loc_1404271AD
 * 00000001404271BF: add     rsp, 8
 * 00000001404271C3: call    loc_1404271B6
 * 00000001404271C8: add     rsp, 8
 * 00000001404271CC: call    loc_1404271BF
 * 00000001404271D1: add     rsp, 8
 * 00000001404271D5: call    loc_1404271C8
 * 00000001404271DA: add     rsp, 8
 * 00000001404271DE: call    loc_1404271D1
 * 00000001404271E3: add     rsp, 8
 * 00000001404271E7: call    loc_1404271DA
 * 00000001404271EC: add     rsp, 8
 * 00000001404271F0: call    loc_1404271E3
 * 00000001404271F5: add     rsp, 8
 * 00000001404271F9: call    loc_1404271EC
 * 00000001404271FE: add     rsp, 8
 * 0000000140427202: call    loc_1404271F5
 * 0000000140427207: add     rsp, 8
 * 000000014042720B: call    loc_1404271FE
 * 0000000140427210: add     rsp, 8
 * 0000000140427214: call    loc_140427207
 * 0000000140427219: add     rsp, 8
 * 000000014042721D: call    loc_140427210
 * 0000000140427222: add     rsp, 8
 * 0000000140427226: call    loc_140427219
 * 000000014042722B: add     rsp, 8
 * 000000014042722F: call    loc_140427222
 * 0000000140427234: add     rsp, 8
 * 0000000140427238: call    loc_14042722B
 * 000000014042723D: add     rsp, 8
 * 0000000140427241: mov     eax, 0DADAh
 * 0000000140427246: test    byte ptr gs:862h, 8
 * 000000014042724F: jz      short loc_140427258
 * 0000000140427251: mov     al, 20h ; ' '
 * 0000000140427253: incsspq rax
 * 0000000140427258: test    word ptr gs:860h, 80h
 * 0000000140427263: jz      short loc_140427271
 * 0000000140427265: xor     eax, eax
 * 0000000140427267: xor     edx, edx
 * 0000000140427269: mov     ecx, 1
 * 000000014042726E: div     rcx
 * 0000000140427271: mov     rdx, [rbp+0E8h+var_128]
 * 0000000140427275: mov     rcx, [rbp+0E8h+var_130]
 * 0000000140427279: mov     rax, [rbp+0E8h+var_138]
 * 000000014042727D: mov     rsp, rbp
 * 0000000140427280: mov     rbp, [rbp+0E8h+var_10]
 * 0000000140427287: add     rsp, 0E8h
 * 000000014042728E: test    cs:KiKvaShadow, 1
 * 0000000140427295: jz      short loc_14042729C
 * 0000000140427297: jmp     KiKernelExit
 * 000000014042729C: test    word ptr gs:860h, 100h
 * 00000001404272A7: jz      short loc_1404272AE
 * 00000001404272A9: verw    [rsp+arg_18]
 * 00000001404272AE: swapgs
 * 00000001404272B1: iretq
 * 00000001404272B3: ldmxcsr [rbp+0E8h+var_13C]
 * 00000001404272B7: movaps  xmm0, [rbp+0E8h+var_F8]
 * 00000001404272BB: movaps  xmm1, [rbp+0E8h+var_E8]
 * 00000001404272BF: movaps  xmm2, [rbp+0E8h+var_D8]
 * 00000001404272C3: movaps  xmm3, [rbp+0E8h+var_C8]
 * 00000001404272C7: movaps  xmm4, [rbp+0E8h+var_B8]
 * 00000001404272CB: movaps  xmm5, [rbp+0E8h+var_A8]
 * 00000001404272CF: mov     r11, [rbp+0E8h+var_108]
 * 00000001404272D3: mov     r10, [rbp+0E8h+var_110]
 * 00000001404272D7: mov     r9, [rbp+0E8h+var_118]
 * 00000001404272DB: mov     r8, [rbp+0E8h+var_120]
 * 00000001404272DF: mov     rdx, [rbp+0E8h+var_128]
 * 00000001404272E3: mov     rcx, [rbp+0E8h+var_130]
 * 00000001404272E7: mov     rax, [rbp+0E8h+var_138]
 * 00000001404272EB: mov     rsp, rbp
 * 00000001404272EE: mov     rbp, [rbp+0E8h+var_10]
 * 00000001404272F5: add     rsp, 0E8h
 * 00000001404272FC: iretq
 */
