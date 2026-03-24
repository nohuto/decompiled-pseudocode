/*
 * XREFs of KiDivideErrorFault @ 0x14042BC00
 * Callers:
 *     KiDivideErrorFaultShadow @ 0x140AF6100 (KiDivideErrorFaultShadow.c)
 * Callees:
 *     KiSaveDebugRegisterState @ 0x14041EFA0 (KiSaveDebugRegisterState.c)
 *     KiDivideErrorFault @ 0x14042BC00 (KiDivideErrorFault.c)
 *     KiExceptionDispatch @ 0x140434940 (KiExceptionDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140435300 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiDivideErrorFault @ 0x14042BC00
 * Reason: Hex-Rays returned no pseudocode for 0x14042BC00
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014042BC00: sub     rsp, 8
 * 000000014042BC04: push    rbp
 * 000000014042BC05: sub     rsp, 158h
 * 000000014042BC0C: lea     rbp, [rsp+80h]
 * 000000014042BC14: mov     [rbp+0E8h+var_13D], 1
 * 000000014042BC18: mov     [rbp+0E8h+var_138], rax
 * 000000014042BC1C: mov     [rbp+0E8h+var_130], rcx
 * 000000014042BC20: mov     [rbp+0E8h+var_128], rdx
 * 000000014042BC24: mov     [rbp+0E8h+var_120], r8
 * 000000014042BC28: mov     [rbp+0E8h+var_118], r9
 * 000000014042BC2C: mov     [rbp+0E8h+var_110], r10
 * 000000014042BC30: mov     [rbp+0E8h+var_108], r11
 * 000000014042BC34: test    [rbp+0E8h+arg_0], 1
 * 000000014042BC3B: jnz     short loc_14042BC77
 * 000000014042BC3D: xor     edx, edx
 * 000000014042BC3F: rdsspq  rdx
 * 000000014042BC44: mov     [rbp+0E8h+var_90], rdx
 * 000000014042BC48: lfence
 * 000000014042BC4B: test    word ptr gs:860h, 1
 * 000000014042BC56: jnz     short loc_14042BC60
 * 000000014042BC58: lfence
 * 000000014042BC5B: jmp     loc_14042BEE7
 * 000000014042BC60: movzx   eax, word ptr gs:864h
 * 000000014042BC69: mov     ecx, 48h ; 'H'
 * 000000014042BC6E: xor     edx, edx
 * 000000014042BC70: wrmsr
 * 000000014042BC72: jmp     loc_14042BEE7
 * 000000014042BC77: test    cs:KiKvaShadow, 1
 * 000000014042BC7E: jnz     short loc_14042BC83
 * 000000014042BC80: swapgs
 * 000000014042BC83: lfence
 * 000000014042BC86: mov     rcx, gs:95A8h
 * 000000014042BC8F: test    rcx, rcx
 * 000000014042BC92: jz      short loc_14042BCB3
 * 000000014042BC94: rdsspq  rdx
 * 000000014042BC99: mov     r10, gs:95A0h
 * 000000014042BCA2: add     r10, 8
 * 000000014042BCA6: cmp     rdx, r10
 * 000000014042BCA9: jnz     short loc_14042BCB3
 * 000000014042BCAB: rstorssp qword ptr [rcx]
 * 000000014042BCAF: saveprevssp
 * 000000014042BCB3: mov     r10, gs:188h
 * 000000014042BCBC: mov     rcx, gs:188h
 * 000000014042BCC5: mov     rcx, [rcx+220h]
 * 000000014042BCCC: mov     rcx, [rcx+9E0h]
 * 000000014042BCD3: mov     gs:858h, rcx
 * 000000014042BCDC: mov     cx, gs:850h
 * 000000014042BCE5: mov     gs:852h, cx
 * 000000014042BCEE: mov     cx, gs:860h
 * 000000014042BCF7: mov     gs:854h, cx
 * 000000014042BD00: movzx   eax, word ptr gs:866h
 * 000000014042BD09: cmp     gs:864h, ax
 * 000000014042BD12: jz      short loc_14042BD26
 * 000000014042BD14: mov     gs:864h, ax
 * 000000014042BD1D: mov     ecx, 48h ; 'H'
 * 000000014042BD22: xor     edx, edx
 * 000000014042BD24: wrmsr
 * 000000014042BD26: movzx   edx, word ptr gs:860h
 * 000000014042BD2F: test    edx, 8
 * 000000014042BD35: jz      short loc_14042BD4E
 * 000000014042BD37: mov     eax, 1
 * 000000014042BD3C: xor     edx, edx
 * 000000014042BD3E: mov     ecx, 49h ; 'I'
 * 000000014042BD43: wrmsr
 * 000000014042BD45: movzx   edx, word ptr gs:860h
 * 000000014042BD4E: test    edx, 2
 * 000000014042BD54: jz      loc_14042BE91
 * 000000014042BD5A: call    loc_14042BE6D
 * 000000014042BD5F: add     rsp, 8
 * 000000014042BD63: call    loc_14042BE76
 * 000000014042BD68: add     rsp, 8
 * 000000014042BD6C: call    loc_14042BD5F
 * 000000014042BD71: add     rsp, 8
 * 000000014042BD75: call    loc_14042BD68
 * 000000014042BD7A: add     rsp, 8
 * 000000014042BD7E: call    loc_14042BD71
 * 000000014042BD83: add     rsp, 8
 * 000000014042BD87: call    loc_14042BD7A
 * 000000014042BD8C: add     rsp, 8
 * 000000014042BD90: call    loc_14042BD83
 * 000000014042BD95: add     rsp, 8
 * 000000014042BD99: call    loc_14042BD8C
 * 000000014042BD9E: add     rsp, 8
 * 000000014042BDA2: call    loc_14042BD95
 * 000000014042BDA7: add     rsp, 8
 * 000000014042BDAB: call    loc_14042BD9E
 * 000000014042BDB0: add     rsp, 8
 * 000000014042BDB4: call    loc_14042BDA7
 * 000000014042BDB9: add     rsp, 8
 * 000000014042BDBD: call    loc_14042BDB0
 * 000000014042BDC2: add     rsp, 8
 * 000000014042BDC6: call    loc_14042BDB9
 * 000000014042BDCB: add     rsp, 8
 * 000000014042BDCF: call    loc_14042BDC2
 * 000000014042BDD4: add     rsp, 8
 * 000000014042BDD8: call    loc_14042BDCB
 * 000000014042BDDD: add     rsp, 8
 * 000000014042BDE1: call    loc_14042BDD4
 * 000000014042BDE6: add     rsp, 8
 * 000000014042BDEA: call    loc_14042BDDD
 * 000000014042BDEF: add     rsp, 8
 * 000000014042BDF3: call    loc_14042BDE6
 * 000000014042BDF8: add     rsp, 8
 * 000000014042BDFC: call    loc_14042BDEF
 * 000000014042BE01: add     rsp, 8
 * 000000014042BE05: call    loc_14042BDF8
 * 000000014042BE0A: add     rsp, 8
 * 000000014042BE0E: call    loc_14042BE01
 * 000000014042BE13: add     rsp, 8
 * 000000014042BE17: call    loc_14042BE0A
 * 000000014042BE1C: add     rsp, 8
 * 000000014042BE20: call    loc_14042BE13
 * 000000014042BE25: add     rsp, 8
 * 000000014042BE29: call    loc_14042BE1C
 * 000000014042BE2E: add     rsp, 8
 * 000000014042BE32: call    loc_14042BE25
 * 000000014042BE37: add     rsp, 8
 * 000000014042BE3B: call    loc_14042BE2E
 * 000000014042BE40: add     rsp, 8
 * 000000014042BE44: call    loc_14042BE37
 * 000000014042BE49: add     rsp, 8
 * 000000014042BE4D: call    loc_14042BE40
 * 000000014042BE52: add     rsp, 8
 * 000000014042BE56: call    loc_14042BE49
 * 000000014042BE5B: add     rsp, 8
 * 000000014042BE5F: call    loc_14042BE52
 * 000000014042BE64: add     rsp, 8
 * 000000014042BE68: call    loc_14042BE5B
 * 000000014042BE6D: add     rsp, 8
 * 000000014042BE71: call    loc_14042BE64
 * 000000014042BE76: add     rsp, 8
 * 000000014042BE7A: mov     eax, 0DADAh
 * 000000014042BE7F: test    byte ptr gs:862h, 8
 * 000000014042BE88: jz      short loc_14042BE91
 * 000000014042BE8A: mov     al, 20h ; ' '
 * 000000014042BE8C: incsspq rax
 * 000000014042BE91: test    edx, 200h
 * 000000014042BE97: jz      short loc_14042BE9E
 * 000000014042BE99: call    KiFlushBhbDuringTrapEntryOrExit
 * 000000014042BE9E: lfence
 * 000000014042BEA1: mov     byte ptr gs:856h, 0
 * 000000014042BEAA: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 000000014042BEB1: jz      short loc_14042BED2
 * 000000014042BEB3: mov     ecx, 6A7h
 * 000000014042BEB8: rdmsr
 * 000000014042BEBA: cmp     edx, 0
 * 000000014042BEBD: jz      short loc_14042BED2
 * 000000014042BEBF: mov     ecx, edx
 * 000000014042BEC1: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 000000014042BEC7: cmp     edx, ecx
 * 000000014042BEC9: jz      short loc_14042BED2
 * 000000014042BECB: mov     ecx, 6A7h
 * 000000014042BED0: wrmsr
 * 000000014042BED2: test    byte ptr [r10+3], 3
 * 000000014042BED7: mov     [rbp+0E8h+var_68], 0
 * 000000014042BEE0: jz      short loc_14042BEE7
 * 000000014042BEE2: call    KiSaveDebugRegisterState
 * 000000014042BEE7: cld
 * 000000014042BEE8: stmxcsr [rbp+0E8h+var_13C]
 * 000000014042BEEC: ldmxcsr dword ptr gs:180h
 * 000000014042BEF5: movaps  [rbp+0E8h+var_F8], xmm0
 * 000000014042BEF9: movaps  [rbp+0E8h+var_E8], xmm1
 * 000000014042BEFD: movaps  [rbp+0E8h+var_D8], xmm2
 * 000000014042BF01: movaps  [rbp+0E8h+var_C8], xmm3
 * 000000014042BF05: movaps  [rbp+0E8h+var_B8], xmm4
 * 000000014042BF09: movaps  [rbp+0E8h+var_A8], xmm5
 * 000000014042BF0D: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 000000014042BF14: jz      short loc_14042BF22
 * 000000014042BF16: test    [rbp+0E8h+arg_0], 1
 * 000000014042BF1D: jz      short loc_14042BF22
 * 000000014042BF1F: stac
 * 000000014042BF22: test    [rbp+0E8h+arg_8], 200h
 * 000000014042BF2C: jz      short loc_14042BF2F
 * 000000014042BF2E: sti
 * 000000014042BF2F: mov     ecx, 10000003h
 * 000000014042BF34: xor     edx, edx
 * 000000014042BF36: mov     r8, [rbp+0E8h]
 * 000000014042BF3D: call    KiExceptionDispatch
 * 000000014042BF42: nop
 * 000000014042BF43: retn
 */
