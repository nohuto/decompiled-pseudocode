/*
 * XREFs of PopNotifyPolicyDevice @ 0x14084CFD0
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x14032C710 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14032C874 (PopAcquireRwLockExclusive.c)
 *     PopAcquireTransitionLock @ 0x14080190C (PopAcquireTransitionLock.c)
 *     PopReleaseTransitionLock @ 0x140801968 (PopReleaseTransitionLock.c)
 *     PopEnableHiberFile @ 0x1408019AC (PopEnableHiberFile.c)
 *     PopConnectToPolicyDevice @ 0x14084D050 (PopConnectToPolicyDevice.c)
 *     PopPolicyDeviceHandleWakeAlarmNotification @ 0x1409947D4 (PopPolicyDeviceHandleWakeAlarmNotification.c)
 *     PopReleasePolicyLock @ 0x140A87BA4 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A87BE4 (PopAcquirePolicyLock.c)
 */

/*
 * Hex-Rays decompilation failed for PopNotifyPolicyDevice @ 0x14084CFD0
 * Reason: Hex-Rays returned no pseudocode for 0x14084CFD0
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014084CFD0: mov     [rsp+arg_0], rbx
 * 000000014084CFD5: push    rdi
 * 000000014084CFD6: sub     rsp, 20h
 * 000000014084CFDA: mov     rax, [rcx+4]
 * 000000014084CFDE: mov     rdi, rdx
 * 000000014084CFE1: sub     rax, qword ptr cs:GUID_DEVICE_INTERFACE_REMOVAL.Data1
 * 000000014084CFE8: mov     rbx, rcx
 * 000000014084CFEB: jnz     short loc_14084CFF8
 * 000000014084CFED: mov     rax, [rcx+0Ch]
 * 000000014084CFF1: sub     rax, qword ptr cs:GUID_DEVICE_INTERFACE_REMOVAL.Data4
 * 000000014084CFF8: test    rax, rax
 * 000000014084CFFB: setz    al
 * 000000014084CFFE: cmp     edi, 8
 * 000000014084D001: jz      short loc_14084D041
 * 000000014084D003: cmp     edi, 3
 * 000000014084D006: jz      loc_14091AFCA
 * 000000014084D00C: test    al, al
 * 000000014084D00E: jnz     short loc_14084D033
 * 000000014084D010: lea     rcx, PopPolicyDeviceLock
 * 000000014084D017: call    PopAcquireRwLockExclusive
 * 000000014084D01C: mov     rdx, [rbx+28h]
 * 000000014084D020: mov     ecx, edi
 * 000000014084D022: call    PopConnectToPolicyDevice
 * 000000014084D027: lea     rcx, PopPolicyDeviceLock
 * 000000014084D02E: call    PopReleaseRwLock
 * 000000014084D033: mov     rbx, [rsp+28h+arg_0]
 * 000000014084D038: xor     eax, eax
 * 000000014084D03A: add     rsp, 20h
 * 000000014084D03E: pop     rdi
 * 000000014084D03F: retn
 * 000000014084D041: call    PopPolicyDeviceHandleWakeAlarmNotification
 * 000000014084D046: jmp     short loc_14084D033
 * 000000014091AFCA: mov     edi, 4
 * 000000014091AFCF: mov     ecx, edi
 * 000000014091AFD1: call    PopAcquireTransitionLock
 * 000000014091AFD6: call    PopAcquirePolicyLock
 * 000000014091AFDB: mov     bl, cs:PopHiberEnabled
 * 000000014091AFE1: xor     ecx, ecx
 * 000000014091AFE3: call    PopEnableHiberFile
 * 000000014091AFE8: test    bl, bl
 * 000000014091AFEA: jz      short loc_14091AFF3
 * 000000014091AFEC: mov     cl, 1
 * 000000014091AFEE: call    PopEnableHiberFile
 * 000000014091AFF3: call    PopReleasePolicyLock
 * 000000014091AFF8: mov     ecx, edi
 * 000000014091AFFA: call    PopReleaseTransitionLock
 * 000000014091AFFF: nop
 * 000000014091B000: jmp     loc_14084D033
 */
