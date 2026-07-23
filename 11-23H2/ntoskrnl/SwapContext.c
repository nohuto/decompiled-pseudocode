/*
 * XREFs of SwapContext @ 0x140428750
 * Callers:
 *     KiIdleLoop @ 0x140423D50 (KiIdleLoop.c)
 *     KiSwapContext @ 0x140428670 (KiSwapContext.c)
 * Callees:
 *     HalRequestSoftwareInterrupt @ 0x140254DD0 (HalRequestSoftwareInterrupt.c)
 *     KiBeginThreadAccountingPeriod @ 0x140309040 (KiBeginThreadAccountingPeriod.c)
 *     KiUpdateSpeculationControl @ 0x140325E50 (KiUpdateSpeculationControl.c)
 *     EtwTraceContextSwap @ 0x14038A500 (EtwTraceContextSwap.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1403CD4A0 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     HvlNotifyLongSpinWait @ 0x1403CD4D0 (HvlNotifyLongSpinWait.c)
 *     KeBugCheckEx @ 0x14041EDE0 (KeBugCheckEx.c)
 *     SwapContext @ 0x140428750 (SwapContext.c)
 *     KiClearLastBranchRecordStack @ 0x1404601D0 (KiClearLastBranchRecordStack.c)
 *     KeCheckAndApplyBamQos @ 0x140461770 (KeCheckAndApplyBamQos.c)
 *     HvlSwitchVirtualAddressSpace @ 0x140549F50 (HvlSwitchVirtualAddressSpace.c)
 *     KiResetProcessorTraceBuffer @ 0x14056D5E0 (KiResetProcessorTraceBuffer.c)
 *     KiRestoreThreadIptState @ 0x140573220 (KiRestoreThreadIptState.c)
 *     KiSaveThreadIptState @ 0x140573350 (KiSaveThreadIptState.c)
 *     KiCheckAndApplyCacheIsolation @ 0x1405773E0 (KiCheckAndApplyCacheIsolation.c)
 */

