/*
 * XREFs of KiVmbusInterruptDispatch @ 0x1404267C0
 * Callers:
 *     KiVmbusInterrupt0 @ 0x1404255F0 (KiVmbusInterrupt0.c)
 *     KiVmbusInterrupt1 @ 0x140425950 (KiVmbusInterrupt1.c)
 *     KiVmbusInterrupt2 @ 0x140425CB0 (KiVmbusInterrupt2.c)
 *     KiVmbusInterrupt3 @ 0x140426010 (KiVmbusInterrupt3.c)
 * Callees:
 *     HalRequestSoftwareInterrupt @ 0x140254DD0 (HalRequestSoftwareInterrupt.c)
 *     KiBeginThreadAccountingPeriod @ 0x140309040 (KiBeginThreadAccountingPeriod.c)
 *     KiRestoreDebugRegisterState @ 0x14041F2B0 (KiRestoreDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1404200D0 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x1404251B0 (KiInitiateUserApc.c)
 *     KiVmbusInterruptDispatch @ 0x1404267C0 (KiVmbusInterruptDispatch.c)
 *     KiVmbusInterruptSubDispatch @ 0x140426D50 (KiVmbusInterruptSubDispatch.c)
 *     KiDpcInterruptBypass @ 0x140427D70 (KiDpcInterruptBypass.c)
 *     KiUpdateStibpPairing @ 0x140461220 (KiUpdateStibpPairing.c)
 *     KzSetIrqlUnsafe @ 0x14056C720 (KzSetIrqlUnsafe.c)
 *     KiCopyCounters @ 0x1405746E0 (KiCopyCounters.c)
 */

