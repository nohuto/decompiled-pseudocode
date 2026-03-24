/*
 * XREFs of NtUserGetProcessDpiAwarenessContext @ 0x1C00B04C0
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C004CE30 (UserSessionSwitchLeaveCrit.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C004D320 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     EtwTraceAcquiredSharedUserCrit @ 0x1C0053C40 (EtwTraceAcquiredSharedUserCrit.c)
 *     IsEtwUserCritEnabled @ 0x1C0053DF0 (IsEtwUserCritEnabled.c)
 *     UserSetLastError @ 0x1C005E3B4 (UserSetLastError.c)
 */

/*
 * Hex-Rays decompilation failed for NtUserGetProcessDpiAwarenessContext @ 0x1C00B04C0
 * Reason: Hex-Rays returned no pseudocode for 0x1C00B04C0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00B04C0: mov     [rsp+arg_8], rbx
 * 00000001C00B04C5: mov     [rsp+arg_10], rbp
 * 00000001C00B04CA: mov     [rsp+arg_18], rsi
 * 00000001C00B04CF: push    rdi
 * 00000001C00B04D0: sub     rsp, 30h
 * 00000001C00B04D4: mov     rbp, rcx
 * 00000001C00B04D7: xor     edi, edi
 * 00000001C00B04D9: call    IsEtwUserCritEnabled
 * 00000001C00B04DE: test    eax, eax
 * 00000001C00B04E0: jz      short loc_1C00B0508
 * 00000001C00B04E2: call    cs:__imp_PsGetCurrentThreadWin32Thread
 * 00000001C00B04E9: nop     dword ptr [rax+rax+00h]
 * 00000001C00B04EE: mov     rbx, rax
 * 00000001C00B04F1: test    rax, rax
 * 00000001C00B04F4: jz      short loc_1C00B0508
 * 00000001C00B04F6: xor     ecx, ecx; PerformanceFrequency
 * 00000001C00B04F8: call    cs:__imp_KeQueryPerformanceCounter
 * 00000001C00B04FF: nop     dword ptr [rax+rax+00h]
 * 00000001C00B0504: mov     [rbx+8], rax
 * 00000001C00B0508: call    cs:__imp_SGDGetUserSessionState
 * 00000001C00B050F: nop     dword ptr [rax+rax+00h]
 * 00000001C00B0514: mov     rcx, [rax+8]; Resource
 * 00000001C00B0518: call    cs:__imp_ExEnterCriticalRegionAndAcquireResourceShared
 * 00000001C00B051F: nop     dword ptr [rax+rax+00h]
 * 00000001C00B0524: call    EtwTraceAcquiredSharedUserCrit
 * 00000001C00B0529: lea     rax, [rbp-1]
 * 00000001C00B052D: xor     esi, esi
 * 00000001C00B052F: cmp     rax, 0FFFFFFFFFFFFFFFDh
 * 00000001C00B0533: ja      loc_1C00B05DB
 * 00000001C00B0539: mov     rax, cs:__imp_PsProcessType
 * 00000001C00B0540: mov     r9b, 1; AccessMode
 * 00000001C00B0543: and     [rsp+38h+var_10], rsi
 * 00000001C00B0548: mov     edx, 1000h; DesiredAccess
 * 00000001C00B054D: and     [rsp+38h+arg_0], rsi
 * 00000001C00B0552: mov     rcx, rbp; Handle
 * 00000001C00B0555: mov     r8, [rax]; ObjectType
 * 00000001C00B0558: lea     rax, [rsp+38h+arg_0]
 * 00000001C00B055D: mov     [rsp+38h+Object], rax; Object
 * 00000001C00B0562: call    cs:__imp_ObReferenceObjectByHandle
 * 00000001C00B0569: nop     dword ptr [rax+rax+00h]
 * 00000001C00B056E: mov     rsi, [rsp+38h+arg_0]
 * 00000001C00B0573: test    eax, eax
 * 00000001C00B0575: jns     short loc_1C00B0586
 * 00000001C00B0577: mov     ecx, 57h ; 'W'
 * 00000001C00B057C: call    UserSetLastError
 * 00000001C00B0581: jmp     loc_1C00B064F
 * 00000001C00B0586: call    cs:__imp_SGDGetUserSessionState
 * 00000001C00B058D: nop     dword ptr [rax+rax+00h]
 * 00000001C00B0592: mov     rcx, rsi
 * 00000001C00B0595: mov     ebx, [rax]
 * 00000001C00B0597: call    cs:__imp_PsGetProcessSessionId
 * 00000001C00B059E: nop     dword ptr [rax+rax+00h]
 * 00000001C00B05A3: cmp     eax, ebx
 * 00000001C00B05A5: jz      short loc_1C00B05B6
 * 00000001C00B05A7: mov     ecx, 57h ; 'W'
 * 00000001C00B05AC: call    UserSetLastError
 * 00000001C00B05B1: jmp     loc_1C00B063B
 * 00000001C00B05B6: mov     rcx, rsi
 * 00000001C00B05B9: call    cs:__imp_PsGetProcessWin32Process
 * 00000001C00B05C0: nop     dword ptr [rax+rax+00h]
 * 00000001C00B05C5: mov     rbx, rax
 * 00000001C00B05C8: test    rax, rax
 * 00000001C00B05CB: jz      short loc_1C00B05FB
 * 00000001C00B05CD: mov     rcx, [rax]
 * 00000001C00B05D0: neg     rcx
 * 00000001C00B05D3: sbb     rdx, rdx
 * 00000001C00B05D6: and     rbx, rdx
 * 00000001C00B05D9: jmp     short loc_1C00B05FB
 * 00000001C00B05DB: call    cs:__imp_PsGetCurrentProcessWin32Process
 * 00000001C00B05E2: nop     dword ptr [rax+rax+00h]
 * 00000001C00B05E7: mov     rbx, rax
 * 00000001C00B05EA: test    rax, rax
 * 00000001C00B05ED: jz      short loc_1C00B05FB
 * 00000001C00B05EF: mov     rax, [rax]
 * 00000001C00B05F2: neg     rax
 * 00000001C00B05F5: sbb     rcx, rcx
 * 00000001C00B05F8: and     rbx, rcx
 * 00000001C00B05FB: call    cs:__imp_PsGetCurrentProcessWin32Process
 * 00000001C00B0602: nop     dword ptr [rax+rax+00h]
 * 00000001C00B0607: test    rax, rax
 * 00000001C00B060A: jz      short loc_1C00B0618
 * 00000001C00B060C: mov     rcx, [rax]
 * 00000001C00B060F: neg     rcx
 * 00000001C00B0612: sbb     rdx, rdx
 * 00000001C00B0615: and     rax, rdx
 * 00000001C00B0618: cmp     rbx, rax
 * 00000001C00B061B: jnz     short loc_1C00B0626
 * 00000001C00B061D: call    W32GetCurrentThreadDpiAwarenessContext
 * 00000001C00B0622: mov     edi, eax
 * 00000001C00B0624: jmp     short loc_1C00B063B
 * 00000001C00B0626: test    rbx, rbx
 * 00000001C00B0629: jz      short loc_1C00B063B
 * 00000001C00B062B: mov     edi, [rbx+118h]
 * 00000001C00B0631: mov     eax, 6010h
 * 00000001C00B0636: test    edi, edi
 * 00000001C00B0638: cmovz   edi, eax
 * 00000001C00B063B: test    rsi, rsi
 * 00000001C00B063E: jz      short loc_1C00B064F
 * 00000001C00B0640: mov     rcx, rsi; Object
 * 00000001C00B0643: call    cs:__imp_ObfDereferenceObject
 * 00000001C00B064A: nop     dword ptr [rax+rax+00h]
 * 00000001C00B064F: call    UserSessionSwitchLeaveCrit
 * 00000001C00B0654: mov     rbx, [rsp+38h+arg_8]
 * 00000001C00B0659: mov     eax, edi
 * 00000001C00B065B: mov     rbp, [rsp+38h+arg_10]
 * 00000001C00B0660: mov     rsi, [rsp+38h+arg_18]
 * 00000001C00B0665: add     rsp, 30h
 * 00000001C00B0669: pop     rdi
 * 00000001C00B066A: retn
 */
