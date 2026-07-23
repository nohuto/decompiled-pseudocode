/*
 * XREFs of KiStackFault @ 0x14042F600
 * Callers:
 *     KiStackFaultShadow @ 0x140AF6740 (KiStackFaultShadow.c)
 * Callees:
 *     KiSaveDebugRegisterState @ 0x14041F330 (KiSaveDebugRegisterState.c)
 *     KiStackFault @ 0x14042F600 (KiStackFault.c)
 *     KiExceptionDispatch @ 0x140434D40 (KiExceptionDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140435700 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiStackFault @ 0x14042F600
 * Reason: Hex-Rays returned no pseudocode for 0x14042F600
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014042F600: push    rbp
 * 000000014042F601: sub     rsp, 158h
 * 000000014042F608: lea     rbp, [rsp+80h]
 * 000000014042F610: mov     [rbp+0D8h+var_12D], 1
 * 000000014042F614: mov     [rbp+0D8h+var_128], rax
 * 000000014042F618: mov     [rbp+0D8h+var_120], rcx
 * 000000014042F61C: mov     [rbp+0D8h+var_118], rdx
 * 000000014042F620: mov     [rbp+0D8h+var_110], r8
 * 000000014042F624: mov     [rbp+0D8h+var_108], r9
 * 000000014042F628: mov     [rbp+0D8h+var_100], r10
 * 000000014042F62C: mov     [rbp+0D8h+var_F8], r11
 * 000000014042F630: test    [rbp+0D8h+arg_8], 1
 * 000000014042F637: jnz     short loc_14042F673
 * 000000014042F639: xor     edx, edx
 * 000000014042F63B: rdsspq  rdx
 * 000000014042F640: mov     [rbp+0D8h+var_80], rdx
 * 000000014042F644: lfence
 * 000000014042F647: test    word ptr gs:860h, 1
 * 000000014042F652: jnz     short loc_14042F65C
 * 000000014042F654: lfence
 * 000000014042F657: jmp     loc_14042F8E3
 * 000000014042F65C: movzx   eax, word ptr gs:864h
 * 000000014042F665: mov     ecx, 48h ; 'H'
 * 000000014042F66A: xor     edx, edx
 * 000000014042F66C: wrmsr
 * 000000014042F66E: jmp     loc_14042F8E3
 * 000000014042F673: test    cs:KiKvaShadow, 1
 * 000000014042F67A: jnz     short loc_14042F67F
 * 000000014042F67C: swapgs
 * 000000014042F67F: lfence
 * 000000014042F682: mov     rcx, gs:95A8h
 * 000000014042F68B: test    rcx, rcx
 * 000000014042F68E: jz      short loc_14042F6AF
 * 000000014042F690: rdsspq  rdx
 * 000000014042F695: mov     r10, gs:95A0h
 * 000000014042F69E: add     r10, 8
 * 000000014042F6A2: cmp     rdx, r10
 * 000000014042F6A5: jnz     short loc_14042F6AF
 * 000000014042F6A7: rstorssp qword ptr [rcx]
 * 000000014042F6AB: saveprevssp
 * 000000014042F6AF: mov     r10, gs:188h
 * 000000014042F6B8: mov     rcx, gs:188h
 * 000000014042F6C1: mov     rcx, [rcx+220h]
 * 000000014042F6C8: mov     rcx, [rcx+9E0h]
 * 000000014042F6CF: mov     gs:858h, rcx
 * 000000014042F6D8: mov     cx, gs:850h
 * 000000014042F6E1: mov     gs:852h, cx
 * 000000014042F6EA: mov     cx, gs:860h
 * 000000014042F6F3: mov     gs:854h, cx
 * 000000014042F6FC: movzx   eax, word ptr gs:866h
 * 000000014042F705: cmp     gs:864h, ax
 * 000000014042F70E: jz      short loc_14042F722
 * 000000014042F710: mov     gs:864h, ax
 * 000000014042F719: mov     ecx, 48h ; 'H'
 * 000000014042F71E: xor     edx, edx
 * 000000014042F720: wrmsr
 * 000000014042F722: movzx   edx, word ptr gs:860h
 * 000000014042F72B: test    edx, 8
 * 000000014042F731: jz      short loc_14042F74A
 * 000000014042F733: mov     eax, 1
 * 000000014042F738: xor     edx, edx
 * 000000014042F73A: mov     ecx, 49h ; 'I'
 * 000000014042F73F: wrmsr
 * 000000014042F741: movzx   edx, word ptr gs:860h
 * 000000014042F74A: test    edx, 2
 * 000000014042F750: jz      loc_14042F88D
 * 000000014042F756: call    loc_14042F869
 * 000000014042F75B: add     rsp, 8
 * 000000014042F75F: call    loc_14042F872
 * 000000014042F764: add     rsp, 8
 * 000000014042F768: call    loc_14042F75B
 * 000000014042F76D: add     rsp, 8
 * 000000014042F771: call    loc_14042F764
 * 000000014042F776: add     rsp, 8
 * 000000014042F77A: call    loc_14042F76D
 * 000000014042F77F: add     rsp, 8
 * 000000014042F783: call    loc_14042F776
 * 000000014042F788: add     rsp, 8
 * 000000014042F78C: call    loc_14042F77F
 * 000000014042F791: add     rsp, 8
 * 000000014042F795: call    loc_14042F788
 * 000000014042F79A: add     rsp, 8
 * 000000014042F79E: call    loc_14042F791
 * 000000014042F7A3: add     rsp, 8
 * 000000014042F7A7: call    loc_14042F79A
 * 000000014042F7AC: add     rsp, 8
 * 000000014042F7B0: call    loc_14042F7A3
 * 000000014042F7B5: add     rsp, 8
 * 000000014042F7B9: call    loc_14042F7AC
 * 000000014042F7BE: add     rsp, 8
 * 000000014042F7C2: call    loc_14042F7B5
 * 000000014042F7C7: add     rsp, 8
 * 000000014042F7CB: call    loc_14042F7BE
 * 000000014042F7D0: add     rsp, 8
 * 000000014042F7D4: call    loc_14042F7C7
 * 000000014042F7D9: add     rsp, 8
 * 000000014042F7DD: call    loc_14042F7D0
 * 000000014042F7E2: add     rsp, 8
 * 000000014042F7E6: call    loc_14042F7D9
 * 000000014042F7EB: add     rsp, 8
 * 000000014042F7EF: call    loc_14042F7E2
 * 000000014042F7F4: add     rsp, 8
 * 000000014042F7F8: call    loc_14042F7EB
 * 000000014042F7FD: add     rsp, 8
 * 000000014042F801: call    loc_14042F7F4
 * 000000014042F806: add     rsp, 8
 * 000000014042F80A: call    loc_14042F7FD
 * 000000014042F80F: add     rsp, 8
 * 000000014042F813: call    loc_14042F806
 * 000000014042F818: add     rsp, 8
 * 000000014042F81C: call    loc_14042F80F
 * 000000014042F821: add     rsp, 8
 * 000000014042F825: call    loc_14042F818
 * 000000014042F82A: add     rsp, 8
 * 000000014042F82E: call    loc_14042F821
 * 000000014042F833: add     rsp, 8
 * 000000014042F837: call    loc_14042F82A
 * 000000014042F83C: add     rsp, 8
 * 000000014042F840: call    loc_14042F833
 * 000000014042F845: add     rsp, 8
 * 000000014042F849: call    loc_14042F83C
 * 000000014042F84E: add     rsp, 8
 * 000000014042F852: call    loc_14042F845
 * 000000014042F857: add     rsp, 8
 * 000000014042F85B: call    loc_14042F84E
 * 000000014042F860: add     rsp, 8
 * 000000014042F864: call    loc_14042F857
 * 000000014042F869: add     rsp, 8
 * 000000014042F86D: call    loc_14042F860
 * 000000014042F872: add     rsp, 8
 * 000000014042F876: mov     eax, 0DADAh
 * 000000014042F87B: test    byte ptr gs:862h, 8
 * 000000014042F884: jz      short loc_14042F88D
 * 000000014042F886: mov     al, 20h ; ' '
 * 000000014042F888: incsspq rax
 * 000000014042F88D: test    edx, 200h
 * 000000014042F893: jz      short loc_14042F89A
 * 000000014042F895: call    KiFlushBhbDuringTrapEntryOrExit
 * 000000014042F89A: lfence
 * 000000014042F89D: mov     byte ptr gs:856h, 0
 * 000000014042F8A6: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 000000014042F8AD: jz      short loc_14042F8CE
 * 000000014042F8AF: mov     ecx, 6A7h
 * 000000014042F8B4: rdmsr
 * 000000014042F8B6: cmp     edx, 0
 * 000000014042F8B9: jz      short loc_14042F8CE
 * 000000014042F8BB: mov     ecx, edx
 * 000000014042F8BD: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 000000014042F8C3: cmp     edx, ecx
 * 000000014042F8C5: jz      short loc_14042F8CE
 * 000000014042F8C7: mov     ecx, 6A7h
 * 000000014042F8CC: wrmsr
 * 000000014042F8CE: test    byte ptr [r10+3], 3
 * 000000014042F8D3: mov     [rbp+0D8h+var_58], 0
 * 000000014042F8DC: jz      short loc_14042F8E3
 * 000000014042F8DE: call    KiSaveDebugRegisterState
 * 000000014042F8E3: cld
 * 000000014042F8E4: stmxcsr [rbp+0D8h+var_12C]
 * 000000014042F8E8: ldmxcsr dword ptr gs:180h
 * 000000014042F8F1: movaps  [rbp+0D8h+var_E8], xmm0
 * 000000014042F8F5: movaps  [rbp+0D8h+var_D8], xmm1
 * 000000014042F8F9: movaps  [rbp+0D8h+var_C8], xmm2
 * 000000014042F8FD: movaps  [rbp+0D8h+var_B8], xmm3
 * 000000014042F901: movaps  [rbp+0D8h+var_A8], xmm4
 * 000000014042F905: movaps  [rbp+0D8h+var_98], xmm5
 * 000000014042F909: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 000000014042F910: jz      short loc_14042F91E
 * 000000014042F912: test    [rbp+0D8h+arg_8], 1
 * 000000014042F919: jz      short loc_14042F91E
 * 000000014042F91B: stac
 * 000000014042F91E: mov     eax, [rbp+0E0h]
 * 000000014042F924: test    [rbp+0D8h+arg_10], 200h
 * 000000014042F92E: jz      short loc_14042F931
 * 000000014042F930: sti
 * 000000014042F931: mov     ecx, 0C0000005h
 * 000000014042F936: mov     edx, 2
 * 000000014042F93B: mov     r8, [rbp+0D8h+arg_0]
 * 000000014042F942: mov     r9d, [rbp+0E0h]
 * 000000014042F949: or      r9d, 3
 * 000000014042F94D: and     r9d, 0FFFFh
 * 000000014042F954: test    [rbp+0D8h+arg_8], 1
 * 000000014042F95B: jnz     short loc_14042F961
 * 000000014042F95D: or      r9, 0FFFFFFFFFFFFFFFFh
 * 000000014042F961: xor     r10, r10
 * 000000014042F964: call    KiExceptionDispatch
 * 000000014042F969: nop
 * 000000014042F96A: retn
 */
