// see https://github.com/nohuto/windbg-notes/blob/main/assets/SwapContext.c for a decompilation attempt

/*
 * XREFs of SwapContext @ 0x140427D00
 * Callers:
 *     KiIdleLoop @ 0x140423300 (KiIdleLoop.c)
 *     KiSwapContext @ 0x140427C20 (KiSwapContext.c)
 * Callees:
 *     HalRequestSoftwareInterrupt @ 0x140254BF0 (HalRequestSoftwareInterrupt.c)
 *     KiBeginThreadAccountingPeriod @ 0x140308C80 (KiBeginThreadAccountingPeriod.c)
 *     KiUpdateSpeculationControl @ 0x1403259E0 (KiUpdateSpeculationControl.c)
 *     EtwTraceContextSwap @ 0x140388080 (EtwTraceContextSwap.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1403CCC60 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     HvlNotifyLongSpinWait @ 0x1403CCC90 (HvlNotifyLongSpinWait.c)
 *     KeBugCheckEx @ 0x14041E390 (KeBugCheckEx.c)
 *     SwapContext @ 0x140427D00 (SwapContext.c)
 *     KiClearLastBranchRecordStack @ 0x14045F770 (KiClearLastBranchRecordStack.c)
 *     KeCheckAndApplyBamQos @ 0x140460D10 (KeCheckAndApplyBamQos.c)
 *     HvlSwitchVirtualAddressSpace @ 0x140549930 (HvlSwitchVirtualAddressSpace.c)
 *     KiResetProcessorTraceBuffer @ 0x14056CFC0 (KiResetProcessorTraceBuffer.c)
 *     KiRestoreThreadIptState @ 0x140572D80 (KiRestoreThreadIptState.c)
 *     KiSaveThreadIptState @ 0x140572EB0 (KiSaveThreadIptState.c)
 *     KiCheckAndApplyCacheIsolation @ 0x140576F80 (KiCheckAndApplyCacheIsolation.c)
 */

