/*
 * XREFs of KiVmbusInterruptDispatch @ 0x140425D70
 * Callers:
 *     KiVmbusInterrupt0 @ 0x140424BA0 (KiVmbusInterrupt0.c)
 *     KiVmbusInterrupt1 @ 0x140424F00 (KiVmbusInterrupt1.c)
 *     KiVmbusInterrupt2 @ 0x140425260 (KiVmbusInterrupt2.c)
 *     KiVmbusInterrupt3 @ 0x1404255C0 (KiVmbusInterrupt3.c)
 * Callees:
 *     HalRequestSoftwareInterrupt @ 0x140254BF0 (HalRequestSoftwareInterrupt.c)
 *     KiBeginThreadAccountingPeriod @ 0x140308C80 (KiBeginThreadAccountingPeriod.c)
 *     KiRestoreDebugRegisterState @ 0x14041E860 (KiRestoreDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x14041F680 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x140424760 (KiInitiateUserApc.c)
 *     KiVmbusInterruptDispatch @ 0x140425D70 (KiVmbusInterruptDispatch.c)
 *     KiVmbusInterruptSubDispatch @ 0x140426300 (KiVmbusInterruptSubDispatch.c)
 *     KiDpcInterruptBypass @ 0x140427320 (KiDpcInterruptBypass.c)
 *     KiUpdateStibpPairing @ 0x1404607C0 (KiUpdateStibpPairing.c)
 *     KzSetIrqlUnsafe @ 0x14056C100 (KzSetIrqlUnsafe.c)
 *     KiCopyCounters @ 0x140574240 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiVmbusInterruptDispatch @ 0x140425D70
 * Reason: Hex-Rays returned no pseudocode for 0x140425D70
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140425D70: mov     rdx, rsp
 * 0000000140425D73: mov     rcx, gs:8B58h
 * 0000000140425D7C: lea     rax, [rcx-6000h]
 * 0000000140425D83: cmp     rax, rsp
 * 0000000140425D86: ja      short loc_140425D8D
 * 0000000140425D88: cmp     rsp, rcx
 * 0000000140425D8B: jb      short loc_140425D99
 * 0000000140425D8D: cmp     cs:KiBugCheckActive, 0
 * 0000000140425D94: jnz     short loc_140425D99
 * 0000000140425D96: mov     rsp, rcx
 * 0000000140425D99: sub     rsp, 20h
 * 0000000140425D9D: mov     [rsp+20h+var_10], rdx
 * 0000000140425DA2: call    KiVmbusInterruptSubDispatch
 * 0000000140425DA7: mov     rsp, [rsp+20h+var_10]
 * 0000000140425DAC: cli
 * 0000000140425DAD: mov     rcx, gs:20h
 * 0000000140425DB6: cmp     byte ptr [rcx+20h], 1
 * 0000000140425DBA: ja      short loc_140425E36
 * 0000000140425DBC: rdtsc
 * 0000000140425DBE: shl     rdx, 20h
 * 0000000140425DC2: or      rax, rdx
 * 0000000140425DC5: sub     rax, [rcx+8180h]
 * 0000000140425DCC: add     [rcx+8278h], rax
 * 0000000140425DD3: add     [rcx+8180h], rax
 * 0000000140425DDA: mov     r8, rax
 * 0000000140425DDD: mov     rax, [rcx+8]
 * 0000000140425DE1: test    byte ptr [rax+2], 72h
 * 0000000140425DE5: jz      short loc_140425DFA
 * 0000000140425DE7: xor     edx, edx
 * 0000000140425DE9: call    KiBeginThreadAccountingPeriod
 * 0000000140425DEE: mov     rcx, gs:20h
 * 0000000140425DF7: inc     byte ptr [rcx+20h]
 * 0000000140425DFA: mov     dl, [rcx+6]
 * 0000000140425DFD: and     byte ptr [rcx+6], 0
 * 0000000140425E01: cmp     byte ptr [rcx+7], 0
 * 0000000140425E05: jnz     short loc_140425E36
 * 0000000140425E07: test    dl, dl
 * 0000000140425E09: jz      short loc_140425E36
 * 0000000140425E0B: cmp     byte ptr [rbp-57h], 2
 * 0000000140425E0F: jnb     short loc_140425E1C
 * 0000000140425E11: and     byte ptr [rcx+20h], 0
 * 0000000140425E15: call    KiDpcInterruptBypass
 * 0000000140425E1A: jmp     short loc_140425E39
 * 0000000140425E1C: mov     ecx, 2
 * 0000000140425E21: call    cs:__imp_HalRequestSoftwareInterrupt
 * 0000000140425E28: nop     dword ptr [rax+rax+00h]
 * 0000000140425E2D: mov     rcx, gs:20h
 * 0000000140425E36: dec     byte ptr [rcx+20h]
 * 0000000140425E39: movzx   ecx, byte ptr [rbp-57h]
 * 0000000140425E3D: cmp     cs:KiIrqlFlags, 0
 * 0000000140425E44: jz      short loc_140425E4D
 * 0000000140425E46: call    KzSetIrqlUnsafe
 * 0000000140425E4B: jmp     short loc_140425E51
 * 0000000140425E4D: mov     cr8, rcx
 * 0000000140425E51: mov     rsi, [rbp+0D0h]
 * 0000000140425E58: cli
 * 0000000140425E59: test    byte ptr [rbp+0F0h], 1
 * 0000000140425E60: jz      loc_14042614E
 * 0000000140425E66: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 0000000140425E6D: jz      short loc_140425E72
 * 0000000140425E6F: stac
 * 0000000140425E72: mov     rcx, gs:188h
 * 0000000140425E7B: test    byte ptr [rcx+0C2h], 3
 * 0000000140425E82: jz      short loc_140425E9F
 * 0000000140425E84: mov     ecx, 1
 * 0000000140425E89: mov     cr8, rcx
 * 0000000140425E8D: sti
 * 0000000140425E8E: call    KiInitiateUserApc
 * 0000000140425E93: cli
 * 0000000140425E94: mov     ecx, 0
 * 0000000140425E99: mov     cr8, rcx
 * 0000000140425E9D: jmp     short loc_140425E72
 * 0000000140425E9F: test    byte ptr gs:86Ch, 2
 * 0000000140425EA8: jz      short loc_140425EB1
 * 0000000140425EAA: xor     ecx, ecx
 * 0000000140425EAC: call    KiUpdateStibpPairing
 * 0000000140425EB1: mov     rcx, gs:188h
 * 0000000140425EBA: test    dword ptr [rcx], 8000000h
 * 0000000140425EC0: jz      short loc_140425EC7
 * 0000000140425EC2: call    KiRestoreSetContextState
 * 0000000140425EC7: mov     rcx, gs:188h
 * 0000000140425ED0: test    dword ptr [rcx], 10000h
 * 0000000140425ED6: jz      short loc_140425EEC
 * 0000000140425ED8: test    byte ptr [rcx+2], 1
 * 0000000140425EDC: jz      short loc_140425EEC
 * 0000000140425EDE: call    KiCopyCounters
 * 0000000140425EE3: mov     rcx, gs:188h
 * 0000000140425EEC: ldmxcsr dword ptr [rbp-54h]
 * 0000000140425EF0: cmp     word ptr [rbp+80h], 0
 * 0000000140425EF8: jz      short loc_140425EFF
 * 0000000140425EFA: call    KiRestoreDebugRegisterState
 * 0000000140425EFF: mov     rcx, gs:188h
 * 0000000140425F08: bt      dword ptr [rcx+74h], 16h
 * 0000000140425F0D: jnb     short loc_140425F39
 * 0000000140425F0F: xor     ecx, ecx
 * 0000000140425F11: rdsspq  rcx
 * 0000000140425F16: mov     r8, gs:95A8h
 * 0000000140425F1F: add     r8, 8
 * 0000000140425F23: cmp     rcx, r8
 * 0000000140425F26: jnz     short loc_140425F39
 * 0000000140425F28: mov     rcx, gs:95A0h
 * 0000000140425F31: rstorssp qword ptr [rcx]
 * 0000000140425F35: saveprevssp
 * 0000000140425F39: movaps  xmm0, xmmword ptr [rbp-10h]
 * 0000000140425F3D: movaps  xmm1, xmmword ptr [rbp+0]
 * 0000000140425F41: movaps  xmm2, xmmword ptr [rbp+10h]
 * 0000000140425F45: movaps  xmm3, xmmword ptr [rbp+20h]
 * 0000000140425F49: movaps  xmm4, xmmword ptr [rbp+30h]
 * 0000000140425F4D: movaps  xmm5, xmmword ptr [rbp+40h]
 * 0000000140425F51: mov     r11, [rbp-20h]
 * 0000000140425F55: mov     r10, [rbp-28h]
 * 0000000140425F59: mov     r9, [rbp-30h]
 * 0000000140425F5D: mov     r8, [rbp-38h]
 * 0000000140425F61: mov     byte ptr gs:856h, 0
 * 0000000140425F6A: movzx   eax, word ptr gs:86Ah
 * 0000000140425F73: cmp     gs:864h, ax
 * 0000000140425F7C: jz      short loc_140425F90
 * 0000000140425F7E: mov     gs:864h, ax
 * 0000000140425F87: mov     ecx, 48h ; 'H'
 * 0000000140425F8C: xor     edx, edx
 * 0000000140425F8E: wrmsr
 * 0000000140425F90: btr     word ptr gs:860h, 2
 * 0000000140425F9B: jnb     short loc_140425FAB
 * 0000000140425F9D: mov     eax, 1
 * 0000000140425FA2: xor     edx, edx
 * 0000000140425FA4: mov     ecx, 49h ; 'I'
 * 0000000140425FA9: wrmsr
 * 0000000140425FAB: btr     word ptr gs:860h, 5
 * 0000000140425FB6: jnb     loc_1404260F3
 * 0000000140425FBC: call    loc_1404260CF
 * 0000000140425FC1: add     rsp, 8
 * 0000000140425FC5: call    loc_1404260D8
 * 0000000140425FCA: add     rsp, 8
 * 0000000140425FCE: call    loc_140425FC1
 * 0000000140425FD3: add     rsp, 8
 * 0000000140425FD7: call    loc_140425FCA
 * 0000000140425FDC: add     rsp, 8
 * 0000000140425FE0: call    loc_140425FD3
 * 0000000140425FE5: add     rsp, 8
 * 0000000140425FE9: call    loc_140425FDC
 * 0000000140425FEE: add     rsp, 8
 * 0000000140425FF2: call    loc_140425FE5
 * 0000000140425FF7: add     rsp, 8
 * 0000000140425FFB: call    loc_140425FEE
 * 0000000140426000: add     rsp, 8
 * 0000000140426004: call    loc_140425FF7
 * 0000000140426009: add     rsp, 8
 * 000000014042600D: call    loc_140426000
 * 0000000140426012: add     rsp, 8
 * 0000000140426016: call    loc_140426009
 * 000000014042601B: add     rsp, 8
 * 000000014042601F: call    loc_140426012
 * 0000000140426024: add     rsp, 8
 * 0000000140426028: call    loc_14042601B
 * 000000014042602D: add     rsp, 8
 * 0000000140426031: call    loc_140426024
 * 0000000140426036: add     rsp, 8
 * 000000014042603A: call    loc_14042602D
 * 000000014042603F: add     rsp, 8
 * 0000000140426043: call    loc_140426036
 * 0000000140426048: add     rsp, 8
 * 000000014042604C: call    loc_14042603F
 * 0000000140426051: add     rsp, 8
 * 0000000140426055: call    loc_140426048
 * 000000014042605A: add     rsp, 8
 * 000000014042605E: call    loc_140426051
 * 0000000140426063: add     rsp, 8
 * 0000000140426067: call    loc_14042605A
 * 000000014042606C: add     rsp, 8
 * 0000000140426070: call    loc_140426063
 * 0000000140426075: add     rsp, 8
 * 0000000140426079: call    loc_14042606C
 * 000000014042607E: add     rsp, 8
 * 0000000140426082: call    loc_140426075
 * 0000000140426087: add     rsp, 8
 * 000000014042608B: call    loc_14042607E
 * 0000000140426090: add     rsp, 8
 * 0000000140426094: call    loc_140426087
 * 0000000140426099: add     rsp, 8
 * 000000014042609D: call    loc_140426090
 * 00000001404260A2: add     rsp, 8
 * 00000001404260A6: call    loc_140426099
 * 00000001404260AB: add     rsp, 8
 * 00000001404260AF: call    loc_1404260A2
 * 00000001404260B4: add     rsp, 8
 * 00000001404260B8: call    loc_1404260AB
 * 00000001404260BD: add     rsp, 8
 * 00000001404260C1: call    loc_1404260B4
 * 00000001404260C6: add     rsp, 8
 * 00000001404260CA: call    loc_1404260BD
 * 00000001404260CF: add     rsp, 8
 * 00000001404260D3: call    loc_1404260C6
 * 00000001404260D8: add     rsp, 8
 * 00000001404260DC: mov     eax, 0DADAh
 * 00000001404260E1: test    byte ptr gs:862h, 8
 * 00000001404260EA: jz      short loc_1404260F3
 * 00000001404260EC: mov     al, 20h ; ' '
 * 00000001404260EE: incsspq rax
 * 00000001404260F3: test    word ptr gs:860h, 80h
 * 00000001404260FE: jz      short loc_14042610C
 * 0000000140426100: xor     eax, eax
 * 0000000140426102: xor     edx, edx
 * 0000000140426104: mov     ecx, 1
 * 0000000140426109: div     rcx
 * 000000014042610C: mov     rdx, [rbp-40h]
 * 0000000140426110: mov     rcx, [rbp-48h]
 * 0000000140426114: mov     rax, [rbp-50h]
 * 0000000140426118: mov     rsp, rbp
 * 000000014042611B: mov     rbp, [rbp+0D8h]
 * 0000000140426122: add     rsp, 0E8h
 * 0000000140426129: test    cs:KiKvaShadow, 1
 * 0000000140426130: jz      short loc_140426137
 * 0000000140426132: jmp     KiKernelExit
 * 0000000140426137: test    word ptr gs:860h, 100h
 * 0000000140426142: jz      short loc_140426149
 * 0000000140426144: verw    [rsp-1C8h+arg_1E0]
 * 0000000140426149: swapgs
 * 000000014042614C: iretq
 * 000000014042614E: ldmxcsr dword ptr [rbp-54h]
 * 0000000140426152: movaps  xmm0, xmmword ptr [rbp-10h]
 * 0000000140426156: movaps  xmm1, xmmword ptr [rbp+0]
 * 000000014042615A: movaps  xmm2, xmmword ptr [rbp+10h]
 * 000000014042615E: movaps  xmm3, xmmword ptr [rbp+20h]
 * 0000000140426162: movaps  xmm4, xmmword ptr [rbp+30h]
 * 0000000140426166: movaps  xmm5, xmmword ptr [rbp+40h]
 * 000000014042616A: mov     r11, [rbp-20h]
 * 000000014042616E: mov     r10, [rbp-28h]
 * 0000000140426172: mov     r9, [rbp-30h]
 * 0000000140426176: mov     r8, [rbp-38h]
 * 000000014042617A: mov     rdx, [rbp-40h]
 * 000000014042617E: mov     rcx, [rbp-48h]
 * 0000000140426182: mov     rax, [rbp-50h]
 * 0000000140426186: mov     rsp, rbp
 * 0000000140426189: mov     rbp, [rbp+0D8h]
 * 0000000140426190: add     rsp, 0E8h
 * 0000000140426197: iretq
 */
