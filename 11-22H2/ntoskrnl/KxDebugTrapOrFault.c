/*
 * XREFs of KxDebugTrapOrFault @ 0x14042BB40
 * Callers:
 *     KiDebugTrapOrFault @ 0x14042B980 (KiDebugTrapOrFault.c)
 * Callees:
 *     KiSaveDebugRegisterState @ 0x14041E8E0 (KiSaveDebugRegisterState.c)
 *     KxDebugTrapOrFault @ 0x14042BB40 (KxDebugTrapOrFault.c)
 *     KiExceptionDispatch @ 0x140434340 (KiExceptionDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140434D00 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KxDebugTrapOrFault @ 0x14042BB40
 * Reason: Hex-Rays returned no pseudocode for 0x14042BB40
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014042BB40: sub     rsp, 8
 * 000000014042BB44: push    rbp
 * 000000014042BB45: sub     rsp, 158h
 * 000000014042BB4C: lea     rbp, [rsp+80h]
 * 000000014042BB54: mov     [rbp+0E8h+var_13D], 1
 * 000000014042BB58: mov     [rbp+0E8h+var_138], rax
 * 000000014042BB5C: mov     [rbp+0E8h+var_130], rcx
 * 000000014042BB60: mov     [rbp+0E8h+var_128], rdx
 * 000000014042BB64: mov     [rbp+0E8h+var_120], r8
 * 000000014042BB68: mov     [rbp+0E8h+var_118], r9
 * 000000014042BB6C: mov     [rbp+0E8h+var_110], r10
 * 000000014042BB70: mov     [rbp+0E8h+var_108], r11
 * 000000014042BB74: test    [rbp+0E8h+arg_0], 1
 * 000000014042BB7B: jnz     short loc_14042BBB7
 * 000000014042BB7D: xor     edx, edx
 * 000000014042BB7F: rdsspq  rdx
 * 000000014042BB84: mov     [rbp+0E8h+var_90], rdx
 * 000000014042BB88: lfence
 * 000000014042BB8B: test    word ptr gs:860h, 1
 * 000000014042BB96: jnz     short loc_14042BBA0
 * 000000014042BB98: lfence
 * 000000014042BB9B: jmp     loc_14042BE27
 * 000000014042BBA0: movzx   eax, word ptr gs:864h
 * 000000014042BBA9: mov     ecx, 48h ; 'H'
 * 000000014042BBAE: xor     edx, edx
 * 000000014042BBB0: wrmsr
 * 000000014042BBB2: jmp     loc_14042BE27
 * 000000014042BBB7: test    cs:KiKvaShadow, 1
 * 000000014042BBBE: jnz     short loc_14042BBC3
 * 000000014042BBC0: swapgs
 * 000000014042BBC3: lfence
 * 000000014042BBC6: mov     rcx, gs:95A8h
 * 000000014042BBCF: test    rcx, rcx
 * 000000014042BBD2: jz      short loc_14042BBF3
 * 000000014042BBD4: rdsspq  rdx
 * 000000014042BBD9: mov     r10, gs:95A0h
 * 000000014042BBE2: add     r10, 8
 * 000000014042BBE6: cmp     rdx, r10
 * 000000014042BBE9: jnz     short loc_14042BBF3
 * 000000014042BBEB: rstorssp qword ptr [rcx]
 * 000000014042BBEF: saveprevssp
 * 000000014042BBF3: mov     r10, gs:188h
 * 000000014042BBFC: mov     rcx, gs:188h
 * 000000014042BC05: mov     rcx, [rcx+220h]
 * 000000014042BC0C: mov     rcx, [rcx+9E0h]
 * 000000014042BC13: mov     gs:858h, rcx
 * 000000014042BC1C: mov     cx, gs:850h
 * 000000014042BC25: mov     gs:852h, cx
 * 000000014042BC2E: mov     cx, gs:860h
 * 000000014042BC37: mov     gs:854h, cx
 * 000000014042BC40: movzx   eax, word ptr gs:866h
 * 000000014042BC49: cmp     gs:864h, ax
 * 000000014042BC52: jz      short loc_14042BC66
 * 000000014042BC54: mov     gs:864h, ax
 * 000000014042BC5D: mov     ecx, 48h ; 'H'
 * 000000014042BC62: xor     edx, edx
 * 000000014042BC64: wrmsr
 * 000000014042BC66: movzx   edx, word ptr gs:860h
 * 000000014042BC6F: test    edx, 8
 * 000000014042BC75: jz      short loc_14042BC8E
 * 000000014042BC77: mov     eax, 1
 * 000000014042BC7C: xor     edx, edx
 * 000000014042BC7E: mov     ecx, 49h ; 'I'
 * 000000014042BC83: wrmsr
 * 000000014042BC85: movzx   edx, word ptr gs:860h
 * 000000014042BC8E: test    edx, 2
 * 000000014042BC94: jz      loc_14042BDD1
 * 000000014042BC9A: call    loc_14042BDAD
 * 000000014042BC9F: add     rsp, 8
 * 000000014042BCA3: call    loc_14042BDB6
 * 000000014042BCA8: add     rsp, 8
 * 000000014042BCAC: call    loc_14042BC9F
 * 000000014042BCB1: add     rsp, 8
 * 000000014042BCB5: call    loc_14042BCA8
 * 000000014042BCBA: add     rsp, 8
 * 000000014042BCBE: call    loc_14042BCB1
 * 000000014042BCC3: add     rsp, 8
 * 000000014042BCC7: call    loc_14042BCBA
 * 000000014042BCCC: add     rsp, 8
 * 000000014042BCD0: call    loc_14042BCC3
 * 000000014042BCD5: add     rsp, 8
 * 000000014042BCD9: call    loc_14042BCCC
 * 000000014042BCDE: add     rsp, 8
 * 000000014042BCE2: call    loc_14042BCD5
 * 000000014042BCE7: add     rsp, 8
 * 000000014042BCEB: call    loc_14042BCDE
 * 000000014042BCF0: add     rsp, 8
 * 000000014042BCF4: call    loc_14042BCE7
 * 000000014042BCF9: add     rsp, 8
 * 000000014042BCFD: call    loc_14042BCF0
 * 000000014042BD02: add     rsp, 8
 * 000000014042BD06: call    loc_14042BCF9
 * 000000014042BD0B: add     rsp, 8
 * 000000014042BD0F: call    loc_14042BD02
 * 000000014042BD14: add     rsp, 8
 * 000000014042BD18: call    loc_14042BD0B
 * 000000014042BD1D: add     rsp, 8
 * 000000014042BD21: call    loc_14042BD14
 * 000000014042BD26: add     rsp, 8
 * 000000014042BD2A: call    loc_14042BD1D
 * 000000014042BD2F: add     rsp, 8
 * 000000014042BD33: call    loc_14042BD26
 * 000000014042BD38: add     rsp, 8
 * 000000014042BD3C: call    loc_14042BD2F
 * 000000014042BD41: add     rsp, 8
 * 000000014042BD45: call    loc_14042BD38
 * 000000014042BD4A: add     rsp, 8
 * 000000014042BD4E: call    loc_14042BD41
 * 000000014042BD53: add     rsp, 8
 * 000000014042BD57: call    loc_14042BD4A
 * 000000014042BD5C: add     rsp, 8
 * 000000014042BD60: call    loc_14042BD53
 * 000000014042BD65: add     rsp, 8
 * 000000014042BD69: call    loc_14042BD5C
 * 000000014042BD6E: add     rsp, 8
 * 000000014042BD72: call    loc_14042BD65
 * 000000014042BD77: add     rsp, 8
 * 000000014042BD7B: call    loc_14042BD6E
 * 000000014042BD80: add     rsp, 8
 * 000000014042BD84: call    loc_14042BD77
 * 000000014042BD89: add     rsp, 8
 * 000000014042BD8D: call    loc_14042BD80
 * 000000014042BD92: add     rsp, 8
 * 000000014042BD96: call    loc_14042BD89
 * 000000014042BD9B: add     rsp, 8
 * 000000014042BD9F: call    loc_14042BD92
 * 000000014042BDA4: add     rsp, 8
 * 000000014042BDA8: call    loc_14042BD9B
 * 000000014042BDAD: add     rsp, 8
 * 000000014042BDB1: call    loc_14042BDA4
 * 000000014042BDB6: add     rsp, 8
 * 000000014042BDBA: mov     eax, 0DADAh
 * 000000014042BDBF: test    byte ptr gs:862h, 8
 * 000000014042BDC8: jz      short loc_14042BDD1
 * 000000014042BDCA: mov     al, 20h ; ' '
 * 000000014042BDCC: incsspq rax
 * 000000014042BDD1: test    edx, 200h
 * 000000014042BDD7: jz      short loc_14042BDDE
 * 000000014042BDD9: call    KiFlushBhbDuringTrapEntryOrExit
 * 000000014042BDDE: lfence
 * 000000014042BDE1: mov     byte ptr gs:856h, 0
 * 000000014042BDEA: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 000000014042BDF1: jz      short loc_14042BE12
 * 000000014042BDF3: mov     ecx, 6A7h
 * 000000014042BDF8: rdmsr
 * 000000014042BDFA: cmp     edx, 0
 * 000000014042BDFD: jz      short loc_14042BE12
 * 000000014042BDFF: mov     ecx, edx
 * 000000014042BE01: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 000000014042BE07: cmp     edx, ecx
 * 000000014042BE09: jz      short loc_14042BE12
 * 000000014042BE0B: mov     ecx, 6A7h
 * 000000014042BE10: wrmsr
 * 000000014042BE12: test    byte ptr [r10+3], 3
 * 000000014042BE17: mov     [rbp+0E8h+var_68], 0
 * 000000014042BE20: jz      short loc_14042BE27
 * 000000014042BE22: call    KiSaveDebugRegisterState
 * 000000014042BE27: cld
 * 000000014042BE28: stmxcsr [rbp+0E8h+var_13C]
 * 000000014042BE2C: ldmxcsr dword ptr gs:180h
 * 000000014042BE35: movaps  [rbp+0E8h+var_F8], xmm0
 * 000000014042BE39: movaps  [rbp+0E8h+var_E8], xmm1
 * 000000014042BE3D: movaps  [rbp+0E8h+var_D8], xmm2
 * 000000014042BE41: movaps  [rbp+0E8h+var_C8], xmm3
 * 000000014042BE45: movaps  [rbp+0E8h+var_B8], xmm4
 * 000000014042BE49: movaps  [rbp+0E8h+var_A8], xmm5
 * 000000014042BE4D: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 000000014042BE54: jz      short loc_14042BE62
 * 000000014042BE56: test    [rbp+0E8h+arg_0], 1
 * 000000014042BE5D: jz      short loc_14042BE62
 * 000000014042BE5F: stac
 * 000000014042BE62: test    [rbp+0E8h+arg_8], 200h
 * 000000014042BE6C: jz      short loc_14042BE6F
 * 000000014042BE6E: sti
 * 000000014042BE6F: test    cs:KiCpuTracingFlags, 2
 * 000000014042BE79: jz      short loc_14042BE8E
 * 000000014042BE7B: mov     ecx, 1D9h
 * 000000014042BE80: rdmsr
 * 000000014042BE82: or      eax, 1
 * 000000014042BE85: wrmsr
 * 000000014042BE87: xor     edx, edx
 * 000000014042BE89: jmp     loc_14042BF5D
 * 000000014042BE8E: xor     edx, edx
 * 000000014042BE90: test    [rbp+0E8h+arg_8], 100h
 * 000000014042BE9A: jz      loc_14042BF5D
 * 000000014042BEA0: test    byte ptr gs:8B22h, 2
 * 000000014042BEA9: jz      loc_14042BF5D
 * 000000014042BEAF: test    [rbp+0E8h+arg_0], 1
 * 000000014042BEB6: jnz     short loc_14042BF0F
 * 000000014042BEB8: mov     rax, dr7
 * 000000014042BEBB: test    ax, 200h
 * 000000014042BEBF: jz      loc_14042BF5D
 * 000000014042BEC5: test    ax, 100h
 * 000000014042BEC9: jz      loc_14042BF5D
 * 000000014042BECF: mov     r8d, cs:KiLastBranchTOSMSR
 * 000000014042BED6: or      r8d, r8d
 * 000000014042BED9: jz      short loc_14042BEE3
 * 000000014042BEDB: mov     ecx, r8d
 * 000000014042BEDE: rdmsr
 * 000000014042BEE0: mov     r8d, eax
 * 000000014042BEE3: mov     ecx, cs:KiLastBranchFromBaseMSR
 * 000000014042BEE9: add     ecx, r8d
 * 000000014042BEEC: rdmsr
 * 000000014042BEEE: mov     r9d, eax
 * 000000014042BEF1: shl     rdx, 20h
 * 000000014042BEF5: mov     ecx, cs:KiLastBranchToBaseMSR
 * 000000014042BEFB: or      r9, rdx
 * 000000014042BEFE: add     ecx, r8d
 * 000000014042BF01: rdmsr
 * 000000014042BF03: mov     r10d, eax
 * 000000014042BF06: shl     rdx, 20h
 * 000000014042BF0A: or      r10, rdx
 * 000000014042BF0D: jmp     short loc_14042BF58
 * 000000014042BF0F: test    [rbp+0E8h+var_68], 200h
 * 000000014042BF18: jz      short loc_14042BF5D
 * 000000014042BF1A: test    [rbp+0E8h+var_68], 100h
 * 000000014042BF23: jz      short loc_14042BF5D
 * 000000014042BF25: and     [rbp+0E8h+var_40], 0
 * 000000014042BF2D: and     [rbp+0E8h+var_48], 0
 * 000000014042BF35: mov     rcx, cs:MmUserProbeAddress
 * 000000014042BF3C: mov     r9, [rbp+0E8h+var_50]
 * 000000014042BF43: cmp     r9, rcx
 * 000000014042BF46: cmovnb  r9, rcx
 * 000000014042BF4A: mov     r10, [rbp+0E8h+var_58]
 * 000000014042BF51: cmp     r10, rcx
 * 000000014042BF54: cmovnb  r10, rcx
 * 000000014042BF58: mov     edx, 2
 * 000000014042BF5D: mov     ecx, 80000004h
 * 000000014042BF62: and     [rbp+0E8h+arg_8], 0FFFFFEFFh
 * 000000014042BF6C: mov     r8, [rbp+0E8h]
 * 000000014042BF73: call    KiExceptionDispatch
 * 000000014042BF78: nop
 * 000000014042BF79: retn
 */
