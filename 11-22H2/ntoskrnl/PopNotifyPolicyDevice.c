/*
 * XREFs of PopNotifyPolicyDevice @ 0x14084DF30
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x14032C2A0 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14032C404 (PopAcquireRwLockExclusive.c)
 *     PopAcquireTransitionLock @ 0x140802E90 (PopAcquireTransitionLock.c)
 *     PopReleaseTransitionLock @ 0x140802F44 (PopReleaseTransitionLock.c)
 *     PopEnableHiberFile @ 0x140803C60 (PopEnableHiberFile.c)
 *     PopConnectToPolicyDevice @ 0x14084DFB0 (PopConnectToPolicyDevice.c)
 *     PopPolicyDeviceHandleWakeAlarmNotification @ 0x140994684 (PopPolicyDeviceHandleWakeAlarmNotification.c)
 *     PopReleasePolicyLock @ 0x140A87BA4 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A87BE4 (PopAcquirePolicyLock.c)
 */

/*
 * Hex-Rays decompilation failed for PopNotifyPolicyDevice @ 0x14084DF30
 * Reason: Hex-Rays returned no pseudocode for 0x14084DF30
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014084DF30: mov     [rsp+arg_0], rbx
 * 000000014084DF35: push    rdi
 * 000000014084DF36: sub     rsp, 20h
 * 000000014084DF3A: mov     rax, [rcx+4]
 * 000000014084DF3E: mov     rdi, rdx
 * 000000014084DF41: sub     rax, qword ptr cs:GUID_DEVICE_INTERFACE_REMOVAL.Data1
 * 000000014084DF48: mov     rbx, rcx
 * 000000014084DF4B: jnz     short loc_14084DF58
 * 000000014084DF4D: mov     rax, [rcx+0Ch]
 * 000000014084DF51: sub     rax, qword ptr cs:GUID_DEVICE_INTERFACE_REMOVAL.Data4
 * 000000014084DF58: test    rax, rax
 * 000000014084DF5B: setz    al
 * 000000014084DF5E: cmp     edi, 8
 * 000000014084DF61: jz      short loc_14084DFA1
 * 000000014084DF63: cmp     edi, 3
 * 000000014084DF66: jz      loc_14091B00C
 * 000000014084DF6C: test    al, al
 * 000000014084DF6E: jnz     short loc_14084DF93
 * 000000014084DF70: lea     rcx, PopPolicyDeviceLock
 * 000000014084DF77: call    PopAcquireRwLockExclusive
 * 000000014084DF7C: mov     rdx, [rbx+28h]
 * 000000014084DF80: mov     ecx, edi
 * 000000014084DF82: call    PopConnectToPolicyDevice
 * 000000014084DF87: lea     rcx, PopPolicyDeviceLock
 * 000000014084DF8E: call    PopReleaseRwLock
 * 000000014084DF93: mov     rbx, [rsp+28h+arg_0]
 * 000000014084DF98: xor     eax, eax
 * 000000014084DF9A: add     rsp, 20h
 * 000000014084DF9E: pop     rdi
 * 000000014084DF9F: retn
 * 000000014084DFA1: call    PopPolicyDeviceHandleWakeAlarmNotification
 * 000000014084DFA6: jmp     short loc_14084DF93
 * 000000014091B00C: mov     edi, 4
 * 000000014091B011: mov     ecx, edi
 * 000000014091B013: call    PopAcquireTransitionLock
 * 000000014091B018: call    PopAcquirePolicyLock
 * 000000014091B01D: mov     bl, cs:PopHiberEnabled
 * 000000014091B023: xor     ecx, ecx
 * 000000014091B025: call    PopEnableHiberFile
 * 000000014091B02A: test    bl, bl
 * 000000014091B02C: jz      short loc_14091B035
 * 000000014091B02E: mov     cl, 1
 * 000000014091B030: call    PopEnableHiberFile
 * 000000014091B035: call    PopReleasePolicyLock
 * 000000014091B03A: mov     ecx, edi
 * 000000014091B03C: call    PopReleaseTransitionLock
 * 000000014091B041: nop
 * 000000014091B042: jmp     loc_14084DF93
 */
