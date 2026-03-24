/*
 * XREFs of NtUserGetKeyboardType @ 0x1C0144AD0
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C004CE30 (UserSessionSwitchLeaveCrit.c)
 *     EtwTraceAcquiredSharedUserCrit @ 0x1C0053C40 (EtwTraceAcquiredSharedUserCrit.c)
 *     IsEtwUserCritEnabled @ 0x1C0053DF0 (IsEtwUserCritEnabled.c)
 *     _GetKeyboardType @ 0x1C01EAEAC (_GetKeyboardType.c)
 */

/*
 * Hex-Rays decompilation failed for NtUserGetKeyboardType @ 0x1C0144AD0
 * Reason: Hex-Rays returned no pseudocode for 0x1C0144AD0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0144AD0: mov     [rsp+arg_0], rbx
 * 00000001C0144AD5: push    rdi
 * 00000001C0144AD6: sub     rsp, 20h
 * 00000001C0144ADA: mov     edi, ecx
 * 00000001C0144ADC: call    IsEtwUserCritEnabled
 * 00000001C0144AE1: test    eax, eax
 * 00000001C0144AE3: jz      short loc_1C0144B0B
 * 00000001C0144AE5: call    cs:__imp_PsGetCurrentThreadWin32Thread
 * 00000001C0144AEC: nop     dword ptr [rax+rax+00h]
 * 00000001C0144AF1: mov     rbx, rax
 * 00000001C0144AF4: test    rax, rax
 * 00000001C0144AF7: jz      short loc_1C0144B0B
 * 00000001C0144AF9: xor     ecx, ecx; PerformanceFrequency
 * 00000001C0144AFB: call    cs:__imp_KeQueryPerformanceCounter
 * 00000001C0144B02: nop     dword ptr [rax+rax+00h]
 * 00000001C0144B07: mov     [rbx+8], rax
 * 00000001C0144B0B: call    cs:__imp_SGDGetUserSessionState
 * 00000001C0144B12: nop     dword ptr [rax+rax+00h]
 * 00000001C0144B17: mov     rcx, [rax+8]; Resource
 * 00000001C0144B1B: call    cs:__imp_ExEnterCriticalRegionAndAcquireResourceShared
 * 00000001C0144B22: nop     dword ptr [rax+rax+00h]
 * 00000001C0144B27: call    EtwTraceAcquiredSharedUserCrit
 * 00000001C0144B2C: mov     ecx, edi
 * 00000001C0144B2E: call    _GetKeyboardType
 * 00000001C0144B33: movsxd  rbx, eax
 * 00000001C0144B36: call    UserSessionSwitchLeaveCrit
 * 00000001C0144B3B: mov     rax, rbx
 * 00000001C0144B3E: mov     rbx, [rsp+28h+arg_0]
 * 00000001C0144B43: add     rsp, 20h
 * 00000001C0144B47: pop     rdi
 * 00000001C0144B48: retn
 */
