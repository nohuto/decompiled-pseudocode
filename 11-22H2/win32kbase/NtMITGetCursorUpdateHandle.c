/*
 * XREFs of NtMITGetCursorUpdateHandle @ 0x1C00AB130
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C004CE30 (UserSessionSwitchLeaveCrit.c)
 *     EtwTraceAcquiredSharedUserCrit @ 0x1C0053C40 (EtwTraceAcquiredSharedUserCrit.c)
 *     IsEtwUserCritEnabled @ 0x1C0053DF0 (IsEtwUserCritEnabled.c)
 *     IsInputThread @ 0x1C0057E50 (IsInputThread.c)
 *     IsInputProcessingActivated @ 0x1C0058A50 (IsInputProcessingActivated.c)
 *     UserSetLastError @ 0x1C005E3B4 (UserSetLastError.c)
 *     GetCursorUpdateHandle @ 0x1C00AB1C4 (GetCursorUpdateHandle.c)
 */

/*
 * Hex-Rays decompilation failed for NtMITGetCursorUpdateHandle @ 0x1C00AB130
 * Reason: Hex-Rays returned no pseudocode for 0x1C00AB130
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00AB130: push    rbx
 * 00000001C00AB132: sub     rsp, 20h
 * 00000001C00AB136: call    IsEtwUserCritEnabled
 * 00000001C00AB13B: test    eax, eax
 * 00000001C00AB13D: jz      short loc_1C00AB165
 * 00000001C00AB13F: call    cs:__imp_PsGetCurrentThreadWin32Thread
 * 00000001C00AB146: nop     dword ptr [rax+rax+00h]
 * 00000001C00AB14B: mov     rbx, rax
 * 00000001C00AB14E: test    rax, rax
 * 00000001C00AB151: jz      short loc_1C00AB165
 * 00000001C00AB153: xor     ecx, ecx; PerformanceFrequency
 * 00000001C00AB155: call    cs:__imp_KeQueryPerformanceCounter
 * 00000001C00AB15C: nop     dword ptr [rax+rax+00h]
 * 00000001C00AB161: mov     [rbx+8], rax
 * 00000001C00AB165: call    cs:__imp_SGDGetUserSessionState
 * 00000001C00AB16C: nop     dword ptr [rax+rax+00h]
 * 00000001C00AB171: mov     rcx, [rax+8]; Resource
 * 00000001C00AB175: call    cs:__imp_ExEnterCriticalRegionAndAcquireResourceShared
 * 00000001C00AB17C: nop     dword ptr [rax+rax+00h]
 * 00000001C00AB181: call    EtwTraceAcquiredSharedUserCrit
 * 00000001C00AB186: call    IsInputThread
 * 00000001C00AB18B: test    al, al
 * 00000001C00AB18D: jnz     short loc_1C00AB19D
 * 00000001C00AB18F: or      rbx, 0FFFFFFFFFFFFFFFFh
 * 00000001C00AB193: lea     ecx, [rbx+6]
 * 00000001C00AB196: call    UserSetLastError
 * 00000001C00AB19B: jmp     short loc_1C00AB1AE
 * 00000001C00AB19D: call    IsInputProcessingActivated
 * 00000001C00AB1A2: test    al, al
 * 00000001C00AB1A4: jnz     short loc_1C00AB18F
 * 00000001C00AB1A6: call    GetCursorUpdateHandle
 * 00000001C00AB1AB: mov     rbx, rax
 * 00000001C00AB1AE: call    UserSessionSwitchLeaveCrit
 * 00000001C00AB1B3: mov     rax, rbx
 * 00000001C00AB1B6: add     rsp, 20h
 * 00000001C00AB1BA: pop     rbx
 * 00000001C00AB1BB: retn
 */
