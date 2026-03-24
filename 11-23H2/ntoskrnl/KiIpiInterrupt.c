/*
 * XREFs of KiIpiInterrupt @ 0x140427A20
 * Callers:
 *     KiIpiInterruptShadow @ 0x140AF7240 (KiIpiInterruptShadow.c)
 * Callees:
 *     HalRequestSoftwareInterrupt @ 0x140254D10 (HalRequestSoftwareInterrupt.c)
 *     KiBeginThreadAccountingPeriod @ 0x140308DB0 (KiBeginThreadAccountingPeriod.c)
 *     KiCheckForSListAddress @ 0x14030FDE0 (KiCheckForSListAddress.c)
 *     HalPerformEndOfInterrupt @ 0x140331810 (HalPerformEndOfInterrupt.c)
 *     KeWakeProcessor @ 0x140341880 (KeWakeProcessor.c)
 *     KiRestoreDebugRegisterState @ 0x14041EF20 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x14041EFA0 (KiSaveDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x14041FD40 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x140424E20 (KiInitiateUserApc.c)
 *     KiDpcInterruptBypass @ 0x1404279E0 (KiDpcInterruptBypass.c)
 *     KiIpiInterrupt @ 0x140427A20 (KiIpiInterrupt.c)
 *     KiIpiInterruptSubDispatch @ 0x1404281B0 (KiIpiInterruptSubDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140435300 (KiFlushBhbDuringTrapEntryOrExit.c)
 *     KiUpdateStibpPairing @ 0x140460E20 (KiUpdateStibpPairing.c)
 *     KzSetIrqlUnsafe @ 0x14056C060 (KzSetIrqlUnsafe.c)
 *     KiCopyCounters @ 0x1405741A0 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiIpiInterrupt @ 0x140427A20
 * Reason: Hex-Rays returned no pseudocode for 0x140427A20
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140427A20: sub     rsp, 8
 * 0000000140427A24: push    rbp
 * 0000000140427A25: push    rsi
 * 0000000140427A26: sub     rsp, 150h
 * 0000000140427A2D: lea     rbp, [rsp+80h]
 * 0000000140427A35: mov     [rbp+0E8h+var_13D], 0
 * 0000000140427A39: mov     [rbp+0E8h+var_138], rax
 * 0000000140427A3D: mov     [rbp+0E8h+var_130], rcx
 * 0000000140427A41: mov     [rbp+0E8h+var_128], rdx
 * 0000000140427A45: mov     [rbp+0E8h+var_120], r8
 * 0000000140427A49: mov     [rbp+0E8h+var_118], r9
 * 0000000140427A4D: mov     [rbp+0E8h+var_110], r10
 * 0000000140427A51: mov     [rbp+0E8h+var_108], r11
 * 0000000140427A55: test    [rbp+0E8h+arg_0], 1
 * 0000000140427A5C: jnz     short loc_140427A98
 * 0000000140427A5E: xor     edx, edx
 * 0000000140427A60: rdsspq  rdx
 * 0000000140427A65: mov     [rbp+0E8h+var_90], rdx
 * 0000000140427A69: lfence
 * 0000000140427A6C: test    word ptr gs:860h, 1
 * 0000000140427A77: jnz     short loc_140427A81
 * 0000000140427A79: lfence
 * 0000000140427A7C: jmp     loc_140427D08
 * 0000000140427A81: movzx   eax, word ptr gs:864h
 * 0000000140427A8A: mov     ecx, 48h ; 'H'
 * 0000000140427A8F: xor     edx, edx
 * 0000000140427A91: wrmsr
 * 0000000140427A93: jmp     loc_140427D08
 * 0000000140427A98: test    cs:KiKvaShadow, 1
 * 0000000140427A9F: jnz     short loc_140427AA4
 * 0000000140427AA1: swapgs
 * 0000000140427AA4: lfence
 * 0000000140427AA7: mov     rcx, gs:95A8h
 * 0000000140427AB0: test    rcx, rcx
 * 0000000140427AB3: jz      short loc_140427AD4
 * 0000000140427AB5: rdsspq  rdx
 * 0000000140427ABA: mov     r10, gs:95A0h
 * 0000000140427AC3: add     r10, 8
 * 0000000140427AC7: cmp     rdx, r10
 * 0000000140427ACA: jnz     short loc_140427AD4
 * 0000000140427ACC: rstorssp qword ptr [rcx]
 * 0000000140427AD0: saveprevssp
 * 0000000140427AD4: mov     r10, gs:188h
 * 0000000140427ADD: mov     rcx, gs:188h
 * 0000000140427AE6: mov     rcx, [rcx+220h]
 * 0000000140427AED: mov     rcx, [rcx+9E0h]
 * 0000000140427AF4: mov     gs:858h, rcx
 * 0000000140427AFD: mov     cx, gs:850h
 * 0000000140427B06: mov     gs:852h, cx
 * 0000000140427B0F: mov     cx, gs:860h
 * 0000000140427B18: mov     gs:854h, cx
 * 0000000140427B21: movzx   eax, word ptr gs:866h
 * 0000000140427B2A: cmp     gs:864h, ax
 * 0000000140427B33: jz      short loc_140427B47
 * 0000000140427B35: mov     gs:864h, ax
 * 0000000140427B3E: mov     ecx, 48h ; 'H'
 * 0000000140427B43: xor     edx, edx
 * 0000000140427B45: wrmsr
 * 0000000140427B47: movzx   edx, word ptr gs:860h
 * 0000000140427B50: test    edx, 8
 * 0000000140427B56: jz      short loc_140427B6F
 * 0000000140427B58: mov     eax, 1
 * 0000000140427B5D: xor     edx, edx
 * 0000000140427B5F: mov     ecx, 49h ; 'I'
 * 0000000140427B64: wrmsr
 * 0000000140427B66: movzx   edx, word ptr gs:860h
 * 0000000140427B6F: test    edx, 2
 * 0000000140427B75: jz      loc_140427CB2
 * 0000000140427B7B: call    loc_140427C8E
 * 0000000140427B80: add     rsp, 8
 * 0000000140427B84: call    loc_140427C97
 * 0000000140427B89: add     rsp, 8
 * 0000000140427B8D: call    loc_140427B80
 * 0000000140427B92: add     rsp, 8
 * 0000000140427B96: call    loc_140427B89
 * 0000000140427B9B: add     rsp, 8
 * 0000000140427B9F: call    loc_140427B92
 * 0000000140427BA4: add     rsp, 8
 * 0000000140427BA8: call    loc_140427B9B
 * 0000000140427BAD: add     rsp, 8
 * 0000000140427BB1: call    loc_140427BA4
 * 0000000140427BB6: add     rsp, 8
 * 0000000140427BBA: call    loc_140427BAD
 * 0000000140427BBF: add     rsp, 8
 * 0000000140427BC3: call    loc_140427BB6
 * 0000000140427BC8: add     rsp, 8
 * 0000000140427BCC: call    loc_140427BBF
 * 0000000140427BD1: add     rsp, 8
 * 0000000140427BD5: call    loc_140427BC8
 * 0000000140427BDA: add     rsp, 8
 * 0000000140427BDE: call    loc_140427BD1
 * 0000000140427BE3: add     rsp, 8
 * 0000000140427BE7: call    loc_140427BDA
 * 0000000140427BEC: add     rsp, 8
 * 0000000140427BF0: call    loc_140427BE3
 * 0000000140427BF5: add     rsp, 8
 * 0000000140427BF9: call    loc_140427BEC
 * 0000000140427BFE: add     rsp, 8
 * 0000000140427C02: call    loc_140427BF5
 * 0000000140427C07: add     rsp, 8
 * 0000000140427C0B: call    loc_140427BFE
 * 0000000140427C10: add     rsp, 8
 * 0000000140427C14: call    loc_140427C07
 * 0000000140427C19: add     rsp, 8
 * 0000000140427C1D: call    loc_140427C10
 * 0000000140427C22: add     rsp, 8
 * 0000000140427C26: call    loc_140427C19
 * 0000000140427C2B: add     rsp, 8
 * 0000000140427C2F: call    loc_140427C22
 * 0000000140427C34: add     rsp, 8
 * 0000000140427C38: call    loc_140427C2B
 * 0000000140427C3D: add     rsp, 8
 * 0000000140427C41: call    loc_140427C34
 * 0000000140427C46: add     rsp, 8
 * 0000000140427C4A: call    loc_140427C3D
 * 0000000140427C4F: add     rsp, 8
 * 0000000140427C53: call    loc_140427C46
 * 0000000140427C58: add     rsp, 8
 * 0000000140427C5C: call    loc_140427C4F
 * 0000000140427C61: add     rsp, 8
 * 0000000140427C65: call    loc_140427C58
 * 0000000140427C6A: add     rsp, 8
 * 0000000140427C6E: call    loc_140427C61
 * 0000000140427C73: add     rsp, 8
 * 0000000140427C77: call    loc_140427C6A
 * 0000000140427C7C: add     rsp, 8
 * 0000000140427C80: call    loc_140427C73
 * 0000000140427C85: add     rsp, 8
 * 0000000140427C89: call    loc_140427C7C
 * 0000000140427C8E: add     rsp, 8
 * 0000000140427C92: call    loc_140427C85
 * 0000000140427C97: add     rsp, 8
 * 0000000140427C9B: mov     eax, 0DADAh
 * 0000000140427CA0: test    byte ptr gs:862h, 8
 * 0000000140427CA9: jz      short loc_140427CB2
 * 0000000140427CAB: mov     al, 20h ; ' '
 * 0000000140427CAD: incsspq rax
 * 0000000140427CB2: test    edx, 200h
 * 0000000140427CB8: jz      short loc_140427CBF
 * 0000000140427CBA: call    KiFlushBhbDuringTrapEntryOrExit
 * 0000000140427CBF: lfence
 * 0000000140427CC2: mov     byte ptr gs:856h, 0
 * 0000000140427CCB: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 0000000140427CD2: jz      short loc_140427CF3
 * 0000000140427CD4: mov     ecx, 6A7h
 * 0000000140427CD9: rdmsr
 * 0000000140427CDB: cmp     edx, 0
 * 0000000140427CDE: jz      short loc_140427CF3
 * 0000000140427CE0: mov     ecx, edx
 * 0000000140427CE2: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 0000000140427CE8: cmp     edx, ecx
 * 0000000140427CEA: jz      short loc_140427CF3
 * 0000000140427CEC: mov     ecx, 6A7h
 * 0000000140427CF1: wrmsr
 * 0000000140427CF3: test    byte ptr [r10+3], 3
 * 0000000140427CF8: mov     [rbp+0E8h+var_68], 0
 * 0000000140427D01: jz      short loc_140427D08
 * 0000000140427D03: call    KiSaveDebugRegisterState
 * 0000000140427D08: cld
 * 0000000140427D09: stmxcsr [rbp+0E8h+var_13C]
 * 0000000140427D0D: ldmxcsr dword ptr gs:180h
 * 0000000140427D16: movaps  [rbp+0E8h+var_F8], xmm0
 * 0000000140427D1A: movaps  [rbp+0E8h+var_E8], xmm1
 * 0000000140427D1E: movaps  [rbp+0E8h+var_D8], xmm2
 * 0000000140427D22: movaps  [rbp+0E8h+var_C8], xmm3
 * 0000000140427D26: movaps  [rbp+0E8h+var_B8], xmm4
 * 0000000140427D2A: movaps  [rbp+0E8h+var_A8], xmm5
 * 0000000140427D2E: cmp     byte ptr gs:82DAh, 0
 * 0000000140427D37: jz      short loc_140427D3E
 * 0000000140427D39: call    KeWakeProcessor
 * 0000000140427D3E: lea     rax, ExpInterlockedPopEntrySListResume
 * 0000000140427D45: cmp     rax, [rbp+0E8h]
 * 0000000140427D4C: jnb     short loc_140427D67
 * 0000000140427D4E: lea     rax, ExpInterlockedPopEntrySListEnd
 * 0000000140427D55: cmp     rax, [rbp+0E8h]
 * 0000000140427D5C: jb      short loc_140427D67
 * 0000000140427D5E: lea     rcx, [rbp+0E8h+var_168]
 * 0000000140427D62: call    KiCheckForSListAddress
 * 0000000140427D67: xor     esi, esi
 * 0000000140427D69: inc     dword ptr gs:82C0h
 * 0000000140427D71: mov     rdx, rsp
 * 0000000140427D74: mov     rcx, gs:8B58h
 * 0000000140427D7D: lea     rax, [rcx-6000h]
 * 0000000140427D84: cmp     rax, rsp
 * 0000000140427D87: ja      short loc_140427D8E
 * 0000000140427D89: cmp     rsp, rcx
 * 0000000140427D8C: jb      short loc_140427D9A
 * 0000000140427D8E: cmp     cs:KiBugCheckActive, 0
 * 0000000140427D95: jnz     short loc_140427D9A
 * 0000000140427D97: mov     rsp, rcx
 * 0000000140427D9A: sub     rsp, 20h
 * 0000000140427D9E: mov     qword ptr [rsp+108h+var_F8], rdx
 * 0000000140427DA3: call    KiIpiInterruptSubDispatch
 * 0000000140427DA8: mov     rsp, qword ptr [rsp+108h+var_F8]
 * 0000000140427DAD: mov     rcx, rsi
 * 0000000140427DB0: call    HalPerformEndOfInterrupt
 * 0000000140427DB5: mov     rcx, gs:20h
 * 0000000140427DBE: cmp     byte ptr [rcx+20h], 1
 * 0000000140427DC2: ja      short loc_140427E3E
 * 0000000140427DC4: rdtsc
 * 0000000140427DC6: shl     rdx, 20h
 * 0000000140427DCA: or      rax, rdx
 * 0000000140427DCD: sub     rax, [rcx+8180h]
 * 0000000140427DD4: add     [rcx+8278h], rax
 * 0000000140427DDB: add     [rcx+8180h], rax
 * 0000000140427DE2: mov     r8, rax
 * 0000000140427DE5: mov     rax, [rcx+8]
 * 0000000140427DE9: test    byte ptr [rax+2], 72h
 * 0000000140427DED: jz      short loc_140427E02
 * 0000000140427DEF: xor     edx, edx
 * 0000000140427DF1: call    KiBeginThreadAccountingPeriod
 * 0000000140427DF6: mov     rcx, gs:20h
 * 0000000140427DFF: inc     byte ptr [rcx+20h]
 * 0000000140427E02: mov     dl, [rcx+6]
 * 0000000140427E05: and     byte ptr [rcx+6], 0
 * 0000000140427E09: cmp     byte ptr [rcx+7], 0
 * 0000000140427E0D: jnz     short loc_140427E3E
 * 0000000140427E0F: test    dl, dl
 * 0000000140427E11: jz      short loc_140427E3E
 * 0000000140427E13: cmp     [rbp+0E8h+var_13F], 2
 * 0000000140427E17: jnb     short loc_140427E24
 * 0000000140427E19: and     byte ptr [rcx+20h], 0
 * 0000000140427E1D: call    KiDpcInterruptBypass
 * 0000000140427E22: jmp     short loc_140427E41
 * 0000000140427E24: mov     ecx, 2
 * 0000000140427E29: call    cs:__imp_HalRequestSoftwareInterrupt
 * 0000000140427E30: nop     dword ptr [rax+rax+00h]
 * 0000000140427E35: mov     rcx, gs:20h
 * 0000000140427E3E: dec     byte ptr [rcx+20h]
 * 0000000140427E41: movzx   ecx, [rbp+0E8h+var_13F]
 * 0000000140427E45: cmp     cs:KiIrqlFlags, 0
 * 0000000140427E4C: jz      short loc_140427E55
 * 0000000140427E4E: call    KzSetIrqlUnsafe
 * 0000000140427E53: jmp     short loc_140427E59
 * 0000000140427E55: mov     cr8, rcx
 * 0000000140427E59: mov     rsi, [rbp+0E8h+var_18]
 * 0000000140427E60: test    [rbp+0E8h+arg_0], 1
 * 0000000140427E67: jz      loc_140428155
 * 0000000140427E6D: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 0000000140427E74: jz      short loc_140427E79
 * 0000000140427E76: stac
 * 0000000140427E79: mov     rcx, gs:188h
 * 0000000140427E82: test    byte ptr [rcx+0C2h], 3
 * 0000000140427E89: jz      short loc_140427EA6
 * 0000000140427E8B: mov     ecx, 1
 * 0000000140427E90: mov     cr8, rcx
 * 0000000140427E94: sti
 * 0000000140427E95: call    KiInitiateUserApc
 * 0000000140427E9A: cli
 * 0000000140427E9B: mov     ecx, 0
 * 0000000140427EA0: mov     cr8, rcx
 * 0000000140427EA4: jmp     short loc_140427E79
 * 0000000140427EA6: test    byte ptr gs:86Ch, 2
 * 0000000140427EAF: jz      short loc_140427EB8
 * 0000000140427EB1: xor     ecx, ecx
 * 0000000140427EB3: call    KiUpdateStibpPairing
 * 0000000140427EB8: mov     rcx, gs:188h
 * 0000000140427EC1: test    dword ptr [rcx], 8000000h
 * 0000000140427EC7: jz      short loc_140427ECE
 * 0000000140427EC9: call    KiRestoreSetContextState
 * 0000000140427ECE: mov     rcx, gs:188h
 * 0000000140427ED7: test    dword ptr [rcx], 10000h
 * 0000000140427EDD: jz      short loc_140427EF3
 * 0000000140427EDF: test    byte ptr [rcx+2], 1
 * 0000000140427EE3: jz      short loc_140427EF3
 * 0000000140427EE5: call    KiCopyCounters
 * 0000000140427EEA: mov     rcx, gs:188h
 * 0000000140427EF3: ldmxcsr [rbp+0E8h+var_13C]
 * 0000000140427EF7: cmp     [rbp+0E8h+var_68], 0
 * 0000000140427EFF: jz      short loc_140427F06
 * 0000000140427F01: call    KiRestoreDebugRegisterState
 * 0000000140427F06: mov     rcx, gs:188h
 * 0000000140427F0F: bt      dword ptr [rcx+74h], 16h
 * 0000000140427F14: jnb     short loc_140427F40
 * 0000000140427F16: xor     ecx, ecx
 * 0000000140427F18: rdsspq  rcx
 * 0000000140427F1D: mov     r8, gs:95A8h
 * 0000000140427F26: add     r8, 8
 * 0000000140427F2A: cmp     rcx, r8
 * 0000000140427F2D: jnz     short loc_140427F40
 * 0000000140427F2F: mov     rcx, gs:95A0h
 * 0000000140427F38: rstorssp qword ptr [rcx]
 * 0000000140427F3C: saveprevssp
 * 0000000140427F40: movaps  xmm0, [rbp+0E8h+var_F8]
 * 0000000140427F44: movaps  xmm1, [rbp+0E8h+var_E8]
 * 0000000140427F48: movaps  xmm2, [rbp+0E8h+var_D8]
 * 0000000140427F4C: movaps  xmm3, [rbp+0E8h+var_C8]
 * 0000000140427F50: movaps  xmm4, [rbp+0E8h+var_B8]
 * 0000000140427F54: movaps  xmm5, [rbp+0E8h+var_A8]
 * 0000000140427F58: mov     r11, [rbp+0E8h+var_108]
 * 0000000140427F5C: mov     r10, [rbp+0E8h+var_110]
 * 0000000140427F60: mov     r9, [rbp+0E8h+var_118]
 * 0000000140427F64: mov     r8, [rbp+0E8h+var_120]
 * 0000000140427F68: mov     byte ptr gs:856h, 0
 * 0000000140427F71: movzx   eax, word ptr gs:86Ah
 * 0000000140427F7A: cmp     gs:864h, ax
 * 0000000140427F83: jz      short loc_140427F97
 * 0000000140427F85: mov     gs:864h, ax
 * 0000000140427F8E: mov     ecx, 48h ; 'H'
 * 0000000140427F93: xor     edx, edx
 * 0000000140427F95: wrmsr
 * 0000000140427F97: btr     word ptr gs:860h, 2
 * 0000000140427FA2: jnb     short loc_140427FB2
 * 0000000140427FA4: mov     eax, 1
 * 0000000140427FA9: xor     edx, edx
 * 0000000140427FAB: mov     ecx, 49h ; 'I'
 * 0000000140427FB0: wrmsr
 * 0000000140427FB2: btr     word ptr gs:860h, 5
 * 0000000140427FBD: jnb     loc_1404280FA
 * 0000000140427FC3: call    loc_1404280D6
 * 0000000140427FC8: add     rsp, 8
 * 0000000140427FCC: call    loc_1404280DF
 * 0000000140427FD1: add     rsp, 8
 * 0000000140427FD5: call    loc_140427FC8
 * 0000000140427FDA: add     rsp, 8
 * 0000000140427FDE: call    loc_140427FD1
 * 0000000140427FE3: add     rsp, 8
 * 0000000140427FE7: call    loc_140427FDA
 * 0000000140427FEC: add     rsp, 8
 * 0000000140427FF0: call    loc_140427FE3
 * 0000000140427FF5: add     rsp, 8
 * 0000000140427FF9: call    loc_140427FEC
 * 0000000140427FFE: add     rsp, 8
 * 0000000140428002: call    loc_140427FF5
 * 0000000140428007: add     rsp, 8
 * 000000014042800B: call    loc_140427FFE
 * 0000000140428010: add     rsp, 8
 * 0000000140428014: call    loc_140428007
 * 0000000140428019: add     rsp, 8
 * 000000014042801D: call    loc_140428010
 * 0000000140428022: add     rsp, 8
 * 0000000140428026: call    loc_140428019
 * 000000014042802B: add     rsp, 8
 * 000000014042802F: call    loc_140428022
 * 0000000140428034: add     rsp, 8
 * 0000000140428038: call    loc_14042802B
 * 000000014042803D: add     rsp, 8
 * 0000000140428041: call    loc_140428034
 * 0000000140428046: add     rsp, 8
 * 000000014042804A: call    loc_14042803D
 * 000000014042804F: add     rsp, 8
 * 0000000140428053: call    loc_140428046
 * 0000000140428058: add     rsp, 8
 * 000000014042805C: call    loc_14042804F
 * 0000000140428061: add     rsp, 8
 * 0000000140428065: call    loc_140428058
 * 000000014042806A: add     rsp, 8
 * 000000014042806E: call    loc_140428061
 * 0000000140428073: add     rsp, 8
 * 0000000140428077: call    loc_14042806A
 * 000000014042807C: add     rsp, 8
 * 0000000140428080: call    loc_140428073
 * 0000000140428085: add     rsp, 8
 * 0000000140428089: call    loc_14042807C
 * 000000014042808E: add     rsp, 8
 * 0000000140428092: call    loc_140428085
 * 0000000140428097: add     rsp, 8
 * 000000014042809B: call    loc_14042808E
 * 00000001404280A0: add     rsp, 8
 * 00000001404280A4: call    loc_140428097
 * 00000001404280A9: add     rsp, 8
 * 00000001404280AD: call    loc_1404280A0
 * 00000001404280B2: add     rsp, 8
 * 00000001404280B6: call    loc_1404280A9
 * 00000001404280BB: add     rsp, 8
 * 00000001404280BF: call    loc_1404280B2
 * 00000001404280C4: add     rsp, 8
 * 00000001404280C8: call    loc_1404280BB
 * 00000001404280CD: add     rsp, 8
 * 00000001404280D1: call    loc_1404280C4
 * 00000001404280D6: add     rsp, 8
 * 00000001404280DA: call    loc_1404280CD
 * 00000001404280DF: add     rsp, 8
 * 00000001404280E3: mov     eax, 0DADAh
 * 00000001404280E8: test    byte ptr gs:862h, 8
 * 00000001404280F1: jz      short loc_1404280FA
 * 00000001404280F3: mov     al, 20h ; ' '
 * 00000001404280F5: incsspq rax
 * 00000001404280FA: test    word ptr gs:860h, 80h
 * 0000000140428105: jz      short loc_140428113
 * 0000000140428107: xor     eax, eax
 * 0000000140428109: xor     edx, edx
 * 000000014042810B: mov     ecx, 1
 * 0000000140428110: div     rcx
 * 0000000140428113: mov     rdx, [rbp+0E8h+var_128]
 * 0000000140428117: mov     rcx, [rbp+0E8h+var_130]
 * 000000014042811B: mov     rax, [rbp+0E8h+var_138]
 * 000000014042811F: mov     rsp, rbp
 * 0000000140428122: mov     rbp, [rbp+0E8h+var_10]
 * 0000000140428129: add     rsp, 0E8h
 * 0000000140428130: test    cs:KiKvaShadow, 1
 * 0000000140428137: jz      short loc_14042813E
 * 0000000140428139: jmp     KiKernelExit
 * 000000014042813E: test    word ptr gs:860h, 100h
 * 0000000140428149: jz      short loc_140428150
 * 000000014042814B: verw    [rsp+arg_18]
 * 0000000140428150: swapgs
 * 0000000140428153: iretq
 * 0000000140428155: ldmxcsr [rbp+0E8h+var_13C]
 * 0000000140428159: movaps  xmm0, [rbp+0E8h+var_F8]
 * 000000014042815D: movaps  xmm1, [rbp+0E8h+var_E8]
 * 0000000140428161: movaps  xmm2, [rbp+0E8h+var_D8]
 * 0000000140428165: movaps  xmm3, [rbp+0E8h+var_C8]
 * 0000000140428169: movaps  xmm4, [rbp+0E8h+var_B8]
 * 000000014042816D: movaps  xmm5, [rbp+0E8h+var_A8]
 * 0000000140428171: mov     r11, [rbp+0E8h+var_108]
 * 0000000140428175: mov     r10, [rbp+0E8h+var_110]
 * 0000000140428179: mov     r9, [rbp+0E8h+var_118]
 * 000000014042817D: mov     r8, [rbp+0E8h+var_120]
 * 0000000140428181: mov     rdx, [rbp+0E8h+var_128]
 * 0000000140428185: mov     rcx, [rbp+0E8h+var_130]
 * 0000000140428189: mov     rax, [rbp+0E8h+var_138]
 * 000000014042818D: mov     rsp, rbp
 * 0000000140428190: mov     rbp, [rbp+0E8h+var_10]
 * 0000000140428197: add     rsp, 0E8h
 * 000000014042819E: iretq
 */
