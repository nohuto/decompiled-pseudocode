/*
 * XREFs of KiChainedDispatch @ 0x1404202A0
 * Callers:
 *     <none>
 * Callees:
 *     HalRequestSoftwareInterrupt @ 0x140254D10 (HalRequestSoftwareInterrupt.c)
 *     KiBeginThreadAccountingPeriod @ 0x140308DB0 (KiBeginThreadAccountingPeriod.c)
 *     HalPerformEndOfInterrupt @ 0x140331810 (HalPerformEndOfInterrupt.c)
 *     KiRestoreDebugRegisterState @ 0x14041EF20 (KiRestoreDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x14041FD40 (KiRestoreSetContextState.c)
 *     KiChainedDispatch @ 0x1404202A0 (KiChainedDispatch.c)
 *     KiScanInterruptObjectList @ 0x1404206E0 (KiScanInterruptObjectList.c)
 *     KiInitiateUserApc @ 0x140424E20 (KiInitiateUserApc.c)
 *     KiDpcInterruptBypass @ 0x1404279E0 (KiDpcInterruptBypass.c)
 *     KiUpdateStibpPairing @ 0x140460E20 (KiUpdateStibpPairing.c)
 *     KzSetIrqlUnsafe @ 0x14056C060 (KzSetIrqlUnsafe.c)
 *     KiCopyCounters @ 0x1405741A0 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiChainedDispatch @ 0x1404202A0
 * Reason: Hex-Rays returned no pseudocode for 0x1404202A0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001404202A0: mov     rdx, rsp
 * 00000001404202A3: mov     rcx, gs:8B58h
 * 00000001404202AC: lea     rax, [rcx-6000h]
 * 00000001404202B3: cmp     rax, rsp
 * 00000001404202B6: ja      short loc_1404202BD
 * 00000001404202B8: cmp     rsp, rcx
 * 00000001404202BB: jb      short loc_1404202C9
 * 00000001404202BD: cmp     cs:KiBugCheckActive, 0
 * 00000001404202C4: jnz     short loc_1404202C9
 * 00000001404202C6: mov     rsp, rcx
 * 00000001404202C9: sub     rsp, 20h
 * 00000001404202CD: mov     [rsp+20h+var_10], rdx
 * 00000001404202D2: call    KiScanInterruptObjectList
 * 00000001404202D7: mov     rsp, [rsp+20h+var_10]
 * 00000001404202DC: mov     rcx, rsi
 * 00000001404202DF: call    HalPerformEndOfInterrupt
 * 00000001404202E4: mov     rcx, gs:20h
 * 00000001404202ED: cmp     byte ptr [rcx+20h], 1
 * 00000001404202F1: ja      short loc_14042036D
 * 00000001404202F3: rdtsc
 * 00000001404202F5: shl     rdx, 20h
 * 00000001404202F9: or      rax, rdx
 * 00000001404202FC: sub     rax, [rcx+8180h]
 * 0000000140420303: add     [rcx+8278h], rax
 * 000000014042030A: add     [rcx+8180h], rax
 * 0000000140420311: mov     r8, rax
 * 0000000140420314: mov     rax, [rcx+8]
 * 0000000140420318: test    byte ptr [rax+2], 72h
 * 000000014042031C: jz      short loc_140420331
 * 000000014042031E: xor     edx, edx
 * 0000000140420320: call    KiBeginThreadAccountingPeriod
 * 0000000140420325: mov     rcx, gs:20h
 * 000000014042032E: inc     byte ptr [rcx+20h]
 * 0000000140420331: mov     dl, [rcx+6]
 * 0000000140420334: and     byte ptr [rcx+6], 0
 * 0000000140420338: cmp     byte ptr [rcx+7], 0
 * 000000014042033C: jnz     short loc_14042036D
 * 000000014042033E: test    dl, dl
 * 0000000140420340: jz      short loc_14042036D
 * 0000000140420342: cmp     byte ptr [rbp-57h], 2
 * 0000000140420346: jnb     short loc_140420353
 * 0000000140420348: and     byte ptr [rcx+20h], 0
 * 000000014042034C: call    KiDpcInterruptBypass
 * 0000000140420351: jmp     short loc_140420370
 * 0000000140420353: mov     ecx, 2
 * 0000000140420358: call    cs:__imp_HalRequestSoftwareInterrupt
 * 000000014042035F: nop     dword ptr [rax+rax+00h]
 * 0000000140420364: mov     rcx, gs:20h
 * 000000014042036D: dec     byte ptr [rcx+20h]
 * 0000000140420370: movzx   ecx, byte ptr [rbp-57h]
 * 0000000140420374: cmp     cs:KiIrqlFlags, 0
 * 000000014042037B: jz      short loc_140420384
 * 000000014042037D: call    KzSetIrqlUnsafe
 * 0000000140420382: jmp     short loc_140420388
 * 0000000140420384: mov     cr8, rcx
 * 0000000140420388: mov     rsi, [rbp+0D0h]
 * 000000014042038F: test    byte ptr [rbp+0F0h], 1
 * 0000000140420396: jz      loc_140420684
 * 000000014042039C: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001404203A3: jz      short loc_1404203A8
 * 00000001404203A5: stac
 * 00000001404203A8: mov     rcx, gs:188h
 * 00000001404203B1: test    byte ptr [rcx+0C2h], 3
 * 00000001404203B8: jz      short loc_1404203D5
 * 00000001404203BA: mov     ecx, 1
 * 00000001404203BF: mov     cr8, rcx
 * 00000001404203C3: sti
 * 00000001404203C4: call    KiInitiateUserApc
 * 00000001404203C9: cli
 * 00000001404203CA: mov     ecx, 0
 * 00000001404203CF: mov     cr8, rcx
 * 00000001404203D3: jmp     short loc_1404203A8
 * 00000001404203D5: test    byte ptr gs:86Ch, 2
 * 00000001404203DE: jz      short loc_1404203E7
 * 00000001404203E0: xor     ecx, ecx
 * 00000001404203E2: call    KiUpdateStibpPairing
 * 00000001404203E7: mov     rcx, gs:188h
 * 00000001404203F0: test    dword ptr [rcx], 8000000h
 * 00000001404203F6: jz      short loc_1404203FD
 * 00000001404203F8: call    KiRestoreSetContextState
 * 00000001404203FD: mov     rcx, gs:188h
 * 0000000140420406: test    dword ptr [rcx], 10000h
 * 000000014042040C: jz      short loc_140420422
 * 000000014042040E: test    byte ptr [rcx+2], 1
 * 0000000140420412: jz      short loc_140420422
 * 0000000140420414: call    KiCopyCounters
 * 0000000140420419: mov     rcx, gs:188h
 * 0000000140420422: ldmxcsr dword ptr [rbp-54h]
 * 0000000140420426: cmp     word ptr [rbp+80h], 0
 * 000000014042042E: jz      short loc_140420435
 * 0000000140420430: call    KiRestoreDebugRegisterState
 * 0000000140420435: mov     rcx, gs:188h
 * 000000014042043E: bt      dword ptr [rcx+74h], 16h
 * 0000000140420443: jnb     short loc_14042046F
 * 0000000140420445: xor     ecx, ecx
 * 0000000140420447: rdsspq  rcx
 * 000000014042044C: mov     r8, gs:95A8h
 * 0000000140420455: add     r8, 8
 * 0000000140420459: cmp     rcx, r8
 * 000000014042045C: jnz     short loc_14042046F
 * 000000014042045E: mov     rcx, gs:95A0h
 * 0000000140420467: rstorssp qword ptr [rcx]
 * 000000014042046B: saveprevssp
 * 000000014042046F: movaps  xmm0, xmmword ptr [rbp-10h]
 * 0000000140420473: movaps  xmm1, xmmword ptr [rbp+0]
 * 0000000140420477: movaps  xmm2, xmmword ptr [rbp+10h]
 * 000000014042047B: movaps  xmm3, xmmword ptr [rbp+20h]
 * 000000014042047F: movaps  xmm4, xmmword ptr [rbp+30h]
 * 0000000140420483: movaps  xmm5, xmmword ptr [rbp+40h]
 * 0000000140420487: mov     r11, [rbp-20h]
 * 000000014042048B: mov     r10, [rbp-28h]
 * 000000014042048F: mov     r9, [rbp-30h]
 * 0000000140420493: mov     r8, [rbp-38h]
 * 0000000140420497: mov     byte ptr gs:856h, 0
 * 00000001404204A0: movzx   eax, word ptr gs:86Ah
 * 00000001404204A9: cmp     gs:864h, ax
 * 00000001404204B2: jz      short loc_1404204C6
 * 00000001404204B4: mov     gs:864h, ax
 * 00000001404204BD: mov     ecx, 48h ; 'H'
 * 00000001404204C2: xor     edx, edx
 * 00000001404204C4: wrmsr
 * 00000001404204C6: btr     word ptr gs:860h, 2
 * 00000001404204D1: jnb     short loc_1404204E1
 * 00000001404204D3: mov     eax, 1
 * 00000001404204D8: xor     edx, edx
 * 00000001404204DA: mov     ecx, 49h ; 'I'
 * 00000001404204DF: wrmsr
 * 00000001404204E1: btr     word ptr gs:860h, 5
 * 00000001404204EC: jnb     loc_140420629
 * 00000001404204F2: call    loc_140420605
 * 00000001404204F7: add     rsp, 8
 * 00000001404204FB: call    loc_14042060E
 * 0000000140420500: add     rsp, 8
 * 0000000140420504: call    loc_1404204F7
 * 0000000140420509: add     rsp, 8
 * 000000014042050D: call    loc_140420500
 * 0000000140420512: add     rsp, 8
 * 0000000140420516: call    loc_140420509
 * 000000014042051B: add     rsp, 8
 * 000000014042051F: call    loc_140420512
 * 0000000140420524: add     rsp, 8
 * 0000000140420528: call    loc_14042051B
 * 000000014042052D: add     rsp, 8
 * 0000000140420531: call    loc_140420524
 * 0000000140420536: add     rsp, 8
 * 000000014042053A: call    loc_14042052D
 * 000000014042053F: add     rsp, 8
 * 0000000140420543: call    loc_140420536
 * 0000000140420548: add     rsp, 8
 * 000000014042054C: call    loc_14042053F
 * 0000000140420551: add     rsp, 8
 * 0000000140420555: call    loc_140420548
 * 000000014042055A: add     rsp, 8
 * 000000014042055E: call    loc_140420551
 * 0000000140420563: add     rsp, 8
 * 0000000140420567: call    loc_14042055A
 * 000000014042056C: add     rsp, 8
 * 0000000140420570: call    loc_140420563
 * 0000000140420575: add     rsp, 8
 * 0000000140420579: call    loc_14042056C
 * 000000014042057E: add     rsp, 8
 * 0000000140420582: call    loc_140420575
 * 0000000140420587: add     rsp, 8
 * 000000014042058B: call    loc_14042057E
 * 0000000140420590: add     rsp, 8
 * 0000000140420594: call    loc_140420587
 * 0000000140420599: add     rsp, 8
 * 000000014042059D: call    loc_140420590
 * 00000001404205A2: add     rsp, 8
 * 00000001404205A6: call    loc_140420599
 * 00000001404205AB: add     rsp, 8
 * 00000001404205AF: call    loc_1404205A2
 * 00000001404205B4: add     rsp, 8
 * 00000001404205B8: call    loc_1404205AB
 * 00000001404205BD: add     rsp, 8
 * 00000001404205C1: call    loc_1404205B4
 * 00000001404205C6: add     rsp, 8
 * 00000001404205CA: call    loc_1404205BD
 * 00000001404205CF: add     rsp, 8
 * 00000001404205D3: call    loc_1404205C6
 * 00000001404205D8: add     rsp, 8
 * 00000001404205DC: call    loc_1404205CF
 * 00000001404205E1: add     rsp, 8
 * 00000001404205E5: call    loc_1404205D8
 * 00000001404205EA: add     rsp, 8
 * 00000001404205EE: call    loc_1404205E1
 * 00000001404205F3: add     rsp, 8
 * 00000001404205F7: call    loc_1404205EA
 * 00000001404205FC: add     rsp, 8
 * 0000000140420600: call    loc_1404205F3
 * 0000000140420605: add     rsp, 8
 * 0000000140420609: call    loc_1404205FC
 * 000000014042060E: add     rsp, 8
 * 0000000140420612: mov     eax, 0DADAh
 * 0000000140420617: test    byte ptr gs:862h, 8
 * 0000000140420620: jz      short loc_140420629
 * 0000000140420622: mov     al, 20h ; ' '
 * 0000000140420624: incsspq rax
 * 0000000140420629: test    word ptr gs:860h, 80h
 * 0000000140420634: jz      short loc_140420642
 * 0000000140420636: xor     eax, eax
 * 0000000140420638: xor     edx, edx
 * 000000014042063A: mov     ecx, 1
 * 000000014042063F: div     rcx
 * 0000000140420642: mov     rdx, [rbp-40h]
 * 0000000140420646: mov     rcx, [rbp-48h]
 * 000000014042064A: mov     rax, [rbp-50h]
 * 000000014042064E: mov     rsp, rbp
 * 0000000140420651: mov     rbp, [rbp+0D8h]
 * 0000000140420658: add     rsp, 0E8h
 * 000000014042065F: test    cs:KiKvaShadow, 1
 * 0000000140420666: jz      short loc_14042066D
 * 0000000140420668: jmp     KiKernelExit
 * 000000014042066D: test    word ptr gs:860h, 100h
 * 0000000140420678: jz      short loc_14042067F
 * 000000014042067A: verw    [rsp-1C8h+arg_1E0]
 * 000000014042067F: swapgs
 * 0000000140420682: iretq
 * 0000000140420684: ldmxcsr dword ptr [rbp-54h]
 * 0000000140420688: movaps  xmm0, xmmword ptr [rbp-10h]
 * 000000014042068C: movaps  xmm1, xmmword ptr [rbp+0]
 * 0000000140420690: movaps  xmm2, xmmword ptr [rbp+10h]
 * 0000000140420694: movaps  xmm3, xmmword ptr [rbp+20h]
 * 0000000140420698: movaps  xmm4, xmmword ptr [rbp+30h]
 * 000000014042069C: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001404206A0: mov     r11, [rbp-20h]
 * 00000001404206A4: mov     r10, [rbp-28h]
 * 00000001404206A8: mov     r9, [rbp-30h]
 * 00000001404206AC: mov     r8, [rbp-38h]
 * 00000001404206B0: mov     rdx, [rbp-40h]
 * 00000001404206B4: mov     rcx, [rbp-48h]
 * 00000001404206B8: mov     rax, [rbp-50h]
 * 00000001404206BC: mov     rsp, rbp
 * 00000001404206BF: mov     rbp, [rbp+0D8h]
 * 00000001404206C6: add     rsp, 0E8h
 * 00000001404206CD: iretq
 */
