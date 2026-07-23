/*
 * XREFs of KxIsrLinkage @ 0x140422D80
 * Callers:
 *     KxIsrLinkageShadow @ 0x140AF7B00 (KxIsrLinkageShadow.c)
 * Callees:
 *     KiEndThreadAccountingPeriod @ 0x140248500 (KiEndThreadAccountingPeriod.c)
 *     HalRequestSoftwareInterrupt @ 0x140254DD0 (HalRequestSoftwareInterrupt.c)
 *     KiBeginThreadAccountingPeriod @ 0x140309040 (KiBeginThreadAccountingPeriod.c)
 *     KiCheckForSListAddress @ 0x140310070 (KiCheckForSListAddress.c)
 *     HalPerformEndOfInterrupt @ 0x140331AA0 (HalPerformEndOfInterrupt.c)
 *     KeWakeProcessor @ 0x140341B10 (KeWakeProcessor.c)
 *     KiRestoreDebugRegisterState @ 0x14041F2B0 (KiRestoreDebugRegisterState.c)
 *     KiSaveDebugRegisterState @ 0x14041F330 (KiSaveDebugRegisterState.c)
 *     KiRestoreSetContextState @ 0x1404200D0 (KiRestoreSetContextState.c)
 *     KxIsrLinkage @ 0x140422D80 (KxIsrLinkage.c)
 *     KiInitiateUserApc @ 0x1404251B0 (KiInitiateUserApc.c)
 *     KiDpcInterruptBypass @ 0x140427D70 (KiDpcInterruptBypass.c)
 *     KiBugCheckDispatch @ 0x140434CC0 (KiBugCheckDispatch.c)
 *     KiFlushBhbDuringTrapEntryOrExit @ 0x140435700 (KiFlushBhbDuringTrapEntryOrExit.c)
 *     KiUpdateStibpPairing @ 0x140461220 (KiUpdateStibpPairing.c)
 *     KzSetIrqlUnsafe @ 0x14056C720 (KzSetIrqlUnsafe.c)
 *     KiCopyCounters @ 0x1405746E0 (KiCopyCounters.c)
 *     PerfInfoLogUnexpectedInterrupt @ 0x1405FF250 (PerfInfoLogUnexpectedInterrupt.c)
 */

