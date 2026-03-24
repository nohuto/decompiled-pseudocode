/*
 * XREFs of CmpStopRMLog @ 0x140697CEC
 * Callers:
 *     CmShutdownCmRM @ 0x140697CA4 (CmShutdownCmRM.c)
 *     CmpPerformUnloadKey @ 0x140699394 (CmpPerformUnloadKey.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140231460 (KeLeaveCriticalRegion.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402390C0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14023D3F0 (ExReleaseResourceLite.c)
 *     CmpLogCheckpoint @ 0x1406989A4 (CmpLogCheckpoint.c)
 *     CmpLockRegistry @ 0x140AF64A0 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140AF64F0 (CmpUnlockRegistry.c)
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
 * 0000000140697D1E: jnz     loc_1408B767E
 * 0000000140697D24: mov     rcx, [rbx+80h]; Resource
 * 0000000140697D2B: call    ExReleaseResourceLite
 * 0000000140697D30: call    KeLeaveCriticalRegion
 * 0000000140697D35: call    CmpUnlockRegistry
 * 0000000140697D3A: add     rsp, 20h
 * 0000000140697D3E: pop     rbx
 * 0000000140697D3F: retn
 * 00000001408B767E: cmp     qword ptr [rbx+60h], 0
 * 00000001408B7683: jz      short loc_1408B76A5
 * 00000001408B7685: xor     r8d, r8d
 * 00000001408B7688: mov     rcx, rbx
 * 00000001408B768B: call    CmpLogCheckpoint
 * 00000001408B7690: mov     rcx, [rbx+60h]; pvMarshalContext
 * 00000001408B7694: call    cs:__imp_ClfsDeleteMarshallingArea
 * 00000001408B769B: nop     dword ptr [rax+rax+00h]
 * 00000001408B76A0: and     qword ptr [rbx+60h], 0
 * 00000001408B76A5: cmp     rbx, cs:CmRmSystem
 * 00000001408B76AC: jz      short loc_1408B76C7
 * 00000001408B76AE: lea     rax, [rbx+10h]
 * 00000001408B76B2: cmp     [rax], rax
 * 00000001408B76B5: jnz     short loc_1408B76C7
 * 00000001408B76B7: mov     rcx, [rbx+58h]; plfoLog
 * 00000001408B76BB: call    cs:__imp_ClfsDeleteLogByPointer
 * 00000001408B76C2: nop     dword ptr [rax+rax+00h]
 * 00000001408B76C7: mov     rcx, [rbx+58h]; plfoLog
 * 00000001408B76CB: call    cs:__imp_ClfsCloseLogFileObject
 * 00000001408B76D2: nop     dword ptr [rax+rax+00h]
 * 00000001408B76D7: and     qword ptr [rbx+58h], 0
 * 00000001408B76DC: jmp     loc_140697D24
 */
