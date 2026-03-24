/*
 * XREFs of KiSystemCall64Shadow @ 0x140AF91C0
 * Callers:
 *     <none>
 * Callees:
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140434D00 (KiFlushBhbDuringTrapEntryOrExit.c)
 *     KiSystemCall64Shadow @ 0x140AF91C0 (KiSystemCall64Shadow.c)
 */

/*
 * Hex-Rays decompilation failed for KiSystemCall64Shadow @ 0x140AF91C0
 * Reason: Hex-Rays returned no pseudocode for 0x140AF91C0
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140AF91C0: swapgs
 * 0000000140AF91C3: mov     gs:0A010h, rsp
 * 0000000140AF91CC: mov     rsp, gs:0A000h
 * 0000000140AF91D5: bt      dword ptr gs:0A018h, 1
 * 0000000140AF91DF: jb      short loc_140AF91E4
 * 0000000140AF91E1: mov     cr3, rsp
 * 0000000140AF91E4: mov     rsp, gs:0A008h
 * 0000000140AF91ED: push    2Bh ; '+'
 * 0000000140AF91EF: push    qword ptr gs:0A010h
 * 0000000140AF91F7: push    r11
 * 0000000140AF91F9: push    33h ; '3'
 * 0000000140AF91FB: push    rcx
 * 0000000140AF91FC: mov     rcx, gs:95A8h
 * 0000000140AF9205: test    rcx, rcx
 * 0000000140AF9208: jz      short loc_140AF9216
 * 0000000140AF920A: setssbsy
 * 0000000140AF920E: rstorssp qword ptr [rcx]
 * 0000000140AF9212: saveprevssp
 * 0000000140AF9216: mov     rcx, r10
 * 0000000140AF9219: sub     rsp, 8
 * 0000000140AF921D: push    rbp
 * 0000000140AF921E: sub     rsp, 158h
 * 0000000140AF9225: lea     rbp, [rsp+190h+var_110]
 * 0000000140AF922D: mov     [rbp+0C0h], rbx
 * 0000000140AF9234: mov     [rbp+0C8h], rdi
 * 0000000140AF923B: mov     [rbp+0D0h], rsi
 * 0000000140AF9242: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 0000000140AF9249: jz      short loc_140AF9257
 * 0000000140AF924B: test    byte ptr [rbp+0F0h], 1
 * 0000000140AF9252: jz      short loc_140AF9257
 * 0000000140AF9254: stac
 * 0000000140AF9257: mov     [rbp-50h], rax
 * 0000000140AF925B: mov     [rbp-48h], rcx
 * 0000000140AF925F: mov     [rbp-40h], rdx
 * 0000000140AF9263: mov     rcx, gs:188h
 * 0000000140AF926C: mov     rcx, [rcx+220h]
 * 0000000140AF9273: mov     rcx, [rcx+9E0h]
 * 0000000140AF927A: mov     gs:858h, rcx
 * 0000000140AF9283: mov     cx, gs:850h
 * 0000000140AF928C: mov     gs:852h, cx
 * 0000000140AF9295: mov     cx, gs:860h
 * 0000000140AF929E: mov     gs:854h, cx
 * 0000000140AF92A7: movzx   eax, word ptr gs:866h
 * 0000000140AF92B0: cmp     gs:864h, ax
 * 0000000140AF92B9: jz      short loc_140AF92CD
 * 0000000140AF92BB: mov     gs:864h, ax
 * 0000000140AF92C4: mov     ecx, 48h ; 'H'
 * 0000000140AF92C9: xor     edx, edx
 * 0000000140AF92CB: wrmsr
 * 0000000140AF92CD: movzx   edx, word ptr gs:860h
 * 0000000140AF92D6: test    edx, 8
 * 0000000140AF92DC: jz      short loc_140AF92F5
 * 0000000140AF92DE: mov     eax, 1
 * 0000000140AF92E3: xor     edx, edx
 * 0000000140AF92E5: mov     ecx, 49h ; 'I'
 * 0000000140AF92EA: wrmsr
 * 0000000140AF92EC: movzx   edx, word ptr gs:860h
 * 0000000140AF92F5: test    edx, 2
 * 0000000140AF92FB: jz      loc_140AF9438
 * 0000000140AF9301: call    loc_140AF9414
 * 0000000140AF9306: add     rsp, 8
 * 0000000140AF930A: call    loc_140AF941D
 * 0000000140AF930F: add     rsp, 8
 * 0000000140AF9313: call    loc_140AF9306
 * 0000000140AF9318: add     rsp, 8
 * 0000000140AF931C: call    loc_140AF930F
 * 0000000140AF9321: add     rsp, 8
 * 0000000140AF9325: call    loc_140AF9318
 * 0000000140AF932A: add     rsp, 8
 * 0000000140AF932E: call    loc_140AF9321
 * 0000000140AF9333: add     rsp, 8
 * 0000000140AF9337: call    loc_140AF932A
 * 0000000140AF933C: add     rsp, 8
 * 0000000140AF9340: call    loc_140AF9333
 * 0000000140AF9345: add     rsp, 8
 * 0000000140AF9349: call    loc_140AF933C
 * 0000000140AF934E: add     rsp, 8
 * 0000000140AF9352: call    loc_140AF9345
 * 0000000140AF9357: add     rsp, 8
 * 0000000140AF935B: call    loc_140AF934E
 * 0000000140AF9360: add     rsp, 8
 * 0000000140AF9364: call    loc_140AF9357
 * 0000000140AF9369: add     rsp, 8
 * 0000000140AF936D: call    loc_140AF9360
 * 0000000140AF9372: add     rsp, 8
 * 0000000140AF9376: call    loc_140AF9369
 * 0000000140AF937B: add     rsp, 8
 * 0000000140AF937F: call    loc_140AF9372
 * 0000000140AF9384: add     rsp, 8
 * 0000000140AF9388: call    loc_140AF937B
 * 0000000140AF938D: add     rsp, 8
 * 0000000140AF9391: call    loc_140AF9384
 * 0000000140AF9396: add     rsp, 8
 * 0000000140AF939A: call    loc_140AF938D
 * 0000000140AF939F: add     rsp, 8
 * 0000000140AF93A3: call    loc_140AF9396
 * 0000000140AF93A8: add     rsp, 8
 * 0000000140AF93AC: call    loc_140AF939F
 * 0000000140AF93B1: add     rsp, 8
 * 0000000140AF93B5: call    loc_140AF93A8
 * 0000000140AF93BA: add     rsp, 8
 * 0000000140AF93BE: call    loc_140AF93B1
 * 0000000140AF93C3: add     rsp, 8
 * 0000000140AF93C7: call    loc_140AF93BA
 * 0000000140AF93CC: add     rsp, 8
 * 0000000140AF93D0: call    loc_140AF93C3
 * 0000000140AF93D5: add     rsp, 8
 * 0000000140AF93D9: call    loc_140AF93CC
 * 0000000140AF93DE: add     rsp, 8
 * 0000000140AF93E2: call    loc_140AF93D5
 * 0000000140AF93E7: add     rsp, 8
 * 0000000140AF93EB: call    loc_140AF93DE
 * 0000000140AF93F0: add     rsp, 8
 * 0000000140AF93F4: call    loc_140AF93E7
 * 0000000140AF93F9: add     rsp, 8
 * 0000000140AF93FD: call    loc_140AF93F0
 * 0000000140AF9402: add     rsp, 8
 * 0000000140AF9406: call    loc_140AF93F9
 * 0000000140AF940B: add     rsp, 8
 * 0000000140AF940F: call    loc_140AF9402
 * 0000000140AF9414: add     rsp, 8
 * 0000000140AF9418: call    loc_140AF940B
 * 0000000140AF941D: add     rsp, 8
 * 0000000140AF9421: mov     eax, 0DADAh
 * 0000000140AF9426: test    byte ptr gs:862h, 8
 * 0000000140AF942F: jz      short loc_140AF9438
 * 0000000140AF9431: mov     al, 20h ; ' '
 * 0000000140AF9433: incsspq rax
 * 0000000140AF9438: test    edx, 200h
 * 0000000140AF943E: jz      short loc_140AF9445
 * 0000000140AF9440: call    KiFlushBhbDuringTrapEntryOrExit
 * 0000000140AF9445: lfence
 * 0000000140AF9448: mov     byte ptr gs:856h, 0
 * 0000000140AF9451: jmp     KiSystemServiceUser
 * 0000000140AF9456: retn
 */
