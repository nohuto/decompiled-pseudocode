/*
 * XREFs of UserReleaseDC @ 0x1C00AAFB0
 * Callers:
 *     GrepDeleteDC @ 0x1C003B5E0 (GrepDeleteDC.c)
 * Callees:
 *     ReleaseCacheDC @ 0x1C004C160 (ReleaseCacheDC.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004CE30 (UserSessionSwitchLeaveCrit.c)
 *     EtwTraceAcquiredSharedUserCrit @ 0x1C0053C40 (EtwTraceAcquiredSharedUserCrit.c)
 *     IsEtwUserCritEnabled @ 0x1C0053DF0 (IsEtwUserCritEnabled.c)
 */

/*
 * Hex-Rays decompilation failed for UserReleaseDC @ 0x1C00AAFB0
 * Reason: Hex-Rays returned no pseudocode for 0x1C00AAFB0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00AAFB0: mov     [rsp+arg_0], rbx
 * 00000001C00AAFB5: mov     [rsp+arg_8], rsi
 * 00000001C00AAFBA: push    rdi
 * 00000001C00AAFBB: sub     rsp, 20h
 * 00000001C00AAFBF: mov     rsi, rcx
 * 00000001C00AAFC2: call    IsEtwUserCritEnabled
 * 00000001C00AAFC7: xor     ebx, ebx
 * 00000001C00AAFC9: test    eax, eax
 * 00000001C00AAFCB: jz      short loc_1C00AAFF3
 * 00000001C00AAFCD: call    cs:__imp_PsGetCurrentThreadWin32Thread
 * 00000001C00AAFD4: nop     dword ptr [rax+rax+00h]
 * 00000001C00AAFD9: mov     rdi, rax
 * 00000001C00AAFDC: test    rax, rax
 * 00000001C00AAFDF: jz      short loc_1C00AAFF3
 * 00000001C00AAFE1: xor     ecx, ecx; PerformanceFrequency
 * 00000001C00AAFE3: call    cs:__imp_KeQueryPerformanceCounter
 * 00000001C00AAFEA: nop     dword ptr [rax+rax+00h]
 * 00000001C00AAFEF: mov     [rdi+8], rax
 * 00000001C00AAFF3: call    cs:__imp_SGDGetUserSessionState
 * 00000001C00AAFFA: nop     dword ptr [rax+rax+00h]
 * 00000001C00AAFFF: mov     rcx, [rax+8]; Resource
 * 00000001C00AB003: call    cs:__imp_ExEnterCriticalRegionAndAcquireResourceShared
 * 00000001C00AB00A: nop     dword ptr [rax+rax+00h]
 * 00000001C00AB00F: call    EtwTraceAcquiredSharedUserCrit
 * 00000001C00AB014: xor     edx, edx
 * 00000001C00AB016: mov     rcx, rsi
 * 00000001C00AB019: call    ReleaseCacheDC
 * 00000001C00AB01E: cmp     eax, 2
 * 00000001C00AB021: setnz   bl
 * 00000001C00AB024: call    UserSessionSwitchLeaveCrit
 * 00000001C00AB029: mov     rsi, [rsp+28h+arg_8]
 * 00000001C00AB02E: mov     eax, ebx
 * 00000001C00AB030: mov     rbx, [rsp+28h+arg_0]
 * 00000001C00AB035: add     rsp, 20h
 * 00000001C00AB039: pop     rdi
 * 00000001C00AB03A: retn
 */
