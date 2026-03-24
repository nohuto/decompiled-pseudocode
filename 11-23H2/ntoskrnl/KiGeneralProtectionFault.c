/*
 * XREFs of KiGeneralProtectionFault @ 0x14042F580
 * Callers:
 *     KiGeneralProtectionFaultShadow @ 0x140AF67C0 (KiGeneralProtectionFaultShadow.c)
 * Callees:
 *     KiSaveDebugRegisterState @ 0x14041EFA0 (KiSaveDebugRegisterState.c)
 *     KiGeneralProtectionFault @ 0x14042F580 (KiGeneralProtectionFault.c)
 *     KiExceptionDispatch @ 0x140434940 (KiExceptionDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140435300 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiGeneralProtectionFault @ 0x14042F580
 * Reason: Hex-Rays returned no pseudocode for 0x14042F580
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014042F580: push    rbp
 * 000000014042F581: sub     rsp, 158h
 * 000000014042F588: lea     rbp, [rsp+80h]
 * 000000014042F590: mov     [rbp+0D8h+var_12D], 1
 * 000000014042F594: mov     [rbp+0D8h+var_128], rax
 * 000000014042F598: mov     [rbp+0D8h+var_120], rcx
 * 000000014042F59C: mov     [rbp+0D8h+var_118], rdx
 * 000000014042F5A0: mov     [rbp+0D8h+var_110], r8
 * 000000014042F5A4: mov     [rbp+0D8h+var_108], r9
 * 000000014042F5A8: mov     [rbp+0D8h+var_100], r10
 * 000000014042F5AC: mov     [rbp+0D8h+var_F8], r11
 * 000000014042F5B0: test    [rbp+0D8h+arg_8], 1
 * 000000014042F5B7: jnz     short loc_14042F5F3
 * 000000014042F5B9: xor     edx, edx
 * 000000014042F5BB: rdsspq  rdx
 * 000000014042F5C0: mov     [rbp+0D8h+var_80], rdx
 * 000000014042F5C4: lfence
 * 000000014042F5C7: test    word ptr gs:860h, 1
 * 000000014042F5D2: jnz     short loc_14042F5DC
 * 000000014042F5D4: lfence
 * 000000014042F5D7: jmp     loc_14042F863
 * 000000014042F5DC: movzx   eax, word ptr gs:864h
 * 000000014042F5E5: mov     ecx, 48h ; 'H'
 * 000000014042F5EA: xor     edx, edx
 * 000000014042F5EC: wrmsr
 * 000000014042F5EE: jmp     loc_14042F863
 * 000000014042F5F3: test    cs:KiKvaShadow, 1
 * 000000014042F5FA: jnz     short loc_14042F5FF
 * 000000014042F5FC: swapgs
 * 000000014042F5FF: lfence
 * 000000014042F602: mov     rcx, gs:95A8h
 * 000000014042F60B: test    rcx, rcx
 * 000000014042F60E: jz      short loc_14042F62F
 * 000000014042F610: rdsspq  rdx
 * 000000014042F615: mov     r10, gs:95A0h
 * 000000014042F61E: add     r10, 8
 * 000000014042F622: cmp     rdx, r10
 * 000000014042F625: jnz     short loc_14042F62F
 * 000000014042F627: rstorssp qword ptr [rcx]
 * 000000014042F62B: saveprevssp
 * 000000014042F62F: mov     r10, gs:188h
 * 000000014042F638: mov     rcx, gs:188h
 * 000000014042F641: mov     rcx, [rcx+220h]
 * 000000014042F648: mov     rcx, [rcx+9E0h]
 * 000000014042F64F: mov     gs:858h, rcx
 * 000000014042F658: mov     cx, gs:850h
 * 000000014042F661: mov     gs:852h, cx
 * 000000014042F66A: mov     cx, gs:860h
 * 000000014042F673: mov     gs:854h, cx
 * 000000014042F67C: movzx   eax, word ptr gs:866h
 * 000000014042F685: cmp     gs:864h, ax
 * 000000014042F68E: jz      short loc_14042F6A2
 * 000000014042F690: mov     gs:864h, ax
 * 000000014042F699: mov     ecx, 48h ; 'H'
 * 000000014042F69E: xor     edx, edx
 * 000000014042F6A0: wrmsr
 * 000000014042F6A2: movzx   edx, word ptr gs:860h
 * 000000014042F6AB: test    edx, 8
 * 000000014042F6B1: jz      short loc_14042F6CA
 * 000000014042F6B3: mov     eax, 1
 * 000000014042F6B8: xor     edx, edx
 * 000000014042F6BA: mov     ecx, 49h ; 'I'
 * 000000014042F6BF: wrmsr
 * 000000014042F6C1: movzx   edx, word ptr gs:860h
 * 000000014042F6CA: test    edx, 2
 * 000000014042F6D0: jz      loc_14042F80D
 * 000000014042F6D6: call    loc_14042F7E9
 * 000000014042F6DB: add     rsp, 8
 * 000000014042F6DF: call    loc_14042F7F2
 * 000000014042F6E4: add     rsp, 8
 * 000000014042F6E8: call    loc_14042F6DB
 * 000000014042F6ED: add     rsp, 8
 * 000000014042F6F1: call    loc_14042F6E4
 * 000000014042F6F6: add     rsp, 8
 * 000000014042F6FA: call    loc_14042F6ED
 * 000000014042F6FF: add     rsp, 8
 * 000000014042F703: call    loc_14042F6F6
 * 000000014042F708: add     rsp, 8
 * 000000014042F70C: call    loc_14042F6FF
 * 000000014042F711: add     rsp, 8
 * 000000014042F715: call    loc_14042F708
 * 000000014042F71A: add     rsp, 8
 * 000000014042F71E: call    loc_14042F711
 * 000000014042F723: add     rsp, 8
 * 000000014042F727: call    loc_14042F71A
 * 000000014042F72C: add     rsp, 8
 * 000000014042F730: call    loc_14042F723
 * 000000014042F735: add     rsp, 8
 * 000000014042F739: call    loc_14042F72C
 * 000000014042F73E: add     rsp, 8
 * 000000014042F742: call    loc_14042F735
 * 000000014042F747: add     rsp, 8
 * 000000014042F74B: call    loc_14042F73E
 * 000000014042F750: add     rsp, 8
 * 000000014042F754: call    loc_14042F747
 * 000000014042F759: add     rsp, 8
 * 000000014042F75D: call    loc_14042F750
 * 000000014042F762: add     rsp, 8
 * 000000014042F766: call    loc_14042F759
 * 000000014042F76B: add     rsp, 8
 * 000000014042F76F: call    loc_14042F762
 * 000000014042F774: add     rsp, 8
 * 000000014042F778: call    loc_14042F76B
 * 000000014042F77D: add     rsp, 8
 * 000000014042F781: call    loc_14042F774
 * 000000014042F786: add     rsp, 8
 * 000000014042F78A: call    loc_14042F77D
 * 000000014042F78F: add     rsp, 8
 * 000000014042F793: call    loc_14042F786
 * 000000014042F798: add     rsp, 8
 * 000000014042F79C: call    loc_14042F78F
 * 000000014042F7A1: add     rsp, 8
 * 000000014042F7A5: call    loc_14042F798
 * 000000014042F7AA: add     rsp, 8
 * 000000014042F7AE: call    loc_14042F7A1
 * 000000014042F7B3: add     rsp, 8
 * 000000014042F7B7: call    loc_14042F7AA
 * 000000014042F7BC: add     rsp, 8
 * 000000014042F7C0: call    loc_14042F7B3
 * 000000014042F7C5: add     rsp, 8
 * 000000014042F7C9: call    loc_14042F7BC
 * 000000014042F7CE: add     rsp, 8
 * 000000014042F7D2: call    loc_14042F7C5
 * 000000014042F7D7: add     rsp, 8
 * 000000014042F7DB: call    loc_14042F7CE
 * 000000014042F7E0: add     rsp, 8
 * 000000014042F7E4: call    loc_14042F7D7
 * 000000014042F7E9: add     rsp, 8
 * 000000014042F7ED: call    loc_14042F7E0
 * 000000014042F7F2: add     rsp, 8
 * 000000014042F7F6: mov     eax, 0DADAh
 * 000000014042F7FB: test    byte ptr gs:862h, 8
 * 000000014042F804: jz      short loc_14042F80D
 * 000000014042F806: mov     al, 20h ; ' '
 * 000000014042F808: incsspq rax
 * 000000014042F80D: test    edx, 200h
 * 000000014042F813: jz      short loc_14042F81A
 * 000000014042F815: call    KiFlushBhbDuringTrapEntryOrExit
 * 000000014042F81A: lfence
 * 000000014042F81D: mov     byte ptr gs:856h, 0
 * 000000014042F826: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 000000014042F82D: jz      short loc_14042F84E
 * 000000014042F82F: mov     ecx, 6A7h
 * 000000014042F834: rdmsr
 * 000000014042F836: cmp     edx, 0
 * 000000014042F839: jz      short loc_14042F84E
 * 000000014042F83B: mov     ecx, edx
 * 000000014042F83D: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 000000014042F843: cmp     edx, ecx
 * 000000014042F845: jz      short loc_14042F84E
 * 000000014042F847: mov     ecx, 6A7h
 * 000000014042F84C: wrmsr
 * 000000014042F84E: test    byte ptr [r10+3], 3
 * 000000014042F853: mov     [rbp+0D8h+var_58], 0
 * 000000014042F85C: jz      short loc_14042F863
 * 000000014042F85E: call    KiSaveDebugRegisterState
 * 000000014042F863: cld
 * 000000014042F864: stmxcsr [rbp+0D8h+var_12C]
 * 000000014042F868: ldmxcsr dword ptr gs:180h
 * 000000014042F871: movaps  [rbp+0D8h+var_E8], xmm0
 * 000000014042F875: movaps  [rbp+0D8h+var_D8], xmm1
 * 000000014042F879: movaps  [rbp+0D8h+var_C8], xmm2
 * 000000014042F87D: movaps  [rbp+0D8h+var_B8], xmm3
 * 000000014042F881: movaps  [rbp+0D8h+var_A8], xmm4
 * 000000014042F885: movaps  [rbp+0D8h+var_98], xmm5
 * 000000014042F889: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 000000014042F890: jz      short loc_14042F89E
 * 000000014042F892: test    [rbp+0D8h+arg_8], 1
 * 000000014042F899: jz      short loc_14042F89E
 * 000000014042F89B: stac
 * 000000014042F89E: mov     eax, [rbp+0E0h]
 * 000000014042F8A4: test    [rbp+0D8h+arg_10], 200h
 * 000000014042F8AE: jz      short loc_14042F8B1
 * 000000014042F8B0: sti
 * 000000014042F8B1: mov     ecx, 10000001h
 * 000000014042F8B6: mov     edx, 2
 * 000000014042F8BB: mov     r9d, [rbp+0E0h]
 * 000000014042F8C2: and     r9d, 0FFFFh
 * 000000014042F8C9: xor     r10, r10
 * 000000014042F8CC: mov     r8, [rbp+0D8h+arg_0]
 * 000000014042F8D3: call    KiExceptionDispatch
 * 000000014042F8D8: nop
 * 000000014042F8D9: retn
 */
