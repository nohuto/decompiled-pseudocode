/*
 * XREFs of KiHvInterrupt @ 0x140424F00
 * Callers:
 *     KiHvInterruptShadow @ 0x140AF6FC0 (KiHvInterruptShadow.c)
 * Callees:
 *     KiCheckForSListAddress @ 0x14030FDE0 (KiCheckForSListAddress.c)
 *     KeWakeProcessor @ 0x140341880 (KeWakeProcessor.c)
 *     KiSaveDebugRegisterState @ 0x14041EFA0 (KiSaveDebugRegisterState.c)
 *     KiHvInterrupt @ 0x140424F00 (KiHvInterrupt.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140435300 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiHvInterrupt @ 0x140424F00
 * Reason: Hex-Rays returned no pseudocode for 0x140424F00
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140424F00: push    0
 * 0000000140424F02: push    rbp
 * 0000000140424F03: push    rsi
 * 0000000140424F04: sub     rsp, 150h
 * 0000000140424F0B: lea     rbp, [rsp+168h+var_E8]
 * 0000000140424F13: mov     byte ptr [rbp-55h], 0
 * 0000000140424F17: mov     [rbp-50h], rax
 * 0000000140424F1B: mov     [rbp-48h], rcx
 * 0000000140424F1F: mov     [rbp-40h], rdx
 * 0000000140424F23: mov     [rbp-38h], r8
 * 0000000140424F27: mov     [rbp-30h], r9
 * 0000000140424F2B: mov     [rbp-28h], r10
 * 0000000140424F2F: mov     [rbp-20h], r11
 * 0000000140424F33: test    byte ptr [rbp+0F0h], 1
 * 0000000140424F3A: jnz     short loc_140424F76
 * 0000000140424F3C: xor     edx, edx
 * 0000000140424F3E: rdsspq  rdx
 * 0000000140424F43: mov     [rbp+58h], rdx
 * 0000000140424F47: lfence
 * 0000000140424F4A: test    word ptr gs:860h, 1
 * 0000000140424F55: jnz     short loc_140424F5F
 * 0000000140424F57: lfence
 * 0000000140424F5A: jmp     loc_1404251E6
 * 0000000140424F5F: movzx   eax, word ptr gs:864h
 * 0000000140424F68: mov     ecx, 48h ; 'H'
 * 0000000140424F6D: xor     edx, edx
 * 0000000140424F6F: wrmsr
 * 0000000140424F71: jmp     loc_1404251E6
 * 0000000140424F76: test    cs:KiKvaShadow, 1
 * 0000000140424F7D: jnz     short loc_140424F82
 * 0000000140424F7F: swapgs
 * 0000000140424F82: lfence
 * 0000000140424F85: mov     rcx, gs:95A8h
 * 0000000140424F8E: test    rcx, rcx
 * 0000000140424F91: jz      short loc_140424FB2
 * 0000000140424F93: rdsspq  rdx
 * 0000000140424F98: mov     r10, gs:95A0h
 * 0000000140424FA1: add     r10, 8
 * 0000000140424FA5: cmp     rdx, r10
 * 0000000140424FA8: jnz     short loc_140424FB2
 * 0000000140424FAA: rstorssp qword ptr [rcx]
 * 0000000140424FAE: saveprevssp
 * 0000000140424FB2: mov     r10, gs:188h
 * 0000000140424FBB: mov     rcx, gs:188h
 * 0000000140424FC4: mov     rcx, [rcx+220h]
 * 0000000140424FCB: mov     rcx, [rcx+9E0h]
 * 0000000140424FD2: mov     gs:858h, rcx
 * 0000000140424FDB: mov     cx, gs:850h
 * 0000000140424FE4: mov     gs:852h, cx
 * 0000000140424FED: mov     cx, gs:860h
 * 0000000140424FF6: mov     gs:854h, cx
 * 0000000140424FFF: movzx   eax, word ptr gs:866h
 * 0000000140425008: cmp     gs:864h, ax
 * 0000000140425011: jz      short loc_140425025
 * 0000000140425013: mov     gs:864h, ax
 * 000000014042501C: mov     ecx, 48h ; 'H'
 * 0000000140425021: xor     edx, edx
 * 0000000140425023: wrmsr
 * 0000000140425025: movzx   edx, word ptr gs:860h
 * 000000014042502E: test    edx, 8
 * 0000000140425034: jz      short loc_14042504D
 * 0000000140425036: mov     eax, 1
 * 000000014042503B: xor     edx, edx
 * 000000014042503D: mov     ecx, 49h ; 'I'
 * 0000000140425042: wrmsr
 * 0000000140425044: movzx   edx, word ptr gs:860h
 * 000000014042504D: test    edx, 2
 * 0000000140425053: jz      loc_140425190
 * 0000000140425059: call    loc_14042516C
 * 000000014042505E: add     rsp, 8
 * 0000000140425062: call    loc_140425175
 * 0000000140425067: add     rsp, 8
 * 000000014042506B: call    loc_14042505E
 * 0000000140425070: add     rsp, 8
 * 0000000140425074: call    loc_140425067
 * 0000000140425079: add     rsp, 8
 * 000000014042507D: call    loc_140425070
 * 0000000140425082: add     rsp, 8
 * 0000000140425086: call    loc_140425079
 * 000000014042508B: add     rsp, 8
 * 000000014042508F: call    loc_140425082
 * 0000000140425094: add     rsp, 8
 * 0000000140425098: call    loc_14042508B
 * 000000014042509D: add     rsp, 8
 * 00000001404250A1: call    loc_140425094
 * 00000001404250A6: add     rsp, 8
 * 00000001404250AA: call    loc_14042509D
 * 00000001404250AF: add     rsp, 8
 * 00000001404250B3: call    loc_1404250A6
 * 00000001404250B8: add     rsp, 8
 * 00000001404250BC: call    loc_1404250AF
 * 00000001404250C1: add     rsp, 8
 * 00000001404250C5: call    loc_1404250B8
 * 00000001404250CA: add     rsp, 8
 * 00000001404250CE: call    loc_1404250C1
 * 00000001404250D3: add     rsp, 8
 * 00000001404250D7: call    loc_1404250CA
 * 00000001404250DC: add     rsp, 8
 * 00000001404250E0: call    loc_1404250D3
 * 00000001404250E5: add     rsp, 8
 * 00000001404250E9: call    loc_1404250DC
 * 00000001404250EE: add     rsp, 8
 * 00000001404250F2: call    loc_1404250E5
 * 00000001404250F7: add     rsp, 8
 * 00000001404250FB: call    loc_1404250EE
 * 0000000140425100: add     rsp, 8
 * 0000000140425104: call    loc_1404250F7
 * 0000000140425109: add     rsp, 8
 * 000000014042510D: call    loc_140425100
 * 0000000140425112: add     rsp, 8
 * 0000000140425116: call    loc_140425109
 * 000000014042511B: add     rsp, 8
 * 000000014042511F: call    loc_140425112
 * 0000000140425124: add     rsp, 8
 * 0000000140425128: call    loc_14042511B
 * 000000014042512D: add     rsp, 8
 * 0000000140425131: call    loc_140425124
 * 0000000140425136: add     rsp, 8
 * 000000014042513A: call    loc_14042512D
 * 000000014042513F: add     rsp, 8
 * 0000000140425143: call    loc_140425136
 * 0000000140425148: add     rsp, 8
 * 000000014042514C: call    loc_14042513F
 * 0000000140425151: add     rsp, 8
 * 0000000140425155: call    loc_140425148
 * 000000014042515A: add     rsp, 8
 * 000000014042515E: call    loc_140425151
 * 0000000140425163: add     rsp, 8
 * 0000000140425167: call    loc_14042515A
 * 000000014042516C: add     rsp, 8
 * 0000000140425170: call    loc_140425163
 * 0000000140425175: add     rsp, 8
 * 0000000140425179: mov     eax, 0DADAh
 * 000000014042517E: test    byte ptr gs:862h, 8
 * 0000000140425187: jz      short loc_140425190
 * 0000000140425189: mov     al, 20h ; ' '
 * 000000014042518B: incsspq rax
 * 0000000140425190: test    edx, 200h
 * 0000000140425196: jz      short loc_14042519D
 * 0000000140425198: call    KiFlushBhbDuringTrapEntryOrExit
 * 000000014042519D: lfence
 * 00000001404251A0: mov     byte ptr gs:856h, 0
 * 00000001404251A9: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 00000001404251B0: jz      short loc_1404251D1
 * 00000001404251B2: mov     ecx, 6A7h
 * 00000001404251B7: rdmsr
 * 00000001404251B9: cmp     edx, 0
 * 00000001404251BC: jz      short loc_1404251D1
 * 00000001404251BE: mov     ecx, edx
 * 00000001404251C0: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 00000001404251C6: cmp     edx, ecx
 * 00000001404251C8: jz      short loc_1404251D1
 * 00000001404251CA: mov     ecx, 6A7h
 * 00000001404251CF: wrmsr
 * 00000001404251D1: test    byte ptr [r10+3], 3
 * 00000001404251D6: mov     word ptr [rbp+80h], 0
 * 00000001404251DF: jz      short loc_1404251E6
 * 00000001404251E1: call    KiSaveDebugRegisterState
 * 00000001404251E6: cld
 * 00000001404251E7: stmxcsr dword ptr [rbp-54h]
 * 00000001404251EB: ldmxcsr dword ptr gs:180h
 * 00000001404251F4: movaps  xmmword ptr [rbp-10h], xmm0
 * 00000001404251F8: movaps  xmmword ptr [rbp+0], xmm1
 * 00000001404251FC: movaps  xmmword ptr [rbp+10h], xmm2
 * 0000000140425200: movaps  xmmword ptr [rbp+20h], xmm3
 * 0000000140425204: movaps  xmmword ptr [rbp+30h], xmm4
 * 0000000140425208: movaps  xmmword ptr [rbp+40h], xmm5
 * 000000014042520C: cmp     byte ptr gs:82DAh, 0
 * 0000000140425215: jz      short loc_14042521C
 * 0000000140425217: call    KeWakeProcessor
 * 000000014042521C: lea     rax, ExpInterlockedPopEntrySListResume
 * 0000000140425223: cmp     rax, [rbp+0E8h]
 * 000000014042522A: jnb     short loc_140425245
 * 000000014042522C: lea     rax, ExpInterlockedPopEntrySListEnd
 * 0000000140425233: cmp     rax, [rbp+0E8h]
 * 000000014042523A: jb      short loc_140425245
 * 000000014042523C: lea     rcx, [rbp-80h]
 * 0000000140425240: call    KiCheckForSListAddress
 * 0000000140425245: xor     esi, esi
 * 0000000140425247: inc     dword ptr gs:82C0h
 * 000000014042524F: jmp     KiHvInterruptDispatch
 */
