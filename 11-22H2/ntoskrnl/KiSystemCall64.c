/*
 * XREFs of KiSystemCall64 @ 0x140433500
 * Callers:
 *     <none>
 * Callees:
 *     KiRestoreDebugRegisterState @ 0x14041E860 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x14041E8E0 (KiSaveDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x14041F680 (KiRestoreSetContextState.c)
 *     KiConvertToGuiThread @ 0x140423CB0 (KiConvertToGuiThread.c)
 *     KiInitiateUserApc @ 0x140424760 (KiInitiateUserApc.c)
 *     KiSystemCall64 @ 0x140433500 (KiSystemCall64.c)
 *     KiBugCheckDispatch @ 0x1404342C0 (KiBugCheckDispatch.c)
 *     KiExceptionDispatch @ 0x140434340 (KiExceptionDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140434D00 (KiFlushBhbDuringTrapEntryOrExit.c)
 *     KiUpdateStibpPairing @ 0x1404607C0 (KiUpdateStibpPairing.c)
 *     KiCopyCounters @ 0x140574240 (KiCopyCounters.c)
 *     PerfInfoLogSysCallEntry @ 0x1405FEC50 (PerfInfoLogSysCallEntry.c)
 *     PerfInfoLogSysCallExit @ 0x1405FECE0 (PerfInfoLogSysCallExit.c)
 *     PsInvokeWin32Callout @ 0x1406AF850 (PsInvokeWin32Callout.c)
 *     KiTrackSystemCallEntry @ 0x140975C40 (KiTrackSystemCallEntry.c)
 *     KiTrackSystemCallExit @ 0x140975D60 (KiTrackSystemCallExit.c)
 *     PsSyscallProviderDispatch @ 0x1409B4750 (PsSyscallProviderDispatch.c)
 */

