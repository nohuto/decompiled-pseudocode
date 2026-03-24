/*
 * XREFs of NtUserGetDoubleClickTime @ 0x1C00AFC30
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C004CE30 (UserSessionSwitchLeaveCrit.c)
 *     EtwTraceAcquiredSharedUserCrit @ 0x1C0053C40 (EtwTraceAcquiredSharedUserCrit.c)
 *     IsEtwUserCritEnabled @ 0x1C0053DF0 (IsEtwUserCritEnabled.c)
 *     ApiSetEditionAreAllAccessGranted @ 0x1C00AFD10 (ApiSetEditionAreAllAccessGranted.c)
 */

/*
 * Hex-Rays decompilation failed for NtUserGetDoubleClickTime @ 0x1C00AFC30
 * Reason: Hex-Rays returned no pseudocode for 0x1C00AFC30
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00AFC30: mov     [rsp+arg_0], rbx
 * 00000001C00AFC35: push    rdi
 * 00000001C00AFC36: sub     rsp, 20h
 * 00000001C00AFC3A: call    IsEtwUserCritEnabled
 * 00000001C00AFC3F: xor     ebx, ebx
 * 00000001C00AFC41: test    eax, eax
 * 00000001C00AFC43: jz      short loc_1C00AFC6B
 * 00000001C00AFC45: call    cs:__imp_PsGetCurrentThreadWin32Thread
 * 00000001C00AFC4C: nop     dword ptr [rax+rax+00h]
 * 00000001C00AFC51: mov     rdi, rax
 * 00000001C00AFC54: test    rax, rax
 * 00000001C00AFC57: jz      short loc_1C00AFC6B
 * 00000001C00AFC59: xor     ecx, ecx; PerformanceFrequency
 * 00000001C00AFC5B: call    cs:__imp_KeQueryPerformanceCounter
 * 00000001C00AFC62: nop     dword ptr [rax+rax+00h]
 * 00000001C00AFC67: mov     [rdi+8], rax
 * 00000001C00AFC6B: call    cs:__imp_SGDGetUserSessionState
 * 00000001C00AFC72: nop     dword ptr [rax+rax+00h]
 * 00000001C00AFC77: mov     rcx, [rax+8]; Resource
 * 00000001C00AFC7B: call    cs:__imp_ExEnterCriticalRegionAndAcquireResourceShared
 * 00000001C00AFC82: nop     dword ptr [rax+rax+00h]
 * 00000001C00AFC87: call    EtwTraceAcquiredSharedUserCrit
 * 00000001C00AFC8C: call    cs:__imp_PsGetCurrentProcessWin32Process
 * 00000001C00AFC93: nop     dword ptr [rax+rax+00h]
 * 00000001C00AFC98: mov     r8, rax
 * 00000001C00AFC9B: test    rax, rax
 * 00000001C00AFC9E: jz      short loc_1C00AFCAC
 * 00000001C00AFCA0: mov     rcx, [rax]
 * 00000001C00AFCA3: neg     rcx
 * 00000001C00AFCA6: sbb     rdx, rdx
 * 00000001C00AFCA9: and     r8, rdx
 * 00000001C00AFCAC: mov     rax, cs:gpepCSRSS
 * 00000001C00AFCB3: cmp     [r8], rax
 * 00000001C00AFCB6: jz      short loc_1C00AFCE4
 * 00000001C00AFCB8: call    cs:__imp_PsGetCurrentProcessWin32Process
 * 00000001C00AFCBF: nop     dword ptr [rax+rax+00h]
 * 00000001C00AFCC4: test    rax, rax
 * 00000001C00AFCC7: jz      short loc_1C00AFCD5
 * 00000001C00AFCC9: mov     rcx, [rax]
 * 00000001C00AFCCC: neg     rcx
 * 00000001C00AFCCF: sbb     rdx, rdx
 * 00000001C00AFCD2: and     rax, rdx
 * 00000001C00AFCD5: mov     ecx, [rax+2A0h]
 * 00000001C00AFCDB: call    ApiSetEditionAreAllAccessGranted
 * 00000001C00AFCE0: test    eax, eax
 * 00000001C00AFCE2: jz      short loc_1C00AFCF6
 * 00000001C00AFCE4: call    cs:__imp_SGDGetUserSessionState
 * 00000001C00AFCEB: nop     dword ptr [rax+rax+00h]
 * 00000001C00AFCF0: mov     ebx, [rax+3818h]
 * 00000001C00AFCF6: call    UserSessionSwitchLeaveCrit
 * 00000001C00AFCFB: mov     eax, ebx
 * 00000001C00AFCFD: mov     rbx, [rsp+28h+arg_0]
 * 00000001C00AFD02: add     rsp, 20h
 * 00000001C00AFD06: pop     rdi
 * 00000001C00AFD07: retn
 */
