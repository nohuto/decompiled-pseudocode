/*
 * XREFs of NtCallEnclave @ 0x140429630
 * Callers:
 *     <none>
 * Callees:
 *     KiRestoreDebugRegisterState @ 0x14041E860 (KiRestoreDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x14041F680 (KiRestoreSetContextState.c)
 *     KiInitiateUserApc @ 0x140424760 (KiInitiateUserApc.c)
 *     NtCallEnclave @ 0x140429630 (NtCallEnclave.c)
 *     KiUpdateStibpPairing @ 0x1404607C0 (KiUpdateStibpPairing.c)
 *     KiCopyCounters @ 0x140574240 (KiCopyCounters.c)
 *     PsCallEnclave @ 0x1409B68B0 (PsCallEnclave.c)
 */

/*
 * Hex-Rays decompilation failed for NtCallEnclave @ 0x140429630
 * Reason: Hex-Rays returned no pseudocode for 0x140429630
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140429630: sub     rsp, 28h
 * 0000000140429634: xor     eax, eax
 * 0000000140429636: xorps   xmm0, xmm0
 * 0000000140429639: mov     [rbp-48h], eax
 * 000000014042963C: mov     [rbp-40h], eax
 * 000000014042963F: mov     [rbp-38h], eax
 * 0000000140429642: mov     [rbp-30h], eax
 * 0000000140429645: mov     [rbp-28h], eax
 * 0000000140429648: mov     [rbp-20h], eax
 * 000000014042964B: movaps  xmmword ptr [rbp-10h], xmm0
 * 000000014042964F: movaps  xmmword ptr [rbp+0], xmm0
 * 0000000140429653: movaps  xmmword ptr [rbp+10h], xmm0
 * 0000000140429657: movaps  xmmword ptr [rbp+20h], xmm0
 * 000000014042965B: movaps  xmmword ptr [rbp+30h], xmm0
 * 000000014042965F: movaps  xmmword ptr [rbp+40h], xmm0
 * 0000000140429663: call    PsCallEnclave
 * 0000000140429668: mov     [rbp-50h], rax
 * 000000014042966C: mov     rbx, [rbp+0C0h]
 * 0000000140429673: mov     rdi, [rbp+0C8h]
 * 000000014042967A: mov     rsi, [rbp+0D0h]
 * 0000000140429681: cli
 * 0000000140429682: xor     ecx, ecx
 * 0000000140429684: rdsspq  rcx
 * 0000000140429689: test    rcx, rcx
 * 000000014042968C: jz      short loc_140429698
 * 000000014042968E: mov     ecx, 1
 * 0000000140429693: incsspq rcx
 * 0000000140429698: test    byte ptr [rbp+0F0h], 1
 * 000000014042969F: jz      loc_14042998D
 * 00000001404296A5: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001404296AC: jz      short loc_1404296B1
 * 00000001404296AE: stac
 * 00000001404296B1: mov     rcx, gs:188h
 * 00000001404296BA: test    byte ptr [rcx+0C2h], 3
 * 00000001404296C1: jz      short loc_1404296DE
 * 00000001404296C3: mov     ecx, 1
 * 00000001404296C8: mov     cr8, rcx
 * 00000001404296CC: sti
 * 00000001404296CD: call    KiInitiateUserApc
 * 00000001404296D2: cli
 * 00000001404296D3: mov     ecx, 0
 * 00000001404296D8: mov     cr8, rcx
 * 00000001404296DC: jmp     short loc_1404296B1
 * 00000001404296DE: test    byte ptr gs:86Ch, 2
 * 00000001404296E7: jz      short loc_1404296F0
 * 00000001404296E9: xor     ecx, ecx
 * 00000001404296EB: call    KiUpdateStibpPairing
 * 00000001404296F0: mov     rcx, gs:188h
 * 00000001404296F9: test    dword ptr [rcx], 8000000h
 * 00000001404296FF: jz      short loc_140429706
 * 0000000140429701: call    KiRestoreSetContextState
 * 0000000140429706: mov     rcx, gs:188h
 * 000000014042970F: test    dword ptr [rcx], 10000h
 * 0000000140429715: jz      short loc_14042972B
 * 0000000140429717: test    byte ptr [rcx+2], 1
 * 000000014042971B: jz      short loc_14042972B
 * 000000014042971D: call    KiCopyCounters
 * 0000000140429722: mov     rcx, gs:188h
 * 000000014042972B: ldmxcsr dword ptr [rbp-54h]
 * 000000014042972F: cmp     word ptr [rbp+80h], 0
 * 0000000140429737: jz      short loc_14042973E
 * 0000000140429739: call    KiRestoreDebugRegisterState
 * 000000014042973E: mov     rcx, gs:188h
 * 0000000140429747: bt      dword ptr [rcx+74h], 16h
 * 000000014042974C: jnb     short loc_140429778
 * 000000014042974E: xor     ecx, ecx
 * 0000000140429750: rdsspq  rcx
 * 0000000140429755: mov     r8, gs:95A8h
 * 000000014042975E: add     r8, 8
 * 0000000140429762: cmp     rcx, r8
 * 0000000140429765: jnz     short loc_140429778
 * 0000000140429767: mov     rcx, gs:95A0h
 * 0000000140429770: rstorssp qword ptr [rcx]
 * 0000000140429774: saveprevssp
 * 0000000140429778: movaps  xmm0, xmmword ptr [rbp-10h]
 * 000000014042977C: movaps  xmm1, xmmword ptr [rbp+0]
 * 0000000140429780: movaps  xmm2, xmmword ptr [rbp+10h]
 * 0000000140429784: movaps  xmm3, xmmword ptr [rbp+20h]
 * 0000000140429788: movaps  xmm4, xmmword ptr [rbp+30h]
 * 000000014042978C: movaps  xmm5, xmmword ptr [rbp+40h]
 * 0000000140429790: mov     r11, [rbp-20h]
 * 0000000140429794: mov     r10, [rbp-28h]
 * 0000000140429798: mov     r9, [rbp-30h]
 * 000000014042979C: mov     r8, [rbp-38h]
 * 00000001404297A0: mov     byte ptr gs:856h, 0
 * 00000001404297A9: movzx   eax, word ptr gs:86Ah
 * 00000001404297B2: cmp     gs:864h, ax
 * 00000001404297BB: jz      short loc_1404297CF
 * 00000001404297BD: mov     gs:864h, ax
 * 00000001404297C6: mov     ecx, 48h ; 'H'
 * 00000001404297CB: xor     edx, edx
 * 00000001404297CD: wrmsr
 * 00000001404297CF: btr     word ptr gs:860h, 2
 * 00000001404297DA: jnb     short loc_1404297EA
 * 00000001404297DC: mov     eax, 1
 * 00000001404297E1: xor     edx, edx
 * 00000001404297E3: mov     ecx, 49h ; 'I'
 * 00000001404297E8: wrmsr
 * 00000001404297EA: btr     word ptr gs:860h, 5
 * 00000001404297F5: jnb     loc_140429932
 * 00000001404297FB: call    loc_14042990E
 * 0000000140429800: add     rsp, 8
 * 0000000140429804: call    loc_140429917
 * 0000000140429809: add     rsp, 8
 * 000000014042980D: call    loc_140429800
 * 0000000140429812: add     rsp, 8
 * 0000000140429816: call    loc_140429809
 * 000000014042981B: add     rsp, 8
 * 000000014042981F: call    loc_140429812
 * 0000000140429824: add     rsp, 8
 * 0000000140429828: call    loc_14042981B
 * 000000014042982D: add     rsp, 8
 * 0000000140429831: call    loc_140429824
 * 0000000140429836: add     rsp, 8
 * 000000014042983A: call    loc_14042982D
 * 000000014042983F: add     rsp, 8
 * 0000000140429843: call    loc_140429836
 * 0000000140429848: add     rsp, 8
 * 000000014042984C: call    loc_14042983F
 * 0000000140429851: add     rsp, 8
 * 0000000140429855: call    loc_140429848
 * 000000014042985A: add     rsp, 8
 * 000000014042985E: call    loc_140429851
 * 0000000140429863: add     rsp, 8
 * 0000000140429867: call    loc_14042985A
 * 000000014042986C: add     rsp, 8
 * 0000000140429870: call    loc_140429863
 * 0000000140429875: add     rsp, 8
 * 0000000140429879: call    loc_14042986C
 * 000000014042987E: add     rsp, 8
 * 0000000140429882: call    loc_140429875
 * 0000000140429887: add     rsp, 8
 * 000000014042988B: call    loc_14042987E
 * 0000000140429890: add     rsp, 8
 * 0000000140429894: call    loc_140429887
 * 0000000140429899: add     rsp, 8
 * 000000014042989D: call    loc_140429890
 * 00000001404298A2: add     rsp, 8
 * 00000001404298A6: call    loc_140429899
 * 00000001404298AB: add     rsp, 8
 * 00000001404298AF: call    loc_1404298A2
 * 00000001404298B4: add     rsp, 8
 * 00000001404298B8: call    loc_1404298AB
 * 00000001404298BD: add     rsp, 8
 * 00000001404298C1: call    loc_1404298B4
 * 00000001404298C6: add     rsp, 8
 * 00000001404298CA: call    loc_1404298BD
 * 00000001404298CF: add     rsp, 8
 * 00000001404298D3: call    loc_1404298C6
 * 00000001404298D8: add     rsp, 8
 * 00000001404298DC: call    loc_1404298CF
 * 00000001404298E1: add     rsp, 8
 * 00000001404298E5: call    loc_1404298D8
 * 00000001404298EA: add     rsp, 8
 * 00000001404298EE: call    loc_1404298E1
 * 00000001404298F3: add     rsp, 8
 * 00000001404298F7: call    loc_1404298EA
 * 00000001404298FC: add     rsp, 8
 * 0000000140429900: call    loc_1404298F3
 * 0000000140429905: add     rsp, 8
 * 0000000140429909: call    loc_1404298FC
 * 000000014042990E: add     rsp, 8
 * 0000000140429912: call    loc_140429905
 * 0000000140429917: add     rsp, 8
 * 000000014042991B: mov     eax, 0DADAh
 * 0000000140429920: test    byte ptr gs:862h, 8
 * 0000000140429929: jz      short loc_140429932
 * 000000014042992B: mov     al, 20h ; ' '
 * 000000014042992D: incsspq rax
 * 0000000140429932: test    word ptr gs:860h, 80h
 * 000000014042993D: jz      short loc_14042994B
 * 000000014042993F: xor     eax, eax
 * 0000000140429941: xor     edx, edx
 * 0000000140429943: mov     ecx, 1
 * 0000000140429948: div     rcx
 * 000000014042994B: mov     rdx, [rbp-40h]
 * 000000014042994F: mov     rcx, [rbp-48h]
 * 0000000140429953: mov     rax, [rbp-50h]
 * 0000000140429957: mov     rsp, rbp
 * 000000014042995A: mov     rbp, [rbp+0D8h]
 * 0000000140429961: add     rsp, 0E8h
 * 0000000140429968: test    cs:KiKvaShadow, 1
 * 000000014042996F: jz      short loc_140429976
 * 0000000140429971: jmp     KiKernelExit
 * 0000000140429976: test    word ptr gs:860h, 100h
 * 0000000140429981: jz      short loc_140429988
 * 0000000140429983: verw    [rsp-1E8h+arg_200]
 * 0000000140429988: swapgs
 * 000000014042998B: iretq
 * 000000014042998D: ldmxcsr dword ptr [rbp-54h]
 * 0000000140429991: movaps  xmm0, xmmword ptr [rbp-10h]
 * 0000000140429995: movaps  xmm1, xmmword ptr [rbp+0]
 * 0000000140429999: movaps  xmm2, xmmword ptr [rbp+10h]
 * 000000014042999D: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001404299A1: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001404299A5: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001404299A9: mov     r11, [rbp-20h]
 * 00000001404299AD: mov     r10, [rbp-28h]
 * 00000001404299B1: mov     r9, [rbp-30h]
 * 00000001404299B5: mov     r8, [rbp-38h]
 * 00000001404299B9: mov     rdx, [rbp-40h]
 * 00000001404299BD: mov     rcx, [rbp-48h]
 * 00000001404299C1: mov     rax, [rbp-50h]
 * 00000001404299C5: mov     rsp, rbp
 * 00000001404299C8: mov     rbp, [rbp+0D8h]
 * 00000001404299CF: add     rsp, 0E8h
 * 00000001404299D6: iretq
 */
