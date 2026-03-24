/*
 * XREFs of NtMITSetLastInputRecipient @ 0x1C0142180
 * Callers:
 *     <none>
 * Callees:
 *     ?SetPtiLastWoken@CInputGlobals@@QEAAXPEAUtagTHREADINFO@@_N@Z @ 0x1C000B5F0 (-SetPtiLastWoken@CInputGlobals@@QEAAXPEAUtagTHREADINFO@@_N@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004CE30 (UserSessionSwitchLeaveCrit.c)
 *     EtwTraceAcquiredSharedUserCrit @ 0x1C0053C40 (EtwTraceAcquiredSharedUserCrit.c)
 *     IsEtwUserCritEnabled @ 0x1C0053DF0 (IsEtwUserCritEnabled.c)
 *     IsInputThread @ 0x1C0057E50 (IsInputThread.c)
 *     UserSetLastError @ 0x1C005E3B4 (UserSetLastError.c)
 *     PtiFromThreadId @ 0x1C0098730 (PtiFromThreadId.c)
 */

/*
 * Hex-Rays decompilation failed for NtMITSetLastInputRecipient @ 0x1C0142180
 * Reason: Hex-Rays returned no pseudocode for 0x1C0142180
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0142180: mov     [rsp+arg_0], rbx
 * 00000001C0142185: mov     [rsp+arg_8], rsi
 * 00000001C014218A: push    rdi
 * 00000001C014218B: sub     rsp, 20h
 * 00000001C014218F: mov     esi, ecx
 * 00000001C0142191: call    IsEtwUserCritEnabled
 * 00000001C0142196: xor     ebx, ebx
 * 00000001C0142198: test    eax, eax
 * 00000001C014219A: jz      short loc_1C01421C2
 * 00000001C014219C: call    cs:__imp_PsGetCurrentThreadWin32Thread
 * 00000001C01421A3: nop     dword ptr [rax+rax+00h]
 * 00000001C01421A8: mov     rdi, rax
 * 00000001C01421AB: test    rax, rax
 * 00000001C01421AE: jz      short loc_1C01421C2
 * 00000001C01421B0: xor     ecx, ecx; PerformanceFrequency
 * 00000001C01421B2: call    cs:__imp_KeQueryPerformanceCounter
 * 00000001C01421B9: nop     dword ptr [rax+rax+00h]
 * 00000001C01421BE: mov     [rdi+8], rax
 * 00000001C01421C2: call    cs:__imp_SGDGetUserSessionState
 * 00000001C01421C9: nop     dword ptr [rax+rax+00h]
 * 00000001C01421CE: mov     rcx, [rax+8]; Resource
 * 00000001C01421D2: call    cs:__imp_ExEnterCriticalRegionAndAcquireResourceShared
 * 00000001C01421D9: nop     dword ptr [rax+rax+00h]
 * 00000001C01421DE: call    EtwTraceAcquiredSharedUserCrit
 * 00000001C01421E3: call    IsInputThread
 * 00000001C01421E8: test    al, al
 * 00000001C01421EA: jnz     short loc_1C01421F8
 * 00000001C01421EC: mov     ecx, 5
 * 00000001C01421F1: call    UserSetLastError
 * 00000001C01421F6: jmp     short loc_1C0142220
 * 00000001C01421F8: mov     ecx, esi
 * 00000001C01421FA: call    PtiFromThreadId
 * 00000001C01421FF: test    rax, rax
 * 00000001C0142202: jnz     short loc_1C0142209
 * 00000001C0142204: lea     ecx, [rax+57h]
 * 00000001C0142207: jmp     short loc_1C01421F1
 * 00000001C0142209: mov     rcx, qword ptr cs:WPP_MAIN_CB+148h; this
 * 00000001C0142210: xor     r8d, r8d; bool
 * 00000001C0142213: mov     rdx, rax; struct tagTHREADINFO *
 * 00000001C0142216: call    ?SetPtiLastWoken@CInputGlobals@@QEAAXPEAUtagTHREADINFO@@_N@Z; CInputGlobals::SetPtiLastWoken(tagTHREADINFO *,bool)
 * 00000001C014221B: mov     ebx, 1
 * 00000001C0142220: call    UserSessionSwitchLeaveCrit
 * 00000001C0142225: mov     rsi, [rsp+28h+arg_8]
 * 00000001C014222A: mov     rax, rbx
 * 00000001C014222D: mov     rbx, [rsp+28h+arg_0]
 * 00000001C0142232: add     rsp, 20h
 * 00000001C0142236: pop     rdi
 * 00000001C0142237: retn
 */
