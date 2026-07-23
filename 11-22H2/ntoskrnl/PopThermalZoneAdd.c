/*
 * XREFs of PopThermalZoneAdd @ 0x1408247B0
 * Callers:
 *     <none>
 * Callees:
 *     KeInitializeEvent @ 0x1402AF840 (KeInitializeEvent.c)
 *     ExQueueWorkItem @ 0x1402B7C00 (ExQueueWorkItem.c)
 *     KeInitializeTimer2 @ 0x14031E320 (KeInitializeTimer2.c)
 *     KeInitializeIRTimer @ 0x14036EFA8 (KeInitializeIRTimer.c)
 *     PopThermalUpdateTelemetryClientCount @ 0x140387BCC (PopThermalUpdateTelemetryClientCount.c)
 *     PopResetCurrentPolicies @ 0x140825058 (PopResetCurrentPolicies.c)
 *     PopReleasePolicyLock @ 0x140A87BA4 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A87BE4 (PopAcquirePolicyLock.c)
 */

/*
 * Hex-Rays decompilation failed for PopThermalZoneAdd @ 0x1408247B0
 * Reason: Hex-Rays returned no pseudocode for 0x1408247B0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001408247B0: mov     [rsp+arg_8], rbx
 * 00000001408247B5: push    rdi
 * 00000001408247B6: sub     rsp, 30h
 * 00000001408247BA: mov     rbx, rcx
 * 00000001408247BD: lea     rdx, PopThermalZoneTimerCallback
 * 00000001408247C4: add     rcx, 128h
 * 00000001408247CB: mov     r8, rbx
 * 00000001408247CE: cmp     cs:PopThermalPollingMode, 0
 * 00000001408247D5: jnz     loc_14090BDF6
 * 00000001408247DB: xor     r9d, r9d
 * 00000001408247DE: call    KeInitializeTimer2
 * 00000001408247E3: mov     rax, [rbx+38h]
 * 00000001408247E7: mov     ecx, 64h ; 'd'
 * 00000001408247EC: or      word ptr [rbx+45h], 0FFFFh
 * 00000001408247F2: xor     r8d, r8d; State
 * 00000001408247F5: mov     [rbx+50h], ecx
 * 00000001408247F8: xor     edx, edx; Type
 * 00000001408247FA: mov     [rbx+54h], ecx
 * 00000001408247FD: mov     byte ptr [rbx+40h], 6
 * 0000000140824801: mov     byte ptr [rbx+43h], 2
 * 0000000140824805: mov     dword ptr [rbx+4Ch], 3E8h
 * 000000014082480C: mov     dword ptr [rax+30h], 0C000009Dh
 * 0000000140824813: mov     eax, cs:PopThermalZoneNextId
 * 0000000140824819: mov     [rbx+1F0h], eax
 * 000000014082481F: inc     eax
 * 0000000140824821: mov     [rbx+0D8h], ecx
 * 0000000140824827: lea     rcx, [rbx+1C0h]; Event
 * 000000014082482E: mov     cs:PopThermalZoneNextId, eax
 * 0000000140824834: call    KeInitializeEvent
 * 0000000140824839: lea     rcx, [rbx+1D8h]; Event
 * 0000000140824840: xor     r8d, r8d; State
 * 0000000140824843: xor     edx, edx; Type
 * 0000000140824845: call    KeInitializeEvent
 * 000000014082484A: lea     rdi, [rbx+108h]
 * 0000000140824851: and     qword ptr [rdi], 0
 * 0000000140824855: lea     rax, PopThermalWorker
 * 000000014082485C: mov     [rdi+10h], rax
 * 0000000140824860: mov     rax, 0FFFFF78000000008h
 * 000000014082486A: mov     [rdi+18h], rbx
 * 000000014082486E: mov     rax, [rax]
 * 0000000140824871: mov     [rbx+200h], rax
 * 0000000140824878: mov     [rbx+208h], rax
 * 000000014082487F: and     qword ptr [rbx+1B8h], 0
 * 0000000140824887: mov     eax, cs:PopThermalZoneCount
 * 000000014082488D: and     qword ptr [rbx+1B0h], 0
 * 0000000140824895: inc     eax
 * 0000000140824897: mov     cs:PopThermalZoneCount, eax
 * 000000014082489D: cmp     eax, 1
 * 00000001408248A0: jnz     short loc_1408248C1
 * 00000001408248A2: call    PopAcquirePolicyLock
 * 00000001408248A7: cmp     byte ptr cs:PopCapabilities+0Dh, 1
 * 00000001408248AE: jz      short loc_1408248BC
 * 00000001408248B0: mov     byte ptr cs:PopCapabilities+0Dh, 1
 * 00000001408248B7: call    PopResetCurrentPolicies
 * 00000001408248BC: call    PopReleasePolicyLock
 * 00000001408248C1: mov     cl, 1
 * 00000001408248C3: call    PopThermalUpdateTelemetryClientCount
 * 00000001408248C8: mov     edx, 1; QueueType
 * 00000001408248CD: mov     rcx, rdi; WorkItem
 * 00000001408248D0: call    ExQueueWorkItem
 * 00000001408248D5: mov     rbx, [rsp+38h+arg_8]
 * 00000001408248DA: add     rsp, 30h
 * 00000001408248DE: pop     rdi
 * 00000001408248DF: retn
 * 000000014090BDF6: lea     r9, [rsp+38h+arg_0]
 * 000000014090BDFB: mov     [rsp+38h+arg_0], 40008h
 * 000000014090BE03: mov     [rsp+38h+var_18], 2
 * 000000014090BE0B: call    KeInitializeIRTimer
 * 000000014090BE10: nop
 * 000000014090BE11: jmp     loc_1408247E3
 */
