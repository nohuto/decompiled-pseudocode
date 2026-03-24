/*
 * XREFs of KiRaiseSecurityCheckFailure @ 0x140432280
 * Callers:
 *     KiRaiseSecurityCheckFailureShadow @ 0x140AF7D40 (KiRaiseSecurityCheckFailureShadow.c)
 * Callees:
 *     KiSaveDebugRegisterState @ 0x14041E8E0 (KiSaveDebugRegisterState.c)
 *     KiRaiseSecurityCheckFailure @ 0x140432280 (KiRaiseSecurityCheckFailure.c)
 *     KiFastFailDispatch @ 0x140434840 (KiFastFailDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140434D00 (KiFlushBhbDuringTrapEntryOrExit.c)
 */

/*
 * Hex-Rays decompilation failed for KiRaiseSecurityCheckFailure @ 0x140432280
 * Reason: Hex-Rays returned no pseudocode for 0x140432280
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140432280: sub     qword ptr [rsp+0], 2
 * 0000000140432285: cmp     [rsp+arg_0], 23h ; '#'
 * 000000014043228B: jnz     short loc_140432292
 * 000000014043228D: and     dword ptr [rsp+4], 0
 * 0000000140432292: sub     rsp, 8
 * 0000000140432296: push    rbp
 * 0000000140432297: sub     rsp, 158h
 * 000000014043229E: lea     rbp, [rsp+168h+var_E8]
 * 00000001404322A6: mov     byte ptr [rbp-55h], 1
 * 00000001404322AA: mov     [rbp-50h], rax
 * 00000001404322AE: mov     [rbp-48h], rcx
 * 00000001404322B2: mov     [rbp-40h], rdx
 * 00000001404322B6: mov     [rbp-38h], r8
 * 00000001404322BA: mov     [rbp-30h], r9
 * 00000001404322BE: mov     [rbp-28h], r10
 * 00000001404322C2: mov     [rbp-20h], r11
 * 00000001404322C6: test    byte ptr [rbp+0F0h], 1
 * 00000001404322CD: jnz     short loc_140432309
 * 00000001404322CF: xor     edx, edx
 * 00000001404322D1: rdsspq  rdx
 * 00000001404322D6: mov     [rbp+58h], rdx
 * 00000001404322DA: lfence
 * 00000001404322DD: test    word ptr gs:860h, 1
 * 00000001404322E8: jnz     short loc_1404322F2
 * 00000001404322EA: lfence
 * 00000001404322ED: jmp     loc_140432579
 * 00000001404322F2: movzx   eax, word ptr gs:864h
 * 00000001404322FB: mov     ecx, 48h ; 'H'
 * 0000000140432300: xor     edx, edx
 * 0000000140432302: wrmsr
 * 0000000140432304: jmp     loc_140432579
 * 0000000140432309: test    cs:KiKvaShadow, 1
 * 0000000140432310: jnz     short loc_140432315
 * 0000000140432312: swapgs
 * 0000000140432315: lfence
 * 0000000140432318: mov     rcx, gs:95A8h
 * 0000000140432321: test    rcx, rcx
 * 0000000140432324: jz      short loc_140432345
 * 0000000140432326: rdsspq  rdx
 * 000000014043232B: mov     r10, gs:95A0h
 * 0000000140432334: add     r10, 8
 * 0000000140432338: cmp     rdx, r10
 * 000000014043233B: jnz     short loc_140432345
 * 000000014043233D: rstorssp qword ptr [rcx]
 * 0000000140432341: saveprevssp
 * 0000000140432345: mov     r10, gs:188h
 * 000000014043234E: mov     rcx, gs:188h
 * 0000000140432357: mov     rcx, [rcx+220h]
 * 000000014043235E: mov     rcx, [rcx+9E0h]
 * 0000000140432365: mov     gs:858h, rcx
 * 000000014043236E: mov     cx, gs:850h
 * 0000000140432377: mov     gs:852h, cx
 * 0000000140432380: mov     cx, gs:860h
 * 0000000140432389: mov     gs:854h, cx
 * 0000000140432392: movzx   eax, word ptr gs:866h
 * 000000014043239B: cmp     gs:864h, ax
 * 00000001404323A4: jz      short loc_1404323B8
 * 00000001404323A6: mov     gs:864h, ax
 * 00000001404323AF: mov     ecx, 48h ; 'H'
 * 00000001404323B4: xor     edx, edx
 * 00000001404323B6: wrmsr
 * 00000001404323B8: movzx   edx, word ptr gs:860h
 * 00000001404323C1: test    edx, 8
 * 00000001404323C7: jz      short loc_1404323E0
 * 00000001404323C9: mov     eax, 1
 * 00000001404323CE: xor     edx, edx
 * 00000001404323D0: mov     ecx, 49h ; 'I'
 * 00000001404323D5: wrmsr
 * 00000001404323D7: movzx   edx, word ptr gs:860h
 * 00000001404323E0: test    edx, 2
 * 00000001404323E6: jz      loc_140432523
 * 00000001404323EC: call    loc_1404324FF
 * 00000001404323F1: add     rsp, 8
 * 00000001404323F5: call    loc_140432508
 * 00000001404323FA: add     rsp, 8
 * 00000001404323FE: call    loc_1404323F1
 * 0000000140432403: add     rsp, 8
 * 0000000140432407: call    loc_1404323FA
 * 000000014043240C: add     rsp, 8
 * 0000000140432410: call    loc_140432403
 * 0000000140432415: add     rsp, 8
 * 0000000140432419: call    loc_14043240C
 * 000000014043241E: add     rsp, 8
 * 0000000140432422: call    loc_140432415
 * 0000000140432427: add     rsp, 8
 * 000000014043242B: call    loc_14043241E
 * 0000000140432430: add     rsp, 8
 * 0000000140432434: call    loc_140432427
 * 0000000140432439: add     rsp, 8
 * 000000014043243D: call    loc_140432430
 * 0000000140432442: add     rsp, 8
 * 0000000140432446: call    loc_140432439
 * 000000014043244B: add     rsp, 8
 * 000000014043244F: call    loc_140432442
 * 0000000140432454: add     rsp, 8
 * 0000000140432458: call    loc_14043244B
 * 000000014043245D: add     rsp, 8
 * 0000000140432461: call    loc_140432454
 * 0000000140432466: add     rsp, 8
 * 000000014043246A: call    loc_14043245D
 * 000000014043246F: add     rsp, 8
 * 0000000140432473: call    loc_140432466
 * 0000000140432478: add     rsp, 8
 * 000000014043247C: call    loc_14043246F
 * 0000000140432481: add     rsp, 8
 * 0000000140432485: call    loc_140432478
 * 000000014043248A: add     rsp, 8
 * 000000014043248E: call    loc_140432481
 * 0000000140432493: add     rsp, 8
 * 0000000140432497: call    loc_14043248A
 * 000000014043249C: add     rsp, 8
 * 00000001404324A0: call    loc_140432493
 * 00000001404324A5: add     rsp, 8
 * 00000001404324A9: call    loc_14043249C
 * 00000001404324AE: add     rsp, 8
 * 00000001404324B2: call    loc_1404324A5
 * 00000001404324B7: add     rsp, 8
 * 00000001404324BB: call    loc_1404324AE
 * 00000001404324C0: add     rsp, 8
 * 00000001404324C4: call    loc_1404324B7
 * 00000001404324C9: add     rsp, 8
 * 00000001404324CD: call    loc_1404324C0
 * 00000001404324D2: add     rsp, 8
 * 00000001404324D6: call    loc_1404324C9
 * 00000001404324DB: add     rsp, 8
 * 00000001404324DF: call    loc_1404324D2
 * 00000001404324E4: add     rsp, 8
 * 00000001404324E8: call    loc_1404324DB
 * 00000001404324ED: add     rsp, 8
 * 00000001404324F1: call    loc_1404324E4
 * 00000001404324F6: add     rsp, 8
 * 00000001404324FA: call    loc_1404324ED
 * 00000001404324FF: add     rsp, 8
 * 0000000140432503: call    loc_1404324F6
 * 0000000140432508: add     rsp, 8
 * 000000014043250C: mov     eax, 0DADAh
 * 0000000140432511: test    byte ptr gs:862h, 8
 * 000000014043251A: jz      short loc_140432523
 * 000000014043251C: mov     al, 20h ; ' '
 * 000000014043251E: incsspq rax
 * 0000000140432523: test    edx, 200h
 * 0000000140432529: jz      short loc_140432530
 * 000000014043252B: call    KiFlushBhbDuringTrapEntryOrExit
 * 0000000140432530: lfence
 * 0000000140432533: mov     byte ptr gs:856h, 0
 * 000000014043253C: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 0000000140432543: jz      short loc_140432564
 * 0000000140432545: mov     ecx, 6A7h
 * 000000014043254A: rdmsr
 * 000000014043254C: cmp     edx, 0
 * 000000014043254F: jz      short loc_140432564
 * 0000000140432551: mov     ecx, edx
 * 0000000140432553: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 0000000140432559: cmp     edx, ecx
 * 000000014043255B: jz      short loc_140432564
 * 000000014043255D: mov     ecx, 6A7h
 * 0000000140432562: wrmsr
 * 0000000140432564: test    byte ptr [r10+3], 3
 * 0000000140432569: mov     word ptr [rbp+80h], 0
 * 0000000140432572: jz      short loc_140432579
 * 0000000140432574: call    KiSaveDebugRegisterState
 * 0000000140432579: cld
 * 000000014043257A: stmxcsr dword ptr [rbp-54h]
 * 000000014043257E: ldmxcsr dword ptr gs:180h
 * 0000000140432587: movaps  xmmword ptr [rbp-10h], xmm0
 * 000000014043258B: movaps  xmmword ptr [rbp+0], xmm1
 * 000000014043258F: movaps  xmmword ptr [rbp+10h], xmm2
 * 0000000140432593: movaps  xmmword ptr [rbp+20h], xmm3
 * 0000000140432597: movaps  xmmword ptr [rbp+30h], xmm4
 * 000000014043259B: movaps  xmmword ptr [rbp+40h], xmm5
 * 000000014043259F: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001404325A6: jz      short loc_1404325B4
 * 00000001404325A8: test    byte ptr [rbp+0F0h], 1
 * 00000001404325AF: jz      short loc_1404325B4
 * 00000001404325B1: stac
 * 00000001404325B4: test    dword ptr [rbp+0F8h], 200h
 * 00000001404325BE: jz      short loc_1404325C1
 * 00000001404325C0: sti
 * 00000001404325C1: mov     r9, [rbp-48h]
 * 00000001404325C5: mov     ecx, 0C0000409h
 * 00000001404325CA: mov     edx, 1
 * 00000001404325CF: mov     r8, [rbp+0E8h]
 * 00000001404325D6: call    KiFastFailDispatch
 * 00000001404325DB: nop
 * 00000001404325DC: retn
 */
