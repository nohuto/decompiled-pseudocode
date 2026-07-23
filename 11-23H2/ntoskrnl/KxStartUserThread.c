/*
 * XREFs of KxStartUserThread @ 0x1404242C0
 * Callers:
 *     KyStartUserThread @ 0x140423F70 (KyStartUserThread.c)
 * Callees:
 *     KiRestoreDebugRegisterState @ 0x14041F2B0 (KiRestoreDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1404200D0 (KiRestoreSetContextState.c)
 *     KxStartUserThread @ 0x1404242C0 (KxStartUserThread.c)
 *     KiInitiateUserApc @ 0x1404251B0 (KiInitiateUserApc.c)
 *     _guard_dispatch_icall @ 0x140429FB0 (_guard_dispatch_icall.c)
 *     KiUpdateStibpPairing @ 0x140461220 (KiUpdateStibpPairing.c)
 *     KiCopyCounters @ 0x1405746E0 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KxStartUserThread @ 0x1404242C0
 * Reason: Hex-Rays returned no pseudocode for 0x1404242C0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001404242C0: sub     rsp, 138h
 * 00000001404242C7: lea     rax, [rsp+138h+var_38]
 * 00000001404242CF: movaps  [rsp+138h+var_108], xmm6
 * 00000001404242D4: movaps  [rsp+138h+var_F8], xmm7
 * 00000001404242D9: movaps  [rsp+138h+var_E8], xmm8
 * 00000001404242DF: movaps  [rsp+138h+var_D8], xmm9
 * 00000001404242E5: movaps  [rsp+138h+var_C8], xmm10
 * 00000001404242EB: movaps  xmmword ptr [rax-80h], xmm11
 * 00000001404242F0: movaps  xmmword ptr [rax-70h], xmm12
 * 00000001404242F5: movaps  xmmword ptr [rax-60h], xmm13
 * 00000001404242FA: movaps  xmmword ptr [rax-50h], xmm14
 * 00000001404242FF: movaps  xmmword ptr [rax-40h], xmm15
 * 0000000140424304: mov     [rax], rbx
 * 0000000140424307: mov     [rax+8], rdi
 * 000000014042430B: mov     [rax+10h], rsi
 * 000000014042430F: mov     [rax+18h], r12
 * 0000000140424313: mov     [rax+20h], r13
 * 0000000140424317: mov     [rax+28h], r14
 * 000000014042431B: mov     [rax+30h], r15
 * 000000014042431F: nop
 * 0000000140424320: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 0000000140424327: jz      short loc_14042432C
 * 0000000140424329: stac
 * 000000014042432C: mov     ecx, 1
 * 0000000140424331: mov     cr8, rcx
 * 0000000140424335: mov     rdx, [rsp+138h+var_138]
 * 0000000140424339: mov     rcx, [rsp+138h+var_130]
 * 000000014042433E: mov     rax, [rsp+138h+var_128]
 * 0000000140424343: call    _guard_dispatch_icall
 * 0000000140424348: lea     rcx, [rsp+138h+var_38]
 * 0000000140424350: movaps  xmm6, [rsp+138h+var_108]
 * 0000000140424355: movaps  xmm7, [rsp+138h+var_F8]
 * 000000014042435A: movaps  xmm8, [rsp+138h+var_E8]
 * 0000000140424360: movaps  xmm9, [rsp+138h+var_D8]
 * 0000000140424366: movaps  xmm10, [rsp+138h+var_C8]
 * 000000014042436C: movaps  xmm11, xmmword ptr [rcx-80h]
 * 0000000140424371: movaps  xmm12, xmmword ptr [rcx-70h]
 * 0000000140424376: movaps  xmm13, xmmword ptr [rcx-60h]
 * 000000014042437B: movaps  xmm14, xmmword ptr [rcx-50h]
 * 0000000140424380: movaps  xmm15, xmmword ptr [rcx-40h]
 * 0000000140424385: mov     rbx, [rcx]
 * 0000000140424388: mov     rdi, [rcx+8]
 * 000000014042438C: mov     rsi, [rcx+10h]
 * 0000000140424390: mov     r12, [rcx+18h]
 * 0000000140424394: mov     r13, [rcx+20h]
 * 0000000140424398: mov     r14, [rcx+28h]
 * 000000014042439C: mov     r15, [rcx+30h]
 * 00000001404243A0: cli
 * 00000001404243A1: test    byte ptr [rbp+0F0h], 1
 * 00000001404243A8: jz      loc_140424696
 * 00000001404243AE: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001404243B5: jz      short loc_1404243BA
 * 00000001404243B7: stac
 * 00000001404243BA: mov     rcx, gs:188h
 * 00000001404243C3: test    byte ptr [rcx+0C2h], 3
 * 00000001404243CA: jz      short loc_1404243E7
 * 00000001404243CC: mov     ecx, 1
 * 00000001404243D1: mov     cr8, rcx
 * 00000001404243D5: sti
 * 00000001404243D6: call    KiInitiateUserApc
 * 00000001404243DB: cli
 * 00000001404243DC: mov     ecx, 0
 * 00000001404243E1: mov     cr8, rcx
 * 00000001404243E5: jmp     short loc_1404243BA
 * 00000001404243E7: test    byte ptr gs:86Ch, 2
 * 00000001404243F0: jz      short loc_1404243F9
 * 00000001404243F2: xor     ecx, ecx
 * 00000001404243F4: call    KiUpdateStibpPairing
 * 00000001404243F9: mov     rcx, gs:188h
 * 0000000140424402: test    dword ptr [rcx], 8000000h
 * 0000000140424408: jz      short loc_14042440F
 * 000000014042440A: call    KiRestoreSetContextState
 * 000000014042440F: mov     rcx, gs:188h
 * 0000000140424418: test    dword ptr [rcx], 10000h
 * 000000014042441E: jz      short loc_140424434
 * 0000000140424420: test    byte ptr [rcx+2], 1
 * 0000000140424424: jz      short loc_140424434
 * 0000000140424426: call    KiCopyCounters
 * 000000014042442B: mov     rcx, gs:188h
 * 0000000140424434: ldmxcsr dword ptr [rbp-54h]
 * 0000000140424438: cmp     word ptr [rbp+80h], 0
 * 0000000140424440: jz      short loc_140424447
 * 0000000140424442: call    KiRestoreDebugRegisterState
 * 0000000140424447: mov     rcx, gs:188h
 * 0000000140424450: bt      dword ptr [rcx+74h], 16h
 * 0000000140424455: jnb     short loc_140424481
 * 0000000140424457: xor     ecx, ecx
 * 0000000140424459: rdsspq  rcx
 * 000000014042445E: mov     r8, gs:95A8h
 * 0000000140424467: add     r8, 8
 * 000000014042446B: cmp     rcx, r8
 * 000000014042446E: jnz     short loc_140424481
 * 0000000140424470: mov     rcx, gs:95A0h
 * 0000000140424479: rstorssp qword ptr [rcx]
 * 000000014042447D: saveprevssp
 * 0000000140424481: movaps  xmm0, xmmword ptr [rbp-10h]
 * 0000000140424485: movaps  xmm1, xmmword ptr [rbp+0]
 * 0000000140424489: movaps  xmm2, xmmword ptr [rbp+10h]
 * 000000014042448D: movaps  xmm3, xmmword ptr [rbp+20h]
 * 0000000140424491: movaps  xmm4, xmmword ptr [rbp+30h]
 * 0000000140424495: movaps  xmm5, xmmword ptr [rbp+40h]
 * 0000000140424499: mov     r11, [rbp-20h]
 * 000000014042449D: mov     r10, [rbp-28h]
 * 00000001404244A1: mov     r9, [rbp-30h]
 * 00000001404244A5: mov     r8, [rbp-38h]
 * 00000001404244A9: mov     byte ptr gs:856h, 0
 * 00000001404244B2: movzx   eax, word ptr gs:86Ah
 * 00000001404244BB: cmp     gs:864h, ax
 * 00000001404244C4: jz      short loc_1404244D8
 * 00000001404244C6: mov     gs:864h, ax
 * 00000001404244CF: mov     ecx, 48h ; 'H'
 * 00000001404244D4: xor     edx, edx
 * 00000001404244D6: wrmsr
 * 00000001404244D8: btr     word ptr gs:860h, 2
 * 00000001404244E3: jnb     short loc_1404244F3
 * 00000001404244E5: mov     eax, 1
 * 00000001404244EA: xor     edx, edx
 * 00000001404244EC: mov     ecx, 49h ; 'I'
 * 00000001404244F1: wrmsr
 * 00000001404244F3: btr     word ptr gs:860h, 5
 * 00000001404244FE: jnb     loc_14042463B
 * 0000000140424504: call    loc_140424617
 * 0000000140424509: add     rsp, 8
 * 000000014042450D: call    loc_140424620
 * 0000000140424512: add     rsp, 8
 * 0000000140424516: call    loc_140424509
 * 000000014042451B: add     rsp, 8
 * 000000014042451F: call    loc_140424512
 * 0000000140424524: add     rsp, 8
 * 0000000140424528: call    loc_14042451B
 * 000000014042452D: add     rsp, 8
 * 0000000140424531: call    loc_140424524
 * 0000000140424536: add     rsp, 8
 * 000000014042453A: call    loc_14042452D
 * 000000014042453F: add     rsp, 8
 * 0000000140424543: call    loc_140424536
 * 0000000140424548: add     rsp, 8
 * 000000014042454C: call    loc_14042453F
 * 0000000140424551: add     rsp, 8
 * 0000000140424555: call    loc_140424548
 * 000000014042455A: add     rsp, 8
 * 000000014042455E: call    loc_140424551
 * 0000000140424563: add     rsp, 8
 * 0000000140424567: call    loc_14042455A
 * 000000014042456C: add     rsp, 8
 * 0000000140424570: call    loc_140424563
 * 0000000140424575: add     rsp, 8
 * 0000000140424579: call    loc_14042456C
 * 000000014042457E: add     rsp, 8
 * 0000000140424582: call    loc_140424575
 * 0000000140424587: add     rsp, 8
 * 000000014042458B: call    loc_14042457E
 * 0000000140424590: add     rsp, 8
 * 0000000140424594: call    loc_140424587
 * 0000000140424599: add     rsp, 8
 * 000000014042459D: call    loc_140424590
 * 00000001404245A2: add     rsp, 8
 * 00000001404245A6: call    loc_140424599
 * 00000001404245AB: add     rsp, 8
 * 00000001404245AF: call    loc_1404245A2
 * 00000001404245B4: add     rsp, 8
 * 00000001404245B8: call    loc_1404245AB
 * 00000001404245BD: add     rsp, 8
 * 00000001404245C1: call    loc_1404245B4
 * 00000001404245C6: add     rsp, 8
 * 00000001404245CA: call    loc_1404245BD
 * 00000001404245CF: add     rsp, 8
 * 00000001404245D3: call    loc_1404245C6
 * 00000001404245D8: add     rsp, 8
 * 00000001404245DC: call    loc_1404245CF
 * 00000001404245E1: add     rsp, 8
 * 00000001404245E5: call    loc_1404245D8
 * 00000001404245EA: add     rsp, 8
 * 00000001404245EE: call    loc_1404245E1
 * 00000001404245F3: add     rsp, 8
 * 00000001404245F7: call    loc_1404245EA
 * 00000001404245FC: add     rsp, 8
 * 0000000140424600: call    loc_1404245F3
 * 0000000140424605: add     rsp, 8
 * 0000000140424609: call    loc_1404245FC
 * 000000014042460E: add     rsp, 8
 * 0000000140424612: call    loc_140424605
 * 0000000140424617: add     rsp, 8
 * 000000014042461B: call    loc_14042460E
 * 0000000140424620: add     rsp, 8
 * 0000000140424624: mov     eax, 0DADAh
 * 0000000140424629: test    byte ptr gs:862h, 8
 * 0000000140424632: jz      short loc_14042463B
 * 0000000140424634: mov     al, 20h ; ' '
 * 0000000140424636: incsspq rax
 * 000000014042463B: test    word ptr gs:860h, 80h
 * 0000000140424646: jz      short loc_140424654
 * 0000000140424648: xor     eax, eax
 * 000000014042464A: xor     edx, edx
 * 000000014042464C: mov     ecx, 1
 * 0000000140424651: div     rcx
 * 0000000140424654: mov     rdx, [rbp-40h]
 * 0000000140424658: mov     rcx, [rbp-48h]
 * 000000014042465C: mov     rax, [rbp-50h]
 * 0000000140424660: mov     rsp, rbp
 * 0000000140424663: mov     rbp, [rbp+0D8h]
 * 000000014042466A: add     rsp, 0E8h
 * 0000000140424671: test    cs:KiKvaShadow, 1
 * 0000000140424678: jz      short loc_14042467F
 * 000000014042467A: jmp     KiKernelExit
 * 000000014042467F: test    word ptr gs:860h, 100h
 * 000000014042468A: jz      short loc_140424691
 * 000000014042468C: verw    [rsp-1E8h+arg_200]
 * 0000000140424691: swapgs
 * 0000000140424694: iretq
 * 0000000140424696: ldmxcsr dword ptr [rbp-54h]
 * 000000014042469A: movaps  xmm0, xmmword ptr [rbp-10h]
 * 000000014042469E: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001404246A2: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001404246A6: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001404246AA: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001404246AE: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001404246B2: mov     r11, [rbp-20h]
 * 00000001404246B6: mov     r10, [rbp-28h]
 * 00000001404246BA: mov     r9, [rbp-30h]
 * 00000001404246BE: mov     r8, [rbp-38h]
 * 00000001404246C2: mov     rdx, [rbp-40h]
 * 00000001404246C6: mov     rcx, [rbp-48h]
 * 00000001404246CA: mov     rax, [rbp-50h]
 * 00000001404246CE: mov     rsp, rbp
 * 00000001404246D1: mov     rbp, [rbp+0D8h]
 * 00000001404246D8: add     rsp, 0E8h
 * 00000001404246DF: iretq
 */
