/*
 * XREFs of KiAlignmentFault @ 0x14042FF00
 * Callers:
 *     KiAlignmentFaultShadow @ 0x140AF7940 (KiAlignmentFaultShadow.c)
 * Callees:
 *     KiSaveDebugRegisterState @ 0x14041E8E0 (KiSaveDebugRegisterState.c)
 *     KiAlignmentFault @ 0x14042FF00 (KiAlignmentFault.c)
 *     KiExceptionDispatch @ 0x140434340 (KiExceptionDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140434D00 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiAlignmentFault @ 0x14042FF00
 * Reason: Hex-Rays returned no pseudocode for 0x14042FF00
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014042FF00: push    rbp
 * 000000014042FF01: sub     rsp, 158h
 * 000000014042FF08: lea     rbp, [rsp+80h]
 * 000000014042FF10: mov     [rbp+0D8h+var_12D], 1
 * 000000014042FF14: mov     [rbp+0D8h+var_128], rax
 * 000000014042FF18: mov     [rbp+0D8h+var_120], rcx
 * 000000014042FF1C: mov     [rbp+0D8h+var_118], rdx
 * 000000014042FF20: mov     [rbp+0D8h+var_110], r8
 * 000000014042FF24: mov     [rbp+0D8h+var_108], r9
 * 000000014042FF28: mov     [rbp+0D8h+var_100], r10
 * 000000014042FF2C: mov     [rbp+0D8h+var_F8], r11
 * 000000014042FF30: test    [rbp+0D8h+arg_8], 1
 * 000000014042FF37: jnz     short loc_14042FF73
 * 000000014042FF39: xor     edx, edx
 * 000000014042FF3B: rdsspq  rdx
 * 000000014042FF40: mov     [rbp+0D8h+var_80], rdx
 * 000000014042FF44: lfence
 * 000000014042FF47: test    word ptr gs:860h, 1
 * 000000014042FF52: jnz     short loc_14042FF5C
 * 000000014042FF54: lfence
 * 000000014042FF57: jmp     loc_1404301E3
 * 000000014042FF5C: movzx   eax, word ptr gs:864h
 * 000000014042FF65: mov     ecx, 48h ; 'H'
 * 000000014042FF6A: xor     edx, edx
 * 000000014042FF6C: wrmsr
 * 000000014042FF6E: jmp     loc_1404301E3
 * 000000014042FF73: test    cs:KiKvaShadow, 1
 * 000000014042FF7A: jnz     short loc_14042FF7F
 * 000000014042FF7C: swapgs
 * 000000014042FF7F: lfence
 * 000000014042FF82: mov     rcx, gs:95A8h
 * 000000014042FF8B: test    rcx, rcx
 * 000000014042FF8E: jz      short loc_14042FFAF
 * 000000014042FF90: rdsspq  rdx
 * 000000014042FF95: mov     r10, gs:95A0h
 * 000000014042FF9E: add     r10, 8
 * 000000014042FFA2: cmp     rdx, r10
 * 000000014042FFA5: jnz     short loc_14042FFAF
 * 000000014042FFA7: rstorssp qword ptr [rcx]
 * 000000014042FFAB: saveprevssp
 * 000000014042FFAF: mov     r10, gs:188h
 * 000000014042FFB8: mov     rcx, gs:188h
 * 000000014042FFC1: mov     rcx, [rcx+220h]
 * 000000014042FFC8: mov     rcx, [rcx+9E0h]
 * 000000014042FFCF: mov     gs:858h, rcx
 * 000000014042FFD8: mov     cx, gs:850h
 * 000000014042FFE1: mov     gs:852h, cx
 * 000000014042FFEA: mov     cx, gs:860h
 * 000000014042FFF3: mov     gs:854h, cx
 * 000000014042FFFC: movzx   eax, word ptr gs:866h
 * 0000000140430005: cmp     gs:864h, ax
 * 000000014043000E: jz      short loc_140430022
 * 0000000140430010: mov     gs:864h, ax
 * 0000000140430019: mov     ecx, 48h ; 'H'
 * 000000014043001E: xor     edx, edx
 * 0000000140430020: wrmsr
 * 0000000140430022: movzx   edx, word ptr gs:860h
 * 000000014043002B: test    edx, 8
 * 0000000140430031: jz      short loc_14043004A
 * 0000000140430033: mov     eax, 1
 * 0000000140430038: xor     edx, edx
 * 000000014043003A: mov     ecx, 49h ; 'I'
 * 000000014043003F: wrmsr
 * 0000000140430041: movzx   edx, word ptr gs:860h
 * 000000014043004A: test    edx, 2
 * 0000000140430050: jz      loc_14043018D
 * 0000000140430056: call    loc_140430169
 * 000000014043005B: add     rsp, 8
 * 000000014043005F: call    loc_140430172
 * 0000000140430064: add     rsp, 8
 * 0000000140430068: call    loc_14043005B
 * 000000014043006D: add     rsp, 8
 * 0000000140430071: call    loc_140430064
 * 0000000140430076: add     rsp, 8
 * 000000014043007A: call    loc_14043006D
 * 000000014043007F: add     rsp, 8
 * 0000000140430083: call    loc_140430076
 * 0000000140430088: add     rsp, 8
 * 000000014043008C: call    loc_14043007F
 * 0000000140430091: add     rsp, 8
 * 0000000140430095: call    loc_140430088
 * 000000014043009A: add     rsp, 8
 * 000000014043009E: call    loc_140430091
 * 00000001404300A3: add     rsp, 8
 * 00000001404300A7: call    loc_14043009A
 * 00000001404300AC: add     rsp, 8
 * 00000001404300B0: call    loc_1404300A3
 * 00000001404300B5: add     rsp, 8
 * 00000001404300B9: call    loc_1404300AC
 * 00000001404300BE: add     rsp, 8
 * 00000001404300C2: call    loc_1404300B5
 * 00000001404300C7: add     rsp, 8
 * 00000001404300CB: call    loc_1404300BE
 * 00000001404300D0: add     rsp, 8
 * 00000001404300D4: call    loc_1404300C7
 * 00000001404300D9: add     rsp, 8
 * 00000001404300DD: call    loc_1404300D0
 * 00000001404300E2: add     rsp, 8
 * 00000001404300E6: call    loc_1404300D9
 * 00000001404300EB: add     rsp, 8
 * 00000001404300EF: call    loc_1404300E2
 * 00000001404300F4: add     rsp, 8
 * 00000001404300F8: call    loc_1404300EB
 * 00000001404300FD: add     rsp, 8
 * 0000000140430101: call    loc_1404300F4
 * 0000000140430106: add     rsp, 8
 * 000000014043010A: call    loc_1404300FD
 * 000000014043010F: add     rsp, 8
 * 0000000140430113: call    loc_140430106
 * 0000000140430118: add     rsp, 8
 * 000000014043011C: call    loc_14043010F
 * 0000000140430121: add     rsp, 8
 * 0000000140430125: call    loc_140430118
 * 000000014043012A: add     rsp, 8
 * 000000014043012E: call    loc_140430121
 * 0000000140430133: add     rsp, 8
 * 0000000140430137: call    loc_14043012A
 * 000000014043013C: add     rsp, 8
 * 0000000140430140: call    loc_140430133
 * 0000000140430145: add     rsp, 8
 * 0000000140430149: call    loc_14043013C
 * 000000014043014E: add     rsp, 8
 * 0000000140430152: call    loc_140430145
 * 0000000140430157: add     rsp, 8
 * 000000014043015B: call    loc_14043014E
 * 0000000140430160: add     rsp, 8
 * 0000000140430164: call    loc_140430157
 * 0000000140430169: add     rsp, 8
 * 000000014043016D: call    loc_140430160
 * 0000000140430172: add     rsp, 8
 * 0000000140430176: mov     eax, 0DADAh
 * 000000014043017B: test    byte ptr gs:862h, 8
 * 0000000140430184: jz      short loc_14043018D
 * 0000000140430186: mov     al, 20h ; ' '
 * 0000000140430188: incsspq rax
 * 000000014043018D: test    edx, 200h
 * 0000000140430193: jz      short loc_14043019A
 * 0000000140430195: call    KiFlushBhbDuringTrapEntryOrExit
 * 000000014043019A: lfence
 * 000000014043019D: mov     byte ptr gs:856h, 0
 * 00000001404301A6: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 00000001404301AD: jz      short loc_1404301CE
 * 00000001404301AF: mov     ecx, 6A7h
 * 00000001404301B4: rdmsr
 * 00000001404301B6: cmp     edx, 0
 * 00000001404301B9: jz      short loc_1404301CE
 * 00000001404301BB: mov     ecx, edx
 * 00000001404301BD: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 00000001404301C3: cmp     edx, ecx
 * 00000001404301C5: jz      short loc_1404301CE
 * 00000001404301C7: mov     ecx, 6A7h
 * 00000001404301CC: wrmsr
 * 00000001404301CE: test    byte ptr [r10+3], 3
 * 00000001404301D3: mov     [rbp+0D8h+var_58], 0
 * 00000001404301DC: jz      short loc_1404301E3
 * 00000001404301DE: call    KiSaveDebugRegisterState
 * 00000001404301E3: cld
 * 00000001404301E4: stmxcsr [rbp+0D8h+var_12C]
 * 00000001404301E8: ldmxcsr dword ptr gs:180h
 * 00000001404301F1: movaps  [rbp+0D8h+var_E8], xmm0
 * 00000001404301F5: movaps  [rbp+0D8h+var_D8], xmm1
 * 00000001404301F9: movaps  [rbp+0D8h+var_C8], xmm2
 * 00000001404301FD: movaps  [rbp+0D8h+var_B8], xmm3
 * 0000000140430201: movaps  [rbp+0D8h+var_A8], xmm4
 * 0000000140430205: movaps  [rbp+0D8h+var_98], xmm5
 * 0000000140430209: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 0000000140430210: jz      short loc_14043021E
 * 0000000140430212: test    [rbp+0D8h+arg_8], 1
 * 0000000140430219: jz      short loc_14043021E
 * 000000014043021B: stac
 * 000000014043021E: mov     eax, [rbp+0E0h]
 * 0000000140430224: test    [rbp+0D8h+arg_10], 200h
 * 000000014043022E: jz      short loc_140430231
 * 0000000140430230: sti
 * 0000000140430231: mov     ecx, 80000002h
 * 0000000140430236: xor     edx, edx
 * 0000000140430238: mov     r8, [rbp+0D8h+arg_0]
 * 000000014043023F: call    KiExceptionDispatch
 * 0000000140430244: nop
 * 0000000140430245: retn
 */
