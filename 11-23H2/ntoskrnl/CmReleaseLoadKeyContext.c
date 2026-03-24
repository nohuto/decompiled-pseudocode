/*
 * XREFs of CmReleaseLoadKeyContext @ 0x140692BE4
 * Callers:
 *     CmLoadDifferencingKey @ 0x14069108C (CmLoadDifferencingKey.c)
 * Callees:
 *     CmpDoQueueLateUnloadWorker @ 0x140751D34 (CmpDoQueueLateUnloadWorker.c)
 *     UNLOCK_HIVE_LOAD @ 0x140751E30 (UNLOCK_HIVE_LOAD.c)
 *     LOCK_HIVE_LOAD @ 0x140751EA8 (LOCK_HIVE_LOAD.c)
 *     CmpDereferenceKeyControlBlock @ 0x14076AB10 (CmpDereferenceKeyControlBlock.c)
 *     CmpLockRegistry @ 0x140AF54A0 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140AF54F0 (CmpUnlockRegistry.c)
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
 * 0000000140692BEF: js      loc_1408B2C68
 * 0000000140692BF5: call    CmpLockRegistry
 * 0000000140692BFA: mov     rcx, rbx; BugCheckParameter4
 * 0000000140692BFD: call    CmpDereferenceKeyControlBlock
 * 0000000140692C02: call    CmpUnlockRegistry
 * 0000000140692C07: add     rsp, 20h
 * 0000000140692C0B: pop     rbx
 * 0000000140692C0C: retn
 * 00000001408B2C68: call    LOCK_HIVE_LOAD
 * 00000001408B2C6D: call    CmpLockRegistry
 * 00000001408B2C72: mov     rax, [rbx+20h]
 * 00000001408B2C76: mov     rcx, rbx; BugCheckParameter4
 * 00000001408B2C79: cmp     byte ptr [rax+0B80h], 1
 * 00000001408B2C80: jnz     short loc_1408B2C92
 * 00000001408B2C82: call    CmpDereferenceKeyControlBlock
 * 00000001408B2C87: mov     rcx, [rbx+20h]
 * 00000001408B2C8B: call    CmpDoQueueLateUnloadWorker
 * 00000001408B2C90: jmp     short loc_1408B2C97
 * 00000001408B2C92: call    CmpDereferenceKeyControlBlock
 * 00000001408B2C97: call    CmpUnlockRegistry
 * 00000001408B2C9C: call    UNLOCK_HIVE_LOAD
 * 00000001408B2CA1: nop
 * 00000001408B2CA2: jmp     loc_140692C07
 */
