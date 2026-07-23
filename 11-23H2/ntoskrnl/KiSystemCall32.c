/*
 * XREFs of KiSystemCall32 @ 0x1404339C0
 * Callers:
 *     <none>
 * Callees:
 *     KiSaveDebugRegisterState @ 0x14041F330 (KiSaveDebugRegisterState.c)
 *     KiSystemCall32 @ 0x1404339C0 (KiSystemCall32.c)
 *     KiExceptionDispatch @ 0x140434D40 (KiExceptionDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140435700 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiSystemCall32 @ 0x1404339C0
 * Reason: Hex-Rays returned no pseudocode for 0x1404339C0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001404339C0: swapgs
 * 00000001404339C3: mov     gs:10h, rsp
 * 00000001404339CC: mov     rsp, gs:1A8h
 * 00000001404339D5: push    2Bh ; '+'
 * 00000001404339D7: push    qword ptr gs:10h
 * 00000001404339DF: push    r11
 * 00000001404339E1: push    23h ; '#'
 * 00000001404339E3: push    rcx
 * 00000001404339E4: cmp     qword ptr gs:95A8h, 0
 * 00000001404339EE: jz      short loc_1404339F4
 * 00000001404339F0: setssbsy
 * 00000001404339F4: swapgs
 * 00000001404339F7: lfence
 * 00000001404339FA: sub     rsp, 8
 * 00000001404339FE: push    rbp
 * 00000001404339FF: sub     rsp, 158h
 * 0000000140433A06: lea     rbp, [rsp+190h+var_110]
 * 0000000140433A0E: mov     byte ptr [rbp-55h], 1
 * 0000000140433A12: mov     [rbp-50h], rax
 * 0000000140433A16: mov     [rbp-48h], rcx
 * 0000000140433A1A: mov     [rbp-40h], rdx
 * 0000000140433A1E: mov     [rbp-38h], r8
 * 0000000140433A22: mov     [rbp-30h], r9
 * 0000000140433A26: mov     [rbp-28h], r10
 * 0000000140433A2A: mov     [rbp-20h], r11
 * 0000000140433A2E: test    byte ptr [rbp+0F0h], 1
 * 0000000140433A35: jnz     short loc_140433A71
 * 0000000140433A37: xor     edx, edx
 * 0000000140433A39: rdsspq  rdx
 * 0000000140433A3E: mov     [rbp+58h], rdx
 * 0000000140433A42: lfence
 * 0000000140433A45: test    word ptr gs:860h, 1
 * 0000000140433A50: jnz     short loc_140433A5A
 * 0000000140433A52: lfence
 * 0000000140433A55: jmp     loc_140433CE1
 * 0000000140433A5A: movzx   eax, word ptr gs:864h
 * 0000000140433A63: mov     ecx, 48h ; 'H'
 * 0000000140433A68: xor     edx, edx
 * 0000000140433A6A: wrmsr
 * 0000000140433A6C: jmp     loc_140433CE1
 * 0000000140433A71: test    cs:KiKvaShadow, 1
 * 0000000140433A78: jnz     short loc_140433A7D
 * 0000000140433A7A: swapgs
 * 0000000140433A7D: lfence
 * 0000000140433A80: mov     rcx, gs:95A8h
 * 0000000140433A89: test    rcx, rcx
 * 0000000140433A8C: jz      short loc_140433AAD
 * 0000000140433A8E: rdsspq  rdx
 * 0000000140433A93: mov     r10, gs:95A0h
 * 0000000140433A9C: add     r10, 8
 * 0000000140433AA0: cmp     rdx, r10
 * 0000000140433AA3: jnz     short loc_140433AAD
 * 0000000140433AA5: rstorssp qword ptr [rcx]
 * 0000000140433AA9: saveprevssp
 * 0000000140433AAD: mov     r10, gs:188h
 * 0000000140433AB6: mov     rcx, gs:188h
 * 0000000140433ABF: mov     rcx, [rcx+220h]
 * 0000000140433AC6: mov     rcx, [rcx+9E0h]
 * 0000000140433ACD: mov     gs:858h, rcx
 * 0000000140433AD6: mov     cx, gs:850h
 * 0000000140433ADF: mov     gs:852h, cx
 * 0000000140433AE8: mov     cx, gs:860h
 * 0000000140433AF1: mov     gs:854h, cx
 * 0000000140433AFA: movzx   eax, word ptr gs:866h
 * 0000000140433B03: cmp     gs:864h, ax
 * 0000000140433B0C: jz      short loc_140433B20
 * 0000000140433B0E: mov     gs:864h, ax
 * 0000000140433B17: mov     ecx, 48h ; 'H'
 * 0000000140433B1C: xor     edx, edx
 * 0000000140433B1E: wrmsr
 * 0000000140433B20: movzx   edx, word ptr gs:860h
 * 0000000140433B29: test    edx, 8
 * 0000000140433B2F: jz      short loc_140433B48
 * 0000000140433B31: mov     eax, 1
 * 0000000140433B36: xor     edx, edx
 * 0000000140433B38: mov     ecx, 49h ; 'I'
 * 0000000140433B3D: wrmsr
 * 0000000140433B3F: movzx   edx, word ptr gs:860h
 * 0000000140433B48: test    edx, 2
 * 0000000140433B4E: jz      loc_140433C8B
 * 0000000140433B54: call    loc_140433C67
 * 0000000140433B59: add     rsp, 8
 * 0000000140433B5D: call    loc_140433C70
 * 0000000140433B62: add     rsp, 8
 * 0000000140433B66: call    loc_140433B59
 * 0000000140433B6B: add     rsp, 8
 * 0000000140433B6F: call    loc_140433B62
 * 0000000140433B74: add     rsp, 8
 * 0000000140433B78: call    loc_140433B6B
 * 0000000140433B7D: add     rsp, 8
 * 0000000140433B81: call    loc_140433B74
 * 0000000140433B86: add     rsp, 8
 * 0000000140433B8A: call    loc_140433B7D
 * 0000000140433B8F: add     rsp, 8
 * 0000000140433B93: call    loc_140433B86
 * 0000000140433B98: add     rsp, 8
 * 0000000140433B9C: call    loc_140433B8F
 * 0000000140433BA1: add     rsp, 8
 * 0000000140433BA5: call    loc_140433B98
 * 0000000140433BAA: add     rsp, 8
 * 0000000140433BAE: call    loc_140433BA1
 * 0000000140433BB3: add     rsp, 8
 * 0000000140433BB7: call    loc_140433BAA
 * 0000000140433BBC: add     rsp, 8
 * 0000000140433BC0: call    loc_140433BB3
 * 0000000140433BC5: add     rsp, 8
 * 0000000140433BC9: call    loc_140433BBC
 * 0000000140433BCE: add     rsp, 8
 * 0000000140433BD2: call    loc_140433BC5
 * 0000000140433BD7: add     rsp, 8
 * 0000000140433BDB: call    loc_140433BCE
 * 0000000140433BE0: add     rsp, 8
 * 0000000140433BE4: call    loc_140433BD7
 * 0000000140433BE9: add     rsp, 8
 * 0000000140433BED: call    loc_140433BE0
 * 0000000140433BF2: add     rsp, 8
 * 0000000140433BF6: call    loc_140433BE9
 * 0000000140433BFB: add     rsp, 8
 * 0000000140433BFF: call    loc_140433BF2
 * 0000000140433C04: add     rsp, 8
 * 0000000140433C08: call    loc_140433BFB
 * 0000000140433C0D: add     rsp, 8
 * 0000000140433C11: call    loc_140433C04
 * 0000000140433C16: add     rsp, 8
 * 0000000140433C1A: call    loc_140433C0D
 * 0000000140433C1F: add     rsp, 8
 * 0000000140433C23: call    loc_140433C16
 * 0000000140433C28: add     rsp, 8
 * 0000000140433C2C: call    loc_140433C1F
 * 0000000140433C31: add     rsp, 8
 * 0000000140433C35: call    loc_140433C28
 * 0000000140433C3A: add     rsp, 8
 * 0000000140433C3E: call    loc_140433C31
 * 0000000140433C43: add     rsp, 8
 * 0000000140433C47: call    loc_140433C3A
 * 0000000140433C4C: add     rsp, 8
 * 0000000140433C50: call    loc_140433C43
 * 0000000140433C55: add     rsp, 8
 * 0000000140433C59: call    loc_140433C4C
 * 0000000140433C5E: add     rsp, 8
 * 0000000140433C62: call    loc_140433C55
 * 0000000140433C67: add     rsp, 8
 * 0000000140433C6B: call    loc_140433C5E
 * 0000000140433C70: add     rsp, 8
 * 0000000140433C74: mov     eax, 0DADAh
 * 0000000140433C79: test    byte ptr gs:862h, 8
 * 0000000140433C82: jz      short loc_140433C8B
 * 0000000140433C84: mov     al, 20h ; ' '
 * 0000000140433C86: incsspq rax
 * 0000000140433C8B: test    edx, 200h
 * 0000000140433C91: jz      short loc_140433C98
 * 0000000140433C93: call    KiFlushBhbDuringTrapEntryOrExit
 * 0000000140433C98: lfence
 * 0000000140433C9B: mov     byte ptr gs:856h, 0
 * 0000000140433CA4: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 0000000140433CAB: jz      short loc_140433CCC
 * 0000000140433CAD: mov     ecx, 6A7h
 * 0000000140433CB2: rdmsr
 * 0000000140433CB4: cmp     edx, 0
 * 0000000140433CB7: jz      short loc_140433CCC
 * 0000000140433CB9: mov     ecx, edx
 * 0000000140433CBB: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 0000000140433CC1: cmp     edx, ecx
 * 0000000140433CC3: jz      short loc_140433CCC
 * 0000000140433CC5: mov     ecx, 6A7h
 * 0000000140433CCA: wrmsr
 * 0000000140433CCC: test    byte ptr [r10+3], 3
 * 0000000140433CD1: mov     word ptr [rbp+80h], 0
 * 0000000140433CDA: jz      short loc_140433CE1
 * 0000000140433CDC: call    KiSaveDebugRegisterState
 * 0000000140433CE1: cld
 * 0000000140433CE2: stmxcsr dword ptr [rbp-54h]
 * 0000000140433CE6: ldmxcsr dword ptr gs:180h
 * 0000000140433CEF: movaps  xmmword ptr [rbp-10h], xmm0
 * 0000000140433CF3: movaps  xmmword ptr [rbp+0], xmm1
 * 0000000140433CF7: movaps  xmmword ptr [rbp+10h], xmm2
 * 0000000140433CFB: movaps  xmmword ptr [rbp+20h], xmm3
 * 0000000140433CFF: movaps  xmmword ptr [rbp+30h], xmm4
 * 0000000140433D03: movaps  xmmword ptr [rbp+40h], xmm5
 * 0000000140433D07: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 0000000140433D0E: jz      short loc_140433D1C
 * 0000000140433D10: test    byte ptr [rbp+0F0h], 1
 * 0000000140433D17: jz      short loc_140433D1C
 * 0000000140433D19: stac
 * 0000000140433D1C: sub     qword ptr [rbp+0E8h], 2
 * 0000000140433D24: and     dword ptr [rbp+0ECh], 0
 * 0000000140433D2B: sti
 * 0000000140433D2C: mov     ecx, 0C000001Dh
 * 0000000140433D31: xor     edx, edx
 * 0000000140433D33: mov     r8, [rbp+0E8h]
 * 0000000140433D3A: call    KiExceptionDispatch
 * 0000000140433D3F: nop
 * 0000000140433D40: retn
 */
