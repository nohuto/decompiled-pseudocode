/*
 * XREFs of RtlpFcAllocateChangeRegistration @ 0x18005B5D8
 * Callers:
 *     RtlRegisterFeatureConfigurationChangeNotification @ 0x18005B550 (RtlRegisterFeatureConfigurationChangeNotification.c)
 * Callees:
 *     RtlFreeHeap @ 0x18003B190 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18003CCE0 (RtlAllocateHeap.c)
 *     TpAllocWork @ 0x18005B790 (TpAllocWork.c)
 */

/*
 * Hex-Rays decompilation failed for RtlpFcAllocateChangeRegistration @ 0x18005B5D8
 * Reason: Hex-Rays returned no pseudocode for 0x18005B5D8
 * Fallback: raw IDA disassembly follows.
 *
 * 000000018005B5D8: mov     [rsp+arg_0], rbx
 * 000000018005B5DD: mov     [rsp+arg_8], rbp
 * 000000018005B5E2: mov     [rsp+arg_10], rsi
 * 000000018005B5E7: push    rdi
 * 000000018005B5E8: sub     rsp, 20h
 * 000000018005B5EC: mov     rbp, rcx
 * 000000018005B5EF: xor     edi, edi
 * 000000018005B5F1: mov     rcx, gs:60h
 * 000000018005B5FA: mov     rsi, rdx
 * 000000018005B5FD: lea     edx, [rdi+8]
 * 000000018005B600: mov     rcx, [rcx+30h]
 * 000000018005B604: lea     r8d, [rdi+30h]
 * 000000018005B608: call    RtlAllocateHeap
 * 000000018005B60D: mov     rbx, rax
 * 000000018005B610: test    rax, rax
 * 000000018005B613: jz      short loc_18005B63E
 * 000000018005B615: lea     rcx, [rax+28h]
 * 000000018005B619: xor     r9d, r9d
 * 000000018005B61C: mov     r8, rax
 * 000000018005B61F: lea     rdx, RtlpFcChangeRegistrationCallback
 * 000000018005B626: call    TpAllocWork
 * 000000018005B62B: test    eax, eax
 * 000000018005B62D: js      loc_1800C45D4
 * 000000018005B633: mov     [rbx+10h], rbp
 * 000000018005B637: mov     rdi, rbx
 * 000000018005B63A: mov     [rbx+18h], rsi
 * 000000018005B63E: mov     rbx, [rsp+28h+arg_0]
 * 000000018005B643: mov     rax, rdi
 * 000000018005B646: mov     rbp, [rsp+28h+arg_8]
 * 000000018005B64B: mov     rsi, [rsp+28h+arg_10]
 * 000000018005B650: add     rsp, 20h
 * 000000018005B654: pop     rdi
 * 000000018005B655: retn
 * 00000001800C45D4: mov     rcx, gs:60h
 * 00000001800C45DD: mov     r8, rbx
 * 00000001800C45E0: xor     edx, edx
 * 00000001800C45E2: mov     rcx, [rcx+30h]
 * 00000001800C45E6: call    RtlFreeHeap
 * 00000001800C45EB: nop
 * 00000001800C45EC: jmp     loc_18005B63E
 */
