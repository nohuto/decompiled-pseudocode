/*
 * XREFs of KxStartUserThread @ 0x140423870
 * Callers:
 *     KyStartUserThread @ 0x140423520 (KyStartUserThread.c)
 * Callees:
 *     KiRestoreDebugRegisterState @ 0x14041E860 (KiRestoreDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x14041F680 (KiRestoreSetContextState.c)
 *     KxStartUserThread @ 0x140423870 (KxStartUserThread.c)
 *     KiInitiateUserApc @ 0x140424760 (KiInitiateUserApc.c)
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 *     KiUpdateStibpPairing @ 0x1404607C0 (KiUpdateStibpPairing.c)
 *     KiCopyCounters @ 0x140574240 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KxStartUserThread @ 0x140423870
 * Reason: Hex-Rays returned no pseudocode for 0x140423870
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140423870: sub     rsp, 138h
 * 0000000140423877: lea     rax, [rsp+138h+var_38]
 * 000000014042387F: movaps  [rsp+138h+var_108], xmm6
 * 0000000140423884: movaps  [rsp+138h+var_F8], xmm7
 * 0000000140423889: movaps  [rsp+138h+var_E8], xmm8
 * 000000014042388F: movaps  [rsp+138h+var_D8], xmm9
 * 0000000140423895: movaps  [rsp+138h+var_C8], xmm10
 * 000000014042389B: movaps  xmmword ptr [rax-80h], xmm11
 * 00000001404238A0: movaps  xmmword ptr [rax-70h], xmm12
 * 00000001404238A5: movaps  xmmword ptr [rax-60h], xmm13
 * 00000001404238AA: movaps  xmmword ptr [rax-50h], xmm14
 * 00000001404238AF: movaps  xmmword ptr [rax-40h], xmm15
 * 00000001404238B4: mov     [rax], rbx
 * 00000001404238B7: mov     [rax+8], rdi
 * 00000001404238BB: mov     [rax+10h], rsi
 * 00000001404238BF: mov     [rax+18h], r12
 * 00000001404238C3: mov     [rax+20h], r13
 * 00000001404238C7: mov     [rax+28h], r14
 * 00000001404238CB: mov     [rax+30h], r15
 * 00000001404238CF: nop
 * 00000001404238D0: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001404238D7: jz      short loc_1404238DC
 * 00000001404238D9: stac
 * 00000001404238DC: mov     ecx, 1
 * 00000001404238E1: mov     cr8, rcx
 * 00000001404238E5: mov     rdx, [rsp+138h+var_138]
 * 00000001404238E9: mov     rcx, [rsp+138h+var_130]
 * 00000001404238EE: mov     rax, [rsp+138h+var_128]
 * 00000001404238F3: call    _guard_dispatch_icall
 * 00000001404238F8: lea     rcx, [rsp+138h+var_38]
 * 0000000140423900: movaps  xmm6, [rsp+138h+var_108]
 * 0000000140423905: movaps  xmm7, [rsp+138h+var_F8]
 * 000000014042390A: movaps  xmm8, [rsp+138h+var_E8]
 * 0000000140423910: movaps  xmm9, [rsp+138h+var_D8]
 * 0000000140423916: movaps  xmm10, [rsp+138h+var_C8]
 * 000000014042391C: movaps  xmm11, xmmword ptr [rcx-80h]
 * 0000000140423921: movaps  xmm12, xmmword ptr [rcx-70h]
 * 0000000140423926: movaps  xmm13, xmmword ptr [rcx-60h]
 * 000000014042392B: movaps  xmm14, xmmword ptr [rcx-50h]
 * 0000000140423930: movaps  xmm15, xmmword ptr [rcx-40h]
 * 0000000140423935: mov     rbx, [rcx]
 * 0000000140423938: mov     rdi, [rcx+8]
 * 000000014042393C: mov     rsi, [rcx+10h]
 * 0000000140423940: mov     r12, [rcx+18h]
 * 0000000140423944: mov     r13, [rcx+20h]
 * 0000000140423948: mov     r14, [rcx+28h]
 * 000000014042394C: mov     r15, [rcx+30h]
 * 0000000140423950: cli
 * 0000000140423951: test    byte ptr [rbp+0F0h], 1
 * 0000000140423958: jz      loc_140423C46
 * 000000014042395E: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 0000000140423965: jz      short loc_14042396A
 * 0000000140423967: stac
 * 000000014042396A: mov     rcx, gs:188h
 * 0000000140423973: test    byte ptr [rcx+0C2h], 3
 * 000000014042397A: jz      short loc_140423997
 * 000000014042397C: mov     ecx, 1
 * 0000000140423981: mov     cr8, rcx
 * 0000000140423985: sti
 * 0000000140423986: call    KiInitiateUserApc
 * 000000014042398B: cli
 * 000000014042398C: mov     ecx, 0
 * 0000000140423991: mov     cr8, rcx
 * 0000000140423995: jmp     short loc_14042396A
 * 0000000140423997: test    byte ptr gs:86Ch, 2
 * 00000001404239A0: jz      short loc_1404239A9
 * 00000001404239A2: xor     ecx, ecx
 * 00000001404239A4: call    KiUpdateStibpPairing
 * 00000001404239A9: mov     rcx, gs:188h
 * 00000001404239B2: test    dword ptr [rcx], 8000000h
 * 00000001404239B8: jz      short loc_1404239BF
 * 00000001404239BA: call    KiRestoreSetContextState
 * 00000001404239BF: mov     rcx, gs:188h
 * 00000001404239C8: test    dword ptr [rcx], 10000h
 * 00000001404239CE: jz      short loc_1404239E4
 * 00000001404239D0: test    byte ptr [rcx+2], 1
 * 00000001404239D4: jz      short loc_1404239E4
 * 00000001404239D6: call    KiCopyCounters
 * 00000001404239DB: mov     rcx, gs:188h
 * 00000001404239E4: ldmxcsr dword ptr [rbp-54h]
 * 00000001404239E8: cmp     word ptr [rbp+80h], 0
 * 00000001404239F0: jz      short loc_1404239F7
 * 00000001404239F2: call    KiRestoreDebugRegisterState
 * 00000001404239F7: mov     rcx, gs:188h
 * 0000000140423A00: bt      dword ptr [rcx+74h], 16h
 * 0000000140423A05: jnb     short loc_140423A31
 * 0000000140423A07: xor     ecx, ecx
 * 0000000140423A09: rdsspq  rcx
 * 0000000140423A0E: mov     r8, gs:95A8h
 * 0000000140423A17: add     r8, 8
 * 0000000140423A1B: cmp     rcx, r8
 * 0000000140423A1E: jnz     short loc_140423A31
 * 0000000140423A20: mov     rcx, gs:95A0h
 * 0000000140423A29: rstorssp qword ptr [rcx]
 * 0000000140423A2D: saveprevssp
 * 0000000140423A31: movaps  xmm0, xmmword ptr [rbp-10h]
 * 0000000140423A35: movaps  xmm1, xmmword ptr [rbp+0]
 * 0000000140423A39: movaps  xmm2, xmmword ptr [rbp+10h]
 * 0000000140423A3D: movaps  xmm3, xmmword ptr [rbp+20h]
 * 0000000140423A41: movaps  xmm4, xmmword ptr [rbp+30h]
 * 0000000140423A45: movaps  xmm5, xmmword ptr [rbp+40h]
 * 0000000140423A49: mov     r11, [rbp-20h]
 * 0000000140423A4D: mov     r10, [rbp-28h]
 * 0000000140423A51: mov     r9, [rbp-30h]
 * 0000000140423A55: mov     r8, [rbp-38h]
 * 0000000140423A59: mov     byte ptr gs:856h, 0
 * 0000000140423A62: movzx   eax, word ptr gs:86Ah
 * 0000000140423A6B: cmp     gs:864h, ax
 * 0000000140423A74: jz      short loc_140423A88
 * 0000000140423A76: mov     gs:864h, ax
 * 0000000140423A7F: mov     ecx, 48h ; 'H'
 * 0000000140423A84: xor     edx, edx
 * 0000000140423A86: wrmsr
 * 0000000140423A88: btr     word ptr gs:860h, 2
 * 0000000140423A93: jnb     short loc_140423AA3
 * 0000000140423A95: mov     eax, 1
 * 0000000140423A9A: xor     edx, edx
 * 0000000140423A9C: mov     ecx, 49h ; 'I'
 * 0000000140423AA1: wrmsr
 * 0000000140423AA3: btr     word ptr gs:860h, 5
 * 0000000140423AAE: jnb     loc_140423BEB
 * 0000000140423AB4: call    loc_140423BC7
 * 0000000140423AB9: add     rsp, 8
 * 0000000140423ABD: call    loc_140423BD0
 * 0000000140423AC2: add     rsp, 8
 * 0000000140423AC6: call    loc_140423AB9
 * 0000000140423ACB: add     rsp, 8
 * 0000000140423ACF: call    loc_140423AC2
 * 0000000140423AD4: add     rsp, 8
 * 0000000140423AD8: call    loc_140423ACB
 * 0000000140423ADD: add     rsp, 8
 * 0000000140423AE1: call    loc_140423AD4
 * 0000000140423AE6: add     rsp, 8
 * 0000000140423AEA: call    loc_140423ADD
 * 0000000140423AEF: add     rsp, 8
 * 0000000140423AF3: call    loc_140423AE6
 * 0000000140423AF8: add     rsp, 8
 * 0000000140423AFC: call    loc_140423AEF
 * 0000000140423B01: add     rsp, 8
 * 0000000140423B05: call    loc_140423AF8
 * 0000000140423B0A: add     rsp, 8
 * 0000000140423B0E: call    loc_140423B01
 * 0000000140423B13: add     rsp, 8
 * 0000000140423B17: call    loc_140423B0A
 * 0000000140423B1C: add     rsp, 8
 * 0000000140423B20: call    loc_140423B13
 * 0000000140423B25: add     rsp, 8
 * 0000000140423B29: call    loc_140423B1C
 * 0000000140423B2E: add     rsp, 8
 * 0000000140423B32: call    loc_140423B25
 * 0000000140423B37: add     rsp, 8
 * 0000000140423B3B: call    loc_140423B2E
 * 0000000140423B40: add     rsp, 8
 * 0000000140423B44: call    loc_140423B37
 * 0000000140423B49: add     rsp, 8
 * 0000000140423B4D: call    loc_140423B40
 * 0000000140423B52: add     rsp, 8
 * 0000000140423B56: call    loc_140423B49
 * 0000000140423B5B: add     rsp, 8
 * 0000000140423B5F: call    loc_140423B52
 * 0000000140423B64: add     rsp, 8
 * 0000000140423B68: call    loc_140423B5B
 * 0000000140423B6D: add     rsp, 8
 * 0000000140423B71: call    loc_140423B64
 * 0000000140423B76: add     rsp, 8
 * 0000000140423B7A: call    loc_140423B6D
 * 0000000140423B7F: add     rsp, 8
 * 0000000140423B83: call    loc_140423B76
 * 0000000140423B88: add     rsp, 8
 * 0000000140423B8C: call    loc_140423B7F
 * 0000000140423B91: add     rsp, 8
 * 0000000140423B95: call    loc_140423B88
 * 0000000140423B9A: add     rsp, 8
 * 0000000140423B9E: call    loc_140423B91
 * 0000000140423BA3: add     rsp, 8
 * 0000000140423BA7: call    loc_140423B9A
 * 0000000140423BAC: add     rsp, 8
 * 0000000140423BB0: call    loc_140423BA3
 * 0000000140423BB5: add     rsp, 8
 * 0000000140423BB9: call    loc_140423BAC
 * 0000000140423BBE: add     rsp, 8
 * 0000000140423BC2: call    loc_140423BB5
 * 0000000140423BC7: add     rsp, 8
 * 0000000140423BCB: call    loc_140423BBE
 * 0000000140423BD0: add     rsp, 8
 * 0000000140423BD4: mov     eax, 0DADAh
 * 0000000140423BD9: test    byte ptr gs:862h, 8
 * 0000000140423BE2: jz      short loc_140423BEB
 * 0000000140423BE4: mov     al, 20h ; ' '
 * 0000000140423BE6: incsspq rax
 * 0000000140423BEB: test    word ptr gs:860h, 80h
 * 0000000140423BF6: jz      short loc_140423C04
 * 0000000140423BF8: xor     eax, eax
 * 0000000140423BFA: xor     edx, edx
 * 0000000140423BFC: mov     ecx, 1
 * 0000000140423C01: div     rcx
 * 0000000140423C04: mov     rdx, [rbp-40h]
 * 0000000140423C08: mov     rcx, [rbp-48h]
 * 0000000140423C0C: mov     rax, [rbp-50h]
 * 0000000140423C10: mov     rsp, rbp
 * 0000000140423C13: mov     rbp, [rbp+0D8h]
 * 0000000140423C1A: add     rsp, 0E8h
 * 0000000140423C21: test    cs:KiKvaShadow, 1
 * 0000000140423C28: jz      short loc_140423C2F
 * 0000000140423C2A: jmp     KiKernelExit
 * 0000000140423C2F: test    word ptr gs:860h, 100h
 * 0000000140423C3A: jz      short loc_140423C41
 * 0000000140423C3C: verw    [rsp-1E8h+arg_200]
 * 0000000140423C41: swapgs
 * 0000000140423C44: iretq
 * 0000000140423C46: ldmxcsr dword ptr [rbp-54h]
 * 0000000140423C4A: movaps  xmm0, xmmword ptr [rbp-10h]
 * 0000000140423C4E: movaps  xmm1, xmmword ptr [rbp+0]
 * 0000000140423C52: movaps  xmm2, xmmword ptr [rbp+10h]
 * 0000000140423C56: movaps  xmm3, xmmword ptr [rbp+20h]
 * 0000000140423C5A: movaps  xmm4, xmmword ptr [rbp+30h]
 * 0000000140423C5E: movaps  xmm5, xmmword ptr [rbp+40h]
 * 0000000140423C62: mov     r11, [rbp-20h]
 * 0000000140423C66: mov     r10, [rbp-28h]
 * 0000000140423C6A: mov     r9, [rbp-30h]
 * 0000000140423C6E: mov     r8, [rbp-38h]
 * 0000000140423C72: mov     rdx, [rbp-40h]
 * 0000000140423C76: mov     rcx, [rbp-48h]
 * 0000000140423C7A: mov     rax, [rbp-50h]
 * 0000000140423C7E: mov     rsp, rbp
 * 0000000140423C81: mov     rbp, [rbp+0D8h]
 * 0000000140423C88: add     rsp, 0E8h
 * 0000000140423C8F: iretq
 */
