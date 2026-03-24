/*
 * XREFs of KiSystemCall64 @ 0x140433B00
 * Callers:
 *     <none>
 * Callees:
 *     KiRestoreDebugRegisterState @ 0x14041EF20 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x14041EFA0 (KiSaveDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x14041FD40 (KiRestoreSetContextState.c)
 *     KiConvertToGuiThread @ 0x140424370 (KiConvertToGuiThread.c)
 *     KiInitiateUserApc @ 0x140424E20 (KiInitiateUserApc.c)
 *     KiSystemCall64 @ 0x140433B00 (KiSystemCall64.c)
 *     KiBugCheckDispatch @ 0x1404348C0 (KiBugCheckDispatch.c)
 *     KiExceptionDispatch @ 0x140434940 (KiExceptionDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140435300 (KiFlushBhbDuringTrapEntryOrExit.c)
 *     KiUpdateStibpPairing @ 0x140460E20 (KiUpdateStibpPairing.c)
 *     KiCopyCounters @ 0x1405741A0 (KiCopyCounters.c)
 *     PerfInfoLogSysCallEntry @ 0x1405FEBC0 (PerfInfoLogSysCallEntry.c)
 *     PerfInfoLogSysCallExit @ 0x1405FEC50 (PerfInfoLogSysCallExit.c)
 *     PsInvokeWin32Callout @ 0x1406AF850 (PsInvokeWin32Callout.c)
 *     KiTrackSystemCallEntry @ 0x140975B90 (KiTrackSystemCallEntry.c)
 *     KiTrackSystemCallExit @ 0x140975CB0 (KiTrackSystemCallExit.c)
 *     PsSyscallProviderDispatch @ 0x1409B46A0 (PsSyscallProviderDispatch.c)
 */

