/*
 * XREFs of KiGeneralProtectionFault @ 0x14042EF80
 * Callers:
 *     KiGeneralProtectionFaultShadow @ 0x140AF77C0 (KiGeneralProtectionFaultShadow.c)
 * Callees:
 *     KiSaveDebugRegisterState @ 0x14041E8E0 (KiSaveDebugRegisterState.c)
 *     KiGeneralProtectionFault @ 0x14042EF80 (KiGeneralProtectionFault.c)
 *     KiExceptionDispatch @ 0x140434340 (KiExceptionDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140434D00 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiGeneralProtectionFault @ 0x14042EF80
 * Reason: Hex-Rays returned no pseudocode for 0x14042EF80
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014042EF80: push    rbp
 * 000000014042EF81: sub     rsp, 158h
 * 000000014042EF88: lea     rbp, [rsp+80h]
 * 000000014042EF90: mov     [rbp+0D8h+var_12D], 1
 * 000000014042EF94: mov     [rbp+0D8h+var_128], rax
 * 000000014042EF98: mov     [rbp+0D8h+var_120], rcx
 * 000000014042EF9C: mov     [rbp+0D8h+var_118], rdx
 * 000000014042EFA0: mov     [rbp+0D8h+var_110], r8
 * 000000014042EFA4: mov     [rbp+0D8h+var_108], r9
 * 000000014042EFA8: mov     [rbp+0D8h+var_100], r10
 * 000000014042EFAC: mov     [rbp+0D8h+var_F8], r11
 * 000000014042EFB0: test    [rbp+0D8h+arg_8], 1
 * 000000014042EFB7: jnz     short loc_14042EFF3
 * 000000014042EFB9: xor     edx, edx
 * 000000014042EFBB: rdsspq  rdx
 * 000000014042EFC0: mov     [rbp+0D8h+var_80], rdx
 * 000000014042EFC4: lfence
 * 000000014042EFC7: test    word ptr gs:860h, 1
 * 000000014042EFD2: jnz     short loc_14042EFDC
 * 000000014042EFD4: lfence
 * 000000014042EFD7: jmp     loc_14042F263
 * 000000014042EFDC: movzx   eax, word ptr gs:864h
 * 000000014042EFE5: mov     ecx, 48h ; 'H'
 * 000000014042EFEA: xor     edx, edx
 * 000000014042EFEC: wrmsr
 * 000000014042EFEE: jmp     loc_14042F263
 * 000000014042EFF3: test    cs:KiKvaShadow, 1
 * 000000014042EFFA: jnz     short loc_14042EFFF
 * 000000014042EFFC: swapgs
 * 000000014042EFFF: lfence
 * 000000014042F002: mov     rcx, gs:95A8h
 * 000000014042F00B: test    rcx, rcx
 * 000000014042F00E: jz      short loc_14042F02F
 * 000000014042F010: rdsspq  rdx
 * 000000014042F015: mov     r10, gs:95A0h
 * 000000014042F01E: add     r10, 8
 * 000000014042F022: cmp     rdx, r10
 * 000000014042F025: jnz     short loc_14042F02F
 * 000000014042F027: rstorssp qword ptr [rcx]
 * 000000014042F02B: saveprevssp
 * 000000014042F02F: mov     r10, gs:188h
 * 000000014042F038: mov     rcx, gs:188h
 * 000000014042F041: mov     rcx, [rcx+220h]
 * 000000014042F048: mov     rcx, [rcx+9E0h]
 * 000000014042F04F: mov     gs:858h, rcx
 * 000000014042F058: mov     cx, gs:850h
 * 000000014042F061: mov     gs:852h, cx
 * 000000014042F06A: mov     cx, gs:860h
 * 000000014042F073: mov     gs:854h, cx
 * 000000014042F07C: movzx   eax, word ptr gs:866h
 * 000000014042F085: cmp     gs:864h, ax
 * 000000014042F08E: jz      short loc_14042F0A2
 * 000000014042F090: mov     gs:864h, ax
 * 000000014042F099: mov     ecx, 48h ; 'H'
 * 000000014042F09E: xor     edx, edx
 * 000000014042F0A0: wrmsr
 * 000000014042F0A2: movzx   edx, word ptr gs:860h
 * 000000014042F0AB: test    edx, 8
 * 000000014042F0B1: jz      short loc_14042F0CA
 * 000000014042F0B3: mov     eax, 1
 * 000000014042F0B8: xor     edx, edx
 * 000000014042F0BA: mov     ecx, 49h ; 'I'
 * 000000014042F0BF: wrmsr
 * 000000014042F0C1: movzx   edx, word ptr gs:860h
 * 000000014042F0CA: test    edx, 2
 * 000000014042F0D0: jz      loc_14042F20D
 * 000000014042F0D6: call    loc_14042F1E9
 * 000000014042F0DB: add     rsp, 8
 * 000000014042F0DF: call    loc_14042F1F2
 * 000000014042F0E4: add     rsp, 8
 * 000000014042F0E8: call    loc_14042F0DB
 * 000000014042F0ED: add     rsp, 8
 * 000000014042F0F1: call    loc_14042F0E4
 * 000000014042F0F6: add     rsp, 8
 * 000000014042F0FA: call    loc_14042F0ED
 * 000000014042F0FF: add     rsp, 8
 * 000000014042F103: call    loc_14042F0F6
 * 000000014042F108: add     rsp, 8
 * 000000014042F10C: call    loc_14042F0FF
 * 000000014042F111: add     rsp, 8
 * 000000014042F115: call    loc_14042F108
 * 000000014042F11A: add     rsp, 8
 * 000000014042F11E: call    loc_14042F111
 * 000000014042F123: add     rsp, 8
 * 000000014042F127: call    loc_14042F11A
 * 000000014042F12C: add     rsp, 8
 * 000000014042F130: call    loc_14042F123
 * 000000014042F135: add     rsp, 8
 * 000000014042F139: call    loc_14042F12C
 * 000000014042F13E: add     rsp, 8
 * 000000014042F142: call    loc_14042F135
 * 000000014042F147: add     rsp, 8
 * 000000014042F14B: call    loc_14042F13E
 * 000000014042F150: add     rsp, 8
 * 000000014042F154: call    loc_14042F147
 * 000000014042F159: add     rsp, 8
 * 000000014042F15D: call    loc_14042F150
 * 000000014042F162: add     rsp, 8
 * 000000014042F166: call    loc_14042F159
 * 000000014042F16B: add     rsp, 8
 * 000000014042F16F: call    loc_14042F162
 * 000000014042F174: add     rsp, 8
 * 000000014042F178: call    loc_14042F16B
 * 000000014042F17D: add     rsp, 8
 * 000000014042F181: call    loc_14042F174
 * 000000014042F186: add     rsp, 8
 * 000000014042F18A: call    loc_14042F17D
 * 000000014042F18F: add     rsp, 8
 * 000000014042F193: call    loc_14042F186
 * 000000014042F198: add     rsp, 8
 * 000000014042F19C: call    loc_14042F18F
 * 000000014042F1A1: add     rsp, 8
 * 000000014042F1A5: call    loc_14042F198
 * 000000014042F1AA: add     rsp, 8
 * 000000014042F1AE: call    loc_14042F1A1
 * 000000014042F1B3: add     rsp, 8
 * 000000014042F1B7: call    loc_14042F1AA
 * 000000014042F1BC: add     rsp, 8
 * 000000014042F1C0: call    loc_14042F1B3
 * 000000014042F1C5: add     rsp, 8
 * 000000014042F1C9: call    loc_14042F1BC
 * 000000014042F1CE: add     rsp, 8
 * 000000014042F1D2: call    loc_14042F1C5
 * 000000014042F1D7: add     rsp, 8
 * 000000014042F1DB: call    loc_14042F1CE
 * 000000014042F1E0: add     rsp, 8
 * 000000014042F1E4: call    loc_14042F1D7
 * 000000014042F1E9: add     rsp, 8
 * 000000014042F1ED: call    loc_14042F1E0
 * 000000014042F1F2: add     rsp, 8
 * 000000014042F1F6: mov     eax, 0DADAh
 * 000000014042F1FB: test    byte ptr gs:862h, 8
 * 000000014042F204: jz      short loc_14042F20D
 * 000000014042F206: mov     al, 20h ; ' '
 * 000000014042F208: incsspq rax
 * 000000014042F20D: test    edx, 200h
 * 000000014042F213: jz      short loc_14042F21A
 * 000000014042F215: call    KiFlushBhbDuringTrapEntryOrExit
 * 000000014042F21A: lfence
 * 000000014042F21D: mov     byte ptr gs:856h, 0
 * 000000014042F226: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 000000014042F22D: jz      short loc_14042F24E
 * 000000014042F22F: mov     ecx, 6A7h
 * 000000014042F234: rdmsr
 * 000000014042F236: cmp     edx, 0
 * 000000014042F239: jz      short loc_14042F24E
 * 000000014042F23B: mov     ecx, edx
 * 000000014042F23D: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 000000014042F243: cmp     edx, ecx
 * 000000014042F245: jz      short loc_14042F24E
 * 000000014042F247: mov     ecx, 6A7h
 * 000000014042F24C: wrmsr
 * 000000014042F24E: test    byte ptr [r10+3], 3
 * 000000014042F253: mov     [rbp+0D8h+var_58], 0
 * 000000014042F25C: jz      short loc_14042F263
 * 000000014042F25E: call    KiSaveDebugRegisterState
 * 000000014042F263: cld
 * 000000014042F264: stmxcsr [rbp+0D8h+var_12C]
 * 000000014042F268: ldmxcsr dword ptr gs:180h
 * 000000014042F271: movaps  [rbp+0D8h+var_E8], xmm0
 * 000000014042F275: movaps  [rbp+0D8h+var_D8], xmm1
 * 000000014042F279: movaps  [rbp+0D8h+var_C8], xmm2
 * 000000014042F27D: movaps  [rbp+0D8h+var_B8], xmm3
 * 000000014042F281: movaps  [rbp+0D8h+var_A8], xmm4
 * 000000014042F285: movaps  [rbp+0D8h+var_98], xmm5
 * 000000014042F289: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 000000014042F290: jz      short loc_14042F29E
 * 000000014042F292: test    [rbp+0D8h+arg_8], 1
 * 000000014042F299: jz      short loc_14042F29E
 * 000000014042F29B: stac
 * 000000014042F29E: mov     eax, [rbp+0E0h]
 * 000000014042F2A4: test    [rbp+0D8h+arg_10], 200h
 * 000000014042F2AE: jz      short loc_14042F2B1
 * 000000014042F2B0: sti
 * 000000014042F2B1: mov     ecx, 10000001h
 * 000000014042F2B6: mov     edx, 2
 * 000000014042F2BB: mov     r9d, [rbp+0E0h]
 * 000000014042F2C2: and     r9d, 0FFFFh
 * 000000014042F2C9: xor     r10, r10
 * 000000014042F2CC: mov     r8, [rbp+0D8h+arg_0]
 * 000000014042F2D3: call    KiExceptionDispatch
 * 000000014042F2D8: nop
 * 000000014042F2D9: retn
 */
