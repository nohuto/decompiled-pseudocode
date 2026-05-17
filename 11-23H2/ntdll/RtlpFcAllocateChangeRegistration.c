/*
 * XREFs of RtlpFcAllocateChangeRegistration @ 0x180060DA8
 * Callers:
 *     RtlRegisterFeatureConfigurationChangeNotification @ 0x180060D20 (RtlRegisterFeatureConfigurationChangeNotification.c)
 * Callees:
 *     RtlFreeHeap @ 0x18003B030 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18003CB80 (RtlAllocateHeap.c)
 *     TpAllocWork @ 0x180060F60 (TpAllocWork.c)
 */

/*
 * Hex-Rays decompilation failed for RtlpFcAllocateChangeRegistration @ 0x180060DA8
 * Reason: Hex-Rays returned no pseudocode for 0x180060DA8
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000180060DA8: mov     [rsp+arg_0], rbx
 * 0000000180060DAD: mov     [rsp+arg_8], rbp
 * 0000000180060DB2: mov     [rsp+arg_10], rsi
 * 0000000180060DB7: push    rdi
 * 0000000180060DB8: sub     rsp, 20h
 * 0000000180060DBC: mov     rbp, rcx
 * 0000000180060DBF: xor     edi, edi
 * 0000000180060DC1: mov     rcx, gs:60h
 * 0000000180060DCA: mov     rsi, rdx
 * 0000000180060DCD: lea     edx, [rdi+8]
 * 0000000180060DD0: mov     rcx, [rcx+30h]
 * 0000000180060DD4: lea     r8d, [rdi+30h]
 * 0000000180060DD8: call    RtlAllocateHeap
 * 0000000180060DDD: mov     rbx, rax
 * 0000000180060DE0: test    rax, rax
 * 0000000180060DE3: jz      short loc_180060E0E
 * 0000000180060DE5: lea     rcx, [rax+28h]
 * 0000000180060DE9: xor     r9d, r9d
 * 0000000180060DEC: mov     r8, rax
 * 0000000180060DEF: lea     rdx, RtlpFcChangeRegistrationCallback
 * 0000000180060DF6: call    TpAllocWork
 * 0000000180060DFB: test    eax, eax
 * 0000000180060DFD: js      loc_1800C88C0
 * 0000000180060E03: mov     [rbx+10h], rbp
 * 0000000180060E07: mov     rdi, rbx
 * 0000000180060E0A: mov     [rbx+18h], rsi
 * 0000000180060E0E: mov     rbx, [rsp+28h+arg_0]
 * 0000000180060E13: mov     rax, rdi
 * 0000000180060E16: mov     rbp, [rsp+28h+arg_8]
 * 0000000180060E1B: mov     rsi, [rsp+28h+arg_10]
 * 0000000180060E20: add     rsp, 20h
 * 0000000180060E24: pop     rdi
 * 0000000180060E25: retn
 * 00000001800C88C0: mov     rcx, gs:60h
 * 00000001800C88C9: mov     r8, rbx
 * 00000001800C88CC: xor     edx, edx
 * 00000001800C88CE: mov     rcx, [rcx+30h]
 * 00000001800C88D2: call    RtlFreeHeap
 * 00000001800C88D7: nop
 * 00000001800C88D8: jmp     loc_180060E0E
 */
