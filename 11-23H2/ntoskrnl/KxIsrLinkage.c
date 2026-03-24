/*
 * XREFs of KxIsrLinkage @ 0x1404229F0
 * Callers:
 *     KxIsrLinkageShadow @ 0x140AF7B00 (KxIsrLinkageShadow.c)
 * Callees:
 *     KiEndThreadAccountingPeriod @ 0x140248430 (KiEndThreadAccountingPeriod.c)
 *     HalRequestSoftwareInterrupt @ 0x140254D10 (HalRequestSoftwareInterrupt.c)
 *     KiBeginThreadAccountingPeriod @ 0x140308DB0 (KiBeginThreadAccountingPeriod.c)
 *     KiCheckForSListAddress @ 0x14030FDE0 (KiCheckForSListAddress.c)
 *     HalPerformEndOfInterrupt @ 0x140331810 (HalPerformEndOfInterrupt.c)
 *     KeWakeProcessor @ 0x140341880 (KeWakeProcessor.c)
 *     KiRestoreDebugRegisterState @ 0x14041EF20 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x14041EFA0 (KiSaveDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x14041FD40 (KiRestoreSetContextState.c)
 *     KxIsrLinkage @ 0x1404229F0 (KxIsrLinkage.c)
 *     KiInitiateUserApc @ 0x140424E20 (KiInitiateUserApc.c)
 *     KiDpcInterruptBypass @ 0x1404279E0 (KiDpcInterruptBypass.c)
 *     KiBugCheckDispatch @ 0x1404348C0 (KiBugCheckDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140435300 (KiFlushBhbDuringTrapEntryOrExit.c)
 *     KiUpdateStibpPairing @ 0x140460E20 (KiUpdateStibpPairing.c)
 *     KzSetIrqlUnsafe @ 0x14056C060 (KzSetIrqlUnsafe.c)
 *     KiCopyCounters @ 0x1405741A0 (KiCopyCounters.c)
 *     PerfInfoLogUnexpectedInterrupt @ 0x1405FECE0 (PerfInfoLogUnexpectedInterrupt.c)
 */

