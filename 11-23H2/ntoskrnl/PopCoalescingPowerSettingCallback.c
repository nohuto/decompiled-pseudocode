/*
 * XREFs of PopCoalescingPowerSettingCallback @ 0x140863F20
 * Callers:
 *     <none>
 * Callees:
 *     PopCheckResiliencyScenarios @ 0x140701090 (PopCheckResiliencyScenarios.c)
 *     PopUpdateDiskIdleTimeoutSetting @ 0x14084355C (PopUpdateDiskIdleTimeoutSetting.c)
 *     PopReleasePolicyLock @ 0x140A87BA4 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A87BE4 (PopAcquirePolicyLock.c)
 */

/*
 * Hex-Rays decompilation failed for PopCoalescingPowerSettingCallback @ 0x140863F20
 * Reason: Hex-Rays returned no pseudocode for 0x140863F20
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140863F20: mov     [rsp+arg_0], rbx
 * 0000000140863F25: mov     [rsp+arg_8], rbp
 * 0000000140863F2A: mov     [rsp+arg_10], rsi
 * 0000000140863F2F: push    rdi
 * 0000000140863F30: sub     rsp, 20h
 * 0000000140863F34: mov     ebp, r8d
 * 0000000140863F37: mov     rdi, rdx
 * 0000000140863F3A: mov     rsi, rcx
 * 0000000140863F3D: mov     ebx, 0C000000Dh
 * 0000000140863F42: call    PopAcquirePolicyLock
 * 0000000140863F47: mov     r9, qword ptr cs:GUID_DISK_COALESCING_POWERDOWN_TIMEOUT.Data1
 * 0000000140863F4E: sub     r9, [rsi]
 * 0000000140863F51: jnz     short loc_140863F5E
 * 0000000140863F53: mov     r9, qword ptr cs:GUID_DISK_COALESCING_POWERDOWN_TIMEOUT.Data4
 * 0000000140863F5A: sub     r9, [rsi+8]
 * 0000000140863F5E: test    r9, r9
 * 0000000140863F61: jnz     short loc_140863F90
 * 0000000140863F63: cmp     ebp, 4
 * 0000000140863F66: jnz     short loc_140863F90
 * 0000000140863F68: test    rdi, rdi
 * 0000000140863F6B: jz      short loc_140863F90
 * 0000000140863F6D: mov     eax, [rdi]
 * 0000000140863F6F: or      ecx, 0FFFFFFFFh
 * 0000000140863F72: test    eax, eax
 * 0000000140863F74: mov     cs:PopDppeCoalescingSpindownTimeout, eax
 * 0000000140863F7A: cmovz   eax, ecx
 * 0000000140863F7D: cmp     eax, cs:PopDiskCoalescingTimeout
 * 0000000140863F83: jnz     loc_140923838
 * 0000000140863F89: call    PopCheckResiliencyScenarios
 * 0000000140863F8E: xor     ebx, ebx
 * 0000000140863F90: call    PopReleasePolicyLock
 * 0000000140863F95: mov     rbp, [rsp+28h+arg_8]
 * 0000000140863F9A: mov     eax, ebx
 * 0000000140863F9C: mov     rbx, [rsp+28h+arg_0]
 * 0000000140863FA1: mov     rsi, [rsp+28h+arg_10]
 * 0000000140863FA6: add     rsp, 20h
 * 0000000140863FAA: pop     rdi
 * 0000000140863FAB: retn
 * 0000000140923838: mov     cs:PopDiskCoalescingTimeout, eax
 * 000000014092383E: call    PopUpdateDiskIdleTimeoutSetting
 * 0000000140923843: nop
 * 0000000140923844: jmp     loc_140863F89
 */
