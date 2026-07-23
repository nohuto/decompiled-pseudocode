/*
 * XREFs of KiCallUserMode @ 0x1404235D0
 * Callers:
 *     KeUserModeCallback @ 0x14076EA70 (KeUserModeCallback.c)
 * Callees:
 *     KiRestoreDebugRegisterState @ 0x14041F2B0 (KiRestoreDebugRegisterState.c)
 *     KiCallUserMode @ 0x1404235D0 (KiCallUserMode.c)
 */

/*
 * Hex-Rays decompilation failed for KiCallUserMode @ 0x1404235D0
 * Reason: Hex-Rays returned no pseudocode for 0x1404235D0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001404235D0: sub     rsp, 138h
 * 00000001404235D7: lea     rax, [rsp+138h+var_38]
 * 00000001404235DF: movaps  [rsp+138h+var_108], xmm6
 * 00000001404235E4: movaps  [rsp+138h+var_F8], xmm7
 * 00000001404235E9: movaps  [rsp+138h+var_E8], xmm8
 * 00000001404235EF: movaps  [rsp+138h+var_D8], xmm9
 * 00000001404235F5: movaps  [rsp+138h+var_C8], xmm10
 * 00000001404235FB: movaps  xmmword ptr [rax-80h], xmm11
 * 0000000140423600: movaps  xmmword ptr [rax-70h], xmm12
 * 0000000140423605: movaps  xmmword ptr [rax-60h], xmm13
 * 000000014042360A: movaps  xmmword ptr [rax-50h], xmm14
 * 000000014042360F: movaps  xmmword ptr [rax-40h], xmm15
 * 0000000140423614: mov     [rax-8], rbp
 * 0000000140423618: mov     rbp, rsp
 * 000000014042361B: mov     [rax], rbx
 * 000000014042361E: mov     [rax+8], rdi
 * 0000000140423622: mov     [rax+10h], rsi
 * 0000000140423626: mov     [rax+18h], r12
 * 000000014042362A: mov     [rax+20h], r13
 * 000000014042362E: mov     [rax+28h], r14
 * 0000000140423632: mov     [rax+30h], r15
 * 0000000140423636: xor     r10, r10
 * 0000000140423639: xor     r12, r12
 * 000000014042363C: xor     r13, r13
 * 000000014042363F: xor     r14, r14
 * 0000000140423642: xor     r15, r15
 * 0000000140423645: pxor    xmm6, xmm6
 * 0000000140423649: pxor    xmm7, xmm7
 * 000000014042364D: pxor    xmm8, xmm8
 * 0000000140423652: pxor    xmm9, xmm9
 * 0000000140423657: pxor    xmm10, xmm10
 * 000000014042365C: pxor    xmm11, xmm11
 * 0000000140423661: pxor    xmm12, xmm12
 * 0000000140423666: pxor    xmm13, xmm13
 * 000000014042366B: pxor    xmm14, xmm14
 * 0000000140423670: pxor    xmm15, xmm15
 * 0000000140423675: mov     [rbp+0D8h], rcx
 * 000000014042367C: mov     [rbp+0E0h], rdx
 * 0000000140423683: mov     rbx, gs:188h
 * 000000014042368C: mov     [r8+20h], rsp
 * 0000000140423690: mov     rsi, [rbx+90h]
 * 0000000140423697: mov     [rbp+0D0h], rsi
 * 000000014042369E: cli
 * 000000014042369F: mov     [rbx+28h], r8
 * 00000001404236A3: mov     [rbx+38h], r9
 * 00000001404236A7: test    cs:KiKvaShadow, 1
 * 00000001404236AE: jnz     short loc_1404236BF
 * 00000001404236B0: mov     rdi, gs:8
 * 00000001404236B9: mov     [rdi+4], r8
 * 00000001404236BD: jmp     short loc_1404236C8
 * 00000001404236BF: mov     gs:0A008h, r8
 * 00000001404236C8: mov     ecx, cs:KeKernelStackSize
 * 00000001404236CE: sub     r9, rcx
 * 00000001404236D1: mov     gs:1A8h, r8
 * 00000001404236DA: mov     [rbx+30h], r9
 * 00000001404236DE: mov     rcx, [rsp+138h+arg_20]
 * 00000001404236E6: test    rcx, rcx
 * 00000001404236E9: jz      short loc_140423735
 * 00000001404236EB: mov     [rbx+418h], rcx
 * 00000001404236F2: sub     rcx, 3000h
 * 00000001404236F9: mov     [rbx+420h], rcx
 * 0000000140423700: or      qword ptr [rbx+420h], 2
 * 0000000140423708: mov     rcx, [rsp+138h+arg_28]
 * 0000000140423710: mov     [rbx+410h], rcx
 * 0000000140423717: mov     gs:95A8h, rcx
 * 0000000140423720: rdsspq  rdx
 * 0000000140423725: rstorssp qword ptr [rcx]
 * 0000000140423729: saveprevssp
 * 000000014042372D: sub     rdx, 8
 * 0000000140423731: mov     [r8+40h], rdx
 * 0000000140423735: lea     rsp, [r8-190h]
 * 000000014042373C: mov     rdi, rsp
 * 000000014042373F: mov     ecx, 32h ; '2'
 * 0000000140423744: rep movsq
 * 0000000140423747: xor     edi, edi
 * 0000000140423749: test    byte ptr [rbx+0C2h], 3
 * 0000000140423750: jnz     loc_140423A19
 * 0000000140423756: test    dword ptr [rbx], 8010000h
 * 000000014042375C: jnz     loc_140423A19
 * 0000000140423762: test    byte ptr gs:86Ch, 2
 * 000000014042376B: jnz     loc_140423A19
 * 0000000140423771: lea     rbp, [rsi-110h]
 * 0000000140423778: ldmxcsr dword ptr [rbp-54h]
 * 000000014042377C: xor     esi, esi
 * 000000014042377E: test    byte ptr [rbx+3], 3
 * 0000000140423782: jnz     loc_1404239EE
 * 0000000140423788: mov     r9, cs:qword_140D1F350
 * 000000014042378F: mov     rcx, gs:188h
 * 0000000140423798: bt      dword ptr [rcx+74h], 16h
 * 000000014042379D: jnb     short loc_1404237C9
 * 000000014042379F: xor     ecx, ecx
 * 00000001404237A1: rdsspq  rcx
 * 00000001404237A6: mov     r8, gs:95A8h
 * 00000001404237AF: add     r8, 8
 * 00000001404237B3: cmp     rcx, r8
 * 00000001404237B6: jnz     short loc_1404237C9
 * 00000001404237B8: mov     rcx, gs:95A0h
 * 00000001404237C1: rstorssp qword ptr [rcx]
 * 00000001404237C5: saveprevssp
 * 00000001404237C9: mov     byte ptr gs:856h, 0
 * 00000001404237D2: movzx   eax, word ptr gs:86Ah
 * 00000001404237DB: cmp     gs:864h, ax
 * 00000001404237E4: jz      short loc_1404237F8
 * 00000001404237E6: mov     gs:864h, ax
 * 00000001404237EF: mov     ecx, 48h ; 'H'
 * 00000001404237F4: xor     edx, edx
 * 00000001404237F6: wrmsr
 * 00000001404237F8: btr     word ptr gs:860h, 2
 * 0000000140423803: jnb     short loc_140423813
 * 0000000140423805: mov     eax, 1
 * 000000014042380A: xor     edx, edx
 * 000000014042380C: mov     ecx, 49h ; 'I'
 * 0000000140423811: wrmsr
 * 0000000140423813: btr     word ptr gs:860h, 5
 * 000000014042381E: jnb     loc_14042395B
 * 0000000140423824: call    loc_140423937
 * 0000000140423829: add     rsp, 8
 * 000000014042382D: call    loc_140423940
 * 0000000140423832: add     rsp, 8
 * 0000000140423836: call    loc_140423829
 * 000000014042383B: add     rsp, 8
 * 000000014042383F: call    loc_140423832
 * 0000000140423844: add     rsp, 8
 * 0000000140423848: call    loc_14042383B
 * 000000014042384D: add     rsp, 8
 * 0000000140423851: call    loc_140423844
 * 0000000140423856: add     rsp, 8
 * 000000014042385A: call    loc_14042384D
 * 000000014042385F: add     rsp, 8
 * 0000000140423863: call    loc_140423856
 * 0000000140423868: add     rsp, 8
 * 000000014042386C: call    loc_14042385F
 * 0000000140423871: add     rsp, 8
 * 0000000140423875: call    loc_140423868
 * 000000014042387A: add     rsp, 8
 * 000000014042387E: call    loc_140423871
 * 0000000140423883: add     rsp, 8
 * 0000000140423887: call    loc_14042387A
 * 000000014042388C: add     rsp, 8
 * 0000000140423890: call    loc_140423883
 * 0000000140423895: add     rsp, 8
 * 0000000140423899: call    loc_14042388C
 * 000000014042389E: add     rsp, 8
 * 00000001404238A2: call    loc_140423895
 * 00000001404238A7: add     rsp, 8
 * 00000001404238AB: call    loc_14042389E
 * 00000001404238B0: add     rsp, 8
 * 00000001404238B4: call    loc_1404238A7
 * 00000001404238B9: add     rsp, 8
 * 00000001404238BD: call    loc_1404238B0
 * 00000001404238C2: add     rsp, 8
 * 00000001404238C6: call    loc_1404238B9
 * 00000001404238CB: add     rsp, 8
 * 00000001404238CF: call    loc_1404238C2
 * 00000001404238D4: add     rsp, 8
 * 00000001404238D8: call    loc_1404238CB
 * 00000001404238DD: add     rsp, 8
 * 00000001404238E1: call    loc_1404238D4
 * 00000001404238E6: add     rsp, 8
 * 00000001404238EA: call    loc_1404238DD
 * 00000001404238EF: add     rsp, 8
 * 00000001404238F3: call    loc_1404238E6
 * 00000001404238F8: add     rsp, 8
 * 00000001404238FC: call    loc_1404238EF
 * 0000000140423901: add     rsp, 8
 * 0000000140423905: call    loc_1404238F8
 * 000000014042390A: add     rsp, 8
 * 000000014042390E: call    loc_140423901
 * 0000000140423913: add     rsp, 8
 * 0000000140423917: call    loc_14042390A
 * 000000014042391C: add     rsp, 8
 * 0000000140423920: call    loc_140423913
 * 0000000140423925: add     rsp, 8
 * 0000000140423929: call    loc_14042391C
 * 000000014042392E: add     rsp, 8
 * 0000000140423932: call    loc_140423925
 * 0000000140423937: add     rsp, 8
 * 000000014042393B: call    loc_14042392E
 * 0000000140423940: add     rsp, 8
 * 0000000140423944: mov     eax, 0DADAh
 * 0000000140423949: test    byte ptr gs:862h, 8
 * 0000000140423952: jz      short loc_14042395B
 * 0000000140423954: mov     al, 20h ; ' '
 * 0000000140423956: incsspq rax
 * 000000014042395B: test    word ptr gs:860h, 80h
 * 0000000140423966: jz      short loc_140423974
 * 0000000140423968: xor     eax, eax
 * 000000014042396A: xor     edx, edx
 * 000000014042396C: mov     ecx, 1
 * 0000000140423971: div     rcx
 * 0000000140423974: mov     rcx, r9
 * 0000000140423977: xor     eax, eax
 * 0000000140423979: xor     edx, edx
 * 000000014042397B: mov     r8, [rbp+100h]
 * 0000000140423982: mov     r9, [rbp+0D8h]
 * 0000000140423989: pxor    xmm0, xmm0
 * 000000014042398D: pxor    xmm1, xmm1
 * 0000000140423991: pxor    xmm2, xmm2
 * 0000000140423995: pxor    xmm3, xmm3
 * 0000000140423999: pxor    xmm4, xmm4
 * 000000014042399D: pxor    xmm5, xmm5
 * 00000001404239A1: mov     r11, [rbp+0F8h]
 * 00000001404239A8: xor     ebx, ebx
 * 00000001404239AA: test    cs:KiKvaShadow, 1
 * 00000001404239B1: jnz     KiKernelSysretExit
 * 00000001404239B7: mov     rbp, r9
 * 00000001404239BA: mov     rsp, r8
 * 00000001404239BD: xor     r9, r9
 * 00000001404239C0: rdsspq  r9
 * 00000001404239C5: test    r9, r9
 * 00000001404239C8: jz      short loc_1404239D2
 * 00000001404239CA: clrssbsy qword ptr [r9]
 * 00000001404239CF: xor     r9, r9
 * 00000001404239D2: test    word ptr gs:860h, 100h
 * 00000001404239DD: jz      short loc_1404239E8
 * 00000001404239DF: verw    word ptr gs:0A02Ah
 * 00000001404239E8: swapgs
 * 00000001404239EB: sysret
 * 00000001404239EE: call    KiRestoreDebugRegisterState
 * 00000001404239F3: mov     r10, cs:qword_140D1F350
 * 00000001404239FA: mov     r9, [rbx+0B8h]
 * 0000000140423A01: mov     r9, [r9+3D8h]
 * 0000000140423A08: or      r9, r9
 * 0000000140423A0B: jnz     loc_14042378F
 * 0000000140423A11: xchg    r9, r10
 * 0000000140423A14: jmp     loc_14042378F
 * 0000000140423A19: lea     rbp, [rsp+138h+var_B8]
 * 0000000140423A21: mov     word ptr [rbp+0F0h], 33h ; '3'
 * 0000000140423A2A: mov     rax, cs:qword_140D1F350
 * 0000000140423A31: mov     [rbp+0E8h], rax
 * 0000000140423A38: lea     rcx, KiSystemServiceExit
 * 0000000140423A3F: jmp     rcx
 * 0000000140423A45: retn
 */
