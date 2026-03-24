/*
 * XREFs of UserEnterUserCritSecShared @ 0x1C00A7C40
 * Callers:
 *     <none>
 * Callees:
 *     EtwTraceAcquiredSharedUserCrit @ 0x1C0053C40 (EtwTraceAcquiredSharedUserCrit.c)
 *     IsEtwUserCritEnabled @ 0x1C0053DF0 (IsEtwUserCritEnabled.c)
 */

/*
 * Hex-Rays decompilation failed for UserEnterUserCritSecShared @ 0x1C00A7C40
 * Reason: Hex-Rays returned no pseudocode for 0x1C00A7C40
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00A7C40: push    rbx
 * 00000001C00A7C42: sub     rsp, 20h
 * 00000001C00A7C46: call    IsEtwUserCritEnabled
 * 00000001C00A7C4B: test    eax, eax
 * 00000001C00A7C4D: jz      short loc_1C00A7C75
 * 00000001C00A7C4F: call    cs:__imp_PsGetCurrentThreadWin32Thread
 * 00000001C00A7C56: nop     dword ptr [rax+rax+00h]
 * 00000001C00A7C5B: mov     rbx, rax
 * 00000001C00A7C5E: test    rax, rax
 * 00000001C00A7C61: jz      short loc_1C00A7C75
 * 00000001C00A7C63: xor     ecx, ecx; PerformanceFrequency
 * 00000001C00A7C65: call    cs:__imp_KeQueryPerformanceCounter
 * 00000001C00A7C6C: nop     dword ptr [rax+rax+00h]
 * 00000001C00A7C71: mov     [rbx+8], rax
 * 00000001C00A7C75: call    cs:__imp_SGDGetUserSessionState
 * 00000001C00A7C7C: nop     dword ptr [rax+rax+00h]
 * 00000001C00A7C81: mov     rcx, [rax+8]; Resource
 * 00000001C00A7C85: call    cs:__imp_ExEnterCriticalRegionAndAcquireResourceShared
 * 00000001C00A7C8C: nop     dword ptr [rax+rax+00h]
 * 00000001C00A7C91: call    EtwTraceAcquiredSharedUserCrit
 * 00000001C00A7C96: add     rsp, 20h
 * 00000001C00A7C9A: pop     rbx
 * 00000001C00A7C9B: retn
 */
