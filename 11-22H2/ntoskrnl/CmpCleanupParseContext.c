/*
 * XREFs of CmpCleanupParseContext @ 0x140692A84
 * Callers:
 *     CmpLinkHiveToMaster @ 0x14068F84C (CmpLinkHiveToMaster.c)
 *     CmLoadDifferencingKey @ 0x14069108C (CmLoadDifferencingKey.c)
 *     CmUnloadKey @ 0x140698DD8 (CmUnloadKey.c)
 *     CmpParseKey @ 0x1406E6A30 (CmpParseKey.c)
 *     NtNotifyChangeMultipleKeys @ 0x140767040 (NtNotifyChangeMultipleKeys.c)
 *     CmpStartSiloRegistryNamespace @ 0x14077D410 (CmpStartSiloRegistryNamespace.c)
 *     CmpCreatePredefined @ 0x14085D838 (CmpCreatePredefined.c)
 *     NtQueryOpenSubKeys @ 0x140A0DAD0 (NtQueryOpenSubKeys.c)
 *     NtQueryOpenSubKeysEx @ 0x140A0DD10 (NtQueryOpenSubKeysEx.c)
 *     CmpResolveHiveLoadConflict @ 0x140A16AC8 (CmpResolveHiveLoadConflict.c)
 *     CmKeyBodyRemapToVirtual @ 0x140A18024 (CmKeyBodyRemapToVirtual.c)
 *     CmKeyBodyReplicateToVirtual @ 0x140A182E8 (CmKeyBodyReplicateToVirtual.c)
 *     CmpDoBuildVirtualStack @ 0x140A1916C (CmpDoBuildVirtualStack.c)
 *     CmpDoReOpenTransKey @ 0x140A2AC84 (CmpDoReOpenTransKey.c)
 *     CmInitSystem1 @ 0x140B39964 (CmInitSystem1.c)
 * Callees:
 *     CmpDereferenceKeyControlBlock @ 0x14076B020 (CmpDereferenceKeyControlBlock.c)
 *     CmpFreeExtraParameter @ 0x1407E72A0 (CmpFreeExtraParameter.c)
 *     CmpLockRegistry @ 0x140AF64A0 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140AF64F0 (CmpUnlockRegistry.c)
 */

/*
 * Hex-Rays decompilation failed for CmpCleanupParseContext @ 0x140692A84
 * Reason: Hex-Rays returned no pseudocode for 0x140692A84
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140692A84: mov     [rsp+arg_0], rbx
 * 0000000140692A89: push    rdi
 * 0000000140692A8A: sub     rsp, 20h
 * 0000000140692A8E: cmp     qword ptr [rcx+58h], 0
 * 0000000140692A93: mov     dil, dl
 * 0000000140692A96: mov     rbx, rcx
 * 0000000140692A99: jnz     loc_1408B4434
 * 0000000140692A9F: add     rbx, 90h
 * 0000000140692AA6: mov     rax, [rbx]
 * 0000000140692AA9: cmp     [rax+8], rbx
 * 0000000140692AAD: jnz     short loc_140692AD4
 * 0000000140692AAF: mov     rcx, [rax]
 * 0000000140692AB2: cmp     [rcx+8], rax
 * 0000000140692AB6: jnz     short loc_140692AD4
 * 0000000140692AB8: mov     [rbx], rcx
 * 0000000140692ABB: mov     [rcx+8], rbx
 * 0000000140692ABF: cmp     rax, rbx
 * 0000000140692AC2: jnz     loc_1408B445B
 * 0000000140692AC8: mov     rbx, [rsp+28h+arg_0]
 * 0000000140692ACD: add     rsp, 20h
 * 0000000140692AD1: pop     rdi
 * 0000000140692AD2: retn
 * 0000000140692AD4: mov     ecx, 3
 * 0000000140692AD9: int     29h; Win8: RtlFailFast(ecx)
 * 00000001408B4434: test    dil, dil
 * 00000001408B4437: jnz     short loc_1408B443E
 * 00000001408B4439: call    CmpLockRegistry
 * 00000001408B443E: mov     rcx, [rbx+58h]; BugCheckParameter4
 * 00000001408B4442: call    CmpDereferenceKeyControlBlock
 * 00000001408B4447: test    dil, dil
 * 00000001408B444A: jnz     loc_140692A9F
 * 00000001408B4450: call    CmpUnlockRegistry
 * 00000001408B4455: nop
 * 00000001408B4456: jmp     loc_140692A9F
 * 00000001408B445B: mov     rcx, rax
 * 00000001408B445E: call    CmpFreeExtraParameter
 * 00000001408B4463: nop
 * 00000001408B4464: jmp     loc_140692AA6
 */
