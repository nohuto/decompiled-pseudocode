/*
 * XREFs of PdcPoReportLidState @ 0x140997C70
 * Callers:
 *     <none>
 * Callees:
 *     PopSetPowerSettingValueAcDc @ 0x1407A7760 (PopSetPowerSettingValueAcDc.c)
 *     PopPowerAggregatorForceSessionSwitch @ 0x140993A44 (PopPowerAggregatorForceSessionSwitch.c)
 *     PopReleasePolicyLock @ 0x140A87BA4 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A87BE4 (PopAcquirePolicyLock.c)
 */

/*
 * Hex-Rays decompilation failed for PdcPoReportLidState @ 0x140997C70
 * Reason: Hex-Rays returned no pseudocode for 0x140997C70
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140997C70: mov     [rsp+arg_8], rbx
 * 0000000140997C75: push    rdi
 * 0000000140997C76: sub     rsp, 20h
 * 0000000140997C7A: mov     dil, cl
 * 0000000140997C7D: call    PopAcquirePolicyLock
 * 0000000140997C82: xor     ebx, ebx
 * 0000000140997C84: cmp     cs:PopErrataReportingIncorrectLidState, bl
 * 0000000140997C8A: jnz     short loc_140997CB1
 * 0000000140997C8C: cmp     cs:PopLidOpened, dil
 * 0000000140997C93: jz      short loc_140997CB1
 * 0000000140997C95: mov     cs:PopLidOpened, dil
 * 0000000140997C9C: test    dil, dil
 * 0000000140997C9F: jnz     short loc_140997CB4
 * 0000000140997CA1: cmp     cs:PopPlatformAoAc, bl
 * 0000000140997CA7: jz      short loc_140997CB1
 * 0000000140997CA9: lea     ecx, [rbx+4]
 * 0000000140997CAC: call    PopPowerAggregatorForceSessionSwitch
 * 0000000140997CB1: test    dil, dil
 * 0000000140997CB4: setnz   bl
 * 0000000140997CB7: lea     r8, [rsp+28h+arg_0]
 * 0000000140997CBC: mov     edx, 4
 * 0000000140997CC1: mov     [rsp+28h+arg_0], ebx
 * 0000000140997CC5: lea     rcx, GUID_LIDSWITCH_STATE_CHANGE
 * 0000000140997CCC: call    PopSetPowerSettingValueAcDc
 * 0000000140997CD1: call    PopReleasePolicyLock
 * 0000000140997CD6: mov     rbx, [rsp+28h+arg_8]
 * 0000000140997CDB: add     rsp, 20h
 * 0000000140997CDF: pop     rdi
 * 0000000140997CE0: retn
 */