/*
 * Hex-Rays decompilation failed for KxIsrLinkage @ 0x140422D80
 * Reason: Hex-Rays returned no pseudocode for 0x140422D80
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140422D80: push    rbp
 * 0000000140422D81: push    rsi
 * 0000000140422D82: sub     rsp, 150h
 * 0000000140422D89: lea     rbp, [rsp+80h]
 * 0000000140422D91: mov     [rbp+0D8h+var_12D], 0
 * 0000000140422D95: mov     [rbp+0D8h+var_128], rax
 * 0000000140422D99: mov     [rbp+0D8h+var_120], rcx
 * 0000000140422D9D: mov     [rbp+0D8h+var_118], rdx
 * 0000000140422DA1: mov     [rbp+0D8h+var_110], r8
 * 0000000140422DA5: mov     [rbp+0D8h+var_108], r9
 * 0000000140422DA9: mov     [rbp+0D8h+var_100], r10
 * 0000000140422DAD: mov     [rbp+0D8h+var_F8], r11
 * 0000000140422DB1: test    [rbp+0D8h+arg_8], 1
 * 0000000140422DB8: jnz     short loc_140422DF4
 * 0000000140422DBA: xor     edx, edx
 * 0000000140422DBC: rdsspq  rdx
 * 0000000140422DC1: mov     [rbp+0D8h+var_80], rdx
 * 0000000140422DC5: lfence
 * 0000000140422DC8: test    word ptr gs:860h, 1
 * 0000000140422DD3: jnz     short loc_140422DDD
 * 0000000140422DD5: lfence
 * 0000000140422DD8: jmp     loc_140423064
 * 0000000140422DDD: movzx   eax, word ptr gs:864h
 * 0000000140422DE6: mov     ecx, 48h ; 'H'
 * 0000000140422DEB: xor     edx, edx
 * 0000000140422DED: wrmsr
 * 0000000140422DEF: jmp     loc_140423064
 * 0000000140422DF4: test    cs:KiKvaShadow, 1
 * 0000000140422DFB: jnz     short loc_140422E00
 * 0000000140422DFD: swapgs
 * 0000000140422E00: lfence
 * 0000000140422E03: mov     rcx, gs:95A8h
 * 0000000140422E0C: test    rcx, rcx
 * 0000000140422E0F: jz      short loc_140422E30
 * 0000000140422E11: rdsspq  rdx
 * 0000000140422E16: mov     r10, gs:95A0h
 * 0000000140422E1F: add     r10, 8
 * 0000000140422E23: cmp     rdx, r10
 * 0000000140422E26: jnz     short loc_140422E30
 * 0000000140422E28: rstorssp qword ptr [rcx]
 * 0000000140422E2C: saveprevssp
 * 0000000140422E30: mov     r10, gs:188h
 * 0000000140422E39: mov     rcx, gs:188h
 * 0000000140422E42: mov     rcx, [rcx+220h]
 * 0000000140422E49: mov     rcx, [rcx+9E0h]
 * 0000000140422E50: mov     gs:858h, rcx
 * 0000000140422E59: mov     cx, gs:850h
 * 0000000140422E62: mov     gs:852h, cx
 * 0000000140422E6B: mov     cx, gs:860h
 * 0000000140422E74: mov     gs:854h, cx
 * 0000000140422E7D: movzx   eax, word ptr gs:866h
 * 0000000140422E86: cmp     gs:864h, ax
 * 0000000140422E8F: jz      short loc_140422EA3
 * 0000000140422E91: mov     gs:864h, ax
 * 0000000140422E9A: mov     ecx, 48h ; 'H'
 * 0000000140422E9F: xor     edx, edx
 * 0000000140422EA1: wrmsr
 * 0000000140422EA3: movzx   edx, word ptr gs:860h
 * 0000000140422EAC: test    edx, 8
 * 0000000140422EB2: jz      short loc_140422ECB
 * 0000000140422EB4: mov     eax, 1
 * 0000000140422EB9: xor     edx, edx
 * 0000000140422EBB: mov     ecx, 49h ; 'I'
 * 0000000140422EC0: wrmsr
 * 0000000140422EC2: movzx   edx, word ptr gs:860h
 * 0000000140422ECB: test    edx, 2
 * 0000000140422ED1: jz      loc_14042300E
 * 0000000140422ED7: call    loc_140422FEA
 * 0000000140422EDC: add     rsp, 8
 * 0000000140422EE0: call    loc_140422FF3
 * 0000000140422EE5: add     rsp, 8
 * 0000000140422EE9: call    loc_140422EDC
 * 0000000140422EEE: add     rsp, 8
 * 0000000140422EF2: call    loc_140422EE5
 * 0000000140422EF7: add     rsp, 8
 * 0000000140422EFB: call    loc_140422EEE
 * 0000000140422F00: add     rsp, 8
 * 0000000140422F04: call    loc_140422EF7
 * 0000000140422F09: add     rsp, 8
 * 0000000140422F0D: call    loc_140422F00
 * 0000000140422F12: add     rsp, 8
 * 0000000140422F16: call    loc_140422F09
 * 0000000140422F1B: add     rsp, 8
 * 0000000140422F1F: call    loc_140422F12
 * 0000000140422F24: add     rsp, 8
 * 0000000140422F28: call    loc_140422F1B
 * 0000000140422F2D: add     rsp, 8
 * 0000000140422F31: call    loc_140422F24
 * 0000000140422F36: add     rsp, 8
 * 0000000140422F3A: call    loc_140422F2D
 * 0000000140422F3F: add     rsp, 8
 * 0000000140422F43: call    loc_140422F36
 * 0000000140422F48: add     rsp, 8
 * 0000000140422F4C: call    loc_140422F3F
 * 0000000140422F51: add     rsp, 8
 * 0000000140422F55: call    loc_140422F48
 * 0000000140422F5A: add     rsp, 8
 * 0000000140422F5E: call    loc_140422F51
 * 0000000140422F63: add     rsp, 8
 * 0000000140422F67: call    loc_140422F5A
 * 0000000140422F6C: add     rsp, 8
 * 0000000140422F70: call    loc_140422F63
 * 0000000140422F75: add     rsp, 8
 * 0000000140422F79: call    loc_140422F6C
 * 0000000140422F7E: add     rsp, 8
 * 0000000140422F82: call    loc_140422F75
 * 0000000140422F87: add     rsp, 8
 * 0000000140422F8B: call    loc_140422F7E
 * 0000000140422F90: add     rsp, 8
 * 0000000140422F94: call    loc_140422F87
 * 0000000140422F99: add     rsp, 8
 * 0000000140422F9D: call    loc_140422F90
 * 0000000140422FA2: add     rsp, 8
 * 0000000140422FA6: call    loc_140422F99
 * 0000000140422FAB: add     rsp, 8
 * 0000000140422FAF: call    loc_140422FA2
 * 0000000140422FB4: add     rsp, 8
 * 0000000140422FB8: call    loc_140422FAB
 * 0000000140422FBD: add     rsp, 8
 * 0000000140422FC1: call    loc_140422FB4
 * 0000000140422FC6: add     rsp, 8
 * 0000000140422FCA: call    loc_140422FBD
 * 0000000140422FCF: add     rsp, 8
 * 0000000140422FD3: call    loc_140422FC6
 * 0000000140422FD8: add     rsp, 8
 * 0000000140422FDC: call    loc_140422FCF
 * 0000000140422FE1: add     rsp, 8
 * 0000000140422FE5: call    loc_140422FD8
 * 0000000140422FEA: add     rsp, 8
 * 0000000140422FEE: call    loc_140422FE1
 * 0000000140422FF3: add     rsp, 8
 * 0000000140422FF7: mov     eax, 0DADAh
 * 0000000140422FFC: test    byte ptr gs:862h, 8
 * 0000000140423005: jz      short loc_14042300E
 * 0000000140423007: mov     al, 20h ; ' '
 * 0000000140423009: incsspq rax
 * 000000014042300E: test    edx, 200h
 * 0000000140423014: jz      short loc_14042301B
 * 0000000140423016: call    KiFlushBhbDuringTrapEntryOrExit
 * 000000014042301B: lfence
 * 000000014042301E: mov     byte ptr gs:856h, 0
 * 0000000140423027: cmp     cs:KiUserCetPl3SspCanonicalizeUpperMask, 0
 * 000000014042302E: jz      short loc_14042304F
 * 0000000140423030: mov     ecx, 6A7h
 * 0000000140423035: rdmsr
 * 0000000140423037: cmp     edx, 0
 * 000000014042303A: jz      short loc_14042304F
 * 000000014042303C: mov     ecx, edx
 * 000000014042303E: and     edx, cs:KiUserCetPl3SspCanonicalizeUpperMask
 * 0000000140423044: cmp     edx, ecx
 * 0000000140423046: jz      short loc_14042304F
 * 0000000140423048: mov     ecx, 6A7h
 * 000000014042304D: wrmsr
 * 000000014042304F: test    byte ptr [r10+3], 3
 * 0000000140423054: mov     [rbp+0D8h+var_58], 0
 * 000000014042305D: jz      short loc_140423064
 * 000000014042305F: call    KiSaveDebugRegisterState
 * 0000000140423064: cld
 * 0000000140423065: stmxcsr [rbp+0D8h+var_12C]
 * 0000000140423069: ldmxcsr dword ptr gs:180h
 * 0000000140423072: movaps  [rbp+0D8h+var_E8], xmm0
 * 0000000140423076: movaps  [rbp+0D8h+var_D8], xmm1
 * 000000014042307A: movaps  [rbp+0D8h+var_C8], xmm2
 * 000000014042307E: movaps  [rbp+0D8h+var_B8], xmm3
 * 0000000140423082: movaps  [rbp+0D8h+var_A8], xmm4
 * 0000000140423086: movaps  [rbp+0D8h+var_98], xmm5
 * 000000014042308A: cmp     byte ptr gs:82DAh, 0
 * 0000000140423093: jz      short loc_14042309A
 * 0000000140423095: call    KeWakeProcessor
 * 000000014042309A: lea     rax, ExpInterlockedPopEntrySListResume
 * 00000001404230A1: cmp     rax, [rbp+0D8h+arg_0]
 * 00000001404230A8: jnb     short loc_1404230C3
 * 00000001404230AA: lea     rax, ExpInterlockedPopEntrySListEnd
 * 00000001404230B1: cmp     rax, [rbp+0D8h+arg_0]
 * 00000001404230B8: jb      short loc_1404230C3
 * 00000001404230BA: lea     rcx, [rbp+0D8h+var_158]
 * 00000001404230BE: call    KiCheckForSListAddress
 * 00000001404230C3: movzx   eax, byte ptr [rbp+0E0h]
 * 00000001404230CA: mov     rsi, gs:20h
 * 00000001404230D3: mov     rsi, [rsi+rax*8+3400h]
 * 00000001404230DB: inc     dword ptr gs:82C0h
 * 00000001404230E3: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 00000001404230EA: jz      short loc_1404230EF
 * 00000001404230EC: clac
 * 00000001404230EF: test    rsi, rsi
 * 00000001404230F2: jz      short loc_1404230FD
 * 00000001404230F4: mov     rax, [rsi+50h]
 * 00000001404230F8: jmp     _guard_dispatch_icall
 * 00000001404230FD: mov     ecx, eax
 * 00000001404230FF: shr     ecx, 4
 * 0000000140423102: cmp     cs:KiIrqlFlags, 0
 * 0000000140423109: jz      short loc_140423112
 * 000000014042310B: call    KzSetIrqlUnsafe
 * 0000000140423110: jmp     short loc_14042311A
 * 0000000140423112: mov     rax, cr8
 * 0000000140423116: mov     cr8, rcx
 * 000000014042311A: mov     [rbp+0D8h+var_12F], al
 * 000000014042311D: mov     rcx, gs:20h
 * 0000000140423126: inc     byte ptr [rcx+20h]
 * 0000000140423129: cmp     byte ptr [rcx+20h], 1
 * 000000014042312D: jnz     short loc_14042317F
 * 000000014042312F: rdtsc
 * 0000000140423131: shl     rdx, 20h
 * 0000000140423135: or      rax, rdx
 * 0000000140423138: mov     r8, [rcx+8]
 * 000000014042313C: sub     rax, [rcx+8180h]
 * 0000000140423143: add     [r8+48h], rax
 * 0000000140423147: mov     edx, [r8+50h]
 * 000000014042314B: add     [rcx+8180h], rax
 * 0000000140423152: add     rdx, rax
 * 0000000140423155: mov     ecx, edx
 * 0000000140423157: shr     rdx, 20h
 * 000000014042315B: jz      short loc_140423160
 * 000000014042315D: or      ecx, 0FFFFFFFFh
 * 0000000140423160: mov     [r8+50h], ecx
 * 0000000140423164: test    byte ptr [r8+2], 0BEh
 * 0000000140423169: jz      short loc_14042317F
 * 000000014042316B: mov     rdx, r8
 * 000000014042316E: mov     r8, rax
 * 0000000140423171: mov     rcx, gs:20h
 * 000000014042317A: call    KiEndThreadAccountingPeriod
 * 000000014042317F: sti
 * 0000000140423180: test    dword ptr cs:PerfGlobalGroupMask+4, 4000h
 * 000000014042318A: jz      short loc_140423198
 * 000000014042318C: movzx   ecx, byte ptr [rbp+0E0h]
 * 0000000140423193: call    PerfInfoLogUnexpectedInterrupt
 * 0000000140423198: cmp     cs:KiBugCheckUnexpectedInterrupts, 0
 * 000000014042319F: jz      short loc_1404231C0
 * 00000001404231A1: and     [rbp+0D8h+var_138], 0
 * 00000001404231A6: xor     r9, r9
 * 00000001404231A9: movzx   r8d, byte ptr [rbp+0E0h]
 * 00000001404231B1: mov     edx, 1
 * 00000001404231B6: mov     ecx, 12h
 * 00000001404231BB: call    KiBugCheckDispatch
 * 00000001404231C0: cli
 * 00000001404231C1: mov     rcx, rsi
 * 00000001404231C4: call    HalPerformEndOfInterrupt
 * 00000001404231C9: mov     rcx, gs:20h
 * 00000001404231D2: cmp     byte ptr [rcx+20h], 1
 * 00000001404231D6: ja      short loc_140423252
 * 00000001404231D8: rdtsc
 * 00000001404231DA: shl     rdx, 20h
 * 00000001404231DE: or      rax, rdx
 * 00000001404231E1: sub     rax, [rcx+8180h]
 * 00000001404231E8: add     [rcx+8278h], rax
 * 00000001404231EF: add     [rcx+8180h], rax
 * 00000001404231F6: mov     r8, rax
 * 00000001404231F9: mov     rax, [rcx+8]
 * 00000001404231FD: test    byte ptr [rax+2], 72h
 * 0000000140423201: jz      short loc_140423216
 * 0000000140423203: xor     edx, edx
 * 0000000140423205: call    KiBeginThreadAccountingPeriod
 * 000000014042320A: mov     rcx, gs:20h
 * 0000000140423213: inc     byte ptr [rcx+20h]
 * 0000000140423216: mov     dl, [rcx+6]
 * 0000000140423219: and     byte ptr [rcx+6], 0
 * 000000014042321D: cmp     byte ptr [rcx+7], 0
 * 0000000140423221: jnz     short loc_140423252
 * 0000000140423223: test    dl, dl
 * 0000000140423225: jz      short loc_140423252
 * 0000000140423227: cmp     [rbp+0D8h+var_12F], 2
 * 000000014042322B: jnb     short loc_140423238
 * 000000014042322D: and     byte ptr [rcx+20h], 0
 * 0000000140423231: call    KiDpcInterruptBypass
 * 0000000140423236: jmp     short loc_140423255
 * 0000000140423238: mov     ecx, 2
 * 000000014042323D: call    cs:__imp_HalRequestSoftwareInterrupt
 * 0000000140423244: nop     dword ptr [rax+rax+00h]
 * 0000000140423249: mov     rcx, gs:20h
 * 0000000140423252: dec     byte ptr [rcx+20h]
 * 0000000140423255: movzx   ecx, [rbp+0D8h+var_12F]
 * 0000000140423259: cmp     cs:KiIrqlFlags, 0
 * 0000000140423260: jz      short loc_140423269
 * 0000000140423262: call    KzSetIrqlUnsafe
 * 0000000140423267: jmp     short loc_14042326D
 * 0000000140423269: mov     cr8, rcx
 * 000000014042326D: mov     rsi, [rbp+0D8h+var_8]
 * 0000000140423274: cli
 * 0000000140423275: test    [rbp+0D8h+arg_8], 1
 * 000000014042327C: jz      loc_14042356A
 * 0000000140423282: test    byte ptr cs:KeSmapEnabled, 0FFh
 * 0000000140423289: jz      short loc_14042328E
 * 000000014042328B: stac
 * 000000014042328E: mov     rcx, gs:188h
 * 0000000140423297: test    byte ptr [rcx+0C2h], 3
 * 000000014042329E: jz      short loc_1404232BB
 * 00000001404232A0: mov     ecx, 1
 * 00000001404232A5: mov     cr8, rcx
 * 00000001404232A9: sti
 * 00000001404232AA: call    KiInitiateUserApc
 * 00000001404232AF: cli
 * 00000001404232B0: mov     ecx, 0
 * 00000001404232B5: mov     cr8, rcx
 * 00000001404232B9: jmp     short loc_14042328E
 * 00000001404232BB: test    byte ptr gs:86Ch, 2
 * 00000001404232C4: jz      short loc_1404232CD
 * 00000001404232C6: xor     ecx, ecx
 * 00000001404232C8: call    KiUpdateStibpPairing
 * 00000001404232CD: mov     rcx, gs:188h
 * 00000001404232D6: test    dword ptr [rcx], 8000000h
 * 00000001404232DC: jz      short loc_1404232E3
 * 00000001404232DE: call    KiRestoreSetContextState
 * 00000001404232E3: mov     rcx, gs:188h
 * 00000001404232EC: test    dword ptr [rcx], 10000h
 * 00000001404232F2: jz      short loc_140423308
 * 00000001404232F4: test    byte ptr [rcx+2], 1
 * 00000001404232F8: jz      short loc_140423308
 * 00000001404232FA: call    KiCopyCounters
 * 00000001404232FF: mov     rcx, gs:188h
 * 0000000140423308: ldmxcsr [rbp+0D8h+var_12C]
 * 000000014042330C: cmp     [rbp+0D8h+var_58], 0
 * 0000000140423314: jz      short loc_14042331B
 * 0000000140423316: call    KiRestoreDebugRegisterState
 * 000000014042331B: mov     rcx, gs:188h
 * 0000000140423324: bt      dword ptr [rcx+74h], 16h
 * 0000000140423329: jnb     short loc_140423355
 * 000000014042332B: xor     ecx, ecx
 * 000000014042332D: rdsspq  rcx
 * 0000000140423332: mov     r8, gs:95A8h
 * 000000014042333B: add     r8, 8
 * 000000014042333F: cmp     rcx, r8
 * 0000000140423342: jnz     short loc_140423355
 * 0000000140423344: mov     rcx, gs:95A0h
 * 000000014042334D: rstorssp qword ptr [rcx]
 * 0000000140423351: saveprevssp
 * 0000000140423355: movaps  xmm0, [rbp+0D8h+var_E8]
 * 0000000140423359: movaps  xmm1, [rbp+0D8h+var_D8]
 * 000000014042335D: movaps  xmm2, [rbp+0D8h+var_C8]
 * 0000000140423361: movaps  xmm3, [rbp+0D8h+var_B8]
 * 0000000140423365: movaps  xmm4, [rbp+0D8h+var_A8]
 * 0000000140423369: movaps  xmm5, [rbp+0D8h+var_98]
 * 000000014042336D: mov     r11, [rbp+0D8h+var_F8]
 * 0000000140423371: mov     r10, [rbp+0D8h+var_100]
 * 0000000140423375: mov     r9, [rbp+0D8h+var_108]
 * 0000000140423379: mov     r8, [rbp+0D8h+var_110]
 * 000000014042337D: mov     byte ptr gs:856h, 0
 * 0000000140423386: movzx   eax, word ptr gs:86Ah
 * 000000014042338F: cmp     gs:864h, ax
 * 0000000140423398: jz      short loc_1404233AC
 * 000000014042339A: mov     gs:864h, ax
 * 00000001404233A3: mov     ecx, 48h ; 'H'
 * 00000001404233A8: xor     edx, edx
 * 00000001404233AA: wrmsr
 * 00000001404233AC: btr     word ptr gs:860h, 2
 * 00000001404233B7: jnb     short loc_1404233C7
 * 00000001404233B9: mov     eax, 1
 * 00000001404233BE: xor     edx, edx
 * 00000001404233C0: mov     ecx, 49h ; 'I'
 * 00000001404233C5: wrmsr
 * 00000001404233C7: btr     word ptr gs:860h, 5
 * 00000001404233D2: jnb     loc_14042350F
 * 00000001404233D8: call    loc_1404234EB
 * 00000001404233DD: add     rsp, 8
 * 00000001404233E1: call    loc_1404234F4
 * 00000001404233E6: add     rsp, 8
 * 00000001404233EA: call    loc_1404233DD
 * 00000001404233EF: add     rsp, 8
 * 00000001404233F3: call    loc_1404233E6
 * 00000001404233F8: add     rsp, 8
 * 00000001404233FC: call    loc_1404233EF
 * 0000000140423401: add     rsp, 8
 * 0000000140423405: call    loc_1404233F8
 * 000000014042340A: add     rsp, 8
 * 000000014042340E: call    loc_140423401
 * 0000000140423413: add     rsp, 8
 * 0000000140423417: call    loc_14042340A
 * 000000014042341C: add     rsp, 8
 * 0000000140423420: call    loc_140423413
 * 0000000140423425: add     rsp, 8
 * 0000000140423429: call    loc_14042341C
 * 000000014042342E: add     rsp, 8
 * 0000000140423432: call    loc_140423425
 * 0000000140423437: add     rsp, 8
 * 000000014042343B: call    loc_14042342E
 * 0000000140423440: add     rsp, 8
 * 0000000140423444: call    loc_140423437
 * 0000000140423449: add     rsp, 8
 * 000000014042344D: call    loc_140423440
 * 0000000140423452: add     rsp, 8
 * 0000000140423456: call    loc_140423449
 * 000000014042345B: add     rsp, 8
 * 000000014042345F: call    loc_140423452
 * 0000000140423464: add     rsp, 8
 * 0000000140423468: call    loc_14042345B
 * 000000014042346D: add     rsp, 8
 * 0000000140423471: call    loc_140423464
 * 0000000140423476: add     rsp, 8
 * 000000014042347A: call    loc_14042346D
 * 000000014042347F: add     rsp, 8
 * 0000000140423483: call    loc_140423476
 * 0000000140423488: add     rsp, 8
 * 000000014042348C: call    loc_14042347F
 * 0000000140423491: add     rsp, 8
 * 0000000140423495: call    loc_140423488
 * 000000014042349A: add     rsp, 8
 * 000000014042349E: call    loc_140423491
 * 00000001404234A3: add     rsp, 8
 * 00000001404234A7: call    loc_14042349A
 * 00000001404234AC: add     rsp, 8
 * 00000001404234B0: call    loc_1404234A3
 * 00000001404234B5: add     rsp, 8
 * 00000001404234B9: call    loc_1404234AC
 * 00000001404234BE: add     rsp, 8
 * 00000001404234C2: call    loc_1404234B5
 * 00000001404234C7: add     rsp, 8
 * 00000001404234CB: call    loc_1404234BE
 * 00000001404234D0: add     rsp, 8
 * 00000001404234D4: call    loc_1404234C7
 * 00000001404234D9: add     rsp, 8
 * 00000001404234DD: call    loc_1404234D0
 * 00000001404234E2: add     rsp, 8
 * 00000001404234E6: call    loc_1404234D9
 * 00000001404234EB: add     rsp, 8
 * 00000001404234EF: call    loc_1404234E2
 * 00000001404234F4: add     rsp, 8
 * 00000001404234F8: mov     eax, 0DADAh
 * 00000001404234FD: test    byte ptr gs:862h, 8
 * 0000000140423506: jz      short loc_14042350F
 * 0000000140423508: mov     al, 20h ; ' '
 * 000000014042350A: incsspq rax
 * 000000014042350F: test    word ptr gs:860h, 80h
 * 000000014042351A: jz      short loc_140423528
 * 000000014042351C: xor     eax, eax
 * 000000014042351E: xor     edx, edx
 * 0000000140423520: mov     ecx, 1
 * 0000000140423525: div     rcx
 * 0000000140423528: mov     rdx, [rbp+0D8h+var_118]
 * 000000014042352C: mov     rcx, [rbp+0D8h+var_120]
 * 0000000140423530: mov     rax, [rbp+0D8h+var_128]
 * 0000000140423534: mov     rsp, rbp
 * 0000000140423537: mov     rbp, [rbp+0D8h+var_s0]
 * 000000014042353E: add     rsp, 0E8h
 * 0000000140423545: test    cs:KiKvaShadow, 1
 * 000000014042354C: jz      short loc_140423553
 * 000000014042354E: jmp     KiKernelExit
 * 0000000140423553: test    word ptr gs:860h, 100h
 * 000000014042355E: jz      short loc_140423565
 * 0000000140423560: verw    [rsp-10h+arg_20]
 * 0000000140423565: swapgs
 * 0000000140423568: iretq
 * 000000014042356A: ldmxcsr [rbp+0D8h+var_12C]
 * 000000014042356E: movaps  xmm0, [rbp+0D8h+var_E8]
 * 0000000140423572: movaps  xmm1, [rbp+0D8h+var_D8]
 * 0000000140423576: movaps  xmm2, [rbp+0D8h+var_C8]
 * 000000014042357A: movaps  xmm3, [rbp+0D8h+var_B8]
 * 000000014042357E: movaps  xmm4, [rbp+0D8h+var_A8]
 * 0000000140423582: movaps  xmm5, [rbp+0D8h+var_98]
 * 0000000140423586: mov     r11, [rbp+0D8h+var_F8]
 * 000000014042358A: mov     r10, [rbp+0D8h+var_100]
 * 000000014042358E: mov     r9, [rbp+0D8h+var_108]
 * 0000000140423592: mov     r8, [rbp+0D8h+var_110]
 * 0000000140423596: mov     rdx, [rbp+0D8h+var_118]
 * 000000014042359A: mov     rcx, [rbp+0D8h+var_120]
 * 000000014042359E: mov     rax, [rbp+0D8h+var_128]
 * 00000001404235A2: mov     rsp, rbp
 * 00000001404235A5: mov     rbp, [rbp+0D8h+var_s0]
 * 00000001404235AC: add     rsp, 0E8h
 * 00000001404235B3: iretq
 */
