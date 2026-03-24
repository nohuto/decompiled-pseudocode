/*
 * XREFs of KiDebugServiceTrap @ 0x140432980
 * Callers:
 *     KiDebugServiceTrapShadow @ 0x140AF7E40 (KiDebugServiceTrapShadow.c)
 * Callees:
 *     KiSaveDebugRegisterState @ 0x14041E8E0 (KiSaveDebugRegisterState.c)
 *     KiDebugServiceTrap @ 0x140432980 (KiDebugServiceTrap.c)
 *     KiExceptionDispatch @ 0x140434340 (KiExceptionDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140434D00 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiDebugServiceTrap @ 0x140432980
 * Reason: Hex-Rays returned no pseudocode for 0x140432980
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140432980: inc     qword ptr [rsp+0]
 * 0000000140432984: cmp     [rsp+arg_0], 23h ; '#'
 * 000000014043298A: jnz     short loc_140432991
 * 000000014043298C: and     dword ptr [rsp+4], 0
 * 0000000140432991: sub     rsp, 8
 * 0000000140432995: push    rbp
 * 0000000140432996: sub     rsp, 158h
 * 000000014043299D: lea     rbp, [rsp+168h+var_E8]
 * 00000001404329A5: mov     byte ptr [rbp-55h], 1
 * 00000001404329A9: mov     [rbp-50h], rax
 * 00000001404329AD: mov     [rbp-48h], rcx
 * 00000001404329B1: mov     [rbp-40h], rdx
 * 00000001404329B5: mov     [rbp-38h], r8
 * 00000001404329B9: mov     [rbp-30h], r9
 * 00000001404329BD: mov     [rbp-28h], r10
 * 00000001404329C1: mov     [rbp-20h], r11
 * 00000001404329C5: test    byte ptr [rbp+0F0h], 1
 * 00000001404329CC: jnz     short loc_140432A08
 * 00000001404329CE: xor     edx, edx
 * 00000001404329D0: rdsspq  rdx
 * 00000001404329D5: mov     [rbp+58h], rdx
 * 00000001404329D9: lfence
 * 00000001404329DC: test    word ptr gs:860h, 1
 * 00000001404329E7: jnz     short loc_1404329F1
 * 00000001404329E9: lfence
 * 00000001404329EC: jmp     loc_140432C78
 * 00000001404329F1: movzx   eax, word ptr gs:864h
 * 00000001404329FA: mov     ecx, 48h ; 'H'
 * 00000001404329FF: xor     edx, edx
 * 0000000140432A01: wrmsr
 * 0000000140432A03: jmp     loc_140432C78
 * 0000000140432A08: test    cs:KiKvaShadow, 1
 * 0000000140432A0F: jnz     short loc_140432A14
 * 0000000140432A11: swapgs
 * 0000000140432A14: lfence
 * 0000000140432A17: mov     rcx, gs:95A8h
 * 0000000140432A20: test    rcx, rcx
 * 0000000140432A23: jz      short loc_140432A44
 * 0000000140432A25: rdsspq  rdx
 * 0000000140432A2A: mov     r10, gs:95A0h
 * 0000000140432A33: add     r10, 8
 * 0000000140432A37: cmp     rdx, r10
 * 0000000140432A3A: jnz     short loc_140432A44
 * 0000000140432A3C: rstorssp qword ptr [rcx]
 * 0000000140432A40: saveprevssp
 * 0000000140432A44: mov     r10, gs:188h
 * 0000000140432A4D: mov     rcx, gs:188h
 * 0000000140432A56: mov     rcx, [rcx+220h]
 * 0000000140432A5D: mov     rcx, [rcx+9E0h]
 * 0000000140432A64: mov     gs:858h, rcx
 * 0000000140432A6D: mov     cx, gs:850h
 * 0000000140432A76: mov     gs:852h, cx
 * 0000000140432A7F: mov     cx, gs:860h
 * 0000000140432A88: mov     gs:854h, cx
 * 0000000140432A91: movzx   eax, word ptr gs:866h
 * 0000000140432A9A: cmp     gs:864h, ax
 * 0000000140432AA3: jz      short loc_140432AB7
 * 0000000140432AA5: mov     gs:864h, ax
 * 0000000140432AAE: mov     ecx, 48h ; 'H'
 * 0000000140432AB3: xor     edx, edx
 * 0000000140432AB5: wrmsr
 * 0000000140432AB7: movzx   edx, word ptr gs:860h
 * 0000000140432AC0: test    edx, 8
 * 0000000140432AC6: jz      short loc_140432ADF
 * 0000000140432AC8: mov     eax, 1
 * 0000000140432ACD: xor     edx, edx
 * 0000000140432ACF: mov     ecx, 49h ; 'I'
 * 0000000140432AD4: wrmsr
 * 0000000140432AD6: movzx   edx, word ptr gs:860h
 * 0000000140432ADF: test    edx, 2
 * 0000000140432AE5: jz      loc_140432C22
 * 0000000140432AEB: call    loc_140432BFE
 * 0000000140432AF0: add     rsp, 8
 * 0000000140432AF4: call    loc_140432C07
 * 0000000140432AF9: add     rsp, 8
 * 0000000140432AFD: call    loc_140432AF0
 * 0000000140432B02: add     rsp, 8
 * 0000000140432B06: call    loc_140432AF9
 * 0000000140432B0B: add     rsp, 8
 * 0000000140432B0F: call    loc_140432B02
 * 0000000140432B14: add     rsp, 8
 * 0000000140432B18: call    loc_140432B0B
 * 0000000140432B1D: add     rsp, 8
 * 0000000140432B21: call    loc_140432B14
 * 0000000140432B26: add     rsp, 8
 * 0000000140432B2A: call    loc_140432B1D
 * 0000000140432B2F: add     rsp, 8
 * 0000000140432B33: call    loc_140432B26
 * 0000000140432B38: add     rsp, 8
 * 0000000140432B3C: call    loc_140432B2F
 * 0000000140432B41: add     rsp, 8
 * 0000000140432B45: call    loc_140432B38
 * 0000000140432B4A: add     rsp, 8
 * 0000000140432B4E: call    loc_140432B41
 * 0000000140432B53: add     rsp, 8
 * 0000000140432B57: call    loc_140432B4A
 * 0000000140432B5C: add     rsp, 8
 * 0000000140432B60: call    loc_140432B53
 * 0000000140432B65: add     rsp, 8
 * 0000000140432B69: call    loc_140432B5C
 * 0000000140432B6E: add     rsp, 8
 * 0000000140432B72: call    loc_140432B65
 * 0000000140432B77: add     rsp, 8
 * 0000000140432B7B: call    loc_140432B6E
 * 0000000140432B80: add     rsp, 8
 * 0000000140432B84: call    loc_140432B77
 * 0000000140432B89: add     rsp, 8
 * 0000000140432B8D: call    loc_140432B80
 * 0000000140432B92: add     rsp, 8
 * 0000000140432B96: call    loc_140432B89
 * 0000000140432B9B: add     rsp, 8
 * 0000000140432B9F: call    loc_140432B92
 * 0000000140432BA4: add     rsp, 8
 * 0000000140432BA8: call    loc_140432B9B
 * 0000000140432BAD: add     rsp, 8
 * 0000000140432BB1: call    loc_140432BA4
 * 0000000140432BB6: add     rsp, 8
 * 0000000140432BBA: call    loc_140432BAD
 * 0000000140432BBF: add     rsp, 8
 * 0000000140432BC3: call    loc_140432BB6
 * 0000000140432BC8: add     rsp, 8
 * 0000000140432BCC: call    loc_140432BBF
 * 0000000140432BD1: add     rsp, 8
 * 0000000140432BD5: call    loc_140432BC8
 * 0000000140432BDA: add     rsp, 8
 * 0000000140432BDE: call    loc_140432BD1
 * 0000000140432BE3: add     rsp, 8
 * 0000000140432BE7: call    loc_140432BDA
 * 0000000140432BEC: add     rsp, 8
 * 0000000140432BF0: call    loc_140432BE3
 * 0000000140432BF5: add     rsp, 8
 * 0000000140432BF9: call    loc_140432BEC
 * 0000000140432BFE: add     rsp, 8
 * 0000000140432C02: call    loc_140432BF5
 * 0000000140432C07: add     rsp, 8
 * 0000000140432C0B: mov     eax, 0DADAh
 * 0000000140432C10: test    byte ptr gs:862h, 8
 * 0000000140432C19: jz      short loc_140432C22
 * 0000000140432C1B: mov     al, 20h ; ' '
 * 0000000140432C1D: incsspq rax
 * 0000000140432C22: test    edx, 200h
 * 0000000140432C28: jz      short loc_140432C2F
 * 0000000140432C2A: call    KiFlushBhbDuringTrapEntryOrExit
 * 0000000140432C2F: lfence
 * 0000000140432C32: mov     byte ptr gs:856h, 0
 * 0000000140432C3B: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 0000000140432C42: jz      short loc_140432C63
 * 0000000140432C44: mov     ecx, 6A7h
 * 0000000140432C49: rdmsr
 * 0000000140432C4B: cmp     edx, 0
 * 0000000140432C4E: jz      short loc_140432C63
 * 0000000140432C50: mov     ecx, edx
 * 0000000140432C52: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 0000000140432C58: cmp     edx, ecx
 * 0000000140432C5A: jz      short loc_140432C63
 * 0000000140432C5C: mov     ecx, 6A7h
 * 0000000140432C61: wrmsr
 * 0000000140432C63: test    byte ptr [r10+3], 3
 * 0000000140432C68: mov     word ptr [rbp+80h], 0
 * 0000000140432C71: jz      short loc_140432C78
 * 0000000140432C73: call    KiSaveDebugRegisterState
 * 0000000140432C78: cld
 * 0000000140432C79: stmxcsr dword ptr [rbp-54h]
 * 0000000140432C7D: ldmxcsr dword ptr gs:180h
 * 0000000140432C86: movaps  xmmword ptr [rbp-10h], xmm0
 * 0000000140432C8A: movaps  xmmword ptr [rbp+0], xmm1
 * 0000000140432C8E: movaps  xmmword ptr [rbp+10h], xmm2
 * 0000000140432C92: movaps  xmmword ptr [rbp+20h], xmm3
 * 0000000140432C96: movaps  xmmword ptr [rbp+30h], xmm4
 * 0000000140432C9A: movaps  xmmword ptr [rbp+40h], xmm5
 * 0000000140432C9E: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 0000000140432CA5: jz      short loc_140432CB3
 * 0000000140432CA7: test    byte ptr [rbp+0F0h], 1
 * 0000000140432CAE: jz      short loc_140432CB3
 * 0000000140432CB0: stac
 * 0000000140432CB3: test    dword ptr [rbp+0F8h], 200h
 * 0000000140432CBD: jz      short loc_140432CC0
 * 0000000140432CBF: sti
 * 0000000140432CC0: mov     ecx, 80000003h
 * 0000000140432CC5: mov     edx, 1
 * 0000000140432CCA: mov     r9, [rbp-50h]
 * 0000000140432CCE: mov     r8, [rbp+0E8h]
 * 0000000140432CD5: call    KiExceptionDispatch
 * 0000000140432CDA: nop
 * 0000000140432CDB: retn
 */
