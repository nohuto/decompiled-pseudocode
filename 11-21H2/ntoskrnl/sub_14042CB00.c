/*
 * XREFs of sub_14042CB00 @ 0x14042CB00
 * Callers:
 *     sub_14042C940 @ 0x14042C940 (sub_14042C940.c)
 * Callees:
 *     sub_14041F920 @ 0x14041F920 (sub_14041F920.c)
 *     sub_14042CB00 @ 0x14042CB00 (sub_14042CB00.c)
 *     sub_140434E40 @ 0x140434E40 (sub_140434E40.c)
 *     sub_1404357C0 @ 0x1404357C0 (sub_1404357C0.c)
 */

/*
 * Hex-Rays decompilation failed for sub_14042CB00 @ 0x14042CB00
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
 * 000000014042CB5B: jmp     loc_14042CDBF
 * 000000014042CB60: movzx   eax, word ptr gs:864h
 * 000000014042CB69: mov     ecx, 48h ; 'H'
 * 000000014042CB6E: xor     edx, edx
 * 000000014042CB70: wrmsr
 * 000000014042CB72: jmp     loc_14042CDBF
 * 000000014042CB77: test    cs:byte_140E01840, 1
 * 000000014042CB7E: jnz     short loc_14042CB83
 * 000000014042CB80: swapgs
 * 000000014042CB83: lfence
 * 000000014042CB86: mov     rcx, gs:9828h
 * 000000014042CB8F: test    rcx, rcx
 * 000000014042CB92: jz      short loc_14042CBB3
 * 000000014042CB94: rdsspq  rdx
 * 000000014042CB99: mov     r10, gs:9820h
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
 * 000000014042CD99: call    sub_1404357C0
 * 000000014042CD9E: lfence
 * 000000014042CDA1: mov     byte ptr gs:856h, 0
 * 000000014042CDAA: test    byte ptr [r10+3], 3
 * 000000014042CDAF: mov     [rbp+0E8h+var_68], 0
 * 000000014042CDB8: jz      short loc_14042CDBF
 * 000000014042CDBA: call    sub_14041F920
 * 000000014042CDBF: cld
 * 000000014042CDC0: stmxcsr [rbp+0E8h+var_13C]
 * 000000014042CDC4: ldmxcsr dword ptr gs:180h
 * 000000014042CDCD: movaps  [rbp+0E8h+var_F8], xmm0
 * 000000014042CDD1: movaps  [rbp+0E8h+var_E8], xmm1
 * 000000014042CDD5: movaps  [rbp+0E8h+var_D8], xmm2
 * 000000014042CDD9: movaps  [rbp+0E8h+var_C8], xmm3
 * 000000014042CDDD: movaps  [rbp+0E8h+var_B8], xmm4
 * 000000014042CDE1: movaps  [rbp+0E8h+var_A8], xmm5
 * 000000014042CDE5: test    byte ptr cs:dword_140D069F0, 0FFh
 * 000000014042CDEC: jz      short loc_14042CDFA
 * 000000014042CDEE: test    [rbp+0E8h+arg_0], 1
 * 000000014042CDF5: jz      short loc_14042CDFA
 * 000000014042CDF7: stac
 * 000000014042CDFA: test    [rbp+0E8h+arg_8], 200h
 * 000000014042CE04: jz      short loc_14042CE07
 * 000000014042CE06: sti
 * 000000014042CE07: test    cs:dword_140C2BD48, 2
 * 000000014042CE11: jz      short loc_14042CE26
 * 000000014042CE13: mov     ecx, 1D9h
 * 000000014042CE18: rdmsr
 * 000000014042CE1A: or      eax, 1
 * 000000014042CE1D: wrmsr
 * 000000014042CE1F: xor     edx, edx
 * 000000014042CE21: jmp     loc_14042CEF5
 * 000000014042CE26: xor     edx, edx
 * 000000014042CE28: test    [rbp+0E8h+arg_8], 100h
 * 000000014042CE32: jz      loc_14042CEF5
 * 000000014042CE38: test    byte ptr gs:8B22h, 2
 * 000000014042CE41: jz      loc_14042CEF5
 * 000000014042CE47: test    [rbp+0E8h+arg_0], 1
 * 000000014042CE4E: jnz     short loc_14042CEA7
 * 000000014042CE50: mov     rax, dr7
 * 000000014042CE53: test    ax, 200h
 * 000000014042CE57: jz      loc_14042CEF5
 * 000000014042CE5D: test    ax, 100h
 * 000000014042CE61: jz      loc_14042CEF5
 * 000000014042CE67: mov     r8d, cs:dword_140D06D40
 * 000000014042CE6E: or      r8d, r8d
 * 000000014042CE71: jz      short loc_14042CE7B
 * 000000014042CE73: mov     ecx, r8d
 * 000000014042CE76: rdmsr
 * 000000014042CE78: mov     r8d, eax
 * 000000014042CE7B: mov     ecx, cs:dword_140D06AC8
 * 000000014042CE81: add     ecx, r8d
 * 000000014042CE84: rdmsr
 * 000000014042CE86: mov     r9d, eax
 * 000000014042CE89: shl     rdx, 20h
 * 000000014042CE8D: mov     ecx, cs:dword_140D06B04
 * 000000014042CE93: or      r9, rdx
 * 000000014042CE96: add     ecx, r8d
 * 000000014042CE99: rdmsr
 * 000000014042CE9B: mov     r10d, eax
 * 000000014042CE9E: shl     rdx, 20h
 * 000000014042CEA2: or      r10, rdx
 * 000000014042CEA5: jmp     short loc_14042CEF0
 * 000000014042CEA7: test    [rbp+0E8h+var_68], 200h
 * 000000014042CEB0: jz      short loc_14042CEF5
 * 000000014042CEB2: test    [rbp+0E8h+var_68], 100h
 * 000000014042CEBB: jz      short loc_14042CEF5
 * 000000014042CEBD: and     [rbp+0E8h+var_40], 0
 * 000000014042CEC5: and     [rbp+0E8h+var_48], 0
 * 000000014042CECD: mov     rcx, cs:MmUserProbeAddress
 * 000000014042CED4: mov     r9, [rbp+0E8h+var_50]
 * 000000014042CEDB: cmp     r9, rcx
 * 000000014042CEDE: cmovnb  r9, rcx
 * 000000014042CEE2: mov     r10, [rbp+0E8h+var_58]
 * 000000014042CEE9: cmp     r10, rcx
 * 000000014042CEEC: cmovnb  r10, rcx
 * 000000014042CEF0: mov     edx, 2
 * 000000014042CEF5: mov     ecx, 80000004h
 * 000000014042CEFA: and     [rbp+0E8h+arg_8], 0FFFFFEFFh
 * 000000014042CF04: mov     r8, [rbp+0E8h]
 * 000000014042CF0B: call    sub_140434E40
 * 000000014042CF10: nop
 * 000000014042CF11: retn
 */
