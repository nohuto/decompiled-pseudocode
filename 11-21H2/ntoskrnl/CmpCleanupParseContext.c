/*
 * XREFs of CmpCleanupParseContext @ 0x14067FE98
 * Callers:
 *     CmpLinkHiveToMaster @ 0x14067C9E8 (CmpLinkHiveToMaster.c)
 *     CmLoadDifferencingKey @ 0x14067CE4C (CmLoadDifferencingKey.c)
 *     CmCreateKey @ 0x14067F8D0 (CmCreateKey.c)
 *     CmpStartSiloRegistryNamespace @ 0x140690978 (CmpStartSiloRegistryNamespace.c)
 *     CmUnloadKey @ 0x14069E454 (CmUnloadKey.c)
 *     CmpParseKey @ 0x1407349A0 (CmpParseKey.c)
 *     NtNotifyChangeMultipleKeys @ 0x1407E5600 (NtNotifyChangeMultipleKeys.c)
 *     CmpCreatePredefined @ 0x14083451C (CmpCreatePredefined.c)
 *     NtQueryOpenSubKeys @ 0x14090E9C0 (NtQueryOpenSubKeys.c)
 *     NtQueryOpenSubKeysEx @ 0x14090EC00 (NtQueryOpenSubKeysEx.c)
 *     CmpResolveHiveLoadConflict @ 0x140914914 (CmpResolveHiveLoadConflict.c)
 *     CmKeyBodyRemapToVirtual @ 0x140915DB8 (CmKeyBodyRemapToVirtual.c)
 *     CmKeyBodyReplicateToVirtual @ 0x14091607C (CmKeyBodyReplicateToVirtual.c)
 *     CmpDoBuildVirtualStack @ 0x140916918 (CmpDoBuildVirtualStack.c)
 *     CmpDoReOpenTransKey @ 0x140925ED0 (CmpDoReOpenTransKey.c)
 *     CmInitSystem1 @ 0x140B15F88 (CmInitSystem1.c)
 * Callees:
 *     CmpFreeExtraParameter @ 0x1406D17F4 (CmpFreeExtraParameter.c)
 *     CmpDereferenceKeyControlBlock @ 0x14071BF40 (CmpDereferenceKeyControlBlock.c)
 *     CmpUnlockRegistry @ 0x140AB4260 (CmpUnlockRegistry.c)
 *     CmpLockRegistry @ 0x140AB4370 (CmpLockRegistry.c)
 */

/*
 * Hex-Rays decompilation failed for CmpCleanupParseContext @ 0x14067FE98
 * Reason: Hex-Rays returned no pseudocode for 0x14067FE98
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014067FE98: mov     [rsp+arg_0], rbx
 * 000000014067FE9D: push    rdi
 * 000000014067FE9E: sub     rsp, 20h
 * 000000014067FEA2: mov     rbx, rcx
 * 000000014067FEA5: mov     dil, dl
 * 000000014067FEA8: mov     rcx, [rcx+58h]
 * 000000014067FEAC: test    rcx, rcx
 * 000000014067FEAF: jnz     loc_14088C2AA
 * 000000014067FEB5: add     rbx, 90h
 * 000000014067FEBC: mov     rax, [rbx]
 * 000000014067FEBF: cmp     [rax+8], rbx
 * 000000014067FEC3: jnz     short loc_14067FEF0
 * 000000014067FEC5: mov     rcx, [rax]
 * 000000014067FEC8: cmp     [rcx+8], rax
 * 000000014067FECC: jnz     short loc_14067FEF0
 * 000000014067FECE: mov     [rbx], rcx
 * 000000014067FED1: mov     [rcx+8], rbx
 * 000000014067FED5: cmp     rax, rbx
 * 000000014067FED8: jnz     short loc_14067FEE6
 * 000000014067FEDA: mov     rbx, [rsp+28h+arg_0]
 * 000000014067FEDF: add     rsp, 20h
 * 000000014067FEE3: pop     rdi
 * 000000014067FEE4: retn
 * 000000014067FEE6: mov     rcx, rax
 * 000000014067FEE9: call    CmpFreeExtraParameter
 * 000000014067FEEE: jmp     short loc_14067FEBC
 * 000000014067FEF0: mov     ecx, 3
 * 000000014067FEF5: int     29h; Win8: RtlFailFast(ecx)
 * 000000014088C2AA: test    dil, dil
 * 000000014088C2AD: jnz     short loc_14088C2B8
 * 000000014088C2AF: call    CmpLockRegistry
 * 000000014088C2B4: mov     rcx, [rbx+58h]; BugCheckParameter4
 * 000000014088C2B8: call    CmpDereferenceKeyControlBlock
 * 000000014088C2BD: test    dil, dil
 * 000000014088C2C0: jnz     loc_14067FEB5
 * 000000014088C2C6: call    CmpUnlockRegistry
 * 000000014088C2CB: nop
 * 000000014088C2CC: jmp     loc_14067FEB5
 */
