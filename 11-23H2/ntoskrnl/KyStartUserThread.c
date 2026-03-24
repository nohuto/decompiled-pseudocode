/*
 * XREFs of KyStartUserThread @ 0x140423BE0
 * Callers:
 *     <none>
 * Callees:
 *     KiSaveDebugRegisterState @ 0x14041EFA0 (KiSaveDebugRegisterState.c)
 *     KyStartUserThread @ 0x140423BE0 (KyStartUserThread.c)
 *     KxStartUserThread @ 0x140423F30 (KxStartUserThread.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140435300 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KyStartUserThread @ 0x140423BE0
 * Reason: Hex-Rays returned no pseudocode for 0x140423BE0
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140423BE0: sub     rsp, 8
 * 0000000140423BE4: push    rbp
 * 0000000140423BE5: sub     rsp, 158h
 * 0000000140423BEC: lea     rbp, [rsp+80h]
 * 0000000140423BF4: mov     [rbp+0E8h+var_13D], 1
 * 0000000140423BF8: mov     [rbp+0E8h+var_138], rax
 * 0000000140423BFC: mov     [rbp+0E8h+var_130], rcx
 * 0000000140423C00: mov     [rbp+0E8h+var_128], rdx
 * 0000000140423C04: mov     [rbp+0E8h+var_120], r8
 * 0000000140423C08: mov     [rbp+0E8h+var_118], r9
 * 0000000140423C0C: mov     [rbp+0E8h+var_110], r10
 * 0000000140423C10: mov     [rbp+0E8h+var_108], r11
 * 0000000140423C14: test    [rbp+0E8h+arg_0], 1
 * 0000000140423C1B: jnz     short loc_140423C57
 * 0000000140423C1D: xor     edx, edx
 * 0000000140423C1F: rdsspq  rdx
 * 0000000140423C24: mov     [rbp+0E8h+var_90], rdx
 * 0000000140423C28: lfence
 * 0000000140423C2B: test    word ptr gs:860h, 1
 * 0000000140423C36: jnz     short loc_140423C40
 * 0000000140423C38: lfence
 * 0000000140423C3B: jmp     loc_140423EC7
 * 0000000140423C40: movzx   eax, word ptr gs:864h
 * 0000000140423C49: mov     ecx, 48h ; 'H'
 * 0000000140423C4E: xor     edx, edx
 * 0000000140423C50: wrmsr
 * 0000000140423C52: jmp     loc_140423EC7
 * 0000000140423C57: test    cs:KiKvaShadow, 1
 * 0000000140423C5E: jnz     short loc_140423C63
 * 0000000140423C60: swapgs
 * 0000000140423C63: lfence
 * 0000000140423C66: mov     rcx, gs:95A8h
 * 0000000140423C6F: test    rcx, rcx
 * 0000000140423C72: jz      short loc_140423C93
 * 0000000140423C74: rdsspq  rdx
 * 0000000140423C79: mov     r10, gs:95A0h
 * 0000000140423C82: add     r10, 8
 * 0000000140423C86: cmp     rdx, r10
 * 0000000140423C89: jnz     short loc_140423C93
 * 0000000140423C8B: rstorssp qword ptr [rcx]
 * 0000000140423C8F: saveprevssp
 * 0000000140423C93: mov     r10, gs:188h
 * 0000000140423C9C: mov     rcx, gs:188h
 * 0000000140423CA5: mov     rcx, [rcx+220h]
 * 0000000140423CAC: mov     rcx, [rcx+9E0h]
 * 0000000140423CB3: mov     gs:858h, rcx
 * 0000000140423CBC: mov     cx, gs:850h
 * 0000000140423CC5: mov     gs:852h, cx
 * 0000000140423CCE: mov     cx, gs:860h
 * 0000000140423CD7: mov     gs:854h, cx
 * 0000000140423CE0: movzx   eax, word ptr gs:866h
 * 0000000140423CE9: cmp     gs:864h, ax
 * 0000000140423CF2: jz      short loc_140423D06
 * 0000000140423CF4: mov     gs:864h, ax
 * 0000000140423CFD: mov     ecx, 48h ; 'H'
 * 0000000140423D02: xor     edx, edx
 * 0000000140423D04: wrmsr
 * 0000000140423D06: movzx   edx, word ptr gs:860h
 * 0000000140423D0F: test    edx, 8
 * 0000000140423D15: jz      short loc_140423D2E
 * 0000000140423D17: mov     eax, 1
 * 0000000140423D1C: xor     edx, edx
 * 0000000140423D1E: mov     ecx, 49h ; 'I'
 * 0000000140423D23: wrmsr
 * 0000000140423D25: movzx   edx, word ptr gs:860h
 * 0000000140423D2E: test    edx, 2
 * 0000000140423D34: jz      loc_140423E71
 * 0000000140423D3A: call    loc_140423E4D
 * 0000000140423D3F: add     rsp, 8
 * 0000000140423D43: call    loc_140423E56
 * 0000000140423D48: add     rsp, 8
 * 0000000140423D4C: call    loc_140423D3F
 * 0000000140423D51: add     rsp, 8
 * 0000000140423D55: call    loc_140423D48
 * 0000000140423D5A: add     rsp, 8
 * 0000000140423D5E: call    loc_140423D51
 * 0000000140423D63: add     rsp, 8
 * 0000000140423D67: call    loc_140423D5A
 * 0000000140423D6C: add     rsp, 8
 * 0000000140423D70: call    loc_140423D63
 * 0000000140423D75: add     rsp, 8
 * 0000000140423D79: call    loc_140423D6C
 * 0000000140423D7E: add     rsp, 8
 * 0000000140423D82: call    loc_140423D75
 * 0000000140423D87: add     rsp, 8
 * 0000000140423D8B: call    loc_140423D7E
 * 0000000140423D90: add     rsp, 8
 * 0000000140423D94: call    loc_140423D87
 * 0000000140423D99: add     rsp, 8
 * 0000000140423D9D: call    loc_140423D90
 * 0000000140423DA2: add     rsp, 8
 * 0000000140423DA6: call    loc_140423D99
 * 0000000140423DAB: add     rsp, 8
 * 0000000140423DAF: call    loc_140423DA2
 * 0000000140423DB4: add     rsp, 8
 * 0000000140423DB8: call    loc_140423DAB
 * 0000000140423DBD: add     rsp, 8
 * 0000000140423DC1: call    loc_140423DB4
 * 0000000140423DC6: add     rsp, 8
 * 0000000140423DCA: call    loc_140423DBD
 * 0000000140423DCF: add     rsp, 8
 * 0000000140423DD3: call    loc_140423DC6
 * 0000000140423DD8: add     rsp, 8
 * 0000000140423DDC: call    loc_140423DCF
 * 0000000140423DE1: add     rsp, 8
 * 0000000140423DE5: call    loc_140423DD8
 * 0000000140423DEA: add     rsp, 8
 * 0000000140423DEE: call    loc_140423DE1
 * 0000000140423DF3: add     rsp, 8
 * 0000000140423DF7: call    loc_140423DEA
 * 0000000140423DFC: add     rsp, 8
 * 0000000140423E00: call    loc_140423DF3
 * 0000000140423E05: add     rsp, 8
 * 0000000140423E09: call    loc_140423DFC
 * 0000000140423E0E: add     rsp, 8
 * 0000000140423E12: call    loc_140423E05
 * 0000000140423E17: add     rsp, 8
 * 0000000140423E1B: call    loc_140423E0E
 * 0000000140423E20: add     rsp, 8
 * 0000000140423E24: call    loc_140423E17
 * 0000000140423E29: add     rsp, 8
 * 0000000140423E2D: call    loc_140423E20
 * 0000000140423E32: add     rsp, 8
 * 0000000140423E36: call    loc_140423E29
 * 0000000140423E3B: add     rsp, 8
 * 0000000140423E3F: call    loc_140423E32
 * 0000000140423E44: add     rsp, 8
 * 0000000140423E48: call    loc_140423E3B
 * 0000000140423E4D: add     rsp, 8
 * 0000000140423E51: call    loc_140423E44
 * 0000000140423E56: add     rsp, 8
 * 0000000140423E5A: mov     eax, 0DADAh
 * 0000000140423E5F: test    byte ptr gs:862h, 8
 * 0000000140423E68: jz      short loc_140423E71
 * 0000000140423E6A: mov     al, 20h ; ' '
 * 0000000140423E6C: incsspq rax
 * 0000000140423E71: test    edx, 200h
 * 0000000140423E77: jz      short loc_140423E7E
 * 0000000140423E79: call    KiFlushBhbDuringTrapEntryOrExit
 * 0000000140423E7E: lfence
 * 0000000140423E81: mov     byte ptr gs:856h, 0
 * 0000000140423E8A: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 0000000140423E91: jz      short loc_140423EB2
 * 0000000140423E93: mov     ecx, 6A7h
 * 0000000140423E98: rdmsr
 * 0000000140423E9A: cmp     edx, 0
 * 0000000140423E9D: jz      short loc_140423EB2
 * 0000000140423E9F: mov     ecx, edx
 * 0000000140423EA1: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 0000000140423EA7: cmp     edx, ecx
 * 0000000140423EA9: jz      short loc_140423EB2
 * 0000000140423EAB: mov     ecx, 6A7h
 * 0000000140423EB0: wrmsr
 * 0000000140423EB2: test    byte ptr [r10+3], 3
 * 0000000140423EB7: mov     [rbp+0E8h+var_68], 0
 * 0000000140423EC0: jz      short loc_140423EC7
 * 0000000140423EC2: call    KiSaveDebugRegisterState
 * 0000000140423EC7: cld
 * 0000000140423EC8: stmxcsr [rbp+0E8h+var_13C]
 * 0000000140423ECC: ldmxcsr dword ptr gs:180h
 * 0000000140423ED5: movaps  [rbp+0E8h+var_F8], xmm0
 * 0000000140423ED9: movaps  [rbp+0E8h+var_E8], xmm1
 * 0000000140423EDD: movaps  [rbp+0E8h+var_D8], xmm2
 * 0000000140423EE1: movaps  [rbp+0E8h+var_C8], xmm3
 * 0000000140423EE5: movaps  [rbp+0E8h+var_B8], xmm4
 * 0000000140423EE9: movaps  [rbp+0E8h+var_A8], xmm5
 * 0000000140423EED: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 0000000140423EF4: jz      short loc_140423F02
 * 0000000140423EF6: test    [rbp+0E8h+arg_0], 1
 * 0000000140423EFD: jz      short loc_140423F02
 * 0000000140423EFF: stac
 * 0000000140423F02: test    [rbp+0E8h+arg_8], 200h
 * 0000000140423F0C: jz      short loc_140423F0F
 * 0000000140423F0E: sti
 * 0000000140423F0F: call    KxStartUserThread
 * 0000000140423F14: nop     word ptr [rax+rax+00000000h]
 * 0000000140423F20: nop
 * 0000000140423F21: retn
 */
