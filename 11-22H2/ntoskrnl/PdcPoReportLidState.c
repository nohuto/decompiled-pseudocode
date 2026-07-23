/*
 * XREFs of PdcPoReportLidState @ 0x140997B20
 * Callers:
 *     <none>
 * Callees:
 *     PopSetPowerSettingValueAcDc @ 0x1407A7A80 (PopSetPowerSettingValueAcDc.c)
 *     PopPowerAggregatorForceSessionSwitch @ 0x1409938F4 (PopPowerAggregatorForceSessionSwitch.c)
 *     PopReleasePolicyLock @ 0x140A87BA4 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A87BE4 (PopAcquirePolicyLock.c)
 */

/*
 * Hex-Rays decompilation failed for PdcPoReportLidState @ 0x140997B20
 * Reason: Hex-Rays returned no pseudocode for 0x140997B20
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140997B20: mov     [rsp+arg_8], rbx
 * 0000000140997B25: push    rdi
 * 0000000140997B26: sub     rsp, 20h
 * 0000000140997B2A: mov     dil, cl
 * 0000000140997B2D: call    PopAcquirePolicyLock
 * 0000000140997B32: xor     ebx, ebx
 * 0000000140997B34: cmp     cs:PopErrataReportingIncorrectLidState, bl
 * 0000000140997B3A: jnz     short loc_140997B61
 * 0000000140997B3C: cmp     cs:PopLidOpened, dil
 * 0000000140997B43: jz      short loc_140997B61
 * 0000000140997B45: mov     cs:PopLidOpened, dil
 * 0000000140997B4C: test    dil, dil
 * 0000000140997B4F: jnz     short loc_140997B64
 * 0000000140997B51: cmp     cs:PopPlatformAoAc, bl
 * 0000000140997B57: jz      short loc_140997B61
 * 0000000140997B59: lea     ecx, [rbx+4]
 * 0000000140997B5C: call    PopPowerAggregatorForceSessionSwitch
 * 0000000140997B61: test    dil, dil
 * 0000000140997B64: setnz   bl
 * 0000000140997B67: lea     r8, [rsp+28h+arg_0]
 * 0000000140997B6C: mov     edx, 4
 * 0000000140997B71: mov     [rsp+28h+arg_0], ebx
 * 0000000140997B75: lea     rcx, GUID_LIDSWITCH_STATE_CHANGE
 * 0000000140997B7C: call    PopSetPowerSettingValueAcDc
 * 0000000140997B81: call    PopReleasePolicyLock
 * 0000000140997B86: mov     rbx, [rsp+28h+arg_8]
 * 0000000140997B8B: add     rsp, 20h
 * 0000000140997B8F: pop     rdi
 * 0000000140997B90: retn
 */