/*
 * Hex-Rays decompilation failed for KiVmbusInterruptDispatch @ 0x1404267C0
 * Reason: Hex-Rays returned no pseudocode for 0x1404267C0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001404267C0: mov     rdx, rsp
 * 00000001404267C3: mov     rcx, gs:8B58h
 * 00000001404267CC: lea     rax, [rcx-6000h]
 * 00000001404267D3: cmp     rax, rsp
 * 00000001404267D6: ja      short loc_1404267DD
 * 00000001404267D8: cmp     rsp, rcx
 * 00000001404267DB: jb      short loc_1404267E9
 * 00000001404267DD: cmp     cs:KiBugCheckActive, 0
 * 00000001404267E4: jnz     short loc_1404267E9
 * 00000001404267E6: mov     rsp, rcx
 * 00000001404267E9: sub     rsp, 20h
 * 00000001404267ED: mov     [rsp+20h+var_10], rdx
 * 00000001404267F2: call    KiVmbusInterruptSubDispatch
 * 00000001404267F7: mov     rsp, [rsp+20h+var_10]
 * 00000001404267FC: cli
 * 00000001404267FD: mov     rcx, gs:20h
 * 0000000140426806: cmp     byte ptr [rcx+20h], 1
 * 000000014042680A: ja      short loc_140426886
 * 000000014042680C: rdtsc
 * 000000014042680E: shl     rdx, 20h
 * 0000000140426812: or      rax, rdx
 * 0000000140426815: sub     rax, [rcx+8180h]
 * 000000014042681C: add     [rcx+8278h], rax
 * 0000000140426823: add     [rcx+8180h], rax
 * 000000014042682A: mov     r8, rax
 * 000000014042682D: mov     rax, [rcx+8]
 * 0000000140426831: test    byte ptr [rax+2], 72h
 * 0000000140426835: jz      short loc_14042684A
 * 0000000140426837: xor     edx, edx
 * 0000000140426839: call    KiBeginThreadAccountingPeriod
 * 000000014042683E: mov     rcx, gs:20h
 * 0000000140426847: inc     byte ptr [rcx+20h]
 * 000000014042684A: mov     dl, [rcx+6]
 * 000000014042684D: and     byte ptr [rcx+6], 0
 * 0000000140426851: cmp     byte ptr [rcx+7], 0
 * 0000000140426855: jnz     short loc_140426886
 * 0000000140426857: test    dl, dl
 * 0000000140426859: jz      short loc_140426886
 * 000000014042685B: cmp     byte ptr [rbp-57h], 2
 * 000000014042685F: jnb     short loc_14042686C
 * 0000000140426861: and     byte ptr [rcx+20h], 0
 * 0000000140426865: call    KiDpcInterruptBypass
 * 000000014042686A: jmp     short loc_140426889
 * 000000014042686C: mov     ecx, 2
 * 0000000140426871: call    cs:__imp_HalRequestSoftwareInterrupt
 * 0000000140426878: nop     dword ptr [rax+rax+00h]
 * 000000014042687D: mov     rcx, gs:20h
 * 0000000140426886: dec     byte ptr [rcx+20h]
 * 0000000140426889: movzx   ecx, byte ptr [rbp-57h]
 * 000000014042688D: cmp     cs:KiIrqlFlags, 0
 * 0000000140426894: jz      short loc_14042689D
 * 0000000140426896: call    KzSetIrqlUnsafe
 * 000000014042689B: jmp     short loc_1404268A1
 * 000000014042689D: mov     cr8, rcx
 * 00000001404268A1: mov     rsi, [rbp+0D0h]
 * 00000001404268A8: cli
 * 00000001404268A9: test    byte ptr [rbp+0F0h], 1
 * 00000001404268B0: jz      loc_140426B9E
 * 00000001404268B6: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001404268BD: jz      short loc_1404268C2
 * 00000001404268BF: stac
 * 00000001404268C2: mov     rcx, gs:188h
 * 00000001404268CB: test    byte ptr [rcx+0C2h], 3
 * 00000001404268D2: jz      short loc_1404268EF
 * 00000001404268D4: mov     ecx, 1
 * 00000001404268D9: mov     cr8, rcx
 * 00000001404268DD: sti
 * 00000001404268DE: call    KiInitiateUserApc
 * 00000001404268E3: cli
 * 00000001404268E4: mov     ecx, 0
 * 00000001404268E9: mov     cr8, rcx
 * 00000001404268ED: jmp     short loc_1404268C2
 * 00000001404268EF: test    byte ptr gs:86Ch, 2
 * 00000001404268F8: jz      short loc_140426901
 * 00000001404268FA: xor     ecx, ecx
 * 00000001404268FC: call    KiUpdateStibpPairing
 * 0000000140426901: mov     rcx, gs:188h
 * 000000014042690A: test    dword ptr [rcx], 8000000h
 * 0000000140426910: jz      short loc_140426917
 * 0000000140426912: call    KiRestoreSetContextState
 * 0000000140426917: mov     rcx, gs:188h
 * 0000000140426920: test    dword ptr [rcx], 10000h
 * 0000000140426926: jz      short loc_14042693C
 * 0000000140426928: test    byte ptr [rcx+2], 1
 * 000000014042692C: jz      short loc_14042693C
 * 000000014042692E: call    KiCopyCounters
 * 0000000140426933: mov     rcx, gs:188h
 * 000000014042693C: ldmxcsr dword ptr [rbp-54h]
 * 0000000140426940: cmp     word ptr [rbp+80h], 0
 * 0000000140426948: jz      short loc_14042694F
 * 000000014042694A: call    KiRestoreDebugRegisterState
 * 000000014042694F: mov     rcx, gs:188h
 * 0000000140426958: bt      dword ptr [rcx+74h], 16h
 * 000000014042695D: jnb     short loc_140426989
 * 000000014042695F: xor     ecx, ecx
 * 0000000140426961: rdsspq  rcx
 * 0000000140426966: mov     r8, gs:95A8h
 * 000000014042696F: add     r8, 8
 * 0000000140426973: cmp     rcx, r8
 * 0000000140426976: jnz     short loc_140426989
 * 0000000140426978: mov     rcx, gs:95A0h
 * 0000000140426981: rstorssp qword ptr [rcx]
 * 0000000140426985: saveprevssp
 * 0000000140426989: movaps  xmm0, xmmword ptr [rbp-10h]
 * 000000014042698D: movaps  xmm1, xmmword ptr [rbp+0]
 * 0000000140426991: movaps  xmm2, xmmword ptr [rbp+10h]
 * 0000000140426995: movaps  xmm3, xmmword ptr [rbp+20h]
 * 0000000140426999: movaps  xmm4, xmmword ptr [rbp+30h]
 * 000000014042699D: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001404269A1: mov     r11, [rbp-20h]
 * 00000001404269A5: mov     r10, [rbp-28h]
 * 00000001404269A9: mov     r9, [rbp-30h]
 * 00000001404269AD: mov     r8, [rbp-38h]
 * 00000001404269B1: mov     byte ptr gs:856h, 0
 * 00000001404269BA: movzx   eax, word ptr gs:86Ah
 * 00000001404269C3: cmp     gs:864h, ax
 * 00000001404269CC: jz      short loc_1404269E0
 * 00000001404269CE: mov     gs:864h, ax
 * 00000001404269D7: mov     ecx, 48h ; 'H'
 * 00000001404269DC: xor     edx, edx
 * 00000001404269DE: wrmsr
 * 00000001404269E0: btr     word ptr gs:860h, 2
 * 00000001404269EB: jnb     short loc_1404269FB
 * 00000001404269ED: mov     eax, 1
 * 00000001404269F2: xor     edx, edx
 * 00000001404269F4: mov     ecx, 49h ; 'I'
 * 00000001404269F9: wrmsr
 * 00000001404269FB: btr     word ptr gs:860h, 5
 * 0000000140426A06: jnb     loc_140426B43
 * 0000000140426A0C: call    loc_140426B1F
 * 0000000140426A11: add     rsp, 8
 * 0000000140426A15: call    loc_140426B28
 * 0000000140426A1A: add     rsp, 8
 * 0000000140426A1E: call    loc_140426A11
 * 0000000140426A23: add     rsp, 8
 * 0000000140426A27: call    loc_140426A1A
 * 0000000140426A2C: add     rsp, 8
 * 0000000140426A30: call    loc_140426A23
 * 0000000140426A35: add     rsp, 8
 * 0000000140426A39: call    loc_140426A2C
 * 0000000140426A3E: add     rsp, 8
 * 0000000140426A42: call    loc_140426A35
 * 0000000140426A47: add     rsp, 8
 * 0000000140426A4B: call    loc_140426A3E
 * 0000000140426A50: add     rsp, 8
 * 0000000140426A54: call    loc_140426A47
 * 0000000140426A59: add     rsp, 8
 * 0000000140426A5D: call    loc_140426A50
 * 0000000140426A62: add     rsp, 8
 * 0000000140426A66: call    loc_140426A59
 * 0000000140426A6B: add     rsp, 8
 * 0000000140426A6F: call    loc_140426A62
 * 0000000140426A74: add     rsp, 8
 * 0000000140426A78: call    loc_140426A6B
 * 0000000140426A7D: add     rsp, 8
 * 0000000140426A81: call    loc_140426A74
 * 0000000140426A86: add     rsp, 8
 * 0000000140426A8A: call    loc_140426A7D
 * 0000000140426A8F: add     rsp, 8
 * 0000000140426A93: call    loc_140426A86
 * 0000000140426A98: add     rsp, 8
 * 0000000140426A9C: call    loc_140426A8F
 * 0000000140426AA1: add     rsp, 8
 * 0000000140426AA5: call    loc_140426A98
 * 0000000140426AAA: add     rsp, 8
 * 0000000140426AAE: call    loc_140426AA1
 * 0000000140426AB3: add     rsp, 8
 * 0000000140426AB7: call    loc_140426AAA
 * 0000000140426ABC: add     rsp, 8
 * 0000000140426AC0: call    loc_140426AB3
 * 0000000140426AC5: add     rsp, 8
 * 0000000140426AC9: call    loc_140426ABC
 * 0000000140426ACE: add     rsp, 8
 * 0000000140426AD2: call    loc_140426AC5
 * 0000000140426AD7: add     rsp, 8
 * 0000000140426ADB: call    loc_140426ACE
 * 0000000140426AE0: add     rsp, 8
 * 0000000140426AE4: call    loc_140426AD7
 * 0000000140426AE9: add     rsp, 8
 * 0000000140426AED: call    loc_140426AE0
 * 0000000140426AF2: add     rsp, 8
 * 0000000140426AF6: call    loc_140426AE9
 * 0000000140426AFB: add     rsp, 8
 * 0000000140426AFF: call    loc_140426AF2
 * 0000000140426B04: add     rsp, 8
 * 0000000140426B08: call    loc_140426AFB
 * 0000000140426B0D: add     rsp, 8
 * 0000000140426B11: call    loc_140426B04
 * 0000000140426B16: add     rsp, 8
 * 0000000140426B1A: call    loc_140426B0D
 * 0000000140426B1F: add     rsp, 8
 * 0000000140426B23: call    loc_140426B16
 * 0000000140426B28: add     rsp, 8
 * 0000000140426B2C: mov     eax, 0DADAh
 * 0000000140426B31: test    byte ptr gs:862h, 8
 * 0000000140426B3A: jz      short loc_140426B43
 * 0000000140426B3C: mov     al, 20h ; ' '
 * 0000000140426B3E: incsspq rax
 * 0000000140426B43: test    word ptr gs:860h, 80h
 * 0000000140426B4E: jz      short loc_140426B5C
 * 0000000140426B50: xor     eax, eax
 * 0000000140426B52: xor     edx, edx
 * 0000000140426B54: mov     ecx, 1
 * 0000000140426B59: div     rcx
 * 0000000140426B5C: mov     rdx, [rbp-40h]
 * 0000000140426B60: mov     rcx, [rbp-48h]
 * 0000000140426B64: mov     rax, [rbp-50h]
 * 0000000140426B68: mov     rsp, rbp
 * 0000000140426B6B: mov     rbp, [rbp+0D8h]
 * 0000000140426B72: add     rsp, 0E8h
 * 0000000140426B79: test    cs:KiKvaShadow, 1
 * 0000000140426B80: jz      short loc_140426B87
 * 0000000140426B82: jmp     KiKernelExit
 * 0000000140426B87: test    word ptr gs:860h, 100h
 * 0000000140426B92: jz      short loc_140426B99
 * 0000000140426B94: verw    [rsp-1C8h+arg_1E0]
 * 0000000140426B99: swapgs
 * 0000000140426B9C: iretq
 * 0000000140426B9E: ldmxcsr dword ptr [rbp-54h]
 * 0000000140426BA2: movaps  xmm0, xmmword ptr [rbp-10h]
 * 0000000140426BA6: movaps  xmm1, xmmword ptr [rbp+0]
 * 0000000140426BAA: movaps  xmm2, xmmword ptr [rbp+10h]
 * 0000000140426BAE: movaps  xmm3, xmmword ptr [rbp+20h]
 * 0000000140426BB2: movaps  xmm4, xmmword ptr [rbp+30h]
 * 0000000140426BB6: movaps  xmm5, xmmword ptr [rbp+40h]
 * 0000000140426BBA: mov     r11, [rbp-20h]
 * 0000000140426BBE: mov     r10, [rbp-28h]
 * 0000000140426BC2: mov     r9, [rbp-30h]
 * 0000000140426BC6: mov     r8, [rbp-38h]
 * 0000000140426BCA: mov     rdx, [rbp-40h]
 * 0000000140426BCE: mov     rcx, [rbp-48h]
 * 0000000140426BD2: mov     rax, [rbp-50h]
 * 0000000140426BD6: mov     rsp, rbp
 * 0000000140426BD9: mov     rbp, [rbp+0D8h]
 * 0000000140426BE0: add     rsp, 0E8h
 * 0000000140426BE7: iretq
 */
