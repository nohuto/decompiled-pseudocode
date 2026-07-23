/*
 * XREFs of sub_140434000 @ 0x140434000
 * Callers:
 *     <none>
 * Callees:
 *     sub_14020D230 @ 0x14020D230 (sub_14020D230.c)
 *     sub_14041F8A0 @ 0x14041F8A0 (sub_14041F8A0.c)
 *     sub_14041F920 @ 0x14041F920 (sub_14041F920.c)
 *     sub_1404206B0 @ 0x1404206B0 (sub_1404206B0.c)
 *     sub_140424C80 @ 0x140424C80 (sub_140424C80.c)
 *     sub_140425700 @ 0x140425700 (sub_140425700.c)
 *     sub_140434000 @ 0x140434000 (sub_140434000.c)
 *     sub_140434DC0 @ 0x140434DC0 (sub_140434DC0.c)
 *     sub_140434E40 @ 0x140434E40 (sub_140434E40.c)
 *     sub_1404357C0 @ 0x1404357C0 (sub_1404357C0.c)
 *     sub_140571820 @ 0x140571820 (sub_140571820.c)
 *     sub_140630340 @ 0x140630340 (sub_140630340.c)
 *     sub_1406303E0 @ 0x1406303E0 (sub_1406303E0.c)
 *     sub_1406593C0 @ 0x1406593C0 (sub_1406593C0.c)
 *     sub_1406F83A0 @ 0x1406F83A0 (sub_1406F83A0.c)
 *     sub_1409630B0 @ 0x1409630B0 (sub_1409630B0.c)
 *     sub_1409631D0 @ 0x1409631D0 (sub_1409631D0.c)
 */

