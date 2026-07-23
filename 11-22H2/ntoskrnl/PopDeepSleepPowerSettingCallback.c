/*
 * XREFs of PopDeepSleepPowerSettingCallback @ 0x140863AA0
 * Callers:
 *     <none>
 * Callees:
 *     PopCheckResiliencyScenarios @ 0x140700F30 (PopCheckResiliencyScenarios.c)
 *     PopReleasePolicyLock @ 0x140A87BA4 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A87BE4 (PopAcquirePolicyLock.c)
 */

/*
 * Hex-Rays decompilation failed for PopDeepSleepPowerSettingCallback @ 0x140863AA0
 * Reason: Hex-Rays returned no pseudocode for 0x140863AA0
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140863AA0: push    rbx
 * 0000000140863AA2: sub     rsp, 20h
 * 0000000140863AA6: mov     r9, qword ptr cs:GUID_DEEP_SLEEP_ENABLED.Data1
 * 0000000140863AAD: mov     rbx, rdx
 * 0000000140863AB0: mov     r10d, 0C000000Dh
 * 0000000140863AB6: sub     r9, [rcx]
 * 0000000140863AB9: jnz     short loc_140863AC6
 * 0000000140863ABB: mov     r9, qword ptr cs:GUID_DEEP_SLEEP_ENABLED.Data4
 * 0000000140863AC2: sub     r9, [rcx+8]
 * 0000000140863AC6: test    r9, r9
 * 0000000140863AC9: jnz     short loc_140863AF2
 * 0000000140863ACB: cmp     r8d, 4
 * 0000000140863ACF: jnz     short loc_140863AF2
 * 0000000140863AD1: test    rbx, rbx
 * 0000000140863AD4: jz      short loc_140863AF2
 * 0000000140863AD6: call    PopAcquirePolicyLock
 * 0000000140863ADB: cmp     dword ptr [rbx], 0
 * 0000000140863ADE: setnbe  cs:PopDeepSleepIsEnabled
 * 0000000140863AE5: call    PopCheckResiliencyScenarios
 * 0000000140863AEA: call    PopReleasePolicyLock
 * 0000000140863AEF: xor     r10d, r10d
 * 0000000140863AF2: mov     eax, r10d
 * 0000000140863AF5: add     rsp, 20h
 * 0000000140863AF9: pop     rbx
 * 0000000140863AFA: retn
 */