/*
 * Hex-Rays decompilation failed for SwapContext @ 0x140428750
 * Reason: Hex-Rays returned no pseudocode for 0x140428750
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140428750: push    rbp
 * 0000000140428752: sub     rsp, 30h
 * 0000000140428756: prefetchw byte ptr [rsi+71h]
 * 000000014042875A: mov     [rsp+38h+var_10], cl
 * 000000014042875E: cmp     byte ptr [rsi+71h], 0
 * 0000000140428762: jnz     loc_140428DEF
 * 0000000140428768: mov     byte ptr [rsi+71h], 1
 * 000000014042876C: mov     eax, cs:KiHresetMask
 * 0000000140428772: test    eax, eax
 * 0000000140428774: jz      short loc_14042877C
 * 0000000140428776: hreset  0
 * 000000014042877C: cli
 * 000000014042877D: rdtsc
 * 000000014042877F: shl     rdx, 20h
 * 0000000140428783: or      rax, rdx
 * 0000000140428786: sub     rax, [rbx+8180h]
 * 000000014042878D: add     [rbx+8278h], rax
 * 0000000140428794: add     [rbx+8180h], rax
 * 000000014042879B: mov     r12, rax
 * 000000014042879E: test    byte ptr [rbx+6], 0FFh
 * 00000001404287A2: jz      short loc_1404287BF
 * 00000001404287A4: and     byte ptr [rbx+6], 0
 * 00000001404287A8: cmp     [rbx+18h], rsi
 * 00000001404287AC: jz      short loc_1404287BF
 * 00000001404287AE: mov     ecx, 2
 * 00000001404287B3: call    cs:__imp_HalRequestSoftwareInterrupt
 * 00000001404287BA: nop     dword ptr [rax+rax+00h]
 * 00000001404287BF: test    byte ptr [rsi+2], 0B6h
 * 00000001404287C3: jnz     loc_140428D6D
 * 00000001404287C9: dec     byte ptr [rbx+20h]
 * 00000001404287CC: sti
 * 00000001404287CD: inc     dword ptr [rbx+2D3Ch]
 * 00000001404287D3: mov     rbp, cs:KeFeatureBits
 * 00000001404287DA: cmp     cs:KiCacheIsoBitmap, 0
 * 00000001404287E1: jz      short loc_1404287F5
 * 00000001404287E3: bt      rbp, 2Ch ; ','
 * 00000001404287E8: jnb     short loc_1404287F5
 * 00000001404287EA: mov     rcx, rbx
 * 00000001404287ED: mov     rdx, rsi
 * 00000001404287F0: call    KiCheckAndApplyCacheIsolation
 * 00000001404287F5: cmp     [rbx+18h], rsi
 * 00000001404287F9: jz      short loc_14042881B
 * 00000001404287FB: mov     ecx, [rsi+200h]
 * 0000000140428801: mov     eax, [rbx+0ECh]
 * 0000000140428807: xor     eax, ecx
 * 0000000140428809: test    eax, 0FFh
 * 000000014042880E: jz      short loc_14042881B
 * 0000000140428810: mov     rcx, rbx
 * 0000000140428813: mov     rdx, rsi
 * 0000000140428816: call    KeCheckAndApplyBamQos
 * 000000014042881B: mov     rdx, [rdi+250h]
 * 0000000140428822: mov     rcx, [rdi+60h]
 * 0000000140428826: and     rdx, 0FFFFFFFFFFFFFFFDh
 * 000000014042882A: mov     eax, edx
 * 000000014042882C: jz      short loc_140428858
 * 000000014042882E: shr     rdx, 20h
 * 0000000140428832: bt      rbp, 26h ; '&'
 * 0000000140428837: jb      short loc_140428850
 * 0000000140428839: bt      rbp, 0Fh
 * 000000014042883E: jb      short loc_140428855
 * 0000000140428840: bt      ebp, 17h
 * 0000000140428844: jnb     short loc_14042884B
 * 0000000140428846: xsave   byte ptr [rcx]
 * 0000000140428849: jmp     short loc_140428858
 * 000000014042884B: fxsave  dword ptr [rcx]
 * 000000014042884E: jmp     short loc_140428858
 * 0000000140428850: xsaves  byte ptr [rcx]
 * 0000000140428853: jmp     short loc_140428858
 * 0000000140428855: xsaveopt byte ptr [rcx]
 * 0000000140428858: stmxcsr dword ptr [rcx+18h]
 * 000000014042885C: test    eax, 100h
 * 0000000140428861: jz      short loc_140428874
 * 0000000140428863: cmp     cs:KiIptMsrMask, 0
 * 000000014042886A: jz      short loc_140428874
 * 000000014042886C: mov     rcx, rdi
 * 000000014042886F: call    KiSaveThreadIptState
 * 0000000140428874: mov     [rdi+58h], rsp
 * 0000000140428878: mov     rsp, [rsi+58h]
 * 000000014042887C: test    cs:KiKernelCetEnabled, 1
 * 0000000140428883: jz      short loc_1404288B2
 * 0000000140428885: mov     rcx, [rsi+410h]
 * 000000014042888C: mov     [rbx+9428h], rcx
 * 0000000140428893: rdsspq  rdx
 * 0000000140428898: mov     rcx, [rsi+408h]
 * 000000014042889F: rstorssp qword ptr [rcx]
 * 00000001404288A3: saveprevssp
 * 00000001404288A7: sub     rdx, 8
 * 00000001404288AB: mov     [rdi+408h], rdx
 * 00000001404288B2: mov     rax, [rdi+220h]
 * 00000001404288B9: cmp     qword ptr [rax+580h], 0
 * 00000001404288C1: jz      short loc_1404288D6
 * 00000001404288C3: mov     ecx, 0C0000100h
 * 00000001404288C8: rdmsr
 * 00000001404288CA: mov     [rdi+638h], eax
 * 00000001404288D0: mov     [rdi+63Ch], edx
 * 00000001404288D6: btr     dword ptr gs:856h, 0
 * 00000001404288E0: jnb     short loc_1404288E6
 * 00000001404288E2: or      byte ptr [rdi+7Fh], 2
 * 00000001404288E6: btr     dword ptr [rsi+7Fh], 1
 * 00000001404288EB: jnb     short loc_1404288F6
 * 00000001404288ED: or      byte ptr gs:856h, 1
 * 00000001404288F6: mov     rcx, [rsi+220h]
 * 00000001404288FD: or      cl, [rbx+6ECh]
 * 0000000140428903: and     cl, 0C2h
 * 0000000140428906: cmp     rcx, [rdi+220h]
 * 000000014042890D: jz      short loc_14042891C
 * 000000014042890F: and     cl, 0C0h
 * 0000000140428912: call    KiUpdateSpeculationControl
 * 0000000140428917: jmp     loc_140428AD2
 * 000000014042891C: movzx   ecx, byte ptr gs:856h
 * 0000000140428925: and     cx, 3
 * 0000000140428929: cmp     cx, 1
 * 000000014042892D: jnz     loc_140428AD2
 * 0000000140428933: cli
 * 0000000140428934: movzx   eax, word ptr gs:852h
 * 000000014042893D: cmp     gs:864h, ax
 * 0000000140428946: jz      short loc_14042895A
 * 0000000140428948: mov     gs:864h, ax
 * 0000000140428951: mov     ecx, 48h ; 'H'
 * 0000000140428956: xor     edx, edx
 * 0000000140428958: wrmsr
 * 000000014042895A: movzx   edx, byte ptr gs:854h
 * 0000000140428963: test    edx, 10h
 * 0000000140428969: jz      short loc_140428982
 * 000000014042896B: mov     eax, 1
 * 0000000140428970: xor     edx, edx
 * 0000000140428972: mov     ecx, 49h ; 'I'
 * 0000000140428977: wrmsr
 * 0000000140428979: movzx   edx, byte ptr gs:854h
 * 0000000140428982: test    edx, 40h
 * 0000000140428988: jz      loc_140428AC5
 * 000000014042898E: call    loc_140428AA1
 * 0000000140428993: add     rsp, 8
 * 0000000140428997: call    loc_140428AAA
 * 000000014042899C: add     rsp, 8
 * 00000001404289A0: call    loc_140428993
 * 00000001404289A5: add     rsp, 8
 * 00000001404289A9: call    loc_14042899C
 * 00000001404289AE: add     rsp, 8
 * 00000001404289B2: call    loc_1404289A5
 * 00000001404289B7: add     rsp, 8
 * 00000001404289BB: call    loc_1404289AE
 * 00000001404289C0: add     rsp, 8
 * 00000001404289C4: call    loc_1404289B7
 * 00000001404289C9: add     rsp, 8
 * 00000001404289CD: call    loc_1404289C0
 * 00000001404289D2: add     rsp, 8
 * 00000001404289D6: call    loc_1404289C9
 * 00000001404289DB: add     rsp, 8
 * 00000001404289DF: call    loc_1404289D2
 * 00000001404289E4: add     rsp, 8
 * 00000001404289E8: call    loc_1404289DB
 * 00000001404289ED: add     rsp, 8
 * 00000001404289F1: call    loc_1404289E4
 * 00000001404289F6: add     rsp, 8
 * 00000001404289FA: call    loc_1404289ED
 * 00000001404289FF: add     rsp, 8
 * 0000000140428A03: call    loc_1404289F6
 * 0000000140428A08: add     rsp, 8
 * 0000000140428A0C: call    loc_1404289FF
 * 0000000140428A11: add     rsp, 8
 * 0000000140428A15: call    loc_140428A08
 * 0000000140428A1A: add     rsp, 8
 * 0000000140428A1E: call    loc_140428A11
 * 0000000140428A23: add     rsp, 8
 * 0000000140428A27: call    loc_140428A1A
 * 0000000140428A2C: add     rsp, 8
 * 0000000140428A30: call    loc_140428A23
 * 0000000140428A35: add     rsp, 8
 * 0000000140428A39: call    loc_140428A2C
 * 0000000140428A3E: add     rsp, 8
 * 0000000140428A42: call    loc_140428A35
 * 0000000140428A47: add     rsp, 8
 * 0000000140428A4B: call    loc_140428A3E
 * 0000000140428A50: add     rsp, 8
 * 0000000140428A54: call    loc_140428A47
 * 0000000140428A59: add     rsp, 8
 * 0000000140428A5D: call    loc_140428A50
 * 0000000140428A62: add     rsp, 8
 * 0000000140428A66: call    loc_140428A59
 * 0000000140428A6B: add     rsp, 8
 * 0000000140428A6F: call    loc_140428A62
 * 0000000140428A74: add     rsp, 8
 * 0000000140428A78: call    loc_140428A6B
 * 0000000140428A7D: add     rsp, 8
 * 0000000140428A81: call    loc_140428A74
 * 0000000140428A86: add     rsp, 8
 * 0000000140428A8A: call    loc_140428A7D
 * 0000000140428A8F: add     rsp, 8
 * 0000000140428A93: call    loc_140428A86
 * 0000000140428A98: add     rsp, 8
 * 0000000140428A9C: call    loc_140428A8F
 * 0000000140428AA1: add     rsp, 8
 * 0000000140428AA5: call    loc_140428A98
 * 0000000140428AAA: add     rsp, 8
 * 0000000140428AAE: mov     eax, 0DADAh
 * 0000000140428AB3: test    byte ptr gs:862h, 8
 * 0000000140428ABC: jz      short loc_140428AC5
 * 0000000140428ABE: mov     al, 20h ; ' '
 * 0000000140428AC0: incsspq rax
 * 0000000140428AC5: lfence
 * 0000000140428AC8: or      byte ptr gs:856h, 2
 * 0000000140428AD1: sti
 * 0000000140428AD2: mov     r14, [rsi+0B8h]
 * 0000000140428AD9: cmp     r14, [rdi+0B8h]
 * 0000000140428AE0: jz      loc_140428B9D
 * 0000000140428AE6: movzx   ecx, byte ptr [rbx+0D1h]
 * 0000000140428AED: movzx   eax, byte ptr [rbx+0D0h]
 * 0000000140428AF4: lock bts [r14+rax*8+178h], rcx
 * 0000000140428AFE: mov     rcx, [r14+28h]
 * 0000000140428B02: test    cs:KiKvaShadow, 1
 * 0000000140428B09: jz      short loc_140428B44
 * 0000000140428B0B: cli
 * 0000000140428B0C: bt      ecx, 1
 * 0000000140428B10: jnb     short loc_140428B1E
 * 0000000140428B12: bts     rcx, 3Fh ; '?'
 * 0000000140428B17: or      dword ptr [rbx+9E98h], 1
 * 0000000140428B1E: mov     [rbx+9E80h], rcx
 * 0000000140428B25: btr     rcx, 3Fh ; '?'
 * 0000000140428B2A: and     dword ptr [rbx+9E98h], 0FFFFFFFDh
 * 0000000140428B31: bt      dword ptr [r14+390h], 0
 * 0000000140428B3A: jnb     short loc_140428B43
 * 0000000140428B3C: xor     dword ptr [rbx+9E98h], 3
 * 0000000140428B43: sti
 * 0000000140428B44: test    cs:HvlEnlightenments, 1
 * 0000000140428B4E: jz      short loc_140428B57
 * 0000000140428B50: call    HvlSwitchVirtualAddressSpace
 * 0000000140428B55: jmp     short loc_140428B7E
 * 0000000140428B57: mov     cr3, rcx
 * 0000000140428B5A: test    cs:KiKvaShadow, 1
 * 0000000140428B61: jz      short loc_140428B7E
 * 0000000140428B63: bt      ecx, 1
 * 0000000140428B67: jb      short loc_140428B7E
 * 0000000140428B69: mov     rax, cr4
 * 0000000140428B6C: xor     rax, 80h
 * 0000000140428B72: mov     cr4, rax
 * 0000000140428B75: xor     rax, 80h
 * 0000000140428B7B: mov     cr4, rax
 * 0000000140428B7E: movzx   ecx, byte ptr [rbx+0D1h]
 * 0000000140428B85: movzx   eax, byte ptr [rbx+0D0h]
 * 0000000140428B8C: mov     rdx, [rdi+0B8h]
 * 0000000140428B93: lock btr [rdx+rax*8+178h], rcx
 * 0000000140428B9D: mov     rax, [rsi+28h]
 * 0000000140428BA1: test    cs:KiKvaShadow, 1
 * 0000000140428BA8: jnz     short loc_140428BB7
 * 0000000140428BAA: mov     r15, [rbx-178h]
 * 0000000140428BB1: mov     [r15+4], rax
 * 0000000140428BB5: jmp     short loc_140428BBE
 * 0000000140428BB7: mov     [rbx+9E88h], rax
 * 0000000140428BBE: mov     [rbx+28h], rax
 * 0000000140428BC2: test    rax, rax
 * 0000000140428BC5: jge     loc_140428DD7
 * 0000000140428BCB: cmp     cs:KiCpuTracingFlags, 0
 * 0000000140428BD2: jnz     loc_140428D80
 * 0000000140428BD8: bt      rbp, 37h ; '7'
 * 0000000140428BDD: jnb     short loc_140428BFF
 * 0000000140428BDF: mov     ecx, 1C4h
 * 0000000140428BE4: mov     rax, [rdi+428h]
 * 0000000140428BEB: mov     rdx, [rsi+428h]
 * 0000000140428BF2: cmp     rax, rdx
 * 0000000140428BF5: jz      short loc_140428BFF
 * 0000000140428BF7: mov     eax, edx
 * 0000000140428BF9: shr     rdx, 20h
 * 0000000140428BFD: wrmsr
 * 0000000140428BFF: mov     rdx, [rdi+250h]
 * 0000000140428C06: mov     rax, rdx
 * 0000000140428C09: and     rax, 40000h
 * 0000000140428C0F: and     rdx, cs:KeEnabledSupervisorXStateFeatures
 * 0000000140428C16: or      rdx, rax
 * 0000000140428C19: or      rdx, [rsi+250h]
 * 0000000140428C20: mov     byte ptr [rdi+71h], 0
 * 0000000140428C24: mov     rcx, [rsi+60h]
 * 0000000140428C28: and     rdx, 0FFFFFFFFFFFFFFFDh
 * 0000000140428C2C: mov     eax, edx
 * 0000000140428C2E: jz      short loc_140428C5B
 * 0000000140428C30: shr     rdx, 20h
 * 0000000140428C34: bt      rbp, 29h ; ')'
 * 0000000140428C39: jnb     short loc_140428C41
 * 0000000140428C3B: test    al, 1
 * 0000000140428C3D: jz      short loc_140428C41
 * 0000000140428C3F: fninit
 * 0000000140428C41: bt      rbp, 26h ; '&'
 * 0000000140428C46: jb      short loc_140428C53
 * 0000000140428C48: bt      ebp, 17h
 * 0000000140428C4C: jb      short loc_140428C58
 * 0000000140428C4E: fxrstor dword ptr [rcx]
 * 0000000140428C51: jmp     short loc_140428C5B
 * 0000000140428C53: xrstors byte ptr [rcx]
 * 0000000140428C56: jmp     short loc_140428C5B
 * 0000000140428C58: xrstor  byte ptr [rcx]
 * 0000000140428C5B: ldmxcsr dword ptr [rcx+18h]
 * 0000000140428C5F: test    eax, 100h
 * 0000000140428C64: jz      short loc_140428C77
 * 0000000140428C66: cmp     cs:KiIptMsrMask, 0
 * 0000000140428C6D: jz      short loc_140428C77
 * 0000000140428C6F: mov     rcx, rsi
 * 0000000140428C72: call    KiRestoreThreadIptState
 * 0000000140428C77: bt      dword ptr [rsi+74h], 0Ah
 * 0000000140428C7C: jb      loc_140428D22
 * 0000000140428C82: mov     rax, [rsi+220h]
 * 0000000140428C89: cmp     qword ptr [rax+580h], 0
 * 0000000140428C91: mov     eax, [rsi+638h]
 * 0000000140428C97: jz      short loc_140428CA4
 * 0000000140428C99: mov     eax, [rsi+0F0h]
 * 0000000140428C9F: add     eax, 2000h
 * 0000000140428CA4: mov     rcx, [rbx-180h]
 * 0000000140428CAB: mov     [rcx+52h], ax
 * 0000000140428CAF: shr     eax, 10h
 * 0000000140428CB2: mov     [rcx+54h], al
 * 0000000140428CB5: mov     [rcx+57h], ah
 * 0000000140428CB8: mov     eax, 53h ; 'S'
 * 0000000140428CBD: mov     fs, eax
 * 0000000140428CBF: mov     eax, [rsi+638h]
 * 0000000140428CC5: mov     edx, [rsi+63Ch]
 * 0000000140428CCB: mov     ecx, 0C0000100h
 * 0000000140428CD0: wrmsr
 * 0000000140428CD2: mov     eax, ds
 * 0000000140428CD4: mov     edx, es
 * 0000000140428CD6: and     eax, edx
 * 0000000140428CD8: mov     edx, gs
 * 0000000140428CDA: and     eax, edx
 * 0000000140428CDC: cmp     ax, 2Bh ; '+'
 * 0000000140428CE0: jz      short loc_140428CF5
 * 0000000140428CE2: mov     edx, 2Bh ; '+'
 * 0000000140428CE7: mov     ds, edx
 * 0000000140428CE9: mov     es, edx
 * 0000000140428CEB: cli
 * 0000000140428CEC: swapgs
 * 0000000140428CEF: mov     gs, edx
 * 0000000140428CF1: swapgs
 * 0000000140428CF4: sti
 * 0000000140428CF5: mov     rax, [rsi+0F0h]
 * 0000000140428CFC: mov     edx, [rsi+0F4h]
 * 0000000140428D02: mov     [rbx-150h], rax
 * 0000000140428D09: test    byte ptr [rsi+3], 4
 * 0000000140428D0D: jz      short loc_140428D1B
 * 0000000140428D0F: mov     eax, [rsi+640h]
 * 0000000140428D15: mov     edx, [rsi+644h]
 * 0000000140428D1B: mov     ecx, 0C0000102h
 * 0000000140428D20: wrmsr
 * 0000000140428D22: test    dword ptr [rbx+33BCh], 10001h
 * 0000000140428D2C: jnz     loc_140428DBE
 * 0000000140428D32: inc     dword ptr [rsi+154h]
 * 0000000140428D38: cmp     byte ptr [rsi+0C1h], 1
 * 0000000140428D3F: jnz     short loc_140428D64
 * 0000000140428D41: movzx   ax, [rsp+38h+var_10]
 * 0000000140428D47: or      ax, [rsi+1E6h]
 * 0000000140428D4E: jz      short loc_140428D64
 * 0000000140428D50: mov     ecx, 1
 * 0000000140428D55: call    cs:__imp_HalRequestSoftwareInterrupt
 * 0000000140428D5C: nop     dword ptr [rax+rax+00h]
 * 0000000140428D61: or      rcx, rsp
 * 0000000140428D64: setz    al
 * 0000000140428D67: add     rsp, 30h
 * 0000000140428D6B: pop     rbp
 * 0000000140428D6C: retn
 * 0000000140428D6D: mov     rcx, rbx
 * 0000000140428D70: mov     rdx, rsi
 * 0000000140428D73: mov     r8, r12
 * 0000000140428D76: call    KiBeginThreadAccountingPeriod
 * 0000000140428D7B: jmp     loc_1404287CD
 * 0000000140428D80: test    dword ptr cs:PerfGlobalGroupMask+4, 4
 * 0000000140428D8A: jz      short loc_140428D97
 * 0000000140428D8C: mov     rcx, rdi
 * 0000000140428D8F: mov     rdx, rsi
 * 0000000140428D92: call    EtwTraceContextSwap
 * 0000000140428D97: test    cs:KiCpuTracingFlags, 2
 * 0000000140428DA1: jz      short loc_140428DA8
 * 0000000140428DA3: call    KiClearLastBranchRecordStack
 * 0000000140428DA8: test    cs:KiCpuTracingFlags, 4
 * 0000000140428DB2: jz      short loc_140428DB9
 * 0000000140428DB4: call    KiResetProcessorTraceBuffer
 * 0000000140428DB9: jmp     loc_140428BD8
 * 0000000140428DBE: xor     r9, r9; BugCheckParameter3
 * 0000000140428DC1: mov     [rsp+38h+BugCheckParameter4], r9; BugCheckParameter4
 * 0000000140428DC6: mov     r8, rsi; BugCheckParameter2
 * 0000000140428DC9: mov     rdx, rdi; BugCheckParameter1
 * 0000000140428DCC: mov     ecx, 0B8h; BugCheckCode
 * 0000000140428DD1: call    KeBugCheckEx
 * 0000000140428DD7: xor     r9, r9; BugCheckParameter3
 * 0000000140428DDA: mov     [rsp+38h+BugCheckParameter4], r9; BugCheckParameter4
 * 0000000140428DDF: mov     r8, rsi; BugCheckParameter2
 * 0000000140428DE2: mov     rdx, rdi; BugCheckParameter1
 * 0000000140428DE5: mov     ecx, 1CEh; BugCheckCode
 * 0000000140428DEA: call    KeBugCheckEx
 * 0000000140428DEF: xor     ebp, ebp
 * 0000000140428DF1: inc     ebp
 * 0000000140428DF3: test    cs:HvlLongSpinCountMask, ebp
 * 0000000140428DF9: jnz     short loc_140428E17
 * 0000000140428DFB: test    cs:HvlEnlightenments, 40h
 * 0000000140428E05: jz      short loc_140428E17
 * 0000000140428E07: call    KiCheckVpBackingLongSpinWaitHypercall
 * 0000000140428E0C: test    al, al
 * 0000000140428E0E: jz      short loc_140428E17
 * 0000000140428E10: mov     ecx, ebp
 * 0000000140428E12: call    HvlNotifyLongSpinWait
 * 0000000140428E17: pause
 * 0000000140428E19: cmp     byte ptr [rsi+71h], 0
 * 0000000140428E1D: jz      loc_140428768
 * 0000000140428E23: jmp     short loc_140428DF1
 */
