/*
 * XREFs of KiGeneralProtectionFault @ 0x14042F980
 * Callers:
 *     KiGeneralProtectionFaultShadow @ 0x140AF67C0 (KiGeneralProtectionFaultShadow.c)
 * Callees:
 *     KiSaveDebugRegisterState @ 0x14041F330 (KiSaveDebugRegisterState.c)
 *     KiGeneralProtectionFault @ 0x14042F980 (KiGeneralProtectionFault.c)
 *     KiExceptionDispatch @ 0x140434D40 (KiExceptionDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140435700 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiGeneralProtectionFault @ 0x14042F980
 * Reason: Hex-Rays returned no pseudocode for 0x14042F980
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014042F980: push    rbp
 * 000000014042F981: sub     rsp, 158h
 * 000000014042F988: lea     rbp, [rsp+80h]
 * 000000014042F990: mov     [rbp+0D8h+var_12D], 1
 * 000000014042F994: mov     [rbp+0D8h+var_128], rax
 * 000000014042F998: mov     [rbp+0D8h+var_120], rcx
 * 000000014042F99C: mov     [rbp+0D8h+var_118], rdx
 * 000000014042F9A0: mov     [rbp+0D8h+var_110], r8
 * 000000014042F9A4: mov     [rbp+0D8h+var_108], r9
 * 000000014042F9A8: mov     [rbp+0D8h+var_100], r10
 * 000000014042F9AC: mov     [rbp+0D8h+var_F8], r11
 * 000000014042F9B0: test    [rbp+0D8h+arg_8], 1
 * 000000014042F9B7: jnz     short loc_14042F9F3
 * 000000014042F9B9: xor     edx, edx
 * 000000014042F9BB: rdsspq  rdx
 * 000000014042F9C0: mov     [rbp+0D8h+var_80], rdx
 * 000000014042F9C4: lfence
 * 000000014042F9C7: test    word ptr gs:860h, 1
 * 000000014042F9D2: jnz     short loc_14042F9DC
 * 000000014042F9D4: lfence
 * 000000014042F9D7: jmp     loc_14042FC63
 * 000000014042F9DC: movzx   eax, word ptr gs:864h
 * 000000014042F9E5: mov     ecx, 48h ; 'H'
 * 000000014042F9EA: xor     edx, edx
 * 000000014042F9EC: wrmsr
 * 000000014042F9EE: jmp     loc_14042FC63
 * 000000014042F9F3: test    cs:KiKvaShadow, 1
 * 000000014042F9FA: jnz     short loc_14042F9FF
 * 000000014042F9FC: swapgs
 * 000000014042F9FF: lfence
 * 000000014042FA02: mov     rcx, gs:95A8h
 * 000000014042FA0B: test    rcx, rcx
 * 000000014042FA0E: jz      short loc_14042FA2F
 * 000000014042FA10: rdsspq  rdx
 * 000000014042FA15: mov     r10, gs:95A0h
 * 000000014042FA1E: add     r10, 8
 * 000000014042FA22: cmp     rdx, r10
 * 000000014042FA25: jnz     short loc_14042FA2F
 * 000000014042FA27: rstorssp qword ptr [rcx]
 * 000000014042FA2B: saveprevssp
 * 000000014042FA2F: mov     r10, gs:188h
 * 000000014042FA38: mov     rcx, gs:188h
 * 000000014042FA41: mov     rcx, [rcx+220h]
 * 000000014042FA48: mov     rcx, [rcx+9E0h]
 * 000000014042FA4F: mov     gs:858h, rcx
 * 000000014042FA58: mov     cx, gs:850h
 * 000000014042FA61: mov     gs:852h, cx
 * 000000014042FA6A: mov     cx, gs:860h
 * 000000014042FA73: mov     gs:854h, cx
 * 000000014042FA7C: movzx   eax, word ptr gs:866h
 * 000000014042FA85: cmp     gs:864h, ax
 * 000000014042FA8E: jz      short loc_14042FAA2
 * 000000014042FA90: mov     gs:864h, ax
 * 000000014042FA99: mov     ecx, 48h ; 'H'
 * 000000014042FA9E: xor     edx, edx
 * 000000014042FAA0: wrmsr
 * 000000014042FAA2: movzx   edx, word ptr gs:860h
 * 000000014042FAAB: test    edx, 8
 * 000000014042FAB1: jz      short loc_14042FACA
 * 000000014042FAB3: mov     eax, 1
 * 000000014042FAB8: xor     edx, edx
 * 000000014042FABA: mov     ecx, 49h ; 'I'
 * 000000014042FABF: wrmsr
 * 000000014042FAC1: movzx   edx, word ptr gs:860h
 * 000000014042FACA: test    edx, 2
 * 000000014042FAD0: jz      loc_14042FC0D
 * 000000014042FAD6: call    loc_14042FBE9
 * 000000014042FADB: add     rsp, 8
 * 000000014042FADF: call    loc_14042FBF2
 * 000000014042FAE4: add     rsp, 8
 * 000000014042FAE8: call    loc_14042FADB
 * 000000014042FAED: add     rsp, 8
 * 000000014042FAF1: call    loc_14042FAE4
 * 000000014042FAF6: add     rsp, 8
 * 000000014042FAFA: call    loc_14042FAED
 * 000000014042FAFF: add     rsp, 8
 * 000000014042FB03: call    loc_14042FAF6
 * 000000014042FB08: add     rsp, 8
 * 000000014042FB0C: call    loc_14042FAFF
 * 000000014042FB11: add     rsp, 8
 * 000000014042FB15: call    loc_14042FB08
 * 000000014042FB1A: add     rsp, 8
 * 000000014042FB1E: call    loc_14042FB11
 * 000000014042FB23: add     rsp, 8
 * 000000014042FB27: call    loc_14042FB1A
 * 000000014042FB2C: add     rsp, 8
 * 000000014042FB30: call    loc_14042FB23
 * 000000014042FB35: add     rsp, 8
 * 000000014042FB39: call    loc_14042FB2C
 * 000000014042FB3E: add     rsp, 8
 * 000000014042FB42: call    loc_14042FB35
 * 000000014042FB47: add     rsp, 8
 * 000000014042FB4B: call    loc_14042FB3E
 * 000000014042FB50: add     rsp, 8
 * 000000014042FB54: call    loc_14042FB47
 * 000000014042FB59: add     rsp, 8
 * 000000014042FB5D: call    loc_14042FB50
 * 000000014042FB62: add     rsp, 8
 * 000000014042FB66: call    loc_14042FB59
 * 000000014042FB6B: add     rsp, 8
 * 000000014042FB6F: call    loc_14042FB62
 * 000000014042FB74: add     rsp, 8
 * 000000014042FB78: call    loc_14042FB6B
 * 000000014042FB7D: add     rsp, 8
 * 000000014042FB81: call    loc_14042FB74
 * 000000014042FB86: add     rsp, 8
 * 000000014042FB8A: call    loc_14042FB7D
 * 000000014042FB8F: add     rsp, 8
 * 000000014042FB93: call    loc_14042FB86
 * 000000014042FB98: add     rsp, 8
 * 000000014042FB9C: call    loc_14042FB8F
 * 000000014042FBA1: add     rsp, 8
 * 000000014042FBA5: call    loc_14042FB98
 * 000000014042FBAA: add     rsp, 8
 * 000000014042FBAE: call    loc_14042FBA1
 * 000000014042FBB3: add     rsp, 8
 * 000000014042FBB7: call    loc_14042FBAA
 * 000000014042FBBC: add     rsp, 8
 * 000000014042FBC0: call    loc_14042FBB3
 * 000000014042FBC5: add     rsp, 8
 * 000000014042FBC9: call    loc_14042FBBC
 * 000000014042FBCE: add     rsp, 8
 * 000000014042FBD2: call    loc_14042FBC5
 * 000000014042FBD7: add     rsp, 8
 * 000000014042FBDB: call    loc_14042FBCE
 * 000000014042FBE0: add     rsp, 8
 * 000000014042FBE4: call    loc_14042FBD7
 * 000000014042FBE9: add     rsp, 8
 * 000000014042FBED: call    loc_14042FBE0
 * 000000014042FBF2: add     rsp, 8
 * 000000014042FBF6: mov     eax, 0DADAh
 * 000000014042FBFB: test    byte ptr gs:862h, 8
 * 000000014042FC04: jz      short loc_14042FC0D
 * 000000014042FC06: mov     al, 20h ; ' '
 * 000000014042FC08: incsspq rax
 * 000000014042FC0D: test    edx, 200h
 * 000000014042FC13: jz      short loc_14042FC1A
 * 000000014042FC15: call    KiFlushBhbDuringTrapEntryOrExit
 * 000000014042FC1A: lfence
 * 000000014042FC1D: mov     byte ptr gs:856h, 0
 * 000000014042FC26: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 000000014042FC2D: jz      short loc_14042FC4E
 * 000000014042FC2F: mov     ecx, 6A7h
 * 000000014042FC34: rdmsr
 * 000000014042FC36: cmp     edx, 0
 * 000000014042FC39: jz      short loc_14042FC4E
 * 000000014042FC3B: mov     ecx, edx
 * 000000014042FC3D: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 000000014042FC43: cmp     edx, ecx
 * 000000014042FC45: jz      short loc_14042FC4E
 * 000000014042FC47: mov     ecx, 6A7h
 * 000000014042FC4C: wrmsr
 * 000000014042FC4E: test    byte ptr [r10+3], 3
 * 000000014042FC53: mov     [rbp+0D8h+var_58], 0
 * 000000014042FC5C: jz      short loc_14042FC63
 * 000000014042FC5E: call    KiSaveDebugRegisterState
 * 000000014042FC63: cld
 * 000000014042FC64: stmxcsr [rbp+0D8h+var_12C]
 * 000000014042FC68: ldmxcsr dword ptr gs:180h
 * 000000014042FC71: movaps  [rbp+0D8h+var_E8], xmm0
 * 000000014042FC75: movaps  [rbp+0D8h+var_D8], xmm1
 * 000000014042FC79: movaps  [rbp+0D8h+var_C8], xmm2
 * 000000014042FC7D: movaps  [rbp+0D8h+var_B8], xmm3
 * 000000014042FC81: movaps  [rbp+0D8h+var_A8], xmm4
 * 000000014042FC85: movaps  [rbp+0D8h+var_98], xmm5
 * 000000014042FC89: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 000000014042FC90: jz      short loc_14042FC9E
 * 000000014042FC92: test    [rbp+0D8h+arg_8], 1
 * 000000014042FC99: jz      short loc_14042FC9E
 * 000000014042FC9B: stac
 * 000000014042FC9E: mov     eax, [rbp+0E0h]
 * 000000014042FCA4: test    [rbp+0D8h+arg_10], 200h
 * 000000014042FCAE: jz      short loc_14042FCB1
 * 000000014042FCB0: sti
 * 000000014042FCB1: mov     ecx, 10000001h
 * 000000014042FCB6: mov     edx, 2
 * 000000014042FCBB: mov     r9d, [rbp+0E0h]
 * 000000014042FCC2: and     r9d, 0FFFFh
 * 000000014042FCC9: xor     r10, r10
 * 000000014042FCCC: mov     r8, [rbp+0D8h+arg_0]
 * 000000014042FCD3: call    KiExceptionDispatch
 * 000000014042FCD8: nop
 * 000000014042FCD9: retn
 */
