/*
 * XREFs of KiSystemService @ 0x140432D00
 * Callers:
 *     KiSystemServiceShadow @ 0x140AF7EC0 (KiSystemServiceShadow.c)
 * Callees:
 *     KiSystemService @ 0x140432D00 (KiSystemService.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140434D00 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiSystemService @ 0x140432D00
 * Reason: Hex-Rays returned no pseudocode for 0x140432D00
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140432D00: cmp     [rsp+arg_0], 23h ; '#'
 * 0000000140432D06: jz      KiSystemService32User
 * 0000000140432D0C: test    cs:KiKvaShadow, 1
 * 0000000140432D13: jnz     short loc_140432D18
 * 0000000140432D15: swapgs
 * 0000000140432D18: lfence
 * 0000000140432D1B: mov     rcx, gs:95A8h
 * 0000000140432D24: test    rcx, rcx
 * 0000000140432D27: jz      short loc_140432D31
 * 0000000140432D29: rstorssp qword ptr [rcx]
 * 0000000140432D2D: saveprevssp
 * 0000000140432D31: mov     rcx, r10
 * 0000000140432D34: sub     rsp, 8
 * 0000000140432D38: push    rbp
 * 0000000140432D39: sub     rsp, 158h
 * 0000000140432D40: lea     rbp, [rsp+168h+var_E8]
 * 0000000140432D48: mov     [rbp+0C0h], rbx
 * 0000000140432D4F: mov     [rbp+0C8h], rdi
 * 0000000140432D56: mov     [rbp+0D0h], rsi
 * 0000000140432D5D: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 0000000140432D64: jz      short loc_140432D72
 * 0000000140432D66: test    byte ptr [rbp+0F0h], 1
 * 0000000140432D6D: jz      short loc_140432D72
 * 0000000140432D6F: stac
 * 0000000140432D72: mov     [rbp-50h], rax
 * 0000000140432D76: mov     [rbp-48h], rcx
 * 0000000140432D7A: mov     [rbp-40h], rdx
 * 0000000140432D7E: mov     rcx, gs:188h
 * 0000000140432D87: mov     rcx, [rcx+220h]
 * 0000000140432D8E: mov     rcx, [rcx+9E0h]
 * 0000000140432D95: mov     gs:858h, rcx
 * 0000000140432D9E: mov     cx, gs:850h
 * 0000000140432DA7: mov     gs:852h, cx
 * 0000000140432DB0: mov     cx, gs:860h
 * 0000000140432DB9: mov     gs:854h, cx
 * 0000000140432DC2: movzx   eax, word ptr gs:866h
 * 0000000140432DCB: cmp     gs:864h, ax
 * 0000000140432DD4: jz      short loc_140432DE8
 * 0000000140432DD6: mov     gs:864h, ax
 * 0000000140432DDF: mov     ecx, 48h ; 'H'
 * 0000000140432DE4: xor     edx, edx
 * 0000000140432DE6: wrmsr
 * 0000000140432DE8: movzx   edx, word ptr gs:860h
 * 0000000140432DF1: test    edx, 8
 * 0000000140432DF7: jz      short loc_140432E10
 * 0000000140432DF9: mov     eax, 1
 * 0000000140432DFE: xor     edx, edx
 * 0000000140432E00: mov     ecx, 49h ; 'I'
 * 0000000140432E05: wrmsr
 * 0000000140432E07: movzx   edx, word ptr gs:860h
 * 0000000140432E10: test    edx, 2
 * 0000000140432E16: jz      loc_140432F53
 * 0000000140432E1C: call    loc_140432F2F
 * 0000000140432E21: add     rsp, 8
 * 0000000140432E25: call    loc_140432F38
 * 0000000140432E2A: add     rsp, 8
 * 0000000140432E2E: call    loc_140432E21
 * 0000000140432E33: add     rsp, 8
 * 0000000140432E37: call    loc_140432E2A
 * 0000000140432E3C: add     rsp, 8
 * 0000000140432E40: call    loc_140432E33
 * 0000000140432E45: add     rsp, 8
 * 0000000140432E49: call    loc_140432E3C
 * 0000000140432E4E: add     rsp, 8
 * 0000000140432E52: call    loc_140432E45
 * 0000000140432E57: add     rsp, 8
 * 0000000140432E5B: call    loc_140432E4E
 * 0000000140432E60: add     rsp, 8
 * 0000000140432E64: call    loc_140432E57
 * 0000000140432E69: add     rsp, 8
 * 0000000140432E6D: call    loc_140432E60
 * 0000000140432E72: add     rsp, 8
 * 0000000140432E76: call    loc_140432E69
 * 0000000140432E7B: add     rsp, 8
 * 0000000140432E7F: call    loc_140432E72
 * 0000000140432E84: add     rsp, 8
 * 0000000140432E88: call    loc_140432E7B
 * 0000000140432E8D: add     rsp, 8
 * 0000000140432E91: call    loc_140432E84
 * 0000000140432E96: add     rsp, 8
 * 0000000140432E9A: call    loc_140432E8D
 * 0000000140432E9F: add     rsp, 8
 * 0000000140432EA3: call    loc_140432E96
 * 0000000140432EA8: add     rsp, 8
 * 0000000140432EAC: call    loc_140432E9F
 * 0000000140432EB1: add     rsp, 8
 * 0000000140432EB5: call    loc_140432EA8
 * 0000000140432EBA: add     rsp, 8
 * 0000000140432EBE: call    loc_140432EB1
 * 0000000140432EC3: add     rsp, 8
 * 0000000140432EC7: call    loc_140432EBA
 * 0000000140432ECC: add     rsp, 8
 * 0000000140432ED0: call    loc_140432EC3
 * 0000000140432ED5: add     rsp, 8
 * 0000000140432ED9: call    loc_140432ECC
 * 0000000140432EDE: add     rsp, 8
 * 0000000140432EE2: call    loc_140432ED5
 * 0000000140432EE7: add     rsp, 8
 * 0000000140432EEB: call    loc_140432EDE
 * 0000000140432EF0: add     rsp, 8
 * 0000000140432EF4: call    loc_140432EE7
 * 0000000140432EF9: add     rsp, 8
 * 0000000140432EFD: call    loc_140432EF0
 * 0000000140432F02: add     rsp, 8
 * 0000000140432F06: call    loc_140432EF9
 * 0000000140432F0B: add     rsp, 8
 * 0000000140432F0F: call    loc_140432F02
 * 0000000140432F14: add     rsp, 8
 * 0000000140432F18: call    loc_140432F0B
 * 0000000140432F1D: add     rsp, 8
 * 0000000140432F21: call    loc_140432F14
 * 0000000140432F26: add     rsp, 8
 * 0000000140432F2A: call    loc_140432F1D
 * 0000000140432F2F: add     rsp, 8
 * 0000000140432F33: call    loc_140432F26
 * 0000000140432F38: add     rsp, 8
 * 0000000140432F3C: mov     eax, 0DADAh
 * 0000000140432F41: test    byte ptr gs:862h, 8
 * 0000000140432F4A: jz      short loc_140432F53
 * 0000000140432F4C: mov     al, 20h ; ' '
 * 0000000140432F4E: incsspq rax
 * 0000000140432F53: test    edx, 200h
 * 0000000140432F59: jz      short loc_140432F60
 * 0000000140432F5B: call    KiFlushBhbDuringTrapEntryOrExit
 * 0000000140432F60: lfence
 * 0000000140432F63: mov     byte ptr gs:856h, 0
 * 0000000140432F6C: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 0000000140432F73: jz      short loc_140432F94
 * 0000000140432F75: mov     ecx, 6A7h
 * 0000000140432F7A: rdmsr
 * 0000000140432F7C: cmp     edx, 0
 * 0000000140432F7F: jz      short loc_140432F94
 * 0000000140432F81: mov     ecx, edx
 * 0000000140432F83: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 0000000140432F89: cmp     edx, ecx
 * 0000000140432F8B: jz      short loc_140432F94
 * 0000000140432F8D: mov     ecx, 6A7h
 * 0000000140432F92: wrmsr
 * 0000000140432F94: jmp     KiSystemServiceUser
 * 0000000140432F99: retn
 */
