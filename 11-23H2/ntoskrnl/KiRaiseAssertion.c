/*
 * XREFs of KiRaiseAssertion @ 0x140432C00
 * Callers:
 *     KiRaiseAssertionShadow @ 0x140AF6DC0 (KiRaiseAssertionShadow.c)
 * Callees:
 *     KiSaveDebugRegisterState @ 0x14041EFA0 (KiSaveDebugRegisterState.c)
 *     KiRaiseAssertion @ 0x140432C00 (KiRaiseAssertion.c)
 *     KiExceptionDispatch @ 0x140434940 (KiExceptionDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140435300 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiRaiseAssertion @ 0x140432C00
 * Reason: Hex-Rays returned no pseudocode for 0x140432C00
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140432C00: sub     qword ptr [rsp+0], 2
 * 0000000140432C05: cmp     [rsp+arg_0], 23h ; '#'
 * 0000000140432C0B: jnz     short loc_140432C12
 * 0000000140432C0D: and     dword ptr [rsp+4], 0
 * 0000000140432C12: sub     rsp, 8
 * 0000000140432C16: push    rbp
 * 0000000140432C17: sub     rsp, 158h
 * 0000000140432C1E: lea     rbp, [rsp+168h+var_E8]
 * 0000000140432C26: mov     byte ptr [rbp-55h], 1
 * 0000000140432C2A: mov     [rbp-50h], rax
 * 0000000140432C2E: mov     [rbp-48h], rcx
 * 0000000140432C32: mov     [rbp-40h], rdx
 * 0000000140432C36: mov     [rbp-38h], r8
 * 0000000140432C3A: mov     [rbp-30h], r9
 * 0000000140432C3E: mov     [rbp-28h], r10
 * 0000000140432C42: mov     [rbp-20h], r11
 * 0000000140432C46: test    byte ptr [rbp+0F0h], 1
 * 0000000140432C4D: jnz     short loc_140432C89
 * 0000000140432C4F: xor     edx, edx
 * 0000000140432C51: rdsspq  rdx
 * 0000000140432C56: mov     [rbp+58h], rdx
 * 0000000140432C5A: lfence
 * 0000000140432C5D: test    word ptr gs:860h, 1
 * 0000000140432C68: jnz     short loc_140432C72
 * 0000000140432C6A: lfence
 * 0000000140432C6D: jmp     loc_140432EF9
 * 0000000140432C72: movzx   eax, word ptr gs:864h
 * 0000000140432C7B: mov     ecx, 48h ; 'H'
 * 0000000140432C80: xor     edx, edx
 * 0000000140432C82: wrmsr
 * 0000000140432C84: jmp     loc_140432EF9
 * 0000000140432C89: test    cs:KiKvaShadow, 1
 * 0000000140432C90: jnz     short loc_140432C95
 * 0000000140432C92: swapgs
 * 0000000140432C95: lfence
 * 0000000140432C98: mov     rcx, gs:95A8h
 * 0000000140432CA1: test    rcx, rcx
 * 0000000140432CA4: jz      short loc_140432CC5
 * 0000000140432CA6: rdsspq  rdx
 * 0000000140432CAB: mov     r10, gs:95A0h
 * 0000000140432CB4: add     r10, 8
 * 0000000140432CB8: cmp     rdx, r10
 * 0000000140432CBB: jnz     short loc_140432CC5
 * 0000000140432CBD: rstorssp qword ptr [rcx]
 * 0000000140432CC1: saveprevssp
 * 0000000140432CC5: mov     r10, gs:188h
 * 0000000140432CCE: mov     rcx, gs:188h
 * 0000000140432CD7: mov     rcx, [rcx+220h]
 * 0000000140432CDE: mov     rcx, [rcx+9E0h]
 * 0000000140432CE5: mov     gs:858h, rcx
 * 0000000140432CEE: mov     cx, gs:850h
 * 0000000140432CF7: mov     gs:852h, cx
 * 0000000140432D00: mov     cx, gs:860h
 * 0000000140432D09: mov     gs:854h, cx
 * 0000000140432D12: movzx   eax, word ptr gs:866h
 * 0000000140432D1B: cmp     gs:864h, ax
 * 0000000140432D24: jz      short loc_140432D38
 * 0000000140432D26: mov     gs:864h, ax
 * 0000000140432D2F: mov     ecx, 48h ; 'H'
 * 0000000140432D34: xor     edx, edx
 * 0000000140432D36: wrmsr
 * 0000000140432D38: movzx   edx, word ptr gs:860h
 * 0000000140432D41: test    edx, 8
 * 0000000140432D47: jz      short loc_140432D60
 * 0000000140432D49: mov     eax, 1
 * 0000000140432D4E: xor     edx, edx
 * 0000000140432D50: mov     ecx, 49h ; 'I'
 * 0000000140432D55: wrmsr
 * 0000000140432D57: movzx   edx, word ptr gs:860h
 * 0000000140432D60: test    edx, 2
 * 0000000140432D66: jz      loc_140432EA3
 * 0000000140432D6C: call    loc_140432E7F
 * 0000000140432D71: add     rsp, 8
 * 0000000140432D75: call    loc_140432E88
 * 0000000140432D7A: add     rsp, 8
 * 0000000140432D7E: call    loc_140432D71
 * 0000000140432D83: add     rsp, 8
 * 0000000140432D87: call    loc_140432D7A
 * 0000000140432D8C: add     rsp, 8
 * 0000000140432D90: call    loc_140432D83
 * 0000000140432D95: add     rsp, 8
 * 0000000140432D99: call    loc_140432D8C
 * 0000000140432D9E: add     rsp, 8
 * 0000000140432DA2: call    loc_140432D95
 * 0000000140432DA7: add     rsp, 8
 * 0000000140432DAB: call    loc_140432D9E
 * 0000000140432DB0: add     rsp, 8
 * 0000000140432DB4: call    loc_140432DA7
 * 0000000140432DB9: add     rsp, 8
 * 0000000140432DBD: call    loc_140432DB0
 * 0000000140432DC2: add     rsp, 8
 * 0000000140432DC6: call    loc_140432DB9
 * 0000000140432DCB: add     rsp, 8
 * 0000000140432DCF: call    loc_140432DC2
 * 0000000140432DD4: add     rsp, 8
 * 0000000140432DD8: call    loc_140432DCB
 * 0000000140432DDD: add     rsp, 8
 * 0000000140432DE1: call    loc_140432DD4
 * 0000000140432DE6: add     rsp, 8
 * 0000000140432DEA: call    loc_140432DDD
 * 0000000140432DEF: add     rsp, 8
 * 0000000140432DF3: call    loc_140432DE6
 * 0000000140432DF8: add     rsp, 8
 * 0000000140432DFC: call    loc_140432DEF
 * 0000000140432E01: add     rsp, 8
 * 0000000140432E05: call    loc_140432DF8
 * 0000000140432E0A: add     rsp, 8
 * 0000000140432E0E: call    loc_140432E01
 * 0000000140432E13: add     rsp, 8
 * 0000000140432E17: call    loc_140432E0A
 * 0000000140432E1C: add     rsp, 8
 * 0000000140432E20: call    loc_140432E13
 * 0000000140432E25: add     rsp, 8
 * 0000000140432E29: call    loc_140432E1C
 * 0000000140432E2E: add     rsp, 8
 * 0000000140432E32: call    loc_140432E25
 * 0000000140432E37: add     rsp, 8
 * 0000000140432E3B: call    loc_140432E2E
 * 0000000140432E40: add     rsp, 8
 * 0000000140432E44: call    loc_140432E37
 * 0000000140432E49: add     rsp, 8
 * 0000000140432E4D: call    loc_140432E40
 * 0000000140432E52: add     rsp, 8
 * 0000000140432E56: call    loc_140432E49
 * 0000000140432E5B: add     rsp, 8
 * 0000000140432E5F: call    loc_140432E52
 * 0000000140432E64: add     rsp, 8
 * 0000000140432E68: call    loc_140432E5B
 * 0000000140432E6D: add     rsp, 8
 * 0000000140432E71: call    loc_140432E64
 * 0000000140432E76: add     rsp, 8
 * 0000000140432E7A: call    loc_140432E6D
 * 0000000140432E7F: add     rsp, 8
 * 0000000140432E83: call    loc_140432E76
 * 0000000140432E88: add     rsp, 8
 * 0000000140432E8C: mov     eax, 0DADAh
 * 0000000140432E91: test    byte ptr gs:862h, 8
 * 0000000140432E9A: jz      short loc_140432EA3
 * 0000000140432E9C: mov     al, 20h ; ' '
 * 0000000140432E9E: incsspq rax
 * 0000000140432EA3: test    edx, 200h
 * 0000000140432EA9: jz      short loc_140432EB0
 * 0000000140432EAB: call    KiFlushBhbDuringTrapEntryOrExit
 * 0000000140432EB0: lfence
 * 0000000140432EB3: mov     byte ptr gs:856h, 0
 * 0000000140432EBC: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 0000000140432EC3: jz      short loc_140432EE4
 * 0000000140432EC5: mov     ecx, 6A7h
 * 0000000140432ECA: rdmsr
 * 0000000140432ECC: cmp     edx, 0
 * 0000000140432ECF: jz      short loc_140432EE4
 * 0000000140432ED1: mov     ecx, edx
 * 0000000140432ED3: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 0000000140432ED9: cmp     edx, ecx
 * 0000000140432EDB: jz      short loc_140432EE4
 * 0000000140432EDD: mov     ecx, 6A7h
 * 0000000140432EE2: wrmsr
 * 0000000140432EE4: test    byte ptr [r10+3], 3
 * 0000000140432EE9: mov     word ptr [rbp+80h], 0
 * 0000000140432EF2: jz      short loc_140432EF9
 * 0000000140432EF4: call    KiSaveDebugRegisterState
 * 0000000140432EF9: cld
 * 0000000140432EFA: stmxcsr dword ptr [rbp-54h]
 * 0000000140432EFE: ldmxcsr dword ptr gs:180h
 * 0000000140432F07: movaps  xmmword ptr [rbp-10h], xmm0
 * 0000000140432F0B: movaps  xmmword ptr [rbp+0], xmm1
 * 0000000140432F0F: movaps  xmmword ptr [rbp+10h], xmm2
 * 0000000140432F13: movaps  xmmword ptr [rbp+20h], xmm3
 * 0000000140432F17: movaps  xmmword ptr [rbp+30h], xmm4
 * 0000000140432F1B: movaps  xmmword ptr [rbp+40h], xmm5
 * 0000000140432F1F: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 0000000140432F26: jz      short loc_140432F34
 * 0000000140432F28: test    byte ptr [rbp+0F0h], 1
 * 0000000140432F2F: jz      short loc_140432F34
 * 0000000140432F31: stac
 * 0000000140432F34: test    dword ptr [rbp+0F8h], 200h
 * 0000000140432F3E: jz      short loc_140432F41
 * 0000000140432F40: sti
 * 0000000140432F41: mov     ecx, 0C0000420h
 * 0000000140432F46: xor     edx, edx
 * 0000000140432F48: mov     r8, [rbp+0E8h]
 * 0000000140432F4F: call    KiExceptionDispatch
 * 0000000140432F54: nop
 * 0000000140432F55: retn
 */