/*
 * Hex-Rays decompilation failed for KiSystemCall64 @ 0x140433500
 * Reason: Hex-Rays returned no pseudocode for 0x140433500
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140433500: swapgs
 * 0000000140433503: mov     gs:10h, rsp
 * 000000014043350C: mov     rsp, gs:1A8h
 * 0000000140433515: push    2Bh ; '+'
 * 0000000140433517: push    qword ptr gs:10h
 * 000000014043351F: push    r11
 * 0000000140433521: push    33h ; '3'
 * 0000000140433523: push    rcx
 * 0000000140433524: mov     rcx, gs:95A8h
 * 000000014043352D: test    rcx, rcx
 * 0000000140433530: jz      short loc_14043353E
 * 0000000140433532: setssbsy
 * 0000000140433536: rstorssp qword ptr [rcx]
 * 000000014043353A: saveprevssp
 * 000000014043353E: mov     rcx, r10
 * 0000000140433541: sub     rsp, 8
 * 0000000140433545: push    rbp
 * 0000000140433546: sub     rsp, 158h
 * 000000014043354D: lea     rbp, [rsp+190h+var_110]
 * 0000000140433555: mov     [rbp+0C0h], rbx
 * 000000014043355C: mov     [rbp+0C8h], rdi
 * 0000000140433563: mov     [rbp+0D0h], rsi
 * 000000014043356A: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 0000000140433571: jz      short loc_14043357F
 * 0000000140433573: test    byte ptr [rbp+0F0h], 1
 * 000000014043357A: jz      short loc_14043357F
 * 000000014043357C: stac
 * 000000014043357F: mov     [rbp-50h], rax
 * 0000000140433583: mov     [rbp-48h], rcx
 * 0000000140433587: mov     [rbp-40h], rdx
 * 000000014043358B: mov     rcx, gs:188h
 * 0000000140433594: mov     rcx, [rcx+220h]
 * 000000014043359B: mov     rcx, [rcx+9E0h]
 * 00000001404335A2: mov     gs:858h, rcx
 * 00000001404335AB: mov     cx, gs:850h
 * 00000001404335B4: mov     gs:852h, cx
 * 00000001404335BD: mov     cx, gs:860h
 * 00000001404335C6: mov     gs:854h, cx
 * 00000001404335CF: movzx   eax, word ptr gs:866h
 * 00000001404335D8: cmp     gs:864h, ax
 * 00000001404335E1: jz      short loc_1404335F5
 * 00000001404335E3: mov     gs:864h, ax
 * 00000001404335EC: mov     ecx, 48h ; 'H'
 * 00000001404335F1: xor     edx, edx
 * 00000001404335F3: wrmsr
 * 00000001404335F5: movzx   edx, word ptr gs:860h
 * 00000001404335FE: test    edx, 8
 * 0000000140433604: jz      short loc_14043361D
 * 0000000140433606: mov     eax, 1
 * 000000014043360B: xor     edx, edx
 * 000000014043360D: mov     ecx, 49h ; 'I'
 * 0000000140433612: wrmsr
 * 0000000140433614: movzx   edx, word ptr gs:860h
 * 000000014043361D: test    edx, 2
 * 0000000140433623: jz      loc_140433760
 * 0000000140433629: call    loc_14043373C
 * 000000014043362E: add     rsp, 8
 * 0000000140433632: call    loc_140433745
 * 0000000140433637: add     rsp, 8
 * 000000014043363B: call    loc_14043362E
 * 0000000140433640: add     rsp, 8
 * 0000000140433644: call    loc_140433637
 * 0000000140433649: add     rsp, 8
 * 000000014043364D: call    loc_140433640
 * 0000000140433652: add     rsp, 8
 * 0000000140433656: call    loc_140433649
 * 000000014043365B: add     rsp, 8
 * 000000014043365F: call    loc_140433652
 * 0000000140433664: add     rsp, 8
 * 0000000140433668: call    loc_14043365B
 * 000000014043366D: add     rsp, 8
 * 0000000140433671: call    loc_140433664
 * 0000000140433676: add     rsp, 8
 * 000000014043367A: call    loc_14043366D
 * 000000014043367F: add     rsp, 8
 * 0000000140433683: call    loc_140433676
 * 0000000140433688: add     rsp, 8
 * 000000014043368C: call    loc_14043367F
 * 0000000140433691: add     rsp, 8
 * 0000000140433695: call    loc_140433688
 * 000000014043369A: add     rsp, 8
 * 000000014043369E: call    loc_140433691
 * 00000001404336A3: add     rsp, 8
 * 00000001404336A7: call    loc_14043369A
 * 00000001404336AC: add     rsp, 8
 * 00000001404336B0: call    loc_1404336A3
 * 00000001404336B5: add     rsp, 8
 * 00000001404336B9: call    loc_1404336AC
 * 00000001404336BE: add     rsp, 8
 * 00000001404336C2: call    loc_1404336B5
 * 00000001404336C7: add     rsp, 8
 * 00000001404336CB: call    loc_1404336BE
 * 00000001404336D0: add     rsp, 8
 * 00000001404336D4: call    loc_1404336C7
 * 00000001404336D9: add     rsp, 8
 * 00000001404336DD: call    loc_1404336D0
 * 00000001404336E2: add     rsp, 8
 * 00000001404336E6: call    loc_1404336D9
 * 00000001404336EB: add     rsp, 8
 * 00000001404336EF: call    loc_1404336E2
 * 00000001404336F4: add     rsp, 8
 * 00000001404336F8: call    loc_1404336EB
 * 00000001404336FD: add     rsp, 8
 * 0000000140433701: call    loc_1404336F4
 * 0000000140433706: add     rsp, 8
 * 000000014043370A: call    loc_1404336FD
 * 000000014043370F: add     rsp, 8
 * 0000000140433713: call    loc_140433706
 * 0000000140433718: add     rsp, 8
 * 000000014043371C: call    loc_14043370F
 * 0000000140433721: add     rsp, 8
 * 0000000140433725: call    loc_140433718
 * 000000014043372A: add     rsp, 8
 * 000000014043372E: call    loc_140433721
 * 0000000140433733: add     rsp, 8
 * 0000000140433737: call    loc_14043372A
 * 000000014043373C: add     rsp, 8
 * 0000000140433740: call    loc_140433733
 * 0000000140433745: add     rsp, 8
 * 0000000140433749: mov     eax, 0DADAh
 * 000000014043374E: test    byte ptr gs:862h, 8
 * 0000000140433757: jz      short loc_140433760
 * 0000000140433759: mov     al, 20h ; ' '
 * 000000014043375B: incsspq rax
 * 0000000140433760: test    edx, 200h
 * 0000000140433766: jz      short loc_14043376D
 * 0000000140433768: call    KiFlushBhbDuringTrapEntryOrExit
 * 000000014043376D: lfence
 * 0000000140433770: mov     byte ptr gs:856h, 0
 * 0000000140433779: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 0000000140433780: jz      short KiSystemServiceUser
 * 0000000140433782: mov     ecx, 6A7h
 * 0000000140433787: rdmsr
 * 0000000140433789: cmp     edx, 0
 * 000000014043378C: jz      short KiSystemServiceUser
 * 000000014043378E: mov     ecx, edx
 * 0000000140433790: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 0000000140433796: cmp     edx, ecx
 * 0000000140433798: jz      short KiSystemServiceUser
 * 000000014043379A: mov     ecx, 6A7h
 * 000000014043379F: wrmsr
 * 00000001404337A1: mov     byte ptr [rbp-55h], 2
 * 00000001404337A5: mov     rbx, gs:188h
 * 00000001404337AE: prefetchw byte ptr [rbx+90h]
 * 00000001404337B5: stmxcsr dword ptr [rbp-54h]
 * 00000001404337B9: ldmxcsr dword ptr gs:180h
 * 00000001404337C2: cmp     byte ptr [rbx+3], 0
 * 00000001404337C6: mov     word ptr [rbp+80h], 0
 * 00000001404337CF: jz      short loc_140433848
 * 00000001404337D1: test    byte ptr [rbx+3], 3
 * 00000001404337D5: mov     [rbp-38h], r8
 * 00000001404337D9: mov     [rbp-30h], r9
 * 00000001404337DD: jz      short loc_1404337E4
 * 00000001404337DF: call    KiSaveDebugRegisterState
 * 00000001404337E4: test    byte ptr [rbx+3], 24h
 * 00000001404337E8: jz      short loc_140433840
 * 00000001404337EA: mov     [rbp-20h], r10
 * 00000001404337EE: mov     [rbp-28h], r10
 * 00000001404337F2: movaps  xmmword ptr [rbp-10h], xmm0
 * 00000001404337F6: movaps  xmmword ptr [rbp+0], xmm1
 * 00000001404337FA: movaps  xmmword ptr [rbp+10h], xmm2
 * 00000001404337FE: movaps  xmmword ptr [rbp+20h], xmm3
 * 0000000140433802: movaps  xmmword ptr [rbp+30h], xmm4
 * 0000000140433806: movaps  xmmword ptr [rbp+40h], xmm5
 * 000000014043380A: sti
 * 000000014043380B: mov     rcx, rsp
 * 000000014043380E: call    PsSyscallProviderDispatch
 * 0000000140433813: cmp     al, 1
 * 0000000140433815: jz      short loc_140433840
 * 0000000140433817: mov     rax, [rbp-50h]
 * 000000014043381B: jl      short loc_140433831
 * 000000014043381D: mov     ecx, 0C000001Ch
 * 0000000140433822: xor     edx, edx
 * 0000000140433824: mov     r8, [rbp+0E8h]
 * 000000014043382B: call    KiExceptionDispatch
 * 0000000140433830: int     3; Trap to Debugger
 * 0000000140433831: test    byte ptr [rbx+3], 4
 * 0000000140433835: jz      KiSystemServiceExit
 * 000000014043383B: jmp     KiSystemServiceExitPico
 * 0000000140433840: mov     r8, [rbp-38h]
 * 0000000140433844: mov     r9, [rbp-30h]
 * 0000000140433848: mov     rax, [rbp-50h]
 * 000000014043384C: mov     rcx, [rbp-48h]
 * 0000000140433850: mov     rdx, [rbp-40h]
 * 0000000140433854: sti
 * 0000000140433855: mov     [rbx+88h], rcx
 * 000000014043385C: mov     [rbx+80h], eax
 * 0000000140433862: nop     word ptr [rax+rax+00000000h]
 * 0000000140433870: mov     [rbx+90h], rsp
 * 0000000140433877: mov     edi, eax
 * 0000000140433879: shr     edi, 7
 * 000000014043387C: and     edi, 20h
 * 000000014043387F: and     eax, 0FFFh
 * 0000000140433884: lea     r10, KeServiceDescriptorTable
 * 000000014043388B: lea     r11, KeServiceDescriptorTableShadow
 * 0000000140433892: test    dword ptr [rbx+78h], 80h
 * 0000000140433899: jz      short loc_1404338AE
 * 000000014043389B: test    dword ptr [rbx+78h], 200000h
 * 00000001404338A2: jz      short loc_1404338AB
 * 00000001404338A4: lea     r11, KeServiceDescriptorTableFilter
 * 00000001404338AB: mov     r10, r11
 * 00000001404338AE: cmp     eax, [r10+rdi+10h]
 * 00000001404338B3: jnb     loc_14043414B
 * 00000001404338B9: mov     r10, [r10+rdi]
 * 00000001404338BD: movsxd  r11, dword ptr [r10+rax*4]
 * 00000001404338C1: mov     rax, r11
 * 00000001404338C4: sar     r11, 4
 * 00000001404338C8: add     r10, r11
 * 00000001404338CB: cmp     edi, 20h ; ' '
 * 00000001404338CE: jnz     short loc_140433920
 * 00000001404338D0: mov     r11, [rbx+0F0h]
 * 00000001404338D7: cmp     dword ptr [r11+1740h], 0
 * 00000001404338DF: jz      short loc_140433920
 * 00000001404338E1: mov     [rbp-50h], rax
 * 00000001404338E5: mov     [rbp-48h], rcx
 * 00000001404338E9: mov     [rbp-40h], rdx
 * 00000001404338ED: mov     rbx, r8
 * 00000001404338F0: mov     rdi, r9
 * 00000001404338F3: mov     rsi, r10
 * 00000001404338F6: mov     ecx, 7
 * 00000001404338FB: xor     edx, edx
 * 00000001404338FD: xor     r8, r8
 * 0000000140433900: xor     r9, r9
 * 0000000140433903: call    PsInvokeWin32Callout
 * 0000000140433908: mov     rax, [rbp-50h]
 * 000000014043390C: mov     rcx, [rbp-48h]
 * 0000000140433910: mov     rdx, [rbp-40h]
 * 0000000140433914: mov     r8, rbx
 * 0000000140433917: mov     r9, rdi
 * 000000014043391A: mov     r10, rsi
 * 000000014043391D: nop     dword ptr [rax]
 * 0000000140433920: and     eax, 0Fh
 * 0000000140433923: jz      KiSystemServiceCopyEnd
 * 0000000140433929: shl     eax, 3
 * 000000014043392C: lea     rsp, [rsp-70h]
 * 0000000140433931: lea     rdi, [rsp+100h+var_E8]
 * 0000000140433936: mov     rsi, [rbp+100h]
 * 000000014043393D: lea     rsi, [rsi+20h]
 * 0000000140433941: test    byte ptr [rbp+0F0h], 1
 * 0000000140433948: jz      short loc_140433960
 * 000000014043394A: cmp     rsi, cs:MmUserProbeAddress
 * 0000000140433951: cmovnb  rsi, cs:MmUserProbeAddress
 * 0000000140433959: nop     dword ptr [rax+00000000h]
 * 0000000140433960: lea     r11, KiSystemServiceCopyEnd
 * 0000000140433967: sub     r11, rax
 * 000000014043396A: jmp     r11
 * 0000000140433970: mov     rax, [rsi+70h]
 * 0000000140433974: mov     [rdi+70h], rax
 * 0000000140433978: mov     rax, [rsi+68h]
 * 000000014043397C: mov     [rdi+68h], rax
 * 0000000140433980: mov     rax, [rsi+60h]
 * 0000000140433984: mov     [rdi+60h], rax
 * 0000000140433988: mov     rax, [rsi+58h]
 * 000000014043398C: mov     [rdi+58h], rax
 * 0000000140433990: mov     rax, [rsi+50h]
 * 0000000140433994: mov     [rdi+50h], rax
 * 0000000140433998: mov     rax, [rsi+48h]
 * 000000014043399C: mov     [rdi+48h], rax
 * 00000001404339A0: mov     rax, [rsi+40h]
 * 00000001404339A4: mov     [rdi+40h], rax
 * 00000001404339A8: mov     rax, [rsi+38h]
 * 00000001404339AC: mov     [rdi+38h], rax
 * 00000001404339B0: mov     rax, [rsi+30h]
 * 00000001404339B4: mov     [rdi+30h], rax
 * 00000001404339B8: mov     rax, [rsi+28h]
 * 00000001404339BC: mov     [rdi+28h], rax
 * 00000001404339C0: mov     rax, [rsi+20h]
 * 00000001404339C4: mov     [rdi+20h], rax
 * 00000001404339C8: mov     rax, [rsi+18h]
 * 00000001404339CC: mov     [rdi+18h], rax
 * 00000001404339D0: mov     rax, [rsi+10h]
 * 00000001404339D4: mov     [rdi+10h], rax
 * 00000001404339D8: mov     rax, [rsi+8]
 * 00000001404339DC: mov     [rdi+8], rax
 * 00000001404339E0: test    cs:KiDynamicTraceMask, 1
 * 00000001404339EA: jnz     loc_1404341E9
 * 00000001404339F0: test    dword ptr cs:PerfGlobalGroupMask+8, 40h
 * 00000001404339FA: jnz     loc_14043425D
 * 0000000140433A00: mov     rax, r10
 * 0000000140433A03: call    rax
 * 0000000140433A05: nop     dword ptr [rax]
 * 0000000140433A08: inc     dword ptr gs:2EB8h
 * 0000000140433A10: mov     rbx, [rbp+0C0h]
 * 0000000140433A17: mov     rdi, [rbp+0C8h]
 * 0000000140433A1E: mov     rsi, [rbp+0D0h]
 * 0000000140433A25: mov     r11, gs:188h
 * 0000000140433A2E: test    byte ptr [rbp+0F0h], 1
 * 0000000140433A35: jz      loc_140433E0F
 * 0000000140433A3B: mov     rcx, cr8
 * 0000000140433A3F: or      cl, [r11+24Ah]
 * 0000000140433A46: or      ecx, [r11+1E4h]
 * 0000000140433A4D: jnz     loc_1404341B5
 * 0000000140433A53: cli
 * 0000000140433A54: mov     rcx, gs:188h
 * 0000000140433A5D: test    byte ptr [rcx+0C2h], 3
 * 0000000140433A64: jz      short loc_140433ABF
 * 0000000140433A66: mov     [rbp-50h], rax
 * 0000000140433A6A: xor     eax, eax
 * 0000000140433A6C: mov     [rbp-48h], rax
 * 0000000140433A70: mov     [rbp-40h], rax
 * 0000000140433A74: mov     [rbp-38h], rax
 * 0000000140433A78: mov     [rbp-30h], rax
 * 0000000140433A7C: mov     [rbp-28h], rax
 * 0000000140433A80: mov     [rbp-20h], rax
 * 0000000140433A84: pxor    xmm0, xmm0
 * 0000000140433A88: movaps  xmmword ptr [rbp-10h], xmm0
 * 0000000140433A8C: movaps  xmmword ptr [rbp+0], xmm0
 * 0000000140433A90: movaps  xmmword ptr [rbp+10h], xmm0
 * 0000000140433A94: movaps  xmmword ptr [rbp+20h], xmm0
 * 0000000140433A98: movaps  xmmword ptr [rbp+30h], xmm0
 * 0000000140433A9C: movaps  xmmword ptr [rbp+40h], xmm0
 * 0000000140433AA0: mov     ecx, 1
 * 0000000140433AA5: mov     cr8, rcx
 * 0000000140433AA9: sti
 * 0000000140433AAA: call    KiInitiateUserApc
 * 0000000140433AAF: cli
 * 0000000140433AB0: mov     ecx, 0
 * 0000000140433AB5: mov     cr8, rcx
 * 0000000140433AB9: mov     rax, [rbp-50h]
 * 0000000140433ABD: jmp     short loc_140433A54
 * 0000000140433ABF: test    byte ptr gs:86Ch, 2
 * 0000000140433AC8: jz      short loc_140433AD9
 * 0000000140433ACA: mov     [rbp-50h], rax
 * 0000000140433ACE: xor     ecx, ecx
 * 0000000140433AD0: call    KiUpdateStibpPairing
 * 0000000140433AD5: mov     rax, [rbp-50h]
 * 0000000140433AD9: mov     rcx, gs:188h
 * 0000000140433AE2: test    dword ptr [rcx], 8000000h
 * 0000000140433AE8: jz      short loc_140433B29
 * 0000000140433AEA: mov     [rbp-50h], rax
 * 0000000140433AEE: xor     eax, eax
 * 0000000140433AF0: mov     [rbp-48h], rax
 * 0000000140433AF4: mov     [rbp-40h], rax
 * 0000000140433AF8: mov     [rbp-38h], rax
 * 0000000140433AFC: mov     [rbp-30h], rax
 * 0000000140433B00: mov     [rbp-28h], rax
 * 0000000140433B04: mov     [rbp-20h], rax
 * 0000000140433B08: pxor    xmm0, xmm0
 * 0000000140433B0C: movaps  xmmword ptr [rbp-10h], xmm0
 * 0000000140433B10: movaps  xmmword ptr [rbp+0], xmm0
 * 0000000140433B14: movaps  xmmword ptr [rbp+10h], xmm0
 * 0000000140433B18: movaps  xmmword ptr [rbp+20h], xmm0
 * 0000000140433B1C: movaps  xmmword ptr [rbp+30h], xmm0
 * 0000000140433B20: movaps  xmmword ptr [rbp+40h], xmm0
 * 0000000140433B24: call    KiRestoreSetContextState
 * 0000000140433B29: mov     rcx, gs:188h
 * 0000000140433B32: test    dword ptr [rcx], 10000h
 * 0000000140433B38: jz      short loc_140433B56
 * 0000000140433B3A: mov     [rbp-50h], rax
 * 0000000140433B3E: test    byte ptr [rcx+2], 1
 * 0000000140433B42: jz      short loc_140433B52
 * 0000000140433B44: call    KiCopyCounters
 * 0000000140433B49: mov     rcx, gs:188h
 * 0000000140433B52: mov     rax, [rbp-50h]
 * 0000000140433B56: ldmxcsr dword ptr [rbp-54h]
 * 0000000140433B5A: xor     r10, r10
 * 0000000140433B5D: cmp     word ptr [rbp+80h], 0
 * 0000000140433B65: jz      short loc_140433BA8
 * 0000000140433B67: mov     [rbp-50h], rax
 * 0000000140433B6B: call    KiRestoreDebugRegisterState
 * 0000000140433B70: mov     rax, gs:188h
 * 0000000140433B79: mov     rax, [rax+0B8h]
 * 0000000140433B80: mov     rax, [rax+3D8h]
 * 0000000140433B87: or      rax, rax
 * 0000000140433B8A: jz      short loc_140433BA4
 * 0000000140433B8C: cmp     word ptr [rbp+0F0h], 33h ; '3'
 * 0000000140433B94: jnz     short loc_140433BA4
 * 0000000140433B96: mov     r10, [rbp+0E8h]
 * 0000000140433B9D: mov     [rbp+0E8h], rax
 * 0000000140433BA4: mov     rax, [rbp-50h]
 * 0000000140433BA8: mov     rcx, gs:188h
 * 0000000140433BB1: bt      dword ptr [rcx+74h], 16h
 * 0000000140433BB6: jnb     short loc_140433BE2
 * 0000000140433BB8: xor     ecx, ecx
 * 0000000140433BBA: rdsspq  rcx
 * 0000000140433BBF: mov     r8, gs:95A8h
 * 0000000140433BC8: add     r8, 8
 * 0000000140433BCC: cmp     rcx, r8
 * 0000000140433BCF: jnz     short loc_140433BE2
 * 0000000140433BD1: mov     rcx, gs:95A0h
 * 0000000140433BDA: rstorssp qword ptr [rcx]
 * 0000000140433BDE: saveprevssp
 * 0000000140433BE2: mov     [rbp-50h], rax
 * 0000000140433BE6: mov     byte ptr gs:856h, 0
 * 0000000140433BEF: movzx   eax, word ptr gs:86Ah
 * 0000000140433BF8: cmp     gs:864h, ax
 * 0000000140433C01: jz      short loc_140433C15
 * 0000000140433C03: mov     gs:864h, ax
 * 0000000140433C0C: mov     ecx, 48h ; 'H'
 * 0000000140433C11: xor     edx, edx
 * 0000000140433C13: wrmsr
 * 0000000140433C15: btr     word ptr gs:860h, 2
 * 0000000140433C20: jnb     short loc_140433C30
 * 0000000140433C22: mov     eax, 1
 * 0000000140433C27: xor     edx, edx
 * 0000000140433C29: mov     ecx, 49h ; 'I'
 * 0000000140433C2E: wrmsr
 * 0000000140433C30: btr     word ptr gs:860h, 5
 * 0000000140433C3B: jnb     loc_140433D78
 * 0000000140433C41: call    loc_140433D54
 * 0000000140433C46: add     rsp, 8
 * 0000000140433C4A: call    loc_140433D5D
 * 0000000140433C4F: add     rsp, 8
 * 0000000140433C53: call    loc_140433C46
 * 0000000140433C58: add     rsp, 8
 * 0000000140433C5C: call    loc_140433C4F
 * 0000000140433C61: add     rsp, 8
 * 0000000140433C65: call    loc_140433C58
 * 0000000140433C6A: add     rsp, 8
 * 0000000140433C6E: call    loc_140433C61
 * 0000000140433C73: add     rsp, 8
 * 0000000140433C77: call    loc_140433C6A
 * 0000000140433C7C: add     rsp, 8
 * 0000000140433C80: call    loc_140433C73
 * 0000000140433C85: add     rsp, 8
 * 0000000140433C89: call    loc_140433C7C
 * 0000000140433C8E: add     rsp, 8
 * 0000000140433C92: call    loc_140433C85
 * 0000000140433C97: add     rsp, 8
 * 0000000140433C9B: call    loc_140433C8E
 * 0000000140433CA0: add     rsp, 8
 * 0000000140433CA4: call    loc_140433C97
 * 0000000140433CA9: add     rsp, 8
 * 0000000140433CAD: call    loc_140433CA0
 * 0000000140433CB2: add     rsp, 8
 * 0000000140433CB6: call    loc_140433CA9
 * 0000000140433CBB: add     rsp, 8
 * 0000000140433CBF: call    loc_140433CB2
 * 0000000140433CC4: add     rsp, 8
 * 0000000140433CC8: call    loc_140433CBB
 * 0000000140433CCD: add     rsp, 8
 * 0000000140433CD1: call    loc_140433CC4
 * 0000000140433CD6: add     rsp, 8
 * 0000000140433CDA: call    loc_140433CCD
 * 0000000140433CDF: add     rsp, 8
 * 0000000140433CE3: call    loc_140433CD6
 * 0000000140433CE8: add     rsp, 8
 * 0000000140433CEC: call    loc_140433CDF
 * 0000000140433CF1: add     rsp, 8
 * 0000000140433CF5: call    loc_140433CE8
 * 0000000140433CFA: add     rsp, 8
 * 0000000140433CFE: call    loc_140433CF1
 * 0000000140433D03: add     rsp, 8
 * 0000000140433D07: call    loc_140433CFA
 * 0000000140433D0C: add     rsp, 8
 * 0000000140433D10: call    loc_140433D03
 * 0000000140433D15: add     rsp, 8
 * 0000000140433D19: call    loc_140433D0C
 * 0000000140433D1E: add     rsp, 8
 * 0000000140433D22: call    loc_140433D15
 * 0000000140433D27: add     rsp, 8
 * 0000000140433D2B: call    loc_140433D1E
 * 0000000140433D30: add     rsp, 8
 * 0000000140433D34: call    loc_140433D27
 * 0000000140433D39: add     rsp, 8
 * 0000000140433D3D: call    loc_140433D30
 * 0000000140433D42: add     rsp, 8
 * 0000000140433D46: call    loc_140433D39
 * 0000000140433D4B: add     rsp, 8
 * 0000000140433D4F: call    loc_140433D42
 * 0000000140433D54: add     rsp, 8
 * 0000000140433D58: call    loc_140433D4B
 * 0000000140433D5D: add     rsp, 8
 * 0000000140433D61: mov     eax, 0DADAh
 * 0000000140433D66: test    byte ptr gs:862h, 8
 * 0000000140433D6F: jz      short loc_140433D78
 * 0000000140433D71: mov     al, 20h ; ' '
 * 0000000140433D73: incsspq rax
 * 0000000140433D78: test    word ptr gs:860h, 80h
 * 0000000140433D83: jz      short loc_140433D91
 * 0000000140433D85: xor     eax, eax
 * 0000000140433D87: xor     edx, edx
 * 0000000140433D89: mov     ecx, 1
 * 0000000140433D8E: div     rcx
 * 0000000140433D91: mov     rax, [rbp-50h]
 * 0000000140433D95: mov     r8, [rbp+100h]
 * 0000000140433D9C: mov     r9, [rbp+0D8h]
 * 0000000140433DA3: xor     edx, edx
 * 0000000140433DA5: pxor    xmm0, xmm0
 * 0000000140433DA9: pxor    xmm1, xmm1
 * 0000000140433DAD: pxor    xmm2, xmm2
 * 0000000140433DB1: pxor    xmm3, xmm3
 * 0000000140433DB5: pxor    xmm4, xmm4
 * 0000000140433DB9: pxor    xmm5, xmm5
 * 0000000140433DBD: mov     rcx, [rbp+0E8h]
 * 0000000140433DC4: mov     r11, [rbp+0F8h]
 * 0000000140433DCB: test    cs:KiKvaShadow, 1
 * 0000000140433DD2: jnz     KiKernelSysretExit
 * 0000000140433DD8: mov     rbp, r9
 * 0000000140433DDB: mov     rsp, r8
 * 0000000140433DDE: xor     r9, r9
 * 0000000140433DE1: rdsspq  r9
 * 0000000140433DE6: test    r9, r9
 * 0000000140433DE9: jz      short loc_140433DF3
 * 0000000140433DEB: clrssbsy qword ptr [r9]
 * 0000000140433DF0: xor     r9, r9
 * 0000000140433DF3: test    word ptr gs:860h, 100h
 * 0000000140433DFE: jz      short loc_140433E09
 * 0000000140433E00: verw    word ptr gs:0A02Ah
 * 0000000140433E09: swapgs
 * 0000000140433E0C: sysret
 * 0000000140433E0F: mov     rdx, [rbp+0B8h]
 * 0000000140433E16: mov     [r11+90h], rdx
 * 0000000140433E1D: mov     dl, [rbp-58h]
 * 0000000140433E20: mov     [r11+232h], dl
 * 0000000140433E27: cli
 * 0000000140433E28: mov     rsp, rbp
 * 0000000140433E2B: mov     rbp, [rbp+0D8h]
 * 0000000140433E32: mov     rsp, [rsp+90h+arg_68]
 * 0000000140433E3A: sti
 * 0000000140433E3B: retn
 * 0000000140433E3C: mov     r11, gs:188h
 * 0000000140433E45: mov     rcx, cr8
 * 0000000140433E49: or      cl, [r11+24Ah]
 * 0000000140433E50: or      ecx, [r11+1E4h]
 * 0000000140433E57: jnz     loc_1404341B5
 * 0000000140433E5D: cli
 * 0000000140433E5E: mov     [rbp-50h], rax
 * 0000000140433E62: mov     rcx, gs:188h
 * 0000000140433E6B: test    byte ptr [rcx+0C2h], 3
 * 0000000140433E72: jz      short loc_140433E8F
 * 0000000140433E74: mov     ecx, 1
 * 0000000140433E79: mov     cr8, rcx
 * 0000000140433E7D: sti
 * 0000000140433E7E: call    KiInitiateUserApc
 * 0000000140433E83: mov     ecx, 0
 * 0000000140433E88: mov     cr8, rcx
 * 0000000140433E8C: cli
 * 0000000140433E8D: jmp     short loc_140433E62
 * 0000000140433E8F: test    byte ptr gs:86Ch, 2
 * 0000000140433E98: jz      short loc_140433EA1
 * 0000000140433E9A: xor     ecx, ecx
 * 0000000140433E9C: call    KiUpdateStibpPairing
 * 0000000140433EA1: mov     rcx, gs:188h
 * 0000000140433EAA: test    dword ptr [rcx], 8000000h
 * 0000000140433EB0: jz      short loc_140433EB7
 * 0000000140433EB2: call    KiRestoreSetContextState
 * 0000000140433EB7: mov     rcx, gs:188h
 * 0000000140433EC0: test    byte ptr [rcx+2], 1
 * 0000000140433EC4: jz      short loc_140433ED4
 * 0000000140433EC6: call    KiCopyCounters
 * 0000000140433ECB: mov     rcx, gs:188h
 * 0000000140433ED4: cmp     word ptr [rbp+80h], 0
 * 0000000140433EDC: jz      short loc_140433EE3
 * 0000000140433EDE: call    KiRestoreDebugRegisterState
 * 0000000140433EE3: mov     rcx, gs:188h
 * 0000000140433EEC: bt      dword ptr [rcx+74h], 16h
 * 0000000140433EF1: jnb     short loc_140433F1D
 * 0000000140433EF3: xor     ecx, ecx
 * 0000000140433EF5: rdsspq  rcx
 * 0000000140433EFA: mov     r8, gs:95A8h
 * 0000000140433F03: add     r8, 8
 * 0000000140433F07: cmp     rcx, r8
 * 0000000140433F0A: jnz     short loc_140433F1D
 * 0000000140433F0C: mov     rcx, gs:95A0h
 * 0000000140433F15: rstorssp qword ptr [rcx]
 * 0000000140433F19: saveprevssp
 * 0000000140433F1D: mov     byte ptr gs:856h, 0
 * 0000000140433F26: movzx   eax, word ptr gs:86Ah
 * 0000000140433F2F: cmp     gs:864h, ax
 * 0000000140433F38: jz      short loc_140433F4C
 * 0000000140433F3A: mov     gs:864h, ax
 * 0000000140433F43: mov     ecx, 48h ; 'H'
 * 0000000140433F48: xor     edx, edx
 * 0000000140433F4A: wrmsr
 * 0000000140433F4C: btr     word ptr gs:860h, 2
 * 0000000140433F57: jnb     short loc_140433F67
 * 0000000140433F59: mov     eax, 1
 * 0000000140433F5E: xor     edx, edx
 * 0000000140433F60: mov     ecx, 49h ; 'I'
 * 0000000140433F65: wrmsr
 * 0000000140433F67: btr     word ptr gs:860h, 5
 * 0000000140433F72: jnb     loc_1404340AF
 * 0000000140433F78: call    loc_14043408B
 * 0000000140433F7D: add     rsp, 8
 * 0000000140433F81: call    loc_140434094
 * 0000000140433F86: add     rsp, 8
 * 0000000140433F8A: call    loc_140433F7D
 * 0000000140433F8F: add     rsp, 8
 * 0000000140433F93: call    loc_140433F86
 * 0000000140433F98: add     rsp, 8
 * 0000000140433F9C: call    loc_140433F8F
 * 0000000140433FA1: add     rsp, 8
 * 0000000140433FA5: call    loc_140433F98
 * 0000000140433FAA: add     rsp, 8
 * 0000000140433FAE: call    loc_140433FA1
 * 0000000140433FB3: add     rsp, 8
 * 0000000140433FB7: call    loc_140433FAA
 * 0000000140433FBC: add     rsp, 8
 * 0000000140433FC0: call    loc_140433FB3
 * 0000000140433FC5: add     rsp, 8
 * 0000000140433FC9: call    loc_140433FBC
 * 0000000140433FCE: add     rsp, 8
 * 0000000140433FD2: call    loc_140433FC5
 * 0000000140433FD7: add     rsp, 8
 * 0000000140433FDB: call    loc_140433FCE
 * 0000000140433FE0: add     rsp, 8
 * 0000000140433FE4: call    loc_140433FD7
 * 0000000140433FE9: add     rsp, 8
 * 0000000140433FED: call    loc_140433FE0
 * 0000000140433FF2: add     rsp, 8
 * 0000000140433FF6: call    loc_140433FE9
 * 0000000140433FFB: add     rsp, 8
 * 0000000140433FFF: call    loc_140433FF2
 * 0000000140434004: add     rsp, 8
 * 0000000140434008: call    loc_140433FFB
 * 000000014043400D: add     rsp, 8
 * 0000000140434011: call    loc_140434004
 * 0000000140434016: add     rsp, 8
 * 000000014043401A: call    loc_14043400D
 * 000000014043401F: add     rsp, 8
 * 0000000140434023: call    loc_140434016
 * 0000000140434028: add     rsp, 8
 * 000000014043402C: call    loc_14043401F
 * 0000000140434031: add     rsp, 8
 * 0000000140434035: call    loc_140434028
 * 000000014043403A: add     rsp, 8
 * 000000014043403E: call    loc_140434031
 * 0000000140434043: add     rsp, 8
 * 0000000140434047: call    loc_14043403A
 * 000000014043404C: add     rsp, 8
 * 0000000140434050: call    loc_140434043
 * 0000000140434055: add     rsp, 8
 * 0000000140434059: call    loc_14043404C
 * 000000014043405E: add     rsp, 8
 * 0000000140434062: call    loc_140434055
 * 0000000140434067: add     rsp, 8
 * 000000014043406B: call    loc_14043405E
 * 0000000140434070: add     rsp, 8
 * 0000000140434074: call    loc_140434067
 * 0000000140434079: add     rsp, 8
 * 000000014043407D: call    loc_140434070
 * 0000000140434082: add     rsp, 8
 * 0000000140434086: call    loc_140434079
 * 000000014043408B: add     rsp, 8
 * 000000014043408F: call    loc_140434082
 * 0000000140434094: add     rsp, 8
 * 0000000140434098: mov     eax, 0DADAh
 * 000000014043409D: test    byte ptr gs:862h, 8
 * 00000001404340A6: jz      short loc_1404340AF
 * 00000001404340A8: mov     al, 20h ; ' '
 * 00000001404340AA: incsspq rax
 * 00000001404340AF: test    word ptr gs:860h, 80h
 * 00000001404340BA: jz      short loc_1404340C8
 * 00000001404340BC: xor     eax, eax
 * 00000001404340BE: xor     edx, edx
 * 00000001404340C0: mov     ecx, 1
 * 00000001404340C5: div     rcx
 * 00000001404340C8: ldmxcsr dword ptr [rbp-54h]
 * 00000001404340CC: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001404340D0: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001404340D4: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001404340D8: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001404340DC: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001404340E0: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001404340E4: mov     r11, [rbp-20h]
 * 00000001404340E8: mov     r10, [rbp-28h]
 * 00000001404340EC: mov     r9, [rbp-30h]
 * 00000001404340F0: mov     r8, [rbp-38h]
 * 00000001404340F4: mov     rdx, [rbp-40h]
 * 00000001404340F8: mov     rcx, [rbp-48h]
 * 00000001404340FC: mov     rax, [rbp-50h]
 * 0000000140434100: mov     rsi, [rbp+0D0h]
 * 0000000140434107: mov     rdi, [rbp+0C8h]
 * 000000014043410E: mov     rbx, [rbp+0C0h]
 * 0000000140434115: mov     rsp, rbp
 * 0000000140434118: mov     rbp, [rbp+0D8h]
 * 000000014043411F: add     rsp, 0E8h
 * 0000000140434126: test    cs:KiKvaShadow, 1
 * 000000014043412D: jz      short loc_140434134
 * 000000014043412F: jmp     KiKernelExit
 * 0000000140434134: test    word ptr gs:860h, 100h
 * 000000014043413F: jz      short loc_140434146
 * 0000000140434141: verw    [rsp-158h+arg_170]
 * 0000000140434146: swapgs
 * 0000000140434149: iretq
 * 000000014043414B: cmp     edi, 20h ; ' '
 * 000000014043414E: jnz     short loc_1404341AB
 * 0000000140434150: mov     [rbp-80h], eax
 * 0000000140434153: mov     [rbp-78h], rcx
 * 0000000140434157: mov     [rbp-70h], rdx
 * 000000014043415B: mov     [rbp-68h], r8
 * 000000014043415F: mov     [rbp-60h], r9
 * 0000000140434163: call    KiConvertToGuiThread
 * 0000000140434168: or      eax, eax
 * 000000014043416A: mov     eax, [rbp-80h]
 * 000000014043416D: mov     rcx, [rbp-78h]
 * 0000000140434171: mov     rdx, [rbp-70h]
 * 0000000140434175: mov     r8, [rbp-68h]
 * 0000000140434179: mov     r9, [rbp-60h]
 * 000000014043417D: mov     [rbx+90h], rsp
 * 0000000140434184: jz      KiSystemServiceRepeat
 * 000000014043418A: lea     rdi, xmmword_140D1F160
 * 0000000140434191: mov     esi, [rdi+10h]
 * 0000000140434194: mov     rdi, [rdi]
 * 0000000140434197: cmp     eax, esi
 * 0000000140434199: jnb     short loc_1404341AB
 * 000000014043419B: lea     rdi, [rdi+rsi*4]
 * 000000014043419F: movsx   eax, byte ptr [rdi+rax]
 * 00000001404341A3: or      eax, eax
 * 00000001404341A5: jle     KiSystemServiceExit
 * 00000001404341AB: mov     eax, 0C000001Ch
 * 00000001404341B0: jmp     KiSystemServiceExit
 * 00000001404341B5: mov     ecx, 4Ah ; 'J'
 * 00000001404341BA: xor     r9d, r9d
 * 00000001404341BD: mov     r8, cr8
 * 00000001404341C1: or      r8d, r8d
 * 00000001404341C4: jnz     short loc_1404341DA
 * 00000001404341C6: mov     ecx, 1
 * 00000001404341CB: movzx   r8d, byte ptr [r11+24Ah]
 * 00000001404341D3: mov     r9d, [r11+1E4h]
 * 00000001404341DA: mov     rdx, [rbp+0E8h]
 * 00000001404341E1: mov     r10, rbp
 * 00000001404341E4: call    KiBugCheckDispatch
 * 00000001404341E9: sub     rsp, 50h
 * 00000001404341ED: mov     [rsp+0E0h+var_C0], rcx
 * 00000001404341F2: mov     [rsp+0E0h+var_B8], rdx
 * 00000001404341F7: mov     [rsp+0E0h+var_B0], r8
 * 00000001404341FC: mov     [rsp+0E0h+var_A8], r9
 * 0000000140434201: mov     [rsp+0E0h+var_A0], r10
 * 0000000140434206: mov     rcx, r10
 * 0000000140434209: mov     rdx, rsp
 * 000000014043420C: add     rdx, 20h ; ' '
 * 0000000140434210: mov     r8, 4
 * 0000000140434217: mov     r9, rsp
 * 000000014043421A: add     r9, 70h ; 'p'
 * 000000014043421E: call    KiTrackSystemCallEntry
 * 0000000140434223: mov     [rbp-60h], rax
 * 0000000140434227: mov     rcx, [rsp+0E0h+var_C0]
 * 000000014043422C: mov     rdx, [rsp+0E0h+var_B8]
 * 0000000140434231: mov     r8, [rsp+0E0h+var_B0]
 * 0000000140434236: mov     r9, [rsp+0E0h+var_A8]
 * 000000014043423B: mov     r10, [rsp+0E0h+var_A0]
 * 0000000140434240: add     rsp, 50h
 * 0000000140434244: mov     rax, r10
 * 0000000140434247: call    rax
 * 0000000140434249: nop     dword ptr [rax]
 * 000000014043424C: mov     rcx, [rbp-60h]
 * 0000000140434250: mov     rdx, rax
 * 0000000140434253: call    KiTrackSystemCallExit
 * 0000000140434258: jmp     loc_140433A08
 * 000000014043425D: sub     rsp, 50h
 * 0000000140434261: mov     [rsp+0E0h+var_C0], rcx
 * 0000000140434266: mov     [rsp+0E0h+var_B8], rdx
 * 000000014043426B: mov     [rsp+0E0h+var_B0], r8
 * 0000000140434270: mov     [rsp+0E0h+var_A8], r9
 * 0000000140434275: mov     [rsp+0E0h+var_A0], r10
 * 000000014043427A: mov     rcx, r10
 * 000000014043427D: call    PerfInfoLogSysCallEntry
 * 0000000140434282: mov     rcx, [rsp+0E0h+var_C0]
 * 0000000140434287: mov     rdx, [rsp+0E0h+var_B8]
 * 000000014043428C: mov     r8, [rsp+0E0h+var_B0]
 * 0000000140434291: mov     r9, [rsp+0E0h+var_A8]
 * 0000000140434296: mov     r10, [rsp+0E0h+var_A0]
 * 000000014043429B: add     rsp, 50h
 * 000000014043429F: mov     rax, r10
 * 00000001404342A2: call    rax
 * 00000001404342A4: nop     dword ptr [rax]
 * 00000001404342A7: mov     rcx, rax
 * 00000001404342AA: call    PerfInfoLogSysCallExit
 * 00000001404342AF: jmp     loc_140433A08
 * 00000001404342B4: retn
 */
