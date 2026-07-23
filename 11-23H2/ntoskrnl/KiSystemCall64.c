/*
 * XREFs of KiSystemCall64 @ 0x140433F00
 * Callers:
 *     <none>
 * Callees:
 *     KiRestoreDebugRegisterState @ 0x14041F2B0 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x14041F330 (KiSaveDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1404200D0 (KiRestoreSetContextState.c)
 *     KiConvertToGuiThread @ 0x140424700 (KiConvertToGuiThread.c)
 *     KiInitiateUserApc @ 0x1404251B0 (KiInitiateUserApc.c)
 *     KiSystemCall64 @ 0x140433F00 (KiSystemCall64.c)
 *     KiBugCheckDispatch @ 0x140434CC0 (KiBugCheckDispatch.c)
 *     KiExceptionDispatch @ 0x140434D40 (KiExceptionDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140435700 (KiFlushBhbDuringTrapEntryOrExit.c)
 *     KiUpdateStibpPairing @ 0x140461220 (KiUpdateStibpPairing.c)
 *     KiCopyCounters @ 0x1405746E0 (KiCopyCounters.c)
 *     PerfInfoLogSysCallEntry @ 0x1405FF130 (PerfInfoLogSysCallEntry.c)
 *     PerfInfoLogSysCallExit @ 0x1405FF1C0 (PerfInfoLogSysCallExit.c)
 *     PsInvokeWin32Callout @ 0x1406AF880 (PsInvokeWin32Callout.c)
 *     KiTrackSystemCallEntry @ 0x140975D90 (KiTrackSystemCallEntry.c)
 *     KiTrackSystemCallExit @ 0x140975EB0 (KiTrackSystemCallExit.c)
 *     PsSyscallProviderDispatch @ 0x1409B48A0 (PsSyscallProviderDispatch.c)
 */

