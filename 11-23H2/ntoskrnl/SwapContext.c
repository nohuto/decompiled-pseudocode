/*
 * XREFs of SwapContext @ 0x1404283C0
 * Callers:
 *     KiIdleLoop @ 0x1404239C0 (KiIdleLoop.c)
 *     KiSwapContext @ 0x1404282E0 (KiSwapContext.c)
 * Callees:
 *     HalRequestSoftwareInterrupt @ 0x140254D10 (HalRequestSoftwareInterrupt.c)
 *     KiBeginThreadAccountingPeriod @ 0x140308DB0 (KiBeginThreadAccountingPeriod.c)
 *     KiUpdateSpeculationControl @ 0x140325BC0 (KiUpdateSpeculationControl.c)
 *     EtwTraceContextSwap @ 0x14038A320 (EtwTraceContextSwap.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1403CD2C0 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     HvlNotifyLongSpinWait @ 0x1403CD2F0 (HvlNotifyLongSpinWait.c)
 *     KeBugCheckEx @ 0x14041EA50 (KeBugCheckEx.c)
 *     SwapContext @ 0x1404283C0 (SwapContext.c)
 *     KiClearLastBranchRecordStack @ 0x14045FDD0 (KiClearLastBranchRecordStack.c)
 *     KeCheckAndApplyBamQos @ 0x140461370 (KeCheckAndApplyBamQos.c)
 *     HvlSwitchVirtualAddressSpace @ 0x140549890 (HvlSwitchVirtualAddressSpace.c)
 *     KiResetProcessorTraceBuffer @ 0x14056CF20 (KiResetProcessorTraceBuffer.c)
 *     KiRestoreThreadIptState @ 0x140572CE0 (KiRestoreThreadIptState.c)
 *     KiSaveThreadIptState @ 0x140572E10 (KiSaveThreadIptState.c)
 *     KiCheckAndApplyCacheIsolation @ 0x140576EF0 (KiCheckAndApplyCacheIsolation.c)
 */

