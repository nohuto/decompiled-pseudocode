/*
 * XREFs of KiControlProtectionFault @ 0x140432540
 * Callers:
 *     KiControlProtectionFaultShadow @ 0x140AF6BC0 (KiControlProtectionFaultShadow.c)
 * Callees:
 *     KiRestoreDebugRegisterState @ 0x14041F2B0 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x14041F330 (KiSaveDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1404200D0 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x1404251B0 (KiInitiateUserApc.c)
 *     KiControlProtectionFault @ 0x140432540 (KiControlProtectionFault.c)
 *     KiBugCheckDispatch @ 0x140434CC0 (KiBugCheckDispatch.c)
 *     KiExceptionDispatch @ 0x140434D40 (KiExceptionDispatch.c)
 *     KiFastFailDispatch @ 0x140435240 (KiFastFailDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140435700 (KiFlushBhbDuringTrapEntryOrExit.c)
 *     KiUpdateStibpPairing @ 0x140461220 (KiUpdateStibpPairing.c)
 *     KiCopyCounters @ 0x1405746E0 (KiCopyCounters.c)
 *     KiProcessControlProtection @ 0x14057C4B0 (KiProcessControlProtection.c)
 */

/*
 * Hex-Rays decompilation failed for KiControlProtectionFault @ 0x140432540
 * Reason: Hex-Rays returned no pseudocode for 0x140432540
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140432540: push    rbp
 * 0000000140432541: sub     rsp, 158h
 * 0000000140432548: lea     rbp, [rsp+80h]
 * 0000000140432550: mov     [rbp+0D8h+var_12D], 1
 * 0000000140432554: mov     [rbp+0D8h+var_128], rax
 * 0000000140432558: mov     [rbp+0D8h+var_120], rcx
 * 000000014043255C: mov     [rbp+0D8h+var_118], rdx
 * 0000000140432560: mov     [rbp+0D8h+var_110], r8
 * 0000000140432564: mov     [rbp+0D8h+var_108], r9
 * 0000000140432568: mov     [rbp+0D8h+var_100], r10
 * 000000014043256C: mov     [rbp+0D8h+var_F8], r11
 * 0000000140432570: test    [rbp+0D8h+arg_8], 1
 * 0000000140432577: jnz     short loc_1404325B3
 * 0000000140432579: xor     edx, edx
 * 000000014043257B: rdsspq  rdx
 * 0000000140432580: mov     [rbp+0D8h+var_80], rdx
 * 0000000140432584: lfence
 * 0000000140432587: test    word ptr gs:860h, 1
 * 0000000140432592: jnz     short loc_14043259C
 * 0000000140432594: lfence
 * 0000000140432597: jmp     loc_140432823
 * 000000014043259C: movzx   eax, word ptr gs:864h
 * 00000001404325A5: mov     ecx, 48h ; 'H'
 * 00000001404325AA: xor     edx, edx
 * 00000001404325AC: wrmsr
 * 00000001404325AE: jmp     loc_140432823
 * 00000001404325B3: test    cs:KiKvaShadow, 1
 * 00000001404325BA: jnz     short loc_1404325BF
 * 00000001404325BC: swapgs
 * 00000001404325BF: lfence
 * 00000001404325C2: mov     rcx, gs:95A8h
 * 00000001404325CB: test    rcx, rcx
 * 00000001404325CE: jz      short loc_1404325EF
 * 00000001404325D0: rdsspq  rdx
 * 00000001404325D5: mov     r10, gs:95A0h
 * 00000001404325DE: add     r10, 8
 * 00000001404325E2: cmp     rdx, r10
 * 00000001404325E5: jnz     short loc_1404325EF
 * 00000001404325E7: rstorssp qword ptr [rcx]
 * 00000001404325EB: saveprevssp
 * 00000001404325EF: mov     r10, gs:188h
 * 00000001404325F8: mov     rcx, gs:188h
 * 0000000140432601: mov     rcx, [rcx+220h]
 * 0000000140432608: mov     rcx, [rcx+9E0h]
 * 000000014043260F: mov     gs:858h, rcx
 * 0000000140432618: mov     cx, gs:850h
 * 0000000140432621: mov     gs:852h, cx
 * 000000014043262A: mov     cx, gs:860h
 * 0000000140432633: mov     gs:854h, cx
 * 000000014043263C: movzx   eax, word ptr gs:866h
 * 0000000140432645: cmp     gs:864h, ax
 * 000000014043264E: jz      short loc_140432662
 * 0000000140432650: mov     gs:864h, ax
 * 0000000140432659: mov     ecx, 48h ; 'H'
 * 000000014043265E: xor     edx, edx
 * 0000000140432660: wrmsr
 * 0000000140432662: movzx   edx, word ptr gs:860h
 * 000000014043266B: test    edx, 8
 * 0000000140432671: jz      short loc_14043268A
 * 0000000140432673: mov     eax, 1
 * 0000000140432678: xor     edx, edx
 * 000000014043267A: mov     ecx, 49h ; 'I'
 * 000000014043267F: wrmsr
 * 0000000140432681: movzx   edx, word ptr gs:860h
 * 000000014043268A: test    edx, 2
 * 0000000140432690: jz      loc_1404327CD
 * 0000000140432696: call    loc_1404327A9
 * 000000014043269B: add     rsp, 8
 * 000000014043269F: call    loc_1404327B2
 * 00000001404326A4: add     rsp, 8
 * 00000001404326A8: call    loc_14043269B
 * 00000001404326AD: add     rsp, 8
 * 00000001404326B1: call    loc_1404326A4
 * 00000001404326B6: add     rsp, 8
 * 00000001404326BA: call    loc_1404326AD
 * 00000001404326BF: add     rsp, 8
 * 00000001404326C3: call    loc_1404326B6
 * 00000001404326C8: add     rsp, 8
 * 00000001404326CC: call    loc_1404326BF
 * 00000001404326D1: add     rsp, 8
 * 00000001404326D5: call    loc_1404326C8
 * 00000001404326DA: add     rsp, 8
 * 00000001404326DE: call    loc_1404326D1
 * 00000001404326E3: add     rsp, 8
 * 00000001404326E7: call    loc_1404326DA
 * 00000001404326EC: add     rsp, 8
 * 00000001404326F0: call    loc_1404326E3
 * 00000001404326F5: add     rsp, 8
 * 00000001404326F9: call    loc_1404326EC
 * 00000001404326FE: add     rsp, 8
 * 0000000140432702: call    loc_1404326F5
 * 0000000140432707: add     rsp, 8
 * 000000014043270B: call    loc_1404326FE
 * 0000000140432710: add     rsp, 8
 * 0000000140432714: call    loc_140432707
 * 0000000140432719: add     rsp, 8
 * 000000014043271D: call    loc_140432710
 * 0000000140432722: add     rsp, 8
 * 0000000140432726: call    loc_140432719
 * 000000014043272B: add     rsp, 8
 * 000000014043272F: call    loc_140432722
 * 0000000140432734: add     rsp, 8
 * 0000000140432738: call    loc_14043272B
 * 000000014043273D: add     rsp, 8
 * 0000000140432741: call    loc_140432734
 * 0000000140432746: add     rsp, 8
 * 000000014043274A: call    loc_14043273D
 * 000000014043274F: add     rsp, 8
 * 0000000140432753: call    loc_140432746
 * 0000000140432758: add     rsp, 8
 * 000000014043275C: call    loc_14043274F
 * 0000000140432761: add     rsp, 8
 * 0000000140432765: call    loc_140432758
 * 000000014043276A: add     rsp, 8
 * 000000014043276E: call    loc_140432761
 * 0000000140432773: add     rsp, 8
 * 0000000140432777: call    loc_14043276A
 * 000000014043277C: add     rsp, 8
 * 0000000140432780: call    loc_140432773
 * 0000000140432785: add     rsp, 8
 * 0000000140432789: call    loc_14043277C
 * 000000014043278E: add     rsp, 8
 * 0000000140432792: call    loc_140432785
 * 0000000140432797: add     rsp, 8
 * 000000014043279B: call    loc_14043278E
 * 00000001404327A0: add     rsp, 8
 * 00000001404327A4: call    loc_140432797
 * 00000001404327A9: add     rsp, 8
 * 00000001404327AD: call    loc_1404327A0
 * 00000001404327B2: add     rsp, 8
 * 00000001404327B6: mov     eax, 0DADAh
 * 00000001404327BB: test    byte ptr gs:862h, 8
 * 00000001404327C4: jz      short loc_1404327CD
 * 00000001404327C6: mov     al, 20h ; ' '
 * 00000001404327C8: incsspq rax
 * 00000001404327CD: test    edx, 200h
 * 00000001404327D3: jz      short loc_1404327DA
 * 00000001404327D5: call    KiFlushBhbDuringTrapEntryOrExit
 * 00000001404327DA: lfence
 * 00000001404327DD: mov     byte ptr gs:856h, 0
 * 00000001404327E6: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 00000001404327ED: jz      short loc_14043280E
 * 00000001404327EF: mov     ecx, 6A7h
 * 00000001404327F4: rdmsr
 * 00000001404327F6: cmp     edx, 0
 * 00000001404327F9: jz      short loc_14043280E
 * 00000001404327FB: mov     ecx, edx
 * 00000001404327FD: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 0000000140432803: cmp     edx, ecx
 * 0000000140432805: jz      short loc_14043280E
 * 0000000140432807: mov     ecx, 6A7h
 * 000000014043280C: wrmsr
 * 000000014043280E: test    byte ptr [r10+3], 3
 * 0000000140432813: mov     [rbp+0D8h+var_58], 0
 * 000000014043281C: jz      short loc_140432823
 * 000000014043281E: call    KiSaveDebugRegisterState
 * 0000000140432823: cld
 * 0000000140432824: stmxcsr [rbp+0D8h+var_12C]
 * 0000000140432828: ldmxcsr dword ptr gs:180h
 * 0000000140432831: movaps  [rbp+0D8h+var_E8], xmm0
 * 0000000140432835: movaps  [rbp+0D8h+var_D8], xmm1
 * 0000000140432839: movaps  [rbp+0D8h+var_C8], xmm2
 * 000000014043283D: movaps  [rbp+0D8h+var_B8], xmm3
 * 0000000140432841: movaps  [rbp+0D8h+var_A8], xmm4
 * 0000000140432845: movaps  [rbp+0D8h+var_98], xmm5
 * 0000000140432849: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 0000000140432850: jz      short loc_14043285E
 * 0000000140432852: test    [rbp+0D8h+arg_8], 1
 * 0000000140432859: jz      short loc_14043285E
 * 000000014043285B: stac
 * 000000014043285E: mov     eax, [rbp+0E0h]
 * 0000000140432864: test    [rbp+0D8h+arg_10], 200h
 * 000000014043286E: jz      short loc_140432871
 * 0000000140432870: sti
 * 0000000140432871: test    byte ptr gs:8B25h, 40h
 * 000000014043287A: jz      loc_140432913
 * 0000000140432880: lea     rcx, [rbp+0D8h+var_158]
 * 0000000140432884: call    KiProcessControlProtection
 * 0000000140432889: cmp     eax, 1
 * 000000014043288C: jz      loc_140432936
 * 0000000140432892: cmp     eax, 2
 * 0000000140432895: jz      short loc_1404328A2
 * 0000000140432897: cmp     eax, 3
 * 000000014043289A: jz      loc_140432922
 * 00000001404328A0: jmp     short loc_140432913
 * 00000001404328A2: test    [rbp+0D8h+arg_8], 1
 * 00000001404328A9: jz      short loc_1404328EE
 * 00000001404328AB: mov     ecx, 6A7h
 * 00000001404328B0: rdmsr
 * 00000001404328B2: shl     rdx, 20h
 * 00000001404328B6: or      rax, rdx
 * 00000001404328B9: mov     r10, rax
 * 00000001404328BC: mov     rcx, gs:188h
 * 00000001404328C5: mov     rcx, [rcx+220h]
 * 00000001404328CC: mov     r11d, [rcx+9D4h]
 * 00000001404328D3: and     r11d, 0C0F6C000h
 * 00000001404328DA: mov     edx, cs:KiUserCetAppcompatOptions
 * 00000001404328E0: shl     rdx, 20h
 * 00000001404328E4: or      r11, rdx
 * 00000001404328E7: mov     edx, 3
 * 00000001404328EC: jmp     short loc_1404328FA
 * 00000001404328EE: mov     edx, 2
 * 00000001404328F3: mov     r10, [rbp+0D8h+var_80]
 * 00000001404328F7: mov     r10, [r10]
 * 00000001404328FA: mov     r9, 39h ; '9'
 * 0000000140432901: mov     ecx, 0C0000409h
 * 0000000140432906: mov     r8, [rbp+0D8h+arg_0]
 * 000000014043290D: call    KiFastFailDispatch
 * 0000000140432912: nop
 * 0000000140432913: mov     edx, 15h
 * 0000000140432918: mov     ecx, 7Fh
 * 000000014043291D: call    KiBugCheckDispatch
 * 0000000140432922: mov     ecx, 80000033h
 * 0000000140432927: xor     edx, edx
 * 0000000140432929: mov     r8, [rbp+0D8h+arg_0]
 * 0000000140432930: call    KiExceptionDispatch
 * 0000000140432935: nop
 * 0000000140432936: cli
 * 0000000140432937: test    [rbp+0D8h+arg_8], 1
 * 000000014043293E: jz      loc_140432C2C
 * 0000000140432944: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 000000014043294B: jz      short loc_140432950
 * 000000014043294D: stac
 * 0000000140432950: mov     rcx, gs:188h
 * 0000000140432959: test    byte ptr [rcx+0C2h], 3
 * 0000000140432960: jz      short loc_14043297D
 * 0000000140432962: mov     ecx, 1
 * 0000000140432967: mov     cr8, rcx
 * 000000014043296B: sti
 * 000000014043296C: call    KiInitiateUserApc
 * 0000000140432971: cli
 * 0000000140432972: mov     ecx, 0
 * 0000000140432977: mov     cr8, rcx
 * 000000014043297B: jmp     short loc_140432950
 * 000000014043297D: test    byte ptr gs:86Ch, 2
 * 0000000140432986: jz      short loc_14043298F
 * 0000000140432988: xor     ecx, ecx
 * 000000014043298A: call    KiUpdateStibpPairing
 * 000000014043298F: mov     rcx, gs:188h
 * 0000000140432998: test    dword ptr [rcx], 8000000h
 * 000000014043299E: jz      short loc_1404329A5
 * 00000001404329A0: call    KiRestoreSetContextState
 * 00000001404329A5: mov     rcx, gs:188h
 * 00000001404329AE: test    dword ptr [rcx], 10000h
 * 00000001404329B4: jz      short loc_1404329CA
 * 00000001404329B6: test    byte ptr [rcx+2], 1
 * 00000001404329BA: jz      short loc_1404329CA
 * 00000001404329BC: call    KiCopyCounters
 * 00000001404329C1: mov     rcx, gs:188h
 * 00000001404329CA: ldmxcsr [rbp+0D8h+var_12C]
 * 00000001404329CE: cmp     [rbp+0D8h+var_58], 0
 * 00000001404329D6: jz      short loc_1404329DD
 * 00000001404329D8: call    KiRestoreDebugRegisterState
 * 00000001404329DD: mov     rcx, gs:188h
 * 00000001404329E6: bt      dword ptr [rcx+74h], 16h
 * 00000001404329EB: jnb     short loc_140432A17
 * 00000001404329ED: xor     ecx, ecx
 * 00000001404329EF: rdsspq  rcx
 * 00000001404329F4: mov     r8, gs:95A8h
 * 00000001404329FD: add     r8, 8
 * 0000000140432A01: cmp     rcx, r8
 * 0000000140432A04: jnz     short loc_140432A17
 * 0000000140432A06: mov     rcx, gs:95A0h
 * 0000000140432A0F: rstorssp qword ptr [rcx]
 * 0000000140432A13: saveprevssp
 * 0000000140432A17: movaps  xmm0, [rbp+0D8h+var_E8]
 * 0000000140432A1B: movaps  xmm1, [rbp+0D8h+var_D8]
 * 0000000140432A1F: movaps  xmm2, [rbp+0D8h+var_C8]
 * 0000000140432A23: movaps  xmm3, [rbp+0D8h+var_B8]
 * 0000000140432A27: movaps  xmm4, [rbp+0D8h+var_A8]
 * 0000000140432A2B: movaps  xmm5, [rbp+0D8h+var_98]
 * 0000000140432A2F: mov     r11, [rbp+0D8h+var_F8]
 * 0000000140432A33: mov     r10, [rbp+0D8h+var_100]
 * 0000000140432A37: mov     r9, [rbp+0D8h+var_108]
 * 0000000140432A3B: mov     r8, [rbp+0D8h+var_110]
 * 0000000140432A3F: mov     byte ptr gs:856h, 0
 * 0000000140432A48: movzx   eax, word ptr gs:86Ah
 * 0000000140432A51: cmp     gs:864h, ax
 * 0000000140432A5A: jz      short loc_140432A6E
 * 0000000140432A5C: mov     gs:864h, ax
 * 0000000140432A65: mov     ecx, 48h ; 'H'
 * 0000000140432A6A: xor     edx, edx
 * 0000000140432A6C: wrmsr
 * 0000000140432A6E: btr     word ptr gs:860h, 2
 * 0000000140432A79: jnb     short loc_140432A89
 * 0000000140432A7B: mov     eax, 1
 * 0000000140432A80: xor     edx, edx
 * 0000000140432A82: mov     ecx, 49h ; 'I'
 * 0000000140432A87: wrmsr
 * 0000000140432A89: btr     word ptr gs:860h, 5
 * 0000000140432A94: jnb     loc_140432BD1
 * 0000000140432A9A: call    loc_140432BAD
 * 0000000140432A9F: add     rsp, 8
 * 0000000140432AA3: call    loc_140432BB6
 * 0000000140432AA8: add     rsp, 8
 * 0000000140432AAC: call    loc_140432A9F
 * 0000000140432AB1: add     rsp, 8
 * 0000000140432AB5: call    loc_140432AA8
 * 0000000140432ABA: add     rsp, 8
 * 0000000140432ABE: call    loc_140432AB1
 * 0000000140432AC3: add     rsp, 8
 * 0000000140432AC7: call    loc_140432ABA
 * 0000000140432ACC: add     rsp, 8
 * 0000000140432AD0: call    loc_140432AC3
 * 0000000140432AD5: add     rsp, 8
 * 0000000140432AD9: call    loc_140432ACC
 * 0000000140432ADE: add     rsp, 8
 * 0000000140432AE2: call    loc_140432AD5
 * 0000000140432AE7: add     rsp, 8
 * 0000000140432AEB: call    loc_140432ADE
 * 0000000140432AF0: add     rsp, 8
 * 0000000140432AF4: call    loc_140432AE7
 * 0000000140432AF9: add     rsp, 8
 * 0000000140432AFD: call    loc_140432AF0
 * 0000000140432B02: add     rsp, 8
 * 0000000140432B06: call    loc_140432AF9
 * 0000000140432B0B: add     rsp, 8
 * 0000000140432B0F: call    loc_140432B02
 * 0000000140432B14: add     rsp, 8
 * 0000000140432B18: call    loc_140432B0B
 * 0000000140432B1D: add     rsp, 8
 * 0000000140432B21: call    loc_140432B14
 * 0000000140432B26: add     rsp, 8
 * 0000000140432B2A: call    loc_140432B1D
 * 0000000140432B2F: add     rsp, 8
 * 0000000140432B33: call    loc_140432B26
 * 0000000140432B38: add     rsp, 8
 * 0000000140432B3C: call    loc_140432B2F
 * 0000000140432B41: add     rsp, 8
 * 0000000140432B45: call    loc_140432B38
 * 0000000140432B4A: add     rsp, 8
 * 0000000140432B4E: call    loc_140432B41
 * 0000000140432B53: add     rsp, 8
 * 0000000140432B57: call    loc_140432B4A
 * 0000000140432B5C: add     rsp, 8
 * 0000000140432B60: call    loc_140432B53
 * 0000000140432B65: add     rsp, 8
 * 0000000140432B69: call    loc_140432B5C
 * 0000000140432B6E: add     rsp, 8
 * 0000000140432B72: call    loc_140432B65
 * 0000000140432B77: add     rsp, 8
 * 0000000140432B7B: call    loc_140432B6E
 * 0000000140432B80: add     rsp, 8
 * 0000000140432B84: call    loc_140432B77
 * 0000000140432B89: add     rsp, 8
 * 0000000140432B8D: call    loc_140432B80
 * 0000000140432B92: add     rsp, 8
 * 0000000140432B96: call    loc_140432B89
 * 0000000140432B9B: add     rsp, 8
 * 0000000140432B9F: call    loc_140432B92
 * 0000000140432BA4: add     rsp, 8
 * 0000000140432BA8: call    loc_140432B9B
 * 0000000140432BAD: add     rsp, 8
 * 0000000140432BB1: call    loc_140432BA4
 * 0000000140432BB6: add     rsp, 8
 * 0000000140432BBA: mov     eax, 0DADAh
 * 0000000140432BBF: test    byte ptr gs:862h, 8
 * 0000000140432BC8: jz      short loc_140432BD1
 * 0000000140432BCA: mov     al, 20h ; ' '
 * 0000000140432BCC: incsspq rax
 * 0000000140432BD1: test    word ptr gs:860h, 80h
 * 0000000140432BDC: jz      short loc_140432BEA
 * 0000000140432BDE: xor     eax, eax
 * 0000000140432BE0: xor     edx, edx
 * 0000000140432BE2: mov     ecx, 1
 * 0000000140432BE7: div     rcx
 * 0000000140432BEA: mov     rdx, [rbp+0D8h+var_118]
 * 0000000140432BEE: mov     rcx, [rbp+0D8h+var_120]
 * 0000000140432BF2: mov     rax, [rbp+0D8h+var_128]
 * 0000000140432BF6: mov     rsp, rbp
 * 0000000140432BF9: mov     rbp, [rbp+0D8h+var_s0]
 * 0000000140432C00: add     rsp, 0E8h
 * 0000000140432C07: test    cs:KiKvaShadow, 1
 * 0000000140432C0E: jz      short loc_140432C15
 * 0000000140432C10: jmp     KiKernelExit
 * 0000000140432C15: test    word ptr gs:860h, 100h
 * 0000000140432C20: jz      short loc_140432C27
 * 0000000140432C22: verw    [rsp-10h+arg_20]
 * 0000000140432C27: swapgs
 * 0000000140432C2A: iretq
 * 0000000140432C2C: ldmxcsr [rbp+0D8h+var_12C]
 * 0000000140432C30: movaps  xmm0, [rbp+0D8h+var_E8]
 * 0000000140432C34: movaps  xmm1, [rbp+0D8h+var_D8]
 * 0000000140432C38: movaps  xmm2, [rbp+0D8h+var_C8]
 * 0000000140432C3C: movaps  xmm3, [rbp+0D8h+var_B8]
 * 0000000140432C40: movaps  xmm4, [rbp+0D8h+var_A8]
 * 0000000140432C44: movaps  xmm5, [rbp+0D8h+var_98]
 * 0000000140432C48: mov     r11, [rbp+0D8h+var_F8]
 * 0000000140432C4C: mov     r10, [rbp+0D8h+var_100]
 * 0000000140432C50: mov     r9, [rbp+0D8h+var_108]
 * 0000000140432C54: mov     r8, [rbp+0D8h+var_110]
 * 0000000140432C58: mov     rdx, [rbp+0D8h+var_118]
 * 0000000140432C5C: mov     rcx, [rbp+0D8h+var_120]
 * 0000000140432C60: mov     rax, [rbp+0D8h+var_128]
 * 0000000140432C64: mov     rsp, rbp
 * 0000000140432C67: mov     rbp, [rbp+0D8h+var_s0]
 * 0000000140432C6E: add     rsp, 0E8h
 * 0000000140432C75: iretq
 * 0000000140432C77: retn
 */
