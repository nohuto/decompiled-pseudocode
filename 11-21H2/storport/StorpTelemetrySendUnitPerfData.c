/*
 * XREFs of StorpTelemetrySendUnitPerfData @ 0x1C00118A8
 * Callers:
 *     StorpLogPerUnitStatistics @ 0x1C00039A4 (StorpLogPerUnitStatistics.c)
 * Callees:
 *     RaidAllocatePool @ 0x1C000F8A0 (RaidAllocatePool.c)
 *     McTemplateK0quuujjqzqssszstxuxxqqxxxxxxxqqqzxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx_EtwWriteTransfer @ 0x1C0012944 (McTemplateK0quuujjqzqssszstxuxxqqxxxxxxxqqqzxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx_EtwWriteTran.c)
 *     StorpTelemetryLogUnitPerfDataMeasures @ 0x1C001319C (StorpTelemetryLogUnitPerfDataMeasures.c)
 *     __security_check_cookie @ 0x1C0022BF0 (__security_check_cookie.c)
 *     memmove @ 0x1C0024080 (memmove.c)
 *     memset @ 0x1C0024340 (memset.c)
 *     StorpTelemetryLogUnitPerfDataCriticalData @ 0x1C0061570 (StorpTelemetryLogUnitPerfDataCriticalData.c)
 *     StorpTelemetrySendUnitIoSizeDistributionData @ 0x1C00635DC (StorpTelemetrySendUnitIoSizeDistributionData.c)
 */

