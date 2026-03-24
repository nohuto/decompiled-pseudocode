/*
 * XREFs of KiSpuriousDispatchNoEOI @ 0x1404216A0
 * Callers:
 *     <none>
 * Callees:
 *     KiEndThreadAccountingPeriod @ 0x140248410 (KiEndThreadAccountingPeriod.c)
 *     HalRequestSoftwareInterrupt @ 0x140254BF0 (HalRequestSoftwareInterrupt.c)
 *     KiBeginThreadAccountingPeriod @ 0x140308C80 (KiBeginThreadAccountingPeriod.c)
 *     KiRestoreDebugRegisterState @ 0x14041E860 (KiRestoreDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x14041F680 (KiRestoreSetContextState.c)
 *     KiSpuriousDispatchNoEOI @ 0x1404216A0 (KiSpuriousDispatchNoEOI.c)
 *     KiInitiateUserApc @ 0x140424760 (KiInitiateUserApc.c)
 *     KiDpcInterruptBypass @ 0x140427320 (KiDpcInterruptBypass.c)
 *     KiUpdateStibpPairing @ 0x1404607C0 (KiUpdateStibpPairing.c)
 *     KzSetIrqlUnsafe @ 0x14056C100 (KzSetIrqlUnsafe.c)
 *     KiCopyCounters @ 0x140574240 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiSpuriousDispatchNoEOI @ 0x1404216A0
 * Reason: Hex-Rays returned no pseudocode for 0x1404216A0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001404216A0: mov     ecx, 0Fh
 * 00000001404216A5: cmp     cs:KiIrqlFlags, 0
 * 00000001404216AC: jz      short loc_1404216B5
 * 00000001404216AE: call    KzSetIrqlUnsafe
 * 00000001404216B3: jmp     short loc_1404216BD
 * 00000001404216B5: mov     rax, cr8
 * 00000001404216B9: mov     cr8, rcx
 * 00000001404216BD: mov     [rbp-57h], al
 * 00000001404216C0: mov     rcx, gs:20h
 * 00000001404216C9: inc     byte ptr [rcx+20h]
 * 00000001404216CC: cmp     byte ptr [rcx+20h], 1
 * 00000001404216D0: jnz     short loc_140421722
 * 00000001404216D2: rdtsc
 * 00000001404216D4: shl     rdx, 20h
 * 00000001404216D8: or      rax, rdx
 * 00000001404216DB: mov     r8, [rcx+8]
 * 00000001404216DF: sub     rax, [rcx+8180h]
 * 00000001404216E6: add     [r8+48h], rax
 * 00000001404216EA: mov     edx, [r8+50h]
 * 00000001404216EE: add     [rcx+8180h], rax
 * 00000001404216F5: add     rdx, rax
 * 00000001404216F8: mov     ecx, edx
 * 00000001404216FA: shr     rdx, 20h
 * 00000001404216FE: jz      short loc_140421703
 * 0000000140421700: or      ecx, 0FFFFFFFFh
 * 0000000140421703: mov     [r8+50h], ecx
 * 0000000140421707: test    byte ptr [r8+2], 0BEh
 * 000000014042170C: jz      short loc_140421722
 * 000000014042170E: mov     rdx, r8
 * 0000000140421711: mov     r8, rax
 * 0000000140421714: mov     rcx, gs:20h
 * 000000014042171D: call    KiEndThreadAccountingPeriod
 * 0000000140421722: sti
 * 0000000140421723: inc     dword ptr [rsi+74h]
 * 0000000140421726: cli
 * 0000000140421727: mov     rcx, gs:20h
 * 0000000140421730: cmp     byte ptr [rcx+20h], 1
 * 0000000140421734: ja      short loc_1404217B0
 * 0000000140421736: rdtsc
 * 0000000140421738: shl     rdx, 20h
 * 000000014042173C: or      rax, rdx
 * 000000014042173F: sub     rax, [rcx+8180h]
 * 0000000140421746: add     [rcx+8278h], rax
 * 000000014042174D: add     [rcx+8180h], rax
 * 0000000140421754: mov     r8, rax
 * 0000000140421757: mov     rax, [rcx+8]
 * 000000014042175B: test    byte ptr [rax+2], 72h
 * 000000014042175F: jz      short loc_140421774
 * 0000000140421761: xor     edx, edx
 * 0000000140421763: call    KiBeginThreadAccountingPeriod
 * 0000000140421768: mov     rcx, gs:20h
 * 0000000140421771: inc     byte ptr [rcx+20h]
 * 0000000140421774: mov     dl, [rcx+6]
 * 0000000140421777: and     byte ptr [rcx+6], 0
 * 000000014042177B: cmp     byte ptr [rcx+7], 0
 * 000000014042177F: jnz     short loc_1404217B0
 * 0000000140421781: test    dl, dl
 * 0000000140421783: jz      short loc_1404217B0
 * 0000000140421785: cmp     byte ptr [rbp-57h], 2
 * 0000000140421789: jnb     short loc_140421796
 * 000000014042178B: and     byte ptr [rcx+20h], 0
 * 000000014042178F: call    KiDpcInterruptBypass
 * 0000000140421794: jmp     short loc_1404217B3
 * 0000000140421796: mov     ecx, 2
 * 000000014042179B: call    cs:__imp_HalRequestSoftwareInterrupt
 * 00000001404217A2: nop     dword ptr [rax+rax+00h]
 * 00000001404217A7: mov     rcx, gs:20h
 * 00000001404217B0: dec     byte ptr [rcx+20h]
 * 00000001404217B3: movzx   ecx, byte ptr [rbp-57h]
 * 00000001404217B7: cmp     cs:KiIrqlFlags, 0
 * 00000001404217BE: jz      short loc_1404217C7
 * 00000001404217C0: call    KzSetIrqlUnsafe
 * 00000001404217C5: jmp     short loc_1404217CB
 * 00000001404217C7: mov     cr8, rcx
 * 00000001404217CB: mov     rsi, [rbp+0D0h]
 * 00000001404217D2: cli
 * 00000001404217D3: test    byte ptr [rbp+0F0h], 1
 * 00000001404217DA: jz      loc_140421AC8
 * 00000001404217E0: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001404217E7: jz      short loc_1404217EC
 * 00000001404217E9: stac
 * 00000001404217EC: mov     rcx, gs:188h
 * 00000001404217F5: test    byte ptr [rcx+0C2h], 3
 * 00000001404217FC: jz      short loc_140421819
 * 00000001404217FE: mov     ecx, 1
 * 0000000140421803: mov     cr8, rcx
 * 0000000140421807: sti
 * 0000000140421808: call    KiInitiateUserApc
 * 000000014042180D: cli
 * 000000014042180E: mov     ecx, 0
 * 0000000140421813: mov     cr8, rcx
 * 0000000140421817: jmp     short loc_1404217EC
 * 0000000140421819: test    byte ptr gs:86Ch, 2
 * 0000000140421822: jz      short loc_14042182B
 * 0000000140421824: xor     ecx, ecx
 * 0000000140421826: call    KiUpdateStibpPairing
 * 000000014042182B: mov     rcx, gs:188h
 * 0000000140421834: test    dword ptr [rcx], 8000000h
 * 000000014042183A: jz      short loc_140421841
 * 000000014042183C: call    KiRestoreSetContextState
 * 0000000140421841: mov     rcx, gs:188h
 * 000000014042184A: test    dword ptr [rcx], 10000h
 * 0000000140421850: jz      short loc_140421866
 * 0000000140421852: test    byte ptr [rcx+2], 1
 * 0000000140421856: jz      short loc_140421866
 * 0000000140421858: call    KiCopyCounters
 * 000000014042185D: mov     rcx, gs:188h
 * 0000000140421866: ldmxcsr dword ptr [rbp-54h]
 * 000000014042186A: cmp     word ptr [rbp+80h], 0
 * 0000000140421872: jz      short loc_140421879
 * 0000000140421874: call    KiRestoreDebugRegisterState
 * 0000000140421879: mov     rcx, gs:188h
 * 0000000140421882: bt      dword ptr [rcx+74h], 16h
 * 0000000140421887: jnb     short loc_1404218B3
 * 0000000140421889: xor     ecx, ecx
 * 000000014042188B: rdsspq  rcx
 * 0000000140421890: mov     r8, gs:95A8h
 * 0000000140421899: add     r8, 8
 * 000000014042189D: cmp     rcx, r8
 * 00000001404218A0: jnz     short loc_1404218B3
 * 00000001404218A2: mov     rcx, gs:95A0h
 * 00000001404218AB: rstorssp qword ptr [rcx]
 * 00000001404218AF: saveprevssp
 * 00000001404218B3: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001404218B7: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001404218BB: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001404218BF: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001404218C3: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001404218C7: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001404218CB: mov     r11, [rbp-20h]
 * 00000001404218CF: mov     r10, [rbp-28h]
 * 00000001404218D3: mov     r9, [rbp-30h]
 * 00000001404218D7: mov     r8, [rbp-38h]
 * 00000001404218DB: mov     byte ptr gs:856h, 0
 * 00000001404218E4: movzx   eax, word ptr gs:86Ah
 * 00000001404218ED: cmp     gs:864h, ax
 * 00000001404218F6: jz      short loc_14042190A
 * 00000001404218F8: mov     gs:864h, ax
 * 0000000140421901: mov     ecx, 48h ; 'H'
 * 0000000140421906: xor     edx, edx
 * 0000000140421908: wrmsr
 * 000000014042190A: btr     word ptr gs:860h, 2
 * 0000000140421915: jnb     short loc_140421925
 * 0000000140421917: mov     eax, 1
 * 000000014042191C: xor     edx, edx
 * 000000014042191E: mov     ecx, 49h ; 'I'
 * 0000000140421923: wrmsr
 * 0000000140421925: btr     word ptr gs:860h, 5
 * 0000000140421930: jnb     loc_140421A6D
 * 0000000140421936: call    loc_140421A49
 * 000000014042193B: add     rsp, 8
 * 000000014042193F: call    loc_140421A52
 * 0000000140421944: add     rsp, 8
 * 0000000140421948: call    loc_14042193B
 * 000000014042194D: add     rsp, 8
 * 0000000140421951: call    loc_140421944
 * 0000000140421956: add     rsp, 8
 * 000000014042195A: call    loc_14042194D
 * 000000014042195F: add     rsp, 8
 * 0000000140421963: call    loc_140421956
 * 0000000140421968: add     rsp, 8
 * 000000014042196C: call    loc_14042195F
 * 0000000140421971: add     rsp, 8
 * 0000000140421975: call    loc_140421968
 * 000000014042197A: add     rsp, 8
 * 000000014042197E: call    loc_140421971
 * 0000000140421983: add     rsp, 8
 * 0000000140421987: call    loc_14042197A
 * 000000014042198C: add     rsp, 8
 * 0000000140421990: call    loc_140421983
 * 0000000140421995: add     rsp, 8
 * 0000000140421999: call    loc_14042198C
 * 000000014042199E: add     rsp, 8
 * 00000001404219A2: call    loc_140421995
 * 00000001404219A7: add     rsp, 8
 * 00000001404219AB: call    loc_14042199E
 * 00000001404219B0: add     rsp, 8
 * 00000001404219B4: call    loc_1404219A7
 * 00000001404219B9: add     rsp, 8
 * 00000001404219BD: call    loc_1404219B0
 * 00000001404219C2: add     rsp, 8
 * 00000001404219C6: call    loc_1404219B9
 * 00000001404219CB: add     rsp, 8
 * 00000001404219CF: call    loc_1404219C2
 * 00000001404219D4: add     rsp, 8
 * 00000001404219D8: call    loc_1404219CB
 * 00000001404219DD: add     rsp, 8
 * 00000001404219E1: call    loc_1404219D4
 * 00000001404219E6: add     rsp, 8
 * 00000001404219EA: call    loc_1404219DD
 * 00000001404219EF: add     rsp, 8
 * 00000001404219F3: call    loc_1404219E6
 * 00000001404219F8: add     rsp, 8
 * 00000001404219FC: call    loc_1404219EF
 * 0000000140421A01: add     rsp, 8
 * 0000000140421A05: call    loc_1404219F8
 * 0000000140421A0A: add     rsp, 8
 * 0000000140421A0E: call    loc_140421A01
 * 0000000140421A13: add     rsp, 8
 * 0000000140421A17: call    loc_140421A0A
 * 0000000140421A1C: add     rsp, 8
 * 0000000140421A20: call    loc_140421A13
 * 0000000140421A25: add     rsp, 8
 * 0000000140421A29: call    loc_140421A1C
 * 0000000140421A2E: add     rsp, 8
 * 0000000140421A32: call    loc_140421A25
 * 0000000140421A37: add     rsp, 8
 * 0000000140421A3B: call    loc_140421A2E
 * 0000000140421A40: add     rsp, 8
 * 0000000140421A44: call    loc_140421A37
 * 0000000140421A49: add     rsp, 8
 * 0000000140421A4D: call    loc_140421A40
 * 0000000140421A52: add     rsp, 8
 * 0000000140421A56: mov     eax, 0DADAh
 * 0000000140421A5B: test    byte ptr gs:862h, 8
 * 0000000140421A64: jz      short loc_140421A6D
 * 0000000140421A66: mov     al, 20h ; ' '
 * 0000000140421A68: incsspq rax
 * 0000000140421A6D: test    word ptr gs:860h, 80h
 * 0000000140421A78: jz      short loc_140421A86
 * 0000000140421A7A: xor     eax, eax
 * 0000000140421A7C: xor     edx, edx
 * 0000000140421A7E: mov     ecx, 1
 * 0000000140421A83: div     rcx
 * 0000000140421A86: mov     rdx, [rbp-40h]
 * 0000000140421A8A: mov     rcx, [rbp-48h]
 * 0000000140421A8E: mov     rax, [rbp-50h]
 * 0000000140421A92: mov     rsp, rbp
 * 0000000140421A95: mov     rbp, [rbp+0D8h]
 * 0000000140421A9C: add     rsp, 0E8h
 * 0000000140421AA3: test    cs:KiKvaShadow, 1
 * 0000000140421AAA: jz      short loc_140421AB1
 * 0000000140421AAC: jmp     KiKernelExit
 * 0000000140421AB1: test    word ptr gs:860h, 100h
 * 0000000140421ABC: jz      short loc_140421AC3
 * 0000000140421ABE: verw    [rsp-1E8h+arg_200]
 * 0000000140421AC3: swapgs
 * 0000000140421AC6: iretq
 * 0000000140421AC8: ldmxcsr dword ptr [rbp-54h]
 * 0000000140421ACC: movaps  xmm0, xmmword ptr [rbp-10h]
 * 0000000140421AD0: movaps  xmm1, xmmword ptr [rbp+0]
 * 0000000140421AD4: movaps  xmm2, xmmword ptr [rbp+10h]
 * 0000000140421AD8: movaps  xmm3, xmmword ptr [rbp+20h]
 * 0000000140421ADC: movaps  xmm4, xmmword ptr [rbp+30h]
 * 0000000140421AE0: movaps  xmm5, xmmword ptr [rbp+40h]
 * 0000000140421AE4: mov     r11, [rbp-20h]
 * 0000000140421AE8: mov     r10, [rbp-28h]
 * 0000000140421AEC: mov     r9, [rbp-30h]
 * 0000000140421AF0: mov     r8, [rbp-38h]
 * 0000000140421AF4: mov     rdx, [rbp-40h]
 * 0000000140421AF8: mov     rcx, [rbp-48h]
 * 0000000140421AFC: mov     rax, [rbp-50h]
 * 0000000140421B00: mov     rsp, rbp
 * 0000000140421B03: mov     rbp, [rbp+0D8h]
 * 0000000140421B0A: add     rsp, 0E8h
 * 0000000140421B11: iretq
 */
