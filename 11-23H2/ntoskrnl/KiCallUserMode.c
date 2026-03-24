/*
 * XREFs of KiCallUserMode @ 0x140423240
 * Callers:
 *     KeUserModeCallback @ 0x14076E880 (KeUserModeCallback.c)
 * Callees:
 *     KiRestoreDebugRegisterState @ 0x14041EF20 (KiRestoreDebugRegisterState.c)
 *     KiCallUserMode @ 0x140423240 (KiCallUserMode.c)
 */

/*
 * Hex-Rays decompilation failed for KiCallUserMode @ 0x140423240
 * Reason: Hex-Rays returned no pseudocode for 0x140423240
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140423240: sub     rsp, 138h
 * 0000000140423247: lea     rax, [rsp+138h+var_38]
 * 000000014042324F: movaps  [rsp+138h+var_108], xmm6
 * 0000000140423254: movaps  [rsp+138h+var_F8], xmm7
 * 0000000140423259: movaps  [rsp+138h+var_E8], xmm8
 * 000000014042325F: movaps  [rsp+138h+var_D8], xmm9
 * 0000000140423265: movaps  [rsp+138h+var_C8], xmm10
 * 000000014042326B: movaps  xmmword ptr [rax-80h], xmm11
 * 0000000140423270: movaps  xmmword ptr [rax-70h], xmm12
 * 0000000140423275: movaps  xmmword ptr [rax-60h], xmm13
 * 000000014042327A: movaps  xmmword ptr [rax-50h], xmm14
 * 000000014042327F: movaps  xmmword ptr [rax-40h], xmm15
 * 0000000140423284: mov     [rax-8], rbp
 * 0000000140423288: mov     rbp, rsp
 * 000000014042328B: mov     [rax], rbx
 * 000000014042328E: mov     [rax+8], rdi
 * 0000000140423292: mov     [rax+10h], rsi
 * 0000000140423296: mov     [rax+18h], r12
 * 000000014042329A: mov     [rax+20h], r13
 * 000000014042329E: mov     [rax+28h], r14
 * 00000001404232A2: mov     [rax+30h], r15
 * 00000001404232A6: xor     r10, r10
 * 00000001404232A9: xor     r12, r12
 * 00000001404232AC: xor     r13, r13
 * 00000001404232AF: xor     r14, r14
 * 00000001404232B2: xor     r15, r15
 * 00000001404232B5: pxor    xmm6, xmm6
 * 00000001404232B9: pxor    xmm7, xmm7
 * 00000001404232BD: pxor    xmm8, xmm8
 * 00000001404232C2: pxor    xmm9, xmm9
 * 00000001404232C7: pxor    xmm10, xmm10
 * 00000001404232CC: pxor    xmm11, xmm11
 * 00000001404232D1: pxor    xmm12, xmm12
 * 00000001404232D6: pxor    xmm13, xmm13
 * 00000001404232DB: pxor    xmm14, xmm14
 * 00000001404232E0: pxor    xmm15, xmm15
 * 00000001404232E5: mov     [rbp+0D8h], rcx
 * 00000001404232EC: mov     [rbp+0E0h], rdx
 * 00000001404232F3: mov     rbx, gs:188h
 * 00000001404232FC: mov     [r8+20h], rsp
 * 0000000140423300: mov     rsi, [rbx+90h]
 * 0000000140423307: mov     [rbp+0D0h], rsi
 * 000000014042330E: cli
 * 000000014042330F: mov     [rbx+28h], r8
 * 0000000140423313: mov     [rbx+38h], r9
 * 0000000140423317: test    cs:KiKvaShadow, 1
 * 000000014042331E: jnz     short loc_14042332F
 * 0000000140423320: mov     rdi, gs:8
 * 0000000140423329: mov     [rdi+4], r8
 * 000000014042332D: jmp     short loc_140423338
 * 000000014042332F: mov     gs:0A008h, r8
 * 0000000140423338: mov     ecx, cs:KeKernelStackSize
 * 000000014042333E: sub     r9, rcx
 * 0000000140423341: mov     gs:1A8h, r8
 * 000000014042334A: mov     [rbx+30h], r9
 * 000000014042334E: mov     rcx, [rsp+138h+arg_20]
 * 0000000140423356: test    rcx, rcx
 * 0000000140423359: jz      short loc_1404233A5
 * 000000014042335B: mov     [rbx+418h], rcx
 * 0000000140423362: sub     rcx, 3000h
 * 0000000140423369: mov     [rbx+420h], rcx
 * 0000000140423370: or      qword ptr [rbx+420h], 2
 * 0000000140423378: mov     rcx, [rsp+138h+arg_28]
 * 0000000140423380: mov     [rbx+410h], rcx
 * 0000000140423387: mov     gs:95A8h, rcx
 * 0000000140423390: rdsspq  rdx
 * 0000000140423395: rstorssp qword ptr [rcx]
 * 0000000140423399: saveprevssp
 * 000000014042339D: sub     rdx, 8
 * 00000001404233A1: mov     [r8+40h], rdx
 * 00000001404233A5: lea     rsp, [r8-190h]
 * 00000001404233AC: mov     rdi, rsp
 * 00000001404233AF: mov     ecx, 32h ; '2'
 * 00000001404233B4: rep movsq
 * 00000001404233B7: xor     edi, edi
 * 00000001404233B9: test    byte ptr [rbx+0C2h], 3
 * 00000001404233C0: jnz     loc_140423689
 * 00000001404233C6: test    dword ptr [rbx], 8010000h
 * 00000001404233CC: jnz     loc_140423689
 * 00000001404233D2: test    byte ptr gs:86Ch, 2
 * 00000001404233DB: jnz     loc_140423689
 * 00000001404233E1: lea     rbp, [rsi-110h]
 * 00000001404233E8: ldmxcsr dword ptr [rbp-54h]
 * 00000001404233EC: xor     esi, esi
 * 00000001404233EE: test    byte ptr [rbx+3], 3
 * 00000001404233F2: jnz     loc_14042365E
 * 00000001404233F8: mov     r9, cs:qword_140D1F350
 * 00000001404233FF: mov     rcx, gs:188h
 * 0000000140423408: bt      dword ptr [rcx+74h], 16h
 * 000000014042340D: jnb     short loc_140423439
 * 000000014042340F: xor     ecx, ecx
 * 0000000140423411: rdsspq  rcx
 * 0000000140423416: mov     r8, gs:95A8h
 * 000000014042341F: add     r8, 8
 * 0000000140423423: cmp     rcx, r8
 * 0000000140423426: jnz     short loc_140423439
 * 0000000140423428: mov     rcx, gs:95A0h
 * 0000000140423431: rstorssp qword ptr [rcx]
 * 0000000140423435: saveprevssp
 * 0000000140423439: mov     byte ptr gs:856h, 0
 * 0000000140423442: movzx   eax, word ptr gs:86Ah
 * 000000014042344B: cmp     gs:864h, ax
 * 0000000140423454: jz      short loc_140423468
 * 0000000140423456: mov     gs:864h, ax
 * 000000014042345F: mov     ecx, 48h ; 'H'
 * 0000000140423464: xor     edx, edx
 * 0000000140423466: wrmsr
 * 0000000140423468: btr     word ptr gs:860h, 2
 * 0000000140423473: jnb     short loc_140423483
 * 0000000140423475: mov     eax, 1
 * 000000014042347A: xor     edx, edx
 * 000000014042347C: mov     ecx, 49h ; 'I'
 * 0000000140423481: wrmsr
 * 0000000140423483: btr     word ptr gs:860h, 5
 * 000000014042348E: jnb     loc_1404235CB
 * 0000000140423494: call    loc_1404235A7
 * 0000000140423499: add     rsp, 8
 * 000000014042349D: call    loc_1404235B0
 * 00000001404234A2: add     rsp, 8
 * 00000001404234A6: call    loc_140423499
 * 00000001404234AB: add     rsp, 8
 * 00000001404234AF: call    loc_1404234A2
 * 00000001404234B4: add     rsp, 8
 * 00000001404234B8: call    loc_1404234AB
 * 00000001404234BD: add     rsp, 8
 * 00000001404234C1: call    loc_1404234B4
 * 00000001404234C6: add     rsp, 8
 * 00000001404234CA: call    loc_1404234BD
 * 00000001404234CF: add     rsp, 8
 * 00000001404234D3: call    loc_1404234C6
 * 00000001404234D8: add     rsp, 8
 * 00000001404234DC: call    loc_1404234CF
 * 00000001404234E1: add     rsp, 8
 * 00000001404234E5: call    loc_1404234D8
 * 00000001404234EA: add     rsp, 8
 * 00000001404234EE: call    loc_1404234E1
 * 00000001404234F3: add     rsp, 8
 * 00000001404234F7: call    loc_1404234EA
 * 00000001404234FC: add     rsp, 8
 * 0000000140423500: call    loc_1404234F3
 * 0000000140423505: add     rsp, 8
 * 0000000140423509: call    loc_1404234FC
 * 000000014042350E: add     rsp, 8
 * 0000000140423512: call    loc_140423505
 * 0000000140423517: add     rsp, 8
 * 000000014042351B: call    loc_14042350E
 * 0000000140423520: add     rsp, 8
 * 0000000140423524: call    loc_140423517
 * 0000000140423529: add     rsp, 8
 * 000000014042352D: call    loc_140423520
 * 0000000140423532: add     rsp, 8
 * 0000000140423536: call    loc_140423529
 * 000000014042353B: add     rsp, 8
 * 000000014042353F: call    loc_140423532
 * 0000000140423544: add     rsp, 8
 * 0000000140423548: call    loc_14042353B
 * 000000014042354D: add     rsp, 8
 * 0000000140423551: call    loc_140423544
 * 0000000140423556: add     rsp, 8
 * 000000014042355A: call    loc_14042354D
 * 000000014042355F: add     rsp, 8
 * 0000000140423563: call    loc_140423556
 * 0000000140423568: add     rsp, 8
 * 000000014042356C: call    loc_14042355F
 * 0000000140423571: add     rsp, 8
 * 0000000140423575: call    loc_140423568
 * 000000014042357A: add     rsp, 8
 * 000000014042357E: call    loc_140423571
 * 0000000140423583: add     rsp, 8
 * 0000000140423587: call    loc_14042357A
 * 000000014042358C: add     rsp, 8
 * 0000000140423590: call    loc_140423583
 * 0000000140423595: add     rsp, 8
 * 0000000140423599: call    loc_14042358C
 * 000000014042359E: add     rsp, 8
 * 00000001404235A2: call    loc_140423595
 * 00000001404235A7: add     rsp, 8
 * 00000001404235AB: call    loc_14042359E
 * 00000001404235B0: add     rsp, 8
 * 00000001404235B4: mov     eax, 0DADAh
 * 00000001404235B9: test    byte ptr gs:862h, 8
 * 00000001404235C2: jz      short loc_1404235CB
 * 00000001404235C4: mov     al, 20h ; ' '
 * 00000001404235C6: incsspq rax
 * 00000001404235CB: test    word ptr gs:860h, 80h
 * 00000001404235D6: jz      short loc_1404235E4
 * 00000001404235D8: xor     eax, eax
 * 00000001404235DA: xor     edx, edx
 * 00000001404235DC: mov     ecx, 1
 * 00000001404235E1: div     rcx
 * 00000001404235E4: mov     rcx, r9
 * 00000001404235E7: xor     eax, eax
 * 00000001404235E9: xor     edx, edx
 * 00000001404235EB: mov     r8, [rbp+100h]
 * 00000001404235F2: mov     r9, [rbp+0D8h]
 * 00000001404235F9: pxor    xmm0, xmm0
 * 00000001404235FD: pxor    xmm1, xmm1
 * 0000000140423601: pxor    xmm2, xmm2
 * 0000000140423605: pxor    xmm3, xmm3
 * 0000000140423609: pxor    xmm4, xmm4
 * 000000014042360D: pxor    xmm5, xmm5
 * 0000000140423611: mov     r11, [rbp+0F8h]
 * 0000000140423618: xor     ebx, ebx
 * 000000014042361A: test    cs:KiKvaShadow, 1
 * 0000000140423621: jnz     KiKernelSysretExit
 * 0000000140423627: mov     rbp, r9
 * 000000014042362A: mov     rsp, r8
 * 000000014042362D: xor     r9, r9
 * 0000000140423630: rdsspq  r9
 * 0000000140423635: test    r9, r9
 * 0000000140423638: jz      short loc_140423642
 * 000000014042363A: clrssbsy qword ptr [r9]
 * 000000014042363F: xor     r9, r9
 * 0000000140423642: test    word ptr gs:860h, 100h
 * 000000014042364D: jz      short loc_140423658
 * 000000014042364F: verw    word ptr gs:0A02Ah
 * 0000000140423658: swapgs
 * 000000014042365B: sysret
 * 000000014042365E: call    KiRestoreDebugRegisterState
 * 0000000140423663: mov     r10, cs:qword_140D1F350
 * 000000014042366A: mov     r9, [rbx+0B8h]
 * 0000000140423671: mov     r9, [r9+3D8h]
 * 0000000140423678: or      r9, r9
 * 000000014042367B: jnz     loc_1404233FF
 * 0000000140423681: xchg    r9, r10
 * 0000000140423684: jmp     loc_1404233FF
 * 0000000140423689: lea     rbp, [rsp+138h+var_B8]
 * 0000000140423691: mov     word ptr [rbp+0F0h], 33h ; '3'
 * 000000014042369A: mov     rax, cs:qword_140D1F350
 * 00000001404236A1: mov     [rbp+0E8h], rax
 * 00000001404236A8: lea     rcx, KiSystemServiceExit
 * 00000001404236AF: jmp     rcx
 * 00000001404236B5: retn
 */
