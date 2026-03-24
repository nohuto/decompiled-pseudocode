/*
 * XREFs of KiBreakpointTrap @ 0x14042CB00
 * Callers:
 *     KiBreakpointTrapShadow @ 0x140AF62C0 (KiBreakpointTrapShadow.c)
 * Callees:
 *     KiSaveDebugRegisterState @ 0x14041EFA0 (KiSaveDebugRegisterState.c)
 *     KiBreakpointTrap @ 0x14042CB00 (KiBreakpointTrap.c)
 *     KiExceptionDispatch @ 0x140434940 (KiExceptionDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140435300 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiBreakpointTrap @ 0x14042CB00
 * Reason: Hex-Rays returned no pseudocode for 0x14042CB00
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014042CB00: sub     rsp, 8
 * 000000014042CB04: push    rbp
 * 000000014042CB05: sub     rsp, 158h
 * 000000014042CB0C: lea     rbp, [rsp+80h]
 * 000000014042CB14: mov     [rbp+0E8h+var_13D], 1
 * 000000014042CB18: mov     [rbp+0E8h+var_138], rax
 * 000000014042CB1C: mov     [rbp+0E8h+var_130], rcx
 * 000000014042CB20: mov     [rbp+0E8h+var_128], rdx
 * 000000014042CB24: mov     [rbp+0E8h+var_120], r8
 * 000000014042CB28: mov     [rbp+0E8h+var_118], r9
 * 000000014042CB2C: mov     [rbp+0E8h+var_110], r10
 * 000000014042CB30: mov     [rbp+0E8h+var_108], r11
 * 000000014042CB34: test    [rbp+0E8h+arg_0], 1
 * 000000014042CB3B: jnz     short loc_14042CB77
 * 000000014042CB3D: xor     edx, edx
 * 000000014042CB3F: rdsspq  rdx
 * 000000014042CB44: mov     [rbp+0E8h+var_90], rdx
 * 000000014042CB48: lfence
 * 000000014042CB4B: test    word ptr gs:860h, 1
 * 000000014042CB56: jnz     short loc_14042CB60
 * 000000014042CB58: lfence
 * 000000014042CB5B: jmp     loc_14042CDE7
 * 000000014042CB60: movzx   eax, word ptr gs:864h
 * 000000014042CB69: mov     ecx, 48h ; 'H'
 * 000000014042CB6E: xor     edx, edx
 * 000000014042CB70: wrmsr
 * 000000014042CB72: jmp     loc_14042CDE7
 * 000000014042CB77: test    cs:KiKvaShadow, 1
 * 000000014042CB7E: jnz     short loc_14042CB83
 * 000000014042CB80: swapgs
 * 000000014042CB83: lfence
 * 000000014042CB86: mov     rcx, gs:95A8h
 * 000000014042CB8F: test    rcx, rcx
 * 000000014042CB92: jz      short loc_14042CBB3
 * 000000014042CB94: rdsspq  rdx
 * 000000014042CB99: mov     r10, gs:95A0h
 * 000000014042CBA2: add     r10, 8
 * 000000014042CBA6: cmp     rdx, r10
 * 000000014042CBA9: jnz     short loc_14042CBB3
 * 000000014042CBAB: rstorssp qword ptr [rcx]
 * 000000014042CBAF: saveprevssp
 * 000000014042CBB3: mov     r10, gs:188h
 * 000000014042CBBC: mov     rcx, gs:188h
 * 000000014042CBC5: mov     rcx, [rcx+220h]
 * 000000014042CBCC: mov     rcx, [rcx+9E0h]
 * 000000014042CBD3: mov     gs:858h, rcx
 * 000000014042CBDC: mov     cx, gs:850h
 * 000000014042CBE5: mov     gs:852h, cx
 * 000000014042CBEE: mov     cx, gs:860h
 * 000000014042CBF7: mov     gs:854h, cx
 * 000000014042CC00: movzx   eax, word ptr gs:866h
 * 000000014042CC09: cmp     gs:864h, ax
 * 000000014042CC12: jz      short loc_14042CC26
 * 000000014042CC14: mov     gs:864h, ax
 * 000000014042CC1D: mov     ecx, 48h ; 'H'
 * 000000014042CC22: xor     edx, edx
 * 000000014042CC24: wrmsr
 * 000000014042CC26: movzx   edx, word ptr gs:860h
 * 000000014042CC2F: test    edx, 8
 * 000000014042CC35: jz      short loc_14042CC4E
 * 000000014042CC37: mov     eax, 1
 * 000000014042CC3C: xor     edx, edx
 * 000000014042CC3E: mov     ecx, 49h ; 'I'
 * 000000014042CC43: wrmsr
 * 000000014042CC45: movzx   edx, word ptr gs:860h
 * 000000014042CC4E: test    edx, 2
 * 000000014042CC54: jz      loc_14042CD91
 * 000000014042CC5A: call    loc_14042CD6D
 * 000000014042CC5F: add     rsp, 8
 * 000000014042CC63: call    loc_14042CD76
 * 000000014042CC68: add     rsp, 8
 * 000000014042CC6C: call    loc_14042CC5F
 * 000000014042CC71: add     rsp, 8
 * 000000014042CC75: call    loc_14042CC68
 * 000000014042CC7A: add     rsp, 8
 * 000000014042CC7E: call    loc_14042CC71
 * 000000014042CC83: add     rsp, 8
 * 000000014042CC87: call    loc_14042CC7A
 * 000000014042CC8C: add     rsp, 8
 * 000000014042CC90: call    loc_14042CC83
 * 000000014042CC95: add     rsp, 8
 * 000000014042CC99: call    loc_14042CC8C
 * 000000014042CC9E: add     rsp, 8
 * 000000014042CCA2: call    loc_14042CC95
 * 000000014042CCA7: add     rsp, 8
 * 000000014042CCAB: call    loc_14042CC9E
 * 000000014042CCB0: add     rsp, 8
 * 000000014042CCB4: call    loc_14042CCA7
 * 000000014042CCB9: add     rsp, 8
 * 000000014042CCBD: call    loc_14042CCB0
 * 000000014042CCC2: add     rsp, 8
 * 000000014042CCC6: call    loc_14042CCB9
 * 000000014042CCCB: add     rsp, 8
 * 000000014042CCCF: call    loc_14042CCC2
 * 000000014042CCD4: add     rsp, 8
 * 000000014042CCD8: call    loc_14042CCCB
 * 000000014042CCDD: add     rsp, 8
 * 000000014042CCE1: call    loc_14042CCD4
 * 000000014042CCE6: add     rsp, 8
 * 000000014042CCEA: call    loc_14042CCDD
 * 000000014042CCEF: add     rsp, 8
 * 000000014042CCF3: call    loc_14042CCE6
 * 000000014042CCF8: add     rsp, 8
 * 000000014042CCFC: call    loc_14042CCEF
 * 000000014042CD01: add     rsp, 8
 * 000000014042CD05: call    loc_14042CCF8
 * 000000014042CD0A: add     rsp, 8
 * 000000014042CD0E: call    loc_14042CD01
 * 000000014042CD13: add     rsp, 8
 * 000000014042CD17: call    loc_14042CD0A
 * 000000014042CD1C: add     rsp, 8
 * 000000014042CD20: call    loc_14042CD13
 * 000000014042CD25: add     rsp, 8
 * 000000014042CD29: call    loc_14042CD1C
 * 000000014042CD2E: add     rsp, 8
 * 000000014042CD32: call    loc_14042CD25
 * 000000014042CD37: add     rsp, 8
 * 000000014042CD3B: call    loc_14042CD2E
 * 000000014042CD40: add     rsp, 8
 * 000000014042CD44: call    loc_14042CD37
 * 000000014042CD49: add     rsp, 8
 * 000000014042CD4D: call    loc_14042CD40
 * 000000014042CD52: add     rsp, 8
 * 000000014042CD56: call    loc_14042CD49
 * 000000014042CD5B: add     rsp, 8
 * 000000014042CD5F: call    loc_14042CD52
 * 000000014042CD64: add     rsp, 8
 * 000000014042CD68: call    loc_14042CD5B
 * 000000014042CD6D: add     rsp, 8
 * 000000014042CD71: call    loc_14042CD64
 * 000000014042CD76: add     rsp, 8
 * 000000014042CD7A: mov     eax, 0DADAh
 * 000000014042CD7F: test    byte ptr gs:862h, 8
 * 000000014042CD88: jz      short loc_14042CD91
 * 000000014042CD8A: mov     al, 20h ; ' '
 * 000000014042CD8C: incsspq rax
 * 000000014042CD91: test    edx, 200h
 * 000000014042CD97: jz      short loc_14042CD9E
 * 000000014042CD99: call    KiFlushBhbDuringTrapEntryOrExit
 * 000000014042CD9E: lfence
 * 000000014042CDA1: mov     byte ptr gs:856h, 0
 * 000000014042CDAA: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 000000014042CDB1: jz      short loc_14042CDD2
 * 000000014042CDB3: mov     ecx, 6A7h
 * 000000014042CDB8: rdmsr
 * 000000014042CDBA: cmp     edx, 0
 * 000000014042CDBD: jz      short loc_14042CDD2
 * 000000014042CDBF: mov     ecx, edx
 * 000000014042CDC1: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 000000014042CDC7: cmp     edx, ecx
 * 000000014042CDC9: jz      short loc_14042CDD2
 * 000000014042CDCB: mov     ecx, 6A7h
 * 000000014042CDD0: wrmsr
 * 000000014042CDD2: test    byte ptr [r10+3], 3
 * 000000014042CDD7: mov     [rbp+0E8h+var_68], 0
 * 000000014042CDE0: jz      short loc_14042CDE7
 * 000000014042CDE2: call    KiSaveDebugRegisterState
 * 000000014042CDE7: cld
 * 000000014042CDE8: stmxcsr [rbp+0E8h+var_13C]
 * 000000014042CDEC: ldmxcsr dword ptr gs:180h
 * 000000014042CDF5: movaps  [rbp+0E8h+var_F8], xmm0
 * 000000014042CDF9: movaps  [rbp+0E8h+var_E8], xmm1
 * 000000014042CDFD: movaps  [rbp+0E8h+var_D8], xmm2
 * 000000014042CE01: movaps  [rbp+0E8h+var_C8], xmm3
 * 000000014042CE05: movaps  [rbp+0E8h+var_B8], xmm4
 * 000000014042CE09: movaps  [rbp+0E8h+var_A8], xmm5
 * 000000014042CE0D: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 000000014042CE14: jz      short loc_14042CE22
 * 000000014042CE16: test    [rbp+0E8h+arg_0], 1
 * 000000014042CE1D: jz      short loc_14042CE22
 * 000000014042CE1F: stac
 * 000000014042CE22: test    [rbp+0E8h+arg_8], 200h
 * 000000014042CE2C: jz      short loc_14042CE2F
 * 000000014042CE2E: sti
 * 000000014042CE2F: mov     ecx, 80000003h
 * 000000014042CE34: mov     edx, 1
 * 000000014042CE39: mov     r8, [rbp+0E8h]
 * 000000014042CE40: dec     r8
 * 000000014042CE43: mov     r9d, 0
 * 000000014042CE49: call    KiExceptionDispatch
 * 000000014042CE4E: nop
 * 000000014042CE4F: retn
 */
