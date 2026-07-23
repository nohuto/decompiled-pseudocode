/*
 * XREFs of sub_140432080 @ 0x140432080
 * Callers:
 *     sub_140AB5B40 @ 0x140AB5B40 (sub_140AB5B40.c)
 * Callees:
 *     sub_14020D230 @ 0x14020D230 (sub_14020D230.c)
 *     KfRaiseIrql @ 0x1402AD500 (KfRaiseIrql.c)
 *     KeLowerIrql @ 0x1402B1E10 (KeLowerIrql.c)
 *     sub_14041F8A0 @ 0x14041F8A0 (sub_14041F8A0.c)
 *     sub_14041F920 @ 0x14041F920 (sub_14041F920.c)
 *     sub_1404206B0 @ 0x1404206B0 (sub_1404206B0.c)
 *     sub_140425700 @ 0x140425700 (sub_140425700.c)
 *     sub_140432080 @ 0x140432080 (sub_140432080.c)
 *     sub_140434DC0 @ 0x140434DC0 (sub_140434DC0.c)
 *     sub_1404357C0 @ 0x1404357C0 (sub_1404357C0.c)
 *     sub_140571820 @ 0x140571820 (sub_140571820.c)
 *     sub_14057B170 @ 0x14057B170 (sub_14057B170.c)
 */