/*
 * Hex-Rays decompilation failed for KiSystemCall64 @ 0x140433B00
 * Reason: Hex-Rays returned no pseudocode for 0x140433B00
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140433B00: swapgs
 * 0000000140433B03: mov     gs:10h, rsp
 * 0000000140433B0C: mov     rsp, gs:1A8h
 * 0000000140433B15: push    2Bh ; '+'
 * 0000000140433B17: push    qword ptr gs:10h
 * 0000000140433B1F: push    r11
 * 0000000140433B21: push    33h ; '3'
 * 0000000140433B23: push    rcx
 * 0000000140433B24: mov     rcx, gs:95A8h
 * 0000000140433B2D: test    rcx, rcx
 * 0000000140433B30: jz      short loc_140433B3E
 * 0000000140433B32: setssbsy
 * 0000000140433B36: rstorssp qword ptr [rcx]
 * 0000000140433B3A: saveprevssp
 * 0000000140433B3E: mov     rcx, r10
 * 0000000140433B41: sub     rsp, 8
 * 0000000140433B45: push    rbp
 * 0000000140433B46: sub     rsp, 158h
 * 0000000140433B4D: lea     rbp, [rsp+190h+var_110]
 * 0000000140433B55: mov     [rbp+0C0h], rbx
 * 0000000140433B5C: mov     [rbp+0C8h], rdi
 * 0000000140433B63: mov     [rbp+0D0h], rsi
 * 0000000140433B6A: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 0000000140433B71: jz      short loc_140433B7F
 * 0000000140433B73: test    byte ptr [rbp+0F0h], 1
 * 0000000140433B7A: jz      short loc_140433B7F
 * 0000000140433B7C: stac
 * 0000000140433B7F: mov     [rbp-50h], rax
 * 0000000140433B83: mov     [rbp-48h], rcx
 * 0000000140433B87: mov     [rbp-40h], rdx
 * 0000000140433B8B: mov     rcx, gs:188h
 * 0000000140433B94: mov     rcx, [rcx+220h]
 * 0000000140433B9B: mov     rcx, [rcx+9E0h]
 * 0000000140433BA2: mov     gs:858h, rcx
 * 0000000140433BAB: mov     cx, gs:850h
 * 0000000140433BB4: mov     gs:852h, cx
 * 0000000140433BBD: mov     cx, gs:860h
 * 0000000140433BC6: mov     gs:854h, cx
 * 0000000140433BCF: movzx   eax, word ptr gs:866h
 * 0000000140433BD8: cmp     gs:864h, ax
 * 0000000140433BE1: jz      short loc_140433BF5
 * 0000000140433BE3: mov     gs:864h, ax
 * 0000000140433BEC: mov     ecx, 48h ; 'H'
 * 0000000140433BF1: xor     edx, edx
 * 0000000140433BF3: wrmsr
 * 0000000140433BF5: movzx   edx, word ptr gs:860h
 * 0000000140433BFE: test    edx, 8
 * 0000000140433C04: jz      short loc_140433C1D
 * 0000000140433C06: mov     eax, 1
 * 0000000140433C0B: xor     edx, edx
 * 0000000140433C0D: mov     ecx, 49h ; 'I'
 * 0000000140433C12: wrmsr
 * 0000000140433C14: movzx   edx, word ptr gs:860h
 * 0000000140433C1D: test    edx, 2
 * 0000000140433C23: jz      loc_140433D60
 * 0000000140433C29: call    loc_140433D3C
 * 0000000140433C2E: add     rsp, 8
 * 0000000140433C32: call    loc_140433D45
 * 0000000140433C37: add     rsp, 8
 * 0000000140433C3B: call    loc_140433C2E
 * 0000000140433C40: add     rsp, 8
 * 0000000140433C44: call    loc_140433C37
 * 0000000140433C49: add     rsp, 8
 * 0000000140433C4D: call    loc_140433C40
 * 0000000140433C52: add     rsp, 8
 * 0000000140433C56: call    loc_140433C49
 * 0000000140433C5B: add     rsp, 8
 * 0000000140433C5F: call    loc_140433C52
 * 0000000140433C64: add     rsp, 8
 * 0000000140433C68: call    loc_140433C5B
 * 0000000140433C6D: add     rsp, 8
 * 0000000140433C71: call    loc_140433C64
 * 0000000140433C76: add     rsp, 8
 * 0000000140433C7A: call    loc_140433C6D
 * 0000000140433C7F: add     rsp, 8
 * 0000000140433C83: call    loc_140433C76
 * 0000000140433C88: add     rsp, 8
 * 0000000140433C8C: call    loc_140433C7F
 * 0000000140433C91: add     rsp, 8
 * 0000000140433C95: call    loc_140433C88
 * 0000000140433C9A: add     rsp, 8
 * 0000000140433C9E: call    loc_140433C91
 * 0000000140433CA3: add     rsp, 8
 * 0000000140433CA7: call    loc_140433C9A
 * 0000000140433CAC: add     rsp, 8
 * 0000000140433CB0: call    loc_140433CA3
 * 0000000140433CB5: add     rsp, 8
 * 0000000140433CB9: call    loc_140433CAC
 * 0000000140433CBE: add     rsp, 8
 * 0000000140433CC2: call    loc_140433CB5
 * 0000000140433CC7: add     rsp, 8
 * 0000000140433CCB: call    loc_140433CBE
 * 0000000140433CD0: add     rsp, 8
 * 0000000140433CD4: call    loc_140433CC7
 * 0000000140433CD9: add     rsp, 8
 * 0000000140433CDD: call    loc_140433CD0
 * 0000000140433CE2: add     rsp, 8
 * 0000000140433CE6: call    loc_140433CD9
 * 0000000140433CEB: add     rsp, 8
 * 0000000140433CEF: call    loc_140433CE2
 * 0000000140433CF4: add     rsp, 8
 * 0000000140433CF8: call    loc_140433CEB
 * 0000000140433CFD: add     rsp, 8
 * 0000000140433D01: call    loc_140433CF4
 * 0000000140433D06: add     rsp, 8
 * 0000000140433D0A: call    loc_140433CFD
 * 0000000140433D0F: add     rsp, 8
 * 0000000140433D13: call    loc_140433D06
 * 0000000140433D18: add     rsp, 8
 * 0000000140433D1C: call    loc_140433D0F
 * 0000000140433D21: add     rsp, 8
 * 0000000140433D25: call    loc_140433D18
 * 0000000140433D2A: add     rsp, 8
 * 0000000140433D2E: call    loc_140433D21
 * 0000000140433D33: add     rsp, 8
 * 0000000140433D37: call    loc_140433D2A
 * 0000000140433D3C: add     rsp, 8
 * 0000000140433D40: call    loc_140433D33
 * 0000000140433D45: add     rsp, 8
 * 0000000140433D49: mov     eax, 0DADAh
 * 0000000140433D4E: test    byte ptr gs:862h, 8
 * 0000000140433D57: jz      short loc_140433D60
 * 0000000140433D59: mov     al, 20h ; ' '
 * 0000000140433D5B: incsspq rax
 * 0000000140433D60: test    edx, 200h
 * 0000000140433D66: jz      short loc_140433D6D
 * 0000000140433D68: call    KiFlushBhbDuringTrapEntryOrExit
 * 0000000140433D6D: lfence
 * 0000000140433D70: mov     byte ptr gs:856h, 0
 * 0000000140433D79: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 0000000140433D80: jz      short KiSystemServiceUser
 * 0000000140433D82: mov     ecx, 6A7h
 * 0000000140433D87: rdmsr
 * 0000000140433D89: cmp     edx, 0
 * 0000000140433D8C: jz      short KiSystemServiceUser
 * 0000000140433D8E: mov     ecx, edx
 * 0000000140433D90: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 0000000140433D96: cmp     edx, ecx
 * 0000000140433D98: jz      short KiSystemServiceUser
 * 0000000140433D9A: mov     ecx, 6A7h
 * 0000000140433D9F: wrmsr
 * 0000000140433DA1: mov     byte ptr [rbp-55h], 2
 * 0000000140433DA5: mov     rbx, gs:188h
 * 0000000140433DAE: prefetchw byte ptr [rbx+90h]
 * 0000000140433DB5: stmxcsr dword ptr [rbp-54h]
 * 0000000140433DB9: ldmxcsr dword ptr gs:180h
 * 0000000140433DC2: cmp     byte ptr [rbx+3], 0
 * 0000000140433DC6: mov     word ptr [rbp+80h], 0
 * 0000000140433DCF: jz      short loc_140433E48
 * 0000000140433DD1: test    byte ptr [rbx+3], 3
 * 0000000140433DD5: mov     [rbp-38h], r8
 * 0000000140433DD9: mov     [rbp-30h], r9
 * 0000000140433DDD: jz      short loc_140433DE4
 * 0000000140433DDF: call    KiSaveDebugRegisterState
 * 0000000140433DE4: test    byte ptr [rbx+3], 24h
 * 0000000140433DE8: jz      short loc_140433E40
 * 0000000140433DEA: mov     [rbp-20h], r10
 * 0000000140433DEE: mov     [rbp-28h], r10
 * 0000000140433DF2: movaps  xmmword ptr [rbp-10h], xmm0
 * 0000000140433DF6: movaps  xmmword ptr [rbp+0], xmm1
 * 0000000140433DFA: movaps  xmmword ptr [rbp+10h], xmm2
 * 0000000140433DFE: movaps  xmmword ptr [rbp+20h], xmm3
 * 0000000140433E02: movaps  xmmword ptr [rbp+30h], xmm4
 * 0000000140433E06: movaps  xmmword ptr [rbp+40h], xmm5
 * 0000000140433E0A: sti
 * 0000000140433E0B: mov     rcx, rsp
 * 0000000140433E0E: call    PsSyscallProviderDispatch
 * 0000000140433E13: cmp     al, 1
 * 0000000140433E15: jz      short loc_140433E40
 * 0000000140433E17: mov     rax, [rbp-50h]
 * 0000000140433E1B: jl      short loc_140433E31
 * 0000000140433E1D: mov     ecx, 0C000001Ch
 * 0000000140433E22: xor     edx, edx
 * 0000000140433E24: mov     r8, [rbp+0E8h]
 * 0000000140433E2B: call    KiExceptionDispatch
 * 0000000140433E30: int     3; Trap to Debugger
 * 0000000140433E31: test    byte ptr [rbx+3], 4
 * 0000000140433E35: jz      KiSystemServiceExit
 * 0000000140433E3B: jmp     KiSystemServiceExitPico
 * 0000000140433E40: mov     r8, [rbp-38h]
 * 0000000140433E44: mov     r9, [rbp-30h]
 * 0000000140433E48: mov     rax, [rbp-50h]
 * 0000000140433E4C: mov     rcx, [rbp-48h]
 * 0000000140433E50: mov     rdx, [rbp-40h]
 * 0000000140433E54: sti
 * 0000000140433E55: mov     [rbx+88h], rcx
 * 0000000140433E5C: mov     [rbx+80h], eax
 * 0000000140433E62: nop     word ptr [rax+rax+00000000h]
 * 0000000140433E70: mov     [rbx+90h], rsp
 * 0000000140433E77: mov     edi, eax
 * 0000000140433E79: shr     edi, 7
 * 0000000140433E7C: and     edi, 20h
 * 0000000140433E7F: and     eax, 0FFFh
 * 0000000140433E84: lea     r10, KeServiceDescriptorTable
 * 0000000140433E8B: lea     r11, KeServiceDescriptorTableShadow
 * 0000000140433E92: test    dword ptr [rbx+78h], 80h
 * 0000000140433E99: jz      short loc_140433EAE
 * 0000000140433E9B: test    dword ptr [rbx+78h], 200000h
 * 0000000140433EA2: jz      short loc_140433EAB
 * 0000000140433EA4: lea     r11, KeServiceDescriptorTableFilter
 * 0000000140433EAB: mov     r10, r11
 * 0000000140433EAE: cmp     eax, [r10+rdi+10h]
 * 0000000140433EB3: jnb     loc_14043474B
 * 0000000140433EB9: mov     r10, [r10+rdi]
 * 0000000140433EBD: movsxd  r11, dword ptr [r10+rax*4]
 * 0000000140433EC1: mov     rax, r11
 * 0000000140433EC4: sar     r11, 4
 * 0000000140433EC8: add     r10, r11
 * 0000000140433ECB: cmp     edi, 20h ; ' '
 * 0000000140433ECE: jnz     short loc_140433F20
 * 0000000140433ED0: mov     r11, [rbx+0F0h]
 * 0000000140433ED7: cmp     dword ptr [r11+1740h], 0
 * 0000000140433EDF: jz      short loc_140433F20
 * 0000000140433EE1: mov     [rbp-50h], rax
 * 0000000140433EE5: mov     [rbp-48h], rcx
 * 0000000140433EE9: mov     [rbp-40h], rdx
 * 0000000140433EED: mov     rbx, r8
 * 0000000140433EF0: mov     rdi, r9
 * 0000000140433EF3: mov     rsi, r10
 * 0000000140433EF6: mov     ecx, 7
 * 0000000140433EFB: xor     edx, edx
 * 0000000140433EFD: xor     r8, r8
 * 0000000140433F00: xor     r9, r9
 * 0000000140433F03: call    PsInvokeWin32Callout
 * 0000000140433F08: mov     rax, [rbp-50h]
 * 0000000140433F0C: mov     rcx, [rbp-48h]
 * 0000000140433F10: mov     rdx, [rbp-40h]
 * 0000000140433F14: mov     r8, rbx
 * 0000000140433F17: mov     r9, rdi
 * 0000000140433F1A: mov     r10, rsi
 * 0000000140433F1D: nop     dword ptr [rax]
 * 0000000140433F20: and     eax, 0Fh
 * 0000000140433F23: jz      KiSystemServiceCopyEnd
 * 0000000140433F29: shl     eax, 3
 * 0000000140433F2C: lea     rsp, [rsp-70h]
 * 0000000140433F31: lea     rdi, [rsp+100h+var_E8]
 * 0000000140433F36: mov     rsi, [rbp+100h]
 * 0000000140433F3D: lea     rsi, [rsi+20h]
 * 0000000140433F41: test    byte ptr [rbp+0F0h], 1
 * 0000000140433F48: jz      short loc_140433F60
 * 0000000140433F4A: cmp     rsi, cs:MmUserProbeAddress
 * 0000000140433F51: cmovnb  rsi, cs:MmUserProbeAddress
 * 0000000140433F59: nop     dword ptr [rax+00000000h]
 * 0000000140433F60: lea     r11, KiSystemServiceCopyEnd
 * 0000000140433F67: sub     r11, rax
 * 0000000140433F6A: jmp     r11
 * 0000000140433F70: mov     rax, [rsi+70h]
 * 0000000140433F74: mov     [rdi+70h], rax
 * 0000000140433F78: mov     rax, [rsi+68h]
 * 0000000140433F7C: mov     [rdi+68h], rax
 * 0000000140433F80: mov     rax, [rsi+60h]
 * 0000000140433F84: mov     [rdi+60h], rax
 * 0000000140433F88: mov     rax, [rsi+58h]
 * 0000000140433F8C: mov     [rdi+58h], rax
 * 0000000140433F90: mov     rax, [rsi+50h]
 * 0000000140433F94: mov     [rdi+50h], rax
 * 0000000140433F98: mov     rax, [rsi+48h]
 * 0000000140433F9C: mov     [rdi+48h], rax
 * 0000000140433FA0: mov     rax, [rsi+40h]
 * 0000000140433FA4: mov     [rdi+40h], rax
 * 0000000140433FA8: mov     rax, [rsi+38h]
 * 0000000140433FAC: mov     [rdi+38h], rax
 * 0000000140433FB0: mov     rax, [rsi+30h]
 * 0000000140433FB4: mov     [rdi+30h], rax
 * 0000000140433FB8: mov     rax, [rsi+28h]
 * 0000000140433FBC: mov     [rdi+28h], rax
 * 0000000140433FC0: mov     rax, [rsi+20h]
 * 0000000140433FC4: mov     [rdi+20h], rax
 * 0000000140433FC8: mov     rax, [rsi+18h]
 * 0000000140433FCC: mov     [rdi+18h], rax
 * 0000000140433FD0: mov     rax, [rsi+10h]
 * 0000000140433FD4: mov     [rdi+10h], rax
 * 0000000140433FD8: mov     rax, [rsi+8]
 * 0000000140433FDC: mov     [rdi+8], rax
 * 0000000140433FE0: test    cs:KiDynamicTraceMask, 1
 * 0000000140433FEA: jnz     loc_1404347E9
 * 0000000140433FF0: test    dword ptr cs:PerfGlobalGroupMask+8, 40h
 * 0000000140433FFA: jnz     loc_14043485D
 * 0000000140434000: mov     rax, r10
 * 0000000140434003: call    rax
 * 0000000140434005: nop     dword ptr [rax]
 * 0000000140434008: inc     dword ptr gs:2EB8h
 * 0000000140434010: mov     rbx, [rbp+0C0h]
 * 0000000140434017: mov     rdi, [rbp+0C8h]
 * 000000014043401E: mov     rsi, [rbp+0D0h]
 * 0000000140434025: mov     r11, gs:188h
 * 000000014043402E: test    byte ptr [rbp+0F0h], 1
 * 0000000140434035: jz      loc_14043440F
 * 000000014043403B: mov     rcx, cr8
 * 000000014043403F: or      cl, [r11+24Ah]
 * 0000000140434046: or      ecx, [r11+1E4h]
 * 000000014043404D: jnz     loc_1404347B5
 * 0000000140434053: cli
 * 0000000140434054: mov     rcx, gs:188h
 * 000000014043405D: test    byte ptr [rcx+0C2h], 3
 * 0000000140434064: jz      short loc_1404340BF
 * 0000000140434066: mov     [rbp-50h], rax
 * 000000014043406A: xor     eax, eax
 * 000000014043406C: mov     [rbp-48h], rax
 * 0000000140434070: mov     [rbp-40h], rax
 * 0000000140434074: mov     [rbp-38h], rax
 * 0000000140434078: mov     [rbp-30h], rax
 * 000000014043407C: mov     [rbp-28h], rax
 * 0000000140434080: mov     [rbp-20h], rax
 * 0000000140434084: pxor    xmm0, xmm0
 * 0000000140434088: movaps  xmmword ptr [rbp-10h], xmm0
 * 000000014043408C: movaps  xmmword ptr [rbp+0], xmm0
 * 0000000140434090: movaps  xmmword ptr [rbp+10h], xmm0
 * 0000000140434094: movaps  xmmword ptr [rbp+20h], xmm0
 * 0000000140434098: movaps  xmmword ptr [rbp+30h], xmm0
 * 000000014043409C: movaps  xmmword ptr [rbp+40h], xmm0
 * 00000001404340A0: mov     ecx, 1
 * 00000001404340A5: mov     cr8, rcx
 * 00000001404340A9: sti
 * 00000001404340AA: call    KiInitiateUserApc
 * 00000001404340AF: cli
 * 00000001404340B0: mov     ecx, 0
 * 00000001404340B5: mov     cr8, rcx
 * 00000001404340B9: mov     rax, [rbp-50h]
 * 00000001404340BD: jmp     short loc_140434054
 * 00000001404340BF: test    byte ptr gs:86Ch, 2
 * 00000001404340C8: jz      short loc_1404340D9
 * 00000001404340CA: mov     [rbp-50h], rax
 * 00000001404340CE: xor     ecx, ecx
 * 00000001404340D0: call    KiUpdateStibpPairing
 * 00000001404340D5: mov     rax, [rbp-50h]
 * 00000001404340D9: mov     rcx, gs:188h
 * 00000001404340E2: test    dword ptr [rcx], 8000000h
 * 00000001404340E8: jz      short loc_140434129
 * 00000001404340EA: mov     [rbp-50h], rax
 * 00000001404340EE: xor     eax, eax
 * 00000001404340F0: mov     [rbp-48h], rax
 * 00000001404340F4: mov     [rbp-40h], rax
 * 00000001404340F8: mov     [rbp-38h], rax
 * 00000001404340FC: mov     [rbp-30h], rax
 * 0000000140434100: mov     [rbp-28h], rax
 * 0000000140434104: mov     [rbp-20h], rax
 * 0000000140434108: pxor    xmm0, xmm0
 * 000000014043410C: movaps  xmmword ptr [rbp-10h], xmm0
 * 0000000140434110: movaps  xmmword ptr [rbp+0], xmm0
 * 0000000140434114: movaps  xmmword ptr [rbp+10h], xmm0
 * 0000000140434118: movaps  xmmword ptr [rbp+20h], xmm0
 * 000000014043411C: movaps  xmmword ptr [rbp+30h], xmm0
 * 0000000140434120: movaps  xmmword ptr [rbp+40h], xmm0
 * 0000000140434124: call    KiRestoreSetContextState
 * 0000000140434129: mov     rcx, gs:188h
 * 0000000140434132: test    dword ptr [rcx], 10000h
 * 0000000140434138: jz      short loc_140434156
 * 000000014043413A: mov     [rbp-50h], rax
 * 000000014043413E: test    byte ptr [rcx+2], 1
 * 0000000140434142: jz      short loc_140434152
 * 0000000140434144: call    KiCopyCounters
 * 0000000140434149: mov     rcx, gs:188h
 * 0000000140434152: mov     rax, [rbp-50h]
 * 0000000140434156: ldmxcsr dword ptr [rbp-54h]
 * 000000014043415A: xor     r10, r10
 * 000000014043415D: cmp     word ptr [rbp+80h], 0
 * 0000000140434165: jz      short loc_1404341A8
 * 0000000140434167: mov     [rbp-50h], rax
 * 000000014043416B: call    KiRestoreDebugRegisterState
 * 0000000140434170: mov     rax, gs:188h
 * 0000000140434179: mov     rax, [rax+0B8h]
 * 0000000140434180: mov     rax, [rax+3D8h]
 * 0000000140434187: or      rax, rax
 * 000000014043418A: jz      short loc_1404341A4
 * 000000014043418C: cmp     word ptr [rbp+0F0h], 33h ; '3'
 * 0000000140434194: jnz     short loc_1404341A4
 * 0000000140434196: mov     r10, [rbp+0E8h]
 * 000000014043419D: mov     [rbp+0E8h], rax
 * 00000001404341A4: mov     rax, [rbp-50h]
 * 00000001404341A8: mov     rcx, gs:188h
 * 00000001404341B1: bt      dword ptr [rcx+74h], 16h
 * 00000001404341B6: jnb     short loc_1404341E2
 * 00000001404341B8: xor     ecx, ecx
 * 00000001404341BA: rdsspq  rcx
 * 00000001404341BF: mov     r8, gs:95A8h
 * 00000001404341C8: add     r8, 8
 * 00000001404341CC: cmp     rcx, r8
 * 00000001404341CF: jnz     short loc_1404341E2
 * 00000001404341D1: mov     rcx, gs:95A0h
 * 00000001404341DA: rstorssp qword ptr [rcx]
 * 00000001404341DE: saveprevssp
 * 00000001404341E2: mov     [rbp-50h], rax
 * 00000001404341E6: mov     byte ptr gs:856h, 0
 * 00000001404341EF: movzx   eax, word ptr gs:86Ah
 * 00000001404341F8: cmp     gs:864h, ax
 * 0000000140434201: jz      short loc_140434215
 * 0000000140434203: mov     gs:864h, ax
 * 000000014043420C: mov     ecx, 48h ; 'H'
 * 0000000140434211: xor     edx, edx
 * 0000000140434213: wrmsr
 * 0000000140434215: btr     word ptr gs:860h, 2
 * 0000000140434220: jnb     short loc_140434230
 * 0000000140434222: mov     eax, 1
 * 0000000140434227: xor     edx, edx
 * 0000000140434229: mov     ecx, 49h ; 'I'
 * 000000014043422E: wrmsr
 * 0000000140434230: btr     word ptr gs:860h, 5
 * 000000014043423B: jnb     loc_140434378
 * 0000000140434241: call    loc_140434354
 * 0000000140434246: add     rsp, 8
 * 000000014043424A: call    loc_14043435D
 * 000000014043424F: add     rsp, 8
 * 0000000140434253: call    loc_140434246
 * 0000000140434258: add     rsp, 8
 * 000000014043425C: call    loc_14043424F
 * 0000000140434261: add     rsp, 8
 * 0000000140434265: call    loc_140434258
 * 000000014043426A: add     rsp, 8
 * 000000014043426E: call    loc_140434261
 * 0000000140434273: add     rsp, 8
 * 0000000140434277: call    loc_14043426A
 * 000000014043427C: add     rsp, 8
 * 0000000140434280: call    loc_140434273
 * 0000000140434285: add     rsp, 8
 * 0000000140434289: call    loc_14043427C
 * 000000014043428E: add     rsp, 8
 * 0000000140434292: call    loc_140434285
 * 0000000140434297: add     rsp, 8
 * 000000014043429B: call    loc_14043428E
 * 00000001404342A0: add     rsp, 8
 * 00000001404342A4: call    loc_140434297
 * 00000001404342A9: add     rsp, 8
 * 00000001404342AD: call    loc_1404342A0
 * 00000001404342B2: add     rsp, 8
 * 00000001404342B6: call    loc_1404342A9
 * 00000001404342BB: add     rsp, 8
 * 00000001404342BF: call    loc_1404342B2
 * 00000001404342C4: add     rsp, 8
 * 00000001404342C8: call    loc_1404342BB
 * 00000001404342CD: add     rsp, 8
 * 00000001404342D1: call    loc_1404342C4
 * 00000001404342D6: add     rsp, 8
 * 00000001404342DA: call    loc_1404342CD
 * 00000001404342DF: add     rsp, 8
 * 00000001404342E3: call    loc_1404342D6
 * 00000001404342E8: add     rsp, 8
 * 00000001404342EC: call    loc_1404342DF
 * 00000001404342F1: add     rsp, 8
 * 00000001404342F5: call    loc_1404342E8
 * 00000001404342FA: add     rsp, 8
 * 00000001404342FE: call    loc_1404342F1
 * 0000000140434303: add     rsp, 8
 * 0000000140434307: call    loc_1404342FA
 * 000000014043430C: add     rsp, 8
 * 0000000140434310: call    loc_140434303
 * 0000000140434315: add     rsp, 8
 * 0000000140434319: call    loc_14043430C
 * 000000014043431E: add     rsp, 8
 * 0000000140434322: call    loc_140434315
 * 0000000140434327: add     rsp, 8
 * 000000014043432B: call    loc_14043431E
 * 0000000140434330: add     rsp, 8
 * 0000000140434334: call    loc_140434327
 * 0000000140434339: add     rsp, 8
 * 000000014043433D: call    loc_140434330
 * 0000000140434342: add     rsp, 8
 * 0000000140434346: call    loc_140434339
 * 000000014043434B: add     rsp, 8
 * 000000014043434F: call    loc_140434342
 * 0000000140434354: add     rsp, 8
 * 0000000140434358: call    loc_14043434B
 * 000000014043435D: add     rsp, 8
 * 0000000140434361: mov     eax, 0DADAh
 * 0000000140434366: test    byte ptr gs:862h, 8
 * 000000014043436F: jz      short loc_140434378
 * 0000000140434371: mov     al, 20h ; ' '
 * 0000000140434373: incsspq rax
 * 0000000140434378: test    word ptr gs:860h, 80h
 * 0000000140434383: jz      short loc_140434391
 * 0000000140434385: xor     eax, eax
 * 0000000140434387: xor     edx, edx
 * 0000000140434389: mov     ecx, 1
 * 000000014043438E: div     rcx
 * 0000000140434391: mov     rax, [rbp-50h]
 * 0000000140434395: mov     r8, [rbp+100h]
 * 000000014043439C: mov     r9, [rbp+0D8h]
 * 00000001404343A3: xor     edx, edx
 * 00000001404343A5: pxor    xmm0, xmm0
 * 00000001404343A9: pxor    xmm1, xmm1
 * 00000001404343AD: pxor    xmm2, xmm2
 * 00000001404343B1: pxor    xmm3, xmm3
 * 00000001404343B5: pxor    xmm4, xmm4
 * 00000001404343B9: pxor    xmm5, xmm5
 * 00000001404343BD: mov     rcx, [rbp+0E8h]
 * 00000001404343C4: mov     r11, [rbp+0F8h]
 * 00000001404343CB: test    cs:KiKvaShadow, 1
 * 00000001404343D2: jnz     KiKernelSysretExit
 * 00000001404343D8: mov     rbp, r9
 * 00000001404343DB: mov     rsp, r8
 * 00000001404343DE: xor     r9, r9
 * 00000001404343E1: rdsspq  r9
 * 00000001404343E6: test    r9, r9
 * 00000001404343E9: jz      short loc_1404343F3
 * 00000001404343EB: clrssbsy qword ptr [r9]
 * 00000001404343F0: xor     r9, r9
 * 00000001404343F3: test    word ptr gs:860h, 100h
 * 00000001404343FE: jz      short loc_140434409
 * 0000000140434400: verw    word ptr gs:0A02Ah
 * 0000000140434409: swapgs
 * 000000014043440C: sysret
 * 000000014043440F: mov     rdx, [rbp+0B8h]
 * 0000000140434416: mov     [r11+90h], rdx
 * 000000014043441D: mov     dl, [rbp-58h]
 * 0000000140434420: mov     [r11+232h], dl
 * 0000000140434427: cli
 * 0000000140434428: mov     rsp, rbp
 * 000000014043442B: mov     rbp, [rbp+0D8h]
 * 0000000140434432: mov     rsp, [rsp+90h+arg_68]
 * 000000014043443A: sti
 * 000000014043443B: retn
 * 000000014043443C: mov     r11, gs:188h
 * 0000000140434445: mov     rcx, cr8
 * 0000000140434449: or      cl, [r11+24Ah]
 * 0000000140434450: or      ecx, [r11+1E4h]
 * 0000000140434457: jnz     loc_1404347B5
 * 000000014043445D: cli
 * 000000014043445E: mov     [rbp-50h], rax
 * 0000000140434462: mov     rcx, gs:188h
 * 000000014043446B: test    byte ptr [rcx+0C2h], 3
 * 0000000140434472: jz      short loc_14043448F
 * 0000000140434474: mov     ecx, 1
 * 0000000140434479: mov     cr8, rcx
 * 000000014043447D: sti
 * 000000014043447E: call    KiInitiateUserApc
 * 0000000140434483: mov     ecx, 0
 * 0000000140434488: mov     cr8, rcx
 * 000000014043448C: cli
 * 000000014043448D: jmp     short loc_140434462
 * 000000014043448F: test    byte ptr gs:86Ch, 2
 * 0000000140434498: jz      short loc_1404344A1
 * 000000014043449A: xor     ecx, ecx
 * 000000014043449C: call    KiUpdateStibpPairing
 * 00000001404344A1: mov     rcx, gs:188h
 * 00000001404344AA: test    dword ptr [rcx], 8000000h
 * 00000001404344B0: jz      short loc_1404344B7
 * 00000001404344B2: call    KiRestoreSetContextState
 * 00000001404344B7: mov     rcx, gs:188h
 * 00000001404344C0: test    byte ptr [rcx+2], 1
 * 00000001404344C4: jz      short loc_1404344D4
 * 00000001404344C6: call    KiCopyCounters
 * 00000001404344CB: mov     rcx, gs:188h
 * 00000001404344D4: cmp     word ptr [rbp+80h], 0
 * 00000001404344DC: jz      short loc_1404344E3
 * 00000001404344DE: call    KiRestoreDebugRegisterState
 * 00000001404344E3: mov     rcx, gs:188h
 * 00000001404344EC: bt      dword ptr [rcx+74h], 16h
 * 00000001404344F1: jnb     short loc_14043451D
 * 00000001404344F3: xor     ecx, ecx
 * 00000001404344F5: rdsspq  rcx
 * 00000001404344FA: mov     r8, gs:95A8h
 * 0000000140434503: add     r8, 8
 * 0000000140434507: cmp     rcx, r8
 * 000000014043450A: jnz     short loc_14043451D
 * 000000014043450C: mov     rcx, gs:95A0h
 * 0000000140434515: rstorssp qword ptr [rcx]
 * 0000000140434519: saveprevssp
 * 000000014043451D: mov     byte ptr gs:856h, 0
 * 0000000140434526: movzx   eax, word ptr gs:86Ah
 * 000000014043452F: cmp     gs:864h, ax
 * 0000000140434538: jz      short loc_14043454C
 * 000000014043453A: mov     gs:864h, ax
 * 0000000140434543: mov     ecx, 48h ; 'H'
 * 0000000140434548: xor     edx, edx
 * 000000014043454A: wrmsr
 * 000000014043454C: btr     word ptr gs:860h, 2
 * 0000000140434557: jnb     short loc_140434567
 * 0000000140434559: mov     eax, 1
 * 000000014043455E: xor     edx, edx
 * 0000000140434560: mov     ecx, 49h ; 'I'
 * 0000000140434565: wrmsr
 * 0000000140434567: btr     word ptr gs:860h, 5
 * 0000000140434572: jnb     loc_1404346AF
 * 0000000140434578: call    loc_14043468B
 * 000000014043457D: add     rsp, 8
 * 0000000140434581: call    loc_140434694
 * 0000000140434586: add     rsp, 8
 * 000000014043458A: call    loc_14043457D
 * 000000014043458F: add     rsp, 8
 * 0000000140434593: call    loc_140434586
 * 0000000140434598: add     rsp, 8
 * 000000014043459C: call    loc_14043458F
 * 00000001404345A1: add     rsp, 8
 * 00000001404345A5: call    loc_140434598
 * 00000001404345AA: add     rsp, 8
 * 00000001404345AE: call    loc_1404345A1
 * 00000001404345B3: add     rsp, 8
 * 00000001404345B7: call    loc_1404345AA
 * 00000001404345BC: add     rsp, 8
 * 00000001404345C0: call    loc_1404345B3
 * 00000001404345C5: add     rsp, 8
 * 00000001404345C9: call    loc_1404345BC
 * 00000001404345CE: add     rsp, 8
 * 00000001404345D2: call    loc_1404345C5
 * 00000001404345D7: add     rsp, 8
 * 00000001404345DB: call    loc_1404345CE
 * 00000001404345E0: add     rsp, 8
 * 00000001404345E4: call    loc_1404345D7
 * 00000001404345E9: add     rsp, 8
 * 00000001404345ED: call    loc_1404345E0
 * 00000001404345F2: add     rsp, 8
 * 00000001404345F6: call    loc_1404345E9
 * 00000001404345FB: add     rsp, 8
 * 00000001404345FF: call    loc_1404345F2
 * 0000000140434604: add     rsp, 8
 * 0000000140434608: call    loc_1404345FB
 * 000000014043460D: add     rsp, 8
 * 0000000140434611: call    loc_140434604
 * 0000000140434616: add     rsp, 8
 * 000000014043461A: call    loc_14043460D
 * 000000014043461F: add     rsp, 8
 * 0000000140434623: call    loc_140434616
 * 0000000140434628: add     rsp, 8
 * 000000014043462C: call    loc_14043461F
 * 0000000140434631: add     rsp, 8
 * 0000000140434635: call    loc_140434628
 * 000000014043463A: add     rsp, 8
 * 000000014043463E: call    loc_140434631
 * 0000000140434643: add     rsp, 8
 * 0000000140434647: call    loc_14043463A
 * 000000014043464C: add     rsp, 8
 * 0000000140434650: call    loc_140434643
 * 0000000140434655: add     rsp, 8
 * 0000000140434659: call    loc_14043464C
 * 000000014043465E: add     rsp, 8
 * 0000000140434662: call    loc_140434655
 * 0000000140434667: add     rsp, 8
 * 000000014043466B: call    loc_14043465E
 * 0000000140434670: add     rsp, 8
 * 0000000140434674: call    loc_140434667
 * 0000000140434679: add     rsp, 8
 * 000000014043467D: call    loc_140434670
 * 0000000140434682: add     rsp, 8
 * 0000000140434686: call    loc_140434679
 * 000000014043468B: add     rsp, 8
 * 000000014043468F: call    loc_140434682
 * 0000000140434694: add     rsp, 8
 * 0000000140434698: mov     eax, 0DADAh
 * 000000014043469D: test    byte ptr gs:862h, 8
 * 00000001404346A6: jz      short loc_1404346AF
 * 00000001404346A8: mov     al, 20h ; ' '
 * 00000001404346AA: incsspq rax
 * 00000001404346AF: test    word ptr gs:860h, 80h
 * 00000001404346BA: jz      short loc_1404346C8
 * 00000001404346BC: xor     eax, eax
 * 00000001404346BE: xor     edx, edx
 * 00000001404346C0: mov     ecx, 1
 * 00000001404346C5: div     rcx
 * 00000001404346C8: ldmxcsr dword ptr [rbp-54h]
 * 00000001404346CC: movaps  xmm0, xmmword ptr [rbp-10h]
 * 00000001404346D0: movaps  xmm1, xmmword ptr [rbp+0]
 * 00000001404346D4: movaps  xmm2, xmmword ptr [rbp+10h]
 * 00000001404346D8: movaps  xmm3, xmmword ptr [rbp+20h]
 * 00000001404346DC: movaps  xmm4, xmmword ptr [rbp+30h]
 * 00000001404346E0: movaps  xmm5, xmmword ptr [rbp+40h]
 * 00000001404346E4: mov     r11, [rbp-20h]
 * 00000001404346E8: mov     r10, [rbp-28h]
 * 00000001404346EC: mov     r9, [rbp-30h]
 * 00000001404346F0: mov     r8, [rbp-38h]
 * 00000001404346F4: mov     rdx, [rbp-40h]
 * 00000001404346F8: mov     rcx, [rbp-48h]
 * 00000001404346FC: mov     rax, [rbp-50h]
 * 0000000140434700: mov     rsi, [rbp+0D0h]
 * 0000000140434707: mov     rdi, [rbp+0C8h]
 * 000000014043470E: mov     rbx, [rbp+0C0h]
 * 0000000140434715: mov     rsp, rbp
 * 0000000140434718: mov     rbp, [rbp+0D8h]
 * 000000014043471F: add     rsp, 0E8h
 * 0000000140434726: test    cs:KiKvaShadow, 1
 * 000000014043472D: jz      short loc_140434734
 * 000000014043472F: jmp     KiKernelExit
 * 0000000140434734: test    word ptr gs:860h, 100h
 * 000000014043473F: jz      short loc_140434746
 * 0000000140434741: verw    [rsp-158h+arg_170]
 * 0000000140434746: swapgs
 * 0000000140434749: iretq
 * 000000014043474B: cmp     edi, 20h ; ' '
 * 000000014043474E: jnz     short loc_1404347AB
 * 0000000140434750: mov     [rbp-80h], eax
 * 0000000140434753: mov     [rbp-78h], rcx
 * 0000000140434757: mov     [rbp-70h], rdx
 * 000000014043475B: mov     [rbp-68h], r8
 * 000000014043475F: mov     [rbp-60h], r9
 * 0000000140434763: call    KiConvertToGuiThread
 * 0000000140434768: or      eax, eax
 * 000000014043476A: mov     eax, [rbp-80h]
 * 000000014043476D: mov     rcx, [rbp-78h]
 * 0000000140434771: mov     rdx, [rbp-70h]
 * 0000000140434775: mov     r8, [rbp-68h]
 * 0000000140434779: mov     r9, [rbp-60h]
 * 000000014043477D: mov     [rbx+90h], rsp
 * 0000000140434784: jz      KiSystemServiceRepeat
 * 000000014043478A: lea     rdi, xmmword_140D1F160
 * 0000000140434791: mov     esi, [rdi+10h]
 * 0000000140434794: mov     rdi, [rdi]
 * 0000000140434797: cmp     eax, esi
 * 0000000140434799: jnb     short loc_1404347AB
 * 000000014043479B: lea     rdi, [rdi+rsi*4]
 * 000000014043479F: movsx   eax, byte ptr [rdi+rax]
 * 00000001404347A3: or      eax, eax
 * 00000001404347A5: jle     KiSystemServiceExit
 * 00000001404347AB: mov     eax, 0C000001Ch
 * 00000001404347B0: jmp     KiSystemServiceExit
 * 00000001404347B5: mov     ecx, 4Ah ; 'J'
 * 00000001404347BA: xor     r9d, r9d
 * 00000001404347BD: mov     r8, cr8
 * 00000001404347C1: or      r8d, r8d
 * 00000001404347C4: jnz     short loc_1404347DA
 * 00000001404347C6: mov     ecx, 1
 * 00000001404347CB: movzx   r8d, byte ptr [r11+24Ah]
 * 00000001404347D3: mov     r9d, [r11+1E4h]
 * 00000001404347DA: mov     rdx, [rbp+0E8h]
 * 00000001404347E1: mov     r10, rbp
 * 00000001404347E4: call    KiBugCheckDispatch
 * 00000001404347E9: sub     rsp, 50h
 * 00000001404347ED: mov     [rsp+0E0h+var_C0], rcx
 * 00000001404347F2: mov     [rsp+0E0h+var_B8], rdx
 * 00000001404347F7: mov     [rsp+0E0h+var_B0], r8
 * 00000001404347FC: mov     [rsp+0E0h+var_A8], r9
 * 0000000140434801: mov     [rsp+0E0h+var_A0], r10
 * 0000000140434806: mov     rcx, r10
 * 0000000140434809: mov     rdx, rsp
 * 000000014043480C: add     rdx, 20h ; ' '
 * 0000000140434810: mov     r8, 4
 * 0000000140434817: mov     r9, rsp
 * 000000014043481A: add     r9, 70h ; 'p'
 * 000000014043481E: call    KiTrackSystemCallEntry
 * 0000000140434823: mov     [rbp-60h], rax
 * 0000000140434827: mov     rcx, [rsp+0E0h+var_C0]
 * 000000014043482C: mov     rdx, [rsp+0E0h+var_B8]
 * 0000000140434831: mov     r8, [rsp+0E0h+var_B0]
 * 0000000140434836: mov     r9, [rsp+0E0h+var_A8]
 * 000000014043483B: mov     r10, [rsp+0E0h+var_A0]
 * 0000000140434840: add     rsp, 50h
 * 0000000140434844: mov     rax, r10
 * 0000000140434847: call    rax
 * 0000000140434849: nop     dword ptr [rax]
 * 000000014043484C: mov     rcx, [rbp-60h]
 * 0000000140434850: mov     rdx, rax
 * 0000000140434853: call    KiTrackSystemCallExit
 * 0000000140434858: jmp     loc_140434008
 * 000000014043485D: sub     rsp, 50h
 * 0000000140434861: mov     [rsp+0E0h+var_C0], rcx
 * 0000000140434866: mov     [rsp+0E0h+var_B8], rdx
 * 000000014043486B: mov     [rsp+0E0h+var_B0], r8
 * 0000000140434870: mov     [rsp+0E0h+var_A8], r9
 * 0000000140434875: mov     [rsp+0E0h+var_A0], r10
 * 000000014043487A: mov     rcx, r10
 * 000000014043487D: call    PerfInfoLogSysCallEntry
 * 0000000140434882: mov     rcx, [rsp+0E0h+var_C0]
 * 0000000140434887: mov     rdx, [rsp+0E0h+var_B8]
 * 000000014043488C: mov     r8, [rsp+0E0h+var_B0]
 * 0000000140434891: mov     r9, [rsp+0E0h+var_A8]
 * 0000000140434896: mov     r10, [rsp+0E0h+var_A0]
 * 000000014043489B: add     rsp, 50h
 * 000000014043489F: mov     rax, r10
 * 00000001404348A2: call    rax
 * 00000001404348A4: nop     dword ptr [rax]
 * 00000001404348A7: mov     rcx, rax
 * 00000001404348AA: call    PerfInfoLogSysCallExit
 * 00000001404348AF: jmp     loc_140434008
 * 00000001404348B4: retn
 */
