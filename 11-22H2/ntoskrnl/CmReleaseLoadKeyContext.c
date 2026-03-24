/*
 * XREFs of CmReleaseLoadKeyContext @ 0x140692BE4
 * Callers:
 *     CmLoadDifferencingKey @ 0x14069108C (CmLoadDifferencingKey.c)
 * Callees:
 *     CmpDoQueueLateUnloadWorker @ 0x140752244 (CmpDoQueueLateUnloadWorker.c)
 *     UNLOCK_HIVE_LOAD @ 0x140752340 (UNLOCK_HIVE_LOAD.c)
 *     LOCK_HIVE_LOAD @ 0x1407523B8 (LOCK_HIVE_LOAD.c)
 *     CmpDereferenceKeyControlBlock @ 0x14076B020 (CmpDereferenceKeyControlBlock.c)
 *     CmpLockRegistry @ 0x140AF64A0 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140AF64F0 (CmpUnlockRegistry.c)
 */

/*
 * Hex-Rays decompilation failed for CmReleaseLoadKeyContext @ 0x140692BE4
 * Reason: Hex-Rays returned no pseudocode for 0x140692BE4
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140692BE4: push    rbx
 * 0000000140692BE6: sub     rsp, 20h
 * 0000000140692BEA: mov     rbx, rcx
 * 0000000140692BED: test    edx, edx
 * 0000000140692BEF: js      loc_1408B4484
 * 0000000140692BF5: call    CmpLockRegistry
 * 0000000140692BFA: mov     rcx, rbx; BugCheckParameter4
 * 0000000140692BFD: call    CmpDereferenceKeyControlBlock
 * 0000000140692C02: call    CmpUnlockRegistry
 * 0000000140692C07: add     rsp, 20h
 * 0000000140692C0B: pop     rbx
 * 0000000140692C0C: retn
 * 00000001408B4484: call    LOCK_HIVE_LOAD
 * 00000001408B4489: call    CmpLockRegistry
 * 00000001408B448E: mov     rax, [rbx+20h]
 * 00000001408B4492: mov     rcx, rbx; BugCheckParameter4
 * 00000001408B4495: cmp     byte ptr [rax+0B80h], 1
 * 00000001408B449C: jnz     short loc_1408B44AE
 * 00000001408B449E: call    CmpDereferenceKeyControlBlock
 * 00000001408B44A3: mov     rcx, [rbx+20h]
 * 00000001408B44A7: call    CmpDoQueueLateUnloadWorker
 * 00000001408B44AC: jmp     short loc_1408B44B3
 * 00000001408B44AE: call    CmpDereferenceKeyControlBlock
 * 00000001408B44B3: call    CmpUnlockRegistry
 * 00000001408B44B8: call    UNLOCK_HIVE_LOAD
 * 00000001408B44BD: nop
 * 00000001408B44BE: jmp     loc_140692C07
 */
