/*
 * XREFs of NtUserGetMinuserIdForBaseWindow @ 0x1C0144B50
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C004CE30 (UserSessionSwitchLeaveCrit.c)
 *     EtwTraceAcquiredSharedUserCrit @ 0x1C0053C40 (EtwTraceAcquiredSharedUserCrit.c)
 *     IsEtwUserCritEnabled @ 0x1C0053DF0 (IsEtwUserCritEnabled.c)
 *     HMValidateHandleNoSecure @ 0x1C00590FC (HMValidateHandleNoSecure.c)
 */

/*
 * Hex-Rays decompilation failed for NtUserGetMinuserIdForBaseWindow @ 0x1C0144B50
 * Reason: Hex-Rays returned no pseudocode for 0x1C0144B50
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0144B50: mov     [rsp+arg_0], rbx
 * 00000001C0144B55: mov     [rsp+arg_8], rsi
 * 00000001C0144B5A: push    rdi
 * 00000001C0144B5B: sub     rsp, 20h
 * 00000001C0144B5F: mov     rsi, rcx
 * 00000001C0144B62: call    IsEtwUserCritEnabled
 * 00000001C0144B67: xor     ebx, ebx
 * 00000001C0144B69: test    eax, eax
 * 00000001C0144B6B: jz      short loc_1C0144B93
 * 00000001C0144B6D: call    cs:__imp_PsGetCurrentThreadWin32Thread
 * 00000001C0144B74: nop     dword ptr [rax+rax+00h]
 * 00000001C0144B79: mov     rdi, rax
 * 00000001C0144B7C: test    rax, rax
 * 00000001C0144B7F: jz      short loc_1C0144B93
 * 00000001C0144B81: xor     ecx, ecx; PerformanceFrequency
 * 00000001C0144B83: call    cs:__imp_KeQueryPerformanceCounter
 * 00000001C0144B8A: nop     dword ptr [rax+rax+00h]
 * 00000001C0144B8F: mov     [rdi+8], rax
 * 00000001C0144B93: call    cs:__imp_SGDGetUserSessionState
 * 00000001C0144B9A: nop     dword ptr [rax+rax+00h]
 * 00000001C0144B9F: mov     rcx, [rax+8]; Resource
 * 00000001C0144BA3: call    cs:__imp_ExEnterCriticalRegionAndAcquireResourceShared
 * 00000001C0144BAA: nop     dword ptr [rax+rax+00h]
 * 00000001C0144BAF: call    EtwTraceAcquiredSharedUserCrit
 * 00000001C0144BB4: mov     dl, 17h
 * 00000001C0144BB6: mov     rcx, rsi
 * 00000001C0144BB9: call    HMValidateHandleNoSecure
 * 00000001C0144BBE: mov     rdi, rax
 * 00000001C0144BC1: test    rax, rax
 * 00000001C0144BC4: jz      short loc_1C0144BF7
 * 00000001C0144BC6: mov     rcx, [rax+10h]
 * 00000001C0144BCA: mov     rsi, [rcx+1A8h]
 * 00000001C0144BD1: call    cs:__imp_PsGetCurrentProcessWin32Process
 * 00000001C0144BD8: nop     dword ptr [rax+rax+00h]
 * 00000001C0144BDD: test    rax, rax
 * 00000001C0144BE0: jz      short loc_1C0144BEE
 * 00000001C0144BE2: mov     rcx, [rax]
 * 00000001C0144BE5: neg     rcx
 * 00000001C0144BE8: sbb     rdx, rdx
 * 00000001C0144BEB: and     rax, rdx
 * 00000001C0144BEE: cmp     rsi, rax
 * 00000001C0144BF1: jnz     short loc_1C0144BF7
 * 00000001C0144BF3: mov     rbx, [rdi+38h]
 * 00000001C0144BF7: call    UserSessionSwitchLeaveCrit
 * 00000001C0144BFC: mov     rsi, [rsp+28h+arg_8]
 * 00000001C0144C01: mov     rax, rbx
 * 00000001C0144C04: mov     rbx, [rsp+28h+arg_0]
 * 00000001C0144C09: add     rsp, 20h
 * 00000001C0144C0D: pop     rdi
 * 00000001C0144C0E: retn
 */
