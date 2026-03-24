/*
 * XREFs of KiRaiseSecurityCheckFailure @ 0x140432880
 * Callers:
 *     KiRaiseSecurityCheckFailureShadow @ 0x140AF6D40 (KiRaiseSecurityCheckFailureShadow.c)
 * Callees:
 *     KiSaveDebugRegisterState @ 0x14041EFA0 (KiSaveDebugRegisterState.c)
 *     KiRaiseSecurityCheckFailure @ 0x140432880 (KiRaiseSecurityCheckFailure.c)
 *     KiFastFailDispatch @ 0x140434E40 (KiFastFailDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140435300 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiRaiseSecurityCheckFailure @ 0x140432880
 * Reason: Hex-Rays returned no pseudocode for 0x140432880
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140432880: sub     qword ptr [rsp+0], 2
 * 0000000140432885: cmp     [rsp+arg_0], 23h ; '#'
 * 000000014043288B: jnz     short loc_140432892
 * 000000014043288D: and     dword ptr [rsp+4], 0
 * 0000000140432892: sub     rsp, 8
 * 0000000140432896: push    rbp
 * 0000000140432897: sub     rsp, 158h
 * 000000014043289E: lea     rbp, [rsp+168h+var_E8]
 * 00000001404328A6: mov     byte ptr [rbp-55h], 1
 * 00000001404328AA: mov     [rbp-50h], rax
 * 00000001404328AE: mov     [rbp-48h], rcx
 * 00000001404328B2: mov     [rbp-40h], rdx
 * 00000001404328B6: mov     [rbp-38h], r8
 * 00000001404328BA: mov     [rbp-30h], r9
 * 00000001404328BE: mov     [rbp-28h], r10
 * 00000001404328C2: mov     [rbp-20h], r11
 * 00000001404328C6: test    byte ptr [rbp+0F0h], 1
 * 00000001404328CD: jnz     short loc_140432909
 * 00000001404328CF: xor     edx, edx
 * 00000001404328D1: rdsspq  rdx
 * 00000001404328D6: mov     [rbp+58h], rdx
 * 00000001404328DA: lfence
 * 00000001404328DD: test    word ptr gs:860h, 1
 * 00000001404328E8: jnz     short loc_1404328F2
 * 00000001404328EA: lfence
 * 00000001404328ED: jmp     loc_140432B79
 * 00000001404328F2: movzx   eax, word ptr gs:864h
 * 00000001404328FB: mov     ecx, 48h ; 'H'
 * 0000000140432900: xor     edx, edx
 * 0000000140432902: wrmsr
 * 0000000140432904: jmp     loc_140432B79
 * 0000000140432909: test    cs:KiKvaShadow, 1
 * 0000000140432910: jnz     short loc_140432915
 * 0000000140432912: swapgs
 * 0000000140432915: lfence
 * 0000000140432918: mov     rcx, gs:95A8h
 * 0000000140432921: test    rcx, rcx
 * 0000000140432924: jz      short loc_140432945
 * 0000000140432926: rdsspq  rdx
 * 000000014043292B: mov     r10, gs:95A0h
 * 0000000140432934: add     r10, 8
 * 0000000140432938: cmp     rdx, r10
 * 000000014043293B: jnz     short loc_140432945
 * 000000014043293D: rstorssp qword ptr [rcx]
 * 0000000140432941: saveprevssp
 * 0000000140432945: mov     r10, gs:188h
 * 000000014043294E: mov     rcx, gs:188h
 * 0000000140432957: mov     rcx, [rcx+220h]
 * 000000014043295E: mov     rcx, [rcx+9E0h]
 * 0000000140432965: mov     gs:858h, rcx
 * 000000014043296E: mov     cx, gs:850h
 * 0000000140432977: mov     gs:852h, cx
 * 0000000140432980: mov     cx, gs:860h
 * 0000000140432989: mov     gs:854h, cx
 * 0000000140432992: movzx   eax, word ptr gs:866h
 * 000000014043299B: cmp     gs:864h, ax
 * 00000001404329A4: jz      short loc_1404329B8
 * 00000001404329A6: mov     gs:864h, ax
 * 00000001404329AF: mov     ecx, 48h ; 'H'
 * 00000001404329B4: xor     edx, edx
 * 00000001404329B6: wrmsr
 * 00000001404329B8: movzx   edx, word ptr gs:860h
 * 00000001404329C1: test    edx, 8
 * 00000001404329C7: jz      short loc_1404329E0
 * 00000001404329C9: mov     eax, 1
 * 00000001404329CE: xor     edx, edx
 * 00000001404329D0: mov     ecx, 49h ; 'I'
 * 00000001404329D5: wrmsr
 * 00000001404329D7: movzx   edx, word ptr gs:860h
 * 00000001404329E0: test    edx, 2
 * 00000001404329E6: jz      loc_140432B23
 * 00000001404329EC: call    loc_140432AFF
 * 00000001404329F1: add     rsp, 8
 * 00000001404329F5: call    loc_140432B08
 * 00000001404329FA: add     rsp, 8
 * 00000001404329FE: call    loc_1404329F1
 * 0000000140432A03: add     rsp, 8
 * 0000000140432A07: call    loc_1404329FA
 * 0000000140432A0C: add     rsp, 8
 * 0000000140432A10: call    loc_140432A03
 * 0000000140432A15: add     rsp, 8
 * 0000000140432A19: call    loc_140432A0C
 * 0000000140432A1E: add     rsp, 8
 * 0000000140432A22: call    loc_140432A15
 * 0000000140432A27: add     rsp, 8
 * 0000000140432A2B: call    loc_140432A1E
 * 0000000140432A30: add     rsp, 8
 * 0000000140432A34: call    loc_140432A27
 * 0000000140432A39: add     rsp, 8
 * 0000000140432A3D: call    loc_140432A30
 * 0000000140432A42: add     rsp, 8
 * 0000000140432A46: call    loc_140432A39
 * 0000000140432A4B: add     rsp, 8
 * 0000000140432A4F: call    loc_140432A42
 * 0000000140432A54: add     rsp, 8
 * 0000000140432A58: call    loc_140432A4B
 * 0000000140432A5D: add     rsp, 8
 * 0000000140432A61: call    loc_140432A54
 * 0000000140432A66: add     rsp, 8
 * 0000000140432A6A: call    loc_140432A5D
 * 0000000140432A6F: add     rsp, 8
 * 0000000140432A73: call    loc_140432A66
 * 0000000140432A78: add     rsp, 8
 * 0000000140432A7C: call    loc_140432A6F
 * 0000000140432A81: add     rsp, 8
 * 0000000140432A85: call    loc_140432A78
 * 0000000140432A8A: add     rsp, 8
 * 0000000140432A8E: call    loc_140432A81
 * 0000000140432A93: add     rsp, 8
 * 0000000140432A97: call    loc_140432A8A
 * 0000000140432A9C: add     rsp, 8
 * 0000000140432AA0: call    loc_140432A93
 * 0000000140432AA5: add     rsp, 8
 * 0000000140432AA9: call    loc_140432A9C
 * 0000000140432AAE: add     rsp, 8
 * 0000000140432AB2: call    loc_140432AA5
 * 0000000140432AB7: add     rsp, 8
 * 0000000140432ABB: call    loc_140432AAE
 * 0000000140432AC0: add     rsp, 8
 * 0000000140432AC4: call    loc_140432AB7
 * 0000000140432AC9: add     rsp, 8
 * 0000000140432ACD: call    loc_140432AC0
 * 0000000140432AD2: add     rsp, 8
 * 0000000140432AD6: call    loc_140432AC9
 * 0000000140432ADB: add     rsp, 8
 * 0000000140432ADF: call    loc_140432AD2
 * 0000000140432AE4: add     rsp, 8
 * 0000000140432AE8: call    loc_140432ADB
 * 0000000140432AED: add     rsp, 8
 * 0000000140432AF1: call    loc_140432AE4
 * 0000000140432AF6: add     rsp, 8
 * 0000000140432AFA: call    loc_140432AED
 * 0000000140432AFF: add     rsp, 8
 * 0000000140432B03: call    loc_140432AF6
 * 0000000140432B08: add     rsp, 8
 * 0000000140432B0C: mov     eax, 0DADAh
 * 0000000140432B11: test    byte ptr gs:862h, 8
 * 0000000140432B1A: jz      short loc_140432B23
 * 0000000140432B1C: mov     al, 20h ; ' '
 * 0000000140432B1E: incsspq rax
 * 0000000140432B23: test    edx, 200h
 * 0000000140432B29: jz      short loc_140432B30
 * 0000000140432B2B: call    KiFlushBhbDuringTrapEntryOrExit
 * 0000000140432B30: lfence
 * 0000000140432B33: mov     byte ptr gs:856h, 0
 * 0000000140432B3C: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 0000000140432B43: jz      short loc_140432B64
 * 0000000140432B45: mov     ecx, 6A7h
 * 0000000140432B4A: rdmsr
 * 0000000140432B4C: cmp     edx, 0
 * 0000000140432B4F: jz      short loc_140432B64
 * 0000000140432B51: mov     ecx, edx
 * 0000000140432B53: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 0000000140432B59: cmp     edx, ecx
 * 0000000140432B5B: jz      short loc_140432B64
 * 0000000140432B5D: mov     ecx, 6A7h
 * 0000000140432B62: wrmsr
 * 0000000140432B64: test    byte ptr [r10+3], 3
 * 0000000140432B69: mov     word ptr [rbp+80h], 0
 * 0000000140432B72: jz      short loc_140432B79
 * 0000000140432B74: call    KiSaveDebugRegisterState
 * 0000000140432B79: cld
 * 0000000140432B7A: stmxcsr dword ptr [rbp-54h]
 * 0000000140432B7E: ldmxcsr dword ptr gs:180h
 * 0000000140432B87: movaps  xmmword ptr [rbp-10h], xmm0
 * 0000000140432B8B: movaps  xmmword ptr [rbp+0], xmm1
 * 0000000140432B8F: movaps  xmmword ptr [rbp+10h], xmm2
 * 0000000140432B93: movaps  xmmword ptr [rbp+20h], xmm3
 * 0000000140432B97: movaps  xmmword ptr [rbp+30h], xmm4
 * 0000000140432B9B: movaps  xmmword ptr [rbp+40h], xmm5
 * 0000000140432B9F: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 0000000140432BA6: jz      short loc_140432BB4
 * 0000000140432BA8: test    byte ptr [rbp+0F0h], 1
 * 0000000140432BAF: jz      short loc_140432BB4
 * 0000000140432BB1: stac
 * 0000000140432BB4: test    dword ptr [rbp+0F8h], 200h
 * 0000000140432BBE: jz      short loc_140432BC1
 * 0000000140432BC0: sti
 * 0000000140432BC1: mov     r9, [rbp-48h]
 * 0000000140432BC5: mov     ecx, 0C0000409h
 * 0000000140432BCA: mov     edx, 1
 * 0000000140432BCF: mov     r8, [rbp+0E8h]
 * 0000000140432BD6: call    KiFastFailDispatch
 * 0000000140432BDB: nop
 * 0000000140432BDC: retn
 */
