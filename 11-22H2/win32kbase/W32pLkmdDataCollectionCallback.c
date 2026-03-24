/*
 * XREFs of W32pLkmdDataCollectionCallback @ 0x1C0150960
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C004CE30 (UserSessionSwitchLeaveCrit.c)
 *     EtwTraceAcquiredSharedUserCrit @ 0x1C0053C40 (EtwTraceAcquiredSharedUserCrit.c)
 *     IsEtwUserCritEnabled @ 0x1C0053DF0 (IsEtwUserCritEnabled.c)
 *     ?_AddWin32TriageDataToDump@@YAJPEAUtagWIN32_TRIAGE_DATA@@@Z @ 0x1C0150644 (-_AddWin32TriageDataToDump@@YAJPEAUtagWIN32_TRIAGE_DATA@@@Z.c)
 */

/*
 * Hex-Rays decompilation failed for W32pLkmdDataCollectionCallback @ 0x1C0150960
 * Reason: Hex-Rays returned no pseudocode for 0x1C0150960
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0150960: mov     rax, rsp
 * 00000001C0150963: mov     [rax+8], rbx
 * 00000001C0150967: mov     [rax+10h], rbp
 * 00000001C015096B: mov     [rax+18h], rsi
 * 00000001C015096F: mov     [rax+20h], rdi
 * 00000001C0150973: push    r14
 * 00000001C0150975: sub     rsp, 50h
 * 00000001C0150979: xorps   xmm0, xmm0
 * 00000001C015097C: mov     rdi, r8
 * 00000001C015097F: movups  xmmword ptr [rax-38h], xmm0
 * 00000001C0150983: mov     rsi, rdx
 * 00000001C0150986: mov     rbp, rcx
 * 00000001C0150989: movups  xmmword ptr [rax-28h], xmm0
 * 00000001C015098D: movups  xmmword ptr [rax-18h], xmm0
 * 00000001C0150991: call    IsEtwUserCritEnabled
 * 00000001C0150996: xor     r14d, r14d
 * 00000001C0150999: test    eax, eax
 * 00000001C015099B: jz      short loc_1C01509C3
 * 00000001C015099D: call    cs:__imp_PsGetCurrentThreadWin32Thread
 * 00000001C01509A4: nop     dword ptr [rax+rax+00h]
 * 00000001C01509A9: mov     rbx, rax
 * 00000001C01509AC: test    rax, rax
 * 00000001C01509AF: jz      short loc_1C01509C3
 * 00000001C01509B1: xor     ecx, ecx; PerformanceFrequency
 * 00000001C01509B3: call    cs:__imp_KeQueryPerformanceCounter
 * 00000001C01509BA: nop     dword ptr [rax+rax+00h]
 * 00000001C01509BF: mov     [rbx+8], rax
 * 00000001C01509C3: call    cs:__imp_SGDGetUserSessionState
 * 00000001C01509CA: nop     dword ptr [rax+rax+00h]
 * 00000001C01509CF: mov     rcx, [rax+8]; Resource
 * 00000001C01509D3: call    cs:__imp_ExEnterCriticalRegionAndAcquireResourceShared
 * 00000001C01509DA: nop     dword ptr [rax+rax+00h]
 * 00000001C01509DF: call    EtwTraceAcquiredSharedUserCrit
 * 00000001C01509E4: mov     rcx, [rsp+58h+arg_20]
 * 00000001C01509EC: call    cs:__imp_PsGetProcessWin32Process
 * 00000001C01509F3: nop     dword ptr [rax+rax+00h]
 * 00000001C01509F8: test    rax, rax
 * 00000001C01509FB: jz      short loc_1C0150A02
 * 00000001C01509FD: cmp     [rax], r14
 * 00000001C0150A00: jz      short loc_1C0150A0C
 * 00000001C0150A02: mov     [rsp+58h+var_38], rax
 * 00000001C0150A07: test    rax, rax
 * 00000001C0150A0A: jnz     short loc_1C0150A13
 * 00000001C0150A0C: mov     ebx, 0C000000Dh
 * 00000001C0150A11: jmp     short loc_1C0150A38
 * 00000001C0150A13: lea     rcx, [rsp+58h+var_38]; struct tagWIN32_TRIAGE_DATA *
 * 00000001C0150A18: mov     [rsp+58h+var_30], r14
 * 00000001C0150A1D: mov     [rsp+58h+var_28], r14d
 * 00000001C0150A22: mov     [rsp+58h+var_20], rbp
 * 00000001C0150A27: mov     [rsp+58h+var_18], rsi
 * 00000001C0150A2C: mov     [rsp+58h+var_10], rdi
 * 00000001C0150A31: call    ?_AddWin32TriageDataToDump@@YAJPEAUtagWIN32_TRIAGE_DATA@@@Z; _AddWin32TriageDataToDump(tagWIN32_TRIAGE_DATA *)
 * 00000001C0150A36: mov     ebx, eax
 * 00000001C0150A38: test    ebx, ebx
 * 00000001C0150A3A: cmovns  ebx, r14d
 * 00000001C0150A3E: call    UserSessionSwitchLeaveCrit
 * 00000001C0150A43: mov     rbp, [rsp+58h+arg_8]
 * 00000001C0150A48: mov     eax, ebx
 * 00000001C0150A4A: mov     rbx, [rsp+58h+arg_0]
 * 00000001C0150A4F: mov     rsi, [rsp+58h+arg_10]
 * 00000001C0150A54: mov     rdi, [rsp+58h+arg_18]
 * 00000001C0150A59: add     rsp, 50h
 * 00000001C0150A5D: pop     r14
 * 00000001C0150A5F: retn
 */
