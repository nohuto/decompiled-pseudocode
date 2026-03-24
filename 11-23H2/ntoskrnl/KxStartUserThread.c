/*
 * XREFs of KxStartUserThread @ 0x140423F30
 * Callers:
 *     KyStartUserThread @ 0x140423BE0 (KyStartUserThread.c)
 * Callees:
 *     KiRestoreDebugRegisterState @ 0x14041EF20 (KiRestoreDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x14041FD40 (KiRestoreSetContextState.c)
 *     KxStartUserThread @ 0x140423F30 (KxStartUserThread.c)
 *     KiInitiateUserApc @ 0x140424E20 (KiInitiateUserApc.c)
 *     _guard_dispatch_icall @ 0x140429C20 (_guard_dispatch_icall.c)
 *     KiUpdateStibpPairing @ 0x140460E20 (KiUpdateStibpPairing.c)
 *     KiCopyCounters @ 0x1405741A0 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KxStartUserThread @ 0x140423F30
 * Reason: Hex-Rays returned no pseudocode for 0x140423F30
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140423F30: sub     rsp, 138h
 * 0000000140423F37: lea     rax, [rsp+138h+var_38]
 * 0000000140423F3F: movaps  [rsp+138h+var_108], xmm6
 * 0000000140423F44: movaps  [rsp+138h+var_F8], xmm7
 * 0000000140423F49: movaps  [rsp+138h+var_E8], xmm8
 * 0000000140423F4F: movaps  [rsp+138h+var_D8], xmm9
 * 0000000140423F55: movaps  [rsp+138h+var_C8], xmm10
 * 0000000140423F5B: movaps  xmmword ptr [rax-80h], xmm11
 * 0000000140423F60: movaps  xmmword ptr [rax-70h], xmm12
 * 0000000140423F65: movaps  xmmword ptr [rax-60h], xmm13
 * 0000000140423F6A: movaps  xmmword ptr [rax-50h], xmm14
 * 0000000140423F6F: movaps  xmmword ptr [rax-40h], xmm15
 * 0000000140423F74: mov     [rax], rbx
 * 0000000140423F77: mov     [rax+8], rdi
 * 0000000140423F7B: mov     [rax+10h], rsi
 * 0000000140423F7F: mov     [rax+18h], r12
 * 0000000140423F83: mov     [rax+20h], r13
 * 0000000140423F87: mov     [rax+28h], r14
 * 0000000140423F8B: mov     [rax+30h], r15
 * 0000000140423F8F: nop
 * 0000000140423F90: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 0000000140423F97: jz      short loc_140423F9C
 * 0000000140423F99: stac
 * 0000000140423F9C: mov     ecx, 1
 * 0000000140423FA1: mov     cr8, rcx
 * 0000000140423FA5: mov     rdx, [rsp+138h+var_138]
 * 0000000140423FA9: mov     rcx, [rsp+138h+var_130]
 * 0000000140423FAE: mov     rax, [rsp+138h+var_128]
 * 0000000140423FB3: call    _guard_dispatch_icall
 * 0000000140423FB8: lea     rcx, [rsp+138h+var_38]
 * 0000000140423FC0: movaps  xmm6, [rsp+138h+var_108]
 * 0000000140423FC5: movaps  xmm7, [rsp+138h+var_F8]
 * 0000000140423FCA: movaps  xmm8, [rsp+138h+var_E8]
 * 0000000140423FD0: movaps  xmm9, [rsp+138h+var_D8]
 * 0000000140423FD6: movaps  xmm10, [rsp+138h+var_C8]
 * 0000000140423FDC: movaps  xmm11, xmmword ptr [rcx-80h]
 * 0000000140423FE1: movaps  xmm12, xmmword ptr [rcx-70h]
 * 0000000140423FE6: movaps  xmm13, xmmword ptr [rcx-60h]
 * 0000000140423FEB: movaps  xmm14, xmmword ptr [rcx-50h]
 * 0000000140423FF0: movaps  xmm15, xmmword ptr [rcx-40h]
 * 0000000140423FF5: mov     rbx, [rcx]
 * 0000000140423FF8: mov     rdi, [rcx+8]
 * 0000000140423FFC: mov     rsi, [rcx+10h]
 * 0000000140424000: mov     r12, [rcx+18h]
 * 0000000140424004: mov     r13, [rcx+20h]
 * 0000000140424008: mov     r14, [rcx+28h]
 * 000000014042400C: mov     r15, [rcx+30h]
 * 0000000140424010: cli
 * 0000000140424011: test    byte ptr [rbp+0F0h], 1
 * 0000000140424018: jz      loc_140424306
 * 000000014042401E: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 0000000140424025: jz      short loc_14042402A
 * 0000000140424027: stac
 * 000000014042402A: mov     rcx, gs:188h
 * 0000000140424033: test    byte ptr [rcx+0C2h], 3
 * 000000014042403A: jz      short loc_140424057
 * 000000014042403C: mov     ecx, 1
 * 0000000140424041: mov     cr8, rcx
 * 0000000140424045: sti
 * 0000000140424046: call    KiInitiateUserApc
 * 000000014042404B: cli
 * 000000014042404C: mov     ecx, 0
 * 0000000140424051: mov     cr8, rcx
 * 0000000140424055: jmp     short loc_14042402A
 * 0000000140424057: test    byte ptr gs:86Ch, 2
 * 0000000140424060: jz      short loc_140424069
 * 0000000140424062: xor     ecx, ecx
 * 0000000140424064: call    KiUpdateStibpPairing
 * 0000000140424069: mov     rcx, gs:188h
 * 0000000140424072: test    dword ptr [rcx], 8000000h
 * 0000000140424078: jz      short loc_14042407F
 * 000000014042407A: call    KiRestoreSetContextState
 * 000000014042407F: mov     rcx, gs:188h
 * 0000000140424088: test    dword ptr [rcx], 10000h
 * 000000014042408E: jz      short loc_1404240A4
 * 0000000140424090: test    byte ptr [rcx+2], 1
 * 0000000140424094: jz      short loc_1404240A4
 * 0000000140424096: call    KiCopyCounters
 * 000000014042409B: mov     rcx, gs:188h
 * 00000001404240A4: ldmxcsr dword ptr [rbp-54h]
 * 00000001404240A8: cmp     word ptr [rbp+80h], 0
 * 00000001404240B0: jz      short loc_1404240B7
 * 00000001404240B2: call    KiRestoreDebugRegisterState
 * 00000001404240B7: mov     rcx, gs:188h
 * 00000001404240C0: bt      dword ptr [rcx+74h], 16h
 * 00000001404240C5: jnb     short loc_1404240F1
 * 00000001404240C7: xor     ecx, ecx
 * 00000001404240C9: rdsspq  rcx
 * 00000001404240CE: mov     r8, gs:95A8h
 * 00000001404240D7: add     r8, 8
 * 00000001404240DB: cmp     rcx, r8
 * 00000001404240DE: jnz     short loc_1404240F1
 * 00000001404240E0: mov     rcx, gs:95A0h
 * 00000001404240E9: rstorssp qword ptr [rcx]
 * 00000001404240ED: saveprevssp
 * 00000001404240F1: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001404240F5: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001404240F9: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001404240FD: movaps  xmm3, xmmword ptr [rbp+20h]
 * 0000000140424101: movaps  xmm4, xmmword ptr [rbp+30h]
 * 0000000140424105: movaps  xmm5, xmmword ptr [rbp+40h]
 * 0000000140424109: mov     r11, [rbp-20h]
 * 000000014042410D: mov     r10, [rbp-28h]
 * 0000000140424111: mov     r9, [rbp-30h]
 * 0000000140424115: mov     r8, [rbp-38h]
 * 0000000140424119: mov     byte ptr gs:856h, 0
 * 0000000140424122: movzx   eax, word ptr gs:86Ah
 * 000000014042412B: cmp     gs:864h, ax
 * 0000000140424134: jz      short loc_140424148
 * 0000000140424136: mov     gs:864h, ax
 * 000000014042413F: mov     ecx, 48h ; 'H'
 * 0000000140424144: xor     edx, edx
 * 0000000140424146: wrmsr
 * 0000000140424148: btr     word ptr gs:860h, 2
 * 0000000140424153: jnb     short loc_140424163
 * 0000000140424155: mov     eax, 1
 * 000000014042415A: xor     edx, edx
 * 000000014042415C: mov     ecx, 49h ; 'I'
 * 0000000140424161: wrmsr
 * 0000000140424163: btr     word ptr gs:860h, 5
 * 000000014042416E: jnb     loc_1404242AB
 * 0000000140424174: call    loc_140424287
 * 0000000140424179: add     rsp, 8
 * 000000014042417D: call    loc_140424290
 * 0000000140424182: add     rsp, 8
 * 0000000140424186: call    loc_140424179
 * 000000014042418B: add     rsp, 8
 * 000000014042418F: call    loc_140424182
 * 0000000140424194: add     rsp, 8
 * 0000000140424198: call    loc_14042418B
 * 000000014042419D: add     rsp, 8
 * 00000001404241A1: call    loc_140424194
 * 00000001404241A6: add     rsp, 8
 * 00000001404241AA: call    loc_14042419D
 * 00000001404241AF: add     rsp, 8
 * 00000001404241B3: call    loc_1404241A6
 * 00000001404241B8: add     rsp, 8
 * 00000001404241BC: call    loc_1404241AF
 * 00000001404241C1: add     rsp, 8
 * 00000001404241C5: call    loc_1404241B8
 * 00000001404241CA: add     rsp, 8
 * 00000001404241CE: call    loc_1404241C1
 * 00000001404241D3: add     rsp, 8
 * 00000001404241D7: call    loc_1404241CA
 * 00000001404241DC: add     rsp, 8
 * 00000001404241E0: call    loc_1404241D3
 * 00000001404241E5: add     rsp, 8
 * 00000001404241E9: call    loc_1404241DC
 * 00000001404241EE: add     rsp, 8
 * 00000001404241F2: call    loc_1404241E5
 * 00000001404241F7: add     rsp, 8
 * 00000001404241FB: call    loc_1404241EE
 * 0000000140424200: add     rsp, 8
 * 0000000140424204: call    loc_1404241F7
 * 0000000140424209: add     rsp, 8
 * 000000014042420D: call    loc_140424200
 * 0000000140424212: add     rsp, 8
 * 0000000140424216: call    loc_140424209
 * 000000014042421B: add     rsp, 8
 * 000000014042421F: call    loc_140424212
 * 0000000140424224: add     rsp, 8
 * 0000000140424228: call    loc_14042421B
 * 000000014042422D: add     rsp, 8
 * 0000000140424231: call    loc_140424224
 * 0000000140424236: add     rsp, 8
 * 000000014042423A: call    loc_14042422D
 * 000000014042423F: add     rsp, 8
 * 0000000140424243: call    loc_140424236
 * 0000000140424248: add     rsp, 8
 * 000000014042424C: call    loc_14042423F
 * 0000000140424251: add     rsp, 8
 * 0000000140424255: call    loc_140424248
 * 000000014042425A: add     rsp, 8
 * 000000014042425E: call    loc_140424251
 * 0000000140424263: add     rsp, 8
 * 0000000140424267: call    loc_14042425A
 * 000000014042426C: add     rsp, 8
 * 0000000140424270: call    loc_140424263
 * 0000000140424275: add     rsp, 8
 * 0000000140424279: call    loc_14042426C
 * 000000014042427E: add     rsp, 8
 * 0000000140424282: call    loc_140424275
 * 0000000140424287: add     rsp, 8
 * 000000014042428B: call    loc_14042427E
 * 0000000140424290: add     rsp, 8
 * 0000000140424294: mov     eax, 0DADAh
 * 0000000140424299: test    byte ptr gs:862h, 8
 * 00000001404242A2: jz      short loc_1404242AB
 * 00000001404242A4: mov     al, 20h ; ' '
 * 00000001404242A6: incsspq rax
 * 00000001404242AB: test    word ptr gs:860h, 80h
 * 00000001404242B6: jz      short loc_1404242C4
 * 00000001404242B8: xor     eax, eax
 * 00000001404242BA: xor     edx, edx
 * 00000001404242BC: mov     ecx, 1
 * 00000001404242C1: div     rcx
 * 00000001404242C4: mov     rdx, [rbp-40h]
 * 00000001404242C8: mov     rcx, [rbp-48h]
 * 00000001404242CC: mov     rax, [rbp-50h]
 * 00000001404242D0: mov     rsp, rbp
 * 00000001404242D3: mov     rbp, [rbp+0D8h]
 * 00000001404242DA: add     rsp, 0E8h
 * 00000001404242E1: test    cs:KiKvaShadow, 1
 * 00000001404242E8: jz      short loc_1404242EF
 * 00000001404242EA: jmp     KiKernelExit
 * 00000001404242EF: test    word ptr gs:860h, 100h
 * 00000001404242FA: jz      short loc_140424301
 * 00000001404242FC: verw    [rsp-1E8h+arg_200]
 * 0000000140424301: swapgs
 * 0000000140424304: iretq
 * 0000000140424306: ldmxcsr dword ptr [rbp-54h]
 * 000000014042430A: movaps  xmm0, xmmword ptr [rbp-10h]
 * 000000014042430E: movaps  xmm1, xmmword ptr [rbp+0]
 * 0000000140424312: movaps  xmm2, xmmword ptr [rbp+10h]
 * 0000000140424316: movaps  xmm3, xmmword ptr [rbp+20h]
 * 000000014042431A: movaps  xmm4, xmmword ptr [rbp+30h]
 * 000000014042431E: movaps  xmm5, xmmword ptr [rbp+40h]
 * 0000000140424322: mov     r11, [rbp-20h]
 * 0000000140424326: mov     r10, [rbp-28h]
 * 000000014042432A: mov     r9, [rbp-30h]
 * 000000014042432E: mov     r8, [rbp-38h]
 * 0000000140424332: mov     rdx, [rbp-40h]
 * 0000000140424336: mov     rcx, [rbp-48h]
 * 000000014042433A: mov     rax, [rbp-50h]
 * 000000014042433E: mov     rsp, rbp
 * 0000000140424341: mov     rbp, [rbp+0D8h]
 * 0000000140424348: add     rsp, 0E8h
 * 000000014042434F: iretq
 */