/*
 * Hex-Rays decompilation failed for sub_140434000 @ 0x140434000
 * Reason: Hex-Rays returned no pseudocode for 0x140434000
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140434000: swapgs
 * 0000000140434003: mov     gs:10h, rsp
 * 000000014043400C: mov     rsp, gs:1A8h
 * 0000000140434015: push    2Bh ; '+'
 * 0000000140434017: push    qword ptr gs:10h
 * 000000014043401F: push    r11
 * 0000000140434021: push    33h ; '3'
 * 0000000140434023: push    rcx
 * 0000000140434024: mov     rcx, gs:9828h
 * 000000014043402D: test    rcx, rcx
 * 0000000140434030: jz      short loc_14043403E
 * 0000000140434032: setssbsy
 * 0000000140434036: rstorssp qword ptr [rcx]
 * 000000014043403A: saveprevssp
 * 000000014043403E: mov     rcx, r10
 * 0000000140434041: sub     rsp, 8
 * 0000000140434045: push    rbp
 * 0000000140434046: sub     rsp, 158h
 * 000000014043404D: lea     rbp, [rsp+190h+var_110]
 * 0000000140434055: mov     [rbp+0C0h], rbx
 * 000000014043405C: mov     [rbp+0C8h], rdi
 * 0000000140434063: mov     [rbp+0D0h], rsi
 * 000000014043406A: test    byte ptr cs:dword_140D069F0, 0FFh
 * 0000000140434071: jz      short loc_14043407F
 * 0000000140434073: test    byte ptr [rbp+0F0h], 1
 * 000000014043407A: jz      short loc_14043407F
 * 000000014043407C: stac
 * 000000014043407F: mov     [rbp-50h], rax
 * 0000000140434083: mov     [rbp-48h], rcx
 * 0000000140434087: mov     [rbp-40h], rdx
 * 000000014043408B: mov     rcx, gs:188h
 * 0000000140434094: mov     rcx, [rcx+220h]
 * 000000014043409B: mov     rcx, [rcx+9E0h]
 * 00000001404340A2: mov     gs:858h, rcx
 * 00000001404340AB: mov     cx, gs:850h
 * 00000001404340B4: mov     gs:852h, cx
 * 00000001404340BD: mov     cx, gs:860h
 * 00000001404340C6: mov     gs:854h, cx
 * 00000001404340CF: movzx   eax, word ptr gs:866h
 * 00000001404340D8: cmp     gs:864h, ax
 * 00000001404340E1: jz      short loc_1404340F5
 * 00000001404340E3: mov     gs:864h, ax
 * 00000001404340EC: mov     ecx, 48h ; 'H'
 * 00000001404340F1: xor     edx, edx
 * 00000001404340F3: wrmsr
 * 00000001404340F5: movzx   edx, word ptr gs:860h
 * 00000001404340FE: test    edx, 8
 * 0000000140434104: jz      short loc_14043411D
 * 0000000140434106: mov     eax, 1
 * 000000014043410B: xor     edx, edx
 * 000000014043410D: mov     ecx, 49h ; 'I'
 * 0000000140434112: wrmsr
 * 0000000140434114: movzx   edx, word ptr gs:860h
 * 000000014043411D: test    edx, 2
 * 0000000140434123: jz      loc_140434260
 * 0000000140434129: call    loc_14043423C
 * 000000014043412E: add     rsp, 8
 * 0000000140434132: call    loc_140434245
 * 0000000140434137: add     rsp, 8
 * 000000014043413B: call    loc_14043412E
 * 0000000140434140: add     rsp, 8
 * 0000000140434144: call    loc_140434137
 * 0000000140434149: add     rsp, 8
 * 000000014043414D: call    loc_140434140
 * 0000000140434152: add     rsp, 8
 * 0000000140434156: call    loc_140434149
 * 000000014043415B: add     rsp, 8
 * 000000014043415F: call    loc_140434152
 * 0000000140434164: add     rsp, 8
 * 0000000140434168: call    loc_14043415B
 * 000000014043416D: add     rsp, 8
 * 0000000140434171: call    loc_140434164
 * 0000000140434176: add     rsp, 8
 * 000000014043417A: call    loc_14043416D
 * 000000014043417F: add     rsp, 8
 * 0000000140434183: call    loc_140434176
 * 0000000140434188: add     rsp, 8
 * 000000014043418C: call    loc_14043417F
 * 0000000140434191: add     rsp, 8
 * 0000000140434195: call    loc_140434188
 * 000000014043419A: add     rsp, 8
 * 000000014043419E: call    loc_140434191
 * 00000001404341A3: add     rsp, 8
 * 00000001404341A7: call    loc_14043419A
 * 00000001404341AC: add     rsp, 8
 * 00000001404341B0: call    loc_1404341A3
 * 00000001404341B5: add     rsp, 8
 * 00000001404341B9: call    loc_1404341AC
 * 00000001404341BE: add     rsp, 8
 * 00000001404341C2: call    loc_1404341B5
 * 00000001404341C7: add     rsp, 8
 * 00000001404341CB: call    loc_1404341BE
 * 00000001404341D0: add     rsp, 8
 * 00000001404341D4: call    loc_1404341C7
 * 00000001404341D9: add     rsp, 8
 * 00000001404341DD: call    loc_1404341D0
 * 00000001404341E2: add     rsp, 8
 * 00000001404341E6: call    loc_1404341D9
 * 00000001404341EB: add     rsp, 8
 * 00000001404341EF: call    loc_1404341E2
 * 00000001404341F4: add     rsp, 8
 * 00000001404341F8: call    loc_1404341EB
 * 00000001404341FD: add     rsp, 8
 * 0000000140434201: call    loc_1404341F4
 * 0000000140434206: add     rsp, 8
 * 000000014043420A: call    loc_1404341FD
 * 000000014043420F: add     rsp, 8
 * 0000000140434213: call    loc_140434206
 * 0000000140434218: add     rsp, 8
 * 000000014043421C: call    loc_14043420F
 * 0000000140434221: add     rsp, 8
 * 0000000140434225: call    loc_140434218
 * 000000014043422A: add     rsp, 8
 * 000000014043422E: call    loc_140434221
 * 0000000140434233: add     rsp, 8
 * 0000000140434237: call    loc_14043422A
 * 000000014043423C: add     rsp, 8
 * 0000000140434240: call    loc_140434233
 * 0000000140434245: add     rsp, 8
 * 0000000140434249: mov     eax, 0DADAh
 * 000000014043424E: test    byte ptr gs:862h, 8
 * 0000000140434257: jz      short loc_140434260
 * 0000000140434259: mov     al, 20h ; ' '
 * 000000014043425B: incsspq rax
 * 0000000140434260: test    edx, 200h
 * 0000000140434266: jz      short loc_14043426D
 * 0000000140434268: call    sub_1404357C0
 * 000000014043426D: lfence
 * 0000000140434270: mov     byte ptr gs:856h, 0
 * 0000000140434279: mov     byte ptr [rbp-55h], 2
 * 000000014043427D: mov     rbx, gs:188h
 * 0000000140434286: prefetchw byte ptr [rbx+90h]
 * 000000014043428D: stmxcsr dword ptr [rbp-54h]
 * 0000000140434291: ldmxcsr dword ptr gs:180h
 * 000000014043429A: cmp     byte ptr [rbx+3], 0
 * 000000014043429E: mov     word ptr [rbp+80h], 0
 * 00000001404342A7: jz      short loc_140434320
 * 00000001404342A9: test    byte ptr [rbx+3], 3
 * 00000001404342AD: mov     [rbp-38h], r8
 * 00000001404342B1: mov     [rbp-30h], r9
 * 00000001404342B5: jz      short loc_1404342BC
 * 00000001404342B7: call    sub_14041F920
 * 00000001404342BC: test    byte ptr [rbx+3], 24h
 * 00000001404342C0: jz      short loc_140434318
 * 00000001404342C2: mov     [rbp-20h], r10
 * 00000001404342C6: mov     [rbp-28h], r10
 * 00000001404342CA: movaps  xmmword ptr [rbp-10h], xmm0
 * 00000001404342CE: movaps  xmmword ptr [rbp+0], xmm1
 * 00000001404342D2: movaps  xmmword ptr [rbp+10h], xmm2
 * 00000001404342D6: movaps  xmmword ptr [rbp+20h], xmm3
 * 00000001404342DA: movaps  xmmword ptr [rbp+30h], xmm4
 * 00000001404342DE: movaps  xmmword ptr [rbp+40h], xmm5
 * 00000001404342E2: sti
 * 00000001404342E3: mov     rcx, rsp
 * 00000001404342E6: call    sub_1406593C0
 * 00000001404342EB: cmp     al, 1
 * 00000001404342ED: jz      short loc_140434318
 * 00000001404342EF: mov     rax, [rbp-50h]
 * 00000001404342F3: jl      short loc_140434309
 * 00000001404342F5: mov     ecx, 0C000001Ch
 * 00000001404342FA: xor     edx, edx
 * 00000001404342FC: mov     r8, [rbp+0E8h]
 * 0000000140434303: call    sub_140434E40
 * 0000000140434308: int     3; Trap to Debugger
 * 0000000140434309: test    byte ptr [rbx+3], 4
 * 000000014043430D: jz      loc_1404344E0
 * 0000000140434313: jmp     loc_14043490C
 * 0000000140434318: mov     r8, [rbp-38h]
 * 000000014043431C: mov     r9, [rbp-30h]
 * 0000000140434320: mov     rax, [rbp-50h]
 * 0000000140434324: mov     rcx, [rbp-48h]
 * 0000000140434328: mov     rdx, [rbp-40h]
 * 000000014043432C: sti
 * 000000014043432D: mov     [rbx+88h], rcx
 * 0000000140434334: mov     [rbx+80h], eax
 * 000000014043433A: nop     word ptr [rax+rax+00h]
 * 0000000140434340: mov     [rbx+90h], rsp
 * 0000000140434347: mov     edi, eax
 * 0000000140434349: shr     edi, 7
 * 000000014043434C: and     edi, 20h
 * 000000014043434F: and     eax, 0FFFh
 * 0000000140434354: lea     r10, xmmword_140E018C0
 * 000000014043435B: lea     r11, xmmword_140D06F80
 * 0000000140434362: test    dword ptr [rbx+78h], 80h
 * 0000000140434369: jz      short loc_14043437E
 * 000000014043436B: test    dword ptr [rbx+78h], 200000h
 * 0000000140434372: jz      short loc_14043437B
 * 0000000140434374: lea     r11, xmmword_140D07100
 * 000000014043437B: mov     r10, r11
 * 000000014043437E: cmp     eax, [r10+rdi+10h]
 * 0000000140434383: jnb     loc_140434C1B
 * 0000000140434389: mov     r10, [r10+rdi]
 * 000000014043438D: movsxd  r11, dword ptr [r10+rax*4]
 * 0000000140434391: mov     rax, r11
 * 0000000140434394: sar     r11, 4
 * 0000000140434398: add     r10, r11
 * 000000014043439B: cmp     edi, 20h ; ' '
 * 000000014043439E: jnz     short loc_1404343F0
 * 00000001404343A0: mov     r11, [rbx+0F0h]
 * 00000001404343A7: cmp     dword ptr [r11+1740h], 0
 * 00000001404343AF: jz      short loc_1404343F0
 * 00000001404343B1: mov     [rbp-50h], rax
 * 00000001404343B5: mov     [rbp-48h], rcx
 * 00000001404343B9: mov     [rbp-40h], rdx
 * 00000001404343BD: mov     rbx, r8
 * 00000001404343C0: mov     rdi, r9
 * 00000001404343C3: mov     rsi, r10
 * 00000001404343C6: mov     ecx, 7
 * 00000001404343CB: xor     edx, edx
 * 00000001404343CD: xor     r8, r8
 * 00000001404343D0: xor     r9, r9
 * 00000001404343D3: call    sub_1406F83A0
 * 00000001404343D8: mov     rax, [rbp-50h]
 * 00000001404343DC: mov     rcx, [rbp-48h]
 * 00000001404343E0: mov     rdx, [rbp-40h]
 * 00000001404343E4: mov     r8, rbx
 * 00000001404343E7: mov     r9, rdi
 * 00000001404343EA: mov     r10, rsi
 * 00000001404343ED: nop     dword ptr [rax]
 * 00000001404343F0: and     eax, 0Fh
 * 00000001404343F3: jz      loc_1404344B0
 * 00000001404343F9: shl     eax, 3
 * 00000001404343FC: lea     rsp, [rsp-70h]
 * 0000000140434401: lea     rdi, [rsp+100h+var_E8]
 * 0000000140434406: mov     rsi, [rbp+100h]
 * 000000014043440D: lea     rsi, [rsi+20h]
 * 0000000140434411: test    byte ptr [rbp+0F0h], 1
 * 0000000140434418: jz      short loc_140434430
 * 000000014043441A: cmp     rsi, cs:MmUserProbeAddress
 * 0000000140434421: cmovnb  rsi, cs:MmUserProbeAddress
 * 0000000140434429: nop     dword ptr [rax+00000000h]
 * 0000000140434430: lea     r11, loc_1404344B0
 * 0000000140434437: sub     r11, rax
 * 000000014043443A: jmp     r11
 * 0000000140434440: mov     rax, [rsi+70h]
 * 0000000140434444: mov     [rdi+70h], rax
 * 0000000140434448: mov     rax, [rsi+68h]
 * 000000014043444C: mov     [rdi+68h], rax
 * 0000000140434450: mov     rax, [rsi+60h]
 * 0000000140434454: mov     [rdi+60h], rax
 * 0000000140434458: mov     rax, [rsi+58h]
 * 000000014043445C: mov     [rdi+58h], rax
 * 0000000140434460: mov     rax, [rsi+50h]
 * 0000000140434464: mov     [rdi+50h], rax
 * 0000000140434468: mov     rax, [rsi+48h]
 * 000000014043446C: mov     [rdi+48h], rax
 * 0000000140434470: mov     rax, [rsi+40h]
 * 0000000140434474: mov     [rdi+40h], rax
 * 0000000140434478: mov     rax, [rsi+38h]
 * 000000014043447C: mov     [rdi+38h], rax
 * 0000000140434480: mov     rax, [rsi+30h]
 * 0000000140434484: mov     [rdi+30h], rax
 * 0000000140434488: mov     rax, [rsi+28h]
 * 000000014043448C: mov     [rdi+28h], rax
 * 0000000140434490: mov     rax, [rsi+20h]
 * 0000000140434494: mov     [rdi+20h], rax
 * 0000000140434498: mov     rax, [rsi+18h]
 * 000000014043449C: mov     [rdi+18h], rax
 * 00000001404344A0: mov     rax, [rsi+10h]
 * 00000001404344A4: mov     [rdi+10h], rax
 * 00000001404344A8: mov     rax, [rsi+8]
 * 00000001404344AC: mov     [rdi+8], rax
 * 00000001404344B0: test    cs:dword_140D06B80, 1
 * 00000001404344BA: jnz     loc_140434CB9
 * 00000001404344C0: test    dword ptr cs:xmmword_140D06900+8, 40h
 * 00000001404344CA: jnz     loc_140434D2D
 * 00000001404344D0: mov     rax, r10
 * 00000001404344D3: call    rax
 * 00000001404344D5: nop     dword ptr [rax]
 * 00000001404344D8: inc     dword ptr gs:2EB8h
 * 00000001404344E0: mov     rbx, [rbp+0C0h]
 * 00000001404344E7: mov     rdi, [rbp+0C8h]
 * 00000001404344EE: mov     rsi, [rbp+0D0h]
 * 00000001404344F5: mov     r11, gs:188h
 * 00000001404344FE: test    byte ptr [rbp+0F0h], 1
 * 0000000140434505: jz      loc_1404348DF
 * 000000014043450B: mov     rcx, cr8
 * 000000014043450F: or      cl, [r11+24Ah]
 * 0000000140434516: or      ecx, [r11+1E4h]
 * 000000014043451D: jnz     loc_140434C85
 * 0000000140434523: cli
 * 0000000140434524: mov     rcx, gs:188h
 * 000000014043452D: test    byte ptr [rcx+0C2h], 3
 * 0000000140434534: jz      short loc_14043458F
 * 0000000140434536: mov     [rbp-50h], rax
 * 000000014043453A: xor     eax, eax
 * 000000014043453C: mov     [rbp-48h], rax
 * 0000000140434540: mov     [rbp-40h], rax
 * 0000000140434544: mov     [rbp-38h], rax
 * 0000000140434548: mov     [rbp-30h], rax
 * 000000014043454C: mov     [rbp-28h], rax
 * 0000000140434550: mov     [rbp-20h], rax
 * 0000000140434554: pxor    xmm0, xmm0
 * 0000000140434558: movaps  xmmword ptr [rbp-10h], xmm0
 * 000000014043455C: movaps  xmmword ptr [rbp+0], xmm0
 * 0000000140434560: movaps  xmmword ptr [rbp+10h], xmm0
 * 0000000140434564: movaps  xmmword ptr [rbp+20h], xmm0
 * 0000000140434568: movaps  xmmword ptr [rbp+30h], xmm0
 * 000000014043456C: movaps  xmmword ptr [rbp+40h], xmm0
 * 0000000140434570: mov     ecx, 1
 * 0000000140434575: mov     cr8, rcx
 * 0000000140434579: sti
 * 000000014043457A: call    sub_140425700
 * 000000014043457F: cli
 * 0000000140434580: mov     ecx, 0
 * 0000000140434585: mov     cr8, rcx
 * 0000000140434589: mov     rax, [rbp-50h]
 * 000000014043458D: jmp     short loc_140434524
 * 000000014043458F: test    byte ptr gs:86Ch, 2
 * 0000000140434598: jz      short loc_1404345A9
 * 000000014043459A: mov     [rbp-50h], rax
 * 000000014043459E: xor     ecx, ecx
 * 00000001404345A0: call    sub_14020D230
 * 00000001404345A5: mov     rax, [rbp-50h]
 * 00000001404345A9: mov     rcx, gs:188h
 * 00000001404345B2: test    dword ptr [rcx], 8000000h
 * 00000001404345B8: jz      short loc_1404345F9
 * 00000001404345BA: mov     [rbp-50h], rax
 * 00000001404345BE: xor     eax, eax
 * 00000001404345C0: mov     [rbp-48h], rax
 * 00000001404345C4: mov     [rbp-40h], rax
 * 00000001404345C8: mov     [rbp-38h], rax
 * 00000001404345CC: mov     [rbp-30h], rax
 * 00000001404345D0: mov     [rbp-28h], rax
 * 00000001404345D4: mov     [rbp-20h], rax
 * 00000001404345D8: pxor    xmm0, xmm0
 * 00000001404345DC: movaps  xmmword ptr [rbp-10h], xmm0
 * 00000001404345E0: movaps  xmmword ptr [rbp+0], xmm0
 * 00000001404345E4: movaps  xmmword ptr [rbp+10h], xmm0
 * 00000001404345E8: movaps  xmmword ptr [rbp+20h], xmm0
 * 00000001404345EC: movaps  xmmword ptr [rbp+30h], xmm0
 * 00000001404345F0: movaps  xmmword ptr [rbp+40h], xmm0
 * 00000001404345F4: call    sub_1404206B0
 * 00000001404345F9: mov     rcx, gs:188h
 * 0000000140434602: test    dword ptr [rcx], 10000h
 * 0000000140434608: jz      short loc_140434626
 * 000000014043460A: mov     [rbp-50h], rax
 * 000000014043460E: test    byte ptr [rcx+2], 1
 * 0000000140434612: jz      short loc_140434622
 * 0000000140434614: call    sub_140571820
 * 0000000140434619: mov     rcx, gs:188h
 * 0000000140434622: mov     rax, [rbp-50h]
 * 0000000140434626: ldmxcsr dword ptr [rbp-54h]
 * 000000014043462A: xor     r10, r10
 * 000000014043462D: cmp     word ptr [rbp+80h], 0
 * 0000000140434635: jz      short loc_140434678
 * 0000000140434637: mov     [rbp-50h], rax
 * 000000014043463B: call    sub_14041F8A0
 * 0000000140434640: mov     rax, gs:188h
 * 0000000140434649: mov     rax, [rax+0B8h]
 * 0000000140434650: mov     rax, [rax+3D8h]
 * 0000000140434657: or      rax, rax
 * 000000014043465A: jz      short loc_140434674
 * 000000014043465C: cmp     word ptr [rbp+0F0h], 33h ; '3'
 * 0000000140434664: jnz     short loc_140434674
 * 0000000140434666: mov     r10, [rbp+0E8h]
 * 000000014043466D: mov     [rbp+0E8h], rax
 * 0000000140434674: mov     rax, [rbp-50h]
 * 0000000140434678: mov     rcx, gs:188h
 * 0000000140434681: bt      dword ptr [rcx+74h], 16h
 * 0000000140434686: jnb     short loc_1404346B2
 * 0000000140434688: xor     ecx, ecx
 * 000000014043468A: rdsspq  rcx
 * 000000014043468F: mov     r8, gs:9828h
 * 0000000140434698: add     r8, 8
 * 000000014043469C: cmp     rcx, r8
 * 000000014043469F: jnz     short loc_1404346B2
 * 00000001404346A1: mov     rcx, gs:9820h
 * 00000001404346AA: rstorssp qword ptr [rcx]
 * 00000001404346AE: saveprevssp
 * 00000001404346B2: mov     [rbp-50h], rax
 * 00000001404346B6: mov     byte ptr gs:856h, 0
 * 00000001404346BF: movzx   eax, word ptr gs:86Ah
 * 00000001404346C8: cmp     gs:864h, ax
 * 00000001404346D1: jz      short loc_1404346E5
 * 00000001404346D3: mov     gs:864h, ax
 * 00000001404346DC: mov     ecx, 48h ; 'H'
 * 00000001404346E1: xor     edx, edx
 * 00000001404346E3: wrmsr
 * 00000001404346E5: btr     word ptr gs:860h, 2
 * 00000001404346F0: jnb     short loc_140434700
 * 00000001404346F2: mov     eax, 1
 * 00000001404346F7: xor     edx, edx
 * 00000001404346F9: mov     ecx, 49h ; 'I'
 * 00000001404346FE: wrmsr
 * 0000000140434700: btr     word ptr gs:860h, 5
 * 000000014043470B: jnb     loc_140434848
 * 0000000140434711: call    loc_140434824
 * 0000000140434716: add     rsp, 8
 * 000000014043471A: call    loc_14043482D
 * 000000014043471F: add     rsp, 8
 * 0000000140434723: call    loc_140434716
 * 0000000140434728: add     rsp, 8
 * 000000014043472C: call    loc_14043471F
 * 0000000140434731: add     rsp, 8
 * 0000000140434735: call    loc_140434728
 * 000000014043473A: add     rsp, 8
 * 000000014043473E: call    loc_140434731
 * 0000000140434743: add     rsp, 8
 * 0000000140434747: call    loc_14043473A
 * 000000014043474C: add     rsp, 8
 * 0000000140434750: call    loc_140434743
 * 0000000140434755: add     rsp, 8
 * 0000000140434759: call    loc_14043474C
 * 000000014043475E: add     rsp, 8
 * 0000000140434762: call    loc_140434755
 * 0000000140434767: add     rsp, 8
 * 000000014043476B: call    loc_14043475E
 * 0000000140434770: add     rsp, 8
 * 0000000140434774: call    loc_140434767
 * 0000000140434779: add     rsp, 8
 * 000000014043477D: call    loc_140434770
 * 0000000140434782: add     rsp, 8
 * 0000000140434786: call    loc_140434779
 * 000000014043478B: add     rsp, 8
 * 000000014043478F: call    loc_140434782
 * 0000000140434794: add     rsp, 8
 * 0000000140434798: call    loc_14043478B
 * 000000014043479D: add     rsp, 8
 * 00000001404347A1: call    loc_140434794
 * 00000001404347A6: add     rsp, 8
 * 00000001404347AA: call    loc_14043479D
 * 00000001404347AF: add     rsp, 8
 * 00000001404347B3: call    loc_1404347A6
 * 00000001404347B8: add     rsp, 8
 * 00000001404347BC: call    loc_1404347AF
 * 00000001404347C1: add     rsp, 8
 * 00000001404347C5: call    loc_1404347B8
 * 00000001404347CA: add     rsp, 8
 * 00000001404347CE: call    loc_1404347C1
 * 00000001404347D3: add     rsp, 8
 * 00000001404347D7: call    loc_1404347CA
 * 00000001404347DC: add     rsp, 8
 * 00000001404347E0: call    loc_1404347D3
 * 00000001404347E5: add     rsp, 8
 * 00000001404347E9: call    loc_1404347DC
 * 00000001404347EE: add     rsp, 8
 * 00000001404347F2: call    loc_1404347E5
 * 00000001404347F7: add     rsp, 8
 * 00000001404347FB: call    loc_1404347EE
 * 0000000140434800: add     rsp, 8
 * 0000000140434804: call    loc_1404347F7
 * 0000000140434809: add     rsp, 8
 * 000000014043480D: call    loc_140434800
 * 0000000140434812: add     rsp, 8
 * 0000000140434816: call    loc_140434809
 * 000000014043481B: add     rsp, 8
 * 000000014043481F: call    loc_140434812
 * 0000000140434824: add     rsp, 8
 * 0000000140434828: call    loc_14043481B
 * 000000014043482D: add     rsp, 8
 * 0000000140434831: mov     eax, 0DADAh
 * 0000000140434836: test    byte ptr gs:862h, 8
 * 000000014043483F: jz      short loc_140434848
 * 0000000140434841: mov     al, 20h ; ' '
 * 0000000140434843: incsspq rax
 * 0000000140434848: test    word ptr gs:860h, 80h
 * 0000000140434853: jz      short loc_140434861
 * 0000000140434855: xor     eax, eax
 * 0000000140434857: xor     edx, edx
 * 0000000140434859: mov     ecx, 1
 * 000000014043485E: div     rcx
 * 0000000140434861: mov     rax, [rbp-50h]
 * 0000000140434865: mov     r8, [rbp+100h]
 * 000000014043486C: mov     r9, [rbp+0D8h]
 * 0000000140434873: xor     edx, edx
 * 0000000140434875: pxor    xmm0, xmm0
 * 0000000140434879: pxor    xmm1, xmm1
 * 000000014043487D: pxor    xmm2, xmm2
 * 0000000140434881: pxor    xmm3, xmm3
 * 0000000140434885: pxor    xmm4, xmm4
 * 0000000140434889: pxor    xmm5, xmm5
 * 000000014043488D: mov     rcx, [rbp+0E8h]
 * 0000000140434894: mov     r11, [rbp+0F8h]
 * 000000014043489B: test    cs:byte_140E01840, 1
 * 00000001404348A2: jnz     sub_140AB6DC0
 * 00000001404348A8: mov     rbp, r9
 * 00000001404348AB: mov     rsp, r8
 * 00000001404348AE: xor     r9d, r9d
 * 00000001404348B1: rdsspq  r9
 * 00000001404348B6: test    r9, r9
 * 00000001404348B9: jz      short loc_1404348C3
 * 00000001404348BB: clrssbsy qword ptr [r9]
 * 00000001404348C0: xor     r9d, r9d
 * 00000001404348C3: test    word ptr gs:860h, 100h
 * 00000001404348CE: jz      short loc_1404348D9
 * 00000001404348D0: verw    word ptr gs:0A02Ah
 * 00000001404348D9: swapgs
 * 00000001404348DC: sysret
 * 00000001404348DF: mov     rdx, [rbp+0B8h]
 * 00000001404348E6: mov     [r11+90h], rdx
 * 00000001404348ED: mov     dl, [rbp-58h]
 * 00000001404348F0: mov     [r11+232h], dl
 * 00000001404348F7: cli
 * 00000001404348F8: mov     rsp, rbp
 * 00000001404348FB: mov     rbp, [rbp+0D8h]
 * 0000000140434902: mov     rsp, [rsp+90h+arg_68]
 * 000000014043490A: sti
 * 000000014043490B: retn
 * 000000014043490C: mov     r11, gs:188h
 * 0000000140434915: mov     rcx, cr8
 * 0000000140434919: or      cl, [r11+24Ah]
 * 0000000140434920: or      ecx, [r11+1E4h]
 * 0000000140434927: jnz     loc_140434C85
 * 000000014043492D: cli
 * 000000014043492E: mov     [rbp-50h], rax
 * 0000000140434932: mov     rcx, gs:188h
 * 000000014043493B: test    byte ptr [rcx+0C2h], 3
 * 0000000140434942: jz      short loc_14043495F
 * 0000000140434944: mov     ecx, 1
 * 0000000140434949: mov     cr8, rcx
 * 000000014043494D: sti
 * 000000014043494E: call    sub_140425700
 * 0000000140434953: mov     ecx, 0
 * 0000000140434958: mov     cr8, rcx
 * 000000014043495C: cli
 * 000000014043495D: jmp     short loc_140434932
 * 000000014043495F: test    byte ptr gs:86Ch, 2
 * 0000000140434968: jz      short loc_140434971
 * 000000014043496A: xor     ecx, ecx
 * 000000014043496C: call    sub_14020D230
 * 0000000140434971: mov     rcx, gs:188h
 * 000000014043497A: test    dword ptr [rcx], 8000000h
 * 0000000140434980: jz      short loc_140434987
 * 0000000140434982: call    sub_1404206B0
 * 0000000140434987: mov     rcx, gs:188h
 * 0000000140434990: test    byte ptr [rcx+2], 1
 * 0000000140434994: jz      short loc_1404349A4
 * 0000000140434996: call    sub_140571820
 * 000000014043499B: mov     rcx, gs:188h
 * 00000001404349A4: cmp     word ptr [rbp+80h], 0
 * 00000001404349AC: jz      short loc_1404349B3
 * 00000001404349AE: call    sub_14041F8A0
 * 00000001404349B3: mov     rcx, gs:188h
 * 00000001404349BC: bt      dword ptr [rcx+74h], 16h
 * 00000001404349C1: jnb     short loc_1404349ED
 * 00000001404349C3: xor     ecx, ecx
 * 00000001404349C5: rdsspq  rcx
 * 00000001404349CA: mov     r8, gs:9828h
 * 00000001404349D3: add     r8, 8
 * 00000001404349D7: cmp     rcx, r8
 * 00000001404349DA: jnz     short loc_1404349ED
 * 00000001404349DC: mov     rcx, gs:9820h
 * 00000001404349E5: rstorssp qword ptr [rcx]
 * 00000001404349E9: saveprevssp
 * 00000001404349ED: mov     byte ptr gs:856h, 0
 * 00000001404349F6: movzx   eax, word ptr gs:86Ah
 * 00000001404349FF: cmp     gs:864h, ax
 * 0000000140434A08: jz      short loc_140434A1C
 * 0000000140434A0A: mov     gs:864h, ax
 * 0000000140434A13: mov     ecx, 48h ; 'H'
 * 0000000140434A18: xor     edx, edx
 * 0000000140434A1A: wrmsr
 * 0000000140434A1C: btr     word ptr gs:860h, 2
 * 0000000140434A27: jnb     short loc_140434A37
 * 0000000140434A29: mov     eax, 1
 * 0000000140434A2E: xor     edx, edx
 * 0000000140434A30: mov     ecx, 49h ; 'I'
 * 0000000140434A35: wrmsr
 * 0000000140434A37: btr     word ptr gs:860h, 5
 * 0000000140434A42: jnb     loc_140434B7F
 * 0000000140434A48: call    loc_140434B5B
 * 0000000140434A4D: add     rsp, 8
 * 0000000140434A51: call    loc_140434B64
 * 0000000140434A56: add     rsp, 8
 * 0000000140434A5A: call    loc_140434A4D
 * 0000000140434A5F: add     rsp, 8
 * 0000000140434A63: call    loc_140434A56
 * 0000000140434A68: add     rsp, 8
 * 0000000140434A6C: call    loc_140434A5F
 * 0000000140434A71: add     rsp, 8
 * 0000000140434A75: call    loc_140434A68
 * 0000000140434A7A: add     rsp, 8
 * 0000000140434A7E: call    loc_140434A71
 * 0000000140434A83: add     rsp, 8
 * 0000000140434A87: call    loc_140434A7A
 * 0000000140434A8C: add     rsp, 8
 * 0000000140434A90: call    loc_140434A83
 * 0000000140434A95: add     rsp, 8
 * 0000000140434A99: call    loc_140434A8C
 * 0000000140434A9E: add     rsp, 8
 * 0000000140434AA2: call    loc_140434A95
 * 0000000140434AA7: add     rsp, 8
 * 0000000140434AAB: call    loc_140434A9E
 * 0000000140434AB0: add     rsp, 8
 * 0000000140434AB4: call    loc_140434AA7
 * 0000000140434AB9: add     rsp, 8
 * 0000000140434ABD: call    loc_140434AB0
 * 0000000140434AC2: add     rsp, 8
 * 0000000140434AC6: call    loc_140434AB9
 * 0000000140434ACB: add     rsp, 8
 * 0000000140434ACF: call    loc_140434AC2
 * 0000000140434AD4: add     rsp, 8
 * 0000000140434AD8: call    loc_140434ACB
 * 0000000140434ADD: add     rsp, 8
 * 0000000140434AE1: call    loc_140434AD4
 * 0000000140434AE6: add     rsp, 8
 * 0000000140434AEA: call    loc_140434ADD
 * 0000000140434AEF: add     rsp, 8
 * 0000000140434AF3: call    loc_140434AE6
 * 0000000140434AF8: add     rsp, 8
 * 0000000140434AFC: call    loc_140434AEF
 * 0000000140434B01: add     rsp, 8
 * 0000000140434B05: call    loc_140434AF8
 * 0000000140434B0A: add     rsp, 8
 * 0000000140434B0E: call    loc_140434B01
 * 0000000140434B13: add     rsp, 8
 * 0000000140434B17: call    loc_140434B0A
 * 0000000140434B1C: add     rsp, 8
 * 0000000140434B20: call    loc_140434B13
 * 0000000140434B25: add     rsp, 8
 * 0000000140434B29: call    loc_140434B1C
 * 0000000140434B2E: add     rsp, 8
 * 0000000140434B32: call    loc_140434B25
 * 0000000140434B37: add     rsp, 8
 * 0000000140434B3B: call    loc_140434B2E
 * 0000000140434B40: add     rsp, 8
 * 0000000140434B44: call    loc_140434B37
 * 0000000140434B49: add     rsp, 8
 * 0000000140434B4D: call    loc_140434B40
 * 0000000140434B52: add     rsp, 8
 * 0000000140434B56: call    loc_140434B49
 * 0000000140434B5B: add     rsp, 8
 * 0000000140434B5F: call    loc_140434B52
 * 0000000140434B64: add     rsp, 8
 * 0000000140434B68: mov     eax, 0DADAh
 * 0000000140434B6D: test    byte ptr gs:862h, 8
 * 0000000140434B76: jz      short loc_140434B7F
 * 0000000140434B78: mov     al, 20h ; ' '
 * 0000000140434B7A: incsspq rax
 * 0000000140434B7F: test    word ptr gs:860h, 80h
 * 0000000140434B8A: jz      short loc_140434B98
 * 0000000140434B8C: xor     eax, eax
 * 0000000140434B8E: xor     edx, edx
 * 0000000140434B90: mov     ecx, 1
 * 0000000140434B95: div     rcx
 * 0000000140434B98: ldmxcsr dword ptr [rbp-54h]
 * 0000000140434B9C: movaps  xmm0, xmmword ptr [rbp-10h]
 * 0000000140434BA0: movaps  xmm1, xmmword ptr [rbp+0]
 * 0000000140434BA4: movaps  xmm2, xmmword ptr [rbp+10h]
 * 0000000140434BA8: movaps  xmm3, xmmword ptr [rbp+20h]
 * 0000000140434BAC: movaps  xmm4, xmmword ptr [rbp+30h]
 * 0000000140434BB0: movaps  xmm5, xmmword ptr [rbp+40h]
 * 0000000140434BB4: mov     r11, [rbp-20h]
 * 0000000140434BB8: mov     r10, [rbp-28h]
 * 0000000140434BBC: mov     r9, [rbp-30h]
 * 0000000140434BC0: mov     r8, [rbp-38h]
 * 0000000140434BC4: mov     rdx, [rbp-40h]
 * 0000000140434BC8: mov     rcx, [rbp-48h]
 * 0000000140434BCC: mov     rax, [rbp-50h]
 * 0000000140434BD0: mov     rsi, [rbp+0D0h]
 * 0000000140434BD7: mov     rdi, [rbp+0C8h]
 * 0000000140434BDE: mov     rbx, [rbp+0C0h]
 * 0000000140434BE5: mov     rsp, rbp
 * 0000000140434BE8: mov     rbp, [rbp+0D8h]
 * 0000000140434BEF: add     rsp, 0E8h
 * 0000000140434BF6: test    cs:byte_140E01840, 1
 * 0000000140434BFD: jz      short loc_140434C04
 * 0000000140434BFF: jmp     sub_140AB6B80
 * 0000000140434C04: test    word ptr gs:860h, 100h
 * 0000000140434C0F: jz      short loc_140434C16
 * 0000000140434C11: verw    [rsp-158h+arg_170]
 * 0000000140434C16: swapgs
 * 0000000140434C19: iretq
 * 0000000140434C1B: cmp     edi, 20h ; ' '
 * 0000000140434C1E: jnz     short loc_140434C7B
 * 0000000140434C20: mov     [rbp-80h], eax
 * 0000000140434C23: mov     [rbp-78h], rcx
 * 0000000140434C27: mov     [rbp-70h], rdx
 * 0000000140434C2B: mov     [rbp-68h], r8
 * 0000000140434C2F: mov     [rbp-60h], r9
 * 0000000140434C33: call    sub_140424C80
 * 0000000140434C38: or      eax, eax
 * 0000000140434C3A: mov     eax, [rbp-80h]
 * 0000000140434C3D: mov     rcx, [rbp-78h]
 * 0000000140434C41: mov     rdx, [rbp-70h]
 * 0000000140434C45: mov     r8, [rbp-68h]
 * 0000000140434C49: mov     r9, [rbp-60h]
 * 0000000140434C4D: mov     [rbx+90h], rsp
 * 0000000140434C54: jz      loc_140434354
 * 0000000140434C5A: lea     rdi, xmmword_140D06FA0
 * 0000000140434C61: mov     esi, [rdi+10h]
 * 0000000140434C64: mov     rdi, [rdi]
 * 0000000140434C67: cmp     eax, esi
 * 0000000140434C69: jnb     short loc_140434C7B
 * 0000000140434C6B: lea     rdi, [rdi+rsi*4]
 * 0000000140434C6F: movsx   eax, byte ptr [rdi+rax]
 * 0000000140434C73: or      eax, eax
 * 0000000140434C75: jle     loc_1404344E0
 * 0000000140434C7B: mov     eax, 0C000001Ch
 * 0000000140434C80: jmp     loc_1404344E0
 * 0000000140434C85: mov     ecx, 4Ah ; 'J'
 * 0000000140434C8A: xor     r9d, r9d
 * 0000000140434C8D: mov     r8, cr8
 * 0000000140434C91: or      r8d, r8d
 * 0000000140434C94: jnz     short loc_140434CAA
 * 0000000140434C96: mov     ecx, 1
 * 0000000140434C9B: movzx   r8d, byte ptr [r11+24Ah]
 * 0000000140434CA3: mov     r9d, [r11+1E4h]
 * 0000000140434CAA: mov     rdx, [rbp+0E8h]
 * 0000000140434CB1: mov     r10, rbp
 * 0000000140434CB4: call    sub_140434DC0
 * 0000000140434CB9: sub     rsp, 50h
 * 0000000140434CBD: mov     [rsp+0E0h+var_C0], rcx
 * 0000000140434CC2: mov     [rsp+0E0h+var_B8], rdx
 * 0000000140434CC7: mov     [rsp+0E0h+var_B0], r8
 * 0000000140434CCC: mov     [rsp+0E0h+var_A8], r9
 * 0000000140434CD1: mov     [rsp+0E0h+var_A0], r10
 * 0000000140434CD6: mov     rcx, r10
 * 0000000140434CD9: mov     rdx, rsp
 * 0000000140434CDC: add     rdx, 20h ; ' '
 * 0000000140434CE0: mov     r8, 4
 * 0000000140434CE7: mov     r9, rsp
 * 0000000140434CEA: add     r9, 70h ; 'p'
 * 0000000140434CEE: call    sub_1409630B0
 * 0000000140434CF3: mov     [rbp-50h], rax
 * 0000000140434CF7: mov     rcx, [rsp+0E0h+var_C0]
 * 0000000140434CFC: mov     rdx, [rsp+0E0h+var_B8]
 * 0000000140434D01: mov     r8, [rsp+0E0h+var_B0]
 * 0000000140434D06: mov     r9, [rsp+0E0h+var_A8]
 * 0000000140434D0B: mov     r10, [rsp+0E0h+var_A0]
 * 0000000140434D10: add     rsp, 50h
 * 0000000140434D14: mov     rax, r10
 * 0000000140434D17: call    rax
 * 0000000140434D19: nop     dword ptr [rax]
 * 0000000140434D1C: mov     rcx, [rbp-50h]
 * 0000000140434D20: mov     rdx, rax
 * 0000000140434D23: call    sub_1409631D0
 * 0000000140434D28: jmp     loc_1404344D8
 * 0000000140434D2D: sub     rsp, 50h
 * 0000000140434D31: mov     [rsp+0E0h+var_C0], rcx
 * 0000000140434D36: mov     [rsp+0E0h+var_B8], rdx
 * 0000000140434D3B: mov     [rsp+0E0h+var_B0], r8
 * 0000000140434D40: mov     [rsp+0E0h+var_A8], r9
 * 0000000140434D45: mov     [rsp+0E0h+var_A0], r10
 * 0000000140434D4A: mov     rcx, r10
 * 0000000140434D4D: call    sub_140630340
 * 0000000140434D52: mov     rcx, [rsp+0E0h+var_C0]
 * 0000000140434D57: mov     rdx, [rsp+0E0h+var_B8]
 * 0000000140434D5C: mov     r8, [rsp+0E0h+var_B0]
 * 0000000140434D61: mov     r9, [rsp+0E0h+var_A8]
 * 0000000140434D66: mov     r10, [rsp+0E0h+var_A0]
 * 0000000140434D6B: add     rsp, 50h
 * 0000000140434D6F: mov     rax, r10
 * 0000000140434D72: call    rax
 * 0000000140434D74: nop     dword ptr [rax]
 * 0000000140434D77: mov     rcx, rax
 * 0000000140434D7A: call    sub_1406303E0
 * 0000000140434D7F: jmp     loc_1404344D8
 * 0000000140434D84: retn
 */
