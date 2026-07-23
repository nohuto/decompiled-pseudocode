/*
 * XREFs of PopDeepSleepPowerSettingCallback @ 0x140863AC0
 * Callers:
 *     <none>
 * Callees:
 *     PopCheckResiliencyScenarios @ 0x140701090 (PopCheckResiliencyScenarios.c)
 *     PopReleasePolicyLock @ 0x140A87BA4 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A87BE4 (PopAcquirePolicyLock.c)
 */

/*
 * Hex-Rays decompilation failed for PopDeepSleepPowerSettingCallback @ 0x140863AC0
 * Reason: Hex-Rays returned no pseudocode for 0x140863AC0
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140863AC0: push    rbx
 * 0000000140863AC2: sub     rsp, 20h
 * 0000000140863AC6: mov     r9, qword ptr cs:GUID_DEEP_SLEEP_ENABLED.Data1
 * 0000000140863ACD: mov     rbx, rdx
 * 0000000140863AD0: mov     r10d, 0C000000Dh
 * 0000000140863AD6: sub     r9, [rcx]
 * 0000000140863AD9: jnz     short loc_140863AE6
 * 0000000140863ADB: mov     r9, qword ptr cs:GUID_DEEP_SLEEP_ENABLED.Data4
 * 0000000140863AE2: sub     r9, [rcx+8]
 * 0000000140863AE6: test    r9, r9
 * 0000000140863AE9: jnz     short loc_140863B12
 * 0000000140863AEB: cmp     r8d, 4
 * 0000000140863AEF: jnz     short loc_140863B12
 * 0000000140863AF1: test    rbx, rbx
 * 0000000140863AF4: jz      short loc_140863B12
 * 0000000140863AF6: call    PopAcquirePolicyLock
 * 0000000140863AFB: cmp     dword ptr [rbx], 0
 * 0000000140863AFE: setnbe  cs:PopDeepSleepIsEnabled
 * 0000000140863B05: call    PopCheckResiliencyScenarios
 * 0000000140863B0A: call    PopReleasePolicyLock
 * 0000000140863B0F: xor     r10d, r10d
 * 0000000140863B12: mov     eax, r10d
 * 0000000140863B15: add     rsp, 20h
 * 0000000140863B19: pop     rbx
 * 0000000140863B1A: retn
 */
