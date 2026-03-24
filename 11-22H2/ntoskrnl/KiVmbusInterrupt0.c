/*
 * XREFs of KiVmbusInterrupt0 @ 0x140424BA0
 * Callers:
 *     KiVmbusInterrupt0Shadow @ 0x140AF8040 (KiVmbusInterrupt0Shadow.c)
 * Callees:
 *     KiCheckForSListAddress @ 0x14030FC00 (KiCheckForSListAddress.c)
 *     KeWakeProcessor @ 0x140341390 (KeWakeProcessor.c)
 *     KiSaveDebugRegisterState @ 0x14041E8E0 (KiSaveDebugRegisterState.c)
 *     KiVmbusInterrupt0 @ 0x140424BA0 (KiVmbusInterrupt0.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140434D00 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiVmbusInterrupt0 @ 0x140424BA0
 * Reason: Hex-Rays returned no pseudocode for 0x140424BA0
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140424BA0: push    1
 * 0000000140424BA2: push    rbp
 * 0000000140424BA3: push    rsi
 * 0000000140424BA4: sub     rsp, 150h
 * 0000000140424BAB: lea     rbp, [rsp+168h+var_E8]
 * 0000000140424BB3: mov     byte ptr [rbp-55h], 0
 * 0000000140424BB7: mov     [rbp-50h], rax
 * 0000000140424BBB: mov     [rbp-48h], rcx
 * 0000000140424BBF: mov     [rbp-40h], rdx
 * 0000000140424BC3: mov     [rbp-38h], r8
 * 0000000140424BC7: mov     [rbp-30h], r9
 * 0000000140424BCB: mov     [rbp-28h], r10
 * 0000000140424BCF: mov     [rbp-20h], r11
 * 0000000140424BD3: test    byte ptr [rbp+0F0h], 1
 * 0000000140424BDA: jnz     short loc_140424C16
 * 0000000140424BDC: xor     edx, edx
 * 0000000140424BDE: rdsspq  rdx
 * 0000000140424BE3: mov     [rbp+58h], rdx
 * 0000000140424BE7: lfence
 * 0000000140424BEA: test    word ptr gs:860h, 1
 * 0000000140424BF5: jnz     short loc_140424BFF
 * 0000000140424BF7: lfence
 * 0000000140424BFA: jmp     loc_140424E86
 * 0000000140424BFF: movzx   eax, word ptr gs:864h
 * 0000000140424C08: mov     ecx, 48h ; 'H'
 * 0000000140424C0D: xor     edx, edx
 * 0000000140424C0F: wrmsr
 * 0000000140424C11: jmp     loc_140424E86
 * 0000000140424C16: test    cs:KiKvaShadow, 1
 * 0000000140424C1D: jnz     short loc_140424C22
 * 0000000140424C1F: swapgs
 * 0000000140424C22: lfence
 * 0000000140424C25: mov     rcx, gs:95A8h
 * 0000000140424C2E: test    rcx, rcx
 * 0000000140424C31: jz      short loc_140424C52
 * 0000000140424C33: rdsspq  rdx
 * 0000000140424C38: mov     r10, gs:95A0h
 * 0000000140424C41: add     r10, 8
 * 0000000140424C45: cmp     rdx, r10
 * 0000000140424C48: jnz     short loc_140424C52
 * 0000000140424C4A: rstorssp qword ptr [rcx]
 * 0000000140424C4E: saveprevssp
 * 0000000140424C52: mov     r10, gs:188h
 * 0000000140424C5B: mov     rcx, gs:188h
 * 0000000140424C64: mov     rcx, [rcx+220h]
 * 0000000140424C6B: mov     rcx, [rcx+9E0h]
 * 0000000140424C72: mov     gs:858h, rcx
 * 0000000140424C7B: mov     cx, gs:850h
 * 0000000140424C84: mov     gs:852h, cx
 * 0000000140424C8D: mov     cx, gs:860h
 * 0000000140424C96: mov     gs:854h, cx
 * 0000000140424C9F: movzx   eax, word ptr gs:866h
 * 0000000140424CA8: cmp     gs:864h, ax
 * 0000000140424CB1: jz      short loc_140424CC5
 * 0000000140424CB3: mov     gs:864h, ax
 * 0000000140424CBC: mov     ecx, 48h ; 'H'
 * 0000000140424CC1: xor     edx, edx
 * 0000000140424CC3: wrmsr
 * 0000000140424CC5: movzx   edx, word ptr gs:860h
 * 0000000140424CCE: test    edx, 8
 * 0000000140424CD4: jz      short loc_140424CED
 * 0000000140424CD6: mov     eax, 1
 * 0000000140424CDB: xor     edx, edx
 * 0000000140424CDD: mov     ecx, 49h ; 'I'
 * 0000000140424CE2: wrmsr
 * 0000000140424CE4: movzx   edx, word ptr gs:860h
 * 0000000140424CED: test    edx, 2
 * 0000000140424CF3: jz      loc_140424E30
 * 0000000140424CF9: call    loc_140424E0C
 * 0000000140424CFE: add     rsp, 8
 * 0000000140424D02: call    loc_140424E15
 * 0000000140424D07: add     rsp, 8
 * 0000000140424D0B: call    loc_140424CFE
 * 0000000140424D10: add     rsp, 8
 * 0000000140424D14: call    loc_140424D07
 * 0000000140424D19: add     rsp, 8
 * 0000000140424D1D: call    loc_140424D10
 * 0000000140424D22: add     rsp, 8
 * 0000000140424D26: call    loc_140424D19
 * 0000000140424D2B: add     rsp, 8
 * 0000000140424D2F: call    loc_140424D22
 * 0000000140424D34: add     rsp, 8
 * 0000000140424D38: call    loc_140424D2B
 * 0000000140424D3D: add     rsp, 8
 * 0000000140424D41: call    loc_140424D34
 * 0000000140424D46: add     rsp, 8
 * 0000000140424D4A: call    loc_140424D3D
 * 0000000140424D4F: add     rsp, 8
 * 0000000140424D53: call    loc_140424D46
 * 0000000140424D58: add     rsp, 8
 * 0000000140424D5C: call    loc_140424D4F
 * 0000000140424D61: add     rsp, 8
 * 0000000140424D65: call    loc_140424D58
 * 0000000140424D6A: add     rsp, 8
 * 0000000140424D6E: call    loc_140424D61
 * 0000000140424D73: add     rsp, 8
 * 0000000140424D77: call    loc_140424D6A
 * 0000000140424D7C: add     rsp, 8
 * 0000000140424D80: call    loc_140424D73
 * 0000000140424D85: add     rsp, 8
 * 0000000140424D89: call    loc_140424D7C
 * 0000000140424D8E: add     rsp, 8
 * 0000000140424D92: call    loc_140424D85
 * 0000000140424D97: add     rsp, 8
 * 0000000140424D9B: call    loc_140424D8E
 * 0000000140424DA0: add     rsp, 8
 * 0000000140424DA4: call    loc_140424D97
 * 0000000140424DA9: add     rsp, 8
 * 0000000140424DAD: call    loc_140424DA0
 * 0000000140424DB2: add     rsp, 8
 * 0000000140424DB6: call    loc_140424DA9
 * 0000000140424DBB: add     rsp, 8
 * 0000000140424DBF: call    loc_140424DB2
 * 0000000140424DC4: add     rsp, 8
 * 0000000140424DC8: call    loc_140424DBB
 * 0000000140424DCD: add     rsp, 8
 * 0000000140424DD1: call    loc_140424DC4
 * 0000000140424DD6: add     rsp, 8
 * 0000000140424DDA: call    loc_140424DCD
 * 0000000140424DDF: add     rsp, 8
 * 0000000140424DE3: call    loc_140424DD6
 * 0000000140424DE8: add     rsp, 8
 * 0000000140424DEC: call    loc_140424DDF
 * 0000000140424DF1: add     rsp, 8
 * 0000000140424DF5: call    loc_140424DE8
 * 0000000140424DFA: add     rsp, 8
 * 0000000140424DFE: call    loc_140424DF1
 * 0000000140424E03: add     rsp, 8
 * 0000000140424E07: call    loc_140424DFA
 * 0000000140424E0C: add     rsp, 8
 * 0000000140424E10: call    loc_140424E03
 * 0000000140424E15: add     rsp, 8
 * 0000000140424E19: mov     eax, 0DADAh
 * 0000000140424E1E: test    byte ptr gs:862h, 8
 * 0000000140424E27: jz      short loc_140424E30
 * 0000000140424E29: mov     al, 20h ; ' '
 * 0000000140424E2B: incsspq rax
 * 0000000140424E30: test    edx, 200h
 * 0000000140424E36: jz      short loc_140424E3D
 * 0000000140424E38: call    KiFlushBhbDuringTrapEntryOrExit
 * 0000000140424E3D: lfence
 * 0000000140424E40: mov     byte ptr gs:856h, 0
 * 0000000140424E49: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 0000000140424E50: jz      short loc_140424E71
 * 0000000140424E52: mov     ecx, 6A7h
 * 0000000140424E57: rdmsr
 * 0000000140424E59: cmp     edx, 0
 * 0000000140424E5C: jz      short loc_140424E71
 * 0000000140424E5E: mov     ecx, edx
 * 0000000140424E60: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 0000000140424E66: cmp     edx, ecx
 * 0000000140424E68: jz      short loc_140424E71
 * 0000000140424E6A: mov     ecx, 6A7h
 * 0000000140424E6F: wrmsr
 * 0000000140424E71: test    byte ptr [r10+3], 3
 * 0000000140424E76: mov     word ptr [rbp+80h], 0
 * 0000000140424E7F: jz      short loc_140424E86
 * 0000000140424E81: call    KiSaveDebugRegisterState
 * 0000000140424E86: cld
 * 0000000140424E87: stmxcsr dword ptr [rbp-54h]
 * 0000000140424E8B: ldmxcsr dword ptr gs:180h
 * 0000000140424E94: movaps  xmmword ptr [rbp-10h], xmm0
 * 0000000140424E98: movaps  xmmword ptr [rbp+0], xmm1
 * 0000000140424E9C: movaps  xmmword ptr [rbp+10h], xmm2
 * 0000000140424EA0: movaps  xmmword ptr [rbp+20h], xmm3
 * 0000000140424EA4: movaps  xmmword ptr [rbp+30h], xmm4
 * 0000000140424EA8: movaps  xmmword ptr [rbp+40h], xmm5
 * 0000000140424EAC: cmp     byte ptr gs:82DAh, 0
 * 0000000140424EB5: jz      short loc_140424EBC
 * 0000000140424EB7: call    KeWakeProcessor
 * 0000000140424EBC: lea     rax, ExpInterlockedPopEntrySListResume
 * 0000000140424EC3: cmp     rax, [rbp+0E8h]
 * 0000000140424ECA: jnb     short loc_140424EE5
 * 0000000140424ECC: lea     rax, ExpInterlockedPopEntrySListEnd
 * 0000000140424ED3: cmp     rax, [rbp+0E8h]
 * 0000000140424EDA: jb      short loc_140424EE5
 * 0000000140424EDC: lea     rcx, [rbp-80h]
 * 0000000140424EE0: call    KiCheckForSListAddress
 * 0000000140424EE5: xor     esi, esi
 * 0000000140424EE7: inc     dword ptr gs:82C0h
 * 0000000140424EEF: jmp     KiVmbusInterruptDispatch
 */
