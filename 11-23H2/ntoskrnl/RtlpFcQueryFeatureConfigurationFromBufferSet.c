/*
 * XREFs of RtlpFcQueryFeatureConfigurationFromBufferSet @ 0x1407D0ECC
 * Callers:
 *     RtlQueryFeatureConfiguration @ 0x14035D100 (RtlQueryFeatureConfiguration.c)
 *     RtlQueryInternalFeatureConfiguration @ 0x140411680 (RtlQueryInternalFeatureConfiguration.c)
 * Callees:
 *     RtlpFcValidateFeatureConfigurationType @ 0x14035D1F4 (RtlpFcValidateFeatureConfigurationType.c)
 *     RtlpFcQueryFeatureConfigurationFromBuffers @ 0x1407D0F34 (RtlpFcQueryFeatureConfigurationFromBuffers.c)
 */

/*
 * Hex-Rays decompilation failed for RtlpFcQueryFeatureConfigurationFromBufferSet @ 0x1407D0ECC
 * Reason: Hex-Rays returned no pseudocode for 0x1407D0ECC
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001407D0ECC: mov     [rsp+arg_0], rbx
 * 00000001407D0ED1: push    rdi
 * 00000001407D0ED2: sub     rsp, 30h
 * 00000001407D0ED6: movsxd  rbx, r8d
 * 00000001407D0ED9: mov     r11, rcx
 * 00000001407D0EDC: mov     ecx, ebx
 * 00000001407D0EDE: mov     edi, edx
 * 00000001407D0EE0: call    RtlpFcValidateFeatureConfigurationType
 * 00000001407D0EE5: test    eax, eax
 * 00000001407D0EE7: js      short loc_1407D0F1F
 * 00000001407D0EE9: xor     r10d, r10d
 * 00000001407D0EEC: lea     rax, [r11+8]
 * 00000001407D0EF0: cmp     qword ptr [rax], 0
 * 00000001407D0EF4: jz      loc_1408FC11A
 * 00000001407D0EFA: and     [rsp+38h+var_18], 0
 * 00000001407D0EFF: lea     r8, [r11+30h]
 * 00000001407D0F03: mov     [rsp+38h+var_14], 1
 * 00000001407D0F0B: movsxd  rcx, [rsp+rbx*4+38h+var_18]
 * 00000001407D0F10: lea     rax, [rcx+rcx*2]
 * 00000001407D0F14: mov     ecx, edi
 * 00000001407D0F16: lea     rdx, [r11+rax*8]
 * 00000001407D0F1A: call    RtlpFcQueryFeatureConfigurationFromBuffers
 * 00000001407D0F1F: mov     rbx, [rsp+38h+arg_0]
 * 00000001407D0F24: add     rsp, 30h
 * 00000001407D0F28: pop     rdi
 * 00000001407D0F29: retn
 * 00000001408FC11A: inc     r10
 * 00000001408FC11D: add     rax, 18h
 * 00000001408FC121: cmp     r10, 3
 * 00000001408FC125: jl      loc_1407D0EF0
 * 00000001408FC12B: mov     eax, 80000022h
 * 00000001408FC130: jmp     loc_1407D0F1F
 */
