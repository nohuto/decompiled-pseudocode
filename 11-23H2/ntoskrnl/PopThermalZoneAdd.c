/*
 * XREFs of PopThermalZoneAdd @ 0x140823B50
 * Callers:
 *     <none>
 * Callees:
 *     KeInitializeEvent @ 0x1402AFB00 (KeInitializeEvent.c)
 *     ExQueueWorkItem @ 0x1402B7EC0 (ExQueueWorkItem.c)
 *     KeInitializeTimer2 @ 0x14031E790 (KeInitializeTimer2.c)
 *     KeInitializeIRTimer @ 0x14036F798 (KeInitializeIRTimer.c)
 *     PopThermalUpdateTelemetryClientCount @ 0x14038A050 (PopThermalUpdateTelemetryClientCount.c)
 *     PopResetCurrentPolicies @ 0x1408243F8 (PopResetCurrentPolicies.c)
 *     PopReleasePolicyLock @ 0x140A87BA4 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A87BE4 (PopAcquirePolicyLock.c)
 */

/*
 * Hex-Rays decompilation failed for PopThermalZoneAdd @ 0x140823B50
 * Reason: Hex-Rays returned no pseudocode for 0x140823B50
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140823B50: mov     [rsp+arg_8], rbx
 * 0000000140823B55: push    rdi
 * 0000000140823B56: sub     rsp, 30h
 * 0000000140823B5A: mov     rbx, rcx
 * 0000000140823B5D: lea     rdx, PopThermalZoneTimerCallback
 * 0000000140823B64: add     rcx, 128h
 * 0000000140823B6B: mov     r8, rbx
 * 0000000140823B6E: cmp     cs:PopThermalPollingMode, 0
 * 0000000140823B75: jnz     loc_14090B548
 * 0000000140823B7B: xor     r9d, r9d
 * 0000000140823B7E: call    KeInitializeTimer2
 * 0000000140823B83: mov     rax, [rbx+38h]
 * 0000000140823B87: mov     ecx, 64h ; 'd'
 * 0000000140823B8C: or      word ptr [rbx+45h], 0FFFFh
 * 0000000140823B92: xor     r8d, r8d; State
 * 0000000140823B95: mov     [rbx+50h], ecx
 * 0000000140823B98: xor     edx, edx; Type
 * 0000000140823B9A: mov     [rbx+54h], ecx
 * 0000000140823B9D: mov     byte ptr [rbx+40h], 6
 * 0000000140823BA1: mov     byte ptr [rbx+43h], 2
 * 0000000140823BA5: mov     dword ptr [rbx+4Ch], 3E8h
 * 0000000140823BAC: mov     dword ptr [rax+30h], 0C000009Dh
 * 0000000140823BB3: mov     eax, cs:PopThermalZoneNextId
 * 0000000140823BB9: mov     [rbx+1F0h], eax
 * 0000000140823BBF: inc     eax
 * 0000000140823BC1: mov     [rbx+0D8h], ecx
 * 0000000140823BC7: lea     rcx, [rbx+1C0h]; Event
 * 0000000140823BCE: mov     cs:PopThermalZoneNextId, eax
 * 0000000140823BD4: call    KeInitializeEvent
 * 0000000140823BD9: lea     rcx, [rbx+1D8h]; Event
 * 0000000140823BE0: xor     r8d, r8d; State
 * 0000000140823BE3: xor     edx, edx; Type
 * 0000000140823BE5: call    KeInitializeEvent
 * 0000000140823BEA: lea     rdi, [rbx+108h]
 * 0000000140823BF1: and     qword ptr [rdi], 0
 * 0000000140823BF5: lea     rax, PopThermalWorker
 * 0000000140823BFC: mov     [rdi+10h], rax
 * 0000000140823C00: mov     rax, 0FFFFF78000000008h
 * 0000000140823C0A: mov     [rdi+18h], rbx
 * 0000000140823C0E: mov     rax, [rax]
 * 0000000140823C11: mov     [rbx+200h], rax
 * 0000000140823C18: mov     [rbx+208h], rax
 * 0000000140823C1F: and     qword ptr [rbx+1B8h], 0
 * 0000000140823C27: mov     eax, cs:PopThermalZoneCount
 * 0000000140823C2D: and     qword ptr [rbx+1B0h], 0
 * 0000000140823C35: inc     eax
 * 0000000140823C37: mov     cs:PopThermalZoneCount, eax
 * 0000000140823C3D: cmp     eax, 1
 * 0000000140823C40: jnz     short loc_140823C61
 * 0000000140823C42: call    PopAcquirePolicyLock
 * 0000000140823C47: cmp     byte ptr cs:PopCapabilities+0Dh, 1
 * 0000000140823C4E: jz      short loc_140823C5C
 * 0000000140823C50: mov     byte ptr cs:PopCapabilities+0Dh, 1
 * 0000000140823C57: call    PopResetCurrentPolicies
 * 0000000140823C5C: call    PopReleasePolicyLock
 * 0000000140823C61: mov     cl, 1
 * 0000000140823C63: call    PopThermalUpdateTelemetryClientCount
 * 0000000140823C68: mov     edx, 1; QueueType
 * 0000000140823C6D: mov     rcx, rdi; WorkItem
 * 0000000140823C70: call    ExQueueWorkItem
 * 0000000140823C75: mov     rbx, [rsp+38h+arg_8]
 * 0000000140823C7A: add     rsp, 30h
 * 0000000140823C7E: pop     rdi
 * 0000000140823C7F: retn
 * 000000014090B548: lea     r9, [rsp+38h+arg_0]
 * 000000014090B54D: mov     [rsp+38h+arg_0], 40008h
 * 000000014090B555: mov     [rsp+38h+var_18], 2
 * 000000014090B55D: call    KeInitializeIRTimer
 * 000000014090B562: nop
 * 000000014090B563: jmp     loc_140823B83
 */
