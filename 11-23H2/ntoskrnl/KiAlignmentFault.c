/*
 * XREFs of KiAlignmentFault @ 0x140430900
 * Callers:
 *     KiAlignmentFaultShadow @ 0x140AF6940 (KiAlignmentFaultShadow.c)
 * Callees:
 *     KiSaveDebugRegisterState @ 0x14041F330 (KiSaveDebugRegisterState.c)
 *     KiAlignmentFault @ 0x140430900 (KiAlignmentFault.c)
 *     KiExceptionDispatch @ 0x140434D40 (KiExceptionDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140435700 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiAlignmentFault @ 0x140430900
 * Reason: Hex-Rays returned no pseudocode for 0x140430900
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140430900: push    rbp
 * 0000000140430901: sub     rsp, 158h
 * 0000000140430908: lea     rbp, [rsp+80h]
 * 0000000140430910: mov     [rbp+0D8h+var_12D], 1
 * 0000000140430914: mov     [rbp+0D8h+var_128], rax
 * 0000000140430918: mov     [rbp+0D8h+var_120], rcx
 * 000000014043091C: mov     [rbp+0D8h+var_118], rdx
 * 0000000140430920: mov     [rbp+0D8h+var_110], r8
 * 0000000140430924: mov     [rbp+0D8h+var_108], r9
 * 0000000140430928: mov     [rbp+0D8h+var_100], r10
 * 000000014043092C: mov     [rbp+0D8h+var_F8], r11
 * 0000000140430930: test    [rbp+0D8h+arg_8], 1
 * 0000000140430937: jnz     short loc_140430973
 * 0000000140430939: xor     edx, edx
 * 000000014043093B: rdsspq  rdx
 * 0000000140430940: mov     [rbp+0D8h+var_80], rdx
 * 0000000140430944: lfence
 * 0000000140430947: test    word ptr gs:860h, 1
 * 0000000140430952: jnz     short loc_14043095C
 * 0000000140430954: lfence
 * 0000000140430957: jmp     loc_140430BE3
 * 000000014043095C: movzx   eax, word ptr gs:864h
 * 0000000140430965: mov     ecx, 48h ; 'H'
 * 000000014043096A: xor     edx, edx
 * 000000014043096C: wrmsr
 * 000000014043096E: jmp     loc_140430BE3
 * 0000000140430973: test    cs:KiKvaShadow, 1
 * 000000014043097A: jnz     short loc_14043097F
 * 000000014043097C: swapgs
 * 000000014043097F: lfence
 * 0000000140430982: mov     rcx, gs:95A8h
 * 000000014043098B: test    rcx, rcx
 * 000000014043098E: jz      short loc_1404309AF
 * 0000000140430990: rdsspq  rdx
 * 0000000140430995: mov     r10, gs:95A0h
 * 000000014043099E: add     r10, 8
 * 00000001404309A2: cmp     rdx, r10
 * 00000001404309A5: jnz     short loc_1404309AF
 * 00000001404309A7: rstorssp qword ptr [rcx]
 * 00000001404309AB: saveprevssp
 * 00000001404309AF: mov     r10, gs:188h
 * 00000001404309B8: mov     rcx, gs:188h
 * 00000001404309C1: mov     rcx, [rcx+220h]
 * 00000001404309C8: mov     rcx, [rcx+9E0h]
 * 00000001404309CF: mov     gs:858h, rcx
 * 00000001404309D8: mov     cx, gs:850h
 * 00000001404309E1: mov     gs:852h, cx
 * 00000001404309EA: mov     cx, gs:860h
 * 00000001404309F3: mov     gs:854h, cx
 * 00000001404309FC: movzx   eax, word ptr gs:866h
 * 0000000140430A05: cmp     gs:864h, ax
 * 0000000140430A0E: jz      short loc_140430A22
 * 0000000140430A10: mov     gs:864h, ax
 * 0000000140430A19: mov     ecx, 48h ; 'H'
 * 0000000140430A1E: xor     edx, edx
 * 0000000140430A20: wrmsr
 * 0000000140430A22: movzx   edx, word ptr gs:860h
 * 0000000140430A2B: test    edx, 8
 * 0000000140430A31: jz      short loc_140430A4A
 * 0000000140430A33: mov     eax, 1
 * 0000000140430A38: xor     edx, edx
 * 0000000140430A3A: mov     ecx, 49h ; 'I'
 * 0000000140430A3F: wrmsr
 * 0000000140430A41: movzx   edx, word ptr gs:860h
 * 0000000140430A4A: test    edx, 2
 * 0000000140430A50: jz      loc_140430B8D
 * 0000000140430A56: call    loc_140430B69
 * 0000000140430A5B: add     rsp, 8
 * 0000000140430A5F: call    loc_140430B72
 * 0000000140430A64: add     rsp, 8
 * 0000000140430A68: call    loc_140430A5B
 * 0000000140430A6D: add     rsp, 8
 * 0000000140430A71: call    loc_140430A64
 * 0000000140430A76: add     rsp, 8
 * 0000000140430A7A: call    loc_140430A6D
 * 0000000140430A7F: add     rsp, 8
 * 0000000140430A83: call    loc_140430A76
 * 0000000140430A88: add     rsp, 8
 * 0000000140430A8C: call    loc_140430A7F
 * 0000000140430A91: add     rsp, 8
 * 0000000140430A95: call    loc_140430A88
 * 0000000140430A9A: add     rsp, 8
 * 0000000140430A9E: call    loc_140430A91
 * 0000000140430AA3: add     rsp, 8
 * 0000000140430AA7: call    loc_140430A9A
 * 0000000140430AAC: add     rsp, 8
 * 0000000140430AB0: call    loc_140430AA3
 * 0000000140430AB5: add     rsp, 8
 * 0000000140430AB9: call    loc_140430AAC
 * 0000000140430ABE: add     rsp, 8
 * 0000000140430AC2: call    loc_140430AB5
 * 0000000140430AC7: add     rsp, 8
 * 0000000140430ACB: call    loc_140430ABE
 * 0000000140430AD0: add     rsp, 8
 * 0000000140430AD4: call    loc_140430AC7
 * 0000000140430AD9: add     rsp, 8
 * 0000000140430ADD: call    loc_140430AD0
 * 0000000140430AE2: add     rsp, 8
 * 0000000140430AE6: call    loc_140430AD9
 * 0000000140430AEB: add     rsp, 8
 * 0000000140430AEF: call    loc_140430AE2
 * 0000000140430AF4: add     rsp, 8
 * 0000000140430AF8: call    loc_140430AEB
 * 0000000140430AFD: add     rsp, 8
 * 0000000140430B01: call    loc_140430AF4
 * 0000000140430B06: add     rsp, 8
 * 0000000140430B0A: call    loc_140430AFD
 * 0000000140430B0F: add     rsp, 8
 * 0000000140430B13: call    loc_140430B06
 * 0000000140430B18: add     rsp, 8
 * 0000000140430B1C: call    loc_140430B0F
 * 0000000140430B21: add     rsp, 8
 * 0000000140430B25: call    loc_140430B18
 * 0000000140430B2A: add     rsp, 8
 * 0000000140430B2E: call    loc_140430B21
 * 0000000140430B33: add     rsp, 8
 * 0000000140430B37: call    loc_140430B2A
 * 0000000140430B3C: add     rsp, 8
 * 0000000140430B40: call    loc_140430B33
 * 0000000140430B45: add     rsp, 8
 * 0000000140430B49: call    loc_140430B3C
 * 0000000140430B4E: add     rsp, 8
 * 0000000140430B52: call    loc_140430B45
 * 0000000140430B57: add     rsp, 8
 * 0000000140430B5B: call    loc_140430B4E
 * 0000000140430B60: add     rsp, 8
 * 0000000140430B64: call    loc_140430B57
 * 0000000140430B69: add     rsp, 8
 * 0000000140430B6D: call    loc_140430B60
 * 0000000140430B72: add     rsp, 8
 * 0000000140430B76: mov     eax, 0DADAh
 * 0000000140430B7B: test    byte ptr gs:862h, 8
 * 0000000140430B84: jz      short loc_140430B8D
 * 0000000140430B86: mov     al, 20h ; ' '
 * 0000000140430B88: incsspq rax
 * 0000000140430B8D: test    edx, 200h
 * 0000000140430B93: jz      short loc_140430B9A
 * 0000000140430B95: call    KiFlushBhbDuringTrapEntryOrExit
 * 0000000140430B9A: lfence
 * 0000000140430B9D: mov     byte ptr gs:856h, 0
 * 0000000140430BA6: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 0000000140430BAD: jz      short loc_140430BCE
 * 0000000140430BAF: mov     ecx, 6A7h
 * 0000000140430BB4: rdmsr
 * 0000000140430BB6: cmp     edx, 0
 * 0000000140430BB9: jz      short loc_140430BCE
 * 0000000140430BBB: mov     ecx, edx
 * 0000000140430BBD: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 0000000140430BC3: cmp     edx, ecx
 * 0000000140430BC5: jz      short loc_140430BCE
 * 0000000140430BC7: mov     ecx, 6A7h
 * 0000000140430BCC: wrmsr
 * 0000000140430BCE: test    byte ptr [r10+3], 3
 * 0000000140430BD3: mov     [rbp+0D8h+var_58], 0
 * 0000000140430BDC: jz      short loc_140430BE3
 * 0000000140430BDE: call    KiSaveDebugRegisterState
 * 0000000140430BE3: cld
 * 0000000140430BE4: stmxcsr [rbp+0D8h+var_12C]
 * 0000000140430BE8: ldmxcsr dword ptr gs:180h
 * 0000000140430BF1: movaps  [rbp+0D8h+var_E8], xmm0
 * 0000000140430BF5: movaps  [rbp+0D8h+var_D8], xmm1
 * 0000000140430BF9: movaps  [rbp+0D8h+var_C8], xmm2
 * 0000000140430BFD: movaps  [rbp+0D8h+var_B8], xmm3
 * 0000000140430C01: movaps  [rbp+0D8h+var_A8], xmm4
 * 0000000140430C05: movaps  [rbp+0D8h+var_98], xmm5
 * 0000000140430C09: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 0000000140430C10: jz      short loc_140430C1E
 * 0000000140430C12: test    [rbp+0D8h+arg_8], 1
 * 0000000140430C19: jz      short loc_140430C1E
 * 0000000140430C1B: stac
 * 0000000140430C1E: mov     eax, [rbp+0E0h]
 * 0000000140430C24: test    [rbp+0D8h+arg_10], 200h
 * 0000000140430C2E: jz      short loc_140430C31
 * 0000000140430C30: sti
 * 0000000140430C31: mov     ecx, 80000002h
 * 0000000140430C36: xor     edx, edx
 * 0000000140430C38: mov     r8, [rbp+0D8h+arg_0]
 * 0000000140430C3F: call    KiExceptionDispatch
 * 0000000140430C44: nop
 * 0000000140430C45: retn
 */