/*
 * Hex-Rays decompilation failed for SwapContext @ 0x1404283C0
 * Reason: Hex-Rays returned no pseudocode for 0x1404283C0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001404283C0: push    rbp
 * 00000001404283C2: sub     rsp, 30h
 * 00000001404283C6: prefetchw byte ptr [rsi+71h]
 * 00000001404283CA: mov     [rsp+38h+var_10], cl
 * 00000001404283CE: cmp     byte ptr [rsi+71h], 0
 * 00000001404283D2: jnz     loc_140428A5F
 * 00000001404283D8: mov     byte ptr [rsi+71h], 1
 * 00000001404283DC: mov     eax, cs:KiHresetMask
 * 00000001404283E2: test    eax, eax
 * 00000001404283E4: jz      short loc_1404283EC
 * 00000001404283E6: hreset  0
 * 00000001404283EC: cli
 * 00000001404283ED: rdtsc
 * 00000001404283EF: shl     rdx, 20h
 * 00000001404283F3: or      rax, rdx
 * 00000001404283F6: sub     rax, [rbx+8180h]
 * 00000001404283FD: add     [rbx+8278h], rax
 * 0000000140428404: add     [rbx+8180h], rax
 * 000000014042840B: mov     r12, rax
 * 000000014042840E: test    byte ptr [rbx+6], 0FFh
 * 0000000140428412: jz      short loc_14042842F
 * 0000000140428414: and     byte ptr [rbx+6], 0
 * 0000000140428418: cmp     [rbx+18h], rsi
 * 000000014042841C: jz      short loc_14042842F
 * 000000014042841E: mov     ecx, 2
 * 0000000140428423: call    cs:__imp_HalRequestSoftwareInterrupt
 * 000000014042842A: nop     dword ptr [rax+rax+00h]
 * 000000014042842F: test    byte ptr [rsi+2], 0B6h
 * 0000000140428433: jnz     loc_1404289DD
 * 0000000140428439: dec     byte ptr [rbx+20h]
 * 000000014042843C: sti
 * 000000014042843D: inc     dword ptr [rbx+2D3Ch]
 * 0000000140428443: mov     rbp, cs:KeFeatureBits
 * 000000014042844A: cmp     cs:KiCacheIsoBitmap, 0
 * 0000000140428451: jz      short loc_140428465
 * 0000000140428453: bt      rbp, 2Ch ; ','
 * 0000000140428458: jnb     short loc_140428465
 * 000000014042845A: mov     rcx, rbx
 * 000000014042845D: mov     rdx, rsi
 * 0000000140428460: call    KiCheckAndApplyCacheIsolation
 * 0000000140428465: cmp     [rbx+18h], rsi
 * 0000000140428469: jz      short loc_14042848B
 * 000000014042846B: mov     ecx, [rsi+200h]
 * 0000000140428471: mov     eax, [rbx+0ECh]
 * 0000000140428477: xor     eax, ecx
 * 0000000140428479: test    eax, 0FFh
 * 000000014042847E: jz      short loc_14042848B
 * 0000000140428480: mov     rcx, rbx
 * 0000000140428483: mov     rdx, rsi
 * 0000000140428486: call    KeCheckAndApplyBamQos
 * 000000014042848B: mov     rdx, [rdi+250h]
 * 0000000140428492: mov     rcx, [rdi+60h]
 * 0000000140428496: and     rdx, 0FFFFFFFFFFFFFFFDh
 * 000000014042849A: mov     eax, edx
 * 000000014042849C: jz      short loc_1404284C8
 * 000000014042849E: shr     rdx, 20h
 * 00000001404284A2: bt      rbp, 26h ; '&'
 * 00000001404284A7: jb      short loc_1404284C0
 * 00000001404284A9: bt      rbp, 0Fh
 * 00000001404284AE: jb      short loc_1404284C5
 * 00000001404284B0: bt      ebp, 17h
 * 00000001404284B4: jnb     short loc_1404284BB
 * 00000001404284B6: xsave   byte ptr [rcx]
 * 00000001404284B9: jmp     short loc_1404284C8
 * 00000001404284BB: fxsave  dword ptr [rcx]
 * 00000001404284BE: jmp     short loc_1404284C8
 * 00000001404284C0: xsaves  byte ptr [rcx]
 * 00000001404284C3: jmp     short loc_1404284C8
 * 00000001404284C5: xsaveopt byte ptr [rcx]
 * 00000001404284C8: stmxcsr dword ptr [rcx+18h]
 * 00000001404284CC: test    eax, 100h
 * 00000001404284D1: jz      short loc_1404284E4
 * 00000001404284D3: cmp     cs:KiIptMsrMask, 0
 * 00000001404284DA: jz      short loc_1404284E4
 * 00000001404284DC: mov     rcx, rdi
 * 00000001404284DF: call    KiSaveThreadIptState
 * 00000001404284E4: mov     [rdi+58h], rsp
 * 00000001404284E8: mov     rsp, [rsi+58h]
 * 00000001404284EC: test    cs:KiKernelCetEnabled, 1
 * 00000001404284F3: jz      short loc_140428522
 * 00000001404284F5: mov     rcx, [rsi+410h]
 * 00000001404284FC: mov     [rbx+9428h], rcx
 * 0000000140428503: rdsspq  rdx
 * 0000000140428508: mov     rcx, [rsi+408h]
 * 000000014042850F: rstorssp qword ptr [rcx]
 * 0000000140428513: saveprevssp
 * 0000000140428517: sub     rdx, 8
 * 000000014042851B: mov     [rdi+408h], rdx
 * 0000000140428522: mov     rax, [rdi+220h]
 * 0000000140428529: cmp     qword ptr [rax+580h], 0
 * 0000000140428531: jz      short loc_140428546
 * 0000000140428533: mov     ecx, 0C0000100h
 * 0000000140428538: rdmsr
 * 000000014042853A: mov     [rdi+638h], eax
 * 0000000140428540: mov     [rdi+63Ch], edx
 * 0000000140428546: btr     dword ptr gs:856h, 0
 * 0000000140428550: jnb     short loc_140428556
 * 0000000140428552: or      byte ptr [rdi+7Fh], 2
 * 0000000140428556: btr     dword ptr [rsi+7Fh], 1
 * 000000014042855B: jnb     short loc_140428566
 * 000000014042855D: or      byte ptr gs:856h, 1
 * 0000000140428566: mov     rcx, [rsi+220h]
 * 000000014042856D: or      cl, [rbx+6ECh]
 * 0000000140428573: and     cl, 0C2h
 * 0000000140428576: cmp     rcx, [rdi+220h]
 * 000000014042857D: jz      short loc_14042858C
 * 000000014042857F: and     cl, 0C0h
 * 0000000140428582: call    KiUpdateSpeculationControl
 * 0000000140428587: jmp     loc_140428742
 * 000000014042858C: movzx   ecx, byte ptr gs:856h
 * 0000000140428595: and     cx, 3
 * 0000000140428599: cmp     cx, 1
 * 000000014042859D: jnz     loc_140428742
 * 00000001404285A3: cli
 * 00000001404285A4: movzx   eax, word ptr gs:852h
 * 00000001404285AD: cmp     gs:864h, ax
 * 00000001404285B6: jz      short loc_1404285CA
 * 00000001404285B8: mov     gs:864h, ax
 * 00000001404285C1: mov     ecx, 48h ; 'H'
 * 00000001404285C6: xor     edx, edx
 * 00000001404285C8: wrmsr
 * 00000001404285CA: movzx   edx, byte ptr gs:854h
 * 00000001404285D3: test    edx, 10h
 * 00000001404285D9: jz      short loc_1404285F2
 * 00000001404285DB: mov     eax, 1
 * 00000001404285E0: xor     edx, edx
 * 00000001404285E2: mov     ecx, 49h ; 'I'
 * 00000001404285E7: wrmsr
 * 00000001404285E9: movzx   edx, byte ptr gs:854h
 * 00000001404285F2: test    edx, 40h
 * 00000001404285F8: jz      loc_140428735
 * 00000001404285FE: call    loc_140428711
 * 0000000140428603: add     rsp, 8
 * 0000000140428607: call    loc_14042871A
 * 000000014042860C: add     rsp, 8
 * 0000000140428610: call    loc_140428603
 * 0000000140428615: add     rsp, 8
 * 0000000140428619: call    loc_14042860C
 * 000000014042861E: add     rsp, 8
 * 0000000140428622: call    loc_140428615
 * 0000000140428627: add     rsp, 8
 * 000000014042862B: call    loc_14042861E
 * 0000000140428630: add     rsp, 8
 * 0000000140428634: call    loc_140428627
 * 0000000140428639: add     rsp, 8
 * 000000014042863D: call    loc_140428630
 * 0000000140428642: add     rsp, 8
 * 0000000140428646: call    loc_140428639
 * 000000014042864B: add     rsp, 8
 * 000000014042864F: call    loc_140428642
 * 0000000140428654: add     rsp, 8
 * 0000000140428658: call    loc_14042864B
 * 000000014042865D: add     rsp, 8
 * 0000000140428661: call    loc_140428654
 * 0000000140428666: add     rsp, 8
 * 000000014042866A: call    loc_14042865D
 * 000000014042866F: add     rsp, 8
 * 0000000140428673: call    loc_140428666
 * 0000000140428678: add     rsp, 8
 * 000000014042867C: call    loc_14042866F
 * 0000000140428681: add     rsp, 8
 * 0000000140428685: call    loc_140428678
 * 000000014042868A: add     rsp, 8
 * 000000014042868E: call    loc_140428681
 * 0000000140428693: add     rsp, 8
 * 0000000140428697: call    loc_14042868A
 * 000000014042869C: add     rsp, 8
 * 00000001404286A0: call    loc_140428693
 * 00000001404286A5: add     rsp, 8
 * 00000001404286A9: call    loc_14042869C
 * 00000001404286AE: add     rsp, 8
 * 00000001404286B2: call    loc_1404286A5
 * 00000001404286B7: add     rsp, 8
 * 00000001404286BB: call    loc_1404286AE
 * 00000001404286C0: add     rsp, 8
 * 00000001404286C4: call    loc_1404286B7
 * 00000001404286C9: add     rsp, 8
 * 00000001404286CD: call    loc_1404286C0
 * 00000001404286D2: add     rsp, 8
 * 00000001404286D6: call    loc_1404286C9
 * 00000001404286DB: add     rsp, 8
 * 00000001404286DF: call    loc_1404286D2
 * 00000001404286E4: add     rsp, 8
 * 00000001404286E8: call    loc_1404286DB
 * 00000001404286ED: add     rsp, 8
 * 00000001404286F1: call    loc_1404286E4
 * 00000001404286F6: add     rsp, 8
 * 00000001404286FA: call    loc_1404286ED
 * 00000001404286FF: add     rsp, 8
 * 0000000140428703: call    loc_1404286F6
 * 0000000140428708: add     rsp, 8
 * 000000014042870C: call    loc_1404286FF
 * 0000000140428711: add     rsp, 8
 * 0000000140428715: call    loc_140428708
 * 000000014042871A: add     rsp, 8
 * 000000014042871E: mov     eax, 0DADAh
 * 0000000140428723: test    byte ptr gs:862h, 8
 * 000000014042872C: jz      short loc_140428735
 * 000000014042872E: mov     al, 20h ; ' '
 * 0000000140428730: incsspq rax
 * 0000000140428735: lfence
 * 0000000140428738: or      byte ptr gs:856h, 2
 * 0000000140428741: sti
 * 0000000140428742: mov     r14, [rsi+0B8h]
 * 0000000140428749: cmp     r14, [rdi+0B8h]
 * 0000000140428750: jz      loc_14042880D
 * 0000000140428756: movzx   ecx, byte ptr [rbx+0D1h]
 * 000000014042875D: movzx   eax, byte ptr [rbx+0D0h]
 * 0000000140428764: lock bts [r14+rax*8+178h], rcx
 * 000000014042876E: mov     rcx, [r14+28h]
 * 0000000140428772: test    cs:KiKvaShadow, 1
 * 0000000140428779: jz      short loc_1404287B4
 * 000000014042877B: cli
 * 000000014042877C: bt      ecx, 1
 * 0000000140428780: jnb     short loc_14042878E
 * 0000000140428782: bts     rcx, 3Fh ; '?'
 * 0000000140428787: or      dword ptr [rbx+9E98h], 1
 * 000000014042878E: mov     [rbx+9E80h], rcx
 * 0000000140428795: btr     rcx, 3Fh ; '?'
 * 000000014042879A: and     dword ptr [rbx+9E98h], 0FFFFFFFDh
 * 00000001404287A1: bt      dword ptr [r14+390h], 0
 * 00000001404287AA: jnb     short loc_1404287B3
 * 00000001404287AC: xor     dword ptr [rbx+9E98h], 3
 * 00000001404287B3: sti
 * 00000001404287B4: test    cs:HvlEnlightenments, 1
 * 00000001404287BE: jz      short loc_1404287C7
 * 00000001404287C0: call    HvlSwitchVirtualAddressSpace
 * 00000001404287C5: jmp     short loc_1404287EE
 * 00000001404287C7: mov     cr3, rcx
 * 00000001404287CA: test    cs:KiKvaShadow, 1
 * 00000001404287D1: jz      short loc_1404287EE
 * 00000001404287D3: bt      ecx, 1
 * 00000001404287D7: jb      short loc_1404287EE
 * 00000001404287D9: mov     rax, cr4
 * 00000001404287DC: xor     rax, 80h
 * 00000001404287E2: mov     cr4, rax
 * 00000001404287E5: xor     rax, 80h
 * 00000001404287EB: mov     cr4, rax
 * 00000001404287EE: movzx   ecx, byte ptr [rbx+0D1h]
 * 00000001404287F5: movzx   eax, byte ptr [rbx+0D0h]
 * 00000001404287FC: mov     rdx, [rdi+0B8h]
 * 0000000140428803: lock btr [rdx+rax*8+178h], rcx
 * 000000014042880D: mov     rax, [rsi+28h]
 * 0000000140428811: test    cs:KiKvaShadow, 1
 * 0000000140428818: jnz     short loc_140428827
 * 000000014042881A: mov     r15, [rbx-178h]
 * 0000000140428821: mov     [r15+4], rax
 * 0000000140428825: jmp     short loc_14042882E
 * 0000000140428827: mov     [rbx+9E88h], rax
 * 000000014042882E: mov     [rbx+28h], rax
 * 0000000140428832: test    rax, rax
 * 0000000140428835: jge     loc_140428A47
 * 000000014042883B: cmp     cs:KiCpuTracingFlags, 0
 * 0000000140428842: jnz     loc_1404289F0
 * 0000000140428848: bt      rbp, 37h ; '7'
 * 000000014042884D: jnb     short loc_14042886F
 * 000000014042884F: mov     ecx, 1C4h
 * 0000000140428854: mov     rax, [rdi+428h]
 * 000000014042885B: mov     rdx, [rsi+428h]
 * 0000000140428862: cmp     rax, rdx
 * 0000000140428865: jz      short loc_14042886F
 * 0000000140428867: mov     eax, edx
 * 0000000140428869: shr     rdx, 20h
 * 000000014042886D: wrmsr
 * 000000014042886F: mov     rdx, [rdi+250h]
 * 0000000140428876: mov     rax, rdx
 * 0000000140428879: and     rax, 40000h
 * 000000014042887F: and     rdx, cs:KeEnabledSupervisorXStateFeatures
 * 0000000140428886: or      rdx, rax
 * 0000000140428889: or      rdx, [rsi+250h]
 * 0000000140428890: mov     byte ptr [rdi+71h], 0
 * 0000000140428894: mov     rcx, [rsi+60h]
 * 0000000140428898: and     rdx, 0FFFFFFFFFFFFFFFDh
 * 000000014042889C: mov     eax, edx
 * 000000014042889E: jz      short loc_1404288CB
 * 00000001404288A0: shr     rdx, 20h
 * 00000001404288A4: bt      rbp, 29h ; ')'
 * 00000001404288A9: jnb     short loc_1404288B1
 * 00000001404288AB: test    al, 1
 * 00000001404288AD: jz      short loc_1404288B1
 * 00000001404288AF: fninit
 * 00000001404288B1: bt      rbp, 26h ; '&'
 * 00000001404288B6: jb      short loc_1404288C3
 * 00000001404288B8: bt      ebp, 17h
 * 00000001404288BC: jb      short loc_1404288C8
 * 00000001404288BE: fxrstor dword ptr [rcx]
 * 00000001404288C1: jmp     short loc_1404288CB
 * 00000001404288C3: xrstors byte ptr [rcx]
 * 00000001404288C6: jmp     short loc_1404288CB
 * 00000001404288C8: xrstor  byte ptr [rcx]
 * 00000001404288CB: ldmxcsr dword ptr [rcx+18h]
 * 00000001404288CF: test    eax, 100h
 * 00000001404288D4: jz      short loc_1404288E7
 * 00000001404288D6: cmp     cs:KiIptMsrMask, 0
 * 00000001404288DD: jz      short loc_1404288E7
 * 00000001404288DF: mov     rcx, rsi
 * 00000001404288E2: call    KiRestoreThreadIptState
 * 00000001404288E7: bt      dword ptr [rsi+74h], 0Ah
 * 00000001404288EC: jb      loc_140428992
 * 00000001404288F2: mov     rax, [rsi+220h]
 * 00000001404288F9: cmp     qword ptr [rax+580h], 0
 * 0000000140428901: mov     eax, [rsi+638h]
 * 0000000140428907: jz      short loc_140428914
 * 0000000140428909: mov     eax, [rsi+0F0h]
 * 000000014042890F: add     eax, 2000h
 * 0000000140428914: mov     rcx, [rbx-180h]
 * 000000014042891B: mov     [rcx+52h], ax
 * 000000014042891F: shr     eax, 10h
 * 0000000140428922: mov     [rcx+54h], al
 * 0000000140428925: mov     [rcx+57h], ah
 * 0000000140428928: mov     eax, 53h ; 'S'
 * 000000014042892D: mov     fs, eax
 * 000000014042892F: mov     eax, [rsi+638h]
 * 0000000140428935: mov     edx, [rsi+63Ch]
 * 000000014042893B: mov     ecx, 0C0000100h
 * 0000000140428940: wrmsr
 * 0000000140428942: mov     eax, ds
 * 0000000140428944: mov     edx, es
 * 0000000140428946: and     eax, edx
 * 0000000140428948: mov     edx, gs
 * 000000014042894A: and     eax, edx
 * 000000014042894C: cmp     ax, 2Bh ; '+'
 * 0000000140428950: jz      short loc_140428965
 * 0000000140428952: mov     edx, 2Bh ; '+'
 * 0000000140428957: mov     ds, edx
 * 0000000140428959: mov     es, edx
 * 000000014042895B: cli
 * 000000014042895C: swapgs
 * 000000014042895F: mov     gs, edx
 * 0000000140428961: swapgs
 * 0000000140428964: sti
 * 0000000140428965: mov     rax, [rsi+0F0h]
 * 000000014042896C: mov     edx, [rsi+0F4h]
 * 0000000140428972: mov     [rbx-150h], rax
 * 0000000140428979: test    byte ptr [rsi+3], 4
 * 000000014042897D: jz      short loc_14042898B
 * 000000014042897F: mov     eax, [rsi+640h]
 * 0000000140428985: mov     edx, [rsi+644h]
 * 000000014042898B: mov     ecx, 0C0000102h
 * 0000000140428990: wrmsr
 * 0000000140428992: test    dword ptr [rbx+33BCh], 10001h
 * 000000014042899C: jnz     loc_140428A2E
 * 00000001404289A2: inc     dword ptr [rsi+154h]
 * 00000001404289A8: cmp     byte ptr [rsi+0C1h], 1
 * 00000001404289AF: jnz     short loc_1404289D4
 * 00000001404289B1: movzx   ax, [rsp+38h+var_10]
 * 00000001404289B7: or      ax, [rsi+1E6h]
 * 00000001404289BE: jz      short loc_1404289D4
 * 00000001404289C0: mov     ecx, 1
 * 00000001404289C5: call    cs:__imp_HalRequestSoftwareInterrupt
 * 00000001404289CC: nop     dword ptr [rax+rax+00h]
 * 00000001404289D1: or      rcx, rsp
 * 00000001404289D4: setz    al
 * 00000001404289D7: add     rsp, 30h
 * 00000001404289DB: pop     rbp
 * 00000001404289DC: retn
 * 00000001404289DD: mov     rcx, rbx
 * 00000001404289E0: mov     rdx, rsi
 * 00000001404289E3: mov     r8, r12
 * 00000001404289E6: call    KiBeginThreadAccountingPeriod
 * 00000001404289EB: jmp     loc_14042843D
 * 00000001404289F0: test    dword ptr cs:PerfGlobalGroupMask+4, 4
 * 00000001404289FA: jz      short loc_140428A07
 * 00000001404289FC: mov     rcx, rdi
 * 00000001404289FF: mov     rdx, rsi
 * 0000000140428A02: call    EtwTraceContextSwap
 * 0000000140428A07: test    cs:KiCpuTracingFlags, 2
 * 0000000140428A11: jz      short loc_140428A18
 * 0000000140428A13: call    KiClearLastBranchRecordStack
 * 0000000140428A18: test    cs:KiCpuTracingFlags, 4
 * 0000000140428A22: jz      short loc_140428A29
 * 0000000140428A24: call    KiResetProcessorTraceBuffer
 * 0000000140428A29: jmp     loc_140428848
 * 0000000140428A2E: xor     r9, r9; BugCheckParameter3
 * 0000000140428A31: mov     [rsp+38h+BugCheckParameter4], r9; BugCheckParameter4
 * 0000000140428A36: mov     r8, rsi; BugCheckParameter2
 * 0000000140428A39: mov     rdx, rdi; BugCheckParameter1
 * 0000000140428A3C: mov     ecx, 0B8h; BugCheckCode
 * 0000000140428A41: call    KeBugCheckEx
 * 0000000140428A47: xor     r9, r9; BugCheckParameter3
 * 0000000140428A4A: mov     [rsp+38h+BugCheckParameter4], r9; BugCheckParameter4
 * 0000000140428A4F: mov     r8, rsi; BugCheckParameter2
 * 0000000140428A52: mov     rdx, rdi; BugCheckParameter1
 * 0000000140428A55: mov     ecx, 1CEh; BugCheckCode
 * 0000000140428A5A: call    KeBugCheckEx
 * 0000000140428A5F: xor     ebp, ebp
 * 0000000140428A61: inc     ebp
 * 0000000140428A63: test    cs:HvlLongSpinCountMask, ebp
 * 0000000140428A69: jnz     short loc_140428A87
 * 0000000140428A6B: test    cs:HvlEnlightenments, 40h
 * 0000000140428A75: jz      short loc_140428A87
 * 0000000140428A77: call    KiCheckVpBackingLongSpinWaitHypercall
 * 0000000140428A7C: test    al, al
 * 0000000140428A7E: jz      short loc_140428A87
 * 0000000140428A80: mov     ecx, ebp
 * 0000000140428A82: call    HvlNotifyLongSpinWait
 * 0000000140428A87: pause
 * 0000000140428A89: cmp     byte ptr [rsi+71h], 0
 * 0000000140428A8D: jz      loc_1404283D8
 * 0000000140428A93: jmp     short loc_140428A61
 */
