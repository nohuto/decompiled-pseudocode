/*
 * XREFs of KiBreakpointTrap @ 0x14042C500
 * Callers:
 *     KiBreakpointTrapShadow @ 0x140AF72C0 (KiBreakpointTrapShadow.c)
 * Callees:
 *     KiSaveDebugRegisterState @ 0x14041E8E0 (KiSaveDebugRegisterState.c)
 *     KiBreakpointTrap @ 0x14042C500 (KiBreakpointTrap.c)
 *     KiExceptionDispatch @ 0x140434340 (KiExceptionDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140434D00 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiBreakpointTrap @ 0x14042C500
 * Reason: Hex-Rays returned no pseudocode for 0x14042C500
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014042C500: sub     rsp, 8
 * 000000014042C504: push    rbp
 * 000000014042C505: sub     rsp, 158h
 * 000000014042C50C: lea     rbp, [rsp+80h]
 * 000000014042C514: mov     [rbp+0E8h+var_13D], 1
 * 000000014042C518: mov     [rbp+0E8h+var_138], rax
 * 000000014042C51C: mov     [rbp+0E8h+var_130], rcx
 * 000000014042C520: mov     [rbp+0E8h+var_128], rdx
 * 000000014042C524: mov     [rbp+0E8h+var_120], r8
 * 000000014042C528: mov     [rbp+0E8h+var_118], r9
 * 000000014042C52C: mov     [rbp+0E8h+var_110], r10
 * 000000014042C530: mov     [rbp+0E8h+var_108], r11
 * 000000014042C534: test    [rbp+0E8h+arg_0], 1
 * 000000014042C53B: jnz     short loc_14042C577
 * 000000014042C53D: xor     edx, edx
 * 000000014042C53F: rdsspq  rdx
 * 000000014042C544: mov     [rbp+0E8h+var_90], rdx
 * 000000014042C548: lfence
 * 000000014042C54B: test    word ptr gs:860h, 1
 * 000000014042C556: jnz     short loc_14042C560
 * 000000014042C558: lfence
 * 000000014042C55B: jmp     loc_14042C7E7
 * 000000014042C560: movzx   eax, word ptr gs:864h
 * 000000014042C569: mov     ecx, 48h ; 'H'
 * 000000014042C56E: xor     edx, edx
 * 000000014042C570: wrmsr
 * 000000014042C572: jmp     loc_14042C7E7
 * 000000014042C577: test    cs:KiKvaShadow, 1
 * 000000014042C57E: jnz     short loc_14042C583
 * 000000014042C580: swapgs
 * 000000014042C583: lfence
 * 000000014042C586: mov     rcx, gs:95A8h
 * 000000014042C58F: test    rcx, rcx
 * 000000014042C592: jz      short loc_14042C5B3
 * 000000014042C594: rdsspq  rdx
 * 000000014042C599: mov     r10, gs:95A0h
 * 000000014042C5A2: add     r10, 8
 * 000000014042C5A6: cmp     rdx, r10
 * 000000014042C5A9: jnz     short loc_14042C5B3
 * 000000014042C5AB: rstorssp qword ptr [rcx]
 * 000000014042C5AF: saveprevssp
 * 000000014042C5B3: mov     r10, gs:188h
 * 000000014042C5BC: mov     rcx, gs:188h
 * 000000014042C5C5: mov     rcx, [rcx+220h]
 * 000000014042C5CC: mov     rcx, [rcx+9E0h]
 * 000000014042C5D3: mov     gs:858h, rcx
 * 000000014042C5DC: mov     cx, gs:850h
 * 000000014042C5E5: mov     gs:852h, cx
 * 000000014042C5EE: mov     cx, gs:860h
 * 000000014042C5F7: mov     gs:854h, cx
 * 000000014042C600: movzx   eax, word ptr gs:866h
 * 000000014042C609: cmp     gs:864h, ax
 * 000000014042C612: jz      short loc_14042C626
 * 000000014042C614: mov     gs:864h, ax
 * 000000014042C61D: mov     ecx, 48h ; 'H'
 * 000000014042C622: xor     edx, edx
 * 000000014042C624: wrmsr
 * 000000014042C626: movzx   edx, word ptr gs:860h
 * 000000014042C62F: test    edx, 8
 * 000000014042C635: jz      short loc_14042C64E
 * 000000014042C637: mov     eax, 1
 * 000000014042C63C: xor     edx, edx
 * 000000014042C63E: mov     ecx, 49h ; 'I'
 * 000000014042C643: wrmsr
 * 000000014042C645: movzx   edx, word ptr gs:860h
 * 000000014042C64E: test    edx, 2
 * 000000014042C654: jz      loc_14042C791
 * 000000014042C65A: call    loc_14042C76D
 * 000000014042C65F: add     rsp, 8
 * 000000014042C663: call    loc_14042C776
 * 000000014042C668: add     rsp, 8
 * 000000014042C66C: call    loc_14042C65F
 * 000000014042C671: add     rsp, 8
 * 000000014042C675: call    loc_14042C668
 * 000000014042C67A: add     rsp, 8
 * 000000014042C67E: call    loc_14042C671
 * 000000014042C683: add     rsp, 8
 * 000000014042C687: call    loc_14042C67A
 * 000000014042C68C: add     rsp, 8
 * 000000014042C690: call    loc_14042C683
 * 000000014042C695: add     rsp, 8
 * 000000014042C699: call    loc_14042C68C
 * 000000014042C69E: add     rsp, 8
 * 000000014042C6A2: call    loc_14042C695
 * 000000014042C6A7: add     rsp, 8
 * 000000014042C6AB: call    loc_14042C69E
 * 000000014042C6B0: add     rsp, 8
 * 000000014042C6B4: call    loc_14042C6A7
 * 000000014042C6B9: add     rsp, 8
 * 000000014042C6BD: call    loc_14042C6B0
 * 000000014042C6C2: add     rsp, 8
 * 000000014042C6C6: call    loc_14042C6B9
 * 000000014042C6CB: add     rsp, 8
 * 000000014042C6CF: call    loc_14042C6C2
 * 000000014042C6D4: add     rsp, 8
 * 000000014042C6D8: call    loc_14042C6CB
 * 000000014042C6DD: add     rsp, 8
 * 000000014042C6E1: call    loc_14042C6D4
 * 000000014042C6E6: add     rsp, 8
 * 000000014042C6EA: call    loc_14042C6DD
 * 000000014042C6EF: add     rsp, 8
 * 000000014042C6F3: call    loc_14042C6E6
 * 000000014042C6F8: add     rsp, 8
 * 000000014042C6FC: call    loc_14042C6EF
 * 000000014042C701: add     rsp, 8
 * 000000014042C705: call    loc_14042C6F8
 * 000000014042C70A: add     rsp, 8
 * 000000014042C70E: call    loc_14042C701
 * 000000014042C713: add     rsp, 8
 * 000000014042C717: call    loc_14042C70A
 * 000000014042C71C: add     rsp, 8
 * 000000014042C720: call    loc_14042C713
 * 000000014042C725: add     rsp, 8
 * 000000014042C729: call    loc_14042C71C
 * 000000014042C72E: add     rsp, 8
 * 000000014042C732: call    loc_14042C725
 * 000000014042C737: add     rsp, 8
 * 000000014042C73B: call    loc_14042C72E
 * 000000014042C740: add     rsp, 8
 * 000000014042C744: call    loc_14042C737
 * 000000014042C749: add     rsp, 8
 * 000000014042C74D: call    loc_14042C740
 * 000000014042C752: add     rsp, 8
 * 000000014042C756: call    loc_14042C749
 * 000000014042C75B: add     rsp, 8
 * 000000014042C75F: call    loc_14042C752
 * 000000014042C764: add     rsp, 8
 * 000000014042C768: call    loc_14042C75B
 * 000000014042C76D: add     rsp, 8
 * 000000014042C771: call    loc_14042C764
 * 000000014042C776: add     rsp, 8
 * 000000014042C77A: mov     eax, 0DADAh
 * 000000014042C77F: test    byte ptr gs:862h, 8
 * 000000014042C788: jz      short loc_14042C791
 * 000000014042C78A: mov     al, 20h ; ' '
 * 000000014042C78C: incsspq rax
 * 000000014042C791: test    edx, 200h
 * 000000014042C797: jz      short loc_14042C79E
 * 000000014042C799: call    KiFlushBhbDuringTrapEntryOrExit
 * 000000014042C79E: lfence
 * 000000014042C7A1: mov     byte ptr gs:856h, 0
 * 000000014042C7AA: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 000000014042C7B1: jz      short loc_14042C7D2
 * 000000014042C7B3: mov     ecx, 6A7h
 * 000000014042C7B8: rdmsr
 * 000000014042C7BA: cmp     edx, 0
 * 000000014042C7BD: jz      short loc_14042C7D2
 * 000000014042C7BF: mov     ecx, edx
 * 000000014042C7C1: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 000000014042C7C7: cmp     edx, ecx
 * 000000014042C7C9: jz      short loc_14042C7D2
 * 000000014042C7CB: mov     ecx, 6A7h
 * 000000014042C7D0: wrmsr
 * 000000014042C7D2: test    byte ptr [r10+3], 3
 * 000000014042C7D7: mov     [rbp+0E8h+var_68], 0
 * 000000014042C7E0: jz      short loc_14042C7E7
 * 000000014042C7E2: call    KiSaveDebugRegisterState
 * 000000014042C7E7: cld
 * 000000014042C7E8: stmxcsr [rbp+0E8h+var_13C]
 * 000000014042C7EC: ldmxcsr dword ptr gs:180h
 * 000000014042C7F5: movaps  [rbp+0E8h+var_F8], xmm0
 * 000000014042C7F9: movaps  [rbp+0E8h+var_E8], xmm1
 * 000000014042C7FD: movaps  [rbp+0E8h+var_D8], xmm2
 * 000000014042C801: movaps  [rbp+0E8h+var_C8], xmm3
 * 000000014042C805: movaps  [rbp+0E8h+var_B8], xmm4
 * 000000014042C809: movaps  [rbp+0E8h+var_A8], xmm5
 * 000000014042C80D: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 000000014042C814: jz      short loc_14042C822
 * 000000014042C816: test    [rbp+0E8h+arg_0], 1
 * 000000014042C81D: jz      short loc_14042C822
 * 000000014042C81F: stac
 * 000000014042C822: test    [rbp+0E8h+arg_8], 200h
 * 000000014042C82C: jz      short loc_14042C82F
 * 000000014042C82E: sti
 * 000000014042C82F: mov     ecx, 80000003h
 * 000000014042C834: mov     edx, 1
 * 000000014042C839: mov     r8, [rbp+0E8h]
 * 000000014042C840: dec     r8
 * 000000014042C843: mov     r9d, 0
 * 000000014042C849: call    KiExceptionDispatch
 * 000000014042C84E: nop
 * 000000014042C84F: retn
 */
