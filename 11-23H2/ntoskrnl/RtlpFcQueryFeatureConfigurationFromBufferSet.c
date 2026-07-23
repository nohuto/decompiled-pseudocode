/*
 * XREFs of RtlpFcQueryFeatureConfigurationFromBufferSet @ 0x1407D119C
 * Callers:
 *     RtlQueryFeatureConfiguration @ 0x14035D2A0 (RtlQueryFeatureConfiguration.c)
 *     RtlQueryInternalFeatureConfiguration @ 0x1404118C0 (RtlQueryInternalFeatureConfiguration.c)
 * Callees:
 *     RtlpFcValidateFeatureConfigurationType @ 0x14035D394 (RtlpFcValidateFeatureConfigurationType.c)
 *     RtlpFcQueryFeatureConfigurationFromBuffers @ 0x1407D1204 (RtlpFcQueryFeatureConfigurationFromBuffers.c)
 */

/*
 * Hex-Rays decompilation failed for RtlpFcQueryFeatureConfigurationFromBufferSet @ 0x1407D119C
 * Reason: Hex-Rays returned no pseudocode for 0x1407D119C
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001407D119C: mov     [rsp+arg_0], rbx
 * 00000001407D11A1: push    rdi
 * 00000001407D11A2: sub     rsp, 30h
 * 00000001407D11A6: movsxd  rbx, r8d
 * 00000001407D11A9: mov     r11, rcx
 * 00000001407D11AC: mov     ecx, ebx
 * 00000001407D11AE: mov     edi, edx
 * 00000001407D11B0: call    RtlpFcValidateFeatureConfigurationType
 * 00000001407D11B5: test    eax, eax
 * 00000001407D11B7: js      short loc_1407D11EF
 * 00000001407D11B9: xor     r10d, r10d
 * 00000001407D11BC: lea     rax, [r11+8]
 * 00000001407D11C0: cmp     qword ptr [rax], 0
 * 00000001407D11C4: jz      loc_1408FC356
 * 00000001407D11CA: and     [rsp+38h+var_18], 0
 * 00000001407D11CF: lea     r8, [r11+30h]
 * 00000001407D11D3: mov     [rsp+38h+var_14], 1
 * 00000001407D11DB: movsxd  rcx, [rsp+rbx*4+38h+var_18]
 * 00000001407D11E0: lea     rax, [rcx+rcx*2]
 * 00000001407D11E4: mov     ecx, edi
 * 00000001407D11E6: lea     rdx, [r11+rax*8]
 * 00000001407D11EA: call    RtlpFcQueryFeatureConfigurationFromBuffers
 * 00000001407D11EF: mov     rbx, [rsp+38h+arg_0]
 * 00000001407D11F4: add     rsp, 30h
 * 00000001407D11F8: pop     rdi
 * 00000001407D11F9: retn
 * 00000001408FC356: inc     r10
 * 00000001408FC359: add     rax, 18h
 * 00000001408FC35D: cmp     r10, 3
 * 00000001408FC361: jl      loc_1407D11C0
 * 00000001408FC367: mov     eax, 80000022h
 * 00000001408FC36C: jmp     loc_1407D11EF
 */
