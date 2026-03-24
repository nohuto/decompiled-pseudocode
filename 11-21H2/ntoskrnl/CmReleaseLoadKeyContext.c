/*
 * XREFs of CmReleaseLoadKeyContext @ 0x1406800D0
 * Callers:
 *     CmLoadDifferencingKey @ 0x14067CE4C (CmLoadDifferencingKey.c)
 * Callees:
 *     UNLOCK_HIVE_LOAD @ 0x14068934C (UNLOCK_HIVE_LOAD.c)
 *     LOCK_HIVE_LOAD @ 0x1406893EC (LOCK_HIVE_LOAD.c)
 *     CmpDoQueueLateUnloadWorker @ 0x1406CE3EC (CmpDoQueueLateUnloadWorker.c)
 *     CmpDereferenceKeyControlBlock @ 0x14071BF40 (CmpDereferenceKeyControlBlock.c)
 *     CmpUnlockRegistry @ 0x140AB4260 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x140AB4370 (CmpLockRegistry.c)
 */

/*
 * Hex-Rays decompilation failed for CmReleaseLoadKeyContext @ 0x1406800D0
 * Reason: Hex-Rays returned no pseudocode for 0x1406800D0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001406800D0: push    rbx
 * 00000001406800D2: sub     rsp, 20h
 * 00000001406800D6: mov     rbx, rcx
 * 00000001406800D9: test    edx, edx
 * 00000001406800DB: js      loc_14088C32E
 * 00000001406800E1: call    CmpLockRegistry
 * 00000001406800E6: mov     rcx, rbx; BugCheckParameter4
 * 00000001406800E9: call    CmpDereferenceKeyControlBlock
 * 00000001406800EE: call    CmpUnlockRegistry
 * 00000001406800F3: add     rsp, 20h
 * 00000001406800F7: pop     rbx
 * 00000001406800F8: retn
 * 000000014088C32E: call    LOCK_HIVE_LOAD
 * 000000014088C333: call    CmpLockRegistry
 * 000000014088C338: mov     rax, [rbx+20h]
 * 000000014088C33C: mov     rcx, rbx; BugCheckParameter4
 * 000000014088C33F: cmp     byte ptr [rax+0B80h], 1
 * 000000014088C346: jnz     short loc_14088C358
 * 000000014088C348: call    CmpDereferenceKeyControlBlock
 * 000000014088C34D: mov     rcx, [rbx+20h]
 * 000000014088C351: call    CmpDoQueueLateUnloadWorker
 * 000000014088C356: jmp     short loc_14088C35D
 * 000000014088C358: call    CmpDereferenceKeyControlBlock
 * 000000014088C35D: call    CmpUnlockRegistry
 * 000000014088C362: call    UNLOCK_HIVE_LOAD
 * 000000014088C367: nop
 * 000000014088C368: jmp     loc_1406800F3
 */
