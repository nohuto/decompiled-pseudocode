/*
 * XREFs of NtUserIsMouseInPointerEnabled @ 0x1C0149820
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00462A0 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004CE30 (UserSessionSwitchLeaveCrit.c)
 *     EtwTraceAcquiredSharedUserCrit @ 0x1C0053C40 (EtwTraceAcquiredSharedUserCrit.c)
 *     IsEtwUserCritEnabled @ 0x1C0053DF0 (IsEtwUserCritEnabled.c)
 */

/*
 * Hex-Rays decompilation failed for NtUserIsMouseInPointerEnabled @ 0x1C0149820
 * Reason: Hex-Rays returned no pseudocode for 0x1C0149820
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0149820: push    rbx
 * 00000001C0149822: sub     rsp, 20h
 * 00000001C0149826: call    IsEtwUserCritEnabled
 * 00000001C014982B: test    eax, eax
 * 00000001C014982D: jz      short loc_1C0149855
 * 00000001C014982F: call    cs:__imp_PsGetCurrentThreadWin32Thread
 * 00000001C0149836: nop     dword ptr [rax+rax+00h]
 * 00000001C014983B: mov     rbx, rax
 * 00000001C014983E: test    rax, rax
 * 00000001C0149841: jz      short loc_1C0149855
 * 00000001C0149843: xor     ecx, ecx; PerformanceFrequency
 * 00000001C0149845: call    cs:__imp_KeQueryPerformanceCounter
 * 00000001C014984C: nop     dword ptr [rax+rax+00h]
 * 00000001C0149851: mov     [rbx+8], rax
 * 00000001C0149855: call    cs:__imp_SGDGetUserSessionState
 * 00000001C014985C: nop     dword ptr [rax+rax+00h]
 * 00000001C0149861: mov     rcx, [rax+8]; Resource
 * 00000001C0149865: call    cs:__imp_ExEnterCriticalRegionAndAcquireResourceShared
 * 00000001C014986C: nop     dword ptr [rax+rax+00h]
 * 00000001C0149871: call    EtwTraceAcquiredSharedUserCrit
 * 00000001C0149876: call    ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ; PtiCurrentShared(void)
 * 00000001C014987B: mov     rcx, [rax+1A8h]
 * 00000001C0149882: mov     ebx, [rcx+330h]
 * 00000001C0149888: shr     rbx, 2
 * 00000001C014988C: and     ebx, 1
 * 00000001C014988F: call    UserSessionSwitchLeaveCrit
 * 00000001C0149894: mov     eax, ebx
 * 00000001C0149896: add     rsp, 20h
 * 00000001C014989A: pop     rbx
 * 00000001C014989B: retn
 */
