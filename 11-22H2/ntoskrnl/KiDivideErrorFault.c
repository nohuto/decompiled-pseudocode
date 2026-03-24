/*
 * XREFs of KiDivideErrorFault @ 0x14042B600
 * Callers:
 *     KiDivideErrorFaultShadow @ 0x140AF7100 (KiDivideErrorFaultShadow.c)
 * Callees:
 *     KiSaveDebugRegisterState @ 0x14041E8E0 (KiSaveDebugRegisterState.c)
 *     KiDivideErrorFault @ 0x14042B600 (KiDivideErrorFault.c)
 *     KiExceptionDispatch @ 0x140434340 (KiExceptionDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140434D00 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiDivideErrorFault @ 0x14042B600
 * Reason: Hex-Rays returned no pseudocode for 0x14042B600
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014042B600: sub     rsp, 8
 * 000000014042B604: push    rbp
 * 000000014042B605: sub     rsp, 158h
 * 000000014042B60C: lea     rbp, [rsp+80h]
 * 000000014042B614: mov     [rbp+0E8h+var_13D], 1
 * 000000014042B618: mov     [rbp+0E8h+var_138], rax
 * 000000014042B61C: mov     [rbp+0E8h+var_130], rcx
 * 000000014042B620: mov     [rbp+0E8h+var_128], rdx
 * 000000014042B624: mov     [rbp+0E8h+var_120], r8
 * 000000014042B628: mov     [rbp+0E8h+var_118], r9
 * 000000014042B62C: mov     [rbp+0E8h+var_110], r10
 * 000000014042B630: mov     [rbp+0E8h+var_108], r11
 * 000000014042B634: test    [rbp+0E8h+arg_0], 1
 * 000000014042B63B: jnz     short loc_14042B677
 * 000000014042B63D: xor     edx, edx
 * 000000014042B63F: rdsspq  rdx
 * 000000014042B644: mov     [rbp+0E8h+var_90], rdx
 * 000000014042B648: lfence
 * 000000014042B64B: test    word ptr gs:860h, 1
 * 000000014042B656: jnz     short loc_14042B660
 * 000000014042B658: lfence
 * 000000014042B65B: jmp     loc_14042B8E7
 * 000000014042B660: movzx   eax, word ptr gs:864h
 * 000000014042B669: mov     ecx, 48h ; 'H'
 * 000000014042B66E: xor     edx, edx
 * 000000014042B670: wrmsr
 * 000000014042B672: jmp     loc_14042B8E7
 * 000000014042B677: test    cs:KiKvaShadow, 1
 * 000000014042B67E: jnz     short loc_14042B683
 * 000000014042B680: swapgs
 * 000000014042B683: lfence
 * 000000014042B686: mov     rcx, gs:95A8h
 * 000000014042B68F: test    rcx, rcx
 * 000000014042B692: jz      short loc_14042B6B3
 * 000000014042B694: rdsspq  rdx
 * 000000014042B699: mov     r10, gs:95A0h
 * 000000014042B6A2: add     r10, 8
 * 000000014042B6A6: cmp     rdx, r10
 * 000000014042B6A9: jnz     short loc_14042B6B3
 * 000000014042B6AB: rstorssp qword ptr [rcx]
 * 000000014042B6AF: saveprevssp
 * 000000014042B6B3: mov     r10, gs:188h
 * 000000014042B6BC: mov     rcx, gs:188h
 * 000000014042B6C5: mov     rcx, [rcx+220h]
 * 000000014042B6CC: mov     rcx, [rcx+9E0h]
 * 000000014042B6D3: mov     gs:858h, rcx
 * 000000014042B6DC: mov     cx, gs:850h
 * 000000014042B6E5: mov     gs:852h, cx
 * 000000014042B6EE: mov     cx, gs:860h
 * 000000014042B6F7: mov     gs:854h, cx
 * 000000014042B700: movzx   eax, word ptr gs:866h
 * 000000014042B709: cmp     gs:864h, ax
 * 000000014042B712: jz      short loc_14042B726
 * 000000014042B714: mov     gs:864h, ax
 * 000000014042B71D: mov     ecx, 48h ; 'H'
 * 000000014042B722: xor     edx, edx
 * 000000014042B724: wrmsr
 * 000000014042B726: movzx   edx, word ptr gs:860h
 * 000000014042B72F: test    edx, 8
 * 000000014042B735: jz      short loc_14042B74E
 * 000000014042B737: mov     eax, 1
 * 000000014042B73C: xor     edx, edx
 * 000000014042B73E: mov     ecx, 49h ; 'I'
 * 000000014042B743: wrmsr
 * 000000014042B745: movzx   edx, word ptr gs:860h
 * 000000014042B74E: test    edx, 2
 * 000000014042B754: jz      loc_14042B891
 * 000000014042B75A: call    loc_14042B86D
 * 000000014042B75F: add     rsp, 8
 * 000000014042B763: call    loc_14042B876
 * 000000014042B768: add     rsp, 8
 * 000000014042B76C: call    loc_14042B75F
 * 000000014042B771: add     rsp, 8
 * 000000014042B775: call    loc_14042B768
 * 000000014042B77A: add     rsp, 8
 * 000000014042B77E: call    loc_14042B771
 * 000000014042B783: add     rsp, 8
 * 000000014042B787: call    loc_14042B77A
 * 000000014042B78C: add     rsp, 8
 * 000000014042B790: call    loc_14042B783
 * 000000014042B795: add     rsp, 8
 * 000000014042B799: call    loc_14042B78C
 * 000000014042B79E: add     rsp, 8
 * 000000014042B7A2: call    loc_14042B795
 * 000000014042B7A7: add     rsp, 8
 * 000000014042B7AB: call    loc_14042B79E
 * 000000014042B7B0: add     rsp, 8
 * 000000014042B7B4: call    loc_14042B7A7
 * 000000014042B7B9: add     rsp, 8
 * 000000014042B7BD: call    loc_14042B7B0
 * 000000014042B7C2: add     rsp, 8
 * 000000014042B7C6: call    loc_14042B7B9
 * 000000014042B7CB: add     rsp, 8
 * 000000014042B7CF: call    loc_14042B7C2
 * 000000014042B7D4: add     rsp, 8
 * 000000014042B7D8: call    loc_14042B7CB
 * 000000014042B7DD: add     rsp, 8
 * 000000014042B7E1: call    loc_14042B7D4
 * 000000014042B7E6: add     rsp, 8
 * 000000014042B7EA: call    loc_14042B7DD
 * 000000014042B7EF: add     rsp, 8
 * 000000014042B7F3: call    loc_14042B7E6
 * 000000014042B7F8: add     rsp, 8
 * 000000014042B7FC: call    loc_14042B7EF
 * 000000014042B801: add     rsp, 8
 * 000000014042B805: call    loc_14042B7F8
 * 000000014042B80A: add     rsp, 8
 * 000000014042B80E: call    loc_14042B801
 * 000000014042B813: add     rsp, 8
 * 000000014042B817: call    loc_14042B80A
 * 000000014042B81C: add     rsp, 8
 * 000000014042B820: call    loc_14042B813
 * 000000014042B825: add     rsp, 8
 * 000000014042B829: call    loc_14042B81C
 * 000000014042B82E: add     rsp, 8
 * 000000014042B832: call    loc_14042B825
 * 000000014042B837: add     rsp, 8
 * 000000014042B83B: call    loc_14042B82E
 * 000000014042B840: add     rsp, 8
 * 000000014042B844: call    loc_14042B837
 * 000000014042B849: add     rsp, 8
 * 000000014042B84D: call    loc_14042B840
 * 000000014042B852: add     rsp, 8
 * 000000014042B856: call    loc_14042B849
 * 000000014042B85B: add     rsp, 8
 * 000000014042B85F: call    loc_14042B852
 * 000000014042B864: add     rsp, 8
 * 000000014042B868: call    loc_14042B85B
 * 000000014042B86D: add     rsp, 8
 * 000000014042B871: call    loc_14042B864
 * 000000014042B876: add     rsp, 8
 * 000000014042B87A: mov     eax, 0DADAh
 * 000000014042B87F: test    byte ptr gs:862h, 8
 * 000000014042B888: jz      short loc_14042B891
 * 000000014042B88A: mov     al, 20h ; ' '
 * 000000014042B88C: incsspq rax
 * 000000014042B891: test    edx, 200h
 * 000000014042B897: jz      short loc_14042B89E
 * 000000014042B899: call    KiFlushBhbDuringTrapEntryOrExit
 * 000000014042B89E: lfence
 * 000000014042B8A1: mov     byte ptr gs:856h, 0
 * 000000014042B8AA: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 000000014042B8B1: jz      short loc_14042B8D2
 * 000000014042B8B3: mov     ecx, 6A7h
 * 000000014042B8B8: rdmsr
 * 000000014042B8BA: cmp     edx, 0
 * 000000014042B8BD: jz      short loc_14042B8D2
 * 000000014042B8BF: mov     ecx, edx
 * 000000014042B8C1: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 000000014042B8C7: cmp     edx, ecx
 * 000000014042B8C9: jz      short loc_14042B8D2
 * 000000014042B8CB: mov     ecx, 6A7h
 * 000000014042B8D0: wrmsr
 * 000000014042B8D2: test    byte ptr [r10+3], 3
 * 000000014042B8D7: mov     [rbp+0E8h+var_68], 0
 * 000000014042B8E0: jz      short loc_14042B8E7
 * 000000014042B8E2: call    KiSaveDebugRegisterState
 * 000000014042B8E7: cld
 * 000000014042B8E8: stmxcsr [rbp+0E8h+var_13C]
 * 000000014042B8EC: ldmxcsr dword ptr gs:180h
 * 000000014042B8F5: movaps  [rbp+0E8h+var_F8], xmm0
 * 000000014042B8F9: movaps  [rbp+0E8h+var_E8], xmm1
 * 000000014042B8FD: movaps  [rbp+0E8h+var_D8], xmm2
 * 000000014042B901: movaps  [rbp+0E8h+var_C8], xmm3
 * 000000014042B905: movaps  [rbp+0E8h+var_B8], xmm4
 * 000000014042B909: movaps  [rbp+0E8h+var_A8], xmm5
 * 000000014042B90D: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 000000014042B914: jz      short loc_14042B922
 * 000000014042B916: test    [rbp+0E8h+arg_0], 1
 * 000000014042B91D: jz      short loc_14042B922
 * 000000014042B91F: stac
 * 000000014042B922: test    [rbp+0E8h+arg_8], 200h
 * 000000014042B92C: jz      short loc_14042B92F
 * 000000014042B92E: sti
 * 000000014042B92F: mov     ecx, 10000003h
 * 000000014042B934: xor     edx, edx
 * 000000014042B936: mov     r8, [rbp+0E8h]
 * 000000014042B93D: call    KiExceptionDispatch
 * 000000014042B942: nop
 * 000000014042B943: retn
 */
