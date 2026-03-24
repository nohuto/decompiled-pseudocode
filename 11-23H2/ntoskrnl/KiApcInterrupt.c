/*
 * XREFs of KiApcInterrupt @ 0x140424740
 * Callers:
 *     KiApcInterruptShadow @ 0x140AF6C40 (KiApcInterruptShadow.c)
 * Callees:
 *     KiDeliverApc @ 0x14030F890 (KiDeliverApc.c)
 *     HalPerformEndOfInterrupt @ 0x140331810 (HalPerformEndOfInterrupt.c)
 *     KiRestoreDebugRegisterState @ 0x14041EF20 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x14041EFA0 (KiSaveDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x14041FD40 (KiRestoreSetContextState.c)
 *     KiApcInterrupt @ 0x140424740 (KiApcInterrupt.c)
 *     KiInitiateUserApc @ 0x140424E20 (KiInitiateUserApc.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140435300 (KiFlushBhbDuringTrapEntryOrExit.c)
 *     KiUpdateStibpPairing @ 0x140460E20 (KiUpdateStibpPairing.c)
 *     KzSetIrqlUnsafe @ 0x14056C060 (KzSetIrqlUnsafe.c)
 *     KiCopyCounters @ 0x1405741A0 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiApcInterrupt @ 0x140424740
 * Reason: Hex-Rays returned no pseudocode for 0x140424740
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140424740: sub     rsp, 8
 * 0000000140424744: push    rbp
 * 0000000140424745: push    rsi
 * 0000000140424746: sub     rsp, 150h
 * 000000014042474D: lea     rbp, [rsp+80h]
 * 0000000140424755: mov     [rbp+0E8h+var_13D], 0
 * 0000000140424759: mov     [rbp+0E8h+var_138], rax
 * 000000014042475D: mov     [rbp+0E8h+var_130], rcx
 * 0000000140424761: mov     [rbp+0E8h+var_128], rdx
 * 0000000140424765: mov     [rbp+0E8h+var_120], r8
 * 0000000140424769: mov     [rbp+0E8h+var_118], r9
 * 000000014042476D: mov     [rbp+0E8h+var_110], r10
 * 0000000140424771: mov     [rbp+0E8h+var_108], r11
 * 0000000140424775: test    [rbp+0E8h+arg_0], 1
 * 000000014042477C: jnz     short loc_1404247B8
 * 000000014042477E: xor     edx, edx
 * 0000000140424780: rdsspq  rdx
 * 0000000140424785: mov     [rbp+0E8h+var_90], rdx
 * 0000000140424789: lfence
 * 000000014042478C: test    word ptr gs:860h, 1
 * 0000000140424797: jnz     short loc_1404247A1
 * 0000000140424799: lfence
 * 000000014042479C: jmp     loc_140424A28
 * 00000001404247A1: movzx   eax, word ptr gs:864h
 * 00000001404247AA: mov     ecx, 48h ; 'H'
 * 00000001404247AF: xor     edx, edx
 * 00000001404247B1: wrmsr
 * 00000001404247B3: jmp     loc_140424A28
 * 00000001404247B8: test    cs:KiKvaShadow, 1
 * 00000001404247BF: jnz     short loc_1404247C4
 * 00000001404247C1: swapgs
 * 00000001404247C4: lfence
 * 00000001404247C7: mov     rcx, gs:95A8h
 * 00000001404247D0: test    rcx, rcx
 * 00000001404247D3: jz      short loc_1404247F4
 * 00000001404247D5: rdsspq  rdx
 * 00000001404247DA: mov     r10, gs:95A0h
 * 00000001404247E3: add     r10, 8
 * 00000001404247E7: cmp     rdx, r10
 * 00000001404247EA: jnz     short loc_1404247F4
 * 00000001404247EC: rstorssp qword ptr [rcx]
 * 00000001404247F0: saveprevssp
 * 00000001404247F4: mov     r10, gs:188h
 * 00000001404247FD: mov     rcx, gs:188h
 * 0000000140424806: mov     rcx, [rcx+220h]
 * 000000014042480D: mov     rcx, [rcx+9E0h]
 * 0000000140424814: mov     gs:858h, rcx
 * 000000014042481D: mov     cx, gs:850h
 * 0000000140424826: mov     gs:852h, cx
 * 000000014042482F: mov     cx, gs:860h
 * 0000000140424838: mov     gs:854h, cx
 * 0000000140424841: movzx   eax, word ptr gs:866h
 * 000000014042484A: cmp     gs:864h, ax
 * 0000000140424853: jz      short loc_140424867
 * 0000000140424855: mov     gs:864h, ax
 * 000000014042485E: mov     ecx, 48h ; 'H'
 * 0000000140424863: xor     edx, edx
 * 0000000140424865: wrmsr
 * 0000000140424867: movzx   edx, word ptr gs:860h
 * 0000000140424870: test    edx, 8
 * 0000000140424876: jz      short loc_14042488F
 * 0000000140424878: mov     eax, 1
 * 000000014042487D: xor     edx, edx
 * 000000014042487F: mov     ecx, 49h ; 'I'
 * 0000000140424884: wrmsr
 * 0000000140424886: movzx   edx, word ptr gs:860h
 * 000000014042488F: test    edx, 2
 * 0000000140424895: jz      loc_1404249D2
 * 000000014042489B: call    loc_1404249AE
 * 00000001404248A0: add     rsp, 8
 * 00000001404248A4: call    loc_1404249B7
 * 00000001404248A9: add     rsp, 8
 * 00000001404248AD: call    loc_1404248A0
 * 00000001404248B2: add     rsp, 8
 * 00000001404248B6: call    loc_1404248A9
 * 00000001404248BB: add     rsp, 8
 * 00000001404248BF: call    loc_1404248B2
 * 00000001404248C4: add     rsp, 8
 * 00000001404248C8: call    loc_1404248BB
 * 00000001404248CD: add     rsp, 8
 * 00000001404248D1: call    loc_1404248C4
 * 00000001404248D6: add     rsp, 8
 * 00000001404248DA: call    loc_1404248CD
 * 00000001404248DF: add     rsp, 8
 * 00000001404248E3: call    loc_1404248D6
 * 00000001404248E8: add     rsp, 8
 * 00000001404248EC: call    loc_1404248DF
 * 00000001404248F1: add     rsp, 8
 * 00000001404248F5: call    loc_1404248E8
 * 00000001404248FA: add     rsp, 8
 * 00000001404248FE: call    loc_1404248F1
 * 0000000140424903: add     rsp, 8
 * 0000000140424907: call    loc_1404248FA
 * 000000014042490C: add     rsp, 8
 * 0000000140424910: call    loc_140424903
 * 0000000140424915: add     rsp, 8
 * 0000000140424919: call    loc_14042490C
 * 000000014042491E: add     rsp, 8
 * 0000000140424922: call    loc_140424915
 * 0000000140424927: add     rsp, 8
 * 000000014042492B: call    loc_14042491E
 * 0000000140424930: add     rsp, 8
 * 0000000140424934: call    loc_140424927
 * 0000000140424939: add     rsp, 8
 * 000000014042493D: call    loc_140424930
 * 0000000140424942: add     rsp, 8
 * 0000000140424946: call    loc_140424939
 * 000000014042494B: add     rsp, 8
 * 000000014042494F: call    loc_140424942
 * 0000000140424954: add     rsp, 8
 * 0000000140424958: call    loc_14042494B
 * 000000014042495D: add     rsp, 8
 * 0000000140424961: call    loc_140424954
 * 0000000140424966: add     rsp, 8
 * 000000014042496A: call    loc_14042495D
 * 000000014042496F: add     rsp, 8
 * 0000000140424973: call    loc_140424966
 * 0000000140424978: add     rsp, 8
 * 000000014042497C: call    loc_14042496F
 * 0000000140424981: add     rsp, 8
 * 0000000140424985: call    loc_140424978
 * 000000014042498A: add     rsp, 8
 * 000000014042498E: call    loc_140424981
 * 0000000140424993: add     rsp, 8
 * 0000000140424997: call    loc_14042498A
 * 000000014042499C: add     rsp, 8
 * 00000001404249A0: call    loc_140424993
 * 00000001404249A5: add     rsp, 8
 * 00000001404249A9: call    loc_14042499C
 * 00000001404249AE: add     rsp, 8
 * 00000001404249B2: call    loc_1404249A5
 * 00000001404249B7: add     rsp, 8
 * 00000001404249BB: mov     eax, 0DADAh
 * 00000001404249C0: test    byte ptr gs:862h, 8
 * 00000001404249C9: jz      short loc_1404249D2
 * 00000001404249CB: mov     al, 20h ; ' '
 * 00000001404249CD: incsspq rax
 * 00000001404249D2: test    edx, 200h
 * 00000001404249D8: jz      short loc_1404249DF
 * 00000001404249DA: call    KiFlushBhbDuringTrapEntryOrExit
 * 00000001404249DF: lfence
 * 00000001404249E2: mov     byte ptr gs:856h, 0
 * 00000001404249EB: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 00000001404249F2: jz      short loc_140424A13
 * 00000001404249F4: mov     ecx, 6A7h
 * 00000001404249F9: rdmsr
 * 00000001404249FB: cmp     edx, 0
 * 00000001404249FE: jz      short loc_140424A13
 * 0000000140424A00: mov     ecx, edx
 * 0000000140424A02: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 0000000140424A08: cmp     edx, ecx
 * 0000000140424A0A: jz      short loc_140424A13
 * 0000000140424A0C: mov     ecx, 6A7h
 * 0000000140424A11: wrmsr
 * 0000000140424A13: test    byte ptr [r10+3], 3
 * 0000000140424A18: mov     [rbp+0E8h+var_68], 0
 * 0000000140424A21: jz      short loc_140424A28
 * 0000000140424A23: call    KiSaveDebugRegisterState
 * 0000000140424A28: cld
 * 0000000140424A29: stmxcsr [rbp+0E8h+var_13C]
 * 0000000140424A2D: ldmxcsr dword ptr gs:180h
 * 0000000140424A36: movaps  [rbp+0E8h+var_F8], xmm0
 * 0000000140424A3A: movaps  [rbp+0E8h+var_E8], xmm1
 * 0000000140424A3E: movaps  [rbp+0E8h+var_D8], xmm2
 * 0000000140424A42: movaps  [rbp+0E8h+var_C8], xmm3
 * 0000000140424A46: movaps  [rbp+0E8h+var_B8], xmm4
 * 0000000140424A4A: movaps  [rbp+0E8h+var_A8], xmm5
 * 0000000140424A4E: xor     esi, esi
 * 0000000140424A50: inc     dword ptr gs:82C0h
 * 0000000140424A58: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 0000000140424A5F: jz      short loc_140424A6D
 * 0000000140424A61: test    [rbp+0E8h+arg_0], 1
 * 0000000140424A68: jz      short loc_140424A6D
 * 0000000140424A6A: stac
 * 0000000140424A6D: mov     ecx, 1
 * 0000000140424A72: cmp     cs:KiIrqlFlags, 0
 * 0000000140424A79: jz      short loc_140424A82
 * 0000000140424A7B: call    KzSetIrqlUnsafe
 * 0000000140424A80: jmp     short loc_140424A8A
 * 0000000140424A82: mov     rax, cr8
 * 0000000140424A86: mov     cr8, rcx
 * 0000000140424A8A: mov     [rbp+0E8h+var_13F], al
 * 0000000140424A8D: mov     rcx, rsi
 * 0000000140424A90: call    HalPerformEndOfInterrupt
 * 0000000140424A95: sti
 * 0000000140424A96: cmp     byte ptr gs:187h, 0
 * 0000000140424A9F: jnz     short loc_140424AB1
 * 0000000140424AA1: mov     ecx, 0
 * 0000000140424AA6: xor     edx, edx
 * 0000000140424AA8: lea     r8, [rbp+0E8h+var_168]
 * 0000000140424AAC: call    KiDeliverApc
 * 0000000140424AB1: cli
 * 0000000140424AB2: movzx   ecx, [rbp+0E8h+var_13F]
 * 0000000140424AB6: cmp     cs:KiIrqlFlags, 0
 * 0000000140424ABD: jz      short loc_140424AC6
 * 0000000140424ABF: call    KzSetIrqlUnsafe
 * 0000000140424AC4: jmp     short loc_140424ACA
 * 0000000140424AC6: mov     cr8, rcx
 * 0000000140424ACA: mov     rsi, [rbp+0E8h+var_18]
 * 0000000140424AD1: cli
 * 0000000140424AD2: test    [rbp+0E8h+arg_0], 1
 * 0000000140424AD9: jz      loc_140424DC7
 * 0000000140424ADF: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 0000000140424AE6: jz      short loc_140424AEB
 * 0000000140424AE8: stac
 * 0000000140424AEB: mov     rcx, gs:188h
 * 0000000140424AF4: test    byte ptr [rcx+0C2h], 3
 * 0000000140424AFB: jz      short loc_140424B18
 * 0000000140424AFD: mov     ecx, 1
 * 0000000140424B02: mov     cr8, rcx
 * 0000000140424B06: sti
 * 0000000140424B07: call    KiInitiateUserApc
 * 0000000140424B0C: cli
 * 0000000140424B0D: mov     ecx, 0
 * 0000000140424B12: mov     cr8, rcx
 * 0000000140424B16: jmp     short loc_140424AEB
 * 0000000140424B18: test    byte ptr gs:86Ch, 2
 * 0000000140424B21: jz      short loc_140424B2A
 * 0000000140424B23: xor     ecx, ecx
 * 0000000140424B25: call    KiUpdateStibpPairing
 * 0000000140424B2A: mov     rcx, gs:188h
 * 0000000140424B33: test    dword ptr [rcx], 8000000h
 * 0000000140424B39: jz      short loc_140424B40
 * 0000000140424B3B: call    KiRestoreSetContextState
 * 0000000140424B40: mov     rcx, gs:188h
 * 0000000140424B49: test    dword ptr [rcx], 10000h
 * 0000000140424B4F: jz      short loc_140424B65
 * 0000000140424B51: test    byte ptr [rcx+2], 1
 * 0000000140424B55: jz      short loc_140424B65
 * 0000000140424B57: call    KiCopyCounters
 * 0000000140424B5C: mov     rcx, gs:188h
 * 0000000140424B65: ldmxcsr [rbp+0E8h+var_13C]
 * 0000000140424B69: cmp     [rbp+0E8h+var_68], 0
 * 0000000140424B71: jz      short loc_140424B78
 * 0000000140424B73: call    KiRestoreDebugRegisterState
 * 0000000140424B78: mov     rcx, gs:188h
 * 0000000140424B81: bt      dword ptr [rcx+74h], 16h
 * 0000000140424B86: jnb     short loc_140424BB2
 * 0000000140424B88: xor     ecx, ecx
 * 0000000140424B8A: rdsspq  rcx
 * 0000000140424B8F: mov     r8, gs:95A8h
 * 0000000140424B98: add     r8, 8
 * 0000000140424B9C: cmp     rcx, r8
 * 0000000140424B9F: jnz     short loc_140424BB2
 * 0000000140424BA1: mov     rcx, gs:95A0h
 * 0000000140424BAA: rstorssp qword ptr [rcx]
 * 0000000140424BAE: saveprevssp
 * 0000000140424BB2: movaps  xmm0, [rbp+0E8h+var_F8]
 * 0000000140424BB6: movaps  xmm1, [rbp+0E8h+var_E8]
 * 0000000140424BBA: movaps  xmm2, [rbp+0E8h+var_D8]
 * 0000000140424BBE: movaps  xmm3, [rbp+0E8h+var_C8]
 * 0000000140424BC2: movaps  xmm4, [rbp+0E8h+var_B8]
 * 0000000140424BC6: movaps  xmm5, [rbp+0E8h+var_A8]
 * 0000000140424BCA: mov     r11, [rbp+0E8h+var_108]
 * 0000000140424BCE: mov     r10, [rbp+0E8h+var_110]
 * 0000000140424BD2: mov     r9, [rbp+0E8h+var_118]
 * 0000000140424BD6: mov     r8, [rbp+0E8h+var_120]
 * 0000000140424BDA: mov     byte ptr gs:856h, 0
 * 0000000140424BE3: movzx   eax, word ptr gs:86Ah
 * 0000000140424BEC: cmp     gs:864h, ax
 * 0000000140424BF5: jz      short loc_140424C09
 * 0000000140424BF7: mov     gs:864h, ax
 * 0000000140424C00: mov     ecx, 48h ; 'H'
 * 0000000140424C05: xor     edx, edx
 * 0000000140424C07: wrmsr
 * 0000000140424C09: btr     word ptr gs:860h, 2
 * 0000000140424C14: jnb     short loc_140424C24
 * 0000000140424C16: mov     eax, 1
 * 0000000140424C1B: xor     edx, edx
 * 0000000140424C1D: mov     ecx, 49h ; 'I'
 * 0000000140424C22: wrmsr
 * 0000000140424C24: btr     word ptr gs:860h, 5
 * 0000000140424C2F: jnb     loc_140424D6C
 * 0000000140424C35: call    loc_140424D48
 * 0000000140424C3A: add     rsp, 8
 * 0000000140424C3E: call    loc_140424D51
 * 0000000140424C43: add     rsp, 8
 * 0000000140424C47: call    loc_140424C3A
 * 0000000140424C4C: add     rsp, 8
 * 0000000140424C50: call    loc_140424C43
 * 0000000140424C55: add     rsp, 8
 * 0000000140424C59: call    loc_140424C4C
 * 0000000140424C5E: add     rsp, 8
 * 0000000140424C62: call    loc_140424C55
 * 0000000140424C67: add     rsp, 8
 * 0000000140424C6B: call    loc_140424C5E
 * 0000000140424C70: add     rsp, 8
 * 0000000140424C74: call    loc_140424C67
 * 0000000140424C79: add     rsp, 8
 * 0000000140424C7D: call    loc_140424C70
 * 0000000140424C82: add     rsp, 8
 * 0000000140424C86: call    loc_140424C79
 * 0000000140424C8B: add     rsp, 8
 * 0000000140424C8F: call    loc_140424C82
 * 0000000140424C94: add     rsp, 8
 * 0000000140424C98: call    loc_140424C8B
 * 0000000140424C9D: add     rsp, 8
 * 0000000140424CA1: call    loc_140424C94
 * 0000000140424CA6: add     rsp, 8
 * 0000000140424CAA: call    loc_140424C9D
 * 0000000140424CAF: add     rsp, 8
 * 0000000140424CB3: call    loc_140424CA6
 * 0000000140424CB8: add     rsp, 8
 * 0000000140424CBC: call    loc_140424CAF
 * 0000000140424CC1: add     rsp, 8
 * 0000000140424CC5: call    loc_140424CB8
 * 0000000140424CCA: add     rsp, 8
 * 0000000140424CCE: call    loc_140424CC1
 * 0000000140424CD3: add     rsp, 8
 * 0000000140424CD7: call    loc_140424CCA
 * 0000000140424CDC: add     rsp, 8
 * 0000000140424CE0: call    loc_140424CD3
 * 0000000140424CE5: add     rsp, 8
 * 0000000140424CE9: call    loc_140424CDC
 * 0000000140424CEE: add     rsp, 8
 * 0000000140424CF2: call    loc_140424CE5
 * 0000000140424CF7: add     rsp, 8
 * 0000000140424CFB: call    loc_140424CEE
 * 0000000140424D00: add     rsp, 8
 * 0000000140424D04: call    loc_140424CF7
 * 0000000140424D09: add     rsp, 8
 * 0000000140424D0D: call    loc_140424D00
 * 0000000140424D12: add     rsp, 8
 * 0000000140424D16: call    loc_140424D09
 * 0000000140424D1B: add     rsp, 8
 * 0000000140424D1F: call    loc_140424D12
 * 0000000140424D24: add     rsp, 8
 * 0000000140424D28: call    loc_140424D1B
 * 0000000140424D2D: add     rsp, 8
 * 0000000140424D31: call    loc_140424D24
 * 0000000140424D36: add     rsp, 8
 * 0000000140424D3A: call    loc_140424D2D
 * 0000000140424D3F: add     rsp, 8
 * 0000000140424D43: call    loc_140424D36
 * 0000000140424D48: add     rsp, 8
 * 0000000140424D4C: call    loc_140424D3F
 * 0000000140424D51: add     rsp, 8
 * 0000000140424D55: mov     eax, 0DADAh
 * 0000000140424D5A: test    byte ptr gs:862h, 8
 * 0000000140424D63: jz      short loc_140424D6C
 * 0000000140424D65: mov     al, 20h ; ' '
 * 0000000140424D67: incsspq rax
 * 0000000140424D6C: test    word ptr gs:860h, 80h
 * 0000000140424D77: jz      short loc_140424D85
 * 0000000140424D79: xor     eax, eax
 * 0000000140424D7B: xor     edx, edx
 * 0000000140424D7D: mov     ecx, 1
 * 0000000140424D82: div     rcx
 * 0000000140424D85: mov     rdx, [rbp+0E8h+var_128]
 * 0000000140424D89: mov     rcx, [rbp+0E8h+var_130]
 * 0000000140424D8D: mov     rax, [rbp+0E8h+var_138]
 * 0000000140424D91: mov     rsp, rbp
 * 0000000140424D94: mov     rbp, [rbp+0E8h+var_10]
 * 0000000140424D9B: add     rsp, 0E8h
 * 0000000140424DA2: test    cs:KiKvaShadow, 1
 * 0000000140424DA9: jz      short loc_140424DB0
 * 0000000140424DAB: jmp     KiKernelExit
 * 0000000140424DB0: test    word ptr gs:860h, 100h
 * 0000000140424DBB: jz      short loc_140424DC2
 * 0000000140424DBD: verw    [rsp+arg_18]
 * 0000000140424DC2: swapgs
 * 0000000140424DC5: iretq
 * 0000000140424DC7: ldmxcsr [rbp+0E8h+var_13C]
 * 0000000140424DCB: movaps  xmm0, [rbp+0E8h+var_F8]
 * 0000000140424DCF: movaps  xmm1, [rbp+0E8h+var_E8]
 * 0000000140424DD3: movaps  xmm2, [rbp+0E8h+var_D8]
 * 0000000140424DD7: movaps  xmm3, [rbp+0E8h+var_C8]
 * 0000000140424DDB: movaps  xmm4, [rbp+0E8h+var_B8]
 * 0000000140424DDF: movaps  xmm5, [rbp+0E8h+var_A8]
 * 0000000140424DE3: mov     r11, [rbp+0E8h+var_108]
 * 0000000140424DE7: mov     r10, [rbp+0E8h+var_110]
 * 0000000140424DEB: mov     r9, [rbp+0E8h+var_118]
 * 0000000140424DEF: mov     r8, [rbp+0E8h+var_120]
 * 0000000140424DF3: mov     rdx, [rbp+0E8h+var_128]
 * 0000000140424DF7: mov     rcx, [rbp+0E8h+var_130]
 * 0000000140424DFB: mov     rax, [rbp+0E8h+var_138]
 * 0000000140424DFF: mov     rsp, rbp
 * 0000000140424E02: mov     rbp, [rbp+0E8h+var_10]
 * 0000000140424E09: add     rsp, 0E8h
 * 0000000140424E10: iretq
 */