/*
 * Hex-Rays decompilation failed for SwapContext @ 0x140427D00
 * Reason: Hex-Rays returned no pseudocode for 0x140427D00
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140427D00: push    rbp
 * 0000000140427D02: sub     rsp, 30h
 * 0000000140427D06: prefetchw byte ptr [rsi+71h]
 * 0000000140427D0A: mov     [rsp+38h+var_10], cl
 * 0000000140427D0E: cmp     byte ptr [rsi+71h], 0
 * 0000000140427D12: jnz     loc_14042839F
 * 0000000140427D18: mov     byte ptr [rsi+71h], 1
 * 0000000140427D1C: mov     eax, cs:KiHresetMask
 * 0000000140427D22: test    eax, eax
 * 0000000140427D24: jz      short loc_140427D2C
 * 0000000140427D26: hreset  0
 * 0000000140427D2C: cli
 * 0000000140427D2D: rdtsc
 * 0000000140427D2F: shl     rdx, 20h
 * 0000000140427D33: or      rax, rdx
 * 0000000140427D36: sub     rax, [rbx+8180h]
 * 0000000140427D3D: add     [rbx+8278h], rax
 * 0000000140427D44: add     [rbx+8180h], rax
 * 0000000140427D4B: mov     r12, rax
 * 0000000140427D4E: test    byte ptr [rbx+6], 0FFh
 * 0000000140427D52: jz      short loc_140427D6F
 * 0000000140427D54: and     byte ptr [rbx+6], 0
 * 0000000140427D58: cmp     [rbx+18h], rsi
 * 0000000140427D5C: jz      short loc_140427D6F
 * 0000000140427D5E: mov     ecx, 2
 * 0000000140427D63: call    cs:__imp_HalRequestSoftwareInterrupt
 * 0000000140427D6A: nop     dword ptr [rax+rax+00h]
 * 0000000140427D6F: test    byte ptr [rsi+2], 0B6h
 * 0000000140427D73: jnz     loc_14042831D
 * 0000000140427D79: dec     byte ptr [rbx+20h]
 * 0000000140427D7C: sti
 * 0000000140427D7D: inc     dword ptr [rbx+2D3Ch]
 * 0000000140427D83: mov     rbp, cs:KeFeatureBits
 * 0000000140427D8A: cmp     cs:KiCacheIsoBitmap, 0
 * 0000000140427D91: jz      short loc_140427DA5
 * 0000000140427D93: bt      rbp, 2Ch ; ','
 * 0000000140427D98: jnb     short loc_140427DA5
 * 0000000140427D9A: mov     rcx, rbx
 * 0000000140427D9D: mov     rdx, rsi
 * 0000000140427DA0: call    KiCheckAndApplyCacheIsolation
 * 0000000140427DA5: cmp     [rbx+18h], rsi
 * 0000000140427DA9: jz      short loc_140427DCB
 * 0000000140427DAB: mov     ecx, [rsi+200h]
 * 0000000140427DB1: mov     eax, [rbx+0ECh]
 * 0000000140427DB7: xor     eax, ecx
 * 0000000140427DB9: test    eax, 0FFh
 * 0000000140427DBE: jz      short loc_140427DCB
 * 0000000140427DC0: mov     rcx, rbx
 * 0000000140427DC3: mov     rdx, rsi
 * 0000000140427DC6: call    KeCheckAndApplyBamQos
 * 0000000140427DCB: mov     rdx, [rdi+250h]
 * 0000000140427DD2: mov     rcx, [rdi+60h]
 * 0000000140427DD6: and     rdx, 0FFFFFFFFFFFFFFFDh
 * 0000000140427DDA: mov     eax, edx
 * 0000000140427DDC: jz      short loc_140427E08
 * 0000000140427DDE: shr     rdx, 20h
 * 0000000140427DE2: bt      rbp, 26h ; '&'
 * 0000000140427DE7: jb      short loc_140427E00
 * 0000000140427DE9: bt      rbp, 0Fh
 * 0000000140427DEE: jb      short loc_140427E05
 * 0000000140427DF0: bt      ebp, 17h
 * 0000000140427DF4: jnb     short loc_140427DFB
 * 0000000140427DF6: xsave   byte ptr [rcx]
 * 0000000140427DF9: jmp     short loc_140427E08
 * 0000000140427DFB: fxsave  dword ptr [rcx]
 * 0000000140427DFE: jmp     short loc_140427E08
 * 0000000140427E00: xsaves  byte ptr [rcx]
 * 0000000140427E03: jmp     short loc_140427E08
 * 0000000140427E05: xsaveopt byte ptr [rcx]
 * 0000000140427E08: stmxcsr dword ptr [rcx+18h]
 * 0000000140427E0C: test    eax, 100h
 * 0000000140427E11: jz      short loc_140427E24
 * 0000000140427E13: cmp     cs:KiIptMsrMask, 0
 * 0000000140427E1A: jz      short loc_140427E24
 * 0000000140427E1C: mov     rcx, rdi
 * 0000000140427E1F: call    KiSaveThreadIptState
 * 0000000140427E24: mov     [rdi+58h], rsp
 * 0000000140427E28: mov     rsp, [rsi+58h]
 * 0000000140427E2C: test    cs:KiKernelCetEnabled, 1
 * 0000000140427E33: jz      short loc_140427E62
 * 0000000140427E35: mov     rcx, [rsi+410h]
 * 0000000140427E3C: mov     [rbx+9428h], rcx
 * 0000000140427E43: rdsspq  rdx
 * 0000000140427E48: mov     rcx, [rsi+408h]
 * 0000000140427E4F: rstorssp qword ptr [rcx]
 * 0000000140427E53: saveprevssp
 * 0000000140427E57: sub     rdx, 8
 * 0000000140427E5B: mov     [rdi+408h], rdx
 * 0000000140427E62: mov     rax, [rdi+220h]
 * 0000000140427E69: cmp     qword ptr [rax+580h], 0
 * 0000000140427E71: jz      short loc_140427E86
 * 0000000140427E73: mov     ecx, 0C0000100h
 * 0000000140427E78: rdmsr
 * 0000000140427E7A: mov     [rdi+638h], eax
 * 0000000140427E80: mov     [rdi+63Ch], edx
 * 0000000140427E86: btr     dword ptr gs:856h, 0
 * 0000000140427E90: jnb     short loc_140427E96
 * 0000000140427E92: or      byte ptr [rdi+7Fh], 2
 * 0000000140427E96: btr     dword ptr [rsi+7Fh], 1
 * 0000000140427E9B: jnb     short loc_140427EA6
 * 0000000140427E9D: or      byte ptr gs:856h, 1
 * 0000000140427EA6: mov     rcx, [rsi+220h]
 * 0000000140427EAD: or      cl, [rbx+6ECh]
 * 0000000140427EB3: and     cl, 0C2h
 * 0000000140427EB6: cmp     rcx, [rdi+220h]
 * 0000000140427EBD: jz      short loc_140427ECC
 * 0000000140427EBF: and     cl, 0C0h
 * 0000000140427EC2: call    KiUpdateSpeculationControl
 * 0000000140427EC7: jmp     loc_140428082
 * 0000000140427ECC: movzx   ecx, byte ptr gs:856h
 * 0000000140427ED5: and     cx, 3
 * 0000000140427ED9: cmp     cx, 1
 * 0000000140427EDD: jnz     loc_140428082
 * 0000000140427EE3: cli
 * 0000000140427EE4: movzx   eax, word ptr gs:852h
 * 0000000140427EED: cmp     gs:864h, ax
 * 0000000140427EF6: jz      short loc_140427F0A
 * 0000000140427EF8: mov     gs:864h, ax
 * 0000000140427F01: mov     ecx, 48h ; 'H'
 * 0000000140427F06: xor     edx, edx
 * 0000000140427F08: wrmsr
 * 0000000140427F0A: movzx   edx, byte ptr gs:854h
 * 0000000140427F13: test    edx, 10h
 * 0000000140427F19: jz      short loc_140427F32
 * 0000000140427F1B: mov     eax, 1
 * 0000000140427F20: xor     edx, edx
 * 0000000140427F22: mov     ecx, 49h ; 'I'
 * 0000000140427F27: wrmsr
 * 0000000140427F29: movzx   edx, byte ptr gs:854h
 * 0000000140427F32: test    edx, 40h
 * 0000000140427F38: jz      loc_140428075
 * 0000000140427F3E: call    loc_140428051
 * 0000000140427F43: add     rsp, 8
 * 0000000140427F47: call    loc_14042805A
 * 0000000140427F4C: add     rsp, 8
 * 0000000140427F50: call    loc_140427F43
 * 0000000140427F55: add     rsp, 8
 * 0000000140427F59: call    loc_140427F4C
 * 0000000140427F5E: add     rsp, 8
 * 0000000140427F62: call    loc_140427F55
 * 0000000140427F67: add     rsp, 8
 * 0000000140427F6B: call    loc_140427F5E
 * 0000000140427F70: add     rsp, 8
 * 0000000140427F74: call    loc_140427F67
 * 0000000140427F79: add     rsp, 8
 * 0000000140427F7D: call    loc_140427F70
 * 0000000140427F82: add     rsp, 8
 * 0000000140427F86: call    loc_140427F79
 * 0000000140427F8B: add     rsp, 8
 * 0000000140427F8F: call    loc_140427F82
 * 0000000140427F94: add     rsp, 8
 * 0000000140427F98: call    loc_140427F8B
 * 0000000140427F9D: add     rsp, 8
 * 0000000140427FA1: call    loc_140427F94
 * 0000000140427FA6: add     rsp, 8
 * 0000000140427FAA: call    loc_140427F9D
 * 0000000140427FAF: add     rsp, 8
 * 0000000140427FB3: call    loc_140427FA6
 * 0000000140427FB8: add     rsp, 8
 * 0000000140427FBC: call    loc_140427FAF
 * 0000000140427FC1: add     rsp, 8
 * 0000000140427FC5: call    loc_140427FB8
 * 0000000140427FCA: add     rsp, 8
 * 0000000140427FCE: call    loc_140427FC1
 * 0000000140427FD3: add     rsp, 8
 * 0000000140427FD7: call    loc_140427FCA
 * 0000000140427FDC: add     rsp, 8
 * 0000000140427FE0: call    loc_140427FD3
 * 0000000140427FE5: add     rsp, 8
 * 0000000140427FE9: call    loc_140427FDC
 * 0000000140427FEE: add     rsp, 8
 * 0000000140427FF2: call    loc_140427FE5
 * 0000000140427FF7: add     rsp, 8
 * 0000000140427FFB: call    loc_140427FEE
 * 0000000140428000: add     rsp, 8
 * 0000000140428004: call    loc_140427FF7
 * 0000000140428009: add     rsp, 8
 * 000000014042800D: call    loc_140428000
 * 0000000140428012: add     rsp, 8
 * 0000000140428016: call    loc_140428009
 * 000000014042801B: add     rsp, 8
 * 000000014042801F: call    loc_140428012
 * 0000000140428024: add     rsp, 8
 * 0000000140428028: call    loc_14042801B
 * 000000014042802D: add     rsp, 8
 * 0000000140428031: call    loc_140428024
 * 0000000140428036: add     rsp, 8
 * 000000014042803A: call    loc_14042802D
 * 000000014042803F: add     rsp, 8
 * 0000000140428043: call    loc_140428036
 * 0000000140428048: add     rsp, 8
 * 000000014042804C: call    loc_14042803F
 * 0000000140428051: add     rsp, 8
 * 0000000140428055: call    loc_140428048
 * 000000014042805A: add     rsp, 8
 * 000000014042805E: mov     eax, 0DADAh
 * 0000000140428063: test    byte ptr gs:862h, 8
 * 000000014042806C: jz      short loc_140428075
 * 000000014042806E: mov     al, 20h ; ' '
 * 0000000140428070: incsspq rax
 * 0000000140428075: lfence
 * 0000000140428078: or      byte ptr gs:856h, 2
 * 0000000140428081: sti
 * 0000000140428082: mov     r14, [rsi+0B8h]
 * 0000000140428089: cmp     r14, [rdi+0B8h]
 * 0000000140428090: jz      loc_14042814D
 * 0000000140428096: movzx   ecx, byte ptr [rbx+0D1h]
 * 000000014042809D: movzx   eax, byte ptr [rbx+0D0h]
 * 00000001404280A4: lock bts [r14+rax*8+178h], rcx
 * 00000001404280AE: mov     rcx, [r14+28h]
 * 00000001404280B2: test    cs:KiKvaShadow, 1
 * 00000001404280B9: jz      short loc_1404280F4
 * 00000001404280BB: cli
 * 00000001404280BC: bt      ecx, 1
 * 00000001404280C0: jnb     short loc_1404280CE
 * 00000001404280C2: bts     rcx, 3Fh ; '?'
 * 00000001404280C7: or      dword ptr [rbx+9E98h], 1
 * 00000001404280CE: mov     [rbx+9E80h], rcx
 * 00000001404280D5: btr     rcx, 3Fh ; '?'
 * 00000001404280DA: and     dword ptr [rbx+9E98h], 0FFFFFFFDh
 * 00000001404280E1: bt      dword ptr [r14+390h], 0
 * 00000001404280EA: jnb     short loc_1404280F3
 * 00000001404280EC: xor     dword ptr [rbx+9E98h], 3
 * 00000001404280F3: sti
 * 00000001404280F4: test    cs:HvlEnlightenments, 1
 * 00000001404280FE: jz      short loc_140428107
 * 0000000140428100: call    HvlSwitchVirtualAddressSpace
 * 0000000140428105: jmp     short loc_14042812E
 * 0000000140428107: mov     cr3, rcx
 * 000000014042810A: test    cs:KiKvaShadow, 1
 * 0000000140428111: jz      short loc_14042812E
 * 0000000140428113: bt      ecx, 1
 * 0000000140428117: jb      short loc_14042812E
 * 0000000140428119: mov     rax, cr4
 * 000000014042811C: xor     rax, 80h
 * 0000000140428122: mov     cr4, rax
 * 0000000140428125: xor     rax, 80h
 * 000000014042812B: mov     cr4, rax
 * 000000014042812E: movzx   ecx, byte ptr [rbx+0D1h]
 * 0000000140428135: movzx   eax, byte ptr [rbx+0D0h]
 * 000000014042813C: mov     rdx, [rdi+0B8h]
 * 0000000140428143: lock btr [rdx+rax*8+178h], rcx
 * 000000014042814D: mov     rax, [rsi+28h]
 * 0000000140428151: test    cs:KiKvaShadow, 1
 * 0000000140428158: jnz     short loc_140428167
 * 000000014042815A: mov     r15, [rbx-178h]
 * 0000000140428161: mov     [r15+4], rax
 * 0000000140428165: jmp     short loc_14042816E
 * 0000000140428167: mov     [rbx+9E88h], rax
 * 000000014042816E: mov     [rbx+28h], rax
 * 0000000140428172: test    rax, rax
 * 0000000140428175: jge     loc_140428387
 * 000000014042817B: cmp     cs:KiCpuTracingFlags, 0
 * 0000000140428182: jnz     loc_140428330
 * 0000000140428188: bt      rbp, 37h ; '7'
 * 000000014042818D: jnb     short loc_1404281AF
 * 000000014042818F: mov     ecx, 1C4h
 * 0000000140428194: mov     rax, [rdi+428h]
 * 000000014042819B: mov     rdx, [rsi+428h]
 * 00000001404281A2: cmp     rax, rdx
 * 00000001404281A5: jz      short loc_1404281AF
 * 00000001404281A7: mov     eax, edx
 * 00000001404281A9: shr     rdx, 20h
 * 00000001404281AD: wrmsr
 * 00000001404281AF: mov     rdx, [rdi+250h]
 * 00000001404281B6: mov     rax, rdx
 * 00000001404281B9: and     rax, 40000h
 * 00000001404281BF: and     rdx, cs:KeEnabledSupervisorXStateFeatures
 * 00000001404281C6: or      rdx, rax
 * 00000001404281C9: or      rdx, [rsi+250h]
 * 00000001404281D0: mov     byte ptr [rdi+71h], 0
 * 00000001404281D4: mov     rcx, [rsi+60h]
 * 00000001404281D8: and     rdx, 0FFFFFFFFFFFFFFFDh
 * 00000001404281DC: mov     eax, edx
 * 00000001404281DE: jz      short loc_14042820B
 * 00000001404281E0: shr     rdx, 20h
 * 00000001404281E4: bt      rbp, 29h ; ')'
 * 00000001404281E9: jnb     short loc_1404281F1
 * 00000001404281EB: test    al, 1
 * 00000001404281ED: jz      short loc_1404281F1
 * 00000001404281EF: fninit
 * 00000001404281F1: bt      rbp, 26h ; '&'
 * 00000001404281F6: jb      short loc_140428203
 * 00000001404281F8: bt      ebp, 17h
 * 00000001404281FC: jb      short loc_140428208
 * 00000001404281FE: fxrstor dword ptr [rcx]
 * 0000000140428201: jmp     short loc_14042820B
 * 0000000140428203: xrstors byte ptr [rcx]
 * 0000000140428206: jmp     short loc_14042820B
 * 0000000140428208: xrstor  byte ptr [rcx]
 * 000000014042820B: ldmxcsr dword ptr [rcx+18h]
 * 000000014042820F: test    eax, 100h
 * 0000000140428214: jz      short loc_140428227
 * 0000000140428216: cmp     cs:KiIptMsrMask, 0
 * 000000014042821D: jz      short loc_140428227
 * 000000014042821F: mov     rcx, rsi
 * 0000000140428222: call    KiRestoreThreadIptState
 * 0000000140428227: bt      dword ptr [rsi+74h], 0Ah
 * 000000014042822C: jb      loc_1404282D2
 * 0000000140428232: mov     rax, [rsi+220h]
 * 0000000140428239: cmp     qword ptr [rax+580h], 0
 * 0000000140428241: mov     eax, [rsi+638h]
 * 0000000140428247: jz      short loc_140428254
 * 0000000140428249: mov     eax, [rsi+0F0h]
 * 000000014042824F: add     eax, 2000h
 * 0000000140428254: mov     rcx, [rbx-180h]
 * 000000014042825B: mov     [rcx+52h], ax
 * 000000014042825F: shr     eax, 10h
 * 0000000140428262: mov     [rcx+54h], al
 * 0000000140428265: mov     [rcx+57h], ah
 * 0000000140428268: mov     eax, 53h ; 'S'
 * 000000014042826D: mov     fs, eax
 * 000000014042826F: mov     eax, [rsi+638h]
 * 0000000140428275: mov     edx, [rsi+63Ch]
 * 000000014042827B: mov     ecx, 0C0000100h
 * 0000000140428280: wrmsr
 * 0000000140428282: mov     eax, ds
 * 0000000140428284: mov     edx, es
 * 0000000140428286: and     eax, edx
 * 0000000140428288: mov     edx, gs
 * 000000014042828A: and     eax, edx
 * 000000014042828C: cmp     ax, 2Bh ; '+'
 * 0000000140428290: jz      short loc_1404282A5
 * 0000000140428292: mov     edx, 2Bh ; '+'
 * 0000000140428297: mov     ds, edx
 * 0000000140428299: mov     es, edx
 * 000000014042829B: cli
 * 000000014042829C: swapgs
 * 000000014042829F: mov     gs, edx
 * 00000001404282A1: swapgs
 * 00000001404282A4: sti
 * 00000001404282A5: mov     rax, [rsi+0F0h]
 * 00000001404282AC: mov     edx, [rsi+0F4h]
 * 00000001404282B2: mov     [rbx-150h], rax
 * 00000001404282B9: test    byte ptr [rsi+3], 4
 * 00000001404282BD: jz      short loc_1404282CB
 * 00000001404282BF: mov     eax, [rsi+640h]
 * 00000001404282C5: mov     edx, [rsi+644h]
 * 00000001404282CB: mov     ecx, 0C0000102h
 * 00000001404282D0: wrmsr
 * 00000001404282D2: test    dword ptr [rbx+33BCh], 10001h
 * 00000001404282DC: jnz     loc_14042836E
 * 00000001404282E2: inc     dword ptr [rsi+154h]
 * 00000001404282E8: cmp     byte ptr [rsi+0C1h], 1
 * 00000001404282EF: jnz     short loc_140428314
 * 00000001404282F1: movzx   ax, [rsp+38h+var_10]
 * 00000001404282F7: or      ax, [rsi+1E6h]
 * 00000001404282FE: jz      short loc_140428314
 * 0000000140428300: mov     ecx, 1
 * 0000000140428305: call    cs:__imp_HalRequestSoftwareInterrupt
 * 000000014042830C: nop     dword ptr [rax+rax+00h]
 * 0000000140428311: or      rcx, rsp
 * 0000000140428314: setz    al
 * 0000000140428317: add     rsp, 30h
 * 000000014042831B: pop     rbp
 * 000000014042831C: retn
 * 000000014042831D: mov     rcx, rbx
 * 0000000140428320: mov     rdx, rsi
 * 0000000140428323: mov     r8, r12
 * 0000000140428326: call    KiBeginThreadAccountingPeriod
 * 000000014042832B: jmp     loc_140427D7D
 * 0000000140428330: test    dword ptr cs:PerfGlobalGroupMask+4, 4
 * 000000014042833A: jz      short loc_140428347
 * 000000014042833C: mov     rcx, rdi
 * 000000014042833F: mov     rdx, rsi
 * 0000000140428342: call    EtwTraceContextSwap
 * 0000000140428347: test    cs:KiCpuTracingFlags, 2
 * 0000000140428351: jz      short loc_140428358
 * 0000000140428353: call    KiClearLastBranchRecordStack
 * 0000000140428358: test    cs:KiCpuTracingFlags, 4
 * 0000000140428362: jz      short loc_140428369
 * 0000000140428364: call    KiResetProcessorTraceBuffer
 * 0000000140428369: jmp     loc_140428188
 * 000000014042836E: xor     r9, r9; BugCheckParameter3
 * 0000000140428371: mov     [rsp+38h+BugCheckParameter4], r9; BugCheckParameter4
 * 0000000140428376: mov     r8, rsi; BugCheckParameter2
 * 0000000140428379: mov     rdx, rdi; BugCheckParameter1
 * 000000014042837C: mov     ecx, 0B8h; BugCheckCode
 * 0000000140428381: call    KeBugCheckEx
 * 0000000140428387: xor     r9, r9; BugCheckParameter3
 * 000000014042838A: mov     [rsp+38h+BugCheckParameter4], r9; BugCheckParameter4
 * 000000014042838F: mov     r8, rsi; BugCheckParameter2
 * 0000000140428392: mov     rdx, rdi; BugCheckParameter1
 * 0000000140428395: mov     ecx, 1CEh; BugCheckCode
 * 000000014042839A: call    KeBugCheckEx
 * 000000014042839F: xor     ebp, ebp
 * 00000001404283A1: inc     ebp
 * 00000001404283A3: test    cs:HvlLongSpinCountMask, ebp
 * 00000001404283A9: jnz     short loc_1404283C7
 * 00000001404283AB: test    cs:HvlEnlightenments, 40h
 * 00000001404283B5: jz      short loc_1404283C7
 * 00000001404283B7: call    KiCheckVpBackingLongSpinWaitHypercall
 * 00000001404283BC: test    al, al
 * 00000001404283BE: jz      short loc_1404283C7
 * 00000001404283C0: mov     ecx, ebp
 * 00000001404283C2: call    HvlNotifyLongSpinWait
 * 00000001404283C7: pause
 * 00000001404283C9: cmp     byte ptr [rsi+71h], 0
 * 00000001404283CD: jz      loc_140427D18
 * 00000001404283D3: jmp     short loc_1404283A1
 */
