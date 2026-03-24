/*
 * XREFs of KiOverflowTrap @ 0x14042C880
 * Callers:
 *     KiOverflowTrapShadow @ 0x140AF7340 (KiOverflowTrapShadow.c)
 * Callees:
 *     KiSaveDebugRegisterState @ 0x14041E8E0 (KiSaveDebugRegisterState.c)
 *     KiOverflowTrap @ 0x14042C880 (KiOverflowTrap.c)
 *     KiExceptionDispatch @ 0x140434340 (KiExceptionDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140434D00 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiOverflowTrap @ 0x14042C880
 * Reason: Hex-Rays returned no pseudocode for 0x14042C880
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014042C880: sub     rsp, 8
 * 000000014042C884: push    rbp
 * 000000014042C885: sub     rsp, 158h
 * 000000014042C88C: lea     rbp, [rsp+80h]
 * 000000014042C894: mov     [rbp+0E8h+var_13D], 1
 * 000000014042C898: mov     [rbp+0E8h+var_138], rax
 * 000000014042C89C: mov     [rbp+0E8h+var_130], rcx
 * 000000014042C8A0: mov     [rbp+0E8h+var_128], rdx
 * 000000014042C8A4: mov     [rbp+0E8h+var_120], r8
 * 000000014042C8A8: mov     [rbp+0E8h+var_118], r9
 * 000000014042C8AC: mov     [rbp+0E8h+var_110], r10
 * 000000014042C8B0: mov     [rbp+0E8h+var_108], r11
 * 000000014042C8B4: test    [rbp+0E8h+arg_0], 1
 * 000000014042C8BB: jnz     short loc_14042C8F7
 * 000000014042C8BD: xor     edx, edx
 * 000000014042C8BF: rdsspq  rdx
 * 000000014042C8C4: mov     [rbp+0E8h+var_90], rdx
 * 000000014042C8C8: lfence
 * 000000014042C8CB: test    word ptr gs:860h, 1
 * 000000014042C8D6: jnz     short loc_14042C8E0
 * 000000014042C8D8: lfence
 * 000000014042C8DB: jmp     loc_14042CB67
 * 000000014042C8E0: movzx   eax, word ptr gs:864h
 * 000000014042C8E9: mov     ecx, 48h ; 'H'
 * 000000014042C8EE: xor     edx, edx
 * 000000014042C8F0: wrmsr
 * 000000014042C8F2: jmp     loc_14042CB67
 * 000000014042C8F7: test    cs:KiKvaShadow, 1
 * 000000014042C8FE: jnz     short loc_14042C903
 * 000000014042C900: swapgs
 * 000000014042C903: lfence
 * 000000014042C906: mov     rcx, gs:95A8h
 * 000000014042C90F: test    rcx, rcx
 * 000000014042C912: jz      short loc_14042C933
 * 000000014042C914: rdsspq  rdx
 * 000000014042C919: mov     r10, gs:95A0h
 * 000000014042C922: add     r10, 8
 * 000000014042C926: cmp     rdx, r10
 * 000000014042C929: jnz     short loc_14042C933
 * 000000014042C92B: rstorssp qword ptr [rcx]
 * 000000014042C92F: saveprevssp
 * 000000014042C933: mov     r10, gs:188h
 * 000000014042C93C: mov     rcx, gs:188h
 * 000000014042C945: mov     rcx, [rcx+220h]
 * 000000014042C94C: mov     rcx, [rcx+9E0h]
 * 000000014042C953: mov     gs:858h, rcx
 * 000000014042C95C: mov     cx, gs:850h
 * 000000014042C965: mov     gs:852h, cx
 * 000000014042C96E: mov     cx, gs:860h
 * 000000014042C977: mov     gs:854h, cx
 * 000000014042C980: movzx   eax, word ptr gs:866h
 * 000000014042C989: cmp     gs:864h, ax
 * 000000014042C992: jz      short loc_14042C9A6
 * 000000014042C994: mov     gs:864h, ax
 * 000000014042C99D: mov     ecx, 48h ; 'H'
 * 000000014042C9A2: xor     edx, edx
 * 000000014042C9A4: wrmsr
 * 000000014042C9A6: movzx   edx, word ptr gs:860h
 * 000000014042C9AF: test    edx, 8
 * 000000014042C9B5: jz      short loc_14042C9CE
 * 000000014042C9B7: mov     eax, 1
 * 000000014042C9BC: xor     edx, edx
 * 000000014042C9BE: mov     ecx, 49h ; 'I'
 * 000000014042C9C3: wrmsr
 * 000000014042C9C5: movzx   edx, word ptr gs:860h
 * 000000014042C9CE: test    edx, 2
 * 000000014042C9D4: jz      loc_14042CB11
 * 000000014042C9DA: call    loc_14042CAED
 * 000000014042C9DF: add     rsp, 8
 * 000000014042C9E3: call    loc_14042CAF6
 * 000000014042C9E8: add     rsp, 8
 * 000000014042C9EC: call    loc_14042C9DF
 * 000000014042C9F1: add     rsp, 8
 * 000000014042C9F5: call    loc_14042C9E8
 * 000000014042C9FA: add     rsp, 8
 * 000000014042C9FE: call    loc_14042C9F1
 * 000000014042CA03: add     rsp, 8
 * 000000014042CA07: call    loc_14042C9FA
 * 000000014042CA0C: add     rsp, 8
 * 000000014042CA10: call    loc_14042CA03
 * 000000014042CA15: add     rsp, 8
 * 000000014042CA19: call    loc_14042CA0C
 * 000000014042CA1E: add     rsp, 8
 * 000000014042CA22: call    loc_14042CA15
 * 000000014042CA27: add     rsp, 8
 * 000000014042CA2B: call    loc_14042CA1E
 * 000000014042CA30: add     rsp, 8
 * 000000014042CA34: call    loc_14042CA27
 * 000000014042CA39: add     rsp, 8
 * 000000014042CA3D: call    loc_14042CA30
 * 000000014042CA42: add     rsp, 8
 * 000000014042CA46: call    loc_14042CA39
 * 000000014042CA4B: add     rsp, 8
 * 000000014042CA4F: call    loc_14042CA42
 * 000000014042CA54: add     rsp, 8
 * 000000014042CA58: call    loc_14042CA4B
 * 000000014042CA5D: add     rsp, 8
 * 000000014042CA61: call    loc_14042CA54
 * 000000014042CA66: add     rsp, 8
 * 000000014042CA6A: call    loc_14042CA5D
 * 000000014042CA6F: add     rsp, 8
 * 000000014042CA73: call    loc_14042CA66
 * 000000014042CA78: add     rsp, 8
 * 000000014042CA7C: call    loc_14042CA6F
 * 000000014042CA81: add     rsp, 8
 * 000000014042CA85: call    loc_14042CA78
 * 000000014042CA8A: add     rsp, 8
 * 000000014042CA8E: call    loc_14042CA81
 * 000000014042CA93: add     rsp, 8
 * 000000014042CA97: call    loc_14042CA8A
 * 000000014042CA9C: add     rsp, 8
 * 000000014042CAA0: call    loc_14042CA93
 * 000000014042CAA5: add     rsp, 8
 * 000000014042CAA9: call    loc_14042CA9C
 * 000000014042CAAE: add     rsp, 8
 * 000000014042CAB2: call    loc_14042CAA5
 * 000000014042CAB7: add     rsp, 8
 * 000000014042CABB: call    loc_14042CAAE
 * 000000014042CAC0: add     rsp, 8
 * 000000014042CAC4: call    loc_14042CAB7
 * 000000014042CAC9: add     rsp, 8
 * 000000014042CACD: call    loc_14042CAC0
 * 000000014042CAD2: add     rsp, 8
 * 000000014042CAD6: call    loc_14042CAC9
 * 000000014042CADB: add     rsp, 8
 * 000000014042CADF: call    loc_14042CAD2
 * 000000014042CAE4: add     rsp, 8
 * 000000014042CAE8: call    loc_14042CADB
 * 000000014042CAED: add     rsp, 8
 * 000000014042CAF1: call    loc_14042CAE4
 * 000000014042CAF6: add     rsp, 8
 * 000000014042CAFA: mov     eax, 0DADAh
 * 000000014042CAFF: test    byte ptr gs:862h, 8
 * 000000014042CB08: jz      short loc_14042CB11
 * 000000014042CB0A: mov     al, 20h ; ' '
 * 000000014042CB0C: incsspq rax
 * 000000014042CB11: test    edx, 200h
 * 000000014042CB17: jz      short loc_14042CB1E
 * 000000014042CB19: call    KiFlushBhbDuringTrapEntryOrExit
 * 000000014042CB1E: lfence
 * 000000014042CB21: mov     byte ptr gs:856h, 0
 * 000000014042CB2A: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 000000014042CB31: jz      short loc_14042CB52
 * 000000014042CB33: mov     ecx, 6A7h
 * 000000014042CB38: rdmsr
 * 000000014042CB3A: cmp     edx, 0
 * 000000014042CB3D: jz      short loc_14042CB52
 * 000000014042CB3F: mov     ecx, edx
 * 000000014042CB41: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 000000014042CB47: cmp     edx, ecx
 * 000000014042CB49: jz      short loc_14042CB52
 * 000000014042CB4B: mov     ecx, 6A7h
 * 000000014042CB50: wrmsr
 * 000000014042CB52: test    byte ptr [r10+3], 3
 * 000000014042CB57: mov     [rbp+0E8h+var_68], 0
 * 000000014042CB60: jz      short loc_14042CB67
 * 000000014042CB62: call    KiSaveDebugRegisterState
 * 000000014042CB67: cld
 * 000000014042CB68: stmxcsr [rbp+0E8h+var_13C]
 * 000000014042CB6C: ldmxcsr dword ptr gs:180h
 * 000000014042CB75: movaps  [rbp+0E8h+var_F8], xmm0
 * 000000014042CB79: movaps  [rbp+0E8h+var_E8], xmm1
 * 000000014042CB7D: movaps  [rbp+0E8h+var_D8], xmm2
 * 000000014042CB81: movaps  [rbp+0E8h+var_C8], xmm3
 * 000000014042CB85: movaps  [rbp+0E8h+var_B8], xmm4
 * 000000014042CB89: movaps  [rbp+0E8h+var_A8], xmm5
 * 000000014042CB8D: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 000000014042CB94: jz      short loc_14042CBA2
 * 000000014042CB96: test    [rbp+0E8h+arg_0], 1
 * 000000014042CB9D: jz      short loc_14042CBA2
 * 000000014042CB9F: stac
 * 000000014042CBA2: test    [rbp+0E8h+arg_8], 200h
 * 000000014042CBAC: jz      short loc_14042CBAF
 * 000000014042CBAE: sti
 * 000000014042CBAF: mov     ecx, 0C0000095h
 * 000000014042CBB4: xor     edx, edx
 * 000000014042CBB6: mov     r8, [rbp+0E8h]
 * 000000014042CBBD: dec     r8
 * 000000014042CBC0: call    KiExceptionDispatch
 * 000000014042CBC5: nop
 * 000000014042CBC6: retn
 */
