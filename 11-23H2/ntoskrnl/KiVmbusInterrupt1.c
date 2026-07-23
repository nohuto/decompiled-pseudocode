/*
 * XREFs of KiVmbusInterrupt1 @ 0x140425950
 * Callers:
 *     KiVmbusInterrupt1Shadow @ 0x140AF70C0 (KiVmbusInterrupt1Shadow.c)
 * Callees:
 *     KiCheckForSListAddress @ 0x140310070 (KiCheckForSListAddress.c)
 *     KeWakeProcessor @ 0x140341B10 (KeWakeProcessor.c)
 *     KiSaveDebugRegisterState @ 0x14041F330 (KiSaveDebugRegisterState.c)
 *     KiVmbusInterrupt1 @ 0x140425950 (KiVmbusInterrupt1.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140435700 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiVmbusInterrupt1 @ 0x140425950
 * Reason: Hex-Rays returned no pseudocode for 0x140425950
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140425950: push    2
 * 0000000140425952: push    rbp
 * 0000000140425953: push    rsi
 * 0000000140425954: sub     rsp, 150h
 * 000000014042595B: lea     rbp, [rsp+168h+var_E8]
 * 0000000140425963: mov     byte ptr [rbp-55h], 0
 * 0000000140425967: mov     [rbp-50h], rax
 * 000000014042596B: mov     [rbp-48h], rcx
 * 000000014042596F: mov     [rbp-40h], rdx
 * 0000000140425973: mov     [rbp-38h], r8
 * 0000000140425977: mov     [rbp-30h], r9
 * 000000014042597B: mov     [rbp-28h], r10
 * 000000014042597F: mov     [rbp-20h], r11
 * 0000000140425983: test    byte ptr [rbp+0F0h], 1
 * 000000014042598A: jnz     short loc_1404259C6
 * 000000014042598C: xor     edx, edx
 * 000000014042598E: rdsspq  rdx
 * 0000000140425993: mov     [rbp+58h], rdx
 * 0000000140425997: lfence
 * 000000014042599A: test    word ptr gs:860h, 1
 * 00000001404259A5: jnz     short loc_1404259AF
 * 00000001404259A7: lfence
 * 00000001404259AA: jmp     loc_140425C36
 * 00000001404259AF: movzx   eax, word ptr gs:864h
 * 00000001404259B8: mov     ecx, 48h ; 'H'
 * 00000001404259BD: xor     edx, edx
 * 00000001404259BF: wrmsr
 * 00000001404259C1: jmp     loc_140425C36
 * 00000001404259C6: test    cs:KiKvaShadow, 1
 * 00000001404259CD: jnz     short loc_1404259D2
 * 00000001404259CF: swapgs
 * 00000001404259D2: lfence
 * 00000001404259D5: mov     rcx, gs:95A8h
 * 00000001404259DE: test    rcx, rcx
 * 00000001404259E1: jz      short loc_140425A02
 * 00000001404259E3: rdsspq  rdx
 * 00000001404259E8: mov     r10, gs:95A0h
 * 00000001404259F1: add     r10, 8
 * 00000001404259F5: cmp     rdx, r10
 * 00000001404259F8: jnz     short loc_140425A02
 * 00000001404259FA: rstorssp qword ptr [rcx]
 * 00000001404259FE: saveprevssp
 * 0000000140425A02: mov     r10, gs:188h
 * 0000000140425A0B: mov     rcx, gs:188h
 * 0000000140425A14: mov     rcx, [rcx+220h]
 * 0000000140425A1B: mov     rcx, [rcx+9E0h]
 * 0000000140425A22: mov     gs:858h, rcx
 * 0000000140425A2B: mov     cx, gs:850h
 * 0000000140425A34: mov     gs:852h, cx
 * 0000000140425A3D: mov     cx, gs:860h
 * 0000000140425A46: mov     gs:854h, cx
 * 0000000140425A4F: movzx   eax, word ptr gs:866h
 * 0000000140425A58: cmp     gs:864h, ax
 * 0000000140425A61: jz      short loc_140425A75
 * 0000000140425A63: mov     gs:864h, ax
 * 0000000140425A6C: mov     ecx, 48h ; 'H'
 * 0000000140425A71: xor     edx, edx
 * 0000000140425A73: wrmsr
 * 0000000140425A75: movzx   edx, word ptr gs:860h
 * 0000000140425A7E: test    edx, 8
 * 0000000140425A84: jz      short loc_140425A9D
 * 0000000140425A86: mov     eax, 1
 * 0000000140425A8B: xor     edx, edx
 * 0000000140425A8D: mov     ecx, 49h ; 'I'
 * 0000000140425A92: wrmsr
 * 0000000140425A94: movzx   edx, word ptr gs:860h
 * 0000000140425A9D: test    edx, 2
 * 0000000140425AA3: jz      loc_140425BE0
 * 0000000140425AA9: call    loc_140425BBC
 * 0000000140425AAE: add     rsp, 8
 * 0000000140425AB2: call    loc_140425BC5
 * 0000000140425AB7: add     rsp, 8
 * 0000000140425ABB: call    loc_140425AAE
 * 0000000140425AC0: add     rsp, 8
 * 0000000140425AC4: call    loc_140425AB7
 * 0000000140425AC9: add     rsp, 8
 * 0000000140425ACD: call    loc_140425AC0
 * 0000000140425AD2: add     rsp, 8
 * 0000000140425AD6: call    loc_140425AC9
 * 0000000140425ADB: add     rsp, 8
 * 0000000140425ADF: call    loc_140425AD2
 * 0000000140425AE4: add     rsp, 8
 * 0000000140425AE8: call    loc_140425ADB
 * 0000000140425AED: add     rsp, 8
 * 0000000140425AF1: call    loc_140425AE4
 * 0000000140425AF6: add     rsp, 8
 * 0000000140425AFA: call    loc_140425AED
 * 0000000140425AFF: add     rsp, 8
 * 0000000140425B03: call    loc_140425AF6
 * 0000000140425B08: add     rsp, 8
 * 0000000140425B0C: call    loc_140425AFF
 * 0000000140425B11: add     rsp, 8
 * 0000000140425B15: call    loc_140425B08
 * 0000000140425B1A: add     rsp, 8
 * 0000000140425B1E: call    loc_140425B11
 * 0000000140425B23: add     rsp, 8
 * 0000000140425B27: call    loc_140425B1A
 * 0000000140425B2C: add     rsp, 8
 * 0000000140425B30: call    loc_140425B23
 * 0000000140425B35: add     rsp, 8
 * 0000000140425B39: call    loc_140425B2C
 * 0000000140425B3E: add     rsp, 8
 * 0000000140425B42: call    loc_140425B35
 * 0000000140425B47: add     rsp, 8
 * 0000000140425B4B: call    loc_140425B3E
 * 0000000140425B50: add     rsp, 8
 * 0000000140425B54: call    loc_140425B47
 * 0000000140425B59: add     rsp, 8
 * 0000000140425B5D: call    loc_140425B50
 * 0000000140425B62: add     rsp, 8
 * 0000000140425B66: call    loc_140425B59
 * 0000000140425B6B: add     rsp, 8
 * 0000000140425B6F: call    loc_140425B62
 * 0000000140425B74: add     rsp, 8
 * 0000000140425B78: call    loc_140425B6B
 * 0000000140425B7D: add     rsp, 8
 * 0000000140425B81: call    loc_140425B74
 * 0000000140425B86: add     rsp, 8
 * 0000000140425B8A: call    loc_140425B7D
 * 0000000140425B8F: add     rsp, 8
 * 0000000140425B93: call    loc_140425B86
 * 0000000140425B98: add     rsp, 8
 * 0000000140425B9C: call    loc_140425B8F
 * 0000000140425BA1: add     rsp, 8
 * 0000000140425BA5: call    loc_140425B98
 * 0000000140425BAA: add     rsp, 8
 * 0000000140425BAE: call    loc_140425BA1
 * 0000000140425BB3: add     rsp, 8
 * 0000000140425BB7: call    loc_140425BAA
 * 0000000140425BBC: add     rsp, 8
 * 0000000140425BC0: call    loc_140425BB3
 * 0000000140425BC5: add     rsp, 8
 * 0000000140425BC9: mov     eax, 0DADAh
 * 0000000140425BCE: test    byte ptr gs:862h, 8
 * 0000000140425BD7: jz      short loc_140425BE0
 * 0000000140425BD9: mov     al, 20h ; ' '
 * 0000000140425BDB: incsspq rax
 * 0000000140425BE0: test    edx, 200h
 * 0000000140425BE6: jz      short loc_140425BED
 * 0000000140425BE8: call    KiFlushBhbDuringTrapEntryOrExit
 * 0000000140425BED: lfence
 * 0000000140425BF0: mov     byte ptr gs:856h, 0
 * 0000000140425BF9: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 0000000140425C00: jz      short loc_140425C21
 * 0000000140425C02: mov     ecx, 6A7h
 * 0000000140425C07: rdmsr
 * 0000000140425C09: cmp     edx, 0
 * 0000000140425C0C: jz      short loc_140425C21
 * 0000000140425C0E: mov     ecx, edx
 * 0000000140425C10: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 0000000140425C16: cmp     edx, ecx
 * 0000000140425C18: jz      short loc_140425C21
 * 0000000140425C1A: mov     ecx, 6A7h
 * 0000000140425C1F: wrmsr
 * 0000000140425C21: test    byte ptr [r10+3], 3
 * 0000000140425C26: mov     word ptr [rbp+80h], 0
 * 0000000140425C2F: jz      short loc_140425C36
 * 0000000140425C31: call    KiSaveDebugRegisterState
 * 0000000140425C36: cld
 * 0000000140425C37: stmxcsr dword ptr [rbp-54h]
 * 0000000140425C3B: ldmxcsr dword ptr gs:180h
 * 0000000140425C44: movaps  xmmword ptr [rbp-10h], xmm0
 * 0000000140425C48: movaps  xmmword ptr [rbp+0], xmm1
 * 0000000140425C4C: movaps  xmmword ptr [rbp+10h], xmm2
 * 0000000140425C50: movaps  xmmword ptr [rbp+20h], xmm3
 * 0000000140425C54: movaps  xmmword ptr [rbp+30h], xmm4
 * 0000000140425C58: movaps  xmmword ptr [rbp+40h], xmm5
 * 0000000140425C5C: cmp     byte ptr gs:82DAh, 0
 * 0000000140425C65: jz      short loc_140425C6C
 * 0000000140425C67: call    KeWakeProcessor
 * 0000000140425C6C: lea     rax, ExpInterlockedPopEntrySListResume
 * 0000000140425C73: cmp     rax, [rbp+0E8h]
 * 0000000140425C7A: jnb     short loc_140425C95
 * 0000000140425C7C: lea     rax, ExpInterlockedPopEntrySListEnd
 * 0000000140425C83: cmp     rax, [rbp+0E8h]
 * 0000000140425C8A: jb      short loc_140425C95
 * 0000000140425C8C: lea     rcx, [rbp-80h]
 * 0000000140425C90: call    KiCheckForSListAddress
 * 0000000140425C95: xor     esi, esi
 * 0000000140425C97: inc     dword ptr gs:82C0h
 * 0000000140425C9F: jmp     KiVmbusInterruptDispatch
 */
