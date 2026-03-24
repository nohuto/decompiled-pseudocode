/*
 * XREFs of KiControlProtectionFault @ 0x140432140
 * Callers:
 *     KiControlProtectionFaultShadow @ 0x140AF6BC0 (KiControlProtectionFaultShadow.c)
 * Callees:
 *     KiRestoreDebugRegisterState @ 0x14041EF20 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x14041EFA0 (KiSaveDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x14041FD40 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x140424E20 (KiInitiateUserApc.c)
 *     KiControlProtectionFault @ 0x140432140 (KiControlProtectionFault.c)
 *     KiBugCheckDispatch @ 0x1404348C0 (KiBugCheckDispatch.c)
 *     KiExceptionDispatch @ 0x140434940 (KiExceptionDispatch.c)
 *     KiFastFailDispatch @ 0x140434E40 (KiFastFailDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140435300 (KiFlushBhbDuringTrapEntryOrExit.c)
 *     KiUpdateStibpPairing @ 0x140460E20 (KiUpdateStibpPairing.c)
 *     KiCopyCounters @ 0x1405741A0 (KiCopyCounters.c)
 *     KiProcessControlProtection @ 0x14057BFC0 (KiProcessControlProtection.c)
 */

/*
 * Hex-Rays decompilation failed for KiControlProtectionFault @ 0x140432140
 * Reason: Hex-Rays returned no pseudocode for 0x140432140
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140432140: push    rbp
 * 0000000140432141: sub     rsp, 158h
 * 0000000140432148: lea     rbp, [rsp+80h]
 * 0000000140432150: mov     [rbp+0D8h+var_12D], 1
 * 0000000140432154: mov     [rbp+0D8h+var_128], rax
 * 0000000140432158: mov     [rbp+0D8h+var_120], rcx
 * 000000014043215C: mov     [rbp+0D8h+var_118], rdx
 * 0000000140432160: mov     [rbp+0D8h+var_110], r8
 * 0000000140432164: mov     [rbp+0D8h+var_108], r9
 * 0000000140432168: mov     [rbp+0D8h+var_100], r10
 * 000000014043216C: mov     [rbp+0D8h+var_F8], r11
 * 0000000140432170: test    [rbp+0D8h+arg_8], 1
 * 0000000140432177: jnz     short loc_1404321B3
 * 0000000140432179: xor     edx, edx
 * 000000014043217B: rdsspq  rdx
 * 0000000140432180: mov     [rbp+0D8h+var_80], rdx
 * 0000000140432184: lfence
 * 0000000140432187: test    word ptr gs:860h, 1
 * 0000000140432192: jnz     short loc_14043219C
 * 0000000140432194: lfence
 * 0000000140432197: jmp     loc_140432423
 * 000000014043219C: movzx   eax, word ptr gs:864h
 * 00000001404321A5: mov     ecx, 48h ; 'H'
 * 00000001404321AA: xor     edx, edx
 * 00000001404321AC: wrmsr
 * 00000001404321AE: jmp     loc_140432423
 * 00000001404321B3: test    cs:KiKvaShadow, 1
 * 00000001404321BA: jnz     short loc_1404321BF
 * 00000001404321BC: swapgs
 * 00000001404321BF: lfence
 * 00000001404321C2: mov     rcx, gs:95A8h
 * 00000001404321CB: test    rcx, rcx
 * 00000001404321CE: jz      short loc_1404321EF
 * 00000001404321D0: rdsspq  rdx
 * 00000001404321D5: mov     r10, gs:95A0h
 * 00000001404321DE: add     r10, 8
 * 00000001404321E2: cmp     rdx, r10
 * 00000001404321E5: jnz     short loc_1404321EF
 * 00000001404321E7: rstorssp qword ptr [rcx]
 * 00000001404321EB: saveprevssp
 * 00000001404321EF: mov     r10, gs:188h
 * 00000001404321F8: mov     rcx, gs:188h
 * 0000000140432201: mov     rcx, [rcx+220h]
 * 0000000140432208: mov     rcx, [rcx+9E0h]
 * 000000014043220F: mov     gs:858h, rcx
 * 0000000140432218: mov     cx, gs:850h
 * 0000000140432221: mov     gs:852h, cx
 * 000000014043222A: mov     cx, gs:860h
 * 0000000140432233: mov     gs:854h, cx
 * 000000014043223C: movzx   eax, word ptr gs:866h
 * 0000000140432245: cmp     gs:864h, ax
 * 000000014043224E: jz      short loc_140432262
 * 0000000140432250: mov     gs:864h, ax
 * 0000000140432259: mov     ecx, 48h ; 'H'
 * 000000014043225E: xor     edx, edx
 * 0000000140432260: wrmsr
 * 0000000140432262: movzx   edx, word ptr gs:860h
 * 000000014043226B: test    edx, 8
 * 0000000140432271: jz      short loc_14043228A
 * 0000000140432273: mov     eax, 1
 * 0000000140432278: xor     edx, edx
 * 000000014043227A: mov     ecx, 49h ; 'I'
 * 000000014043227F: wrmsr
 * 0000000140432281: movzx   edx, word ptr gs:860h
 * 000000014043228A: test    edx, 2
 * 0000000140432290: jz      loc_1404323CD
 * 0000000140432296: call    loc_1404323A9
 * 000000014043229B: add     rsp, 8
 * 000000014043229F: call    loc_1404323B2
 * 00000001404322A4: add     rsp, 8
 * 00000001404322A8: call    loc_14043229B
 * 00000001404322AD: add     rsp, 8
 * 00000001404322B1: call    loc_1404322A4
 * 00000001404322B6: add     rsp, 8
 * 00000001404322BA: call    loc_1404322AD
 * 00000001404322BF: add     rsp, 8
 * 00000001404322C3: call    loc_1404322B6
 * 00000001404322C8: add     rsp, 8
 * 00000001404322CC: call    loc_1404322BF
 * 00000001404322D1: add     rsp, 8
 * 00000001404322D5: call    loc_1404322C8
 * 00000001404322DA: add     rsp, 8
 * 00000001404322DE: call    loc_1404322D1
 * 00000001404322E3: add     rsp, 8
 * 00000001404322E7: call    loc_1404322DA
 * 00000001404322EC: add     rsp, 8
 * 00000001404322F0: call    loc_1404322E3
 * 00000001404322F5: add     rsp, 8
 * 00000001404322F9: call    loc_1404322EC
 * 00000001404322FE: add     rsp, 8
 * 0000000140432302: call    loc_1404322F5
 * 0000000140432307: add     rsp, 8
 * 000000014043230B: call    loc_1404322FE
 * 0000000140432310: add     rsp, 8
 * 0000000140432314: call    loc_140432307
 * 0000000140432319: add     rsp, 8
 * 000000014043231D: call    loc_140432310
 * 0000000140432322: add     rsp, 8
 * 0000000140432326: call    loc_140432319
 * 000000014043232B: add     rsp, 8
 * 000000014043232F: call    loc_140432322
 * 0000000140432334: add     rsp, 8
 * 0000000140432338: call    loc_14043232B
 * 000000014043233D: add     rsp, 8
 * 0000000140432341: call    loc_140432334
 * 0000000140432346: add     rsp, 8
 * 000000014043234A: call    loc_14043233D
 * 000000014043234F: add     rsp, 8
 * 0000000140432353: call    loc_140432346
 * 0000000140432358: add     rsp, 8
 * 000000014043235C: call    loc_14043234F
 * 0000000140432361: add     rsp, 8
 * 0000000140432365: call    loc_140432358
 * 000000014043236A: add     rsp, 8
 * 000000014043236E: call    loc_140432361
 * 0000000140432373: add     rsp, 8
 * 0000000140432377: call    loc_14043236A
 * 000000014043237C: add     rsp, 8
 * 0000000140432380: call    loc_140432373
 * 0000000140432385: add     rsp, 8
 * 0000000140432389: call    loc_14043237C
 * 000000014043238E: add     rsp, 8
 * 0000000140432392: call    loc_140432385
 * 0000000140432397: add     rsp, 8
 * 000000014043239B: call    loc_14043238E
 * 00000001404323A0: add     rsp, 8
 * 00000001404323A4: call    loc_140432397
 * 00000001404323A9: add     rsp, 8
 * 00000001404323AD: call    loc_1404323A0
 * 00000001404323B2: add     rsp, 8
 * 00000001404323B6: mov     eax, 0DADAh
 * 00000001404323BB: test    byte ptr gs:862h, 8
 * 00000001404323C4: jz      short loc_1404323CD
 * 00000001404323C6: mov     al, 20h ; ' '
 * 00000001404323C8: incsspq rax
 * 00000001404323CD: test    edx, 200h
 * 00000001404323D3: jz      short loc_1404323DA
 * 00000001404323D5: call    KiFlushBhbDuringTrapEntryOrExit
 * 00000001404323DA: lfence
 * 00000001404323DD: mov     byte ptr gs:856h, 0
 * 00000001404323E6: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 00000001404323ED: jz      short loc_14043240E
 * 00000001404323EF: mov     ecx, 6A7h
 * 00000001404323F4: rdmsr
 * 00000001404323F6: cmp     edx, 0
 * 00000001404323F9: jz      short loc_14043240E
 * 00000001404323FB: mov     ecx, edx
 * 00000001404323FD: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 0000000140432403: cmp     edx, ecx
 * 0000000140432405: jz      short loc_14043240E
 * 0000000140432407: mov     ecx, 6A7h
 * 000000014043240C: wrmsr
 * 000000014043240E: test    byte ptr [r10+3], 3
 * 0000000140432413: mov     [rbp+0D8h+var_58], 0
 * 000000014043241C: jz      short loc_140432423
 * 000000014043241E: call    KiSaveDebugRegisterState
 * 0000000140432423: cld
 * 0000000140432424: stmxcsr [rbp+0D8h+var_12C]
 * 0000000140432428: ldmxcsr dword ptr gs:180h
 * 0000000140432431: movaps  [rbp+0D8h+var_E8], xmm0
 * 0000000140432435: movaps  [rbp+0D8h+var_D8], xmm1
 * 0000000140432439: movaps  [rbp+0D8h+var_C8], xmm2
 * 000000014043243D: movaps  [rbp+0D8h+var_B8], xmm3
 * 0000000140432441: movaps  [rbp+0D8h+var_A8], xmm4
 * 0000000140432445: movaps  [rbp+0D8h+var_98], xmm5
 * 0000000140432449: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 0000000140432450: jz      short loc_14043245E
 * 0000000140432452: test    [rbp+0D8h+arg_8], 1
 * 0000000140432459: jz      short loc_14043245E
 * 000000014043245B: stac
 * 000000014043245E: mov     eax, [rbp+0E0h]
 * 0000000140432464: test    [rbp+0D8h+arg_10], 200h
 * 000000014043246E: jz      short loc_140432471
 * 0000000140432470: sti
 * 0000000140432471: test    byte ptr gs:8B25h, 40h
 * 000000014043247A: jz      loc_140432513
 * 0000000140432480: lea     rcx, [rbp+0D8h+var_158]
 * 0000000140432484: call    KiProcessControlProtection
 * 0000000140432489: cmp     eax, 1
 * 000000014043248C: jz      loc_140432536
 * 0000000140432492: cmp     eax, 2
 * 0000000140432495: jz      short loc_1404324A2
 * 0000000140432497: cmp     eax, 3
 * 000000014043249A: jz      loc_140432522
 * 00000001404324A0: jmp     short loc_140432513
 * 00000001404324A2: test    [rbp+0D8h+arg_8], 1
 * 00000001404324A9: jz      short loc_1404324EE
 * 00000001404324AB: mov     ecx, 6A7h
 * 00000001404324B0: rdmsr
 * 00000001404324B2: shl     rdx, 20h
 * 00000001404324B6: or      rax, rdx
 * 00000001404324B9: mov     r10, rax
 * 00000001404324BC: mov     rcx, gs:188h
 * 00000001404324C5: mov     rcx, [rcx+220h]
 * 00000001404324CC: mov     r11d, [rcx+9D4h]
 * 00000001404324D3: and     r11d, 0C0F6C000h
 * 00000001404324DA: mov     edx, cs:KiUserCetAppcompatOptions
 * 00000001404324E0: shl     rdx, 20h
 * 00000001404324E4: or      r11, rdx
 * 00000001404324E7: mov     edx, 3
 * 00000001404324EC: jmp     short loc_1404324FA
 * 00000001404324EE: mov     edx, 2
 * 00000001404324F3: mov     r10, [rbp+0D8h+var_80]
 * 00000001404324F7: mov     r10, [r10]
 * 00000001404324FA: mov     r9, 39h ; '9'
 * 0000000140432501: mov     ecx, 0C0000409h
 * 0000000140432506: mov     r8, [rbp+0D8h+arg_0]
 * 000000014043250D: call    KiFastFailDispatch
 * 0000000140432512: nop
 * 0000000140432513: mov     edx, 15h
 * 0000000140432518: mov     ecx, 7Fh
 * 000000014043251D: call    KiBugCheckDispatch
 * 0000000140432522: mov     ecx, 80000033h
 * 0000000140432527: xor     edx, edx
 * 0000000140432529: mov     r8, [rbp+0D8h+arg_0]
 * 0000000140432530: call    KiExceptionDispatch
 * 0000000140432535: nop
 * 0000000140432536: cli
 * 0000000140432537: test    [rbp+0D8h+arg_8], 1
 * 000000014043253E: jz      loc_14043282C
 * 0000000140432544: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 000000014043254B: jz      short loc_140432550
 * 000000014043254D: stac
 * 0000000140432550: mov     rcx, gs:188h
 * 0000000140432559: test    byte ptr [rcx+0C2h], 3
 * 0000000140432560: jz      short loc_14043257D
 * 0000000140432562: mov     ecx, 1
 * 0000000140432567: mov     cr8, rcx
 * 000000014043256B: sti
 * 000000014043256C: call    KiInitiateUserApc
 * 0000000140432571: cli
 * 0000000140432572: mov     ecx, 0
 * 0000000140432577: mov     cr8, rcx
 * 000000014043257B: jmp     short loc_140432550
 * 000000014043257D: test    byte ptr gs:86Ch, 2
 * 0000000140432586: jz      short loc_14043258F
 * 0000000140432588: xor     ecx, ecx
 * 000000014043258A: call    KiUpdateStibpPairing
 * 000000014043258F: mov     rcx, gs:188h
 * 0000000140432598: test    dword ptr [rcx], 8000000h
 * 000000014043259E: jz      short loc_1404325A5
 * 00000001404325A0: call    KiRestoreSetContextState
 * 00000001404325A5: mov     rcx, gs:188h
 * 00000001404325AE: test    dword ptr [rcx], 10000h
 * 00000001404325B4: jz      short loc_1404325CA
 * 00000001404325B6: test    byte ptr [rcx+2], 1
 * 00000001404325BA: jz      short loc_1404325CA
 * 00000001404325BC: call    KiCopyCounters
 * 00000001404325C1: mov     rcx, gs:188h
 * 00000001404325CA: ldmxcsr [rbp+0D8h+var_12C]
 * 00000001404325CE: cmp     [rbp+0D8h+var_58], 0
 * 00000001404325D6: jz      short loc_1404325DD
 * 00000001404325D8: call    KiRestoreDebugRegisterState
 * 00000001404325DD: mov     rcx, gs:188h
 * 00000001404325E6: bt      dword ptr [rcx+74h], 16h
 * 00000001404325EB: jnb     short loc_140432617
 * 00000001404325ED: xor     ecx, ecx
 * 00000001404325EF: rdsspq  rcx
 * 00000001404325F4: mov     r8, gs:95A8h
 * 00000001404325FD: add     r8, 8
 * 0000000140432601: cmp     rcx, r8
 * 0000000140432604: jnz     short loc_140432617
 * 0000000140432606: mov     rcx, gs:95A0h
 * 000000014043260F: rstorssp qword ptr [rcx]
 * 0000000140432613: saveprevssp
 * 0000000140432617: movaps  xmm0, [rbp+0D8h+var_E8]
 * 000000014043261B: movaps  xmm1, [rbp+0D8h+var_D8]
 * 000000014043261F: movaps  xmm2, [rbp+0D8h+var_C8]
 * 0000000140432623: movaps  xmm3, [rbp+0D8h+var_B8]
 * 0000000140432627: movaps  xmm4, [rbp+0D8h+var_A8]
 * 000000014043262B: movaps  xmm5, [rbp+0D8h+var_98]
 * 000000014043262F: mov     r11, [rbp+0D8h+var_F8]
 * 0000000140432633: mov     r10, [rbp+0D8h+var_100]
 * 0000000140432637: mov     r9, [rbp+0D8h+var_108]
 * 000000014043263B: mov     r8, [rbp+0D8h+var_110]
 * 000000014043263F: mov     byte ptr gs:856h, 0
 * 0000000140432648: movzx   eax, word ptr gs:86Ah
 * 0000000140432651: cmp     gs:864h, ax
 * 000000014043265A: jz      short loc_14043266E
 * 000000014043265C: mov     gs:864h, ax
 * 0000000140432665: mov     ecx, 48h ; 'H'
 * 000000014043266A: xor     edx, edx
 * 000000014043266C: wrmsr
 * 000000014043266E: btr     word ptr gs:860h, 2
 * 0000000140432679: jnb     short loc_140432689
 * 000000014043267B: mov     eax, 1
 * 0000000140432680: xor     edx, edx
 * 0000000140432682: mov     ecx, 49h ; 'I'
 * 0000000140432687: wrmsr
 * 0000000140432689: btr     word ptr gs:860h, 5
 * 0000000140432694: jnb     loc_1404327D1
 * 000000014043269A: call    loc_1404327AD
 * 000000014043269F: add     rsp, 8
 * 00000001404326A3: call    loc_1404327B6
 * 00000001404326A8: add     rsp, 8
 * 00000001404326AC: call    loc_14043269F
 * 00000001404326B1: add     rsp, 8
 * 00000001404326B5: call    loc_1404326A8
 * 00000001404326BA: add     rsp, 8
 * 00000001404326BE: call    loc_1404326B1
 * 00000001404326C3: add     rsp, 8
 * 00000001404326C7: call    loc_1404326BA
 * 00000001404326CC: add     rsp, 8
 * 00000001404326D0: call    loc_1404326C3
 * 00000001404326D5: add     rsp, 8
 * 00000001404326D9: call    loc_1404326CC
 * 00000001404326DE: add     rsp, 8
 * 00000001404326E2: call    loc_1404326D5
 * 00000001404326E7: add     rsp, 8
 * 00000001404326EB: call    loc_1404326DE
 * 00000001404326F0: add     rsp, 8
 * 00000001404326F4: call    loc_1404326E7
 * 00000001404326F9: add     rsp, 8
 * 00000001404326FD: call    loc_1404326F0
 * 0000000140432702: add     rsp, 8
 * 0000000140432706: call    loc_1404326F9
 * 000000014043270B: add     rsp, 8
 * 000000014043270F: call    loc_140432702
 * 0000000140432714: add     rsp, 8
 * 0000000140432718: call    loc_14043270B
 * 000000014043271D: add     rsp, 8
 * 0000000140432721: call    loc_140432714
 * 0000000140432726: add     rsp, 8
 * 000000014043272A: call    loc_14043271D
 * 000000014043272F: add     rsp, 8
 * 0000000140432733: call    loc_140432726
 * 0000000140432738: add     rsp, 8
 * 000000014043273C: call    loc_14043272F
 * 0000000140432741: add     rsp, 8
 * 0000000140432745: call    loc_140432738
 * 000000014043274A: add     rsp, 8
 * 000000014043274E: call    loc_140432741
 * 0000000140432753: add     rsp, 8
 * 0000000140432757: call    loc_14043274A
 * 000000014043275C: add     rsp, 8
 * 0000000140432760: call    loc_140432753
 * 0000000140432765: add     rsp, 8
 * 0000000140432769: call    loc_14043275C
 * 000000014043276E: add     rsp, 8
 * 0000000140432772: call    loc_140432765
 * 0000000140432777: add     rsp, 8
 * 000000014043277B: call    loc_14043276E
 * 0000000140432780: add     rsp, 8
 * 0000000140432784: call    loc_140432777
 * 0000000140432789: add     rsp, 8
 * 000000014043278D: call    loc_140432780
 * 0000000140432792: add     rsp, 8
 * 0000000140432796: call    loc_140432789
 * 000000014043279B: add     rsp, 8
 * 000000014043279F: call    loc_140432792
 * 00000001404327A4: add     rsp, 8
 * 00000001404327A8: call    loc_14043279B
 * 00000001404327AD: add     rsp, 8
 * 00000001404327B1: call    loc_1404327A4
 * 00000001404327B6: add     rsp, 8
 * 00000001404327BA: mov     eax, 0DADAh
 * 00000001404327BF: test    byte ptr gs:862h, 8
 * 00000001404327C8: jz      short loc_1404327D1
 * 00000001404327CA: mov     al, 20h ; ' '
 * 00000001404327CC: incsspq rax
 * 00000001404327D1: test    word ptr gs:860h, 80h
 * 00000001404327DC: jz      short loc_1404327EA
 * 00000001404327DE: xor     eax, eax
 * 00000001404327E0: xor     edx, edx
 * 00000001404327E2: mov     ecx, 1
 * 00000001404327E7: div     rcx
 * 00000001404327EA: mov     rdx, [rbp+0D8h+var_118]
 * 00000001404327EE: mov     rcx, [rbp+0D8h+var_120]
 * 00000001404327F2: mov     rax, [rbp+0D8h+var_128]
 * 00000001404327F6: mov     rsp, rbp
 * 00000001404327F9: mov     rbp, [rbp+0D8h+var_s0]
 * 0000000140432800: add     rsp, 0E8h
 * 0000000140432807: test    cs:KiKvaShadow, 1
 * 000000014043280E: jz      short loc_140432815
 * 0000000140432810: jmp     KiKernelExit
 * 0000000140432815: test    word ptr gs:860h, 100h
 * 0000000140432820: jz      short loc_140432827
 * 0000000140432822: verw    [rsp-10h+arg_20]
 * 0000000140432827: swapgs
 * 000000014043282A: iretq
 * 000000014043282C: ldmxcsr [rbp+0D8h+var_12C]
 * 0000000140432830: movaps  xmm0, [rbp+0D8h+var_E8]
 * 0000000140432834: movaps  xmm1, [rbp+0D8h+var_D8]
 * 0000000140432838: movaps  xmm2, [rbp+0D8h+var_C8]
 * 000000014043283C: movaps  xmm3, [rbp+0D8h+var_B8]
 * 0000000140432840: movaps  xmm4, [rbp+0D8h+var_A8]
 * 0000000140432844: movaps  xmm5, [rbp+0D8h+var_98]
 * 0000000140432848: mov     r11, [rbp+0D8h+var_F8]
 * 000000014043284C: mov     r10, [rbp+0D8h+var_100]
 * 0000000140432850: mov     r9, [rbp+0D8h+var_108]
 * 0000000140432854: mov     r8, [rbp+0D8h+var_110]
 * 0000000140432858: mov     rdx, [rbp+0D8h+var_118]
 * 000000014043285C: mov     rcx, [rbp+0D8h+var_120]
 * 0000000140432860: mov     rax, [rbp+0D8h+var_128]
 * 0000000140432864: mov     rsp, rbp
 * 0000000140432867: mov     rbp, [rbp+0D8h+var_s0]
 * 000000014043286E: add     rsp, 0E8h
 * 0000000140432875: iretq
 * 0000000140432877: retn
 */
