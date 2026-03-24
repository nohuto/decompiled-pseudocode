/*
 * XREFs of KiVirtualizationException @ 0x140431A40
 * Callers:
 *     KiVirtualizationExceptionShadow @ 0x140AF6B40 (KiVirtualizationExceptionShadow.c)
 * Callees:
 *     KzLowerIrql @ 0x14023E490 (KzLowerIrql.c)
 *     KzRaiseIrql @ 0x1402AFB00 (KzRaiseIrql.c)
 *     KiRestoreDebugRegisterState @ 0x14041EF20 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x14041EFA0 (KiSaveDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x14041FD40 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x140424E20 (KiInitiateUserApc.c)
 *     KiVirtualizationException @ 0x140431A40 (KiVirtualizationException.c)
 *     KiBugCheckDispatch @ 0x1404348C0 (KiBugCheckDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140435300 (KiFlushBhbDuringTrapEntryOrExit.c)
 *     KiUpdateStibpPairing @ 0x140460E20 (KiUpdateStibpPairing.c)
 *     KiCopyCounters @ 0x1405741A0 (KiCopyCounters.c)
 *     KiEpfHandleNotification @ 0x140579010 (KiEpfHandleNotification.c)
 */

/*
 * Hex-Rays decompilation failed for KiVirtualizationException @ 0x140431A40
 * Reason: Hex-Rays returned no pseudocode for 0x140431A40
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140431A40: sub     rsp, 8
 * 0000000140431A44: push    rbp
 * 0000000140431A45: sub     rsp, 158h
 * 0000000140431A4C: lea     rbp, [rsp+80h]
 * 0000000140431A54: mov     [rbp+0E8h+var_13D], 1
 * 0000000140431A58: mov     [rbp+0E8h+var_138], rax
 * 0000000140431A5C: mov     [rbp+0E8h+var_130], rcx
 * 0000000140431A60: mov     [rbp+0E8h+var_128], rdx
 * 0000000140431A64: mov     [rbp+0E8h+var_120], r8
 * 0000000140431A68: mov     [rbp+0E8h+var_118], r9
 * 0000000140431A6C: mov     [rbp+0E8h+var_110], r10
 * 0000000140431A70: mov     [rbp+0E8h+var_108], r11
 * 0000000140431A74: test    [rbp+0E8h+arg_0], 1
 * 0000000140431A7B: jnz     short loc_140431AB7
 * 0000000140431A7D: xor     edx, edx
 * 0000000140431A7F: rdsspq  rdx
 * 0000000140431A84: mov     [rbp+0E8h+var_90], rdx
 * 0000000140431A88: lfence
 * 0000000140431A8B: test    word ptr gs:860h, 1
 * 0000000140431A96: jnz     short loc_140431AA0
 * 0000000140431A98: lfence
 * 0000000140431A9B: jmp     loc_140431D27
 * 0000000140431AA0: movzx   eax, word ptr gs:864h
 * 0000000140431AA9: mov     ecx, 48h ; 'H'
 * 0000000140431AAE: xor     edx, edx
 * 0000000140431AB0: wrmsr
 * 0000000140431AB2: jmp     loc_140431D27
 * 0000000140431AB7: test    cs:KiKvaShadow, 1
 * 0000000140431ABE: jnz     short loc_140431AC3
 * 0000000140431AC0: swapgs
 * 0000000140431AC3: lfence
 * 0000000140431AC6: mov     rcx, gs:95A8h
 * 0000000140431ACF: test    rcx, rcx
 * 0000000140431AD2: jz      short loc_140431AF3
 * 0000000140431AD4: rdsspq  rdx
 * 0000000140431AD9: mov     r10, gs:95A0h
 * 0000000140431AE2: add     r10, 8
 * 0000000140431AE6: cmp     rdx, r10
 * 0000000140431AE9: jnz     short loc_140431AF3
 * 0000000140431AEB: rstorssp qword ptr [rcx]
 * 0000000140431AEF: saveprevssp
 * 0000000140431AF3: mov     r10, gs:188h
 * 0000000140431AFC: mov     rcx, gs:188h
 * 0000000140431B05: mov     rcx, [rcx+220h]
 * 0000000140431B0C: mov     rcx, [rcx+9E0h]
 * 0000000140431B13: mov     gs:858h, rcx
 * 0000000140431B1C: mov     cx, gs:850h
 * 0000000140431B25: mov     gs:852h, cx
 * 0000000140431B2E: mov     cx, gs:860h
 * 0000000140431B37: mov     gs:854h, cx
 * 0000000140431B40: movzx   eax, word ptr gs:866h
 * 0000000140431B49: cmp     gs:864h, ax
 * 0000000140431B52: jz      short loc_140431B66
 * 0000000140431B54: mov     gs:864h, ax
 * 0000000140431B5D: mov     ecx, 48h ; 'H'
 * 0000000140431B62: xor     edx, edx
 * 0000000140431B64: wrmsr
 * 0000000140431B66: movzx   edx, word ptr gs:860h
 * 0000000140431B6F: test    edx, 8
 * 0000000140431B75: jz      short loc_140431B8E
 * 0000000140431B77: mov     eax, 1
 * 0000000140431B7C: xor     edx, edx
 * 0000000140431B7E: mov     ecx, 49h ; 'I'
 * 0000000140431B83: wrmsr
 * 0000000140431B85: movzx   edx, word ptr gs:860h
 * 0000000140431B8E: test    edx, 2
 * 0000000140431B94: jz      loc_140431CD1
 * 0000000140431B9A: call    loc_140431CAD
 * 0000000140431B9F: add     rsp, 8
 * 0000000140431BA3: call    loc_140431CB6
 * 0000000140431BA8: add     rsp, 8
 * 0000000140431BAC: call    loc_140431B9F
 * 0000000140431BB1: add     rsp, 8
 * 0000000140431BB5: call    loc_140431BA8
 * 0000000140431BBA: add     rsp, 8
 * 0000000140431BBE: call    loc_140431BB1
 * 0000000140431BC3: add     rsp, 8
 * 0000000140431BC7: call    loc_140431BBA
 * 0000000140431BCC: add     rsp, 8
 * 0000000140431BD0: call    loc_140431BC3
 * 0000000140431BD5: add     rsp, 8
 * 0000000140431BD9: call    loc_140431BCC
 * 0000000140431BDE: add     rsp, 8
 * 0000000140431BE2: call    loc_140431BD5
 * 0000000140431BE7: add     rsp, 8
 * 0000000140431BEB: call    loc_140431BDE
 * 0000000140431BF0: add     rsp, 8
 * 0000000140431BF4: call    loc_140431BE7
 * 0000000140431BF9: add     rsp, 8
 * 0000000140431BFD: call    loc_140431BF0
 * 0000000140431C02: add     rsp, 8
 * 0000000140431C06: call    loc_140431BF9
 * 0000000140431C0B: add     rsp, 8
 * 0000000140431C0F: call    loc_140431C02
 * 0000000140431C14: add     rsp, 8
 * 0000000140431C18: call    loc_140431C0B
 * 0000000140431C1D: add     rsp, 8
 * 0000000140431C21: call    loc_140431C14
 * 0000000140431C26: add     rsp, 8
 * 0000000140431C2A: call    loc_140431C1D
 * 0000000140431C2F: add     rsp, 8
 * 0000000140431C33: call    loc_140431C26
 * 0000000140431C38: add     rsp, 8
 * 0000000140431C3C: call    loc_140431C2F
 * 0000000140431C41: add     rsp, 8
 * 0000000140431C45: call    loc_140431C38
 * 0000000140431C4A: add     rsp, 8
 * 0000000140431C4E: call    loc_140431C41
 * 0000000140431C53: add     rsp, 8
 * 0000000140431C57: call    loc_140431C4A
 * 0000000140431C5C: add     rsp, 8
 * 0000000140431C60: call    loc_140431C53
 * 0000000140431C65: add     rsp, 8
 * 0000000140431C69: call    loc_140431C5C
 * 0000000140431C6E: add     rsp, 8
 * 0000000140431C72: call    loc_140431C65
 * 0000000140431C77: add     rsp, 8
 * 0000000140431C7B: call    loc_140431C6E
 * 0000000140431C80: add     rsp, 8
 * 0000000140431C84: call    loc_140431C77
 * 0000000140431C89: add     rsp, 8
 * 0000000140431C8D: call    loc_140431C80
 * 0000000140431C92: add     rsp, 8
 * 0000000140431C96: call    loc_140431C89
 * 0000000140431C9B: add     rsp, 8
 * 0000000140431C9F: call    loc_140431C92
 * 0000000140431CA4: add     rsp, 8
 * 0000000140431CA8: call    loc_140431C9B
 * 0000000140431CAD: add     rsp, 8
 * 0000000140431CB1: call    loc_140431CA4
 * 0000000140431CB6: add     rsp, 8
 * 0000000140431CBA: mov     eax, 0DADAh
 * 0000000140431CBF: test    byte ptr gs:862h, 8
 * 0000000140431CC8: jz      short loc_140431CD1
 * 0000000140431CCA: mov     al, 20h ; ' '
 * 0000000140431CCC: incsspq rax
 * 0000000140431CD1: test    edx, 200h
 * 0000000140431CD7: jz      short loc_140431CDE
 * 0000000140431CD9: call    KiFlushBhbDuringTrapEntryOrExit
 * 0000000140431CDE: lfence
 * 0000000140431CE1: mov     byte ptr gs:856h, 0
 * 0000000140431CEA: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 0000000140431CF1: jz      short loc_140431D12
 * 0000000140431CF3: mov     ecx, 6A7h
 * 0000000140431CF8: rdmsr
 * 0000000140431CFA: cmp     edx, 0
 * 0000000140431CFD: jz      short loc_140431D12
 * 0000000140431CFF: mov     ecx, edx
 * 0000000140431D01: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 0000000140431D07: cmp     edx, ecx
 * 0000000140431D09: jz      short loc_140431D12
 * 0000000140431D0B: mov     ecx, 6A7h
 * 0000000140431D10: wrmsr
 * 0000000140431D12: test    byte ptr [r10+3], 3
 * 0000000140431D17: mov     [rbp+0E8h+var_68], 0
 * 0000000140431D20: jz      short loc_140431D27
 * 0000000140431D22: call    KiSaveDebugRegisterState
 * 0000000140431D27: cld
 * 0000000140431D28: stmxcsr [rbp+0E8h+var_13C]
 * 0000000140431D2C: ldmxcsr dword ptr gs:180h
 * 0000000140431D35: movaps  [rbp+0E8h+var_F8], xmm0
 * 0000000140431D39: movaps  [rbp+0E8h+var_E8], xmm1
 * 0000000140431D3D: movaps  [rbp+0E8h+var_D8], xmm2
 * 0000000140431D41: movaps  [rbp+0E8h+var_C8], xmm3
 * 0000000140431D45: movaps  [rbp+0E8h+var_B8], xmm4
 * 0000000140431D49: movaps  [rbp+0E8h+var_A8], xmm5
 * 0000000140431D4D: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 0000000140431D54: jz      short loc_140431D62
 * 0000000140431D56: test    [rbp+0E8h+arg_0], 1
 * 0000000140431D5D: jz      short loc_140431D62
 * 0000000140431D5F: stac
 * 0000000140431D62: mov     r9, gs:8888h
 * 0000000140431D6B: test    r9, r9
 * 0000000140431D6E: jz      loc_14043210C
 * 0000000140431D74: cmp     dword ptr [r9+44h], 1
 * 0000000140431D79: jnz     loc_14043210C
 * 0000000140431D7F: test    [rbp+0E8h+arg_8], 200h
 * 0000000140431D89: jz      loc_14043210C
 * 0000000140431D8F: mov     rax, cr8
 * 0000000140431D93: mov     dword ptr [rbp+0E8h+NewIrql], eax
 * 0000000140431D96: cmp     al, 2
 * 0000000140431D98: jge     loc_14043210C
 * 0000000140431D9E: mov     ecx, 2; NewIrql
 * 0000000140431DA3: call    KzRaiseIrql
 * 0000000140431DA8: sti
 * 0000000140431DA9: mov     r9, gs:8888h
 * 0000000140431DB2: mov     rcx, [r9+48h]
 * 0000000140431DB6: mov     dword ptr [r9+44h], 0
 * 0000000140431DBE: call    KiEpfHandleNotification
 * 0000000140431DC3: cli
 * 0000000140431DC4: mov     ecx, dword ptr [rbp+0E8h+NewIrql]; NewIrql
 * 0000000140431DC7: call    KzLowerIrql
 * 0000000140431DCC: test    [rbp+0E8h+arg_0], 1
 * 0000000140431DD3: jz      loc_1404320C1
 * 0000000140431DD9: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 0000000140431DE0: jz      short loc_140431DE5
 * 0000000140431DE2: stac
 * 0000000140431DE5: mov     rcx, gs:188h
 * 0000000140431DEE: test    byte ptr [rcx+0C2h], 3
 * 0000000140431DF5: jz      short loc_140431E12
 * 0000000140431DF7: mov     ecx, 1
 * 0000000140431DFC: mov     cr8, rcx
 * 0000000140431E00: sti
 * 0000000140431E01: call    KiInitiateUserApc
 * 0000000140431E06: cli
 * 0000000140431E07: mov     ecx, 0
 * 0000000140431E0C: mov     cr8, rcx
 * 0000000140431E10: jmp     short loc_140431DE5
 * 0000000140431E12: test    byte ptr gs:86Ch, 2
 * 0000000140431E1B: jz      short loc_140431E24
 * 0000000140431E1D: xor     ecx, ecx
 * 0000000140431E1F: call    KiUpdateStibpPairing
 * 0000000140431E24: mov     rcx, gs:188h
 * 0000000140431E2D: test    dword ptr [rcx], 8000000h
 * 0000000140431E33: jz      short loc_140431E3A
 * 0000000140431E35: call    KiRestoreSetContextState
 * 0000000140431E3A: mov     rcx, gs:188h
 * 0000000140431E43: test    dword ptr [rcx], 10000h
 * 0000000140431E49: jz      short loc_140431E5F
 * 0000000140431E4B: test    byte ptr [rcx+2], 1
 * 0000000140431E4F: jz      short loc_140431E5F
 * 0000000140431E51: call    KiCopyCounters
 * 0000000140431E56: mov     rcx, gs:188h
 * 0000000140431E5F: ldmxcsr [rbp+0E8h+var_13C]
 * 0000000140431E63: cmp     [rbp+0E8h+var_68], 0
 * 0000000140431E6B: jz      short loc_140431E72
 * 0000000140431E6D: call    KiRestoreDebugRegisterState
 * 0000000140431E72: mov     rcx, gs:188h
 * 0000000140431E7B: bt      dword ptr [rcx+74h], 16h
 * 0000000140431E80: jnb     short loc_140431EAC
 * 0000000140431E82: xor     ecx, ecx
 * 0000000140431E84: rdsspq  rcx
 * 0000000140431E89: mov     r8, gs:95A8h
 * 0000000140431E92: add     r8, 8
 * 0000000140431E96: cmp     rcx, r8
 * 0000000140431E99: jnz     short loc_140431EAC
 * 0000000140431E9B: mov     rcx, gs:95A0h
 * 0000000140431EA4: rstorssp qword ptr [rcx]
 * 0000000140431EA8: saveprevssp
 * 0000000140431EAC: movaps  xmm0, [rbp+0E8h+var_F8]
 * 0000000140431EB0: movaps  xmm1, [rbp+0E8h+var_E8]
 * 0000000140431EB4: movaps  xmm2, [rbp+0E8h+var_D8]
 * 0000000140431EB8: movaps  xmm3, [rbp+0E8h+var_C8]
 * 0000000140431EBC: movaps  xmm4, [rbp+0E8h+var_B8]
 * 0000000140431EC0: movaps  xmm5, [rbp+0E8h+var_A8]
 * 0000000140431EC4: mov     r11, [rbp+0E8h+var_108]
 * 0000000140431EC8: mov     r10, [rbp+0E8h+var_110]
 * 0000000140431ECC: mov     r9, [rbp+0E8h+var_118]
 * 0000000140431ED0: mov     r8, [rbp+0E8h+var_120]
 * 0000000140431ED4: mov     byte ptr gs:856h, 0
 * 0000000140431EDD: movzx   eax, word ptr gs:86Ah
 * 0000000140431EE6: cmp     gs:864h, ax
 * 0000000140431EEF: jz      short loc_140431F03
 * 0000000140431EF1: mov     gs:864h, ax
 * 0000000140431EFA: mov     ecx, 48h ; 'H'
 * 0000000140431EFF: xor     edx, edx
 * 0000000140431F01: wrmsr
 * 0000000140431F03: btr     word ptr gs:860h, 2
 * 0000000140431F0E: jnb     short loc_140431F1E
 * 0000000140431F10: mov     eax, 1
 * 0000000140431F15: xor     edx, edx
 * 0000000140431F17: mov     ecx, 49h ; 'I'
 * 0000000140431F1C: wrmsr
 * 0000000140431F1E: btr     word ptr gs:860h, 5
 * 0000000140431F29: jnb     loc_140432066
 * 0000000140431F2F: call    loc_140432042
 * 0000000140431F34: add     rsp, 8
 * 0000000140431F38: call    loc_14043204B
 * 0000000140431F3D: add     rsp, 8
 * 0000000140431F41: call    loc_140431F34
 * 0000000140431F46: add     rsp, 8
 * 0000000140431F4A: call    loc_140431F3D
 * 0000000140431F4F: add     rsp, 8
 * 0000000140431F53: call    loc_140431F46
 * 0000000140431F58: add     rsp, 8
 * 0000000140431F5C: call    loc_140431F4F
 * 0000000140431F61: add     rsp, 8
 * 0000000140431F65: call    loc_140431F58
 * 0000000140431F6A: add     rsp, 8
 * 0000000140431F6E: call    loc_140431F61
 * 0000000140431F73: add     rsp, 8
 * 0000000140431F77: call    loc_140431F6A
 * 0000000140431F7C: add     rsp, 8
 * 0000000140431F80: call    loc_140431F73
 * 0000000140431F85: add     rsp, 8
 * 0000000140431F89: call    loc_140431F7C
 * 0000000140431F8E: add     rsp, 8
 * 0000000140431F92: call    loc_140431F85
 * 0000000140431F97: add     rsp, 8
 * 0000000140431F9B: call    loc_140431F8E
 * 0000000140431FA0: add     rsp, 8
 * 0000000140431FA4: call    loc_140431F97
 * 0000000140431FA9: add     rsp, 8
 * 0000000140431FAD: call    loc_140431FA0
 * 0000000140431FB2: add     rsp, 8
 * 0000000140431FB6: call    loc_140431FA9
 * 0000000140431FBB: add     rsp, 8
 * 0000000140431FBF: call    loc_140431FB2
 * 0000000140431FC4: add     rsp, 8
 * 0000000140431FC8: call    loc_140431FBB
 * 0000000140431FCD: add     rsp, 8
 * 0000000140431FD1: call    loc_140431FC4
 * 0000000140431FD6: add     rsp, 8
 * 0000000140431FDA: call    loc_140431FCD
 * 0000000140431FDF: add     rsp, 8
 * 0000000140431FE3: call    loc_140431FD6
 * 0000000140431FE8: add     rsp, 8
 * 0000000140431FEC: call    loc_140431FDF
 * 0000000140431FF1: add     rsp, 8
 * 0000000140431FF5: call    loc_140431FE8
 * 0000000140431FFA: add     rsp, 8
 * 0000000140431FFE: call    loc_140431FF1
 * 0000000140432003: add     rsp, 8
 * 0000000140432007: call    loc_140431FFA
 * 000000014043200C: add     rsp, 8
 * 0000000140432010: call    loc_140432003
 * 0000000140432015: add     rsp, 8
 * 0000000140432019: call    loc_14043200C
 * 000000014043201E: add     rsp, 8
 * 0000000140432022: call    loc_140432015
 * 0000000140432027: add     rsp, 8
 * 000000014043202B: call    loc_14043201E
 * 0000000140432030: add     rsp, 8
 * 0000000140432034: call    loc_140432027
 * 0000000140432039: add     rsp, 8
 * 000000014043203D: call    loc_140432030
 * 0000000140432042: add     rsp, 8
 * 0000000140432046: call    loc_140432039
 * 000000014043204B: add     rsp, 8
 * 000000014043204F: mov     eax, 0DADAh
 * 0000000140432054: test    byte ptr gs:862h, 8
 * 000000014043205D: jz      short loc_140432066
 * 000000014043205F: mov     al, 20h ; ' '
 * 0000000140432061: incsspq rax
 * 0000000140432066: test    word ptr gs:860h, 80h
 * 0000000140432071: jz      short loc_14043207F
 * 0000000140432073: xor     eax, eax
 * 0000000140432075: xor     edx, edx
 * 0000000140432077: mov     ecx, 1
 * 000000014043207C: div     rcx
 * 000000014043207F: mov     rdx, [rbp+0E8h+var_128]
 * 0000000140432083: mov     rcx, [rbp+0E8h+var_130]
 * 0000000140432087: mov     rax, [rbp+0E8h+var_138]
 * 000000014043208B: mov     rsp, rbp
 * 000000014043208E: mov     rbp, [rbp+0E8h+var_10]
 * 0000000140432095: add     rsp, 0E8h
 * 000000014043209C: test    cs:KiKvaShadow, 1
 * 00000001404320A3: jz      short loc_1404320AA
 * 00000001404320A5: jmp     KiKernelExit
 * 00000001404320AA: test    word ptr gs:860h, 100h
 * 00000001404320B5: jz      short loc_1404320BC
 * 00000001404320B7: verw    [rsp+arg_18]
 * 00000001404320BC: swapgs
 * 00000001404320BF: iretq
 * 00000001404320C1: ldmxcsr [rbp+0E8h+var_13C]
 * 00000001404320C5: movaps  xmm0, [rbp+0E8h+var_F8]
 * 00000001404320C9: movaps  xmm1, [rbp+0E8h+var_E8]
 * 00000001404320CD: movaps  xmm2, [rbp+0E8h+var_D8]
 * 00000001404320D1: movaps  xmm3, [rbp+0E8h+var_C8]
 * 00000001404320D5: movaps  xmm4, [rbp+0E8h+var_B8]
 * 00000001404320D9: movaps  xmm5, [rbp+0E8h+var_A8]
 * 00000001404320DD: mov     r11, [rbp+0E8h+var_108]
 * 00000001404320E1: mov     r10, [rbp+0E8h+var_110]
 * 00000001404320E5: mov     r9, [rbp+0E8h+var_118]
 * 00000001404320E9: mov     r8, [rbp+0E8h+var_120]
 * 00000001404320ED: mov     rdx, [rbp+0E8h+var_128]
 * 00000001404320F1: mov     rcx, [rbp+0E8h+var_130]
 * 00000001404320F5: mov     rax, [rbp+0E8h+var_138]
 * 00000001404320F9: mov     rsp, rbp
 * 00000001404320FC: mov     rbp, [rbp+0E8h+var_10]
 * 0000000140432103: add     rsp, 0E8h
 * 000000014043210A: iretq
 * 000000014043210C: mov     r10, [rbp+0E8h]
 * 0000000140432113: mov     r9, gs:8888h
 * 000000014043211C: movzx   r8, [rbp+0E8h+NewIrql]
 * 0000000140432121: mov     ecx, 7Fh
 * 0000000140432126: mov     edx, 20h ; ' '
 * 000000014043212B: call    KiBugCheckDispatch
 */
