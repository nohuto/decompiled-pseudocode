/*
 * XREFs of PopBatteryAdd @ 0x140995030
 * Callers:
 *     <none>
 * Callees:
 *     KeInitializeEvent @ 0x1402AF840 (KeInitializeEvent.c)
 *     ExQueueWorkItem @ 0x1402B7C00 (ExQueueWorkItem.c)
 *     PopReleaseRwLock @ 0x14032C2A0 (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x14032C404 (PopAcquireRwLockExclusive.c)
 *     PopBatteryQueueWork @ 0x1403C5DF8 (PopBatteryQueueWork.c)
 *     PopResetCurrentPolicies @ 0x140825058 (PopResetCurrentPolicies.c)
 *     PopBatteryWaitTag @ 0x140995BC4 (PopBatteryWaitTag.c)
 *     PopReleasePolicyLock @ 0x140A87BA4 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140A87BE4 (PopAcquirePolicyLock.c)
 */

/*
 * Hex-Rays decompilation failed for PopBatteryAdd @ 0x140995030
 * Reason: Hex-Rays returned no pseudocode for 0x140995030
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140995030: push    rbx
 * 0000000140995032: sub     rsp, 20h
 * 0000000140995036: xor     r8d, r8d; State
 * 0000000140995039: mov     rbx, rcx
 * 000000014099503C: add     rcx, 50h ; 'P'; Event
 * 0000000140995040: lea     edx, [r8+1]; Type
 * 0000000140995044: call    KeInitializeEvent
 * 0000000140995049: mov     eax, cs:dword_140C3D0F0
 * 000000014099504F: inc     eax
 * 0000000140995051: mov     cs:dword_140C3D0F0, eax
 * 0000000140995057: cmp     eax, 1
 * 000000014099505A: jnz     short loc_1409950AA
 * 000000014099505C: call    PopAcquirePolicyLock
 * 0000000140995061: cmp     cs:byte_140C3DADE, 1
 * 0000000140995068: jz      short loc_140995076
 * 000000014099506A: mov     cs:byte_140C3DADE, 1
 * 0000000140995071: call    PopResetCurrentPolicies
 * 0000000140995076: call    PopReleasePolicyLock
 * 000000014099507B: prefetchw byte ptr cs:PopCadLoadReason
 * 0000000140995082: mov     eax, cs:PopCadLoadReason
 * 0000000140995088: mov     ecx, eax
 * 000000014099508A: or      ecx, 1
 * 000000014099508D: lock cmpxchg cs:PopCadLoadReason, ecx
 * 0000000140995095: jnz     short loc_140995088
 * 0000000140995097: test    eax, eax
 * 0000000140995099: jnz     short loc_1409950AA
 * 000000014099509B: lea     edx, [rax+1]; QueueType
 * 000000014099509E: lea     rcx, PopCadTriggerDriverLoadWorkItem; WorkItem
 * 00000001409950A5: call    ExQueueWorkItem
 * 00000001409950AA: lea     rcx, PopCB
 * 00000001409950B1: call    PopAcquireRwLockExclusive
 * 00000001409950B6: mov     rcx, rbx
 * 00000001409950B9: mov     cs:byte_140C3D0F8, 1
 * 00000001409950C0: call    PopBatteryWaitTag
 * 00000001409950C5: mov     ecx, 8
 * 00000001409950CA: call    PopBatteryQueueWork
 * 00000001409950CF: lea     rcx, PopCB
 * 00000001409950D6: call    PopReleaseRwLock
 * 00000001409950DB: add     rsp, 20h
 * 00000001409950DF: pop     rbx
 * 00000001409950E0: retn
 */
