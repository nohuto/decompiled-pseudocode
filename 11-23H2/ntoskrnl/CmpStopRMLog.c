/*
 * XREFs of CmpStopRMLog @ 0x140697CEC
 * Callers:
 *     CmShutdownCmRM @ 0x140697CA4 (CmShutdownCmRM.c)
 *     CmpPerformUnloadKey @ 0x140699394 (CmpPerformUnloadKey.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140231460 (KeLeaveCriticalRegion.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402390E0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14023D410 (ExReleaseResourceLite.c)
 *     CmpLogCheckpoint @ 0x1406989A4 (CmpLogCheckpoint.c)
 *     CmpLockRegistry @ 0x140AF54A0 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140AF54F0 (CmpUnlockRegistry.c)
 */

/*
 * Hex-Rays decompilation failed for CmpStopRMLog @ 0x140697CEC
 * Reason: Hex-Rays returned no pseudocode for 0x140697CEC
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140697CEC: push    rbx
 * 0000000140697CEE: sub     rsp, 20h
 * 0000000140697CF2: mov     rbx, rcx
 * 0000000140697CF5: call    CmpLockRegistry
 * 0000000140697CFA: mov     rax, gs:188h
 * 0000000140697D03: mov     dl, 1; Wait
 * 0000000140697D05: dec     word ptr [rax+1E4h]
 * 0000000140697D0C: nop
 * 0000000140697D0D: mov     rcx, [rbx+80h]; Resource
 * 0000000140697D14: call    ExAcquireResourceExclusiveLite
 * 0000000140697D19: cmp     qword ptr [rbx+58h], 0
 * 0000000140697D1E: jnz     loc_1408B5E62
 * 0000000140697D24: mov     rcx, [rbx+80h]; Resource
 * 0000000140697D2B: call    ExReleaseResourceLite
 * 0000000140697D30: call    KeLeaveCriticalRegion
 * 0000000140697D35: call    CmpUnlockRegistry
 * 0000000140697D3A: add     rsp, 20h
 * 0000000140697D3E: pop     rbx
 * 0000000140697D3F: retn
 * 00000001408B5E62: cmp     qword ptr [rbx+60h], 0
 * 00000001408B5E67: jz      short loc_1408B5E89
 * 00000001408B5E69: xor     r8d, r8d
 * 00000001408B5E6C: mov     rcx, rbx
 * 00000001408B5E6F: call    CmpLogCheckpoint
 * 00000001408B5E74: mov     rcx, [rbx+60h]; pvMarshalContext
 * 00000001408B5E78: call    cs:__imp_ClfsDeleteMarshallingArea
 * 00000001408B5E7F: nop     dword ptr [rax+rax+00h]
 * 00000001408B5E84: and     qword ptr [rbx+60h], 0
 * 00000001408B5E89: cmp     rbx, cs:CmRmSystem
 * 00000001408B5E90: jz      short loc_1408B5EAB
 * 00000001408B5E92: lea     rax, [rbx+10h]
 * 00000001408B5E96: cmp     [rax], rax
 * 00000001408B5E99: jnz     short loc_1408B5EAB
 * 00000001408B5E9B: mov     rcx, [rbx+58h]; plfoLog
 * 00000001408B5E9F: call    cs:__imp_ClfsDeleteLogByPointer
 * 00000001408B5EA6: nop     dword ptr [rax+rax+00h]
 * 00000001408B5EAB: mov     rcx, [rbx+58h]; plfoLog
 * 00000001408B5EAF: call    cs:__imp_ClfsCloseLogFileObject
 * 00000001408B5EB6: nop     dword ptr [rax+rax+00h]
 * 00000001408B5EBB: and     qword ptr [rbx+58h], 0
 * 00000001408B5EC0: jmp     loc_140697D24
 */