/*
 * Hex-Rays decompilation failed for KiSystemCall64 @ 0x140433F00
 * Reason: Hex-Rays returned no pseudocode for 0x140433F00
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140433F00: swapgs
 * 0000000140433F03: mov     gs:10h, rsp
 * 0000000140433F0C: mov     rsp, gs:1A8h
 * 0000000140433F15: push    2Bh ; '+'
 * 0000000140433F17: push    qword ptr gs:10h
 * 0000000140433F1F: push    r11
 * 0000000140433F21: push    33h ; '3'
 * 0000000140433F23: push    rcx
 * 0000000140433F24: mov     rcx, gs:95A8h
 * 0000000140433F2D: test    rcx, rcx
 * 0000000140433F30: jz      short loc_140433F3E
 * 0000000140433F32: setssbsy
 * 0000000140433F36: rstorssp qword ptr [rcx]
 * 0000000140433F3A: saveprevssp
 * 0000000140433F3E: mov     rcx, r10
 * 0000000140433F41: sub     rsp, 8
 * 0000000140433F45: push    rbp
 * 0000000140433F46: sub     rsp, 158h
 * 0000000140433F4D: lea     rbp, [rsp+190h+var_110]
 * 0000000140433F55: mov     [rbp+0C0h], rbx
 * 0000000140433F5C: mov     [rbp+0C8h], rdi
 * 0000000140433F63: mov     [rbp+0D0h], rsi
 * 0000000140433F6A: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 0000000140433F71: jz      short loc_140433F7F
 * 0000000140433F73: test    byte ptr [rbp+0F0h], 1
 * 0000000140433F7A: jz      short loc_140433F7F
 * 0000000140433F7C: stac
 * 0000000140433F7F: mov     [rbp-50h], rax
 * 0000000140433F83: mov     [rbp-48h], rcx
 * 0000000140433F87: mov     [rbp-40h], rdx
 * 0000000140433F8B: mov     rcx, gs:188h
 * 0000000140433F94: mov     rcx, [rcx+220h]
 * 0000000140433F9B: mov     rcx, [rcx+9E0h]
 * 0000000140433FA2: mov     gs:858h, rcx
 * 0000000140433FAB: mov     cx, gs:850h
 * 0000000140433FB4: mov     gs:852h, cx
 * 0000000140433FBD: mov     cx, gs:860h
 * 0000000140433FC6: mov     gs:854h, cx
 * 0000000140433FCF: movzx   eax, word ptr gs:866h
 * 0000000140433FD8: cmp     gs:864h, ax
 * 0000000140433FE1: jz      short loc_140433FF5
 * 0000000140433FE3: mov     gs:864h, ax
 * 0000000140433FEC: mov     ecx, 48h ; 'H'
 * 0000000140433FF1: xor     edx, edx
 * 0000000140433FF3: wrmsr
 * 0000000140433FF5: movzx   edx, word ptr gs:860h
 * 0000000140433FFE: test    edx, 8
 * 0000000140434004: jz      short loc_14043401D
 * 0000000140434006: mov     eax, 1
 * 000000014043400B: xor     edx, edx
 * 000000014043400D: mov     ecx, 49h ; 'I'
 * 0000000140434012: wrmsr
 * 0000000140434014: movzx   edx, word ptr gs:860h
 * 000000014043401D: test    edx, 2
 * 0000000140434023: jz      loc_140434160
 * 0000000140434029: call    loc_14043413C
 * 000000014043402E: add     rsp, 8
 * 0000000140434032: call    loc_140434145
 * 0000000140434037: add     rsp, 8
 * 000000014043403B: call    loc_14043402E
 * 0000000140434040: add     rsp, 8
 * 0000000140434044: call    loc_140434037
 * 0000000140434049: add     rsp, 8
 * 000000014043404D: call    loc_140434040
 * 0000000140434052: add     rsp, 8
 * 0000000140434056: call    loc_140434049
 * 000000014043405B: add     rsp, 8
 * 000000014043405F: call    loc_140434052
 * 0000000140434064: add     rsp, 8
 * 0000000140434068: call    loc_14043405B
 * 000000014043406D: add     rsp, 8
 * 0000000140434071: call    loc_140434064
 * 0000000140434076: add     rsp, 8
 * 000000014043407A: call    loc_14043406D
 * 000000014043407F: add     rsp, 8
 * 0000000140434083: call    loc_140434076
 * 0000000140434088: add     rsp, 8
 * 000000014043408C: call    loc_14043407F
 * 0000000140434091: add     rsp, 8
 * 0000000140434095: call    loc_140434088
 * 000000014043409A: add     rsp, 8
 * 000000014043409E: call    loc_140434091
 * 00000001404340A3: add     rsp, 8
 * 00000001404340A7: call    loc_14043409A
 * 00000001404340AC: add     rsp, 8
 * 00000001404340B0: call    loc_1404340A3
 * 00000001404340B5: add     rsp, 8
 * 00000001404340B9: call    loc_1404340AC
 * 00000001404340BE: add     rsp, 8
 * 00000001404340C2: call    loc_1404340B5
 * 00000001404340C7: add     rsp, 8
 * 00000001404340CB: call    loc_1404340BE
 * 00000001404340D0: add     rsp, 8
 * 00000001404340D4: call    loc_1404340C7
 * 00000001404340D9: add     rsp, 8
 * 00000001404340DD: call    loc_1404340D0
 * 00000001404340E2: add     rsp, 8
 * 00000001404340E6: call    loc_1404340D9
 * 00000001404340EB: add     rsp, 8
 * 00000001404340EF: call    loc_1404340E2
 * 00000001404340F4: add     rsp, 8
 * 00000001404340F8: call    loc_1404340EB
 * 00000001404340FD: add     rsp, 8
 * 0000000140434101: call    loc_1404340F4
 * 0000000140434106: add     rsp, 8
 * 000000014043410A: call    loc_1404340FD
 * 000000014043410F: add     rsp, 8
 * 0000000140434113: call    loc_140434106
 * 0000000140434118: add     rsp, 8
 * 000000014043411C: call    loc_14043410F
 * 0000000140434121: add     rsp, 8
 * 0000000140434125: call    loc_140434118
 * 000000014043412A: add     rsp, 8
 * 000000014043412E: call    loc_140434121
 * 0000000140434133: add     rsp, 8
 * 0000000140434137: call    loc_14043412A
 * 000000014043413C: add     rsp, 8
 * 0000000140434140: call    loc_140434133
 * 0000000140434145: add     rsp, 8
 * 0000000140434149: mov     eax, 0DADAh
 * 000000014043414E: test    byte ptr gs:862h, 8
 * 0000000140434157: jz      short loc_140434160
 * 0000000140434159: mov     al, 20h ; ' '
 * 000000014043415B: incsspq rax
 * 0000000140434160: test    edx, 200h
 * 0000000140434166: jz      short loc_14043416D
 * 0000000140434168: call    KiFlushBhbDuringTrapEntryOrExit
 * 000000014043416D: lfence
 * 0000000140434170: mov     byte ptr gs:856h, 0
 * 0000000140434179: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 0000000140434180: jz      short KiSystemServiceUser
 * 0000000140434182: mov     ecx, 6A7h
 * 0000000140434187: rdmsr
 * 0000000140434189: cmp     edx, 0
 * 000000014043418C: jz      short KiSystemServiceUser
 * 000000014043418E: mov     ecx, edx
 * 0000000140434190: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 0000000140434196: cmp     edx, ecx
 * 0000000140434198: jz      short KiSystemServiceUser
 * 000000014043419A: mov     ecx, 6A7h
 * 000000014043419F: wrmsr
 * 00000001404341A1: mov     byte ptr [rbp-55h], 2
 * 00000001404341A5: mov     rbx, gs:188h
 * 00000001404341AE: prefetchw byte ptr [rbx+90h]
 * 00000001404341B5: stmxcsr dword ptr [rbp-54h]
 * 00000001404341B9: ldmxcsr dword ptr gs:180h
 * 00000001404341C2: cmp     byte ptr [rbx+3], 0
 * 00000001404341C6: mov     word ptr [rbp+80h], 0
 * 00000001404341CF: jz      short loc_140434248
 * 00000001404341D1: test    byte ptr [rbx+3], 3
 * 00000001404341D5: mov     [rbp-38h], r8
 * 00000001404341D9: mov     [rbp-30h], r9
 * 00000001404341DD: jz      short loc_1404341E4
 * 00000001404341DF: call    KiSaveDebugRegisterState
 * 00000001404341E4: test    byte ptr [rbx+3], 24h
 * 00000001404341E8: jz      short loc_140434240
 * 00000001404341EA: mov     [rbp-20h], r10
 * 00000001404341EE: mov     [rbp-28h], r10
 * 00000001404341F2: movaps  xmmword ptr [rbp-10h], xmm0
 * 00000001404341F6: movaps  xmmword ptr [rbp+0], xmm1
 * 00000001404341FA: movaps  xmmword ptr [rbp+10h], xmm2
 * 00000001404341FE: movaps  xmmword ptr [rbp+20h], xmm3
 * 0000000140434202: movaps  xmmword ptr [rbp+30h], xmm4
 * 0000000140434206: movaps  xmmword ptr [rbp+40h], xmm5
 * 000000014043420A: sti
 * 000000014043420B: mov     rcx, rsp
 * 000000014043420E: call    PsSyscallProviderDispatch
 * 0000000140434213: cmp     al, 1
 * 0000000140434215: jz      short loc_140434240
 * 0000000140434217: mov     rax, [rbp-50h]
 * 000000014043421B: jl      short loc_140434231
 * 000000014043421D: mov     ecx, 0C000001Ch
 * 0000000140434222: xor     edx, edx
 * 0000000140434224: mov     r8, [rbp+0E8h]
 * 000000014043422B: call    KiExceptionDispatch
 * 0000000140434230: int     3; Trap to Debugger
 * 0000000140434231: test    byte ptr [rbx+3], 4
 * 0000000140434235: jz      KiSystemServiceExit
 * 000000014043423B: jmp     KiSystemServiceExitPico
 * 0000000140434240: mov     r8, [rbp-38h]
 * 0000000140434244: mov     r9, [rbp-30h]
 * 0000000140434248: mov     rax, [rbp-50h]
 * 000000014043424C: mov     rcx, [rbp-48h]
 * 0000000140434250: mov     rdx, [rbp-40h]
 * 0000000140434254: sti
 * 0000000140434255: mov     [rbx+88h], rcx
 * 000000014043425C: mov     [rbx+80h], eax
 * 0000000140434262: nop     word ptr [rax+rax+00000000h]
 * 0000000140434270: mov     [rbx+90h], rsp
 * 0000000140434277: mov     edi, eax
 * 0000000140434279: shr     edi, 7
 * 000000014043427C: and     edi, 20h
 * 000000014043427F: and     eax, 0FFFh
 * 0000000140434284: lea     r10, KeServiceDescriptorTable
 * 000000014043428B: lea     r11, KeServiceDescriptorTableShadow
 * 0000000140434292: test    dword ptr [rbx+78h], 80h
 * 0000000140434299: jz      short loc_1404342AE
 * 000000014043429B: test    dword ptr [rbx+78h], 200000h
 * 00000001404342A2: jz      short loc_1404342AB
 * 00000001404342A4: lea     r11, KeServiceDescriptorTableFilter
 * 00000001404342AB: mov     r10, r11
 * 00000001404342AE: cmp     eax, [r10+rdi+10h]
 * 00000001404342B3: jnb     loc_140434B4B
 * 00000001404342B9: mov     r10, [r10+rdi]
 * 00000001404342BD: movsxd  r11, dword ptr [r10+rax*4]
 * 00000001404342C1: mov     rax, r11
 * 00000001404342C4: sar     r11, 4
 * 00000001404342C8: add     r10, r11
 * 00000001404342CB: cmp     edi, 20h ; ' '
 * 00000001404342CE: jnz     short loc_140434320
 * 00000001404342D0: mov     r11, [rbx+0F0h]
 * 00000001404342D7: cmp     dword ptr [r11+1740h], 0
 * 00000001404342DF: jz      short loc_140434320
 * 00000001404342E1: mov     [rbp-50h], rax
 * 00000001404342E5: mov     [rbp-48h], rcx
 * 00000001404342E9: mov     [rbp-40h], rdx
 * 00000001404342ED: mov     rbx, r8
 * 00000001404342F0: mov     rdi, r9
 * 00000001404342F3: mov     rsi, r10
 * 00000001404342F6: mov     ecx, 7
 * 00000001404342FB: xor     edx, edx
 * 00000001404342FD: xor     r8, r8
 * 0000000140434300: xor     r9, r9
 * 0000000140434303: call    PsInvokeWin32Callout
 * 0000000140434308: mov     rax, [rbp-50h]
 * 000000014043430C: mov     rcx, [rbp-48h]
 * 0000000140434310: mov     rdx, [rbp-40h]
 * 0000000140434314: mov     r8, rbx
 * 0000000140434317: mov     r9, rdi
 * 000000014043431A: mov     r10, rsi
 * 000000014043431D: nop     dword ptr [rax]
 * 0000000140434320: and     eax, 0Fh
 * 0000000140434323: jz      KiSystemServiceCopyEnd
 * 0000000140434329: shl     eax, 3
 * 000000014043432C: lea     rsp, [rsp-70h]
 * 0000000140434331: lea     rdi, [rsp+100h+var_E8]
 * 0000000140434336: mov     rsi, [rbp+100h]
 * 000000014043433D: lea     rsi, [rsi+20h]
 * 0000000140434341: test    byte ptr [rbp+0F0h], 1
 * 0000000140434348: jz      short loc_140434360
 * 000000014043434A: cmp     rsi, cs:MmUserProbeAddress
 * 0000000140434351: cmovnb  rsi, cs:MmUserProbeAddress
 * 0000000140434359: nop     dword ptr [rax+00000000h]
 * 0000000140434360: lea     r11, KiSystemServiceCopyEnd
 * 0000000140434367: sub     r11, rax
 * 000000014043436A: jmp     r11
 * 0000000140434370: mov     rax, [rsi+70h]
 * 0000000140434374: mov     [rdi+70h], rax
 * 0000000140434378: mov     rax, [rsi+68h]
 * 000000014043437C: mov     [rdi+68h], rax
 * 0000000140434380: mov     rax, [rsi+60h]
 * 0000000140434384: mov     [rdi+60h], rax
 * 0000000140434388: mov     rax, [rsi+58h]
 * 000000014043438C: mov     [rdi+58h], rax
 * 0000000140434390: mov     rax, [rsi+50h]
 * 0000000140434394: mov     [rdi+50h], rax
 * 0000000140434398: mov     rax, [rsi+48h]
 * 000000014043439C: mov     [rdi+48h], rax
 * 00000001404343A0: mov     rax, [rsi+40h]
 * 00000001404343A4: mov     [rdi+40h], rax
 * 00000001404343A8: mov     rax, [rsi+38h]
 * 00000001404343AC: mov     [rdi+38h], rax
 * 00000001404343B0: mov     rax, [rsi+30h]
 * 00000001404343B4: mov     [rdi+30h], rax
 * 00000001404343B8: mov     rax, [rsi+28h]
 * 00000001404343BC: mov     [rdi+28h], rax
 * 00000001404343C0: mov     rax, [rsi+20h]
 * 00000001404343C4: mov     [rdi+20h], rax
 * 00000001404343C8: mov     rax, [rsi+18h]
 * 00000001404343CC: mov     [rdi+18h], rax
 * 00000001404343D0: mov     rax, [rsi+10h]
 * 00000001404343D4: mov     [rdi+10h], rax
 * 00000001404343D8: mov     rax, [rsi+8]
 * 00000001404343DC: mov     [rdi+8], rax
 * 00000001404343E0: test    cs:KiDynamicTraceMask, 1
 * 00000001404343EA: jnz     loc_140434BE9
 * 00000001404343F0: test    dword ptr cs:PerfGlobalGroupMask+8, 40h
 * 00000001404343FA: jnz     loc_140434C5D
 * 0000000140434400: mov     rax, r10
 * 0000000140434403: call    rax
 * 0000000140434405: nop     dword ptr [rax]
 * 0000000140434408: inc     dword ptr gs:2EB8h
 * 0000000140434410: mov     rbx, [rbp+0C0h]
 * 0000000140434417: mov     rdi, [rbp+0C8h]
 * 000000014043441E: mov     rsi, [rbp+0D0h]
 * 0000000140434425: mov     r11, gs:188h
 * 000000014043442E: test    byte ptr [rbp+0F0h], 1
 * 0000000140434435: jz      loc_14043480F
 * 000000014043443B: mov     rcx, cr8
 * 000000014043443F: or      cl, [r11+24Ah]
 * 0000000140434446: or      ecx, [r11+1E4h]
 * 000000014043444D: jnz     loc_140434BB5
 * 0000000140434453: cli
 * 0000000140434454: mov     rcx, gs:188h
 * 000000014043445D: test    byte ptr [rcx+0C2h], 3
 * 0000000140434464: jz      short loc_1404344BF
 * 0000000140434466: mov     [rbp-50h], rax
 * 000000014043446A: xor     eax, eax
 * 000000014043446C: mov     [rbp-48h], rax
 * 0000000140434470: mov     [rbp-40h], rax
 * 0000000140434474: mov     [rbp-38h], rax
 * 0000000140434478: mov     [rbp-30h], rax
 * 000000014043447C: mov     [rbp-28h], rax
 * 0000000140434480: mov     [rbp-20h], rax
 * 0000000140434484: pxor    xmm0, xmm0
 * 0000000140434488: movaps  xmmword ptr [rbp-10h], xmm0
 * 000000014043448C: movaps  xmmword ptr [rbp+0], xmm0
 * 0000000140434490: movaps  xmmword ptr [rbp+10h], xmm0
 * 0000000140434494: movaps  xmmword ptr [rbp+20h], xmm0
 * 0000000140434498: movaps  xmmword ptr [rbp+30h], xmm0
 * 000000014043449C: movaps  xmmword ptr [rbp+40h], xmm0
 * 00000001404344A0: mov     ecx, 1
 * 00000001404344A5: mov     cr8, rcx
 * 00000001404344A9: sti
 * 00000001404344AA: call    KiInitiateUserApc
 * 00000001404344AF: cli
 * 00000001404344B0: mov     ecx, 0
 * 00000001404344B5: mov     cr8, rcx
 * 00000001404344B9: mov     rax, [rbp-50h]
 * 00000001404344BD: jmp     short loc_140434454
 * 00000001404344BF: test    byte ptr gs:86Ch, 2
 * 00000001404344C8: jz      short loc_1404344D9
 * 00000001404344CA: mov     [rbp-50h], rax
 * 00000001404344CE: xor     ecx, ecx
 * 00000001404344D0: call    KiUpdateStibpPairing
 * 00000001404344D5: mov     rax, [rbp-50h]
 * 00000001404344D9: mov     rcx, gs:188h
 * 00000001404344E2: test    dword ptr [rcx], 8000000h
 * 00000001404344E8: jz      short loc_140434529
 * 00000001404344EA: mov     [rbp-50h], rax
 * 00000001404344EE: xor     eax, eax
 * 00000001404344F0: mov     [rbp-48h], rax
 * 00000001404344F4: mov     [rbp-40h], rax
 * 00000001404344F8: mov     [rbp-38h], rax
 * 00000001404344FC: mov     [rbp-30h], rax
 * 0000000140434500: mov     [rbp-28h], rax
 * 0000000140434504: mov     [rbp-20h], rax
 * 0000000140434508: pxor    xmm0, xmm0
 * 000000014043450C: movaps  xmmword ptr [rbp-10h], xmm0
 * 0000000140434510: movaps  xmmword ptr [rbp+0], xmm0
 * 0000000140434514: movaps  xmmword ptr [rbp+10h], xmm0
 * 0000000140434518: movaps  xmmword ptr [rbp+20h], xmm0
 * 000000014043451C: movaps  xmmword ptr [rbp+30h], xmm0
 * 0000000140434520: movaps  xmmword ptr [rbp+40h], xmm0
 * 0000000140434524: call    KiRestoreSetContextState
 * 0000000140434529: mov     rcx, gs:188h
 * 0000000140434532: test    dword ptr [rcx], 10000h
 * 0000000140434538: jz      short loc_140434556
 * 000000014043453A: mov     [rbp-50h], rax
 * 000000014043453E: test    byte ptr [rcx+2], 1
 * 0000000140434542: jz      short loc_140434552
 * 0000000140434544: call    KiCopyCounters
 * 0000000140434549: mov     rcx, gs:188h
 * 0000000140434552: mov     rax, [rbp-50h]
 * 0000000140434556: ldmxcsr dword ptr [rbp-54h]
 * 000000014043455A: xor     r10, r10
 * 000000014043455D: cmp     word ptr [rbp+80h], 0
 * 0000000140434565: jz      short loc_1404345A8
 * 0000000140434567: mov     [rbp-50h], rax
 * 000000014043456B: call    KiRestoreDebugRegisterState
 * 0000000140434570: mov     rax, gs:188h
 * 0000000140434579: mov     rax, [rax+0B8h]
 * 0000000140434580: mov     rax, [rax+3D8h]
 * 0000000140434587: or      rax, rax
 * 000000014043458A: jz      short loc_1404345A4
 * 000000014043458C: cmp     word ptr [rbp+0F0h], 33h ; '3'
 * 0000000140434594: jnz     short loc_1404345A4
 * 0000000140434596: mov     r10, [rbp+0E8h]
 * 000000014043459D: mov     [rbp+0E8h], rax
 * 00000001404345A4: mov     rax, [rbp-50h]
 * 00000001404345A8: mov     rcx, gs:188h
 * 00000001404345B1: bt      dword ptr [rcx+74h], 16h
 * 00000001404345B6: jnb     short loc_1404345E2
 * 00000001404345B8: xor     ecx, ecx
 * 00000001404345BA: rdsspq  rcx
 * 00000001404345BF: mov     r8, gs:95A8h
 * 00000001404345C8: add     r8, 8
 * 00000001404345CC: cmp     rcx, r8
 * 00000001404345CF: jnz     short loc_1404345E2
 * 00000001404345D1: mov     rcx, gs:95A0h
 * 00000001404345DA: rstorssp qword ptr [rcx]
 * 00000001404345DE: saveprevssp
 * 00000001404345E2: mov     [rbp-50h], rax
 * 00000001404345E6: mov     byte ptr gs:856h, 0
 * 00000001404345EF: movzx   eax, word ptr gs:86Ah
 * 00000001404345F8: cmp     gs:864h, ax
 * 0000000140434601: jz      short loc_140434615
 * 0000000140434603: mov     gs:864h, ax
 * 000000014043460C: mov     ecx, 48h ; 'H'
 * 0000000140434611: xor     edx, edx
 * 0000000140434613: wrmsr
 * 0000000140434615: btr     word ptr gs:860h, 2
 * 0000000140434620: jnb     short loc_140434630
 * 0000000140434622: mov     eax, 1
 * 0000000140434627: xor     edx, edx
 * 0000000140434629: mov     ecx, 49h ; 'I'
 * 000000014043462E: wrmsr
 * 0000000140434630: btr     word ptr gs:860h, 5
 * 000000014043463B: jnb     loc_140434778
 * 0000000140434641: call    loc_140434754
 * 0000000140434646: add     rsp, 8
 * 000000014043464A: call    loc_14043475D
 * 000000014043464F: add     rsp, 8
 * 0000000140434653: call    loc_140434646
 * 0000000140434658: add     rsp, 8
 * 000000014043465C: call    loc_14043464F
 * 0000000140434661: add     rsp, 8
 * 0000000140434665: call    loc_140434658
 * 000000014043466A: add     rsp, 8
 * 000000014043466E: call    loc_140434661
 * 0000000140434673: add     rsp, 8
 * 0000000140434677: call    loc_14043466A
 * 000000014043467C: add     rsp, 8
 * 0000000140434680: call    loc_140434673
 * 0000000140434685: add     rsp, 8
 * 0000000140434689: call    loc_14043467C
 * 000000014043468E: add     rsp, 8
 * 0000000140434692: call    loc_140434685
 * 0000000140434697: add     rsp, 8
 * 000000014043469B: call    loc_14043468E
 * 00000001404346A0: add     rsp, 8
 * 00000001404346A4: call    loc_140434697
 * 00000001404346A9: add     rsp, 8
 * 00000001404346AD: call    loc_1404346A0
 * 00000001404346B2: add     rsp, 8
 * 00000001404346B6: call    loc_1404346A9
 * 00000001404346BB: add     rsp, 8
 * 00000001404346BF: call    loc_1404346B2
 * 00000001404346C4: add     rsp, 8
 * 00000001404346C8: call    loc_1404346BB
 * 00000001404346CD: add     rsp, 8
 * 00000001404346D1: call    loc_1404346C4
 * 00000001404346D6: add     rsp, 8
 * 00000001404346DA: call    loc_1404346CD
 * 00000001404346DF: add     rsp, 8
 * 00000001404346E3: call    loc_1404346D6
 * 00000001404346E8: add     rsp, 8
 * 00000001404346EC: call    loc_1404346DF
 * 00000001404346F1: add     rsp, 8
 * 00000001404346F5: call    loc_1404346E8
 * 00000001404346FA: add     rsp, 8
 * 00000001404346FE: call    loc_1404346F1
 * 0000000140434703: add     rsp, 8
 * 0000000140434707: call    loc_1404346FA
 * 000000014043470C: add     rsp, 8
 * 0000000140434710: call    loc_140434703
 * 0000000140434715: add     rsp, 8
 * 0000000140434719: call    loc_14043470C
 * 000000014043471E: add     rsp, 8
 * 0000000140434722: call    loc_140434715
 * 0000000140434727: add     rsp, 8
 * 000000014043472B: call    loc_14043471E
 * 0000000140434730: add     rsp, 8
 * 0000000140434734: call    loc_140434727
 * 0000000140434739: add     rsp, 8
 * 000000014043473D: call    loc_140434730
 * 0000000140434742: add     rsp, 8
 * 0000000140434746: call    loc_140434739
 * 000000014043474B: add     rsp, 8
 * 000000014043474F: call    loc_140434742
 * 0000000140434754: add     rsp, 8
 * 0000000140434758: call    loc_14043474B
 * 000000014043475D: add     rsp, 8
 * 0000000140434761: mov     eax, 0DADAh
 * 0000000140434766: test    byte ptr gs:862h, 8
 * 000000014043476F: jz      short loc_140434778
 * 0000000140434771: mov     al, 20h ; ' '
 * 0000000140434773: incsspq rax
 * 0000000140434778: test    word ptr gs:860h, 80h
 * 0000000140434783: jz      short loc_140434791
 * 0000000140434785: xor     eax, eax
 * 0000000140434787: xor     edx, edx
 * 0000000140434789: mov     ecx, 1
 * 000000014043478E: div     rcx
 * 0000000140434791: mov     rax, [rbp-50h]
 * 0000000140434795: mov     r8, [rbp+100h]
 * 000000014043479C: mov     r9, [rbp+0D8h]
 * 00000001404347A3: xor     edx, edx
 * 00000001404347A5: pxor    xmm0, xmm0
 * 00000001404347A9: pxor    xmm1, xmm1
 * 00000001404347AD: pxor    xmm2, xmm2
 * 00000001404347B1: pxor    xmm3, xmm3
 * 00000001404347B5: pxor    xmm4, xmm4
 * 00000001404347B9: pxor    xmm5, xmm5
 * 00000001404347BD: mov     rcx, [rbp+0E8h]
 * 00000001404347C4: mov     r11, [rbp+0F8h]
 * 00000001404347CB: test    cs:KiKvaShadow, 1
 * 00000001404347D2: jnz     KiKernelSysretExit
 * 00000001404347D8: mov     rbp, r9
 * 00000001404347DB: mov     rsp, r8
 * 00000001404347DE: xor     r9, r9
 * 00000001404347E1: rdsspq  r9
 * 00000001404347E6: test    r9, r9
 * 00000001404347E9: jz      short loc_1404347F3
 * 00000001404347EB: clrssbsy qword ptr [r9]
 * 00000001404347F0: xor     r9, r9
 * 00000001404347F3: test    word ptr gs:860h, 100h
 * 00000001404347FE: jz      short loc_140434809
 * 0000000140434800: verw    word ptr gs:0A02Ah
 * 0000000140434809: swapgs
 * 000000014043480C: sysret
 * 000000014043480F: mov     rdx, [rbp+0B8h]
 * 0000000140434816: mov     [r11+90h], rdx
 * 000000014043481D: mov     dl, [rbp-58h]
 * 0000000140434820: mov     [r11+232h], dl
 * 0000000140434827: cli
 * 0000000140434828: mov     rsp, rbp
 * 000000014043482B: mov     rbp, [rbp+0D8h]
 * 0000000140434832: mov     rsp, [rsp+90h+arg_68]
 * 000000014043483A: sti
 * 000000014043483B: retn
 * 000000014043483C: mov     r11, gs:188h
 * 0000000140434845: mov     rcx, cr8
 * 0000000140434849: or      cl, [r11+24Ah]
 * 0000000140434850: or      ecx, [r11+1E4h]
 * 0000000140434857: jnz     loc_140434BB5
 * 000000014043485D: cli
 * 000000014043485E: mov     [rbp-50h], rax
 * 0000000140434862: mov     rcx, gs:188h
 * 000000014043486B: test    byte ptr [rcx+0C2h], 3
 * 0000000140434872: jz      short loc_14043488F
 * 0000000140434874: mov     ecx, 1
 * 0000000140434879: mov     cr8, rcx
 * 000000014043487D: sti
 * 000000014043487E: call    KiInitiateUserApc
 * 0000000140434883: mov     ecx, 0
 * 0000000140434888: mov     cr8, rcx
 * 000000014043488C: cli
 * 000000014043488D: jmp     short loc_140434862
 * 000000014043488F: test    byte ptr gs:86Ch, 2
 * 0000000140434898: jz      short loc_1404348A1
 * 000000014043489A: xor     ecx, ecx
 * 000000014043489C: call    KiUpdateStibpPairing
 * 00000001404348A1: mov     rcx, gs:188h
 * 00000001404348AA: test    dword ptr [rcx], 8000000h
 * 00000001404348B0: jz      short loc_1404348B7
 * 00000001404348B2: call    KiRestoreSetContextState
 * 00000001404348B7: mov     rcx, gs:188h
 * 00000001404348C0: test    byte ptr [rcx+2], 1
 * 00000001404348C4: jz      short loc_1404348D4
 * 00000001404348C6: call    KiCopyCounters
 * 00000001404348CB: mov     rcx, gs:188h
 * 00000001404348D4: cmp     word ptr [rbp+80h], 0
 * 00000001404348DC: jz      short loc_1404348E3
 * 00000001404348DE: call    KiRestoreDebugRegisterState
 * 00000001404348E3: mov     rcx, gs:188h
 * 00000001404348EC: bt      dword ptr [rcx+74h], 16h
 * 00000001404348F1: jnb     short loc_14043491D
 * 00000001404348F3: xor     ecx, ecx
 * 00000001404348F5: rdsspq  rcx
 * 00000001404348FA: mov     r8, gs:95A8h
 * 0000000140434903: add     r8, 8
 * 0000000140434907: cmp     rcx, r8
 * 000000014043490A: jnz     short loc_14043491D
 * 000000014043490C: mov     rcx, gs:95A0h
 * 0000000140434915: rstorssp qword ptr [rcx]
 * 0000000140434919: saveprevssp
 * 000000014043491D: mov     byte ptr gs:856h, 0
 * 0000000140434926: movzx   eax, word ptr gs:86Ah
 * 000000014043492F: cmp     gs:864h, ax
 * 0000000140434938: jz      short loc_14043494C
 * 000000014043493A: mov     gs:864h, ax
 * 0000000140434943: mov     ecx, 48h ; 'H'
 * 0000000140434948: xor     edx, edx
 * 000000014043494A: wrmsr
 * 000000014043494C: btr     word ptr gs:860h, 2
 * 0000000140434957: jnb     short loc_140434967
 * 0000000140434959: mov     eax, 1
 * 000000014043495E: xor     edx, edx
 * 0000000140434960: mov     ecx, 49h ; 'I'
 * 0000000140434965: wrmsr
 * 0000000140434967: btr     word ptr gs:860h, 5
 * 0000000140434972: jnb     loc_140434AAF
 * 0000000140434978: call    loc_140434A8B
 * 000000014043497D: add     rsp, 8
 * 0000000140434981: call    loc_140434A94
 * 0000000140434986: add     rsp, 8
 * 000000014043498A: call    loc_14043497D
 * 000000014043498F: add     rsp, 8
 * 0000000140434993: call    loc_140434986
 * 0000000140434998: add     rsp, 8
 * 000000014043499C: call    loc_14043498F
 * 00000001404349A1: add     rsp, 8
 * 00000001404349A5: call    loc_140434998
 * 00000001404349AA: add     rsp, 8
 * 00000001404349AE: call    loc_1404349A1
 * 00000001404349B3: add     rsp, 8
 * 00000001404349B7: call    loc_1404349AA
 * 00000001404349BC: add     rsp, 8
 * 00000001404349C0: call    loc_1404349B3
 * 00000001404349C5: add     rsp, 8
 * 00000001404349C9: call    loc_1404349BC
 * 00000001404349CE: add     rsp, 8
 * 00000001404349D2: call    loc_1404349C5
 * 00000001404349D7: add     rsp, 8
 * 00000001404349DB: call    loc_1404349CE
 * 00000001404349E0: add     rsp, 8
 * 00000001404349E4: call    loc_1404349D7
 * 00000001404349E9: add     rsp, 8
 * 00000001404349ED: call    loc_1404349E0
 * 00000001404349F2: add     rsp, 8
 * 00000001404349F6: call    loc_1404349E9
 * 00000001404349FB: add     rsp, 8
 * 00000001404349FF: call    loc_1404349F2
 * 0000000140434A04: add     rsp, 8
 * 0000000140434A08: call    loc_1404349FB
 * 0000000140434A0D: add     rsp, 8
 * 0000000140434A11: call    loc_140434A04
 * 0000000140434A16: add     rsp, 8
 * 0000000140434A1A: call    loc_140434A0D
 * 0000000140434A1F: add     rsp, 8
 * 0000000140434A23: call    loc_140434A16
 * 0000000140434A28: add     rsp, 8
 * 0000000140434A2C: call    loc_140434A1F
 * 0000000140434A31: add     rsp, 8
 * 0000000140434A35: call    loc_140434A28
 * 0000000140434A3A: add     rsp, 8
 * 0000000140434A3E: call    loc_140434A31
 * 0000000140434A43: add     rsp, 8
 * 0000000140434A47: call    loc_140434A3A
 * 0000000140434A4C: add     rsp, 8
 * 0000000140434A50: call    loc_140434A43
 * 0000000140434A55: add     rsp, 8
 * 0000000140434A59: call    loc_140434A4C
 * 0000000140434A5E: add     rsp, 8
 * 0000000140434A62: call    loc_140434A55
 * 0000000140434A67: add     rsp, 8
 * 0000000140434A6B: call    loc_140434A5E
 * 0000000140434A70: add     rsp, 8
 * 0000000140434A74: call    loc_140434A67
 * 0000000140434A79: add     rsp, 8
 * 0000000140434A7D: call    loc_140434A70
 * 0000000140434A82: add     rsp, 8
 * 0000000140434A86: call    loc_140434A79
 * 0000000140434A8B: add     rsp, 8
 * 0000000140434A8F: call    loc_140434A82
 * 0000000140434A94: add     rsp, 8
 * 0000000140434A98: mov     eax, 0DADAh
 * 0000000140434A9D: test    byte ptr gs:862h, 8
 * 0000000140434AA6: jz      short loc_140434AAF
 * 0000000140434AA8: mov     al, 20h ; ' '
 * 0000000140434AAA: incsspq rax
 * 0000000140434AAF: test    word ptr gs:860h, 80h
 * 0000000140434ABA: jz      short loc_140434AC8
 * 0000000140434ABC: xor     eax, eax
 * 0000000140434ABE: xor     edx, edx
 * 0000000140434AC0: mov     ecx, 1
 * 0000000140434AC5: div     rcx
 * 0000000140434AC8: ldmxcsr dword ptr [rbp-54h]
 * 0000000140434ACC: movaps  xmm0, xmmword ptr [rbp-10h]
 * 0000000140434AD0: movaps  xmm1, xmmword ptr [rbp+0]
 * 0000000140434AD4: movaps  xmm2, xmmword ptr [rbp+10h]
 * 0000000140434AD8: movaps  xmm3, xmmword ptr [rbp+20h]
 * 0000000140434ADC: movaps  xmm4, xmmword ptr [rbp+30h]
 * 0000000140434AE0: movaps  xmm5, xmmword ptr [rbp+40h]
 * 0000000140434AE4: mov     r11, [rbp-20h]
 * 0000000140434AE8: mov     r10, [rbp-28h]
 * 0000000140434AEC: mov     r9, [rbp-30h]
 * 0000000140434AF0: mov     r8, [rbp-38h]
 * 0000000140434AF4: mov     rdx, [rbp-40h]
 * 0000000140434AF8: mov     rcx, [rbp-48h]
 * 0000000140434AFC: mov     rax, [rbp-50h]
 * 0000000140434B00: mov     rsi, [rbp+0D0h]
 * 0000000140434B07: mov     rdi, [rbp+0C8h]
 * 0000000140434B0E: mov     rbx, [rbp+0C0h]
 * 0000000140434B15: mov     rsp, rbp
 * 0000000140434B18: mov     rbp, [rbp+0D8h]
 * 0000000140434B1F: add     rsp, 0E8h
 * 0000000140434B26: test    cs:KiKvaShadow, 1
 * 0000000140434B2D: jz      short loc_140434B34
 * 0000000140434B2F: jmp     KiKernelExit
 * 0000000140434B34: test    word ptr gs:860h, 100h
 * 0000000140434B3F: jz      short loc_140434B46
 * 0000000140434B41: verw    [rsp-158h+arg_170]
 * 0000000140434B46: swapgs
 * 0000000140434B49: iretq
 * 0000000140434B4B: cmp     edi, 20h ; ' '
 * 0000000140434B4E: jnz     short loc_140434BAB
 * 0000000140434B50: mov     [rbp-80h], eax
 * 0000000140434B53: mov     [rbp-78h], rcx
 * 0000000140434B57: mov     [rbp-70h], rdx
 * 0000000140434B5B: mov     [rbp-68h], r8
 * 0000000140434B5F: mov     [rbp-60h], r9
 * 0000000140434B63: call    KiConvertToGuiThread
 * 0000000140434B68: or      eax, eax
 * 0000000140434B6A: mov     eax, [rbp-80h]
 * 0000000140434B6D: mov     rcx, [rbp-78h]
 * 0000000140434B71: mov     rdx, [rbp-70h]
 * 0000000140434B75: mov     r8, [rbp-68h]
 * 0000000140434B79: mov     r9, [rbp-60h]
 * 0000000140434B7D: mov     [rbx+90h], rsp
 * 0000000140434B84: jz      KiSystemServiceRepeat
 * 0000000140434B8A: lea     rdi, xmmword_140D1F160
 * 0000000140434B91: mov     esi, [rdi+10h]
 * 0000000140434B94: mov     rdi, [rdi]
 * 0000000140434B97: cmp     eax, esi
 * 0000000140434B99: jnb     short loc_140434BAB
 * 0000000140434B9B: lea     rdi, [rdi+rsi*4]
 * 0000000140434B9F: movsx   eax, byte ptr [rdi+rax]
 * 0000000140434BA3: or      eax, eax
 * 0000000140434BA5: jle     KiSystemServiceExit
 * 0000000140434BAB: mov     eax, 0C000001Ch
 * 0000000140434BB0: jmp     KiSystemServiceExit
 * 0000000140434BB5: mov     ecx, 4Ah ; 'J'
 * 0000000140434BBA: xor     r9d, r9d
 * 0000000140434BBD: mov     r8, cr8
 * 0000000140434BC1: or      r8d, r8d
 * 0000000140434BC4: jnz     short loc_140434BDA
 * 0000000140434BC6: mov     ecx, 1
 * 0000000140434BCB: movzx   r8d, byte ptr [r11+24Ah]
 * 0000000140434BD3: mov     r9d, [r11+1E4h]
 * 0000000140434BDA: mov     rdx, [rbp+0E8h]
 * 0000000140434BE1: mov     r10, rbp
 * 0000000140434BE4: call    KiBugCheckDispatch
 * 0000000140434BE9: sub     rsp, 50h
 * 0000000140434BED: mov     [rsp+0E0h+var_C0], rcx
 * 0000000140434BF2: mov     [rsp+0E0h+var_B8], rdx
 * 0000000140434BF7: mov     [rsp+0E0h+var_B0], r8
 * 0000000140434BFC: mov     [rsp+0E0h+var_A8], r9
 * 0000000140434C01: mov     [rsp+0E0h+var_A0], r10
 * 0000000140434C06: mov     rcx, r10
 * 0000000140434C09: mov     rdx, rsp
 * 0000000140434C0C: add     rdx, 20h ; ' '
 * 0000000140434C10: mov     r8, 4
 * 0000000140434C17: mov     r9, rsp
 * 0000000140434C1A: add     r9, 70h ; 'p'
 * 0000000140434C1E: call    KiTrackSystemCallEntry
 * 0000000140434C23: mov     [rbp-60h], rax
 * 0000000140434C27: mov     rcx, [rsp+0E0h+var_C0]
 * 0000000140434C2C: mov     rdx, [rsp+0E0h+var_B8]
 * 0000000140434C31: mov     r8, [rsp+0E0h+var_B0]
 * 0000000140434C36: mov     r9, [rsp+0E0h+var_A8]
 * 0000000140434C3B: mov     r10, [rsp+0E0h+var_A0]
 * 0000000140434C40: add     rsp, 50h
 * 0000000140434C44: mov     rax, r10
 * 0000000140434C47: call    rax
 * 0000000140434C49: nop     dword ptr [rax]
 * 0000000140434C4C: mov     rcx, [rbp-60h]
 * 0000000140434C50: mov     rdx, rax
 * 0000000140434C53: call    KiTrackSystemCallExit
 * 0000000140434C58: jmp     loc_140434408
 * 0000000140434C5D: sub     rsp, 50h
 * 0000000140434C61: mov     [rsp+0E0h+var_C0], rcx
 * 0000000140434C66: mov     [rsp+0E0h+var_B8], rdx
 * 0000000140434C6B: mov     [rsp+0E0h+var_B0], r8
 * 0000000140434C70: mov     [rsp+0E0h+var_A8], r9
 * 0000000140434C75: mov     [rsp+0E0h+var_A0], r10
 * 0000000140434C7A: mov     rcx, r10
 * 0000000140434C7D: call    PerfInfoLogSysCallEntry
 * 0000000140434C82: mov     rcx, [rsp+0E0h+var_C0]
 * 0000000140434C87: mov     rdx, [rsp+0E0h+var_B8]
 * 0000000140434C8C: mov     r8, [rsp+0E0h+var_B0]
 * 0000000140434C91: mov     r9, [rsp+0E0h+var_A8]
 * 0000000140434C96: mov     r10, [rsp+0E0h+var_A0]
 * 0000000140434C9B: add     rsp, 50h
 * 0000000140434C9F: mov     rax, r10
 * 0000000140434CA2: call    rax
 * 0000000140434CA4: nop     dword ptr [rax]
 * 0000000140434CA7: mov     rcx, rax
 * 0000000140434CAA: call    PerfInfoLogSysCallExit
 * 0000000140434CAF: jmp     loc_140434408
 * 0000000140434CB4: retn
 */
