/*
 * XREFs of UserGetWindowThreadProcessId @ 0x1C014F3B0
 * Callers:
 *     ?Initialize@CInputQueue@@IEAAJPEAUHWND__@@UtagMsgRoutingInfo@@@Z @ 0x1C009C890 (-Initialize@CInputQueue@@IEAAJPEAUHWND__@@UtagMsgRoutingInfo@@@Z.c)
 *     NtUserGetWindowThreadProcessId @ 0x1C0146090 (NtUserGetWindowThreadProcessId.c)
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C004CE30 (UserSessionSwitchLeaveCrit.c)
 *     EtwTraceAcquiredSharedUserCrit @ 0x1C0053C40 (EtwTraceAcquiredSharedUserCrit.c)
 *     IsEtwUserCritEnabled @ 0x1C0053DF0 (IsEtwUserCritEnabled.c)
 *     HMValidateCatHandleNoRip @ 0x1C02083B4 (HMValidateCatHandleNoRip.c)
 */

/*
 * Hex-Rays decompilation failed for UserGetWindowThreadProcessId @ 0x1C014F3B0
 * Reason: Hex-Rays returned no pseudocode for 0x1C014F3B0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C014F3B0: mov     [rsp+arg_0], rbx
 * 00000001C014F3B5: mov     [rsp+arg_8], rsi
 * 00000001C014F3BA: push    rdi
 * 00000001C014F3BB: sub     rsp, 20h
 * 00000001C014F3BF: mov     rsi, rdx
 * 00000001C014F3C2: mov     rdi, rcx
 * 00000001C014F3C5: call    IsEtwUserCritEnabled
 * 00000001C014F3CA: test    eax, eax
 * 00000001C014F3CC: jz      short loc_1C014F3F4
 * 00000001C014F3CE: call    cs:__imp_PsGetCurrentThreadWin32Thread
 * 00000001C014F3D5: nop     dword ptr [rax+rax+00h]
 * 00000001C014F3DA: mov     rbx, rax
 * 00000001C014F3DD: test    rax, rax
 * 00000001C014F3E0: jz      short loc_1C014F3F4
 * 00000001C014F3E2: xor     ecx, ecx; PerformanceFrequency
 * 00000001C014F3E4: call    cs:__imp_KeQueryPerformanceCounter
 * 00000001C014F3EB: nop     dword ptr [rax+rax+00h]
 * 00000001C014F3F0: mov     [rbx+8], rax
 * 00000001C014F3F4: call    cs:__imp_SGDGetUserSessionState
 * 00000001C014F3FB: nop     dword ptr [rax+rax+00h]
 * 00000001C014F400: mov     rcx, [rax+8]; Resource
 * 00000001C014F404: call    cs:__imp_ExEnterCriticalRegionAndAcquireResourceShared
 * 00000001C014F40B: nop     dword ptr [rax+rax+00h]
 * 00000001C014F410: call    EtwTraceAcquiredSharedUserCrit
 * 00000001C014F415: mov     rcx, rdi
 * 00000001C014F418: xor     ebx, ebx
 * 00000001C014F41A: call    HMValidateCatHandleNoRip
 * 00000001C014F41F: test    rax, rax
 * 00000001C014F422: jz      short loc_1C014F457
 * 00000001C014F424: mov     rdi, [rax+10h]
 * 00000001C014F428: mov     rcx, [rdi]; Thread
 * 00000001C014F42B: call    cs:__imp_PsGetThreadId
 * 00000001C014F432: nop     dword ptr [rax+rax+00h]
 * 00000001C014F437: mov     rbx, rax
 * 00000001C014F43A: test    rsi, rsi
 * 00000001C014F43D: jz      short loc_1C014F457
 * 00000001C014F43F: mov     rcx, [rdi+1A8h]
 * 00000001C014F446: mov     rcx, [rcx]; Process
 * 00000001C014F449: call    cs:__imp_PsGetProcessId
 * 00000001C014F450: nop     dword ptr [rax+rax+00h]
 * 00000001C014F455: mov     [rsi], eax
 * 00000001C014F457: call    UserSessionSwitchLeaveCrit
 * 00000001C014F45C: mov     rsi, [rsp+28h+arg_8]
 * 00000001C014F461: mov     eax, ebx
 * 00000001C014F463: mov     rbx, [rsp+28h+arg_0]
 * 00000001C014F468: add     rsp, 20h
 * 00000001C014F46C: pop     rdi
 * 00000001C014F46D: retn
 */
