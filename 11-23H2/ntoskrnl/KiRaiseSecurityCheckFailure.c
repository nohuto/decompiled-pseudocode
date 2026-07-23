/*
 * XREFs of KiRaiseSecurityCheckFailure @ 0x140432C80
 * Callers:
 *     KiRaiseSecurityCheckFailureShadow @ 0x140AF6D40 (KiRaiseSecurityCheckFailureShadow.c)
 * Callees:
 *     KiSaveDebugRegisterState @ 0x14041F330 (KiSaveDebugRegisterState.c)
 *     KiRaiseSecurityCheckFailure @ 0x140432C80 (KiRaiseSecurityCheckFailure.c)
 *     KiFastFailDispatch @ 0x140435240 (KiFastFailDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140435700 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiRaiseSecurityCheckFailure @ 0x140432C80
 * Reason: Hex-Rays returned no pseudocode for 0x140432C80
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140432C80: sub     qword ptr [rsp+0], 2
 * 0000000140432C85: cmp     [rsp+arg_0], 23h ; '#'
 * 0000000140432C8B: jnz     short loc_140432C92
 * 0000000140432C8D: and     dword ptr [rsp+4], 0
 * 0000000140432C92: sub     rsp, 8
 * 0000000140432C96: push    rbp
 * 0000000140432C97: sub     rsp, 158h
 * 0000000140432C9E: lea     rbp, [rsp+168h+var_E8]
 * 0000000140432CA6: mov     byte ptr [rbp-55h], 1
 * 0000000140432CAA: mov     [rbp-50h], rax
 * 0000000140432CAE: mov     [rbp-48h], rcx
 * 0000000140432CB2: mov     [rbp-40h], rdx
 * 0000000140432CB6: mov     [rbp-38h], r8
 * 0000000140432CBA: mov     [rbp-30h], r9
 * 0000000140432CBE: mov     [rbp-28h], r10
 * 0000000140432CC2: mov     [rbp-20h], r11
 * 0000000140432CC6: test    byte ptr [rbp+0F0h], 1
 * 0000000140432CCD: jnz     short loc_140432D09
 * 0000000140432CCF: xor     edx, edx
 * 0000000140432CD1: rdsspq  rdx
 * 0000000140432CD6: mov     [rbp+58h], rdx
 * 0000000140432CDA: lfence
 * 0000000140432CDD: test    word ptr gs:860h, 1
 * 0000000140432CE8: jnz     short loc_140432CF2
 * 0000000140432CEA: lfence
 * 0000000140432CED: jmp     loc_140432F79
 * 0000000140432CF2: movzx   eax, word ptr gs:864h
 * 0000000140432CFB: mov     ecx, 48h ; 'H'
 * 0000000140432D00: xor     edx, edx
 * 0000000140432D02: wrmsr
 * 0000000140432D04: jmp     loc_140432F79
 * 0000000140432D09: test    cs:KiKvaShadow, 1
 * 0000000140432D10: jnz     short loc_140432D15
 * 0000000140432D12: swapgs
 * 0000000140432D15: lfence
 * 0000000140432D18: mov     rcx, gs:95A8h
 * 0000000140432D21: test    rcx, rcx
 * 0000000140432D24: jz      short loc_140432D45
 * 0000000140432D26: rdsspq  rdx
 * 0000000140432D2B: mov     r10, gs:95A0h
 * 0000000140432D34: add     r10, 8
 * 0000000140432D38: cmp     rdx, r10
 * 0000000140432D3B: jnz     short loc_140432D45
 * 0000000140432D3D: rstorssp qword ptr [rcx]
 * 0000000140432D41: saveprevssp
 * 0000000140432D45: mov     r10, gs:188h
 * 0000000140432D4E: mov     rcx, gs:188h
 * 0000000140432D57: mov     rcx, [rcx+220h]
 * 0000000140432D5E: mov     rcx, [rcx+9E0h]
 * 0000000140432D65: mov     gs:858h, rcx
 * 0000000140432D6E: mov     cx, gs:850h
 * 0000000140432D77: mov     gs:852h, cx
 * 0000000140432D80: mov     cx, gs:860h
 * 0000000140432D89: mov     gs:854h, cx
 * 0000000140432D92: movzx   eax, word ptr gs:866h
 * 0000000140432D9B: cmp     gs:864h, ax
 * 0000000140432DA4: jz      short loc_140432DB8
 * 0000000140432DA6: mov     gs:864h, ax
 * 0000000140432DAF: mov     ecx, 48h ; 'H'
 * 0000000140432DB4: xor     edx, edx
 * 0000000140432DB6: wrmsr
 * 0000000140432DB8: movzx   edx, word ptr gs:860h
 * 0000000140432DC1: test    edx, 8
 * 0000000140432DC7: jz      short loc_140432DE0
 * 0000000140432DC9: mov     eax, 1
 * 0000000140432DCE: xor     edx, edx
 * 0000000140432DD0: mov     ecx, 49h ; 'I'
 * 0000000140432DD5: wrmsr
 * 0000000140432DD7: movzx   edx, word ptr gs:860h
 * 0000000140432DE0: test    edx, 2
 * 0000000140432DE6: jz      loc_140432F23
 * 0000000140432DEC: call    loc_140432EFF
 * 0000000140432DF1: add     rsp, 8
 * 0000000140432DF5: call    loc_140432F08
 * 0000000140432DFA: add     rsp, 8
 * 0000000140432DFE: call    loc_140432DF1
 * 0000000140432E03: add     rsp, 8
 * 0000000140432E07: call    loc_140432DFA
 * 0000000140432E0C: add     rsp, 8
 * 0000000140432E10: call    loc_140432E03
 * 0000000140432E15: add     rsp, 8
 * 0000000140432E19: call    loc_140432E0C
 * 0000000140432E1E: add     rsp, 8
 * 0000000140432E22: call    loc_140432E15
 * 0000000140432E27: add     rsp, 8
 * 0000000140432E2B: call    loc_140432E1E
 * 0000000140432E30: add     rsp, 8
 * 0000000140432E34: call    loc_140432E27
 * 0000000140432E39: add     rsp, 8
 * 0000000140432E3D: call    loc_140432E30
 * 0000000140432E42: add     rsp, 8
 * 0000000140432E46: call    loc_140432E39
 * 0000000140432E4B: add     rsp, 8
 * 0000000140432E4F: call    loc_140432E42
 * 0000000140432E54: add     rsp, 8
 * 0000000140432E58: call    loc_140432E4B
 * 0000000140432E5D: add     rsp, 8
 * 0000000140432E61: call    loc_140432E54
 * 0000000140432E66: add     rsp, 8
 * 0000000140432E6A: call    loc_140432E5D
 * 0000000140432E6F: add     rsp, 8
 * 0000000140432E73: call    loc_140432E66
 * 0000000140432E78: add     rsp, 8
 * 0000000140432E7C: call    loc_140432E6F
 * 0000000140432E81: add     rsp, 8
 * 0000000140432E85: call    loc_140432E78
 * 0000000140432E8A: add     rsp, 8
 * 0000000140432E8E: call    loc_140432E81
 * 0000000140432E93: add     rsp, 8
 * 0000000140432E97: call    loc_140432E8A
 * 0000000140432E9C: add     rsp, 8
 * 0000000140432EA0: call    loc_140432E93
 * 0000000140432EA5: add     rsp, 8
 * 0000000140432EA9: call    loc_140432E9C
 * 0000000140432EAE: add     rsp, 8
 * 0000000140432EB2: call    loc_140432EA5
 * 0000000140432EB7: add     rsp, 8
 * 0000000140432EBB: call    loc_140432EAE
 * 0000000140432EC0: add     rsp, 8
 * 0000000140432EC4: call    loc_140432EB7
 * 0000000140432EC9: add     rsp, 8
 * 0000000140432ECD: call    loc_140432EC0
 * 0000000140432ED2: add     rsp, 8
 * 0000000140432ED6: call    loc_140432EC9
 * 0000000140432EDB: add     rsp, 8
 * 0000000140432EDF: call    loc_140432ED2
 * 0000000140432EE4: add     rsp, 8
 * 0000000140432EE8: call    loc_140432EDB
 * 0000000140432EED: add     rsp, 8
 * 0000000140432EF1: call    loc_140432EE4
 * 0000000140432EF6: add     rsp, 8
 * 0000000140432EFA: call    loc_140432EED
 * 0000000140432EFF: add     rsp, 8
 * 0000000140432F03: call    loc_140432EF6
 * 0000000140432F08: add     rsp, 8
 * 0000000140432F0C: mov     eax, 0DADAh
 * 0000000140432F11: test    byte ptr gs:862h, 8
 * 0000000140432F1A: jz      short loc_140432F23
 * 0000000140432F1C: mov     al, 20h ; ' '
 * 0000000140432F1E: incsspq rax
 * 0000000140432F23: test    edx, 200h
 * 0000000140432F29: jz      short loc_140432F30
 * 0000000140432F2B: call    KiFlushBhbDuringTrapEntryOrExit
 * 0000000140432F30: lfence
 * 0000000140432F33: mov     byte ptr gs:856h, 0
 * 0000000140432F3C: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 0000000140432F43: jz      short loc_140432F64
 * 0000000140432F45: mov     ecx, 6A7h
 * 0000000140432F4A: rdmsr
 * 0000000140432F4C: cmp     edx, 0
 * 0000000140432F4F: jz      short loc_140432F64
 * 0000000140432F51: mov     ecx, edx
 * 0000000140432F53: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 0000000140432F59: cmp     edx, ecx
 * 0000000140432F5B: jz      short loc_140432F64
 * 0000000140432F5D: mov     ecx, 6A7h
 * 0000000140432F62: wrmsr
 * 0000000140432F64: test    byte ptr [r10+3], 3
 * 0000000140432F69: mov     word ptr [rbp+80h], 0
 * 0000000140432F72: jz      short loc_140432F79
 * 0000000140432F74: call    KiSaveDebugRegisterState
 * 0000000140432F79: cld
 * 0000000140432F7A: stmxcsr dword ptr [rbp-54h]
 * 0000000140432F7E: ldmxcsr dword ptr gs:180h
 * 0000000140432F87: movaps  xmmword ptr [rbp-10h], xmm0
 * 0000000140432F8B: movaps  xmmword ptr [rbp+0], xmm1
 * 0000000140432F8F: movaps  xmmword ptr [rbp+10h], xmm2
 * 0000000140432F93: movaps  xmmword ptr [rbp+20h], xmm3
 * 0000000140432F97: movaps  xmmword ptr [rbp+30h], xmm4
 * 0000000140432F9B: movaps  xmmword ptr [rbp+40h], xmm5
 * 0000000140432F9F: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 0000000140432FA6: jz      short loc_140432FB4
 * 0000000140432FA8: test    byte ptr [rbp+0F0h], 1
 * 0000000140432FAF: jz      short loc_140432FB4
 * 0000000140432FB1: stac
 * 0000000140432FB4: test    dword ptr [rbp+0F8h], 200h
 * 0000000140432FBE: jz      short loc_140432FC1
 * 0000000140432FC0: sti
 * 0000000140432FC1: mov     r9, [rbp-48h]
 * 0000000140432FC5: mov     ecx, 0C0000409h
 * 0000000140432FCA: mov     edx, 1
 * 0000000140432FCF: mov     r8, [rbp+0E8h]
 * 0000000140432FD6: call    KiFastFailDispatch
 * 0000000140432FDB: nop
 * 0000000140432FDC: retn
 */
