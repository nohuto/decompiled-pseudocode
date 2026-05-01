/*
 * XREFs of CrmStateMonitorAcDcDisplayCallback @ 0x180008A30
 * Callers:
 *     <none>
 * Callees:
 *     CrmStateMonitorStateSet @ 0x180009B80 (CrmStateMonitorStateSet.c)
 */

/*
 * Hex-Rays decompilation failed for CrmStateMonitorAcDcDisplayCallback @ 0x180008A30
 * Reason: Hex-Rays returned no pseudocode for 0x180008A30
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000180008A30: mov     [rsp+arg_0], rbx
 * 0000000180008A35: mov     [rsp+arg_8], rsi
 * 0000000180008A3A: mov     [rsp+arg_10], rdi
 * 0000000180008A3F: push    r14
 * 0000000180008A41: sub     rsp, 20h
 * 0000000180008A45: mov     r14, r8
 * 0000000180008A48: mov     ebx, edx
 * 0000000180008A4A: cmp     edx, 4
 * 0000000180008A4D: jz      loc_180008AD9
 * 0000000180008A53: cmp     edx, 6
 * 0000000180008A56: jnz     short loc_180008AC2
 * 0000000180008A58: mov     rax, 0FFFFFFFFFFFFFFA8h
 * 0000000180008A5F: lea     rsi, [rcx+rax]
 * 0000000180008A63: lea     rcx, [rsi+8]
 * 0000000180008A67: call    cs:__imp_RtlAcquireSRWLockExclusive
 * 0000000180008A6E: nop     dword ptr [rax+rax+00h]
 * 0000000180008A73: call    cs:__imp_GetCurrentThreadId
 * 0000000180008A7A: nop     dword ptr [rax+rax+00h]
 * 0000000180008A7F: mov     [rsi+10h], eax
 * 0000000180008A82: mov     rax, [rsi+38h]
 * 0000000180008A86: mov     [rsp+28h+arg_18], rax
 * 0000000180008A8B: mov     eax, [r14]
 * 0000000180008A8E: cmp     ebx, 4
 * 0000000180008A91: jz      short loc_180008AE5
 * 0000000180008A93: mov     dword ptr [rsp+28h+arg_18+4], eax
 * 0000000180008A97: mov     r9d, 1
 * 0000000180008A9D: lea     rdx, [rsp+28h+arg_18]
 * 0000000180008AA2: mov     rcx, rsi
 * 0000000180008AA5: lea     r8d, [r9+7]
 * 0000000180008AA9: call    CrmStateMonitorStateSet
 * 0000000180008AAE: and     dword ptr [rsi+10h], 0
 * 0000000180008AB2: lea     rcx, [rsi+8]
 * 0000000180008AB6: call    cs:__imp_RtlReleaseSRWLockExclusive
 * 0000000180008ABD: nop     dword ptr [rax+rax+00h]
 * 0000000180008AC2: mov     rbx, [rsp+28h+arg_0]
 * 0000000180008AC7: mov     rsi, [rsp+28h+arg_8]
 * 0000000180008ACC: mov     rdi, [rsp+28h+arg_10]
 * 0000000180008AD1: add     rsp, 20h
 * 0000000180008AD5: pop     r14
 * 0000000180008AD7: retn
 * 0000000180008AD9: mov     rax, 0FFFFFFFFFFFFFFC0h
 * 0000000180008AE0: jmp     loc_180008A5F
 * 0000000180008AE5: mov     dword ptr [rsp+28h+arg_18], eax
 * 0000000180008AE9: jmp     short loc_180008A97
 */