/*
 * Hex-Rays decompilation failed for StorpTelemetrySendUnitPerfData @ 0x1C00118A8
 * Reason: Hex-Rays returned no pseudocode for 0x1C00118A8
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00118A8: mov     rax, rsp
 * 00000001C00118AB: mov     [rax+10h], rbx
 * 00000001C00118AF: mov     [rax+18h], rsi
 * 00000001C00118B3: mov     [rax+20h], rdi
 * 00000001C00118B7: push    rbp
 * 00000001C00118B8: push    r12
 * 00000001C00118BA: push    r13
 * 00000001C00118BC: push    r14
 * 00000001C00118BE: push    r15
 * 00000001C00118C0: lea     rbp, [rax-168h]
 * 00000001C00118C7: sub     rsp, 410h
 * 00000001C00118CE: mov     rax, cs:__security_cookie
 * 00000001C00118D5: xor     rax, rsp
 * 00000001C00118D8: mov     [rbp+160h+var_30], rax
 * 00000001C00118DF: mov     r14, rcx
 * 00000001C00118E2: xor     r10d, r10d
 * 00000001C00118E5: lea     rcx, [rbp+160h+var_188]; void *
 * 00000001C00118E9: mov     qword ptr [rbp+160h+PerformanceFrequency], r10
 * 00000001C00118ED: xor     edx, edx; Val
 * 00000001C00118EF: mov     r8d, 158h; Size
 * 00000001C00118F5: call    memset
 * 00000001C00118FA: mov     ebx, dword ptr cs:qword_1C00797D0
 * 00000001C0011900: xor     r11d, r11d
 * 00000001C0011903: mov     r15d, r11d
 * 00000001C0011906: mov     [rbp+160h+var_1D0], r11
 * 00000001C001190A: mov     r13d, r11d
 * 00000001C001190D: mov     edi, r11d
 * 00000001C0011910: mov     esi, r11d
 * 00000001C0011913: mov     [rbp+160h+var_1C8], r11
 * 00000001C0011917: mov     r12d, r11d
 * 00000001C001191A: mov     [rbp+160h+var_1C0], r11
 * 00000001C001191E: mov     [rbp+160h+var_1B8], r11
 * 00000001C0011922: cmp     [r14+8C8h], r11
 * 00000001C0011929: jz      loc_1C00298DC
 * 00000001C001192F: mov     edx, cs:Size
 * 00000001C0011935: lea     ecx, [r11+48h]
 * 00000001C0011939: mov     r9, [r14+8]
 * 00000001C001193D: mov     r8d, 65546152h
 * 00000001C0011943: call    RaidAllocatePool
 * 00000001C0011948: xor     r11d, r11d
 * 00000001C001194B: mov     r15, rax
 * 00000001C001194E: test    rax, rax
 * 00000001C0011951: jz      loc_1C00298E6
 * 00000001C0011957: mov     r9, [r14+8]
 * 00000001C001195B: lea     edx, [rbx+rbx*2]
 * 00000001C001195E: shl     edx, 3
 * 00000001C0011961: lea     ecx, [r12+48h]
 * 00000001C0011966: mov     r8d, 65546152h
 * 00000001C001196C: call    RaidAllocatePool
 * 00000001C0011971: xor     r11d, r11d
 * 00000001C0011974: mov     r13, rax
 * 00000001C0011977: test    rax, rax
 * 00000001C001197A: jz      loc_1C00298E6
 * 00000001C0011980: cmp     cs:UseQPCTime, r11b
 * 00000001C0011987: jz      loc_1C00298F0
 * 00000001C001198D: lea     rcx, [rbp+160h+PerformanceFrequency]; PerformanceFrequency
 * 00000001C0011991: call    cs:__imp_KeQueryPerformanceCounter
 * 00000001C0011998: nop     dword ptr [rax+rax+00h]
 * 00000001C001199D: xor     r9d, r9d
 * 00000001C00119A0: mov     rcx, rax
 * 00000001C00119A3: mov     r8d, 1
 * 00000001C00119A9: test    rax, rax
 * 00000001C00119AC: jle     short loc_1C00119BE
 * 00000001C00119AE: mov     rdx, [r14+8D8h]
 * 00000001C00119B5: cmp     rax, rdx
 * 00000001C00119B8: jl      loc_1C0029902
 * 00000001C00119BE: mov     rax, rcx
 * 00000001C00119C1: sub     rax, [r14+8D8h]
 * 00000001C00119C8: cmp     cs:UseQPCTime, r9b
 * 00000001C00119CF: jz      loc_1C0029910
 * 00000001C00119D5: mov     r8, qword ptr [rbp+160h+PerformanceFrequency]
 * 00000001C00119D9: mov     r10, r9
 * 00000001C00119DC: test    r8, r8
 * 00000001C00119DF: jz      short loc_1C0011A1D
 * 00000001C00119E1: test    rax, rax
 * 00000001C00119E4: jz      short loc_1C0011A1D
 * 00000001C00119E6: xor     edx, edx
 * 00000001C00119E8: div     r8
 * 00000001C00119EB: mov     r10, rax
 * 00000001C00119EE: imul    rax, rdx, 3E8h
 * 00000001C00119F5: xor     edx, edx
 * 00000001C00119F7: div     r8
 * 00000001C00119FA: mov     r9, rdx
 * 00000001C00119FD: imul    rdx, r10, 3E8h
 * 00000001C0011A04: add     rdx, rax
 * 00000001C0011A07: imul    r10, rdx, 2710h
 * 00000001C0011A0E: imul    rax, r9, 2710h
 * 00000001C0011A15: xor     edx, edx
 * 00000001C0011A17: div     r8
 * 00000001C0011A1A: add     r10, rax
 * 00000001C0011A1D: mov     cs:qword_1C00797E8, rcx
 * 00000001C0011A24: mov     rdx, [r14+8C8h]; Src
 * 00000001C0011A2B: mov     [r14+8D8h], rcx
 * 00000001C0011A32: mov     rcx, r15; void *
 * 00000001C0011A35: mov     r8d, cs:Size; Size
 * 00000001C0011A3C: mov     [rbp+160h+var_190], r10
 * 00000001C0011A40: call    memmove
 * 00000001C0011A45: mov     r11d, 1
 * 00000001C0011A4B: xor     r10d, r10d
 * 00000001C0011A4E: cmp     cs:g_RaidNumberProcessors, r11d
 * 00000001C0011A55: mov     r8d, r11d
 * 00000001C0011A58: jbe     short loc_1C0011AA3
 * 00000001C0011A5A: mov     edx, cs:dword_1C00797D8
 * 00000001C0011A60: imul    edx, r8d
 * 00000001C0011A64: add     rdx, r15
 * 00000001C0011A67: test    ebx, ebx
 * 00000001C0011A69: jz      short loc_1C0011A97
 * 00000001C0011A6B: lea     rcx, [r15+8]
 * 00000001C0011A6F: sub     rdx, r15
 * 00000001C0011A72: mov     r9, rbx
 * 00000001C0011A75: mov     rax, [rdx+rcx-8]
 * 00000001C0011A7A: add     [rcx-8], rax
 * 00000001C0011A7E: mov     rax, [rdx+rcx]
 * 00000001C0011A82: add     [rcx], rax
 * 00000001C0011A85: mov     rax, [rdx+rcx+8]
 * 00000001C0011A8A: add     [rcx+8], rax
 * 00000001C0011A8E: lea     rcx, [rcx+18h]
 * 00000001C0011A92: sub     r9, r11
 * 00000001C0011A95: jnz     short loc_1C0011A75
 * 00000001C0011A97: add     r8d, r11d
 * 00000001C0011A9A: cmp     r8d, cs:g_RaidNumberProcessors
 * 00000001C0011AA1: jb      short loc_1C0011A5A
 * 00000001C0011AA3: mov     rcx, [r14+8E0h]
 * 00000001C0011AAA: mov     [rbp+160h+var_1E0], r10
 * 00000001C0011AAE: test    ebx, ebx
 * 00000001C0011AB0: jz      short loc_1C0011B1C
 * 00000001C0011AB2: mov     r12, [rbp+160h+var_1E0]
 * 00000001C0011AB6: lea     r9, [rcx+8]
 * 00000001C0011ABA: mov     r10, r15
 * 00000001C0011ABD: mov     r11, r13
 * 00000001C0011AC0: sub     r10, rcx
 * 00000001C0011AC3: mov     rsi, rbx
 * 00000001C0011AC6: sub     r11, rcx
 * 00000001C0011AC9: mov     edi, 1
 * 00000001C0011ACE: mov     r8, [r10+r9-8]
 * 00000001C0011AD3: sub     r8, [r9-8]
 * 00000001C0011AD7: mov     [r11+r9-8], r8
 * 00000001C0011ADC: mov     rdx, [r10+r9]
 * 00000001C0011AE0: sub     rdx, [r9]
 * 00000001C0011AE3: mov     [r11+r9], rdx
 * 00000001C0011AE7: mov     rcx, [r10+r9+8]
 * 00000001C0011AEC: sub     rcx, [r9+8]
 * 00000001C0011AF0: mov     [r11+r9+8], rcx
 * 00000001C0011AF5: lea     r9, [r9+18h]
 * 00000001C0011AF9: lea     rax, [rdx+r8]
 * 00000001C0011AFD: add     r12, rax
 * 00000001C0011B00: sub     rsi, rdi
 * 00000001C0011B03: jnz     short loc_1C0011ACE
 * 00000001C0011B05: mov     rcx, [r14+8E0h]; void *
 * 00000001C0011B0C: mov     rdi, [rbp+160h+var_1C8]
 * 00000001C0011B10: mov     rsi, [rbp+160h+var_1C0]
 * 00000001C0011B14: mov     [rbp+160h+var_1E0], r12
 * 00000001C0011B18: mov     r12, [rbp+160h+var_1B8]
 * 00000001C0011B1C: mov     r8d, cs:dword_1C00797D8; Size
 * 00000001C0011B23: mov     rdx, r15; Src
 * 00000001C0011B26: call    memmove
 * 00000001C0011B2B: xor     r11d, r11d
 * 00000001C0011B2E: cmp     [rbp+160h+var_1E0], r11
 * 00000001C0011B32: jbe     loc_1C00120EE
 * 00000001C0011B38: cmp     word ptr cs:TelemetryPerfContext, r11w
 * 00000001C0011B40: lea     r10d, [r11+0Bh]
 * 00000001C0011B44: mov     [rbp+160h+var_58], r11
 * 00000001C0011B4B: jz      loc_1C0029918
 * 00000001C0011B51: cmp     word ptr cs:TelemetryPerfContext+2, r11w
 * 00000001C0011B59: jz      loc_1C0029918
 * 00000001C0011B5F: lea     ecx, [r11+1]
 * 00000001C0011B63: mov     r9d, r11d
 * 00000001C0011B66: test    ebx, ebx
 * 00000001C0011B68: jz      short loc_1C0011BDA
 * 00000001C0011B6A: lea     r10, [r13+10h]
 * 00000001C0011B6E: lea     r11d, [rcx+0Ah]
 * 00000001C0011B72: cmp     r9d, dword ptr cs:xmmword_1C0079790+0Ch
 * 00000001C0011B79: jnb     short loc_1C0011BC7
 * 00000001C0011B7B: cmp     r9d, cs:dword_1C007976C
 * 00000001C0011B82: jb      short loc_1C0011BC7
 * 00000001C0011B84: movzx   ecx, word ptr cs:TelemetryPerfContext
 * 00000001C0011B8B: xor     edx, edx
 * 00000001C0011B8D: mov     eax, r9d
 * 00000001C0011B90: div     ecx
 * 00000001C0011B92: mov     rcx, [r10-8]
 * 00000001C0011B96: mov     rdx, [r10-10h]
 * 00000001C0011B9A: cmp     eax, 0Ch
 * 00000001C0011B9D: cmovnb  eax, r11d
 * 00000001C0011BA1: lea     r8, [rax+rax*2]
 * 00000001C0011BA5: mov     rax, [r10]
 * 00000001C0011BA8: add     [rbp+r8*8+160h+var_168], rax
 * 00000001C0011BAD: lea     rax, [rdx+rcx]
 * 00000001C0011BB1: add     [rbp+r8*8+160h+var_170], rcx
 * 00000001C0011BB6: mov     ecx, 1
 * 00000001C0011BBB: add     [rbp+r8*8+160h+var_178], rdx
 * 00000001C0011BC0: add     [rbp+160h+var_58], rax
 * 00000001C0011BC7: add     r9d, ecx
 * 00000001C0011BCA: add     r10, 18h
 * 00000001C0011BCE: cmp     r9d, ebx
 * 00000001C0011BD1: jb      short loc_1C0011B72
 * 00000001C0011BD3: xor     r11d, r11d
 * 00000001C0011BD6: lea     r10d, [r11+0Bh]
 * 00000001C0011BDA: cmp     [r14+8F0h], r11
 * 00000001C0011BE1: jz      loc_1C0011C71
 * 00000001C0011BE7: movzx   r8d, r11w
 * 00000001C0011BEB: mov     rcx, rdi
 * 00000001C0011BEE: movzx   edx, r8w
 * 00000001C0011BF2: imul    edx, cs:dword_1C00797F0
 * 00000001C0011BF9: add     rdx, [r14+8F0h]
 * 00000001C0011C00: mov     rdi, [rdx]
 * 00000001C0011C03: cmp     rdi, rcx
 * 00000001C0011C06: mov     [rdx], r11
 * 00000001C0011C09: cmovbe  rdi, rcx
 * 00000001C0011C0D: add     rsi, [rdx+8]
 * 00000001C0011C11: add     r12, [rdx+10h]
 * 00000001C0011C15: mov     ecx, 1
 * 00000001C0011C1A: add     r8w, cx
 * 00000001C0011C1E: mov     qword ptr [rbp+160h+var_1B0], rdi
 * 00000001C0011C22: cmp     r8w, cs:g_RaidNumaHighestNodeNumber
 * 00000001C0011C2A: jbe     short loc_1C0011BEB
 * 00000001C0011C2C: mov     qword ptr [rbp+160h+var_1B0+8], rsi
 * 00000001C0011C30: sub     rsi, [r14+900h]
 * 00000001C0011C37: movups  xmm0, [rbp+160h+var_1B0]
 * 00000001C0011C3B: mov     [rbp+160h+var_1A0], r12
 * 00000001C0011C3F: sub     r12, [r14+908h]
 * 00000001C0011C46: movsd   xmm1, [rbp+160h+var_1A0]
 * 00000001C0011C4B: movups  xmmword ptr [r14+8F8h], xmm0
 * 00000001C0011C53: mov     [rbp+160h+var_48], rdi
 * 00000001C0011C5A: movsd   qword ptr [r14+908h], xmm1
 * 00000001C0011C63: mov     [rbp+160h+var_40], rsi
 * 00000001C0011C6A: mov     [rbp+160h+var_38], r12
 * 00000001C0011C71: mov     rax, [r14+98h]
 * 00000001C0011C78: test    rax, rax
 * 00000001C0011C7B: jz      loc_1C00121B8
 * 00000001C0011C81: lea     rbx, [rax+5Ah]
 * 00000001C0011C85: cmp     cs:g_StorpTraceLoggingPerformanceHighResolutionTimer, r11d
 * 00000001C0011C8C: lea     rax, a256us1ms4ms16m; "256us, 1ms, 4ms, 16ms, 64ms, 128ms, 256"...
 * 00000001C0011C93: mov     [rbp+160h+var_180], rax
 * 00000001C0011C97: mov     [rbp+160h+var_50], r13
 * 00000001C0011C9E: mov     [rbp+160h+var_188], r10b
 * 00000001C0011CA2: jz      loc_1C0029922
 * 00000001C0011CA8: cmp     cs:g_StorpTraceLoggingCriticalEventEnabledSetByRegistry, cl
 * 00000001C0011CAE: jz      loc_1C002992B
 * 00000001C0011CB4: mov     eax, cs:g_StorpTraceLoggingCriticalEventMaximum
 * 00000001C0011CBA: cmp     cs:g_StorpTraceLoggingCriticalEventsLogged, eax
 * 00000001C0011CC0: jnb     short loc_1C0011CFC
 * 00000001C0011CC2: mov     eax, [r14+7C8h]
 * 00000001C0011CC9: or      ecx, 0FFFFFFFFh
 * 00000001C0011CCC: test    al, 20h
 * 00000001C0011CCE: jnz     loc_1C002993D
 * 00000001C0011CD4: cmp     [r14+7CCh], r11b
 * 00000001C0011CDB: jnz     loc_1C0029948
 * 00000001C0011CE1: test    byte ptr [r14+1C2h], 2
 * 00000001C0011CE9: jnz     loc_1C0029953
 * 00000001C0011CEF: cmp     cs:g_StorpTraceLoggingCriticalEventEnabled, r11d
 * 00000001C0011CF6: jnz     loc_1C002995E
 * 00000001C0011CFC: lea     rdx, [rbp+160h+var_190]
 * 00000001C0011D00: mov     rcx, r14
 * 00000001C0011D03: call    StorpTelemetryLogUnitPerfDataMeasures
 * 00000001C0011D08: test    cs:byte_1C00799E4, 8
 * 00000001C0011D0F: jz      loc_1C00120EB
 * 00000001C0011D15: mov     rsi, [r14+18h]
 * 00000001C0011D19: lea     rdi, dword_1C006A660
 * 00000001C0011D20: movzx   ecx, byte ptr [r14+1C2h]
 * 00000001C0011D28: lea     rdx, [r14+0BAh]
 * 00000001C0011D2F: test    rbx, rbx
 * 00000001C0011D32: lea     r8, [r14+0A9h]
 * 00000001C0011D39: lea     r9, [r14+0A0h]
 * 00000001C0011D40: mov     rax, [rsi+1358h]
 * 00000001C0011D47: lea     r10, [rsi+1348h]
 * 00000001C0011D4E: cmovnz  rdi, rbx
 * 00000001C0011D52: lea     r11, [r14+7B8h]
 * 00000001C0011D59: test    rax, rax
 * 00000001C0011D5C: lea     rbx, unk_1C006A690
 * 00000001C0011D63: cmovnz  rbx, rax
 * 00000001C0011D67: mov     eax, [r14+8C0h]
 * 00000001C0011D6E: mov     [rsp+430h+var_1E8], rax
 * 00000001C0011D76: and     ecx, 1
 * 00000001C0011D79: mov     rax, [rbp+160h+var_38]
 * 00000001C0011D80: mov     [rsp+430h+var_1F0], rax
 * 00000001C0011D88: mov     rax, [rbp+160h+var_40]
 * 00000001C0011D8F: mov     [rsp+430h+var_1F8], rax
 * 00000001C0011D97: mov     rax, [rbp+160h+var_60]
 * 00000001C0011D9E: mov     [rsp+430h+var_200], rax
 * 00000001C0011DA6: mov     rax, [rbp+160h+var_78]
 * 00000001C0011DAD: mov     [rsp+430h+var_208], rax
 * 00000001C0011DB5: mov     rax, [rbp+160h+var_90]
 * 00000001C0011DBC: mov     [rsp+430h+var_210], rax
 * 00000001C0011DC4: mov     rax, [rbp+160h+var_A8]
 * 00000001C0011DCB: mov     [rsp+430h+var_218], rax
 * 00000001C0011DD3: mov     rax, [rbp+160h+var_C0]
 * 00000001C0011DDA: mov     [rsp+430h+var_220], rax
 * 00000001C0011DE2: mov     rax, [rbp+160h+var_D8]
 * 00000001C0011DE9: mov     [rsp+430h+var_228], rax
 * 00000001C0011DF1: mov     rax, [rbp+160h+var_F0]
 * 00000001C0011DF5: mov     [rsp+430h+var_230], rax
 * 00000001C0011DFD: mov     rax, [rbp+160h+var_108]
 * 00000001C0011E01: mov     [rsp+430h+var_238], rax
 * 00000001C0011E09: mov     rax, [rbp+160h+var_120]
 * 00000001C0011E0D: mov     [rsp+430h+var_240], rax
 * 00000001C0011E15: mov     rax, [rbp+160h+var_138]
 * 00000001C0011E19: mov     [rsp+430h+var_248], rax
 * 00000001C0011E21: mov     rax, [rbp+160h+var_150]
 * 00000001C0011E25: mov     [rsp+430h+var_250], rax
 * 00000001C0011E2D: mov     rax, [rbp+160h+var_168]
 * 00000001C0011E31: mov     [rsp+430h+var_258], rax
 * 00000001C0011E39: mov     rax, [rbp+160h+var_68]
 * 00000001C0011E40: mov     [rsp+430h+var_260], rax
 * 00000001C0011E48: mov     rax, [rbp+160h+var_80]
 * 00000001C0011E4F: mov     [rsp+430h+var_268], rax
 * 00000001C0011E57: mov     rax, [rbp+160h+var_98]
 * 00000001C0011E5E: mov     [rsp+430h+var_270], rax
 * 00000001C0011E66: mov     rax, [rbp+160h+var_B0]
 * 00000001C0011E6D: mov     [rsp+430h+var_278], rax
 * 00000001C0011E75: mov     rax, [rbp+160h+var_C8]
 * 00000001C0011E7C: mov     [rsp+430h+var_280], rax
 * 00000001C0011E84: mov     rax, [rbp+160h+var_E0]
 * 00000001C0011E8B: mov     [rsp+430h+var_288], rax
 * 00000001C0011E93: mov     rax, [rbp+160h+var_F8]
 * 00000001C0011E97: mov     [rsp+430h+var_290], rax
 * 00000001C0011E9F: mov     rax, [rbp+160h+var_110]
 * 00000001C0011EA3: mov     [rsp+430h+var_298], rax
 * 00000001C0011EAB: mov     rax, [rbp+160h+var_128]
 * 00000001C0011EAF: mov     [rsp+430h+var_2A0], rax
 * 00000001C0011EB7: mov     rax, [rbp+160h+var_140]
 * 00000001C0011EBB: mov     [rsp+430h+var_2A8], rax
 * 00000001C0011EC3: mov     rax, [rbp+160h+var_158]
 * 00000001C0011EC7: mov     [rsp+430h+var_2B0], rax
 * 00000001C0011ECF: mov     rax, [rbp+160h+var_170]
 * 00000001C0011ED3: mov     [rsp+430h+var_2B8], rax
 * 00000001C0011EDB: mov     rax, [rbp+160h+var_70]
 * 00000001C0011EE2: mov     [rsp+430h+var_2C0], rax
 * 00000001C0011EEA: mov     rax, [rbp+160h+var_88]
 * 00000001C0011EF1: mov     [rsp+430h+var_2C8], rax
 * 00000001C0011EF9: mov     rax, [rbp+160h+var_A0]
 * 00000001C0011F00: mov     [rsp+430h+var_2D0], rax
 * 00000001C0011F08: mov     rax, [rbp+160h+var_B8]
 * 00000001C0011F0F: mov     [rsp+430h+var_2D8], rax
 * 00000001C0011F17: mov     rax, [rbp+160h+var_D0]
 * 00000001C0011F1E: mov     [rsp+430h+var_2E0], rax
 * 00000001C0011F26: mov     rax, [rbp+160h+var_E8]
 * 00000001C0011F2A: mov     [rsp+430h+var_2E8], rax
 * 00000001C0011F32: mov     rax, [rbp+160h+var_100]
 * 00000001C0011F36: mov     [rsp+430h+var_2F0], rax
 * 00000001C0011F3E: mov     rax, [rbp+160h+var_118]
 * 00000001C0011F42: mov     [rsp+430h+var_2F8], rax
 * 00000001C0011F4A: mov     rax, [rbp+160h+var_130]
 * 00000001C0011F4E: mov     [rsp+430h+var_300], rax
 * 00000001C0011F56: mov     rax, [rbp+160h+var_148]
 * 00000001C0011F5A: mov     [rsp+430h+var_308], rax
 * 00000001C0011F62: mov     rax, [rbp+160h+var_160]
 * 00000001C0011F66: mov     [rsp+430h+var_310], rax
 * 00000001C0011F6E: mov     rax, [rbp+160h+var_178]
 * 00000001C0011F72: mov     [rsp+430h+var_318], rax
 * 00000001C0011F7A: mov     rax, [rbp+160h+var_180]
 * 00000001C0011F7E: mov     [rsp+430h+var_320], rax
 * 00000001C0011F86: mov     eax, [r14+918h]
 * 00000001C0011F8D: mov     dword ptr [rsp+430h+var_328], eax
 * 00000001C0011F94: mov     eax, [r14+910h]
 * 00000001C0011F9B: mov     [rsp+430h+var_330], eax
 * 00000001C0011FA2: mov     eax, dword ptr [rbp+160h+var_48]
 * 00000001C0011FA8: mov     [rsp+430h+var_338], eax
 * 00000001C0011FAF: mov     rax, [r14+8B0h]
 * 00000001C0011FB6: mov     qword ptr [rsp+430h+var_340], rax
 * 00000001C0011FBE: mov     rax, [r14+8A8h]
 * 00000001C0011FC5: mov     [rsp+430h+var_348], rax
 * 00000001C0011FCD: mov     rax, [r14+8A0h]
 * 00000001C0011FD4: mov     [rsp+430h+var_350], rax
 * 00000001C0011FDC: mov     rax, [r14+898h]
 * 00000001C0011FE3: mov     [rsp+430h+var_358], rax
 * 00000001C0011FEB: mov     rax, [r14+890h]
 * 00000001C0011FF2: mov     [rsp+430h+var_360], rax
 * 00000001C0011FFA: mov     rax, [r14+888h]
 * 00000001C0012001: mov     [rsp+430h+var_368], rax
 * 00000001C0012009: mov     rax, [r14+880h]
 * 00000001C0012010: mov     [rsp+430h+var_370], rax
 * 00000001C0012018: mov     eax, [r14+318h]
 * 00000001C001201F: mov     dword ptr [rsp+430h+var_378], eax
 * 00000001C0012026: mov     eax, [r14+314h]
 * 00000001C001202D: mov     [rsp+430h+var_380], eax
 * 00000001C0012034: mov     rax, [r14+878h]
 * 00000001C001203B: mov     qword ptr [rsp+430h+var_388], rax
 * 00000001C0012043: mov     rax, [rbp+160h+var_58]
 * 00000001C001204A: mov     [rsp+430h+var_390], rax
 * 00000001C0012052: mov     al, [rbp+160h+var_188]
 * 00000001C0012055: mov     byte ptr [rsp+430h+var_398], al
 * 00000001C001205C: mov     rax, cs:g_SystemUptime_s
 * 00000001C0012063: mov     qword ptr [rsp+430h+var_3A0], rax
 * 00000001C001206B: mov     eax, [rsi+0F9Ch]
 * 00000001C0012071: mov     dword ptr [rsp+430h+var_3A8], ecx
 * 00000001C0012078: lea     rcx, StorPortEventProvider_Context
 * 00000001C001207F: mov     qword ptr [rsp+430h+var_3B0], rdi
 * 00000001C0012087: mov     [rsp+430h+var_3B8], rbx
 * 00000001C001208C: mov     [rsp+430h+var_3C0], rdx
 * 00000001C0012091: lea     rdx, EventUnitPerformance
 * 00000001C0012098: mov     [rsp+430h+var_3C8], r8
 * 00000001C001209D: xor     r8d, r8d
 * 00000001C00120A0: mov     [rsp+430h+var_3D0], r9
 * 00000001C00120A5: mov     r9d, [rsi+38h]
 * 00000001C00120A9: mov     dword ptr [rsp+430h+var_3D8], eax
 * 00000001C00120AD: mov     rax, [rsi+11F0h]
 * 00000001C00120B4: mov     qword ptr [rsp+430h+var_3E0], rax
 * 00000001C00120B9: mov     eax, [r14+0CE0h]
 * 00000001C00120C0: mov     dword ptr [rsp+430h+var_3E8], eax
 * 00000001C00120C4: mov     al, [r14+62h]
 * 00000001C00120C8: mov     qword ptr [rsp+430h+var_3F0], r10
 * 00000001C00120CD: mov     [rsp+430h+var_3F8], r11
 * 00000001C00120D2: mov     byte ptr [rsp+430h+var_400], al
 * 00000001C00120D6: mov     al, [r14+61h]
 * 00000001C00120DA: mov     [rsp+430h+var_408], al
 * 00000001C00120DE: mov     al, [r14+60h]
 * 00000001C00120E2: mov     [rsp+430h+var_410], al
 * 00000001C00120E6: call    McTemplateK0quuujjqzqssszstxuxxqqxxxxxxxqqqzxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx_EtwWriteTransfer
 * 00000001C00120EB: xor     r11d, r11d
 * 00000001C00120EE: cmp     cs:g_StorpTraceLoggingIoSizeDistributionEnabled, r11d
 * 00000001C00120F5: jnz     loc_1C0029970
 * 00000001C00120FB: mov     ebx, r11d
 * 00000001C00120FE: and     qword ptr [r14+314h], 0
 * 00000001C0012106: mov     [r14+910h], r11
 * 00000001C001210D: mov     [r14+918h], r11
 * 00000001C0012114: mov     [r14+878h], r11
 * 00000001C001211B: mov     [r14+880h], r11
 * 00000001C0012122: mov     [r14+888h], r11
 * 00000001C0012129: mov     [r14+890h], r11
 * 00000001C0012130: mov     [r14+898h], r11
 * 00000001C0012137: mov     [r14+8A0h], r11
 * 00000001C001213E: mov     [r14+8A8h], r11
 * 00000001C0012145: mov     [r14+8B0h], r11
 * 00000001C001214C: mov     [r14+8C0h], r11d
 * 00000001C0012153: test    r15, r15
 * 00000001C0012156: jz      short loc_1C001216C
 * 00000001C0012158: mov     edx, 65546152h; Tag
 * 00000001C001215D: mov     rcx, r15; P
 * 00000001C0012160: call    cs:__imp_ExFreePoolWithTag
 * 00000001C0012167: nop     dword ptr [rax+rax+00h]
 * 00000001C001216C: test    r13, r13
 * 00000001C001216F: jz      short loc_1C0012185
 * 00000001C0012171: mov     edx, 65546152h; Tag
 * 00000001C0012176: mov     rcx, r13; P
 * 00000001C0012179: call    cs:__imp_ExFreePoolWithTag
 * 00000001C0012180: nop     dword ptr [rax+rax+00h]
 * 00000001C0012185: mov     eax, ebx
 * 00000001C0012187: mov     rcx, [rbp+160h+var_30]
 * 00000001C001218E: xor     rcx, rsp; StackCookie
 * 00000001C0012191: call    __security_check_cookie
 * 00000001C0012196: lea     r11, [rsp+430h+var_20]
 * 00000001C001219E: mov     rbx, [r11+38h]
 * 00000001C00121A2: mov     rsi, [r11+40h]
 * 00000001C00121A6: mov     rdi, [r11+48h]
 * 00000001C00121AA: mov     rsp, r11
 * 00000001C00121AD: pop     r15
 * 00000001C00121AF: pop     r14
 * 00000001C00121B1: pop     r13
 * 00000001C00121B3: pop     r12
 * 00000001C00121B5: pop     rbp
 * 00000001C00121B6: retn
 * 00000001C00121B8: mov     rdx, [r14+90h]
 * 00000001C00121BF: test    rdx, rdx
 * 00000001C00121C2: jnz     short loc_1C00121CD
 * 00000001C00121C4: mov     rbx, [rbp+160h+var_1D0]
 * 00000001C00121C8: jmp     loc_1C0011C85
 * 00000001C00121CD: mov     rax, [r14+18h]
 * 00000001C00121D1: lea     rbx, [rdx+29h]
 * 00000001C00121D5: mov     rcx, [rax+238h]
 * 00000001C00121DC: mov     eax, [rcx+0B8h]
 * 00000001C00121E2: mov     ecx, 1
 * 00000001C00121E7: test    al, 40h
 * 00000001C00121E9: jnz     loc_1C0011C85
 * 00000001C00121EF: jmp     short loc_1C00121C4
 * 00000001C00298DC: mov     ebx, 0C0000001h
 * 00000001C00298E1: jmp     loc_1C00120FE
 * 00000001C00298E6: mov     ebx, 0C0000017h
 * 00000001C00298EB: jmp     loc_1C00120FE
 * 00000001C00298F0: call    cs:__imp_KeQueryUnbiasedInterruptTime
 * 00000001C00298F7: nop     dword ptr [rax+rax+00h]
 * 00000001C00298FC: nop
 * 00000001C00298FD: jmp     loc_1C001199D
 * 00000001C0029902: mov     rax, rcx
 * 00000001C0029905: sub     rax, rdx
 * 00000001C0029908: sub     rax, r8
 * 00000001C002990B: jmp     loc_1C00119C8
 * 00000001C0029910: mov     r10, rax
 * 00000001C0029913: jmp     loc_1C0011A1D
 * 00000001C0029918: mov     ecx, 1
 * 00000001C002991D: jmp     loc_1C0011BDA
 * 00000001C0029922: mov     [rbp+160h+var_188], 0Ah
 * 00000001C0029926: jmp     loc_1C0011CA8
 * 00000001C002992B: cmp     cs:g_StorpTraceLoggingCriticalEventEnabled, r11d
 * 00000001C0029932: jz      loc_1C0011CFC
 * 00000001C0029938: jmp     loc_1C0011CB4
 * 00000001C002993D: mov     cs:g_StorpTraceLoggingCriticalEventEnabled, ecx
 * 00000001C0029943: jmp     loc_1C0011CD4
 * 00000001C0029948: mov     cs:g_StorpTraceLoggingCriticalEventEnabled, ecx
 * 00000001C002994E: jmp     loc_1C0011CE1
 * 00000001C0029953: mov     cs:g_StorpTraceLoggingCriticalEventEnabled, ecx
 * 00000001C0029959: jmp     loc_1C0011CEF
 * 00000001C002995E: lea     rdx, [rbp+160h+var_190]
 * 00000001C0029962: mov     rcx, r14
 * 00000001C0029965: call    StorpTelemetryLogUnitPerfDataCriticalData
 * 00000001C002996A: nop
 * 00000001C002996B: jmp     loc_1C0011D08
 * 00000001C0029970: test    byte ptr [r14+1C3h], 10h
 * 00000001C0029978: jz      loc_1C00120FB
 * 00000001C002997E: mov     rcx, r14
 * 00000001C0029981: call    StorpTelemetrySendUnitIoSizeDistributionData
 * 00000001C0029986: xor     r11d, r11d
 * 00000001C0029989: jmp     loc_1C00120FB
 */
