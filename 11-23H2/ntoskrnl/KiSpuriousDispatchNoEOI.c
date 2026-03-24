/*
 * XREFs of KiSpuriousDispatchNoEOI @ 0x140421D60
 * Callers:
 *     <none>
 * Callees:
 *     KiEndThreadAccountingPeriod @ 0x140248430 (KiEndThreadAccountingPeriod.c)
 *     HalRequestSoftwareInterrupt @ 0x140254D10 (HalRequestSoftwareInterrupt.c)
 *     KiBeginThreadAccountingPeriod @ 0x140308DB0 (KiBeginThreadAccountingPeriod.c)
 *     KiRestoreDebugRegisterState @ 0x14041EF20 (KiRestoreDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x14041FD40 (KiRestoreSetContextState.c)
 *     KiSpuriousDispatchNoEOI @ 0x140421D60 (KiSpuriousDispatchNoEOI.c)
 *     KiInitiateUserApc @ 0x140424E20 (KiInitiateUserApc.c)
 *     KiDpcInterruptBypass @ 0x1404279E0 (KiDpcInterruptBypass.c)
 *     KiUpdateStibpPairing @ 0x140460E20 (KiUpdateStibpPairing.c)
 *     KzSetIrqlUnsafe @ 0x14056C060 (KzSetIrqlUnsafe.c)
 *     KiCopyCounters @ 0x1405741A0 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiSpuriousDispatchNoEOI @ 0x140421D60
 * Reason: Hex-Rays returned no pseudocode for 0x140421D60
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140421D60: mov     ecx, 0Fh
 * 0000000140421D65: cmp     cs:KiIrqlFlags, 0
 * 0000000140421D6C: jz      short loc_140421D75
 * 0000000140421D6E: call    KzSetIrqlUnsafe
 * 0000000140421D73: jmp     short loc_140421D7D
 * 0000000140421D75: mov     rax, cr8
 * 0000000140421D79: mov     cr8, rcx
 * 0000000140421D7D: mov     [rbp-57h], al
 * 0000000140421D80: mov     rcx, gs:20h
 * 0000000140421D89: inc     byte ptr [rcx+20h]
 * 0000000140421D8C: cmp     byte ptr [rcx+20h], 1
 * 0000000140421D90: jnz     short loc_140421DE2
 * 0000000140421D92: rdtsc
 * 0000000140421D94: shl     rdx, 20h
 * 0000000140421D98: or      rax, rdx
 * 0000000140421D9B: mov     r8, [rcx+8]
 * 0000000140421D9F: sub     rax, [rcx+8180h]
 * 0000000140421DA6: add     [r8+48h], rax
 * 0000000140421DAA: mov     edx, [r8+50h]
 * 0000000140421DAE: add     [rcx+8180h], rax
 * 0000000140421DB5: add     rdx, rax
 * 0000000140421DB8: mov     ecx, edx
 * 0000000140421DBA: shr     rdx, 20h
 * 0000000140421DBE: jz      short loc_140421DC3
 * 0000000140421DC0: or      ecx, 0FFFFFFFFh
 * 0000000140421DC3: mov     [r8+50h], ecx
 * 0000000140421DC7: test    byte ptr [r8+2], 0BEh
 * 0000000140421DCC: jz      short loc_140421DE2
 * 0000000140421DCE: mov     rdx, r8
 * 0000000140421DD1: mov     r8, rax
 * 0000000140421DD4: mov     rcx, gs:20h
 * 0000000140421DDD: call    KiEndThreadAccountingPeriod
 * 0000000140421DE2: sti
 * 0000000140421DE3: inc     dword ptr [rsi+74h]
 * 0000000140421DE6: cli
 * 0000000140421DE7: mov     rcx, gs:20h
 * 0000000140421DF0: cmp     byte ptr [rcx+20h], 1
 * 0000000140421DF4: ja      short loc_140421E70
 * 0000000140421DF6: rdtsc
 * 0000000140421DF8: shl     rdx, 20h
 * 0000000140421DFC: or      rax, rdx
 * 0000000140421DFF: sub     rax, [rcx+8180h]
 * 0000000140421E06: add     [rcx+8278h], rax
 * 0000000140421E0D: add     [rcx+8180h], rax
 * 0000000140421E14: mov     r8, rax
 * 0000000140421E17: mov     rax, [rcx+8]
 * 0000000140421E1B: test    byte ptr [rax+2], 72h
 * 0000000140421E1F: jz      short loc_140421E34
 * 0000000140421E21: xor     edx, edx
 * 0000000140421E23: call    KiBeginThreadAccountingPeriod
 * 0000000140421E28: mov     rcx, gs:20h
 * 0000000140421E31: inc     byte ptr [rcx+20h]
 * 0000000140421E34: mov     dl, [rcx+6]
 * 0000000140421E37: and     byte ptr [rcx+6], 0
 * 0000000140421E3B: cmp     byte ptr [rcx+7], 0
 * 0000000140421E3F: jnz     short loc_140421E70
 * 0000000140421E41: test    dl, dl
 * 0000000140421E43: jz      short loc_140421E70
 * 0000000140421E45: cmp     byte ptr [rbp-57h], 2
 * 0000000140421E49: jnb     short loc_140421E56
 * 0000000140421E4B: and     byte ptr [rcx+20h], 0
 * 0000000140421E4F: call    KiDpcInterruptBypass
 * 0000000140421E54: jmp     short loc_140421E73
 * 0000000140421E56: mov     ecx, 2
 * 0000000140421E5B: call    cs:__imp_HalRequestSoftwareInterrupt
 * 0000000140421E62: nop     dword ptr [rax+rax+00h]
 * 0000000140421E67: mov     rcx, gs:20h
 * 0000000140421E70: dec     byte ptr [rcx+20h]
 * 0000000140421E73: movzx   ecx, byte ptr [rbp-57h]
 * 0000000140421E77: cmp     cs:KiIrqlFlags, 0
 * 0000000140421E7E: jz      short loc_140421E87
 * 0000000140421E80: call    KzSetIrqlUnsafe
 * 0000000140421E85: jmp     short loc_140421E8B
 * 0000000140421E87: mov     cr8, rcx
 * 0000000140421E8B: mov     rsi, [rbp+0D0h]
 * 0000000140421E92: cli
 * 0000000140421E93: test    byte ptr [rbp+0F0h], 1
 * 0000000140421E9A: jz      loc_140422188
 * 0000000140421EA0: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 0000000140421EA7: jz      short loc_140421EAC
 * 0000000140421EA9: stac
 * 0000000140421EAC: mov     rcx, gs:188h
 * 0000000140421EB5: test    byte ptr [rcx+0C2h], 3
 * 0000000140421EBC: jz      short loc_140421ED9
 * 0000000140421EBE: mov     ecx, 1
 * 0000000140421EC3: mov     cr8, rcx
 * 0000000140421EC7: sti
 * 0000000140421EC8: call    KiInitiateUserApc
 * 0000000140421ECD: cli
 * 0000000140421ECE: mov     ecx, 0
 * 0000000140421ED3: mov     cr8, rcx
 * 0000000140421ED7: jmp     short loc_140421EAC
 * 0000000140421ED9: test    byte ptr gs:86Ch, 2
 * 0000000140421EE2: jz      short loc_140421EEB
 * 0000000140421EE4: xor     ecx, ecx
 * 0000000140421EE6: call    KiUpdateStibpPairing
 * 0000000140421EEB: mov     rcx, gs:188h
 * 0000000140421EF4: test    dword ptr [rcx], 8000000h
 * 0000000140421EFA: jz      short loc_140421F01
 * 0000000140421EFC: call    KiRestoreSetContextState
 * 0000000140421F01: mov     rcx, gs:188h
 * 0000000140421F0A: test    dword ptr [rcx], 10000h
 * 0000000140421F10: jz      short loc_140421F26
 * 0000000140421F12: test    byte ptr [rcx+2], 1
 * 0000000140421F16: jz      short loc_140421F26
 * 0000000140421F18: call    KiCopyCounters
 * 0000000140421F1D: mov     rcx, gs:188h
 * 0000000140421F26: ldmxcsr dword ptr [rbp-54h]
 * 0000000140421F2A: cmp     word ptr [rbp+80h], 0
 * 0000000140421F32: jz      short loc_140421F39
 * 0000000140421F34: call    KiRestoreDebugRegisterState
 * 0000000140421F39: mov     rcx, gs:188h
 * 0000000140421F42: bt      dword ptr [rcx+74h], 16h
 * 0000000140421F47: jnb     short loc_140421F73
 * 0000000140421F49: xor     ecx, ecx
 * 0000000140421F4B: rdsspq  rcx
 * 0000000140421F50: mov     r8, gs:95A8h
 * 0000000140421F59: add     r8, 8
 * 0000000140421F5D: cmp     rcx, r8
 * 0000000140421F60: jnz     short loc_140421F73
 * 0000000140421F62: mov     rcx, gs:95A0h
 * 0000000140421F6B: rstorssp qword ptr [rcx]
 * 0000000140421F6F: saveprevssp
 * 0000000140421F73: movaps  xmm0, xmmword ptr [rbp-10h]
 * 0000000140421F77: movaps  xmm1, xmmword ptr [rbp+0]
 * 0000000140421F7B: movaps  xmm2, xmmword ptr [rbp+10h]
 * 0000000140421F7F: movaps  xmm3, xmmword ptr [rbp+20h]
 * 0000000140421F83: movaps  xmm4, xmmword ptr [rbp+30h]
 * 0000000140421F87: movaps  xmm5, xmmword ptr [rbp+40h]
 * 0000000140421F8B: mov     r11, [rbp-20h]
 * 0000000140421F8F: mov     r10, [rbp-28h]
 * 0000000140421F93: mov     r9, [rbp-30h]
 * 0000000140421F97: mov     r8, [rbp-38h]
 * 0000000140421F9B: mov     byte ptr gs:856h, 0
 * 0000000140421FA4: movzx   eax, word ptr gs:86Ah
 * 0000000140421FAD: cmp     gs:864h, ax
 * 0000000140421FB6: jz      short loc_140421FCA
 * 0000000140421FB8: mov     gs:864h, ax
 * 0000000140421FC1: mov     ecx, 48h ; 'H'
 * 0000000140421FC6: xor     edx, edx
 * 0000000140421FC8: wrmsr
 * 0000000140421FCA: btr     word ptr gs:860h, 2
 * 0000000140421FD5: jnb     short loc_140421FE5
 * 0000000140421FD7: mov     eax, 1
 * 0000000140421FDC: xor     edx, edx
 * 0000000140421FDE: mov     ecx, 49h ; 'I'
 * 0000000140421FE3: wrmsr
 * 0000000140421FE5: btr     word ptr gs:860h, 5
 * 0000000140421FF0: jnb     loc_14042212D
 * 0000000140421FF6: call    loc_140422109
 * 0000000140421FFB: add     rsp, 8
 * 0000000140421FFF: call    loc_140422112
 * 0000000140422004: add     rsp, 8
 * 0000000140422008: call    loc_140421FFB
 * 000000014042200D: add     rsp, 8
 * 0000000140422011: call    loc_140422004
 * 0000000140422016: add     rsp, 8
 * 000000014042201A: call    loc_14042200D
 * 000000014042201F: add     rsp, 8
 * 0000000140422023: call    loc_140422016
 * 0000000140422028: add     rsp, 8
 * 000000014042202C: call    loc_14042201F
 * 0000000140422031: add     rsp, 8
 * 0000000140422035: call    loc_140422028
 * 000000014042203A: add     rsp, 8
 * 000000014042203E: call    loc_140422031
 * 0000000140422043: add     rsp, 8
 * 0000000140422047: call    loc_14042203A
 * 000000014042204C: add     rsp, 8
 * 0000000140422050: call    loc_140422043
 * 0000000140422055: add     rsp, 8
 * 0000000140422059: call    loc_14042204C
 * 000000014042205E: add     rsp, 8
 * 0000000140422062: call    loc_140422055
 * 0000000140422067: add     rsp, 8
 * 000000014042206B: call    loc_14042205E
 * 0000000140422070: add     rsp, 8
 * 0000000140422074: call    loc_140422067
 * 0000000140422079: add     rsp, 8
 * 000000014042207D: call    loc_140422070
 * 0000000140422082: add     rsp, 8
 * 0000000140422086: call    loc_140422079
 * 000000014042208B: add     rsp, 8
 * 000000014042208F: call    loc_140422082
 * 0000000140422094: add     rsp, 8
 * 0000000140422098: call    loc_14042208B
 * 000000014042209D: add     rsp, 8
 * 00000001404220A1: call    loc_140422094
 * 00000001404220A6: add     rsp, 8
 * 00000001404220AA: call    loc_14042209D
 * 00000001404220AF: add     rsp, 8
 * 00000001404220B3: call    loc_1404220A6
 * 00000001404220B8: add     rsp, 8
 * 00000001404220BC: call    loc_1404220AF
 * 00000001404220C1: add     rsp, 8
 * 00000001404220C5: call    loc_1404220B8
 * 00000001404220CA: add     rsp, 8
 * 00000001404220CE: call    loc_1404220C1
 * 00000001404220D3: add     rsp, 8
 * 00000001404220D7: call    loc_1404220CA
 * 00000001404220DC: add     rsp, 8
 * 00000001404220E0: call    loc_1404220D3
 * 00000001404220E5: add     rsp, 8
 * 00000001404220E9: call    loc_1404220DC
 * 00000001404220EE: add     rsp, 8
 * 00000001404220F2: call    loc_1404220E5
 * 00000001404220F7: add     rsp, 8
 * 00000001404220FB: call    loc_1404220EE
 * 0000000140422100: add     rsp, 8
 * 0000000140422104: call    loc_1404220F7
 * 0000000140422109: add     rsp, 8
 * 000000014042210D: call    loc_140422100
 * 0000000140422112: add     rsp, 8
 * 0000000140422116: mov     eax, 0DADAh
 * 000000014042211B: test    byte ptr gs:862h, 8
 * 0000000140422124: jz      short loc_14042212D
 * 0000000140422126: mov     al, 20h ; ' '
 * 0000000140422128: incsspq rax
 * 000000014042212D: test    word ptr gs:860h, 80h
 * 0000000140422138: jz      short loc_140422146
 * 000000014042213A: xor     eax, eax
 * 000000014042213C: xor     edx, edx
 * 000000014042213E: mov     ecx, 1
 * 0000000140422143: div     rcx
 * 0000000140422146: mov     rdx, [rbp-40h]
 * 000000014042214A: mov     rcx, [rbp-48h]
 * 000000014042214E: mov     rax, [rbp-50h]
 * 0000000140422152: mov     rsp, rbp
 * 0000000140422155: mov     rbp, [rbp+0D8h]
 * 000000014042215C: add     rsp, 0E8h
 * 0000000140422163: test    cs:KiKvaShadow, 1
 * 000000014042216A: jz      short loc_140422171
 * 000000014042216C: jmp     KiKernelExit
 * 0000000140422171: test    word ptr gs:860h, 100h
 * 000000014042217C: jz      short loc_140422183
 * 000000014042217E: verw    [rsp-1E8h+arg_200]
 * 0000000140422183: swapgs
 * 0000000140422186: iretq
 * 0000000140422188: ldmxcsr dword ptr [rbp-54h]
 * 000000014042218C: movaps  xmm0, xmmword ptr [rbp-10h]
 * 0000000140422190: movaps  xmm1, xmmword ptr [rbp+0]
 * 0000000140422194: movaps  xmm2, xmmword ptr [rbp+10h]
 * 0000000140422198: movaps  xmm3, xmmword ptr [rbp+20h]
 * 000000014042219C: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001404221A0: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001404221A4: mov     r11, [rbp-20h]
 * 00000001404221A8: mov     r10, [rbp-28h]
 * 00000001404221AC: mov     r9, [rbp-30h]
 * 00000001404221B0: mov     r8, [rbp-38h]
 * 00000001404221B4: mov     rdx, [rbp-40h]
 * 00000001404221B8: mov     rcx, [rbp-48h]
 * 00000001404221BC: mov     rax, [rbp-50h]
 * 00000001404221C0: mov     rsp, rbp
 * 00000001404221C3: mov     rbp, [rbp+0D8h]
 * 00000001404221CA: add     rsp, 0E8h
 * 00000001404221D1: iretq
 */