/*
 * Hex-Rays decompilation failed for sub_140432080 @ 0x140432080
 * Reason: Hex-Rays returned no pseudocode for 0x140432080
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140432080: sub     rsp, 8
 * 0000000140432084: push    rbp
 * 0000000140432085: sub     rsp, 158h
 * 000000014043208C: lea     rbp, [rsp+80h]
 * 0000000140432094: mov     [rbp+0E8h+var_13D], 1
 * 0000000140432098: mov     [rbp+0E8h+var_138], rax
 * 000000014043209C: mov     [rbp+0E8h+var_130], rcx
 * 00000001404320A0: mov     [rbp+0E8h+var_128], rdx
 * 00000001404320A4: mov     [rbp+0E8h+var_120], r8
 * 00000001404320A8: mov     [rbp+0E8h+var_118], r9
 * 00000001404320AC: mov     [rbp+0E8h+var_110], r10
 * 00000001404320B0: mov     [rbp+0E8h+var_108], r11
 * 00000001404320B4: test    [rbp+0E8h+arg_0], 1
 * 00000001404320BB: jnz     short loc_1404320F7
 * 00000001404320BD: xor     edx, edx
 * 00000001404320BF: rdsspq  rdx
 * 00000001404320C4: mov     [rbp+0E8h+var_90], rdx
 * 00000001404320C8: lfence
 * 00000001404320CB: test    word ptr gs:860h, 1
 * 00000001404320D6: jnz     short loc_1404320E0
 * 00000001404320D8: lfence
 * 00000001404320DB: jmp     loc_14043233F
 * 00000001404320E0: movzx   eax, word ptr gs:864h
 * 00000001404320E9: mov     ecx, 48h ; 'H'
 * 00000001404320EE: xor     edx, edx
 * 00000001404320F0: wrmsr
 * 00000001404320F2: jmp     loc_14043233F
 * 00000001404320F7: test    cs:byte_140E01840, 1
 * 00000001404320FE: jnz     short loc_140432103
 * 0000000140432100: swapgs
 * 0000000140432103: lfence
 * 0000000140432106: mov     rcx, gs:9828h
 * 000000014043210F: test    rcx, rcx
 * 0000000140432112: jz      short loc_140432133
 * 0000000140432114: rdsspq  rdx
 * 0000000140432119: mov     r10, gs:9820h
 * 0000000140432122: add     r10, 8
 * 0000000140432126: cmp     rdx, r10
 * 0000000140432129: jnz     short loc_140432133
 * 000000014043212B: rstorssp qword ptr [rcx]
 * 000000014043212F: saveprevssp
 * 0000000140432133: mov     r10, gs:188h
 * 000000014043213C: mov     rcx, gs:188h
 * 0000000140432145: mov     rcx, [rcx+220h]
 * 000000014043214C: mov     rcx, [rcx+9E0h]
 * 0000000140432153: mov     gs:858h, rcx
 * 000000014043215C: mov     cx, gs:850h
 * 0000000140432165: mov     gs:852h, cx
 * 000000014043216E: mov     cx, gs:860h
 * 0000000140432177: mov     gs:854h, cx
 * 0000000140432180: movzx   eax, word ptr gs:866h
 * 0000000140432189: cmp     gs:864h, ax
 * 0000000140432192: jz      short loc_1404321A6
 * 0000000140432194: mov     gs:864h, ax
 * 000000014043219D: mov     ecx, 48h ; 'H'
 * 00000001404321A2: xor     edx, edx
 * 00000001404321A4: wrmsr
 * 00000001404321A6: movzx   edx, word ptr gs:860h
 * 00000001404321AF: test    edx, 8
 * 00000001404321B5: jz      short loc_1404321CE
 * 00000001404321B7: mov     eax, 1
 * 00000001404321BC: xor     edx, edx
 * 00000001404321BE: mov     ecx, 49h ; 'I'
 * 00000001404321C3: wrmsr
 * 00000001404321C5: movzx   edx, word ptr gs:860h
 * 00000001404321CE: test    edx, 2
 * 00000001404321D4: jz      loc_140432311
 * 00000001404321DA: call    loc_1404322ED
 * 00000001404321DF: add     rsp, 8
 * 00000001404321E3: call    loc_1404322F6
 * 00000001404321E8: add     rsp, 8
 * 00000001404321EC: call    loc_1404321DF
 * 00000001404321F1: add     rsp, 8
 * 00000001404321F5: call    loc_1404321E8
 * 00000001404321FA: add     rsp, 8
 * 00000001404321FE: call    loc_1404321F1
 * 0000000140432203: add     rsp, 8
 * 0000000140432207: call    loc_1404321FA
 * 000000014043220C: add     rsp, 8
 * 0000000140432210: call    loc_140432203
 * 0000000140432215: add     rsp, 8
 * 0000000140432219: call    loc_14043220C
 * 000000014043221E: add     rsp, 8
 * 0000000140432222: call    loc_140432215
 * 0000000140432227: add     rsp, 8
 * 000000014043222B: call    loc_14043221E
 * 0000000140432230: add     rsp, 8
 * 0000000140432234: call    loc_140432227
 * 0000000140432239: add     rsp, 8
 * 000000014043223D: call    loc_140432230
 * 0000000140432242: add     rsp, 8
 * 0000000140432246: call    loc_140432239
 * 000000014043224B: add     rsp, 8
 * 000000014043224F: call    loc_140432242
 * 0000000140432254: add     rsp, 8
 * 0000000140432258: call    loc_14043224B
 * 000000014043225D: add     rsp, 8
 * 0000000140432261: call    loc_140432254
 * 0000000140432266: add     rsp, 8
 * 000000014043226A: call    loc_14043225D
 * 000000014043226F: add     rsp, 8
 * 0000000140432273: call    loc_140432266
 * 0000000140432278: add     rsp, 8
 * 000000014043227C: call    loc_14043226F
 * 0000000140432281: add     rsp, 8
 * 0000000140432285: call    loc_140432278
 * 000000014043228A: add     rsp, 8
 * 000000014043228E: call    loc_140432281
 * 0000000140432293: add     rsp, 8
 * 0000000140432297: call    loc_14043228A
 * 000000014043229C: add     rsp, 8
 * 00000001404322A0: call    loc_140432293
 * 00000001404322A5: add     rsp, 8
 * 00000001404322A9: call    loc_14043229C
 * 00000001404322AE: add     rsp, 8
 * 00000001404322B2: call    loc_1404322A5
 * 00000001404322B7: add     rsp, 8
 * 00000001404322BB: call    loc_1404322AE
 * 00000001404322C0: add     rsp, 8
 * 00000001404322C4: call    loc_1404322B7
 * 00000001404322C9: add     rsp, 8
 * 00000001404322CD: call    loc_1404322C0
 * 00000001404322D2: add     rsp, 8
 * 00000001404322D6: call    loc_1404322C9
 * 00000001404322DB: add     rsp, 8
 * 00000001404322DF: call    loc_1404322D2
 * 00000001404322E4: add     rsp, 8
 * 00000001404322E8: call    loc_1404322DB
 * 00000001404322ED: add     rsp, 8
 * 00000001404322F1: call    loc_1404322E4
 * 00000001404322F6: add     rsp, 8
 * 00000001404322FA: mov     eax, 0DADAh
 * 00000001404322FF: test    byte ptr gs:862h, 8
 * 0000000140432308: jz      short loc_140432311
 * 000000014043230A: mov     al, 20h ; ' '
 * 000000014043230C: incsspq rax
 * 0000000140432311: test    edx, 200h
 * 0000000140432317: jz      short loc_14043231E
 * 0000000140432319: call    sub_1404357C0
 * 000000014043231E: lfence
 * 0000000140432321: mov     byte ptr gs:856h, 0
 * 000000014043232A: test    byte ptr [r10+3], 3
 * 000000014043232F: mov     [rbp+0E8h+var_68], 0
 * 0000000140432338: jz      short loc_14043233F
 * 000000014043233A: call    sub_14041F920
 * 000000014043233F: cld
 * 0000000140432340: stmxcsr [rbp+0E8h+var_13C]
 * 0000000140432344: ldmxcsr dword ptr gs:180h
 * 000000014043234D: movaps  [rbp+0E8h+var_F8], xmm0
 * 0000000140432351: movaps  [rbp+0E8h+var_E8], xmm1
 * 0000000140432355: movaps  [rbp+0E8h+var_D8], xmm2
 * 0000000140432359: movaps  [rbp+0E8h+var_C8], xmm3
 * 000000014043235D: movaps  [rbp+0E8h+var_B8], xmm4
 * 0000000140432361: movaps  [rbp+0E8h+var_A8], xmm5
 * 0000000140432365: test    byte ptr cs:dword_140D069F0, 0FFh
 * 000000014043236C: jz      short loc_14043237A
 * 000000014043236E: test    [rbp+0E8h+arg_0], 1
 * 0000000140432375: jz      short loc_14043237A
 * 0000000140432377: stac
 * 000000014043237A: mov     r9, gs:8888h
 * 0000000140432383: test    r9, r9
 * 0000000140432386: jz      loc_140432724
 * 000000014043238C: cmp     dword ptr [r9+44h], 1
 * 0000000140432391: jnz     loc_140432724
 * 0000000140432397: test    [rbp+0E8h+arg_8], 200h
 * 00000001404323A1: jz      loc_140432724
 * 00000001404323A7: mov     rax, cr8
 * 00000001404323AB: mov     dword ptr [rbp+0E8h+NewIrql], eax
 * 00000001404323AE: cmp     al, 2
 * 00000001404323B0: jge     loc_140432724
 * 00000001404323B6: mov     ecx, 2; NewIrql
 * 00000001404323BB: call    KfRaiseIrql
 * 00000001404323C0: sti
 * 00000001404323C1: mov     r9, gs:8888h
 * 00000001404323CA: mov     rcx, [r9+48h]
 * 00000001404323CE: mov     dword ptr [r9+44h], 0
 * 00000001404323D6: call    sub_14057B170
 * 00000001404323DB: cli
 * 00000001404323DC: mov     ecx, dword ptr [rbp+0E8h+NewIrql]; NewIrql
 * 00000001404323DF: call    KeLowerIrql
 * 00000001404323E4: test    [rbp+0E8h+arg_0], 1
 * 00000001404323EB: jz      loc_1404326D9
 * 00000001404323F1: test    byte ptr cs:dword_140D069F0, 0FFh
 * 00000001404323F8: jz      short loc_1404323FD
 * 00000001404323FA: stac
 * 00000001404323FD: mov     rcx, gs:188h
 * 0000000140432406: test    byte ptr [rcx+0C2h], 3
 * 000000014043240D: jz      short loc_14043242A
 * 000000014043240F: mov     ecx, 1
 * 0000000140432414: mov     cr8, rcx
 * 0000000140432418: sti
 * 0000000140432419: call    sub_140425700
 * 000000014043241E: cli
 * 000000014043241F: mov     ecx, 0
 * 0000000140432424: mov     cr8, rcx
 * 0000000140432428: jmp     short loc_1404323FD
 * 000000014043242A: test    byte ptr gs:86Ch, 2
 * 0000000140432433: jz      short loc_14043243C
 * 0000000140432435: xor     ecx, ecx
 * 0000000140432437: call    sub_14020D230
 * 000000014043243C: mov     rcx, gs:188h
 * 0000000140432445: test    dword ptr [rcx], 8000000h
 * 000000014043244B: jz      short loc_140432452
 * 000000014043244D: call    sub_1404206B0
 * 0000000140432452: mov     rcx, gs:188h
 * 000000014043245B: test    dword ptr [rcx], 10000h
 * 0000000140432461: jz      short loc_140432477
 * 0000000140432463: test    byte ptr [rcx+2], 1
 * 0000000140432467: jz      short loc_140432477
 * 0000000140432469: call    sub_140571820
 * 000000014043246E: mov     rcx, gs:188h
 * 0000000140432477: ldmxcsr [rbp+0E8h+var_13C]
 * 000000014043247B: cmp     [rbp+0E8h+var_68], 0
 * 0000000140432483: jz      short loc_14043248A
 * 0000000140432485: call    sub_14041F8A0
 * 000000014043248A: mov     rcx, gs:188h
 * 0000000140432493: bt      dword ptr [rcx+74h], 16h
 * 0000000140432498: jnb     short loc_1404324C4
 * 000000014043249A: xor     ecx, ecx
 * 000000014043249C: rdsspq  rcx
 * 00000001404324A1: mov     r8, gs:9828h
 * 00000001404324AA: add     r8, 8
 * 00000001404324AE: cmp     rcx, r8
 * 00000001404324B1: jnz     short loc_1404324C4
 * 00000001404324B3: mov     rcx, gs:9820h
 * 00000001404324BC: rstorssp qword ptr [rcx]
 * 00000001404324C0: saveprevssp
 * 00000001404324C4: movaps  xmm0, [rbp+0E8h+var_F8]
 * 00000001404324C8: movaps  xmm1, [rbp+0E8h+var_E8]
 * 00000001404324CC: movaps  xmm2, [rbp+0E8h+var_D8]
 * 00000001404324D0: movaps  xmm3, [rbp+0E8h+var_C8]
 * 00000001404324D4: movaps  xmm4, [rbp+0E8h+var_B8]
 * 00000001404324D8: movaps  xmm5, [rbp+0E8h+var_A8]
 * 00000001404324DC: mov     r11, [rbp+0E8h+var_108]
 * 00000001404324E0: mov     r10, [rbp+0E8h+var_110]
 * 00000001404324E4: mov     r9, [rbp+0E8h+var_118]
 * 00000001404324E8: mov     r8, [rbp+0E8h+var_120]
 * 00000001404324EC: mov     byte ptr gs:856h, 0
 * 00000001404324F5: movzx   eax, word ptr gs:86Ah
 * 00000001404324FE: cmp     gs:864h, ax
 * 0000000140432507: jz      short loc_14043251B
 * 0000000140432509: mov     gs:864h, ax
 * 0000000140432512: mov     ecx, 48h ; 'H'
 * 0000000140432517: xor     edx, edx
 * 0000000140432519: wrmsr
 * 000000014043251B: btr     word ptr gs:860h, 2
 * 0000000140432526: jnb     short loc_140432536
 * 0000000140432528: mov     eax, 1
 * 000000014043252D: xor     edx, edx
 * 000000014043252F: mov     ecx, 49h ; 'I'
 * 0000000140432534: wrmsr
 * 0000000140432536: btr     word ptr gs:860h, 5
 * 0000000140432541: jnb     loc_14043267E
 * 0000000140432547: call    loc_14043265A
 * 000000014043254C: add     rsp, 8
 * 0000000140432550: call    loc_140432663
 * 0000000140432555: add     rsp, 8
 * 0000000140432559: call    loc_14043254C
 * 000000014043255E: add     rsp, 8
 * 0000000140432562: call    loc_140432555
 * 0000000140432567: add     rsp, 8
 * 000000014043256B: call    loc_14043255E
 * 0000000140432570: add     rsp, 8
 * 0000000140432574: call    loc_140432567
 * 0000000140432579: add     rsp, 8
 * 000000014043257D: call    loc_140432570
 * 0000000140432582: add     rsp, 8
 * 0000000140432586: call    loc_140432579
 * 000000014043258B: add     rsp, 8
 * 000000014043258F: call    loc_140432582
 * 0000000140432594: add     rsp, 8
 * 0000000140432598: call    loc_14043258B
 * 000000014043259D: add     rsp, 8
 * 00000001404325A1: call    loc_140432594
 * 00000001404325A6: add     rsp, 8
 * 00000001404325AA: call    loc_14043259D
 * 00000001404325AF: add     rsp, 8
 * 00000001404325B3: call    loc_1404325A6
 * 00000001404325B8: add     rsp, 8
 * 00000001404325BC: call    loc_1404325AF
 * 00000001404325C1: add     rsp, 8
 * 00000001404325C5: call    loc_1404325B8
 * 00000001404325CA: add     rsp, 8
 * 00000001404325CE: call    loc_1404325C1
 * 00000001404325D3: add     rsp, 8
 * 00000001404325D7: call    loc_1404325CA
 * 00000001404325DC: add     rsp, 8
 * 00000001404325E0: call    loc_1404325D3
 * 00000001404325E5: add     rsp, 8
 * 00000001404325E9: call    loc_1404325DC
 * 00000001404325EE: add     rsp, 8
 * 00000001404325F2: call    loc_1404325E5
 * 00000001404325F7: add     rsp, 8
 * 00000001404325FB: call    loc_1404325EE
 * 0000000140432600: add     rsp, 8
 * 0000000140432604: call    loc_1404325F7
 * 0000000140432609: add     rsp, 8
 * 000000014043260D: call    loc_140432600
 * 0000000140432612: add     rsp, 8
 * 0000000140432616: call    loc_140432609
 * 000000014043261B: add     rsp, 8
 * 000000014043261F: call    loc_140432612
 * 0000000140432624: add     rsp, 8
 * 0000000140432628: call    loc_14043261B
 * 000000014043262D: add     rsp, 8
 * 0000000140432631: call    loc_140432624
 * 0000000140432636: add     rsp, 8
 * 000000014043263A: call    loc_14043262D
 * 000000014043263F: add     rsp, 8
 * 0000000140432643: call    loc_140432636
 * 0000000140432648: add     rsp, 8
 * 000000014043264C: call    loc_14043263F
 * 0000000140432651: add     rsp, 8
 * 0000000140432655: call    loc_140432648
 * 000000014043265A: add     rsp, 8
 * 000000014043265E: call    loc_140432651
 * 0000000140432663: add     rsp, 8
 * 0000000140432667: mov     eax, 0DADAh
 * 000000014043266C: test    byte ptr gs:862h, 8
 * 0000000140432675: jz      short loc_14043267E
 * 0000000140432677: mov     al, 20h ; ' '
 * 0000000140432679: incsspq rax
 * 000000014043267E: test    word ptr gs:860h, 80h
 * 0000000140432689: jz      short loc_140432697
 * 000000014043268B: xor     eax, eax
 * 000000014043268D: xor     edx, edx
 * 000000014043268F: mov     ecx, 1
 * 0000000140432694: div     rcx
 * 0000000140432697: mov     rdx, [rbp+0E8h+var_128]
 * 000000014043269B: mov     rcx, [rbp+0E8h+var_130]
 * 000000014043269F: mov     rax, [rbp+0E8h+var_138]
 * 00000001404326A3: mov     rsp, rbp
 * 00000001404326A6: mov     rbp, [rbp+0E8h+var_10]
 * 00000001404326AD: add     rsp, 0E8h
 * 00000001404326B4: test    cs:byte_140E01840, 1
 * 00000001404326BB: jz      short loc_1404326C2
 * 00000001404326BD: jmp     sub_140AB6B80
 * 00000001404326C2: test    word ptr gs:860h, 100h
 * 00000001404326CD: jz      short loc_1404326D4
 * 00000001404326CF: verw    [rsp+arg_18]
 * 00000001404326D4: swapgs
 * 00000001404326D7: iretq
 * 00000001404326D9: ldmxcsr [rbp+0E8h+var_13C]
 * 00000001404326DD: movaps  xmm0, [rbp+0E8h+var_F8]
 * 00000001404326E1: movaps  xmm1, [rbp+0E8h+var_E8]
 * 00000001404326E5: movaps  xmm2, [rbp+0E8h+var_D8]
 * 00000001404326E9: movaps  xmm3, [rbp+0E8h+var_C8]
 * 00000001404326ED: movaps  xmm4, [rbp+0E8h+var_B8]
 * 00000001404326F1: movaps  xmm5, [rbp+0E8h+var_A8]
 * 00000001404326F5: mov     r11, [rbp+0E8h+var_108]
 * 00000001404326F9: mov     r10, [rbp+0E8h+var_110]
 * 00000001404326FD: mov     r9, [rbp+0E8h+var_118]
 * 0000000140432701: mov     r8, [rbp+0E8h+var_120]
 * 0000000140432705: mov     rdx, [rbp+0E8h+var_128]
 * 0000000140432709: mov     rcx, [rbp+0E8h+var_130]
 * 000000014043270D: mov     rax, [rbp+0E8h+var_138]
 * 0000000140432711: mov     rsp, rbp
 * 0000000140432714: mov     rbp, [rbp+0E8h+var_10]
 * 000000014043271B: add     rsp, 0E8h
 * 0000000140432722: iretq
 * 0000000140432724: mov     r10, [rbp+0E8h]
 * 000000014043272B: mov     r9, gs:8888h
 * 0000000140432734: movzx   r8, [rbp+0E8h+NewIrql]
 * 0000000140432739: mov     ecx, 7Fh
 * 000000014043273E: mov     edx, 20h ; ' '
 * 0000000140432743: call    sub_140434DC0
 */
