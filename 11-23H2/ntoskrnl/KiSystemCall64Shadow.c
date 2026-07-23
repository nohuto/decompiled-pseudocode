/*
 * XREFs of KiSystemCall64Shadow @ 0x140AF81C0
 * Callers:
 *     <none>
 * Callees:
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140435700 (KiFlushBhbDuringTrapEntryOrExit.c)
 *     KiSystemCall64Shadow @ 0x140AF81C0 (KiSystemCall64Shadow.c)
 */

/*
 * Hex-Rays decompilation failed for KiSystemCall64Shadow @ 0x140AF81C0
 * Reason: Hex-Rays returned no pseudocode for 0x140AF81C0
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140AF81C0: swapgs
 * 0000000140AF81C3: mov     gs:0A010h, rsp
 * 0000000140AF81CC: mov     rsp, gs:0A000h
 * 0000000140AF81D5: bt      dword ptr gs:0A018h, 1
 * 0000000140AF81DF: jb      short loc_140AF81E4
 * 0000000140AF81E1: mov     cr3, rsp
 * 0000000140AF81E4: mov     rsp, gs:0A008h
 * 0000000140AF81ED: push    2Bh ; '+'
 * 0000000140AF81EF: push    qword ptr gs:0A010h
 * 0000000140AF81F7: push    r11
 * 0000000140AF81F9: push    33h ; '3'
 * 0000000140AF81FB: push    rcx
 * 0000000140AF81FC: mov     rcx, gs:95A8h
 * 0000000140AF8205: test    rcx, rcx
 * 0000000140AF8208: jz      short loc_140AF8216
 * 0000000140AF820A: setssbsy
 * 0000000140AF820E: rstorssp qword ptr [rcx]
 * 0000000140AF8212: saveprevssp
 * 0000000140AF8216: mov     rcx, r10
 * 0000000140AF8219: sub     rsp, 8
 * 0000000140AF821D: push    rbp
 * 0000000140AF821E: sub     rsp, 158h
 * 0000000140AF8225: lea     rbp, [rsp+190h+var_110]
 * 0000000140AF822D: mov     [rbp+0C0h], rbx
 * 0000000140AF8234: mov     [rbp+0C8h], rdi
 * 0000000140AF823B: mov     [rbp+0D0h], rsi
 * 0000000140AF8242: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 0000000140AF8249: jz      short loc_140AF8257
 * 0000000140AF824B: test    byte ptr [rbp+0F0h], 1
 * 0000000140AF8252: jz      short loc_140AF8257
 * 0000000140AF8254: stac
 * 0000000140AF8257: mov     [rbp-50h], rax
 * 0000000140AF825B: mov     [rbp-48h], rcx
 * 0000000140AF825F: mov     [rbp-40h], rdx
 * 0000000140AF8263: mov     rcx, gs:188h
 * 0000000140AF826C: mov     rcx, [rcx+220h]
 * 0000000140AF8273: mov     rcx, [rcx+9E0h]
 * 0000000140AF827A: mov     gs:858h, rcx
 * 0000000140AF8283: mov     cx, gs:850h
 * 0000000140AF828C: mov     gs:852h, cx
 * 0000000140AF8295: mov     cx, gs:860h
 * 0000000140AF829E: mov     gs:854h, cx
 * 0000000140AF82A7: movzx   eax, word ptr gs:866h
 * 0000000140AF82B0: cmp     gs:864h, ax
 * 0000000140AF82B9: jz      short loc_140AF82CD
 * 0000000140AF82BB: mov     gs:864h, ax
 * 0000000140AF82C4: mov     ecx, 48h ; 'H'
 * 0000000140AF82C9: xor     edx, edx
 * 0000000140AF82CB: wrmsr
 * 0000000140AF82CD: movzx   edx, word ptr gs:860h
 * 0000000140AF82D6: test    edx, 8
 * 0000000140AF82DC: jz      short loc_140AF82F5
 * 0000000140AF82DE: mov     eax, 1
 * 0000000140AF82E3: xor     edx, edx
 * 0000000140AF82E5: mov     ecx, 49h ; 'I'
 * 0000000140AF82EA: wrmsr
 * 0000000140AF82EC: movzx   edx, word ptr gs:860h
 * 0000000140AF82F5: test    edx, 2
 * 0000000140AF82FB: jz      loc_140AF8438
 * 0000000140AF8301: call    loc_140AF8414
 * 0000000140AF8306: add     rsp, 8
 * 0000000140AF830A: call    loc_140AF841D
 * 0000000140AF830F: add     rsp, 8
 * 0000000140AF8313: call    loc_140AF8306
 * 0000000140AF8318: add     rsp, 8
 * 0000000140AF831C: call    loc_140AF830F
 * 0000000140AF8321: add     rsp, 8
 * 0000000140AF8325: call    loc_140AF8318
 * 0000000140AF832A: add     rsp, 8
 * 0000000140AF832E: call    loc_140AF8321
 * 0000000140AF8333: add     rsp, 8
 * 0000000140AF8337: call    loc_140AF832A
 * 0000000140AF833C: add     rsp, 8
 * 0000000140AF8340: call    loc_140AF8333
 * 0000000140AF8345: add     rsp, 8
 * 0000000140AF8349: call    loc_140AF833C
 * 0000000140AF834E: add     rsp, 8
 * 0000000140AF8352: call    loc_140AF8345
 * 0000000140AF8357: add     rsp, 8
 * 0000000140AF835B: call    loc_140AF834E
 * 0000000140AF8360: add     rsp, 8
 * 0000000140AF8364: call    loc_140AF8357
 * 0000000140AF8369: add     rsp, 8
 * 0000000140AF836D: call    loc_140AF8360
 * 0000000140AF8372: add     rsp, 8
 * 0000000140AF8376: call    loc_140AF8369
 * 0000000140AF837B: add     rsp, 8
 * 0000000140AF837F: call    loc_140AF8372
 * 0000000140AF8384: add     rsp, 8
 * 0000000140AF8388: call    loc_140AF837B
 * 0000000140AF838D: add     rsp, 8
 * 0000000140AF8391: call    loc_140AF8384
 * 0000000140AF8396: add     rsp, 8
 * 0000000140AF839A: call    loc_140AF838D
 * 0000000140AF839F: add     rsp, 8
 * 0000000140AF83A3: call    loc_140AF8396
 * 0000000140AF83A8: add     rsp, 8
 * 0000000140AF83AC: call    loc_140AF839F
 * 0000000140AF83B1: add     rsp, 8
 * 0000000140AF83B5: call    loc_140AF83A8
 * 0000000140AF83BA: add     rsp, 8
 * 0000000140AF83BE: call    loc_140AF83B1
 * 0000000140AF83C3: add     rsp, 8
 * 0000000140AF83C7: call    loc_140AF83BA
 * 0000000140AF83CC: add     rsp, 8
 * 0000000140AF83D0: call    loc_140AF83C3
 * 0000000140AF83D5: add     rsp, 8
 * 0000000140AF83D9: call    loc_140AF83CC
 * 0000000140AF83DE: add     rsp, 8
 * 0000000140AF83E2: call    loc_140AF83D5
 * 0000000140AF83E7: add     rsp, 8
 * 0000000140AF83EB: call    loc_140AF83DE
 * 0000000140AF83F0: add     rsp, 8
 * 0000000140AF83F4: call    loc_140AF83E7
 * 0000000140AF83F9: add     rsp, 8
 * 0000000140AF83FD: call    loc_140AF83F0
 * 0000000140AF8402: add     rsp, 8
 * 0000000140AF8406: call    loc_140AF83F9
 * 0000000140AF840B: add     rsp, 8
 * 0000000140AF840F: call    loc_140AF8402
 * 0000000140AF8414: add     rsp, 8
 * 0000000140AF8418: call    loc_140AF840B
 * 0000000140AF841D: add     rsp, 8
 * 0000000140AF8421: mov     eax, 0DADAh
 * 0000000140AF8426: test    byte ptr gs:862h, 8
 * 0000000140AF842F: jz      short loc_140AF8438
 * 0000000140AF8431: mov     al, 20h ; ' '
 * 0000000140AF8433: incsspq rax
 * 0000000140AF8438: test    edx, 200h
 * 0000000140AF843E: jz      short loc_140AF8445
 * 0000000140AF8440: call    KiFlushBhbDuringTrapEntryOrExit
 * 0000000140AF8445: lfence
 * 0000000140AF8448: mov     byte ptr gs:856h, 0
 * 0000000140AF8451: jmp     KiSystemServiceUser
 * 0000000140AF8456: retn
 */
