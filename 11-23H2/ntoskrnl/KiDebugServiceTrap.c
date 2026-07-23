/*
 * XREFs of KiDebugServiceTrap @ 0x140433380
 * Callers:
 *     KiDebugServiceTrapShadow @ 0x140AF6E40 (KiDebugServiceTrapShadow.c)
 * Callees:
 *     KiSaveDebugRegisterState @ 0x14041F330 (KiSaveDebugRegisterState.c)
 *     KiDebugServiceTrap @ 0x140433380 (KiDebugServiceTrap.c)
 *     KiExceptionDispatch @ 0x140434D40 (KiExceptionDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140435700 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiDebugServiceTrap @ 0x140433380
 * Reason: Hex-Rays returned no pseudocode for 0x140433380
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140433380: inc     qword ptr [rsp+0]
 * 0000000140433384: cmp     [rsp+arg_0], 23h ; '#'
 * 000000014043338A: jnz     short loc_140433391
 * 000000014043338C: and     dword ptr [rsp+4], 0
 * 0000000140433391: sub     rsp, 8
 * 0000000140433395: push    rbp
 * 0000000140433396: sub     rsp, 158h
 * 000000014043339D: lea     rbp, [rsp+168h+var_E8]
 * 00000001404333A5: mov     byte ptr [rbp-55h], 1
 * 00000001404333A9: mov     [rbp-50h], rax
 * 00000001404333AD: mov     [rbp-48h], rcx
 * 00000001404333B1: mov     [rbp-40h], rdx
 * 00000001404333B5: mov     [rbp-38h], r8
 * 00000001404333B9: mov     [rbp-30h], r9
 * 00000001404333BD: mov     [rbp-28h], r10
 * 00000001404333C1: mov     [rbp-20h], r11
 * 00000001404333C5: test    byte ptr [rbp+0F0h], 1
 * 00000001404333CC: jnz     short loc_140433408
 * 00000001404333CE: xor     edx, edx
 * 00000001404333D0: rdsspq  rdx
 * 00000001404333D5: mov     [rbp+58h], rdx
 * 00000001404333D9: lfence
 * 00000001404333DC: test    word ptr gs:860h, 1
 * 00000001404333E7: jnz     short loc_1404333F1
 * 00000001404333E9: lfence
 * 00000001404333EC: jmp     loc_140433678
 * 00000001404333F1: movzx   eax, word ptr gs:864h
 * 00000001404333FA: mov     ecx, 48h ; 'H'
 * 00000001404333FF: xor     edx, edx
 * 0000000140433401: wrmsr
 * 0000000140433403: jmp     loc_140433678
 * 0000000140433408: test    cs:KiKvaShadow, 1
 * 000000014043340F: jnz     short loc_140433414
 * 0000000140433411: swapgs
 * 0000000140433414: lfence
 * 0000000140433417: mov     rcx, gs:95A8h
 * 0000000140433420: test    rcx, rcx
 * 0000000140433423: jz      short loc_140433444
 * 0000000140433425: rdsspq  rdx
 * 000000014043342A: mov     r10, gs:95A0h
 * 0000000140433433: add     r10, 8
 * 0000000140433437: cmp     rdx, r10
 * 000000014043343A: jnz     short loc_140433444
 * 000000014043343C: rstorssp qword ptr [rcx]
 * 0000000140433440: saveprevssp
 * 0000000140433444: mov     r10, gs:188h
 * 000000014043344D: mov     rcx, gs:188h
 * 0000000140433456: mov     rcx, [rcx+220h]
 * 000000014043345D: mov     rcx, [rcx+9E0h]
 * 0000000140433464: mov     gs:858h, rcx
 * 000000014043346D: mov     cx, gs:850h
 * 0000000140433476: mov     gs:852h, cx
 * 000000014043347F: mov     cx, gs:860h
 * 0000000140433488: mov     gs:854h, cx
 * 0000000140433491: movzx   eax, word ptr gs:866h
 * 000000014043349A: cmp     gs:864h, ax
 * 00000001404334A3: jz      short loc_1404334B7
 * 00000001404334A5: mov     gs:864h, ax
 * 00000001404334AE: mov     ecx, 48h ; 'H'
 * 00000001404334B3: xor     edx, edx
 * 00000001404334B5: wrmsr
 * 00000001404334B7: movzx   edx, word ptr gs:860h
 * 00000001404334C0: test    edx, 8
 * 00000001404334C6: jz      short loc_1404334DF
 * 00000001404334C8: mov     eax, 1
 * 00000001404334CD: xor     edx, edx
 * 00000001404334CF: mov     ecx, 49h ; 'I'
 * 00000001404334D4: wrmsr
 * 00000001404334D6: movzx   edx, word ptr gs:860h
 * 00000001404334DF: test    edx, 2
 * 00000001404334E5: jz      loc_140433622
 * 00000001404334EB: call    loc_1404335FE
 * 00000001404334F0: add     rsp, 8
 * 00000001404334F4: call    loc_140433607
 * 00000001404334F9: add     rsp, 8
 * 00000001404334FD: call    loc_1404334F0
 * 0000000140433502: add     rsp, 8
 * 0000000140433506: call    loc_1404334F9
 * 000000014043350B: add     rsp, 8
 * 000000014043350F: call    loc_140433502
 * 0000000140433514: add     rsp, 8
 * 0000000140433518: call    loc_14043350B
 * 000000014043351D: add     rsp, 8
 * 0000000140433521: call    loc_140433514
 * 0000000140433526: add     rsp, 8
 * 000000014043352A: call    loc_14043351D
 * 000000014043352F: add     rsp, 8
 * 0000000140433533: call    loc_140433526
 * 0000000140433538: add     rsp, 8
 * 000000014043353C: call    loc_14043352F
 * 0000000140433541: add     rsp, 8
 * 0000000140433545: call    loc_140433538
 * 000000014043354A: add     rsp, 8
 * 000000014043354E: call    loc_140433541
 * 0000000140433553: add     rsp, 8
 * 0000000140433557: call    loc_14043354A
 * 000000014043355C: add     rsp, 8
 * 0000000140433560: call    loc_140433553
 * 0000000140433565: add     rsp, 8
 * 0000000140433569: call    loc_14043355C
 * 000000014043356E: add     rsp, 8
 * 0000000140433572: call    loc_140433565
 * 0000000140433577: add     rsp, 8
 * 000000014043357B: call    loc_14043356E
 * 0000000140433580: add     rsp, 8
 * 0000000140433584: call    loc_140433577
 * 0000000140433589: add     rsp, 8
 * 000000014043358D: call    loc_140433580
 * 0000000140433592: add     rsp, 8
 * 0000000140433596: call    loc_140433589
 * 000000014043359B: add     rsp, 8
 * 000000014043359F: call    loc_140433592
 * 00000001404335A4: add     rsp, 8
 * 00000001404335A8: call    loc_14043359B
 * 00000001404335AD: add     rsp, 8
 * 00000001404335B1: call    loc_1404335A4
 * 00000001404335B6: add     rsp, 8
 * 00000001404335BA: call    loc_1404335AD
 * 00000001404335BF: add     rsp, 8
 * 00000001404335C3: call    loc_1404335B6
 * 00000001404335C8: add     rsp, 8
 * 00000001404335CC: call    loc_1404335BF
 * 00000001404335D1: add     rsp, 8
 * 00000001404335D5: call    loc_1404335C8
 * 00000001404335DA: add     rsp, 8
 * 00000001404335DE: call    loc_1404335D1
 * 00000001404335E3: add     rsp, 8
 * 00000001404335E7: call    loc_1404335DA
 * 00000001404335EC: add     rsp, 8
 * 00000001404335F0: call    loc_1404335E3
 * 00000001404335F5: add     rsp, 8
 * 00000001404335F9: call    loc_1404335EC
 * 00000001404335FE: add     rsp, 8
 * 0000000140433602: call    loc_1404335F5
 * 0000000140433607: add     rsp, 8
 * 000000014043360B: mov     eax, 0DADAh
 * 0000000140433610: test    byte ptr gs:862h, 8
 * 0000000140433619: jz      short loc_140433622
 * 000000014043361B: mov     al, 20h ; ' '
 * 000000014043361D: incsspq rax
 * 0000000140433622: test    edx, 200h
 * 0000000140433628: jz      short loc_14043362F
 * 000000014043362A: call    KiFlushBhbDuringTrapEntryOrExit
 * 000000014043362F: lfence
 * 0000000140433632: mov     byte ptr gs:856h, 0
 * 000000014043363B: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 0000000140433642: jz      short loc_140433663
 * 0000000140433644: mov     ecx, 6A7h
 * 0000000140433649: rdmsr
 * 000000014043364B: cmp     edx, 0
 * 000000014043364E: jz      short loc_140433663
 * 0000000140433650: mov     ecx, edx
 * 0000000140433652: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 0000000140433658: cmp     edx, ecx
 * 000000014043365A: jz      short loc_140433663
 * 000000014043365C: mov     ecx, 6A7h
 * 0000000140433661: wrmsr
 * 0000000140433663: test    byte ptr [r10+3], 3
 * 0000000140433668: mov     word ptr [rbp+80h], 0
 * 0000000140433671: jz      short loc_140433678
 * 0000000140433673: call    KiSaveDebugRegisterState
 * 0000000140433678: cld
 * 0000000140433679: stmxcsr dword ptr [rbp-54h]
 * 000000014043367D: ldmxcsr dword ptr gs:180h
 * 0000000140433686: movaps  xmmword ptr [rbp-10h], xmm0
 * 000000014043368A: movaps  xmmword ptr [rbp+0], xmm1
 * 000000014043368E: movaps  xmmword ptr [rbp+10h], xmm2
 * 0000000140433692: movaps  xmmword ptr [rbp+20h], xmm3
 * 0000000140433696: movaps  xmmword ptr [rbp+30h], xmm4
 * 000000014043369A: movaps  xmmword ptr [rbp+40h], xmm5
 * 000000014043369E: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001404336A5: jz      short loc_1404336B3
 * 00000001404336A7: test    byte ptr [rbp+0F0h], 1
 * 00000001404336AE: jz      short loc_1404336B3
 * 00000001404336B0: stac
 * 00000001404336B3: test    dword ptr [rbp+0F8h], 200h
 * 00000001404336BD: jz      short loc_1404336C0
 * 00000001404336BF: sti
 * 00000001404336C0: mov     ecx, 80000003h
 * 00000001404336C5: mov     edx, 1
 * 00000001404336CA: mov     r9, [rbp-50h]
 * 00000001404336CE: mov     r8, [rbp+0E8h]
 * 00000001404336D5: call    KiExceptionDispatch
 * 00000001404336DA: nop
 * 00000001404336DB: retn
 */
