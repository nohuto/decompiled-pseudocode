/*
 * XREFs of PopBatteryAlarmPowerSettingCallback @ 0x140824E00
 * Callers:
 *     <none>
 * Callees:
 *     PopBatteryUpdateAlarms @ 0x140824E30 (PopBatteryUpdateAlarms.c)
 *     PopReleasePolicyLock @ 0x140A87BA4 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A87BE4 (PopAcquirePolicyLock.c)
 */

/*
 * Hex-Rays decompilation failed for PopBatteryAlarmPowerSettingCallback @ 0x140824E00
 * Reason: Hex-Rays returned no pseudocode for 0x140824E00
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140824E00: push    rbx
 * 0000000140824E02: sub     rsp, 20h
 * 0000000140824E06: mov     rbx, r9
 * 0000000140824E09: call    PopAcquirePolicyLock
 * 0000000140824E0E: mov     edx, ebx
 * 0000000140824E10: xor     ecx, ecx
 * 0000000140824E12: call    PopBatteryUpdateAlarms
 * 0000000140824E17: mov     ebx, eax
 * 0000000140824E19: call    PopReleasePolicyLock
 * 0000000140824E1E: mov     eax, ebx
 * 0000000140824E20: add     rsp, 20h
 * 0000000140824E24: pop     rbx
 * 0000000140824E25: retn
 */