/*
 * Hex-Rays decompilation failed for KxIsrLinkage @ 0x1404229F0
 * Reason: Hex-Rays returned no pseudocode for 0x1404229F0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001404229F0: push    rbp
 * 00000001404229F1: push    rsi
 * 00000001404229F2: sub     rsp, 150h
 * 00000001404229F9: lea     rbp, [rsp+80h]
 * 0000000140422A01: mov     [rbp+0D8h+var_12D], 0
 * 0000000140422A05: mov     [rbp+0D8h+var_128], rax
 * 0000000140422A09: mov     [rbp+0D8h+var_120], rcx
 * 0000000140422A0D: mov     [rbp+0D8h+var_118], rdx
 * 0000000140422A11: mov     [rbp+0D8h+var_110], r8
 * 0000000140422A15: mov     [rbp+0D8h+var_108], r9
 * 0000000140422A19: mov     [rbp+0D8h+var_100], r10
 * 0000000140422A1D: mov     [rbp+0D8h+var_F8], r11
 * 0000000140422A21: test    [rbp+0D8h+arg_8], 1
 * 0000000140422A28: jnz     short loc_140422A64
 * 0000000140422A2A: xor     edx, edx
 * 0000000140422A2C: rdsspq  rdx
 * 0000000140422A31: mov     [rbp+0D8h+var_80], rdx
 * 0000000140422A35: lfence
 * 0000000140422A38: test    word ptr gs:860h, 1
 * 0000000140422A43: jnz     short loc_140422A4D
 * 0000000140422A45: lfence
 * 0000000140422A48: jmp     loc_140422CD4
 * 0000000140422A4D: movzx   eax, word ptr gs:864h
 * 0000000140422A56: mov     ecx, 48h ; 'H'
 * 0000000140422A5B: xor     edx, edx
 * 0000000140422A5D: wrmsr
 * 0000000140422A5F: jmp     loc_140422CD4
 * 0000000140422A64: test    cs:KiKvaShadow, 1
 * 0000000140422A6B: jnz     short loc_140422A70
 * 0000000140422A6D: swapgs
 * 0000000140422A70: lfence
 * 0000000140422A73: mov     rcx, gs:95A8h
 * 0000000140422A7C: test    rcx, rcx
 * 0000000140422A7F: jz      short loc_140422AA0
 * 0000000140422A81: rdsspq  rdx
 * 0000000140422A86: mov     r10, gs:95A0h
 * 0000000140422A8F: add     r10, 8
 * 0000000140422A93: cmp     rdx, r10
 * 0000000140422A96: jnz     short loc_140422AA0
 * 0000000140422A98: rstorssp qword ptr [rcx]
 * 0000000140422A9C: saveprevssp
 * 0000000140422AA0: mov     r10, gs:188h
 * 0000000140422AA9: mov     rcx, gs:188h
 * 0000000140422AB2: mov     rcx, [rcx+220h]
 * 0000000140422AB9: mov     rcx, [rcx+9E0h]
 * 0000000140422AC0: mov     gs:858h, rcx
 * 0000000140422AC9: mov     cx, gs:850h
 * 0000000140422AD2: mov     gs:852h, cx
 * 0000000140422ADB: mov     cx, gs:860h
 * 0000000140422AE4: mov     gs:854h, cx
 * 0000000140422AED: movzx   eax, word ptr gs:866h
 * 0000000140422AF6: cmp     gs:864h, ax
 * 0000000140422AFF: jz      short loc_140422B13
 * 0000000140422B01: mov     gs:864h, ax
 * 0000000140422B0A: mov     ecx, 48h ; 'H'
 * 0000000140422B0F: xor     edx, edx
 * 0000000140422B11: wrmsr
 * 0000000140422B13: movzx   edx, word ptr gs:860h
 * 0000000140422B1C: test    edx, 8
 * 0000000140422B22: jz      short loc_140422B3B
 * 0000000140422B24: mov     eax, 1
 * 0000000140422B29: xor     edx, edx
 * 0000000140422B2B: mov     ecx, 49h ; 'I'
 * 0000000140422B30: wrmsr
 * 0000000140422B32: movzx   edx, word ptr gs:860h
 * 0000000140422B3B: test    edx, 2
 * 0000000140422B41: jz      loc_140422C7E
 * 0000000140422B47: call    loc_140422C5A
 * 0000000140422B4C: add     rsp, 8
 * 0000000140422B50: call    loc_140422C63
 * 0000000140422B55: add     rsp, 8
 * 0000000140422B59: call    loc_140422B4C
 * 0000000140422B5E: add     rsp, 8
 * 0000000140422B62: call    loc_140422B55
 * 0000000140422B67: add     rsp, 8
 * 0000000140422B6B: call    loc_140422B5E
 * 0000000140422B70: add     rsp, 8
 * 0000000140422B74: call    loc_140422B67
 * 0000000140422B79: add     rsp, 8
 * 0000000140422B7D: call    loc_140422B70
 * 0000000140422B82: add     rsp, 8
 * 0000000140422B86: call    loc_140422B79
 * 0000000140422B8B: add     rsp, 8
 * 0000000140422B8F: call    loc_140422B82
 * 0000000140422B94: add     rsp, 8
 * 0000000140422B98: call    loc_140422B8B
 * 0000000140422B9D: add     rsp, 8
 * 0000000140422BA1: call    loc_140422B94
 * 0000000140422BA6: add     rsp, 8
 * 0000000140422BAA: call    loc_140422B9D
 * 0000000140422BAF: add     rsp, 8
 * 0000000140422BB3: call    loc_140422BA6
 * 0000000140422BB8: add     rsp, 8
 * 0000000140422BBC: call    loc_140422BAF
 * 0000000140422BC1: add     rsp, 8
 * 0000000140422BC5: call    loc_140422BB8
 * 0000000140422BCA: add     rsp, 8
 * 0000000140422BCE: call    loc_140422BC1
 * 0000000140422BD3: add     rsp, 8
 * 0000000140422BD7: call    loc_140422BCA
 * 0000000140422BDC: add     rsp, 8
 * 0000000140422BE0: call    loc_140422BD3
 * 0000000140422BE5: add     rsp, 8
 * 0000000140422BE9: call    loc_140422BDC
 * 0000000140422BEE: add     rsp, 8
 * 0000000140422BF2: call    loc_140422BE5
 * 0000000140422BF7: add     rsp, 8
 * 0000000140422BFB: call    loc_140422BEE
 * 0000000140422C00: add     rsp, 8
 * 0000000140422C04: call    loc_140422BF7
 * 0000000140422C09: add     rsp, 8
 * 0000000140422C0D: call    loc_140422C00
 * 0000000140422C12: add     rsp, 8
 * 0000000140422C16: call    loc_140422C09
 * 0000000140422C1B: add     rsp, 8
 * 0000000140422C1F: call    loc_140422C12
 * 0000000140422C24: add     rsp, 8
 * 0000000140422C28: call    loc_140422C1B
 * 0000000140422C2D: add     rsp, 8
 * 0000000140422C31: call    loc_140422C24
 * 0000000140422C36: add     rsp, 8
 * 0000000140422C3A: call    loc_140422C2D
 * 0000000140422C3F: add     rsp, 8
 * 0000000140422C43: call    loc_140422C36
 * 0000000140422C48: add     rsp, 8
 * 0000000140422C4C: call    loc_140422C3F
 * 0000000140422C51: add     rsp, 8
 * 0000000140422C55: call    loc_140422C48
 * 0000000140422C5A: add     rsp, 8
 * 0000000140422C5E: call    loc_140422C51
 * 0000000140422C63: add     rsp, 8
 * 0000000140422C67: mov     eax, 0DADAh
 * 0000000140422C6C: test    byte ptr gs:862h, 8
 * 0000000140422C75: jz      short loc_140422C7E
 * 0000000140422C77: mov     al, 20h ; ' '
 * 0000000140422C79: incsspq rax
 * 0000000140422C7E: test    edx, 200h
 * 0000000140422C84: jz      short loc_140422C8B
 * 0000000140422C86: call    KiFlushBhbDuringTrapEntryOrExit
 * 0000000140422C8B: lfence
 * 0000000140422C8E: mov     byte ptr gs:856h, 0
 * 0000000140422C97: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 0000000140422C9E: jz      short loc_140422CBF
 * 0000000140422CA0: mov     ecx, 6A7h
 * 0000000140422CA5: rdmsr
 * 0000000140422CA7: cmp     edx, 0
 * 0000000140422CAA: jz      short loc_140422CBF
 * 0000000140422CAC: mov     ecx, edx
 * 0000000140422CAE: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 0000000140422CB4: cmp     edx, ecx
 * 0000000140422CB6: jz      short loc_140422CBF
 * 0000000140422CB8: mov     ecx, 6A7h
 * 0000000140422CBD: wrmsr
 * 0000000140422CBF: test    byte ptr [r10+3], 3
 * 0000000140422CC4: mov     [rbp+0D8h+var_58], 0
 * 0000000140422CCD: jz      short loc_140422CD4
 * 0000000140422CCF: call    KiSaveDebugRegisterState
 * 0000000140422CD4: cld
 * 0000000140422CD5: stmxcsr [rbp+0D8h+var_12C]
 * 0000000140422CD9: ldmxcsr dword ptr gs:180h
 * 0000000140422CE2: movaps  [rbp+0D8h+var_E8], xmm0
 * 0000000140422CE6: movaps  [rbp+0D8h+var_D8], xmm1
 * 0000000140422CEA: movaps  [rbp+0D8h+var_C8], xmm2
 * 0000000140422CEE: movaps  [rbp+0D8h+var_B8], xmm3
 * 0000000140422CF2: movaps  [rbp+0D8h+var_A8], xmm4
 * 0000000140422CF6: movaps  [rbp+0D8h+var_98], xmm5
 * 0000000140422CFA: cmp     byte ptr gs:82DAh, 0
 * 0000000140422D03: jz      short loc_140422D0A
 * 0000000140422D05: call    KeWakeProcessor
 * 0000000140422D0A: lea     rax, ExpInterlockedPopEntrySListResume
 * 0000000140422D11: cmp     rax, [rbp+0D8h+arg_0]
 * 0000000140422D18: jnb     short loc_140422D33
 * 0000000140422D1A: lea     rax, ExpInterlockedPopEntrySListEnd
 * 0000000140422D21: cmp     rax, [rbp+0D8h+arg_0]
 * 0000000140422D28: jb      short loc_140422D33
 * 0000000140422D2A: lea     rcx, [rbp+0D8h+var_158]
 * 0000000140422D2E: call    KiCheckForSListAddress
 * 0000000140422D33: movzx   eax, byte ptr [rbp+0E0h]
 * 0000000140422D3A: mov     rsi, gs:20h
 * 0000000140422D43: mov     rsi, [rsi+rax*8+3400h]
 * 0000000140422D4B: inc     dword ptr gs:82C0h
 * 0000000140422D53: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 0000000140422D5A: jz      short loc_140422D5F
 * 0000000140422D5C: clac
 * 0000000140422D5F: test    rsi, rsi
 * 0000000140422D62: jz      short loc_140422D6D
 * 0000000140422D64: mov     rax, [rsi+50h]
 * 0000000140422D68: jmp     _guard_dispatch_icall
 * 0000000140422D6D: mov     ecx, eax
 * 0000000140422D6F: shr     ecx, 4
 * 0000000140422D72: cmp     cs:KiIrqlFlags, 0
 * 0000000140422D79: jz      short loc_140422D82
 * 0000000140422D7B: call    KzSetIrqlUnsafe
 * 0000000140422D80: jmp     short loc_140422D8A
 * 0000000140422D82: mov     rax, cr8
 * 0000000140422D86: mov     cr8, rcx
 * 0000000140422D8A: mov     [rbp+0D8h+var_12F], al
 * 0000000140422D8D: mov     rcx, gs:20h
 * 0000000140422D96: inc     byte ptr [rcx+20h]
 * 0000000140422D99: cmp     byte ptr [rcx+20h], 1
 * 0000000140422D9D: jnz     short loc_140422DEF
 * 0000000140422D9F: rdtsc
 * 0000000140422DA1: shl     rdx, 20h
 * 0000000140422DA5: or      rax, rdx
 * 0000000140422DA8: mov     r8, [rcx+8]
 * 0000000140422DAC: sub     rax, [rcx+8180h]
 * 0000000140422DB3: add     [r8+48h], rax
 * 0000000140422DB7: mov     edx, [r8+50h]
 * 0000000140422DBB: add     [rcx+8180h], rax
 * 0000000140422DC2: add     rdx, rax
 * 0000000140422DC5: mov     ecx, edx
 * 0000000140422DC7: shr     rdx, 20h
 * 0000000140422DCB: jz      short loc_140422DD0
 * 0000000140422DCD: or      ecx, 0FFFFFFFFh
 * 0000000140422DD0: mov     [r8+50h], ecx
 * 0000000140422DD4: test    byte ptr [r8+2], 0BEh
 * 0000000140422DD9: jz      short loc_140422DEF
 * 0000000140422DDB: mov     rdx, r8
 * 0000000140422DDE: mov     r8, rax
 * 0000000140422DE1: mov     rcx, gs:20h
 * 0000000140422DEA: call    KiEndThreadAccountingPeriod
 * 0000000140422DEF: sti
 * 0000000140422DF0: test    dword ptr cs:PerfGlobalGroupMask+4, 4000h
 * 0000000140422DFA: jz      short loc_140422E08
 * 0000000140422DFC: movzx   ecx, byte ptr [rbp+0E0h]
 * 0000000140422E03: call    PerfInfoLogUnexpectedInterrupt
 * 0000000140422E08: cmp     cs:KiBugCheckUnexpectedInterrupts, 0
 * 0000000140422E0F: jz      short loc_140422E30
 * 0000000140422E11: and     [rbp+0D8h+var_138], 0
 * 0000000140422E16: xor     r9, r9
 * 0000000140422E19: movzx   r8d, byte ptr [rbp+0E0h]
 * 0000000140422E21: mov     edx, 1
 * 0000000140422E26: mov     ecx, 12h
 * 0000000140422E2B: call    KiBugCheckDispatch
 * 0000000140422E30: cli
 * 0000000140422E31: mov     rcx, rsi
 * 0000000140422E34: call    HalPerformEndOfInterrupt
 * 0000000140422E39: mov     rcx, gs:20h
 * 0000000140422E42: cmp     byte ptr [rcx+20h], 1
 * 0000000140422E46: ja      short loc_140422EC2
 * 0000000140422E48: rdtsc
 * 0000000140422E4A: shl     rdx, 20h
 * 0000000140422E4E: or      rax, rdx
 * 0000000140422E51: sub     rax, [rcx+8180h]
 * 0000000140422E58: add     [rcx+8278h], rax
 * 0000000140422E5F: add     [rcx+8180h], rax
 * 0000000140422E66: mov     r8, rax
 * 0000000140422E69: mov     rax, [rcx+8]
 * 0000000140422E6D: test    byte ptr [rax+2], 72h
 * 0000000140422E71: jz      short loc_140422E86
 * 0000000140422E73: xor     edx, edx
 * 0000000140422E75: call    KiBeginThreadAccountingPeriod
 * 0000000140422E7A: mov     rcx, gs:20h
 * 0000000140422E83: inc     byte ptr [rcx+20h]
 * 0000000140422E86: mov     dl, [rcx+6]
 * 0000000140422E89: and     byte ptr [rcx+6], 0
 * 0000000140422E8D: cmp     byte ptr [rcx+7], 0
 * 0000000140422E91: jnz     short loc_140422EC2
 * 0000000140422E93: test    dl, dl
 * 0000000140422E95: jz      short loc_140422EC2
 * 0000000140422E97: cmp     [rbp+0D8h+var_12F], 2
 * 0000000140422E9B: jnb     short loc_140422EA8
 * 0000000140422E9D: and     byte ptr [rcx+20h], 0
 * 0000000140422EA1: call    KiDpcInterruptBypass
 * 0000000140422EA6: jmp     short loc_140422EC5
 * 0000000140422EA8: mov     ecx, 2
 * 0000000140422EAD: call    cs:__imp_HalRequestSoftwareInterrupt
 * 0000000140422EB4: nop     dword ptr [rax+rax+00h]
 * 0000000140422EB9: mov     rcx, gs:20h
 * 0000000140422EC2: dec     byte ptr [rcx+20h]
 * 0000000140422EC5: movzx   ecx, [rbp+0D8h+var_12F]
 * 0000000140422EC9: cmp     cs:KiIrqlFlags, 0
 * 0000000140422ED0: jz      short loc_140422ED9
 * 0000000140422ED2: call    KzSetIrqlUnsafe
 * 0000000140422ED7: jmp     short loc_140422EDD
 * 0000000140422ED9: mov     cr8, rcx
 * 0000000140422EDD: mov     rsi, [rbp+0D8h+var_8]
 * 0000000140422EE4: cli
 * 0000000140422EE5: test    [rbp+0D8h+arg_8], 1
 * 0000000140422EEC: jz      loc_1404231DA
 * 0000000140422EF2: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 0000000140422EF9: jz      short loc_140422EFE
 * 0000000140422EFB: stac
 * 0000000140422EFE: mov     rcx, gs:188h
 * 0000000140422F07: test    byte ptr [rcx+0C2h], 3
 * 0000000140422F0E: jz      short loc_140422F2B
 * 0000000140422F10: mov     ecx, 1
 * 0000000140422F15: mov     cr8, rcx
 * 0000000140422F19: sti
 * 0000000140422F1A: call    KiInitiateUserApc
 * 0000000140422F1F: cli
 * 0000000140422F20: mov     ecx, 0
 * 0000000140422F25: mov     cr8, rcx
 * 0000000140422F29: jmp     short loc_140422EFE
 * 0000000140422F2B: test    byte ptr gs:86Ch, 2
 * 0000000140422F34: jz      short loc_140422F3D
 * 0000000140422F36: xor     ecx, ecx
 * 0000000140422F38: call    KiUpdateStibpPairing
 * 0000000140422F3D: mov     rcx, gs:188h
 * 0000000140422F46: test    dword ptr [rcx], 8000000h
 * 0000000140422F4C: jz      short loc_140422F53
 * 0000000140422F4E: call    KiRestoreSetContextState
 * 0000000140422F53: mov     rcx, gs:188h
 * 0000000140422F5C: test    dword ptr [rcx], 10000h
 * 0000000140422F62: jz      short loc_140422F78
 * 0000000140422F64: test    byte ptr [rcx+2], 1
 * 0000000140422F68: jz      short loc_140422F78
 * 0000000140422F6A: call    KiCopyCounters
 * 0000000140422F6F: mov     rcx, gs:188h
 * 0000000140422F78: ldmxcsr [rbp+0D8h+var_12C]
 * 0000000140422F7C: cmp     [rbp+0D8h+var_58], 0
 * 0000000140422F84: jz      short loc_140422F8B
 * 0000000140422F86: call    KiRestoreDebugRegisterState
 * 0000000140422F8B: mov     rcx, gs:188h
 * 0000000140422F94: bt      dword ptr [rcx+74h], 16h
 * 0000000140422F99: jnb     short loc_140422FC5
 * 0000000140422F9B: xor     ecx, ecx
 * 0000000140422F9D: rdsspq  rcx
 * 0000000140422FA2: mov     r8, gs:95A8h
 * 0000000140422FAB: add     r8, 8
 * 0000000140422FAF: cmp     rcx, r8
 * 0000000140422FB2: jnz     short loc_140422FC5
 * 0000000140422FB4: mov     rcx, gs:95A0h
 * 0000000140422FBD: rstorssp qword ptr [rcx]
 * 0000000140422FC1: saveprevssp
 * 0000000140422FC5: movaps  xmm0, [rbp+0D8h+var_E8]
 * 0000000140422FC9: movaps  xmm1, [rbp+0D8h+var_D8]
 * 0000000140422FCD: movaps  xmm2, [rbp+0D8h+var_C8]
 * 0000000140422FD1: movaps  xmm3, [rbp+0D8h+var_B8]
 * 0000000140422FD5: movaps  xmm4, [rbp+0D8h+var_A8]
 * 0000000140422FD9: movaps  xmm5, [rbp+0D8h+var_98]
 * 0000000140422FDD: mov     r11, [rbp+0D8h+var_F8]
 * 0000000140422FE1: mov     r10, [rbp+0D8h+var_100]
 * 0000000140422FE5: mov     r9, [rbp+0D8h+var_108]
 * 0000000140422FE9: mov     r8, [rbp+0D8h+var_110]
 * 0000000140422FED: mov     byte ptr gs:856h, 0
 * 0000000140422FF6: movzx   eax, word ptr gs:86Ah
 * 0000000140422FFF: cmp     gs:864h, ax
 * 0000000140423008: jz      short loc_14042301C
 * 000000014042300A: mov     gs:864h, ax
 * 0000000140423013: mov     ecx, 48h ; 'H'
 * 0000000140423018: xor     edx, edx
 * 000000014042301A: wrmsr
 * 000000014042301C: btr     word ptr gs:860h, 2
 * 0000000140423027: jnb     short loc_140423037
 * 0000000140423029: mov     eax, 1
 * 000000014042302E: xor     edx, edx
 * 0000000140423030: mov     ecx, 49h ; 'I'
 * 0000000140423035: wrmsr
 * 0000000140423037: btr     word ptr gs:860h, 5
 * 0000000140423042: jnb     loc_14042317F
 * 0000000140423048: call    loc_14042315B
 * 000000014042304D: add     rsp, 8
 * 0000000140423051: call    loc_140423164
 * 0000000140423056: add     rsp, 8
 * 000000014042305A: call    loc_14042304D
 * 000000014042305F: add     rsp, 8
 * 0000000140423063: call    loc_140423056
 * 0000000140423068: add     rsp, 8
 * 000000014042306C: call    loc_14042305F
 * 0000000140423071: add     rsp, 8
 * 0000000140423075: call    loc_140423068
 * 000000014042307A: add     rsp, 8
 * 000000014042307E: call    loc_140423071
 * 0000000140423083: add     rsp, 8
 * 0000000140423087: call    loc_14042307A
 * 000000014042308C: add     rsp, 8
 * 0000000140423090: call    loc_140423083
 * 0000000140423095: add     rsp, 8
 * 0000000140423099: call    loc_14042308C
 * 000000014042309E: add     rsp, 8
 * 00000001404230A2: call    loc_140423095
 * 00000001404230A7: add     rsp, 8
 * 00000001404230AB: call    loc_14042309E
 * 00000001404230B0: add     rsp, 8
 * 00000001404230B4: call    loc_1404230A7
 * 00000001404230B9: add     rsp, 8
 * 00000001404230BD: call    loc_1404230B0
 * 00000001404230C2: add     rsp, 8
 * 00000001404230C6: call    loc_1404230B9
 * 00000001404230CB: add     rsp, 8
 * 00000001404230CF: call    loc_1404230C2
 * 00000001404230D4: add     rsp, 8
 * 00000001404230D8: call    loc_1404230CB
 * 00000001404230DD: add     rsp, 8
 * 00000001404230E1: call    loc_1404230D4
 * 00000001404230E6: add     rsp, 8
 * 00000001404230EA: call    loc_1404230DD
 * 00000001404230EF: add     rsp, 8
 * 00000001404230F3: call    loc_1404230E6
 * 00000001404230F8: add     rsp, 8
 * 00000001404230FC: call    loc_1404230EF
 * 0000000140423101: add     rsp, 8
 * 0000000140423105: call    loc_1404230F8
 * 000000014042310A: add     rsp, 8
 * 000000014042310E: call    loc_140423101
 * 0000000140423113: add     rsp, 8
 * 0000000140423117: call    loc_14042310A
 * 000000014042311C: add     rsp, 8
 * 0000000140423120: call    loc_140423113
 * 0000000140423125: add     rsp, 8
 * 0000000140423129: call    loc_14042311C
 * 000000014042312E: add     rsp, 8
 * 0000000140423132: call    loc_140423125
 * 0000000140423137: add     rsp, 8
 * 000000014042313B: call    loc_14042312E
 * 0000000140423140: add     rsp, 8
 * 0000000140423144: call    loc_140423137
 * 0000000140423149: add     rsp, 8
 * 000000014042314D: call    loc_140423140
 * 0000000140423152: add     rsp, 8
 * 0000000140423156: call    loc_140423149
 * 000000014042315B: add     rsp, 8
 * 000000014042315F: call    loc_140423152
 * 0000000140423164: add     rsp, 8
 * 0000000140423168: mov     eax, 0DADAh
 * 000000014042316D: test    byte ptr gs:862h, 8
 * 0000000140423176: jz      short loc_14042317F
 * 0000000140423178: mov     al, 20h ; ' '
 * 000000014042317A: incsspq rax
 * 000000014042317F: test    word ptr gs:860h, 80h
 * 000000014042318A: jz      short loc_140423198
 * 000000014042318C: xor     eax, eax
 * 000000014042318E: xor     edx, edx
 * 0000000140423190: mov     ecx, 1
 * 0000000140423195: div     rcx
 * 0000000140423198: mov     rdx, [rbp+0D8h+var_118]
 * 000000014042319C: mov     rcx, [rbp+0D8h+var_120]
 * 00000001404231A0: mov     rax, [rbp+0D8h+var_128]
 * 00000001404231A4: mov     rsp, rbp
 * 00000001404231A7: mov     rbp, [rbp+0D8h+var_s0]
 * 00000001404231AE: add     rsp, 0E8h
 * 00000001404231B5: test    cs:KiKvaShadow, 1
 * 00000001404231BC: jz      short loc_1404231C3
 * 00000001404231BE: jmp     KiKernelExit
 * 00000001404231C3: test    word ptr gs:860h, 100h
 * 00000001404231CE: jz      short loc_1404231D5
 * 00000001404231D0: verw    [rsp-10h+arg_20]
 * 00000001404231D5: swapgs
 * 00000001404231D8: iretq
 * 00000001404231DA: ldmxcsr [rbp+0D8h+var_12C]
 * 00000001404231DE: movaps  xmm0, [rbp+0D8h+var_E8]
 * 00000001404231E2: movaps  xmm1, [rbp+0D8h+var_D8]
 * 00000001404231E6: movaps  xmm2, [rbp+0D8h+var_C8]
 * 00000001404231EA: movaps  xmm3, [rbp+0D8h+var_B8]
 * 00000001404231EE: movaps  xmm4, [rbp+0D8h+var_A8]
 * 00000001404231F2: movaps  xmm5, [rbp+0D8h+var_98]
 * 00000001404231F6: mov     r11, [rbp+0D8h+var_F8]
 * 00000001404231FA: mov     r10, [rbp+0D8h+var_100]
 * 00000001404231FE: mov     r9, [rbp+0D8h+var_108]
 * 0000000140423202: mov     r8, [rbp+0D8h+var_110]
 * 0000000140423206: mov     rdx, [rbp+0D8h+var_118]
 * 000000014042320A: mov     rcx, [rbp+0D8h+var_120]
 * 000000014042320E: mov     rax, [rbp+0D8h+var_128]
 * 0000000140423212: mov     rsp, rbp
 * 0000000140423215: mov     rbp, [rbp+0D8h+var_s0]
 * 000000014042321C: add     rsp, 0E8h
 * 0000000140423223: iretq
 */
