/*
 * XREFs of RtlpFcQueryFeatureConfigurationFromBufferSet @ 0x1407D144C
 * Callers:
 *     RtlQueryFeatureConfiguration @ 0x14035CAB0 (RtlQueryFeatureConfiguration.c)
 *     RtlQueryInternalFeatureConfiguration @ 0x140410E70 (RtlQueryInternalFeatureConfiguration.c)
 * Callees:
 *     RtlpFcValidateFeatureConfigurationType @ 0x14035CBA4 (RtlpFcValidateFeatureConfigurationType.c)
 *     RtlpFcQueryFeatureConfigurationFromBuffers @ 0x1407D14B4 (RtlpFcQueryFeatureConfigurationFromBuffers.c)
 */

/*
 * Hex-Rays decompilation failed for RtlpFcQueryFeatureConfigurationFromBufferSet @ 0x1407D144C
 * Reason: Hex-Rays returned no pseudocode for 0x1407D144C
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001407D144C: mov     [rsp+arg_0], rbx
 * 00000001407D1451: push    rdi
 * 00000001407D1452: sub     rsp, 30h
 * 00000001407D1456: movsxd  rbx, r8d
 * 00000001407D1459: mov     r11, rcx
 * 00000001407D145C: mov     ecx, ebx
 * 00000001407D145E: mov     edi, edx
 * 00000001407D1460: call    RtlpFcValidateFeatureConfigurationType
 * 00000001407D1465: test    eax, eax
 * 00000001407D1467: js      short loc_1407D149F
 * 00000001407D1469: xor     r10d, r10d
 * 00000001407D146C: lea     rax, [r11+8]
 * 00000001407D1470: cmp     qword ptr [rax], 0
 * 00000001407D1474: jz      loc_1408FD416
 * 00000001407D147A: and     [rsp+38h+var_18], 0
 * 00000001407D147F: lea     r8, [r11+30h]
 * 00000001407D1483: mov     [rsp+38h+var_14], 1
 * 00000001407D148B: movsxd  rcx, [rsp+rbx*4+38h+var_18]
 * 00000001407D1490: lea     rax, [rcx+rcx*2]
 * 00000001407D1494: mov     ecx, edi
 * 00000001407D1496: lea     rdx, [r11+rax*8]
 * 00000001407D149A: call    RtlpFcQueryFeatureConfigurationFromBuffers
 * 00000001407D149F: mov     rbx, [rsp+38h+arg_0]
 * 00000001407D14A4: add     rsp, 30h
 * 00000001407D14A8: pop     rdi
 * 00000001407D14A9: retn
 * 00000001408FD416: inc     r10
 * 00000001408FD419: add     rax, 18h
 * 00000001408FD41D: cmp     r10, 3
 * 00000001408FD421: jl      loc_1407D1470
 * 00000001408FD427: mov     eax, 80000022h
 * 00000001408FD42C: jmp     loc_1407D149F
 */
