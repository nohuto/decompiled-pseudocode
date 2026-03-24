/*
 * XREFs of NtUserCheckProcessSession @ 0x1C00AB380
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C004CE30 (UserSessionSwitchLeaveCrit.c)
 *     EtwTraceAcquiredSharedUserCrit @ 0x1C0053C40 (EtwTraceAcquiredSharedUserCrit.c)
 *     IsEtwUserCritEnabled @ 0x1C0053DF0 (IsEtwUserCritEnabled.c)
 *     UserSetLastError @ 0x1C005E3B4 (UserSetLastError.c)
 *     ?IsCurrentProcessDwm@@YAHXZ @ 0x1C009B7B4 (-IsCurrentProcessDwm@@YAHXZ.c)
 *     _DwmCheckProcessSession @ 0x1C00AB440 (_DwmCheckProcessSession.c)
 */

/*
 * Hex-Rays decompilation failed for NtUserCheckProcessSession @ 0x1C00AB380
 * Reason: Hex-Rays returned no pseudocode for 0x1C00AB380
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00AB380: mov     [rsp+arg_0], rbx
 * 00000001C00AB385: mov     [rsp+arg_8], rsi
 * 00000001C00AB38A: push    rdi
 * 00000001C00AB38B: sub     rsp, 20h
 * 00000001C00AB38F: mov     esi, ecx
 * 00000001C00AB391: call    IsEtwUserCritEnabled
 * 00000001C00AB396: xor     ebx, ebx
 * 00000001C00AB398: test    eax, eax
 * 00000001C00AB39A: jz      short loc_1C00AB3C2
 * 00000001C00AB39C: call    cs:__imp_PsGetCurrentThreadWin32Thread
 * 00000001C00AB3A3: nop     dword ptr [rax+rax+00h]
 * 00000001C00AB3A8: mov     rdi, rax
 * 00000001C00AB3AB: test    rax, rax
 * 00000001C00AB3AE: jz      short loc_1C00AB3C2
 * 00000001C00AB3B0: xor     ecx, ecx; PerformanceFrequency
 * 00000001C00AB3B2: call    cs:__imp_KeQueryPerformanceCounter
 * 00000001C00AB3B9: nop     dword ptr [rax+rax+00h]
 * 00000001C00AB3BE: mov     [rdi+8], rax
 * 00000001C00AB3C2: call    cs:__imp_SGDGetUserSessionState
 * 00000001C00AB3C9: nop     dword ptr [rax+rax+00h]
 * 00000001C00AB3CE: mov     rcx, [rax+8]; Resource
 * 00000001C00AB3D2: call    cs:__imp_ExEnterCriticalRegionAndAcquireResourceShared
 * 00000001C00AB3D9: nop     dword ptr [rax+rax+00h]
 * 00000001C00AB3DE: call    EtwTraceAcquiredSharedUserCrit
 * 00000001C00AB3E3: call    ?IsCurrentProcessDwm@@YAHXZ; IsCurrentProcessDwm(void)
 * 00000001C00AB3E8: test    eax, eax
 * 00000001C00AB3EA: jnz     short loc_1C00AB3F6
 * 00000001C00AB3EC: lea     ecx, [rax+5]
 * 00000001C00AB3EF: call    UserSetLastError
 * 00000001C00AB3F4: jmp     short loc_1C00AB418
 * 00000001C00AB3F6: mov     ecx, esi
 * 00000001C00AB3F8: call    _DwmCheckProcessSession
 * 00000001C00AB3FD: test    eax, eax
 * 00000001C00AB3FF: jns     short loc_1C00AB413
 * 00000001C00AB401: mov     ecx, eax; Status
 * 00000001C00AB403: call    cs:__imp_RtlNtStatusToDosError
 * 00000001C00AB40A: nop     dword ptr [rax+rax+00h]
 * 00000001C00AB40F: mov     ecx, eax
 * 00000001C00AB411: jmp     short loc_1C00AB3EF
 * 00000001C00AB413: mov     ebx, 1
 * 00000001C00AB418: call    UserSessionSwitchLeaveCrit
 * 00000001C00AB41D: mov     rsi, [rsp+28h+arg_8]
 * 00000001C00AB422: mov     rax, rbx
 * 00000001C00AB425: mov     rbx, [rsp+28h+arg_0]
 * 00000001C00AB42A: add     rsp, 20h
 * 00000001C00AB42E: pop     rdi
 * 00000001C00AB42F: retn
 */
