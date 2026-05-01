/*
 * XREFs of CrmStateMonitorAcDcBatteryCallback @ 0x1800087B0
 * Callers:
 *     <none>
 * Callees:
 *     CrmStateMonitorStateSet @ 0x180009B80 (CrmStateMonitorStateSet.c)
 */

/*
 * Hex-Rays decompilation failed for CrmStateMonitorAcDcBatteryCallback @ 0x1800087B0
 * Reason: Hex-Rays returned no pseudocode for 0x1800087B0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001800087B0: mov     [rsp+arg_0], rbx
 * 00000001800087B5: mov     [rsp+arg_8], rsi
 * 00000001800087BA: mov     [rsp+arg_10], rdi
 * 00000001800087BF: push    r14
 * 00000001800087C1: sub     rsp, 20h
 * 00000001800087C5: mov     r14, r8
 * 00000001800087C8: mov     ebx, edx
 * 00000001800087CA: cmp     edx, 4
 * 00000001800087CD: jnz     loc_180008854
 * 00000001800087D3: mov     rax, 0FFFFFFFFFFFFFFC0h
 * 00000001800087DA: lea     rsi, [rcx+rax]
 * 00000001800087DE: lea     rcx, [rsi+8]
 * 00000001800087E2: call    cs:__imp_RtlAcquireSRWLockExclusive
 * 00000001800087E9: nop     dword ptr [rax+rax+00h]
 * 00000001800087EE: call    cs:__imp_GetCurrentThreadId
 * 00000001800087F5: nop     dword ptr [rax+rax+00h]
 * 00000001800087FA: mov     [rsi+10h], eax
 * 00000001800087FD: mov     rax, [rsi+38h]
 * 0000000180008801: mov     [rsp+28h+arg_18], rax
 * 0000000180008806: mov     eax, [r14]
 * 0000000180008809: cmp     ebx, 4
 * 000000018000880C: jnz     short loc_180008865
 * 000000018000880E: mov     dword ptr [rsp+28h+arg_18], eax
 * 0000000180008812: mov     r9d, 1
 * 0000000180008818: lea     rdx, [rsp+28h+arg_18]
 * 000000018000881D: mov     rcx, rsi
 * 0000000180008820: lea     r8d, [r9+7]
 * 0000000180008824: call    CrmStateMonitorStateSet
 * 0000000180008829: and     dword ptr [rsi+10h], 0
 * 000000018000882D: lea     rcx, [rsi+8]
 * 0000000180008831: call    cs:__imp_RtlReleaseSRWLockExclusive
 * 0000000180008838: nop     dword ptr [rax+rax+00h]
 * 000000018000883D: mov     rbx, [rsp+28h+arg_0]
 * 0000000180008842: mov     rsi, [rsp+28h+arg_8]
 * 0000000180008847: mov     rdi, [rsp+28h+arg_10]
 * 000000018000884C: add     rsp, 20h
 * 0000000180008850: pop     r14
 * 0000000180008852: retn
 * 0000000180008854: cmp     ebx, 5
 * 0000000180008857: jnz     short loc_18000883D
 * 0000000180008859: mov     rax, 0FFFFFFFFFFFFFFA8h
 * 0000000180008860: jmp     loc_1800087DA
 * 0000000180008865: mov     dword ptr [rsp+28h+arg_18+4], eax
 * 0000000180008869: jmp     short loc_180008812
 */
