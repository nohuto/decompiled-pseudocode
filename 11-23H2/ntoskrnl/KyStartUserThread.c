/*
 * XREFs of KyStartUserThread @ 0x140423F70
 * Callers:
 *     <none>
 * Callees:
 *     KiSaveDebugRegisterState @ 0x14041F330 (KiSaveDebugRegisterState.c)
 *     KyStartUserThread @ 0x140423F70 (KyStartUserThread.c)
 *     KxStartUserThread @ 0x1404242C0 (KxStartUserThread.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140435700 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KyStartUserThread @ 0x140423F70
 * Reason: Hex-Rays returned no pseudocode for 0x140423F70
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140423F70: sub     rsp, 8
 * 0000000140423F74: push    rbp
 * 0000000140423F75: sub     rsp, 158h
 * 0000000140423F7C: lea     rbp, [rsp+80h]
 * 0000000140423F84: mov     [rbp+0E8h+var_13D], 1
 * 0000000140423F88: mov     [rbp+0E8h+var_138], rax
 * 0000000140423F8C: mov     [rbp+0E8h+var_130], rcx
 * 0000000140423F90: mov     [rbp+0E8h+var_128], rdx
 * 0000000140423F94: mov     [rbp+0E8h+var_120], r8
 * 0000000140423F98: mov     [rbp+0E8h+var_118], r9
 * 0000000140423F9C: mov     [rbp+0E8h+var_110], r10
 * 0000000140423FA0: mov     [rbp+0E8h+var_108], r11
 * 0000000140423FA4: test    [rbp+0E8h+arg_0], 1
 * 0000000140423FAB: jnz     short loc_140423FE7
 * 0000000140423FAD: xor     edx, edx
 * 0000000140423FAF: rdsspq  rdx
 * 0000000140423FB4: mov     [rbp+0E8h+var_90], rdx
 * 0000000140423FB8: lfence
 * 0000000140423FBB: test    word ptr gs:860h, 1
 * 0000000140423FC6: jnz     short loc_140423FD0
 * 0000000140423FC8: lfence
 * 0000000140423FCB: jmp     loc_140424257
 * 0000000140423FD0: movzx   eax, word ptr gs:864h
 * 0000000140423FD9: mov     ecx, 48h ; 'H'
 * 0000000140423FDE: xor     edx, edx
 * 0000000140423FE0: wrmsr
 * 0000000140423FE2: jmp     loc_140424257
 * 0000000140423FE7: test    cs:KiKvaShadow, 1
 * 0000000140423FEE: jnz     short loc_140423FF3
 * 0000000140423FF0: swapgs
 * 0000000140423FF3: lfence
 * 0000000140423FF6: mov     rcx, gs:95A8h
 * 0000000140423FFF: test    rcx, rcx
 * 0000000140424002: jz      short loc_140424023
 * 0000000140424004: rdsspq  rdx
 * 0000000140424009: mov     r10, gs:95A0h
 * 0000000140424012: add     r10, 8
 * 0000000140424016: cmp     rdx, r10
 * 0000000140424019: jnz     short loc_140424023
 * 000000014042401B: rstorssp qword ptr [rcx]
 * 000000014042401F: saveprevssp
 * 0000000140424023: mov     r10, gs:188h
 * 000000014042402C: mov     rcx, gs:188h
 * 0000000140424035: mov     rcx, [rcx+220h]
 * 000000014042403C: mov     rcx, [rcx+9E0h]
 * 0000000140424043: mov     gs:858h, rcx
 * 000000014042404C: mov     cx, gs:850h
 * 0000000140424055: mov     gs:852h, cx
 * 000000014042405E: mov     cx, gs:860h
 * 0000000140424067: mov     gs:854h, cx
 * 0000000140424070: movzx   eax, word ptr gs:866h
 * 0000000140424079: cmp     gs:864h, ax
 * 0000000140424082: jz      short loc_140424096
 * 0000000140424084: mov     gs:864h, ax
 * 000000014042408D: mov     ecx, 48h ; 'H'
 * 0000000140424092: xor     edx, edx
 * 0000000140424094: wrmsr
 * 0000000140424096: movzx   edx, word ptr gs:860h
 * 000000014042409F: test    edx, 8
 * 00000001404240A5: jz      short loc_1404240BE
 * 00000001404240A7: mov     eax, 1
 * 00000001404240AC: xor     edx, edx
 * 00000001404240AE: mov     ecx, 49h ; 'I'
 * 00000001404240B3: wrmsr
 * 00000001404240B5: movzx   edx, word ptr gs:860h
 * 00000001404240BE: test    edx, 2
 * 00000001404240C4: jz      loc_140424201
 * 00000001404240CA: call    loc_1404241DD
 * 00000001404240CF: add     rsp, 8
 * 00000001404240D3: call    loc_1404241E6
 * 00000001404240D8: add     rsp, 8
 * 00000001404240DC: call    loc_1404240CF
 * 00000001404240E1: add     rsp, 8
 * 00000001404240E5: call    loc_1404240D8
 * 00000001404240EA: add     rsp, 8
 * 00000001404240EE: call    loc_1404240E1
 * 00000001404240F3: add     rsp, 8
 * 00000001404240F7: call    loc_1404240EA
 * 00000001404240FC: add     rsp, 8
 * 0000000140424100: call    loc_1404240F3
 * 0000000140424105: add     rsp, 8
 * 0000000140424109: call    loc_1404240FC
 * 000000014042410E: add     rsp, 8
 * 0000000140424112: call    loc_140424105
 * 0000000140424117: add     rsp, 8
 * 000000014042411B: call    loc_14042410E
 * 0000000140424120: add     rsp, 8
 * 0000000140424124: call    loc_140424117
 * 0000000140424129: add     rsp, 8
 * 000000014042412D: call    loc_140424120
 * 0000000140424132: add     rsp, 8
 * 0000000140424136: call    loc_140424129
 * 000000014042413B: add     rsp, 8
 * 000000014042413F: call    loc_140424132
 * 0000000140424144: add     rsp, 8
 * 0000000140424148: call    loc_14042413B
 * 000000014042414D: add     rsp, 8
 * 0000000140424151: call    loc_140424144
 * 0000000140424156: add     rsp, 8
 * 000000014042415A: call    loc_14042414D
 * 000000014042415F: add     rsp, 8
 * 0000000140424163: call    loc_140424156
 * 0000000140424168: add     rsp, 8
 * 000000014042416C: call    loc_14042415F
 * 0000000140424171: add     rsp, 8
 * 0000000140424175: call    loc_140424168
 * 000000014042417A: add     rsp, 8
 * 000000014042417E: call    loc_140424171
 * 0000000140424183: add     rsp, 8
 * 0000000140424187: call    loc_14042417A
 * 000000014042418C: add     rsp, 8
 * 0000000140424190: call    loc_140424183
 * 0000000140424195: add     rsp, 8
 * 0000000140424199: call    loc_14042418C
 * 000000014042419E: add     rsp, 8
 * 00000001404241A2: call    loc_140424195
 * 00000001404241A7: add     rsp, 8
 * 00000001404241AB: call    loc_14042419E
 * 00000001404241B0: add     rsp, 8
 * 00000001404241B4: call    loc_1404241A7
 * 00000001404241B9: add     rsp, 8
 * 00000001404241BD: call    loc_1404241B0
 * 00000001404241C2: add     rsp, 8
 * 00000001404241C6: call    loc_1404241B9
 * 00000001404241CB: add     rsp, 8
 * 00000001404241CF: call    loc_1404241C2
 * 00000001404241D4: add     rsp, 8
 * 00000001404241D8: call    loc_1404241CB
 * 00000001404241DD: add     rsp, 8
 * 00000001404241E1: call    loc_1404241D4
 * 00000001404241E6: add     rsp, 8
 * 00000001404241EA: mov     eax, 0DADAh
 * 00000001404241EF: test    byte ptr gs:862h, 8
 * 00000001404241F8: jz      short loc_140424201
 * 00000001404241FA: mov     al, 20h ; ' '
 * 00000001404241FC: incsspq rax
 * 0000000140424201: test    edx, 200h
 * 0000000140424207: jz      short loc_14042420E
 * 0000000140424209: call    KiFlushBhbDuringTrapEntryOrExit
 * 000000014042420E: lfence
 * 0000000140424211: mov     byte ptr gs:856h, 0
 * 000000014042421A: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 0000000140424221: jz      short loc_140424242
 * 0000000140424223: mov     ecx, 6A7h
 * 0000000140424228: rdmsr
 * 000000014042422A: cmp     edx, 0
 * 000000014042422D: jz      short loc_140424242
 * 000000014042422F: mov     ecx, edx
 * 0000000140424231: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 0000000140424237: cmp     edx, ecx
 * 0000000140424239: jz      short loc_140424242
 * 000000014042423B: mov     ecx, 6A7h
 * 0000000140424240: wrmsr
 * 0000000140424242: test    byte ptr [r10+3], 3
 * 0000000140424247: mov     [rbp+0E8h+var_68], 0
 * 0000000140424250: jz      short loc_140424257
 * 0000000140424252: call    KiSaveDebugRegisterState
 * 0000000140424257: cld
 * 0000000140424258: stmxcsr [rbp+0E8h+var_13C]
 * 000000014042425C: ldmxcsr dword ptr gs:180h
 * 0000000140424265: movaps  [rbp+0E8h+var_F8], xmm0
 * 0000000140424269: movaps  [rbp+0E8h+var_E8], xmm1
 * 000000014042426D: movaps  [rbp+0E8h+var_D8], xmm2
 * 0000000140424271: movaps  [rbp+0E8h+var_C8], xmm3
 * 0000000140424275: movaps  [rbp+0E8h+var_B8], xmm4
 * 0000000140424279: movaps  [rbp+0E8h+var_A8], xmm5
 * 000000014042427D: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 0000000140424284: jz      short loc_140424292
 * 0000000140424286: test    [rbp+0E8h+arg_0], 1
 * 000000014042428D: jz      short loc_140424292
 * 000000014042428F: stac
 * 0000000140424292: test    [rbp+0E8h+arg_8], 200h
 * 000000014042429C: jz      short loc_14042429F
 * 000000014042429E: sti
 * 000000014042429F: call    KxStartUserThread
 * 00000001404242A4: nop     word ptr [rax+rax+00000000h]
 * 00000001404242B0: nop
 * 00000001404242B1: retn
 */
