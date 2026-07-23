/*
 * XREFs of PopBatteryAdd @ 0x140995180
 * Callers:
 *     <none>
 * Callees:
 *     KeInitializeEvent @ 0x1402AFB00 (KeInitializeEvent.c)
 *     ExQueueWorkItem @ 0x1402B7EC0 (ExQueueWorkItem.c)
 *     PopReleaseRwLock @ 0x14032C710 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14032C874 (PopAcquireRwLockExclusive.c)
 *     PopBatteryQueueWork @ 0x1403C6638 (PopBatteryQueueWork.c)
 *     PopResetCurrentPolicies @ 0x1408243F8 (PopResetCurrentPolicies.c)
 *     PopBatteryWaitTag @ 0x140995D14 (PopBatteryWaitTag.c)
 *     PopReleasePolicyLock @ 0x140A87BA4 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A87BE4 (PopAcquirePolicyLock.c)
 */

/*
 * Hex-Rays decompilation failed for PopBatteryAdd @ 0x140995180
 * Reason: Hex-Rays returned no pseudocode for 0x140995180
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140995180: push    rbx
 * 0000000140995182: sub     rsp, 20h
 * 0000000140995186: xor     r8d, r8d; State
 * 0000000140995189: mov     rbx, rcx
 * 000000014099518C: add     rcx, 50h ; 'P'; Event
 * 0000000140995190: lea     edx, [r8+1]; Type
 * 0000000140995194: call    KeInitializeEvent
 * 0000000140995199: mov     eax, cs:dword_140C3D050
 * 000000014099519F: inc     eax
 * 00000001409951A1: mov     cs:dword_140C3D050, eax
 * 00000001409951A7: cmp     eax, 1
 * 00000001409951AA: jnz     short loc_1409951FA
 * 00000001409951AC: call    PopAcquirePolicyLock
 * 00000001409951B1: cmp     cs:byte_140C3DA1E, 1
 * 00000001409951B8: jz      short loc_1409951C6
 * 00000001409951BA: mov     cs:byte_140C3DA1E, 1
 * 00000001409951C1: call    PopResetCurrentPolicies
 * 00000001409951C6: call    PopReleasePolicyLock
 * 00000001409951CB: prefetchw byte ptr cs:PopCadLoadReason
 * 00000001409951D2: mov     eax, cs:PopCadLoadReason
 * 00000001409951D8: mov     ecx, eax
 * 00000001409951DA: or      ecx, 1
 * 00000001409951DD: lock cmpxchg cs:PopCadLoadReason, ecx
 * 00000001409951E5: jnz     short loc_1409951D8
 * 00000001409951E7: test    eax, eax
 * 00000001409951E9: jnz     short loc_1409951FA
 * 00000001409951EB: lea     edx, [rax+1]; QueueType
 * 00000001409951EE: lea     rcx, PopCadTriggerDriverLoadWorkItem; WorkItem
 * 00000001409951F5: call    ExQueueWorkItem
 * 00000001409951FA: lea     rcx, PopCB
 * 0000000140995201: call    PopAcquireRwLockExclusive
 * 0000000140995206: mov     rcx, rbx
 * 0000000140995209: mov     cs:byte_140C3D058, 1
 * 0000000140995210: call    PopBatteryWaitTag
 * 0000000140995215: mov     ecx, 8
 * 000000014099521A: call    PopBatteryQueueWork
 * 000000014099521F: lea     rcx, PopCB
 * 0000000140995226: call    PopReleaseRwLock
 * 000000014099522B: add     rsp, 20h
 * 000000014099522F: pop     rbx
 * 0000000140995230: retn
 */
