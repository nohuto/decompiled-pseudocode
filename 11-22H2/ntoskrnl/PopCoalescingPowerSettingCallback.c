/*
 * XREFs of PopCoalescingPowerSettingCallback @ 0x1408640A0
 * Callers:
 *     <none>
 * Callees:
 *     PopCheckResiliencyScenarios @ 0x140700F30 (PopCheckResiliencyScenarios.c)
 *     PopUpdateDiskIdleTimeoutSetting @ 0x140844FEC (PopUpdateDiskIdleTimeoutSetting.c)
 *     PopReleasePolicyLock @ 0x140A87BA4 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A87BE4 (PopAcquirePolicyLock.c)
 */

/*
 * Hex-Rays decompilation failed for PopCoalescingPowerSettingCallback @ 0x1408640A0
 * Reason: Hex-Rays returned no pseudocode for 0x1408640A0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001408640A0: mov     [rsp+arg_0], rbx
 * 00000001408640A5: mov     [rsp+arg_8], rbp
 * 00000001408640AA: mov     [rsp+arg_10], rsi
 * 00000001408640AF: push    rdi
 * 00000001408640B0: sub     rsp, 20h
 * 00000001408640B4: mov     ebp, r8d
 * 00000001408640B7: mov     rdi, rdx
 * 00000001408640BA: mov     rsi, rcx
 * 00000001408640BD: mov     ebx, 0C000000Dh
 * 00000001408640C2: call    PopAcquirePolicyLock
 * 00000001408640C7: mov     r9, qword ptr cs:GUID_DISK_COALESCING_POWERDOWN_TIMEOUT.Data1
 * 00000001408640CE: sub     r9, [rsi]
 * 00000001408640D1: jnz     short loc_1408640DE
 * 00000001408640D3: mov     r9, qword ptr cs:GUID_DISK_COALESCING_POWERDOWN_TIMEOUT.Data4
 * 00000001408640DA: sub     r9, [rsi+8]
 * 00000001408640DE: test    r9, r9
 * 00000001408640E1: jnz     short loc_140864110
 * 00000001408640E3: cmp     ebp, 4
 * 00000001408640E6: jnz     short loc_140864110
 * 00000001408640E8: test    rdi, rdi
 * 00000001408640EB: jz      short loc_140864110
 * 00000001408640ED: mov     eax, [rdi]
 * 00000001408640EF: or      ecx, 0FFFFFFFFh
 * 00000001408640F2: test    eax, eax
 * 00000001408640F4: mov     cs:PopDppeCoalescingSpindownTimeout, eax
 * 00000001408640FA: cmovz   eax, ecx
 * 00000001408640FD: cmp     eax, cs:PopDiskCoalescingTimeout
 * 0000000140864103: jnz     loc_1409235A2
 * 0000000140864109: call    PopCheckResiliencyScenarios
 * 000000014086410E: xor     ebx, ebx
 * 0000000140864110: call    PopReleasePolicyLock
 * 0000000140864115: mov     rbp, [rsp+28h+arg_8]
 * 000000014086411A: mov     eax, ebx
 * 000000014086411C: mov     rbx, [rsp+28h+arg_0]
 * 0000000140864121: mov     rsi, [rsp+28h+arg_10]
 * 0000000140864126: add     rsp, 20h
 * 000000014086412A: pop     rdi
 * 000000014086412B: retn
 * 00000001409235A2: mov     cs:PopDiskCoalescingTimeout, eax
 * 00000001409235A8: call    PopUpdateDiskIdleTimeoutSetting
 * 00000001409235AD: nop
 * 00000001409235AE: jmp     loc_140864109
 */
