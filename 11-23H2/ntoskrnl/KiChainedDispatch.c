/*
 * XREFs of KiChainedDispatch @ 0x140420630
 * Callers:
 *     <none>
 * Callees:
 *     HalRequestSoftwareInterrupt @ 0x140254DD0 (HalRequestSoftwareInterrupt.c)
 *     KiBeginThreadAccountingPeriod @ 0x140309040 (KiBeginThreadAccountingPeriod.c)
 *     HalPerformEndOfInterrupt @ 0x140331AA0 (HalPerformEndOfInterrupt.c)
 *     KiRestoreDebugRegisterState @ 0x14041F2B0 (KiRestoreDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1404200D0 (KiRestoreSetContextState.c)
 *     KiChainedDispatch @ 0x140420630 (KiChainedDispatch.c)
 *     KiScanInterruptObjectList @ 0x140420A70 (KiScanInterruptObjectList.c)
 *     KiInitiateUserApc @ 0x1404251B0 (KiInitiateUserApc.c)
 *     KiDpcInterruptBypass @ 0x140427D70 (KiDpcInterruptBypass.c)
 *     KiUpdateStibpPairing @ 0x140461220 (KiUpdateStibpPairing.c)
 *     KzSetIrqlUnsafe @ 0x14056C720 (KzSetIrqlUnsafe.c)
 *     KiCopyCounters @ 0x1405746E0 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiChainedDispatch @ 0x140420630
 * Reason: Hex-Rays returned no pseudocode for 0x140420630
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140420630: mov     rdx, rsp
 * 0000000140420633: mov     rcx, gs:8B58h
 * 000000014042063C: lea     rax, [rcx-6000h]
 * 0000000140420643: cmp     rax, rsp
 * 0000000140420646: ja      short loc_14042064D
 * 0000000140420648: cmp     rsp, rcx
 * 000000014042064B: jb      short loc_140420659
 * 000000014042064D: cmp     cs:KiBugCheckActive, 0
 * 0000000140420654: jnz     short loc_140420659
 * 0000000140420656: mov     rsp, rcx
 * 0000000140420659: sub     rsp, 20h
 * 000000014042065D: mov     [rsp+20h+var_10], rdx
 * 0000000140420662: call    KiScanInterruptObjectList
 * 0000000140420667: mov     rsp, [rsp+20h+var_10]
 * 000000014042066C: mov     rcx, rsi
 * 000000014042066F: call    HalPerformEndOfInterrupt
 * 0000000140420674: mov     rcx, gs:20h
 * 000000014042067D: cmp     byte ptr [rcx+20h], 1
 * 0000000140420681: ja      short loc_1404206FD
 * 0000000140420683: rdtsc
 * 0000000140420685: shl     rdx, 20h
 * 0000000140420689: or      rax, rdx
 * 000000014042068C: sub     rax, [rcx+8180h]
 * 0000000140420693: add     [rcx+8278h], rax
 * 000000014042069A: add     [rcx+8180h], rax
 * 00000001404206A1: mov     r8, rax
 * 00000001404206A4: mov     rax, [rcx+8]
 * 00000001404206A8: test    byte ptr [rax+2], 72h
 * 00000001404206AC: jz      short loc_1404206C1
 * 00000001404206AE: xor     edx, edx
 * 00000001404206B0: call    KiBeginThreadAccountingPeriod
 * 00000001404206B5: mov     rcx, gs:20h
 * 00000001404206BE: inc     byte ptr [rcx+20h]
 * 00000001404206C1: mov     dl, [rcx+6]
 * 00000001404206C4: and     byte ptr [rcx+6], 0
 * 00000001404206C8: cmp     byte ptr [rcx+7], 0
 * 00000001404206CC: jnz     short loc_1404206FD
 * 00000001404206CE: test    dl, dl
 * 00000001404206D0: jz      short loc_1404206FD
 * 00000001404206D2: cmp     byte ptr [rbp-57h], 2
 * 00000001404206D6: jnb     short loc_1404206E3
 * 00000001404206D8: and     byte ptr [rcx+20h], 0
 * 00000001404206DC: call    KiDpcInterruptBypass
 * 00000001404206E1: jmp     short loc_140420700
 * 00000001404206E3: mov     ecx, 2
 * 00000001404206E8: call    cs:__imp_HalRequestSoftwareInterrupt
 * 00000001404206EF: nop     dword ptr [rax+rax+00h]
 * 00000001404206F4: mov     rcx, gs:20h
 * 00000001404206FD: dec     byte ptr [rcx+20h]
 * 0000000140420700: movzx   ecx, byte ptr [rbp-57h]
 * 0000000140420704: cmp     cs:KiIrqlFlags, 0
 * 000000014042070B: jz      short loc_140420714
 * 000000014042070D: call    KzSetIrqlUnsafe
 * 0000000140420712: jmp     short loc_140420718
 * 0000000140420714: mov     cr8, rcx
 * 0000000140420718: mov     rsi, [rbp+0D0h]
 * 000000014042071F: test    byte ptr [rbp+0F0h], 1
 * 0000000140420726: jz      loc_140420A14
 * 000000014042072C: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 0000000140420733: jz      short loc_140420738
 * 0000000140420735: stac
 * 0000000140420738: mov     rcx, gs:188h
 * 0000000140420741: test    byte ptr [rcx+0C2h], 3
 * 0000000140420748: jz      short loc_140420765
 * 000000014042074A: mov     ecx, 1
 * 000000014042074F: mov     cr8, rcx
 * 0000000140420753: sti
 * 0000000140420754: call    KiInitiateUserApc
 * 0000000140420759: cli
 * 000000014042075A: mov     ecx, 0
 * 000000014042075F: mov     cr8, rcx
 * 0000000140420763: jmp     short loc_140420738
 * 0000000140420765: test    byte ptr gs:86Ch, 2
 * 000000014042076E: jz      short loc_140420777
 * 0000000140420770: xor     ecx, ecx
 * 0000000140420772: call    KiUpdateStibpPairing
 * 0000000140420777: mov     rcx, gs:188h
 * 0000000140420780: test    dword ptr [rcx], 8000000h
 * 0000000140420786: jz      short loc_14042078D
 * 0000000140420788: call    KiRestoreSetContextState
 * 000000014042078D: mov     rcx, gs:188h
 * 0000000140420796: test    dword ptr [rcx], 10000h
 * 000000014042079C: jz      short loc_1404207B2
 * 000000014042079E: test    byte ptr [rcx+2], 1
 * 00000001404207A2: jz      short loc_1404207B2
 * 00000001404207A4: call    KiCopyCounters
 * 00000001404207A9: mov     rcx, gs:188h
 * 00000001404207B2: ldmxcsr dword ptr [rbp-54h]
 * 00000001404207B6: cmp     word ptr [rbp+80h], 0
 * 00000001404207BE: jz      short loc_1404207C5
 * 00000001404207C0: call    KiRestoreDebugRegisterState
 * 00000001404207C5: mov     rcx, gs:188h
 * 00000001404207CE: bt      dword ptr [rcx+74h], 16h
 * 00000001404207D3: jnb     short loc_1404207FF
 * 00000001404207D5: xor     ecx, ecx
 * 00000001404207D7: rdsspq  rcx
 * 00000001404207DC: mov     r8, gs:95A8h
 * 00000001404207E5: add     r8, 8
 * 00000001404207E9: cmp     rcx, r8
 * 00000001404207EC: jnz     short loc_1404207FF
 * 00000001404207EE: mov     rcx, gs:95A0h
 * 00000001404207F7: rstorssp qword ptr [rcx]
 * 00000001404207FB: saveprevssp
 * 00000001404207FF: movaps  xmm0, xmmword ptr [rbp-10h]
 * 0000000140420803: movaps  xmm1, xmmword ptr [rbp+0]
 * 0000000140420807: movaps  xmm2, xmmword ptr [rbp+10h]
 * 000000014042080B: movaps  xmm3, xmmword ptr [rbp+20h]
 * 000000014042080F: movaps  xmm4, xmmword ptr [rbp+30h]
 * 0000000140420813: movaps  xmm5, xmmword ptr [rbp+40h]
 * 0000000140420817: mov     r11, [rbp-20h]
 * 000000014042081B: mov     r10, [rbp-28h]
 * 000000014042081F: mov     r9, [rbp-30h]
 * 0000000140420823: mov     r8, [rbp-38h]
 * 0000000140420827: mov     byte ptr gs:856h, 0
 * 0000000140420830: movzx   eax, word ptr gs:86Ah
 * 0000000140420839: cmp     gs:864h, ax
 * 0000000140420842: jz      short loc_140420856
 * 0000000140420844: mov     gs:864h, ax
 * 000000014042084D: mov     ecx, 48h ; 'H'
 * 0000000140420852: xor     edx, edx
 * 0000000140420854: wrmsr
 * 0000000140420856: btr     word ptr gs:860h, 2
 * 0000000140420861: jnb     short loc_140420871
 * 0000000140420863: mov     eax, 1
 * 0000000140420868: xor     edx, edx
 * 000000014042086A: mov     ecx, 49h ; 'I'
 * 000000014042086F: wrmsr
 * 0000000140420871: btr     word ptr gs:860h, 5
 * 000000014042087C: jnb     loc_1404209B9
 * 0000000140420882: call    loc_140420995
 * 0000000140420887: add     rsp, 8
 * 000000014042088B: call    loc_14042099E
 * 0000000140420890: add     rsp, 8
 * 0000000140420894: call    loc_140420887
 * 0000000140420899: add     rsp, 8
 * 000000014042089D: call    loc_140420890
 * 00000001404208A2: add     rsp, 8
 * 00000001404208A6: call    loc_140420899
 * 00000001404208AB: add     rsp, 8
 * 00000001404208AF: call    loc_1404208A2
 * 00000001404208B4: add     rsp, 8
 * 00000001404208B8: call    loc_1404208AB
 * 00000001404208BD: add     rsp, 8
 * 00000001404208C1: call    loc_1404208B4
 * 00000001404208C6: add     rsp, 8
 * 00000001404208CA: call    loc_1404208BD
 * 00000001404208CF: add     rsp, 8
 * 00000001404208D3: call    loc_1404208C6
 * 00000001404208D8: add     rsp, 8
 * 00000001404208DC: call    loc_1404208CF
 * 00000001404208E1: add     rsp, 8
 * 00000001404208E5: call    loc_1404208D8
 * 00000001404208EA: add     rsp, 8
 * 00000001404208EE: call    loc_1404208E1
 * 00000001404208F3: add     rsp, 8
 * 00000001404208F7: call    loc_1404208EA
 * 00000001404208FC: add     rsp, 8
 * 0000000140420900: call    loc_1404208F3
 * 0000000140420905: add     rsp, 8
 * 0000000140420909: call    loc_1404208FC
 * 000000014042090E: add     rsp, 8
 * 0000000140420912: call    loc_140420905
 * 0000000140420917: add     rsp, 8
 * 000000014042091B: call    loc_14042090E
 * 0000000140420920: add     rsp, 8
 * 0000000140420924: call    loc_140420917
 * 0000000140420929: add     rsp, 8
 * 000000014042092D: call    loc_140420920
 * 0000000140420932: add     rsp, 8
 * 0000000140420936: call    loc_140420929
 * 000000014042093B: add     rsp, 8
 * 000000014042093F: call    loc_140420932
 * 0000000140420944: add     rsp, 8
 * 0000000140420948: call    loc_14042093B
 * 000000014042094D: add     rsp, 8
 * 0000000140420951: call    loc_140420944
 * 0000000140420956: add     rsp, 8
 * 000000014042095A: call    loc_14042094D
 * 000000014042095F: add     rsp, 8
 * 0000000140420963: call    loc_140420956
 * 0000000140420968: add     rsp, 8
 * 000000014042096C: call    loc_14042095F
 * 0000000140420971: add     rsp, 8
 * 0000000140420975: call    loc_140420968
 * 000000014042097A: add     rsp, 8
 * 000000014042097E: call    loc_140420971
 * 0000000140420983: add     rsp, 8
 * 0000000140420987: call    loc_14042097A
 * 000000014042098C: add     rsp, 8
 * 0000000140420990: call    loc_140420983
 * 0000000140420995: add     rsp, 8
 * 0000000140420999: call    loc_14042098C
 * 000000014042099E: add     rsp, 8
 * 00000001404209A2: mov     eax, 0DADAh
 * 00000001404209A7: test    byte ptr gs:862h, 8
 * 00000001404209B0: jz      short loc_1404209B9
 * 00000001404209B2: mov     al, 20h ; ' '
 * 00000001404209B4: incsspq rax
 * 00000001404209B9: test    word ptr gs:860h, 80h
 * 00000001404209C4: jz      short loc_1404209D2
 * 00000001404209C6: xor     eax, eax
 * 00000001404209C8: xor     edx, edx
 * 00000001404209CA: mov     ecx, 1
 * 00000001404209CF: div     rcx
 * 00000001404209D2: mov     rdx, [rbp-40h]
 * 00000001404209D6: mov     rcx, [rbp-48h]
 * 00000001404209DA: mov     rax, [rbp-50h]
 * 00000001404209DE: mov     rsp, rbp
 * 00000001404209E1: mov     rbp, [rbp+0D8h]
 * 00000001404209E8: add     rsp, 0E8h
 * 00000001404209EF: test    cs:KiKvaShadow, 1
 * 00000001404209F6: jz      short loc_1404209FD
 * 00000001404209F8: jmp     KiKernelExit
 * 00000001404209FD: test    word ptr gs:860h, 100h
 * 0000000140420A08: jz      short loc_140420A0F
 * 0000000140420A0A: verw    [rsp-1C8h+arg_1E0]
 * 0000000140420A0F: swapgs
 * 0000000140420A12: iretq
 * 0000000140420A14: ldmxcsr dword ptr [rbp-54h]
 * 0000000140420A18: movaps  xmm0, xmmword ptr [rbp-10h]
 * 0000000140420A1C: movaps  xmm1, xmmword ptr [rbp+0]
 * 0000000140420A20: movaps  xmm2, xmmword ptr [rbp+10h]
 * 0000000140420A24: movaps  xmm3, xmmword ptr [rbp+20h]
 * 0000000140420A28: movaps  xmm4, xmmword ptr [rbp+30h]
 * 0000000140420A2C: movaps  xmm5, xmmword ptr [rbp+40h]
 * 0000000140420A30: mov     r11, [rbp-20h]
 * 0000000140420A34: mov     r10, [rbp-28h]
 * 0000000140420A38: mov     r9, [rbp-30h]
 * 0000000140420A3C: mov     r8, [rbp-38h]
 * 0000000140420A40: mov     rdx, [rbp-40h]
 * 0000000140420A44: mov     rcx, [rbp-48h]
 * 0000000140420A48: mov     rax, [rbp-50h]
 * 0000000140420A4C: mov     rsp, rbp
 * 0000000140420A4F: mov     rbp, [rbp+0D8h]
 * 0000000140420A56: add     rsp, 0E8h
 * 0000000140420A5D: iretq
 */
