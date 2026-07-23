/*
 * XREFs of PopBatteryAlarmPowerSettingCallback @ 0x1408241A0
 * Callers:
 *     <none>
 * Callees:
 *     PopBatteryUpdateAlarms @ 0x1408241D0 (PopBatteryUpdateAlarms.c)
 *     PopReleasePolicyLock @ 0x140A87BA4 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A87BE4 (PopAcquirePolicyLock.c)
 */

/*
 * Hex-Rays decompilation failed for PopBatteryAlarmPowerSettingCallback @ 0x1408241A0
 * Reason: Hex-Rays returned no pseudocode for 0x1408241A0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001408241A0: push    rbx
 * 00000001408241A2: sub     rsp, 20h
 * 00000001408241A6: mov     rbx, r9
 * 00000001408241A9: call    PopAcquirePolicyLock
 * 00000001408241AE: mov     edx, ebx
 * 00000001408241B0: xor     ecx, ecx
 * 00000001408241B2: call    PopBatteryUpdateAlarms
 * 00000001408241B7: mov     ebx, eax
 * 00000001408241B9: call    PopReleasePolicyLock
 * 00000001408241BE: mov     eax, ebx
 * 00000001408241C0: add     rsp, 20h
 * 00000001408241C4: pop     rbx
 * 00000001408241C5: retn
 */
