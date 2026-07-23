/*
 * XREFs of KiDpcInterrupt @ 0x1404276A0
 * Callers:
 *     KiDpcInterruptShadow @ 0x140AF6F40 (KiDpcInterruptShadow.c)
 * Callees:
 *     KiDispatchInterrupt @ 0x140249600 (KiDispatchInterrupt.c)
 *     HalPerformEndOfInterrupt @ 0x140331AA0 (HalPerformEndOfInterrupt.c)
 *     KiRestoreDebugRegisterState @ 0x14041F2B0 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x14041F330 (KiSaveDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1404200D0 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x1404251B0 (KiInitiateUserApc.c)
 *     KiDpcInterrupt @ 0x1404276A0 (KiDpcInterrupt.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140435700 (KiFlushBhbDuringTrapEntryOrExit.c)
 *     KiUpdateStibpPairing @ 0x140461220 (KiUpdateStibpPairing.c)
 *     KzSetIrqlUnsafe @ 0x14056C720 (KzSetIrqlUnsafe.c)
 *     KiCopyCounters @ 0x1405746E0 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiDpcInterrupt @ 0x1404276A0
 * Reason: Hex-Rays returned no pseudocode for 0x1404276A0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001404276A0: sub     rsp, 8
 * 00000001404276A4: push    rbp
 * 00000001404276A5: push    rsi
 * 00000001404276A6: sub     rsp, 150h
 * 00000001404276AD: lea     rbp, [rsp+80h]
 * 00000001404276B5: mov     byte ptr [rbp+0E8h+var_13F+2], 0
 * 00000001404276B9: mov     [rbp+0E8h+var_13F+7], rax
 * 00000001404276BD: mov     [rbp+0E8h+var_130], rcx
 * 00000001404276C1: mov     [rbp+0E8h+var_128], rdx
 * 00000001404276C5: mov     [rbp+0E8h+var_120], r8
 * 00000001404276C9: mov     [rbp+0E8h+var_118], r9
 * 00000001404276CD: mov     [rbp+0E8h+var_110], r10
 * 00000001404276D1: mov     [rbp+0E8h+var_108], r11
 * 00000001404276D5: test    [rbp+0E8h+arg_0], 1
 * 00000001404276DC: jnz     short loc_140427718
 * 00000001404276DE: xor     edx, edx
 * 00000001404276E0: rdsspq  rdx
 * 00000001404276E5: mov     [rbp+0E8h+var_90], rdx
 * 00000001404276E9: lfence
 * 00000001404276EC: test    word ptr gs:860h, 1
 * 00000001404276F7: jnz     short loc_140427701
 * 00000001404276F9: lfence
 * 00000001404276FC: jmp     loc_140427988
 * 0000000140427701: movzx   eax, word ptr gs:864h
 * 000000014042770A: mov     ecx, 48h ; 'H'
 * 000000014042770F: xor     edx, edx
 * 0000000140427711: wrmsr
 * 0000000140427713: jmp     loc_140427988
 * 0000000140427718: test    cs:KiKvaShadow, 1
 * 000000014042771F: jnz     short loc_140427724
 * 0000000140427721: swapgs
 * 0000000140427724: lfence
 * 0000000140427727: mov     rcx, gs:95A8h
 * 0000000140427730: test    rcx, rcx
 * 0000000140427733: jz      short loc_140427754
 * 0000000140427735: rdsspq  rdx
 * 000000014042773A: mov     r10, gs:95A0h
 * 0000000140427743: add     r10, 8
 * 0000000140427747: cmp     rdx, r10
 * 000000014042774A: jnz     short loc_140427754
 * 000000014042774C: rstorssp qword ptr [rcx]
 * 0000000140427750: saveprevssp
 * 0000000140427754: mov     r10, gs:188h
 * 000000014042775D: mov     rcx, gs:188h
 * 0000000140427766: mov     rcx, [rcx+220h]
 * 000000014042776D: mov     rcx, [rcx+9E0h]
 * 0000000140427774: mov     gs:858h, rcx
 * 000000014042777D: mov     cx, gs:850h
 * 0000000140427786: mov     gs:852h, cx
 * 000000014042778F: mov     cx, gs:860h
 * 0000000140427798: mov     gs:854h, cx
 * 00000001404277A1: movzx   eax, word ptr gs:866h
 * 00000001404277AA: cmp     gs:864h, ax
 * 00000001404277B3: jz      short loc_1404277C7
 * 00000001404277B5: mov     gs:864h, ax
 * 00000001404277BE: mov     ecx, 48h ; 'H'
 * 00000001404277C3: xor     edx, edx
 * 00000001404277C5: wrmsr
 * 00000001404277C7: movzx   edx, word ptr gs:860h
 * 00000001404277D0: test    edx, 8
 * 00000001404277D6: jz      short loc_1404277EF
 * 00000001404277D8: mov     eax, 1
 * 00000001404277DD: xor     edx, edx
 * 00000001404277DF: mov     ecx, 49h ; 'I'
 * 00000001404277E4: wrmsr
 * 00000001404277E6: movzx   edx, word ptr gs:860h
 * 00000001404277EF: test    edx, 2
 * 00000001404277F5: jz      loc_140427932
 * 00000001404277FB: call    loc_14042790E
 * 0000000140427800: add     rsp, 8
 * 0000000140427804: call    loc_140427917
 * 0000000140427809: add     rsp, 8
 * 000000014042780D: call    loc_140427800
 * 0000000140427812: add     rsp, 8
 * 0000000140427816: call    loc_140427809
 * 000000014042781B: add     rsp, 8
 * 000000014042781F: call    loc_140427812
 * 0000000140427824: add     rsp, 8
 * 0000000140427828: call    loc_14042781B
 * 000000014042782D: add     rsp, 8
 * 0000000140427831: call    loc_140427824
 * 0000000140427836: add     rsp, 8
 * 000000014042783A: call    loc_14042782D
 * 000000014042783F: add     rsp, 8
 * 0000000140427843: call    loc_140427836
 * 0000000140427848: add     rsp, 8
 * 000000014042784C: call    loc_14042783F
 * 0000000140427851: add     rsp, 8
 * 0000000140427855: call    loc_140427848
 * 000000014042785A: add     rsp, 8
 * 000000014042785E: call    loc_140427851
 * 0000000140427863: add     rsp, 8
 * 0000000140427867: call    loc_14042785A
 * 000000014042786C: add     rsp, 8
 * 0000000140427870: call    loc_140427863
 * 0000000140427875: add     rsp, 8
 * 0000000140427879: call    loc_14042786C
 * 000000014042787E: add     rsp, 8
 * 0000000140427882: call    loc_140427875
 * 0000000140427887: add     rsp, 8
 * 000000014042788B: call    loc_14042787E
 * 0000000140427890: add     rsp, 8
 * 0000000140427894: call    loc_140427887
 * 0000000140427899: add     rsp, 8
 * 000000014042789D: call    loc_140427890
 * 00000001404278A2: add     rsp, 8
 * 00000001404278A6: call    loc_140427899
 * 00000001404278AB: add     rsp, 8
 * 00000001404278AF: call    loc_1404278A2
 * 00000001404278B4: add     rsp, 8
 * 00000001404278B8: call    loc_1404278AB
 * 00000001404278BD: add     rsp, 8
 * 00000001404278C1: call    loc_1404278B4
 * 00000001404278C6: add     rsp, 8
 * 00000001404278CA: call    loc_1404278BD
 * 00000001404278CF: add     rsp, 8
 * 00000001404278D3: call    loc_1404278C6
 * 00000001404278D8: add     rsp, 8
 * 00000001404278DC: call    loc_1404278CF
 * 00000001404278E1: add     rsp, 8
 * 00000001404278E5: call    loc_1404278D8
 * 00000001404278EA: add     rsp, 8
 * 00000001404278EE: call    loc_1404278E1
 * 00000001404278F3: add     rsp, 8
 * 00000001404278F7: call    loc_1404278EA
 * 00000001404278FC: add     rsp, 8
 * 0000000140427900: call    loc_1404278F3
 * 0000000140427905: add     rsp, 8
 * 0000000140427909: call    loc_1404278FC
 * 000000014042790E: add     rsp, 8
 * 0000000140427912: call    loc_140427905
 * 0000000140427917: add     rsp, 8
 * 000000014042791B: mov     eax, 0DADAh
 * 0000000140427920: test    byte ptr gs:862h, 8
 * 0000000140427929: jz      short loc_140427932
 * 000000014042792B: mov     al, 20h ; ' '
 * 000000014042792D: incsspq rax
 * 0000000140427932: test    edx, 200h
 * 0000000140427938: jz      short loc_14042793F
 * 000000014042793A: call    KiFlushBhbDuringTrapEntryOrExit
 * 000000014042793F: lfence
 * 0000000140427942: mov     byte ptr gs:856h, 0
 * 000000014042794B: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 0000000140427952: jz      short loc_140427973
 * 0000000140427954: mov     ecx, 6A7h
 * 0000000140427959: rdmsr
 * 000000014042795B: cmp     edx, 0
 * 000000014042795E: jz      short loc_140427973
 * 0000000140427960: mov     ecx, edx
 * 0000000140427962: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 0000000140427968: cmp     edx, ecx
 * 000000014042796A: jz      short loc_140427973
 * 000000014042796C: mov     ecx, 6A7h
 * 0000000140427971: wrmsr
 * 0000000140427973: test    byte ptr [r10+3], 3
 * 0000000140427978: mov     [rbp+0E8h+var_68], 0
 * 0000000140427981: jz      short loc_140427988
 * 0000000140427983: call    KiSaveDebugRegisterState
 * 0000000140427988: cld
 * 0000000140427989: stmxcsr dword ptr [rbp+0E8h+var_13F+3]
 * 000000014042798D: ldmxcsr dword ptr gs:180h
 * 0000000140427996: movaps  [rbp+0E8h+var_F8], xmm0
 * 000000014042799A: movaps  [rbp+0E8h+var_E8], xmm1
 * 000000014042799E: movaps  [rbp+0E8h+var_D8], xmm2
 * 00000001404279A2: movaps  [rbp+0E8h+var_C8], xmm3
 * 00000001404279A6: movaps  [rbp+0E8h+var_B8], xmm4
 * 00000001404279AA: movaps  [rbp+0E8h+var_A8], xmm5
 * 00000001404279AE: xor     esi, esi
 * 00000001404279B0: inc     dword ptr gs:82C0h
 * 00000001404279B8: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001404279BF: jz      short loc_1404279C4
 * 00000001404279C1: clac
 * 00000001404279C4: mov     ecx, 2
 * 00000001404279C9: cmp     cs:KiIrqlFlags, 0
 * 00000001404279D0: jz      short loc_1404279D9
 * 00000001404279D2: call    KzSetIrqlUnsafe
 * 00000001404279D7: jmp     short loc_1404279E1
 * 00000001404279D9: mov     rax, cr8
 * 00000001404279DD: mov     cr8, rcx
 * 00000001404279E1: mov     byte ptr [rbp+0E8h+var_13F], al
 * 00000001404279E4: mov     rcx, rsi
 * 00000001404279E7: call    HalPerformEndOfInterrupt
 * 00000001404279EC: sti
 * 00000001404279ED: cmp     byte ptr gs:187h, 0
 * 00000001404279F6: jnz     short loc_140427A05
 * 00000001404279F8: mov     rcx, [rbp+0E8h+var_13F]
 * 00000001404279FC: lea     rdx, [rbp+0E8h+var_168]
 * 0000000140427A00: call    KiDispatchInterrupt
 * 0000000140427A05: cli
 * 0000000140427A06: movzx   ecx, byte ptr [rbp+0E8h+var_13F]
 * 0000000140427A0A: cmp     cs:KiIrqlFlags, 0
 * 0000000140427A11: jz      short loc_140427A1A
 * 0000000140427A13: call    KzSetIrqlUnsafe
 * 0000000140427A18: jmp     short loc_140427A1E
 * 0000000140427A1A: mov     cr8, rcx
 * 0000000140427A1E: mov     rsi, [rbp+0E8h+var_18]
 * 0000000140427A25: cli
 * 0000000140427A26: test    [rbp+0E8h+arg_0], 1
 * 0000000140427A2D: jz      loc_140427D1B
 * 0000000140427A33: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 0000000140427A3A: jz      short loc_140427A3F
 * 0000000140427A3C: stac
 * 0000000140427A3F: mov     rcx, gs:188h
 * 0000000140427A48: test    byte ptr [rcx+0C2h], 3
 * 0000000140427A4F: jz      short loc_140427A6C
 * 0000000140427A51: mov     ecx, 1
 * 0000000140427A56: mov     cr8, rcx
 * 0000000140427A5A: sti
 * 0000000140427A5B: call    KiInitiateUserApc
 * 0000000140427A60: cli
 * 0000000140427A61: mov     ecx, 0
 * 0000000140427A66: mov     cr8, rcx
 * 0000000140427A6A: jmp     short loc_140427A3F
 * 0000000140427A6C: test    byte ptr gs:86Ch, 2
 * 0000000140427A75: jz      short loc_140427A7E
 * 0000000140427A77: xor     ecx, ecx
 * 0000000140427A79: call    KiUpdateStibpPairing
 * 0000000140427A7E: mov     rcx, gs:188h
 * 0000000140427A87: test    dword ptr [rcx], 8000000h
 * 0000000140427A8D: jz      short loc_140427A94
 * 0000000140427A8F: call    KiRestoreSetContextState
 * 0000000140427A94: mov     rcx, gs:188h
 * 0000000140427A9D: test    dword ptr [rcx], 10000h
 * 0000000140427AA3: jz      short loc_140427AB9
 * 0000000140427AA5: test    byte ptr [rcx+2], 1
 * 0000000140427AA9: jz      short loc_140427AB9
 * 0000000140427AAB: call    KiCopyCounters
 * 0000000140427AB0: mov     rcx, gs:188h
 * 0000000140427AB9: ldmxcsr dword ptr [rbp+0E8h+var_13F+3]
 * 0000000140427ABD: cmp     [rbp+0E8h+var_68], 0
 * 0000000140427AC5: jz      short loc_140427ACC
 * 0000000140427AC7: call    KiRestoreDebugRegisterState
 * 0000000140427ACC: mov     rcx, gs:188h
 * 0000000140427AD5: bt      dword ptr [rcx+74h], 16h
 * 0000000140427ADA: jnb     short loc_140427B06
 * 0000000140427ADC: xor     ecx, ecx
 * 0000000140427ADE: rdsspq  rcx
 * 0000000140427AE3: mov     r8, gs:95A8h
 * 0000000140427AEC: add     r8, 8
 * 0000000140427AF0: cmp     rcx, r8
 * 0000000140427AF3: jnz     short loc_140427B06
 * 0000000140427AF5: mov     rcx, gs:95A0h
 * 0000000140427AFE: rstorssp qword ptr [rcx]
 * 0000000140427B02: saveprevssp
 * 0000000140427B06: movaps  xmm0, [rbp+0E8h+var_F8]
 * 0000000140427B0A: movaps  xmm1, [rbp+0E8h+var_E8]
 * 0000000140427B0E: movaps  xmm2, [rbp+0E8h+var_D8]
 * 0000000140427B12: movaps  xmm3, [rbp+0E8h+var_C8]
 * 0000000140427B16: movaps  xmm4, [rbp+0E8h+var_B8]
 * 0000000140427B1A: movaps  xmm5, [rbp+0E8h+var_A8]
 * 0000000140427B1E: mov     r11, [rbp+0E8h+var_108]
 * 0000000140427B22: mov     r10, [rbp+0E8h+var_110]
 * 0000000140427B26: mov     r9, [rbp+0E8h+var_118]
 * 0000000140427B2A: mov     r8, [rbp+0E8h+var_120]
 * 0000000140427B2E: mov     byte ptr gs:856h, 0
 * 0000000140427B37: movzx   eax, word ptr gs:86Ah
 * 0000000140427B40: cmp     gs:864h, ax
 * 0000000140427B49: jz      short loc_140427B5D
 * 0000000140427B4B: mov     gs:864h, ax
 * 0000000140427B54: mov     ecx, 48h ; 'H'
 * 0000000140427B59: xor     edx, edx
 * 0000000140427B5B: wrmsr
 * 0000000140427B5D: btr     word ptr gs:860h, 2
 * 0000000140427B68: jnb     short loc_140427B78
 * 0000000140427B6A: mov     eax, 1
 * 0000000140427B6F: xor     edx, edx
 * 0000000140427B71: mov     ecx, 49h ; 'I'
 * 0000000140427B76: wrmsr
 * 0000000140427B78: btr     word ptr gs:860h, 5
 * 0000000140427B83: jnb     loc_140427CC0
 * 0000000140427B89: call    loc_140427C9C
 * 0000000140427B8E: add     rsp, 8
 * 0000000140427B92: call    loc_140427CA5
 * 0000000140427B97: add     rsp, 8
 * 0000000140427B9B: call    loc_140427B8E
 * 0000000140427BA0: add     rsp, 8
 * 0000000140427BA4: call    loc_140427B97
 * 0000000140427BA9: add     rsp, 8
 * 0000000140427BAD: call    loc_140427BA0
 * 0000000140427BB2: add     rsp, 8
 * 0000000140427BB6: call    loc_140427BA9
 * 0000000140427BBB: add     rsp, 8
 * 0000000140427BBF: call    loc_140427BB2
 * 0000000140427BC4: add     rsp, 8
 * 0000000140427BC8: call    loc_140427BBB
 * 0000000140427BCD: add     rsp, 8
 * 0000000140427BD1: call    loc_140427BC4
 * 0000000140427BD6: add     rsp, 8
 * 0000000140427BDA: call    loc_140427BCD
 * 0000000140427BDF: add     rsp, 8
 * 0000000140427BE3: call    loc_140427BD6
 * 0000000140427BE8: add     rsp, 8
 * 0000000140427BEC: call    loc_140427BDF
 * 0000000140427BF1: add     rsp, 8
 * 0000000140427BF5: call    loc_140427BE8
 * 0000000140427BFA: add     rsp, 8
 * 0000000140427BFE: call    loc_140427BF1
 * 0000000140427C03: add     rsp, 8
 * 0000000140427C07: call    loc_140427BFA
 * 0000000140427C0C: add     rsp, 8
 * 0000000140427C10: call    loc_140427C03
 * 0000000140427C15: add     rsp, 8
 * 0000000140427C19: call    loc_140427C0C
 * 0000000140427C1E: add     rsp, 8
 * 0000000140427C22: call    loc_140427C15
 * 0000000140427C27: add     rsp, 8
 * 0000000140427C2B: call    loc_140427C1E
 * 0000000140427C30: add     rsp, 8
 * 0000000140427C34: call    loc_140427C27
 * 0000000140427C39: add     rsp, 8
 * 0000000140427C3D: call    loc_140427C30
 * 0000000140427C42: add     rsp, 8
 * 0000000140427C46: call    loc_140427C39
 * 0000000140427C4B: add     rsp, 8
 * 0000000140427C4F: call    loc_140427C42
 * 0000000140427C54: add     rsp, 8
 * 0000000140427C58: call    loc_140427C4B
 * 0000000140427C5D: add     rsp, 8
 * 0000000140427C61: call    loc_140427C54
 * 0000000140427C66: add     rsp, 8
 * 0000000140427C6A: call    loc_140427C5D
 * 0000000140427C6F: add     rsp, 8
 * 0000000140427C73: call    loc_140427C66
 * 0000000140427C78: add     rsp, 8
 * 0000000140427C7C: call    loc_140427C6F
 * 0000000140427C81: add     rsp, 8
 * 0000000140427C85: call    loc_140427C78
 * 0000000140427C8A: add     rsp, 8
 * 0000000140427C8E: call    loc_140427C81
 * 0000000140427C93: add     rsp, 8
 * 0000000140427C97: call    loc_140427C8A
 * 0000000140427C9C: add     rsp, 8
 * 0000000140427CA0: call    loc_140427C93
 * 0000000140427CA5: add     rsp, 8
 * 0000000140427CA9: mov     eax, 0DADAh
 * 0000000140427CAE: test    byte ptr gs:862h, 8
 * 0000000140427CB7: jz      short loc_140427CC0
 * 0000000140427CB9: mov     al, 20h ; ' '
 * 0000000140427CBB: incsspq rax
 * 0000000140427CC0: test    word ptr gs:860h, 80h
 * 0000000140427CCB: jz      short loc_140427CD9
 * 0000000140427CCD: xor     eax, eax
 * 0000000140427CCF: xor     edx, edx
 * 0000000140427CD1: mov     ecx, 1
 * 0000000140427CD6: div     rcx
 * 0000000140427CD9: mov     rdx, [rbp+0E8h+var_128]
 * 0000000140427CDD: mov     rcx, [rbp+0E8h+var_130]
 * 0000000140427CE1: mov     rax, [rbp+0E8h+var_13F+7]
 * 0000000140427CE5: mov     rsp, rbp
 * 0000000140427CE8: mov     rbp, [rbp+0E8h+var_10]
 * 0000000140427CEF: add     rsp, 0E8h
 * 0000000140427CF6: test    cs:KiKvaShadow, 1
 * 0000000140427CFD: jz      short loc_140427D04
 * 0000000140427CFF: jmp     KiKernelExit
 * 0000000140427D04: test    word ptr gs:860h, 100h
 * 0000000140427D0F: jz      short loc_140427D16
 * 0000000140427D11: verw    [rsp+arg_18]
 * 0000000140427D16: swapgs
 * 0000000140427D19: iretq
 * 0000000140427D1B: ldmxcsr dword ptr [rbp+0E8h+var_13F+3]
 * 0000000140427D1F: movaps  xmm0, [rbp+0E8h+var_F8]
 * 0000000140427D23: movaps  xmm1, [rbp+0E8h+var_E8]
 * 0000000140427D27: movaps  xmm2, [rbp+0E8h+var_D8]
 * 0000000140427D2B: movaps  xmm3, [rbp+0E8h+var_C8]
 * 0000000140427D2F: movaps  xmm4, [rbp+0E8h+var_B8]
 * 0000000140427D33: movaps  xmm5, [rbp+0E8h+var_A8]
 * 0000000140427D37: mov     r11, [rbp+0E8h+var_108]
 * 0000000140427D3B: mov     r10, [rbp+0E8h+var_110]
 * 0000000140427D3F: mov     r9, [rbp+0E8h+var_118]
 * 0000000140427D43: mov     r8, [rbp+0E8h+var_120]
 * 0000000140427D47: mov     rdx, [rbp+0E8h+var_128]
 * 0000000140427D4B: mov     rcx, [rbp+0E8h+var_130]
 * 0000000140427D4F: mov     rax, [rbp+0E8h+var_13F+7]
 * 0000000140427D53: mov     rsp, rbp
 * 0000000140427D56: mov     rbp, [rbp+0E8h+var_10]
 * 0000000140427D5D: add     rsp, 0E8h
 * 0000000140427D64: iretq
 */
