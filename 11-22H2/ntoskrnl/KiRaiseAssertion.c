/*
 * XREFs of KiRaiseAssertion @ 0x140432600
 * Callers:
 *     KiRaiseAssertionShadow @ 0x140AF7DC0 (KiRaiseAssertionShadow.c)
 * Callees:
 *     KiSaveDebugRegisterState @ 0x14041E8E0 (KiSaveDebugRegisterState.c)
 *     KiRaiseAssertion @ 0x140432600 (KiRaiseAssertion.c)
 *     KiExceptionDispatch @ 0x140434340 (KiExceptionDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140434D00 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiRaiseAssertion @ 0x140432600
 * Reason: Hex-Rays returned no pseudocode for 0x140432600
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140432600: sub     qword ptr [rsp+0], 2
 * 0000000140432605: cmp     [rsp+arg_0], 23h ; '#'
 * 000000014043260B: jnz     short loc_140432612
 * 000000014043260D: and     dword ptr [rsp+4], 0
 * 0000000140432612: sub     rsp, 8
 * 0000000140432616: push    rbp
 * 0000000140432617: sub     rsp, 158h
 * 000000014043261E: lea     rbp, [rsp+168h+var_E8]
 * 0000000140432626: mov     byte ptr [rbp-55h], 1
 * 000000014043262A: mov     [rbp-50h], rax
 * 000000014043262E: mov     [rbp-48h], rcx
 * 0000000140432632: mov     [rbp-40h], rdx
 * 0000000140432636: mov     [rbp-38h], r8
 * 000000014043263A: mov     [rbp-30h], r9
 * 000000014043263E: mov     [rbp-28h], r10
 * 0000000140432642: mov     [rbp-20h], r11
 * 0000000140432646: test    byte ptr [rbp+0F0h], 1
 * 000000014043264D: jnz     short loc_140432689
 * 000000014043264F: xor     edx, edx
 * 0000000140432651: rdsspq  rdx
 * 0000000140432656: mov     [rbp+58h], rdx
 * 000000014043265A: lfence
 * 000000014043265D: test    word ptr gs:860h, 1
 * 0000000140432668: jnz     short loc_140432672
 * 000000014043266A: lfence
 * 000000014043266D: jmp     loc_1404328F9
 * 0000000140432672: movzx   eax, word ptr gs:864h
 * 000000014043267B: mov     ecx, 48h ; 'H'
 * 0000000140432680: xor     edx, edx
 * 0000000140432682: wrmsr
 * 0000000140432684: jmp     loc_1404328F9
 * 0000000140432689: test    cs:KiKvaShadow, 1
 * 0000000140432690: jnz     short loc_140432695
 * 0000000140432692: swapgs
 * 0000000140432695: lfence
 * 0000000140432698: mov     rcx, gs:95A8h
 * 00000001404326A1: test    rcx, rcx
 * 00000001404326A4: jz      short loc_1404326C5
 * 00000001404326A6: rdsspq  rdx
 * 00000001404326AB: mov     r10, gs:95A0h
 * 00000001404326B4: add     r10, 8
 * 00000001404326B8: cmp     rdx, r10
 * 00000001404326BB: jnz     short loc_1404326C5
 * 00000001404326BD: rstorssp qword ptr [rcx]
 * 00000001404326C1: saveprevssp
 * 00000001404326C5: mov     r10, gs:188h
 * 00000001404326CE: mov     rcx, gs:188h
 * 00000001404326D7: mov     rcx, [rcx+220h]
 * 00000001404326DE: mov     rcx, [rcx+9E0h]
 * 00000001404326E5: mov     gs:858h, rcx
 * 00000001404326EE: mov     cx, gs:850h
 * 00000001404326F7: mov     gs:852h, cx
 * 0000000140432700: mov     cx, gs:860h
 * 0000000140432709: mov     gs:854h, cx
 * 0000000140432712: movzx   eax, word ptr gs:866h
 * 000000014043271B: cmp     gs:864h, ax
 * 0000000140432724: jz      short loc_140432738
 * 0000000140432726: mov     gs:864h, ax
 * 000000014043272F: mov     ecx, 48h ; 'H'
 * 0000000140432734: xor     edx, edx
 * 0000000140432736: wrmsr
 * 0000000140432738: movzx   edx, word ptr gs:860h
 * 0000000140432741: test    edx, 8
 * 0000000140432747: jz      short loc_140432760
 * 0000000140432749: mov     eax, 1
 * 000000014043274E: xor     edx, edx
 * 0000000140432750: mov     ecx, 49h ; 'I'
 * 0000000140432755: wrmsr
 * 0000000140432757: movzx   edx, word ptr gs:860h
 * 0000000140432760: test    edx, 2
 * 0000000140432766: jz      loc_1404328A3
 * 000000014043276C: call    loc_14043287F
 * 0000000140432771: add     rsp, 8
 * 0000000140432775: call    loc_140432888
 * 000000014043277A: add     rsp, 8
 * 000000014043277E: call    loc_140432771
 * 0000000140432783: add     rsp, 8
 * 0000000140432787: call    loc_14043277A
 * 000000014043278C: add     rsp, 8
 * 0000000140432790: call    loc_140432783
 * 0000000140432795: add     rsp, 8
 * 0000000140432799: call    loc_14043278C
 * 000000014043279E: add     rsp, 8
 * 00000001404327A2: call    loc_140432795
 * 00000001404327A7: add     rsp, 8
 * 00000001404327AB: call    loc_14043279E
 * 00000001404327B0: add     rsp, 8
 * 00000001404327B4: call    loc_1404327A7
 * 00000001404327B9: add     rsp, 8
 * 00000001404327BD: call    loc_1404327B0
 * 00000001404327C2: add     rsp, 8
 * 00000001404327C6: call    loc_1404327B9
 * 00000001404327CB: add     rsp, 8
 * 00000001404327CF: call    loc_1404327C2
 * 00000001404327D4: add     rsp, 8
 * 00000001404327D8: call    loc_1404327CB
 * 00000001404327DD: add     rsp, 8
 * 00000001404327E1: call    loc_1404327D4
 * 00000001404327E6: add     rsp, 8
 * 00000001404327EA: call    loc_1404327DD
 * 00000001404327EF: add     rsp, 8
 * 00000001404327F3: call    loc_1404327E6
 * 00000001404327F8: add     rsp, 8
 * 00000001404327FC: call    loc_1404327EF
 * 0000000140432801: add     rsp, 8
 * 0000000140432805: call    loc_1404327F8
 * 000000014043280A: add     rsp, 8
 * 000000014043280E: call    loc_140432801
 * 0000000140432813: add     rsp, 8
 * 0000000140432817: call    loc_14043280A
 * 000000014043281C: add     rsp, 8
 * 0000000140432820: call    loc_140432813
 * 0000000140432825: add     rsp, 8
 * 0000000140432829: call    loc_14043281C
 * 000000014043282E: add     rsp, 8
 * 0000000140432832: call    loc_140432825
 * 0000000140432837: add     rsp, 8
 * 000000014043283B: call    loc_14043282E
 * 0000000140432840: add     rsp, 8
 * 0000000140432844: call    loc_140432837
 * 0000000140432849: add     rsp, 8
 * 000000014043284D: call    loc_140432840
 * 0000000140432852: add     rsp, 8
 * 0000000140432856: call    loc_140432849
 * 000000014043285B: add     rsp, 8
 * 000000014043285F: call    loc_140432852
 * 0000000140432864: add     rsp, 8
 * 0000000140432868: call    loc_14043285B
 * 000000014043286D: add     rsp, 8
 * 0000000140432871: call    loc_140432864
 * 0000000140432876: add     rsp, 8
 * 000000014043287A: call    loc_14043286D
 * 000000014043287F: add     rsp, 8
 * 0000000140432883: call    loc_140432876
 * 0000000140432888: add     rsp, 8
 * 000000014043288C: mov     eax, 0DADAh
 * 0000000140432891: test    byte ptr gs:862h, 8
 * 000000014043289A: jz      short loc_1404328A3
 * 000000014043289C: mov     al, 20h ; ' '
 * 000000014043289E: incsspq rax
 * 00000001404328A3: test    edx, 200h
 * 00000001404328A9: jz      short loc_1404328B0
 * 00000001404328AB: call    KiFlushBhbDuringTrapEntryOrExit
 * 00000001404328B0: lfence
 * 00000001404328B3: mov     byte ptr gs:856h, 0
 * 00000001404328BC: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 00000001404328C3: jz      short loc_1404328E4
 * 00000001404328C5: mov     ecx, 6A7h
 * 00000001404328CA: rdmsr
 * 00000001404328CC: cmp     edx, 0
 * 00000001404328CF: jz      short loc_1404328E4
 * 00000001404328D1: mov     ecx, edx
 * 00000001404328D3: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 00000001404328D9: cmp     edx, ecx
 * 00000001404328DB: jz      short loc_1404328E4
 * 00000001404328DD: mov     ecx, 6A7h
 * 00000001404328E2: wrmsr
 * 00000001404328E4: test    byte ptr [r10+3], 3
 * 00000001404328E9: mov     word ptr [rbp+80h], 0
 * 00000001404328F2: jz      short loc_1404328F9
 * 00000001404328F4: call    KiSaveDebugRegisterState
 * 00000001404328F9: cld
 * 00000001404328FA: stmxcsr dword ptr [rbp-54h]
 * 00000001404328FE: ldmxcsr dword ptr gs:180h
 * 0000000140432907: movaps  xmmword ptr [rbp-10h], xmm0
 * 000000014043290B: movaps  xmmword ptr [rbp+0], xmm1
 * 000000014043290F: movaps  xmmword ptr [rbp+10h], xmm2
 * 0000000140432913: movaps  xmmword ptr [rbp+20h], xmm3
 * 0000000140432917: movaps  xmmword ptr [rbp+30h], xmm4
 * 000000014043291B: movaps  xmmword ptr [rbp+40h], xmm5
 * 000000014043291F: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 0000000140432926: jz      short loc_140432934
 * 0000000140432928: test    byte ptr [rbp+0F0h], 1
 * 000000014043292F: jz      short loc_140432934
 * 0000000140432931: stac
 * 0000000140432934: test    dword ptr [rbp+0F8h], 200h
 * 000000014043293E: jz      short loc_140432941
 * 0000000140432940: sti
 * 0000000140432941: mov     ecx, 0C0000420h
 * 0000000140432946: xor     edx, edx
 * 0000000140432948: mov     r8, [rbp+0E8h]
 * 000000014043294F: call    KiExceptionDispatch
 * 0000000140432954: nop
 * 0000000140432955: retn
 */
