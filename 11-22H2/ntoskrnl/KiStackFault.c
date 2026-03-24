/*
 * XREFs of KiStackFault @ 0x14042EC00
 * Callers:
 *     KiStackFaultShadow @ 0x140AF7740 (KiStackFaultShadow.c)
 * Callees:
 *     KiSaveDebugRegisterState @ 0x14041E8E0 (KiSaveDebugRegisterState.c)
 *     KiStackFault @ 0x14042EC00 (KiStackFault.c)
 *     KiExceptionDispatch @ 0x140434340 (KiExceptionDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140434D00 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiStackFault @ 0x14042EC00
 * Reason: Hex-Rays returned no pseudocode for 0x14042EC00
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014042EC00: push    rbp
 * 000000014042EC01: sub     rsp, 158h
 * 000000014042EC08: lea     rbp, [rsp+80h]
 * 000000014042EC10: mov     [rbp+0D8h+var_12D], 1
 * 000000014042EC14: mov     [rbp+0D8h+var_128], rax
 * 000000014042EC18: mov     [rbp+0D8h+var_120], rcx
 * 000000014042EC1C: mov     [rbp+0D8h+var_118], rdx
 * 000000014042EC20: mov     [rbp+0D8h+var_110], r8
 * 000000014042EC24: mov     [rbp+0D8h+var_108], r9
 * 000000014042EC28: mov     [rbp+0D8h+var_100], r10
 * 000000014042EC2C: mov     [rbp+0D8h+var_F8], r11
 * 000000014042EC30: test    [rbp+0D8h+arg_8], 1
 * 000000014042EC37: jnz     short loc_14042EC73
 * 000000014042EC39: xor     edx, edx
 * 000000014042EC3B: rdsspq  rdx
 * 000000014042EC40: mov     [rbp+0D8h+var_80], rdx
 * 000000014042EC44: lfence
 * 000000014042EC47: test    word ptr gs:860h, 1
 * 000000014042EC52: jnz     short loc_14042EC5C
 * 000000014042EC54: lfence
 * 000000014042EC57: jmp     loc_14042EEE3
 * 000000014042EC5C: movzx   eax, word ptr gs:864h
 * 000000014042EC65: mov     ecx, 48h ; 'H'
 * 000000014042EC6A: xor     edx, edx
 * 000000014042EC6C: wrmsr
 * 000000014042EC6E: jmp     loc_14042EEE3
 * 000000014042EC73: test    cs:KiKvaShadow, 1
 * 000000014042EC7A: jnz     short loc_14042EC7F
 * 000000014042EC7C: swapgs
 * 000000014042EC7F: lfence
 * 000000014042EC82: mov     rcx, gs:95A8h
 * 000000014042EC8B: test    rcx, rcx
 * 000000014042EC8E: jz      short loc_14042ECAF
 * 000000014042EC90: rdsspq  rdx
 * 000000014042EC95: mov     r10, gs:95A0h
 * 000000014042EC9E: add     r10, 8
 * 000000014042ECA2: cmp     rdx, r10
 * 000000014042ECA5: jnz     short loc_14042ECAF
 * 000000014042ECA7: rstorssp qword ptr [rcx]
 * 000000014042ECAB: saveprevssp
 * 000000014042ECAF: mov     r10, gs:188h
 * 000000014042ECB8: mov     rcx, gs:188h
 * 000000014042ECC1: mov     rcx, [rcx+220h]
 * 000000014042ECC8: mov     rcx, [rcx+9E0h]
 * 000000014042ECCF: mov     gs:858h, rcx
 * 000000014042ECD8: mov     cx, gs:850h
 * 000000014042ECE1: mov     gs:852h, cx
 * 000000014042ECEA: mov     cx, gs:860h
 * 000000014042ECF3: mov     gs:854h, cx
 * 000000014042ECFC: movzx   eax, word ptr gs:866h
 * 000000014042ED05: cmp     gs:864h, ax
 * 000000014042ED0E: jz      short loc_14042ED22
 * 000000014042ED10: mov     gs:864h, ax
 * 000000014042ED19: mov     ecx, 48h ; 'H'
 * 000000014042ED1E: xor     edx, edx
 * 000000014042ED20: wrmsr
 * 000000014042ED22: movzx   edx, word ptr gs:860h
 * 000000014042ED2B: test    edx, 8
 * 000000014042ED31: jz      short loc_14042ED4A
 * 000000014042ED33: mov     eax, 1
 * 000000014042ED38: xor     edx, edx
 * 000000014042ED3A: mov     ecx, 49h ; 'I'
 * 000000014042ED3F: wrmsr
 * 000000014042ED41: movzx   edx, word ptr gs:860h
 * 000000014042ED4A: test    edx, 2
 * 000000014042ED50: jz      loc_14042EE8D
 * 000000014042ED56: call    loc_14042EE69
 * 000000014042ED5B: add     rsp, 8
 * 000000014042ED5F: call    loc_14042EE72
 * 000000014042ED64: add     rsp, 8
 * 000000014042ED68: call    loc_14042ED5B
 * 000000014042ED6D: add     rsp, 8
 * 000000014042ED71: call    loc_14042ED64
 * 000000014042ED76: add     rsp, 8
 * 000000014042ED7A: call    loc_14042ED6D
 * 000000014042ED7F: add     rsp, 8
 * 000000014042ED83: call    loc_14042ED76
 * 000000014042ED88: add     rsp, 8
 * 000000014042ED8C: call    loc_14042ED7F
 * 000000014042ED91: add     rsp, 8
 * 000000014042ED95: call    loc_14042ED88
 * 000000014042ED9A: add     rsp, 8
 * 000000014042ED9E: call    loc_14042ED91
 * 000000014042EDA3: add     rsp, 8
 * 000000014042EDA7: call    loc_14042ED9A
 * 000000014042EDAC: add     rsp, 8
 * 000000014042EDB0: call    loc_14042EDA3
 * 000000014042EDB5: add     rsp, 8
 * 000000014042EDB9: call    loc_14042EDAC
 * 000000014042EDBE: add     rsp, 8
 * 000000014042EDC2: call    loc_14042EDB5
 * 000000014042EDC7: add     rsp, 8
 * 000000014042EDCB: call    loc_14042EDBE
 * 000000014042EDD0: add     rsp, 8
 * 000000014042EDD4: call    loc_14042EDC7
 * 000000014042EDD9: add     rsp, 8
 * 000000014042EDDD: call    loc_14042EDD0
 * 000000014042EDE2: add     rsp, 8
 * 000000014042EDE6: call    loc_14042EDD9
 * 000000014042EDEB: add     rsp, 8
 * 000000014042EDEF: call    loc_14042EDE2
 * 000000014042EDF4: add     rsp, 8
 * 000000014042EDF8: call    loc_14042EDEB
 * 000000014042EDFD: add     rsp, 8
 * 000000014042EE01: call    loc_14042EDF4
 * 000000014042EE06: add     rsp, 8
 * 000000014042EE0A: call    loc_14042EDFD
 * 000000014042EE0F: add     rsp, 8
 * 000000014042EE13: call    loc_14042EE06
 * 000000014042EE18: add     rsp, 8
 * 000000014042EE1C: call    loc_14042EE0F
 * 000000014042EE21: add     rsp, 8
 * 000000014042EE25: call    loc_14042EE18
 * 000000014042EE2A: add     rsp, 8
 * 000000014042EE2E: call    loc_14042EE21
 * 000000014042EE33: add     rsp, 8
 * 000000014042EE37: call    loc_14042EE2A
 * 000000014042EE3C: add     rsp, 8
 * 000000014042EE40: call    loc_14042EE33
 * 000000014042EE45: add     rsp, 8
 * 000000014042EE49: call    loc_14042EE3C
 * 000000014042EE4E: add     rsp, 8
 * 000000014042EE52: call    loc_14042EE45
 * 000000014042EE57: add     rsp, 8
 * 000000014042EE5B: call    loc_14042EE4E
 * 000000014042EE60: add     rsp, 8
 * 000000014042EE64: call    loc_14042EE57
 * 000000014042EE69: add     rsp, 8
 * 000000014042EE6D: call    loc_14042EE60
 * 000000014042EE72: add     rsp, 8
 * 000000014042EE76: mov     eax, 0DADAh
 * 000000014042EE7B: test    byte ptr gs:862h, 8
 * 000000014042EE84: jz      short loc_14042EE8D
 * 000000014042EE86: mov     al, 20h ; ' '
 * 000000014042EE88: incsspq rax
 * 000000014042EE8D: test    edx, 200h
 * 000000014042EE93: jz      short loc_14042EE9A
 * 000000014042EE95: call    KiFlushBhbDuringTrapEntryOrExit
 * 000000014042EE9A: lfence
 * 000000014042EE9D: mov     byte ptr gs:856h, 0
 * 000000014042EEA6: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 000000014042EEAD: jz      short loc_14042EECE
 * 000000014042EEAF: mov     ecx, 6A7h
 * 000000014042EEB4: rdmsr
 * 000000014042EEB6: cmp     edx, 0
 * 000000014042EEB9: jz      short loc_14042EECE
 * 000000014042EEBB: mov     ecx, edx
 * 000000014042EEBD: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 000000014042EEC3: cmp     edx, ecx
 * 000000014042EEC5: jz      short loc_14042EECE
 * 000000014042EEC7: mov     ecx, 6A7h
 * 000000014042EECC: wrmsr
 * 000000014042EECE: test    byte ptr [r10+3], 3
 * 000000014042EED3: mov     [rbp+0D8h+var_58], 0
 * 000000014042EEDC: jz      short loc_14042EEE3
 * 000000014042EEDE: call    KiSaveDebugRegisterState
 * 000000014042EEE3: cld
 * 000000014042EEE4: stmxcsr [rbp+0D8h+var_12C]
 * 000000014042EEE8: ldmxcsr dword ptr gs:180h
 * 000000014042EEF1: movaps  [rbp+0D8h+var_E8], xmm0
 * 000000014042EEF5: movaps  [rbp+0D8h+var_D8], xmm1
 * 000000014042EEF9: movaps  [rbp+0D8h+var_C8], xmm2
 * 000000014042EEFD: movaps  [rbp+0D8h+var_B8], xmm3
 * 000000014042EF01: movaps  [rbp+0D8h+var_A8], xmm4
 * 000000014042EF05: movaps  [rbp+0D8h+var_98], xmm5
 * 000000014042EF09: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 000000014042EF10: jz      short loc_14042EF1E
 * 000000014042EF12: test    [rbp+0D8h+arg_8], 1
 * 000000014042EF19: jz      short loc_14042EF1E
 * 000000014042EF1B: stac
 * 000000014042EF1E: mov     eax, [rbp+0E0h]
 * 000000014042EF24: test    [rbp+0D8h+arg_10], 200h
 * 000000014042EF2E: jz      short loc_14042EF31
 * 000000014042EF30: sti
 * 000000014042EF31: mov     ecx, 0C0000005h
 * 000000014042EF36: mov     edx, 2
 * 000000014042EF3B: mov     r8, [rbp+0D8h+arg_0]
 * 000000014042EF42: mov     r9d, [rbp+0E0h]
 * 000000014042EF49: or      r9d, 3
 * 000000014042EF4D: and     r9d, 0FFFFh
 * 000000014042EF54: test    [rbp+0D8h+arg_8], 1
 * 000000014042EF5B: jnz     short loc_14042EF61
 * 000000014042EF5D: or      r9, 0FFFFFFFFFFFFFFFFh
 * 000000014042EF61: xor     r10, r10
 * 000000014042EF64: call    KiExceptionDispatch
 * 000000014042EF69: nop
 * 000000014042EF6A: retn
 */
