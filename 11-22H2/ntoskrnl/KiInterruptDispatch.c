/*
 * XREFs of KiInterruptDispatch @ 0x1404205B0
 * Callers:
 *     <none>
 * Callees:
 *     HalRequestSoftwareInterrupt @ 0x140254BF0 (HalRequestSoftwareInterrupt.c)
 *     KiBeginThreadAccountingPeriod @ 0x140308C80 (KiBeginThreadAccountingPeriod.c)
 *     HalPerformEndOfInterrupt @ 0x140331670 (HalPerformEndOfInterrupt.c)
 *     KiRestoreDebugRegisterState @ 0x14041E860 (KiRestoreDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x14041F680 (KiRestoreSetContextState.c)
 *     KiInterruptSubDispatch @ 0x140420200 (KiInterruptSubDispatch.c)
 *     KiInterruptDispatch @ 0x1404205B0 (KiInterruptDispatch.c)
 *     KiInitiateUserApc @ 0x140424760 (KiInitiateUserApc.c)
 *     KiDpcInterruptBypass @ 0x140427320 (KiDpcInterruptBypass.c)
 *     KiUpdateStibpPairing @ 0x1404607C0 (KiUpdateStibpPairing.c)
 *     KzSetIrqlUnsafe @ 0x14056C100 (KzSetIrqlUnsafe.c)
 *     KiCopyCounters @ 0x140574240 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiInterruptDispatch @ 0x1404205B0
 * Reason: Hex-Rays returned no pseudocode for 0x1404205B0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001404205B0: mov     rdx, rsp
 * 00000001404205B3: mov     rcx, gs:8B58h
 * 00000001404205BC: lea     rax, [rcx-6000h]
 * 00000001404205C3: cmp     rax, rsp
 * 00000001404205C6: ja      short loc_1404205CD
 * 00000001404205C8: cmp     rsp, rcx
 * 00000001404205CB: jb      short loc_1404205D9
 * 00000001404205CD: cmp     cs:KiBugCheckActive, 0
 * 00000001404205D4: jnz     short loc_1404205D9
 * 00000001404205D6: mov     rsp, rcx
 * 00000001404205D9: sub     rsp, 20h
 * 00000001404205DD: mov     [rsp+20h+var_10], rdx
 * 00000001404205E2: call    KiInterruptSubDispatch
 * 00000001404205E7: mov     rsp, [rsp+20h+var_10]
 * 00000001404205EC: mov     rcx, rsi
 * 00000001404205EF: call    HalPerformEndOfInterrupt
 * 00000001404205F4: mov     rcx, gs:20h
 * 00000001404205FD: cmp     byte ptr [rcx+20h], 1
 * 0000000140420601: ja      short loc_14042067D
 * 0000000140420603: rdtsc
 * 0000000140420605: shl     rdx, 20h
 * 0000000140420609: or      rax, rdx
 * 000000014042060C: sub     rax, [rcx+8180h]
 * 0000000140420613: add     [rcx+8278h], rax
 * 000000014042061A: add     [rcx+8180h], rax
 * 0000000140420621: mov     r8, rax
 * 0000000140420624: mov     rax, [rcx+8]
 * 0000000140420628: test    byte ptr [rax+2], 72h
 * 000000014042062C: jz      short loc_140420641
 * 000000014042062E: xor     edx, edx
 * 0000000140420630: call    KiBeginThreadAccountingPeriod
 * 0000000140420635: mov     rcx, gs:20h
 * 000000014042063E: inc     byte ptr [rcx+20h]
 * 0000000140420641: mov     dl, [rcx+6]
 * 0000000140420644: and     byte ptr [rcx+6], 0
 * 0000000140420648: cmp     byte ptr [rcx+7], 0
 * 000000014042064C: jnz     short loc_14042067D
 * 000000014042064E: test    dl, dl
 * 0000000140420650: jz      short loc_14042067D
 * 0000000140420652: cmp     byte ptr [rbp-57h], 2
 * 0000000140420656: jnb     short loc_140420663
 * 0000000140420658: and     byte ptr [rcx+20h], 0
 * 000000014042065C: call    KiDpcInterruptBypass
 * 0000000140420661: jmp     short loc_140420680
 * 0000000140420663: mov     ecx, 2
 * 0000000140420668: call    cs:__imp_HalRequestSoftwareInterrupt
 * 000000014042066F: nop     dword ptr [rax+rax+00h]
 * 0000000140420674: mov     rcx, gs:20h
 * 000000014042067D: dec     byte ptr [rcx+20h]
 * 0000000140420680: movzx   ecx, byte ptr [rbp-57h]
 * 0000000140420684: cmp     cs:KiIrqlFlags, 0
 * 000000014042068B: jz      short loc_140420694
 * 000000014042068D: call    KzSetIrqlUnsafe
 * 0000000140420692: jmp     short loc_140420698
 * 0000000140420694: mov     cr8, rcx
 * 0000000140420698: mov     rsi, [rbp+0D0h]
 * 000000014042069F: test    byte ptr [rbp+0F0h], 1
 * 00000001404206A6: jz      loc_140420994
 * 00000001404206AC: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001404206B3: jz      short loc_1404206B8
 * 00000001404206B5: stac
 * 00000001404206B8: mov     rcx, gs:188h
 * 00000001404206C1: test    byte ptr [rcx+0C2h], 3
 * 00000001404206C8: jz      short loc_1404206E5
 * 00000001404206CA: mov     ecx, 1
 * 00000001404206CF: mov     cr8, rcx
 * 00000001404206D3: sti
 * 00000001404206D4: call    KiInitiateUserApc
 * 00000001404206D9: cli
 * 00000001404206DA: mov     ecx, 0
 * 00000001404206DF: mov     cr8, rcx
 * 00000001404206E3: jmp     short loc_1404206B8
 * 00000001404206E5: test    byte ptr gs:86Ch, 2
 * 00000001404206EE: jz      short loc_1404206F7
 * 00000001404206F0: xor     ecx, ecx
 * 00000001404206F2: call    KiUpdateStibpPairing
 * 00000001404206F7: mov     rcx, gs:188h
 * 0000000140420700: test    dword ptr [rcx], 8000000h
 * 0000000140420706: jz      short loc_14042070D
 * 0000000140420708: call    KiRestoreSetContextState
 * 000000014042070D: mov     rcx, gs:188h
 * 0000000140420716: test    dword ptr [rcx], 10000h
 * 000000014042071C: jz      short loc_140420732
 * 000000014042071E: test    byte ptr [rcx+2], 1
 * 0000000140420722: jz      short loc_140420732
 * 0000000140420724: call    KiCopyCounters
 * 0000000140420729: mov     rcx, gs:188h
 * 0000000140420732: ldmxcsr dword ptr [rbp-54h]
 * 0000000140420736: cmp     word ptr [rbp+80h], 0
 * 000000014042073E: jz      short loc_140420745
 * 0000000140420740: call    KiRestoreDebugRegisterState
 * 0000000140420745: mov     rcx, gs:188h
 * 000000014042074E: bt      dword ptr [rcx+74h], 16h
 * 0000000140420753: jnb     short loc_14042077F
 * 0000000140420755: xor     ecx, ecx
 * 0000000140420757: rdsspq  rcx
 * 000000014042075C: mov     r8, gs:95A8h
 * 0000000140420765: add     r8, 8
 * 0000000140420769: cmp     rcx, r8
 * 000000014042076C: jnz     short loc_14042077F
 * 000000014042076E: mov     rcx, gs:95A0h
 * 0000000140420777: rstorssp qword ptr [rcx]
 * 000000014042077B: saveprevssp
 * 000000014042077F: movaps  xmm0, xmmword ptr [rbp-10h]
 * 0000000140420783: movaps  xmm1, xmmword ptr [rbp+0]
 * 0000000140420787: movaps  xmm2, xmmword ptr [rbp+10h]
 * 000000014042078B: movaps  xmm3, xmmword ptr [rbp+20h]
 * 000000014042078F: movaps  xmm4, xmmword ptr [rbp+30h]
 * 0000000140420793: movaps  xmm5, xmmword ptr [rbp+40h]
 * 0000000140420797: mov     r11, [rbp-20h]
 * 000000014042079B: mov     r10, [rbp-28h]
 * 000000014042079F: mov     r9, [rbp-30h]
 * 00000001404207A3: mov     r8, [rbp-38h]
 * 00000001404207A7: mov     byte ptr gs:856h, 0
 * 00000001404207B0: movzx   eax, word ptr gs:86Ah
 * 00000001404207B9: cmp     gs:864h, ax
 * 00000001404207C2: jz      short loc_1404207D6
 * 00000001404207C4: mov     gs:864h, ax
 * 00000001404207CD: mov     ecx, 48h ; 'H'
 * 00000001404207D2: xor     edx, edx
 * 00000001404207D4: wrmsr
 * 00000001404207D6: btr     word ptr gs:860h, 2
 * 00000001404207E1: jnb     short loc_1404207F1
 * 00000001404207E3: mov     eax, 1
 * 00000001404207E8: xor     edx, edx
 * 00000001404207EA: mov     ecx, 49h ; 'I'
 * 00000001404207EF: wrmsr
 * 00000001404207F1: btr     word ptr gs:860h, 5
 * 00000001404207FC: jnb     loc_140420939
 * 0000000140420802: call    loc_140420915
 * 0000000140420807: add     rsp, 8
 * 000000014042080B: call    loc_14042091E
 * 0000000140420810: add     rsp, 8
 * 0000000140420814: call    loc_140420807
 * 0000000140420819: add     rsp, 8
 * 000000014042081D: call    loc_140420810
 * 0000000140420822: add     rsp, 8
 * 0000000140420826: call    loc_140420819
 * 000000014042082B: add     rsp, 8
 * 000000014042082F: call    loc_140420822
 * 0000000140420834: add     rsp, 8
 * 0000000140420838: call    loc_14042082B
 * 000000014042083D: add     rsp, 8
 * 0000000140420841: call    loc_140420834
 * 0000000140420846: add     rsp, 8
 * 000000014042084A: call    loc_14042083D
 * 000000014042084F: add     rsp, 8
 * 0000000140420853: call    loc_140420846
 * 0000000140420858: add     rsp, 8
 * 000000014042085C: call    loc_14042084F
 * 0000000140420861: add     rsp, 8
 * 0000000140420865: call    loc_140420858
 * 000000014042086A: add     rsp, 8
 * 000000014042086E: call    loc_140420861
 * 0000000140420873: add     rsp, 8
 * 0000000140420877: call    loc_14042086A
 * 000000014042087C: add     rsp, 8
 * 0000000140420880: call    loc_140420873
 * 0000000140420885: add     rsp, 8
 * 0000000140420889: call    loc_14042087C
 * 000000014042088E: add     rsp, 8
 * 0000000140420892: call    loc_140420885
 * 0000000140420897: add     rsp, 8
 * 000000014042089B: call    loc_14042088E
 * 00000001404208A0: add     rsp, 8
 * 00000001404208A4: call    loc_140420897
 * 00000001404208A9: add     rsp, 8
 * 00000001404208AD: call    loc_1404208A0
 * 00000001404208B2: add     rsp, 8
 * 00000001404208B6: call    loc_1404208A9
 * 00000001404208BB: add     rsp, 8
 * 00000001404208BF: call    loc_1404208B2
 * 00000001404208C4: add     rsp, 8
 * 00000001404208C8: call    loc_1404208BB
 * 00000001404208CD: add     rsp, 8
 * 00000001404208D1: call    loc_1404208C4
 * 00000001404208D6: add     rsp, 8
 * 00000001404208DA: call    loc_1404208CD
 * 00000001404208DF: add     rsp, 8
 * 00000001404208E3: call    loc_1404208D6
 * 00000001404208E8: add     rsp, 8
 * 00000001404208EC: call    loc_1404208DF
 * 00000001404208F1: add     rsp, 8
 * 00000001404208F5: call    loc_1404208E8
 * 00000001404208FA: add     rsp, 8
 * 00000001404208FE: call    loc_1404208F1
 * 0000000140420903: add     rsp, 8
 * 0000000140420907: call    loc_1404208FA
 * 000000014042090C: add     rsp, 8
 * 0000000140420910: call    loc_140420903
 * 0000000140420915: add     rsp, 8
 * 0000000140420919: call    loc_14042090C
 * 000000014042091E: add     rsp, 8
 * 0000000140420922: mov     eax, 0DADAh
 * 0000000140420927: test    byte ptr gs:862h, 8
 * 0000000140420930: jz      short loc_140420939
 * 0000000140420932: mov     al, 20h ; ' '
 * 0000000140420934: incsspq rax
 * 0000000140420939: test    word ptr gs:860h, 80h
 * 0000000140420944: jz      short loc_140420952
 * 0000000140420946: xor     eax, eax
 * 0000000140420948: xor     edx, edx
 * 000000014042094A: mov     ecx, 1
 * 000000014042094F: div     rcx
 * 0000000140420952: mov     rdx, [rbp-40h]
 * 0000000140420956: mov     rcx, [rbp-48h]
 * 000000014042095A: mov     rax, [rbp-50h]
 * 000000014042095E: mov     rsp, rbp
 * 0000000140420961: mov     rbp, [rbp+0D8h]
 * 0000000140420968: add     rsp, 0E8h
 * 000000014042096F: test    cs:KiKvaShadow, 1
 * 0000000140420976: jz      short loc_14042097D
 * 0000000140420978: jmp     KiKernelExit
 * 000000014042097D: test    word ptr gs:860h, 100h
 * 0000000140420988: jz      short loc_14042098F
 * 000000014042098A: verw    [rsp-1C8h+arg_1E0]
 * 000000014042098F: swapgs
 * 0000000140420992: iretq
 * 0000000140420994: ldmxcsr dword ptr [rbp-54h]
 * 0000000140420998: movaps  xmm0, xmmword ptr [rbp-10h]
 * 000000014042099C: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001404209A0: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001404209A4: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001404209A8: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001404209AC: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001404209B0: mov     r11, [rbp-20h]
 * 00000001404209B4: mov     r10, [rbp-28h]
 * 00000001404209B8: mov     r9, [rbp-30h]
 * 00000001404209BC: mov     r8, [rbp-38h]
 * 00000001404209C0: mov     rdx, [rbp-40h]
 * 00000001404209C4: mov     rcx, [rbp-48h]
 * 00000001404209C8: mov     rax, [rbp-50h]
 * 00000001404209CC: mov     rsp, rbp
 * 00000001404209CF: mov     rbp, [rbp+0D8h]
 * 00000001404209D6: add     rsp, 0E8h
 * 00000001404209DD: iretq
 */
