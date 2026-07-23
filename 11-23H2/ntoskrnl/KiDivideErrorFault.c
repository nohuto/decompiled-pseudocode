/*
 * XREFs of KiDivideErrorFault @ 0x14042C000
 * Callers:
 *     KiDivideErrorFaultShadow @ 0x140AF6100 (KiDivideErrorFaultShadow.c)
 * Callees:
 *     KiSaveDebugRegisterState @ 0x14041F330 (KiSaveDebugRegisterState.c)
 *     KiDivideErrorFault @ 0x14042C000 (KiDivideErrorFault.c)
 *     KiExceptionDispatch @ 0x140434D40 (KiExceptionDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140435700 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiDivideErrorFault @ 0x14042C000
 * Reason: Hex-Rays returned no pseudocode for 0x14042C000
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014042C000: sub     rsp, 8
 * 000000014042C004: push    rbp
 * 000000014042C005: sub     rsp, 158h
 * 000000014042C00C: lea     rbp, [rsp+80h]
 * 000000014042C014: mov     [rbp+0E8h+var_13D], 1
 * 000000014042C018: mov     [rbp+0E8h+var_138], rax
 * 000000014042C01C: mov     [rbp+0E8h+var_130], rcx
 * 000000014042C020: mov     [rbp+0E8h+var_128], rdx
 * 000000014042C024: mov     [rbp+0E8h+var_120], r8
 * 000000014042C028: mov     [rbp+0E8h+var_118], r9
 * 000000014042C02C: mov     [rbp+0E8h+var_110], r10
 * 000000014042C030: mov     [rbp+0E8h+var_108], r11
 * 000000014042C034: test    [rbp+0E8h+arg_0], 1
 * 000000014042C03B: jnz     short loc_14042C077
 * 000000014042C03D: xor     edx, edx
 * 000000014042C03F: rdsspq  rdx
 * 000000014042C044: mov     [rbp+0E8h+var_90], rdx
 * 000000014042C048: lfence
 * 000000014042C04B: test    word ptr gs:860h, 1
 * 000000014042C056: jnz     short loc_14042C060
 * 000000014042C058: lfence
 * 000000014042C05B: jmp     loc_14042C2E7
 * 000000014042C060: movzx   eax, word ptr gs:864h
 * 000000014042C069: mov     ecx, 48h ; 'H'
 * 000000014042C06E: xor     edx, edx
 * 000000014042C070: wrmsr
 * 000000014042C072: jmp     loc_14042C2E7
 * 000000014042C077: test    cs:KiKvaShadow, 1
 * 000000014042C07E: jnz     short loc_14042C083
 * 000000014042C080: swapgs
 * 000000014042C083: lfence
 * 000000014042C086: mov     rcx, gs:95A8h
 * 000000014042C08F: test    rcx, rcx
 * 000000014042C092: jz      short loc_14042C0B3
 * 000000014042C094: rdsspq  rdx
 * 000000014042C099: mov     r10, gs:95A0h
 * 000000014042C0A2: add     r10, 8
 * 000000014042C0A6: cmp     rdx, r10
 * 000000014042C0A9: jnz     short loc_14042C0B3
 * 000000014042C0AB: rstorssp qword ptr [rcx]
 * 000000014042C0AF: saveprevssp
 * 000000014042C0B3: mov     r10, gs:188h
 * 000000014042C0BC: mov     rcx, gs:188h
 * 000000014042C0C5: mov     rcx, [rcx+220h]
 * 000000014042C0CC: mov     rcx, [rcx+9E0h]
 * 000000014042C0D3: mov     gs:858h, rcx
 * 000000014042C0DC: mov     cx, gs:850h
 * 000000014042C0E5: mov     gs:852h, cx
 * 000000014042C0EE: mov     cx, gs:860h
 * 000000014042C0F7: mov     gs:854h, cx
 * 000000014042C100: movzx   eax, word ptr gs:866h
 * 000000014042C109: cmp     gs:864h, ax
 * 000000014042C112: jz      short loc_14042C126
 * 000000014042C114: mov     gs:864h, ax
 * 000000014042C11D: mov     ecx, 48h ; 'H'
 * 000000014042C122: xor     edx, edx
 * 000000014042C124: wrmsr
 * 000000014042C126: movzx   edx, word ptr gs:860h
 * 000000014042C12F: test    edx, 8
 * 000000014042C135: jz      short loc_14042C14E
 * 000000014042C137: mov     eax, 1
 * 000000014042C13C: xor     edx, edx
 * 000000014042C13E: mov     ecx, 49h ; 'I'
 * 000000014042C143: wrmsr
 * 000000014042C145: movzx   edx, word ptr gs:860h
 * 000000014042C14E: test    edx, 2
 * 000000014042C154: jz      loc_14042C291
 * 000000014042C15A: call    loc_14042C26D
 * 000000014042C15F: add     rsp, 8
 * 000000014042C163: call    loc_14042C276
 * 000000014042C168: add     rsp, 8
 * 000000014042C16C: call    loc_14042C15F
 * 000000014042C171: add     rsp, 8
 * 000000014042C175: call    loc_14042C168
 * 000000014042C17A: add     rsp, 8
 * 000000014042C17E: call    loc_14042C171
 * 000000014042C183: add     rsp, 8
 * 000000014042C187: call    loc_14042C17A
 * 000000014042C18C: add     rsp, 8
 * 000000014042C190: call    loc_14042C183
 * 000000014042C195: add     rsp, 8
 * 000000014042C199: call    loc_14042C18C
 * 000000014042C19E: add     rsp, 8
 * 000000014042C1A2: call    loc_14042C195
 * 000000014042C1A7: add     rsp, 8
 * 000000014042C1AB: call    loc_14042C19E
 * 000000014042C1B0: add     rsp, 8
 * 000000014042C1B4: call    loc_14042C1A7
 * 000000014042C1B9: add     rsp, 8
 * 000000014042C1BD: call    loc_14042C1B0
 * 000000014042C1C2: add     rsp, 8
 * 000000014042C1C6: call    loc_14042C1B9
 * 000000014042C1CB: add     rsp, 8
 * 000000014042C1CF: call    loc_14042C1C2
 * 000000014042C1D4: add     rsp, 8
 * 000000014042C1D8: call    loc_14042C1CB
 * 000000014042C1DD: add     rsp, 8
 * 000000014042C1E1: call    loc_14042C1D4
 * 000000014042C1E6: add     rsp, 8
 * 000000014042C1EA: call    loc_14042C1DD
 * 000000014042C1EF: add     rsp, 8
 * 000000014042C1F3: call    loc_14042C1E6
 * 000000014042C1F8: add     rsp, 8
 * 000000014042C1FC: call    loc_14042C1EF
 * 000000014042C201: add     rsp, 8
 * 000000014042C205: call    loc_14042C1F8
 * 000000014042C20A: add     rsp, 8
 * 000000014042C20E: call    loc_14042C201
 * 000000014042C213: add     rsp, 8
 * 000000014042C217: call    loc_14042C20A
 * 000000014042C21C: add     rsp, 8
 * 000000014042C220: call    loc_14042C213
 * 000000014042C225: add     rsp, 8
 * 000000014042C229: call    loc_14042C21C
 * 000000014042C22E: add     rsp, 8
 * 000000014042C232: call    loc_14042C225
 * 000000014042C237: add     rsp, 8
 * 000000014042C23B: call    loc_14042C22E
 * 000000014042C240: add     rsp, 8
 * 000000014042C244: call    loc_14042C237
 * 000000014042C249: add     rsp, 8
 * 000000014042C24D: call    loc_14042C240
 * 000000014042C252: add     rsp, 8
 * 000000014042C256: call    loc_14042C249
 * 000000014042C25B: add     rsp, 8
 * 000000014042C25F: call    loc_14042C252
 * 000000014042C264: add     rsp, 8
 * 000000014042C268: call    loc_14042C25B
 * 000000014042C26D: add     rsp, 8
 * 000000014042C271: call    loc_14042C264
 * 000000014042C276: add     rsp, 8
 * 000000014042C27A: mov     eax, 0DADAh
 * 000000014042C27F: test    byte ptr gs:862h, 8
 * 000000014042C288: jz      short loc_14042C291
 * 000000014042C28A: mov     al, 20h ; ' '
 * 000000014042C28C: incsspq rax
 * 000000014042C291: test    edx, 200h
 * 000000014042C297: jz      short loc_14042C29E
 * 000000014042C299: call    KiFlushBhbDuringTrapEntryOrExit
 * 000000014042C29E: lfence
 * 000000014042C2A1: mov     byte ptr gs:856h, 0
 * 000000014042C2AA: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 000000014042C2B1: jz      short loc_14042C2D2
 * 000000014042C2B3: mov     ecx, 6A7h
 * 000000014042C2B8: rdmsr
 * 000000014042C2BA: cmp     edx, 0
 * 000000014042C2BD: jz      short loc_14042C2D2
 * 000000014042C2BF: mov     ecx, edx
 * 000000014042C2C1: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 000000014042C2C7: cmp     edx, ecx
 * 000000014042C2C9: jz      short loc_14042C2D2
 * 000000014042C2CB: mov     ecx, 6A7h
 * 000000014042C2D0: wrmsr
 * 000000014042C2D2: test    byte ptr [r10+3], 3
 * 000000014042C2D7: mov     [rbp+0E8h+var_68], 0
 * 000000014042C2E0: jz      short loc_14042C2E7
 * 000000014042C2E2: call    KiSaveDebugRegisterState
 * 000000014042C2E7: cld
 * 000000014042C2E8: stmxcsr [rbp+0E8h+var_13C]
 * 000000014042C2EC: ldmxcsr dword ptr gs:180h
 * 000000014042C2F5: movaps  [rbp+0E8h+var_F8], xmm0
 * 000000014042C2F9: movaps  [rbp+0E8h+var_E8], xmm1
 * 000000014042C2FD: movaps  [rbp+0E8h+var_D8], xmm2
 * 000000014042C301: movaps  [rbp+0E8h+var_C8], xmm3
 * 000000014042C305: movaps  [rbp+0E8h+var_B8], xmm4
 * 000000014042C309: movaps  [rbp+0E8h+var_A8], xmm5
 * 000000014042C30D: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 000000014042C314: jz      short loc_14042C322
 * 000000014042C316: test    [rbp+0E8h+arg_0], 1
 * 000000014042C31D: jz      short loc_14042C322
 * 000000014042C31F: stac
 * 000000014042C322: test    [rbp+0E8h+arg_8], 200h
 * 000000014042C32C: jz      short loc_14042C32F
 * 000000014042C32E: sti
 * 000000014042C32F: mov     ecx, 10000003h
 * 000000014042C334: xor     edx, edx
 * 000000014042C336: mov     r8, [rbp+0E8h]
 * 000000014042C33D: call    KiExceptionDispatch
 * 000000014042C342: nop
 * 000000014042C343: retn
 */
