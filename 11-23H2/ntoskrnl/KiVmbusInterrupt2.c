/*
 * XREFs of KiVmbusInterrupt2 @ 0x140425920
 * Callers:
 *     KiVmbusInterrupt2Shadow @ 0x140AF7140 (KiVmbusInterrupt2Shadow.c)
 * Callees:
 *     KiCheckForSListAddress @ 0x14030FDE0 (KiCheckForSListAddress.c)
 *     KeWakeProcessor @ 0x140341880 (KeWakeProcessor.c)
 *     KiSaveDebugRegisterState @ 0x14041EFA0 (KiSaveDebugRegisterState.c)
 *     KiVmbusInterrupt2 @ 0x140425920 (KiVmbusInterrupt2.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140435300 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiVmbusInterrupt2 @ 0x140425920
 * Reason: Hex-Rays returned no pseudocode for 0x140425920
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140425920: push    3
 * 0000000140425922: push    rbp
 * 0000000140425923: push    rsi
 * 0000000140425924: sub     rsp, 150h
 * 000000014042592B: lea     rbp, [rsp+168h+var_E8]
 * 0000000140425933: mov     byte ptr [rbp-55h], 0
 * 0000000140425937: mov     [rbp-50h], rax
 * 000000014042593B: mov     [rbp-48h], rcx
 * 000000014042593F: mov     [rbp-40h], rdx
 * 0000000140425943: mov     [rbp-38h], r8
 * 0000000140425947: mov     [rbp-30h], r9
 * 000000014042594B: mov     [rbp-28h], r10
 * 000000014042594F: mov     [rbp-20h], r11
 * 0000000140425953: test    byte ptr [rbp+0F0h], 1
 * 000000014042595A: jnz     short loc_140425996
 * 000000014042595C: xor     edx, edx
 * 000000014042595E: rdsspq  rdx
 * 0000000140425963: mov     [rbp+58h], rdx
 * 0000000140425967: lfence
 * 000000014042596A: test    word ptr gs:860h, 1
 * 0000000140425975: jnz     short loc_14042597F
 * 0000000140425977: lfence
 * 000000014042597A: jmp     loc_140425C06
 * 000000014042597F: movzx   eax, word ptr gs:864h
 * 0000000140425988: mov     ecx, 48h ; 'H'
 * 000000014042598D: xor     edx, edx
 * 000000014042598F: wrmsr
 * 0000000140425991: jmp     loc_140425C06
 * 0000000140425996: test    cs:KiKvaShadow, 1
 * 000000014042599D: jnz     short loc_1404259A2
 * 000000014042599F: swapgs
 * 00000001404259A2: lfence
 * 00000001404259A5: mov     rcx, gs:95A8h
 * 00000001404259AE: test    rcx, rcx
 * 00000001404259B1: jz      short loc_1404259D2
 * 00000001404259B3: rdsspq  rdx
 * 00000001404259B8: mov     r10, gs:95A0h
 * 00000001404259C1: add     r10, 8
 * 00000001404259C5: cmp     rdx, r10
 * 00000001404259C8: jnz     short loc_1404259D2
 * 00000001404259CA: rstorssp qword ptr [rcx]
 * 00000001404259CE: saveprevssp
 * 00000001404259D2: mov     r10, gs:188h
 * 00000001404259DB: mov     rcx, gs:188h
 * 00000001404259E4: mov     rcx, [rcx+220h]
 * 00000001404259EB: mov     rcx, [rcx+9E0h]
 * 00000001404259F2: mov     gs:858h, rcx
 * 00000001404259FB: mov     cx, gs:850h
 * 0000000140425A04: mov     gs:852h, cx
 * 0000000140425A0D: mov     cx, gs:860h
 * 0000000140425A16: mov     gs:854h, cx
 * 0000000140425A1F: movzx   eax, word ptr gs:866h
 * 0000000140425A28: cmp     gs:864h, ax
 * 0000000140425A31: jz      short loc_140425A45
 * 0000000140425A33: mov     gs:864h, ax
 * 0000000140425A3C: mov     ecx, 48h ; 'H'
 * 0000000140425A41: xor     edx, edx
 * 0000000140425A43: wrmsr
 * 0000000140425A45: movzx   edx, word ptr gs:860h
 * 0000000140425A4E: test    edx, 8
 * 0000000140425A54: jz      short loc_140425A6D
 * 0000000140425A56: mov     eax, 1
 * 0000000140425A5B: xor     edx, edx
 * 0000000140425A5D: mov     ecx, 49h ; 'I'
 * 0000000140425A62: wrmsr
 * 0000000140425A64: movzx   edx, word ptr gs:860h
 * 0000000140425A6D: test    edx, 2
 * 0000000140425A73: jz      loc_140425BB0
 * 0000000140425A79: call    loc_140425B8C
 * 0000000140425A7E: add     rsp, 8
 * 0000000140425A82: call    loc_140425B95
 * 0000000140425A87: add     rsp, 8
 * 0000000140425A8B: call    loc_140425A7E
 * 0000000140425A90: add     rsp, 8
 * 0000000140425A94: call    loc_140425A87
 * 0000000140425A99: add     rsp, 8
 * 0000000140425A9D: call    loc_140425A90
 * 0000000140425AA2: add     rsp, 8
 * 0000000140425AA6: call    loc_140425A99
 * 0000000140425AAB: add     rsp, 8
 * 0000000140425AAF: call    loc_140425AA2
 * 0000000140425AB4: add     rsp, 8
 * 0000000140425AB8: call    loc_140425AAB
 * 0000000140425ABD: add     rsp, 8
 * 0000000140425AC1: call    loc_140425AB4
 * 0000000140425AC6: add     rsp, 8
 * 0000000140425ACA: call    loc_140425ABD
 * 0000000140425ACF: add     rsp, 8
 * 0000000140425AD3: call    loc_140425AC6
 * 0000000140425AD8: add     rsp, 8
 * 0000000140425ADC: call    loc_140425ACF
 * 0000000140425AE1: add     rsp, 8
 * 0000000140425AE5: call    loc_140425AD8
 * 0000000140425AEA: add     rsp, 8
 * 0000000140425AEE: call    loc_140425AE1
 * 0000000140425AF3: add     rsp, 8
 * 0000000140425AF7: call    loc_140425AEA
 * 0000000140425AFC: add     rsp, 8
 * 0000000140425B00: call    loc_140425AF3
 * 0000000140425B05: add     rsp, 8
 * 0000000140425B09: call    loc_140425AFC
 * 0000000140425B0E: add     rsp, 8
 * 0000000140425B12: call    loc_140425B05
 * 0000000140425B17: add     rsp, 8
 * 0000000140425B1B: call    loc_140425B0E
 * 0000000140425B20: add     rsp, 8
 * 0000000140425B24: call    loc_140425B17
 * 0000000140425B29: add     rsp, 8
 * 0000000140425B2D: call    loc_140425B20
 * 0000000140425B32: add     rsp, 8
 * 0000000140425B36: call    loc_140425B29
 * 0000000140425B3B: add     rsp, 8
 * 0000000140425B3F: call    loc_140425B32
 * 0000000140425B44: add     rsp, 8
 * 0000000140425B48: call    loc_140425B3B
 * 0000000140425B4D: add     rsp, 8
 * 0000000140425B51: call    loc_140425B44
 * 0000000140425B56: add     rsp, 8
 * 0000000140425B5A: call    loc_140425B4D
 * 0000000140425B5F: add     rsp, 8
 * 0000000140425B63: call    loc_140425B56
 * 0000000140425B68: add     rsp, 8
 * 0000000140425B6C: call    loc_140425B5F
 * 0000000140425B71: add     rsp, 8
 * 0000000140425B75: call    loc_140425B68
 * 0000000140425B7A: add     rsp, 8
 * 0000000140425B7E: call    loc_140425B71
 * 0000000140425B83: add     rsp, 8
 * 0000000140425B87: call    loc_140425B7A
 * 0000000140425B8C: add     rsp, 8
 * 0000000140425B90: call    loc_140425B83
 * 0000000140425B95: add     rsp, 8
 * 0000000140425B99: mov     eax, 0DADAh
 * 0000000140425B9E: test    byte ptr gs:862h, 8
 * 0000000140425BA7: jz      short loc_140425BB0
 * 0000000140425BA9: mov     al, 20h ; ' '
 * 0000000140425BAB: incsspq rax
 * 0000000140425BB0: test    edx, 200h
 * 0000000140425BB6: jz      short loc_140425BBD
 * 0000000140425BB8: call    KiFlushBhbDuringTrapEntryOrExit
 * 0000000140425BBD: lfence
 * 0000000140425BC0: mov     byte ptr gs:856h, 0
 * 0000000140425BC9: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 0000000140425BD0: jz      short loc_140425BF1
 * 0000000140425BD2: mov     ecx, 6A7h
 * 0000000140425BD7: rdmsr
 * 0000000140425BD9: cmp     edx, 0
 * 0000000140425BDC: jz      short loc_140425BF1
 * 0000000140425BDE: mov     ecx, edx
 * 0000000140425BE0: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 0000000140425BE6: cmp     edx, ecx
 * 0000000140425BE8: jz      short loc_140425BF1
 * 0000000140425BEA: mov     ecx, 6A7h
 * 0000000140425BEF: wrmsr
 * 0000000140425BF1: test    byte ptr [r10+3], 3
 * 0000000140425BF6: mov     word ptr [rbp+80h], 0
 * 0000000140425BFF: jz      short loc_140425C06
 * 0000000140425C01: call    KiSaveDebugRegisterState
 * 0000000140425C06: cld
 * 0000000140425C07: stmxcsr dword ptr [rbp-54h]
 * 0000000140425C0B: ldmxcsr dword ptr gs:180h
 * 0000000140425C14: movaps  xmmword ptr [rbp-10h], xmm0
 * 0000000140425C18: movaps  xmmword ptr [rbp+0], xmm1
 * 0000000140425C1C: movaps  xmmword ptr [rbp+10h], xmm2
 * 0000000140425C20: movaps  xmmword ptr [rbp+20h], xmm3
 * 0000000140425C24: movaps  xmmword ptr [rbp+30h], xmm4
 * 0000000140425C28: movaps  xmmword ptr [rbp+40h], xmm5
 * 0000000140425C2C: cmp     byte ptr gs:82DAh, 0
 * 0000000140425C35: jz      short loc_140425C3C
 * 0000000140425C37: call    KeWakeProcessor
 * 0000000140425C3C: lea     rax, ExpInterlockedPopEntrySListResume
 * 0000000140425C43: cmp     rax, [rbp+0E8h]
 * 0000000140425C4A: jnb     short loc_140425C65
 * 0000000140425C4C: lea     rax, ExpInterlockedPopEntrySListEnd
 * 0000000140425C53: cmp     rax, [rbp+0E8h]
 * 0000000140425C5A: jb      short loc_140425C65
 * 0000000140425C5C: lea     rcx, [rbp-80h]
 * 0000000140425C60: call    KiCheckForSListAddress
 * 0000000140425C65: xor     esi, esi
 * 0000000140425C67: inc     dword ptr gs:82C0h
 * 0000000140425C6F: jmp     KiVmbusInterruptDispatch
 */
