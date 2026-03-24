/*
 * XREFs of NtUserGetSystemDpiForProcess @ 0x1C0145F10
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C004CE30 (UserSessionSwitchLeaveCrit.c)
 *     EtwTraceAcquiredSharedUserCrit @ 0x1C0053C40 (EtwTraceAcquiredSharedUserCrit.c)
 *     IsEtwUserCritEnabled @ 0x1C0053DF0 (IsEtwUserCritEnabled.c)
 *     UserSetLastError @ 0x1C005E3B4 (UserSetLastError.c)
 */

/*
 * Hex-Rays decompilation failed for NtUserGetSystemDpiForProcess @ 0x1C0145F10
 * Reason: Hex-Rays returned no pseudocode for 0x1C0145F10
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0145F10: mov     [rsp+arg_8], rbx
 * 00000001C0145F15: mov     [rsp+arg_10], rsi
 * 00000001C0145F1A: push    rdi
 * 00000001C0145F1B: sub     rsp, 30h
 * 00000001C0145F1F: mov     rsi, rcx
 * 00000001C0145F22: call    IsEtwUserCritEnabled
 * 00000001C0145F27: test    eax, eax
 * 00000001C0145F29: jz      short loc_1C0145F51
 * 00000001C0145F2B: call    cs:__imp_PsGetCurrentThreadWin32Thread
 * 00000001C0145F32: nop     dword ptr [rax+rax+00h]
 * 00000001C0145F37: mov     rbx, rax
 * 00000001C0145F3A: test    rax, rax
 * 00000001C0145F3D: jz      short loc_1C0145F51
 * 00000001C0145F3F: xor     ecx, ecx; PerformanceFrequency
 * 00000001C0145F41: call    cs:__imp_KeQueryPerformanceCounter
 * 00000001C0145F48: nop     dword ptr [rax+rax+00h]
 * 00000001C0145F4D: mov     [rbx+8], rax
 * 00000001C0145F51: call    cs:__imp_SGDGetUserSessionState
 * 00000001C0145F58: nop     dword ptr [rax+rax+00h]
 * 00000001C0145F5D: mov     rcx, [rax+8]; Resource
 * 00000001C0145F61: call    cs:__imp_ExEnterCriticalRegionAndAcquireResourceShared
 * 00000001C0145F68: nop     dword ptr [rax+rax+00h]
 * 00000001C0145F6D: call    EtwTraceAcquiredSharedUserCrit
 * 00000001C0145F72: lea     rax, [rsi-1]
 * 00000001C0145F76: xor     edi, edi
 * 00000001C0145F78: cmp     rax, 0FFFFFFFFFFFFFFFDh
 * 00000001C0145F7C: ja      loc_1C014601E
 * 00000001C0145F82: mov     rax, cs:__imp_PsProcessType
 * 00000001C0145F89: mov     r9b, 1; AccessMode
 * 00000001C0145F8C: and     [rsp+38h+var_10], rdi
 * 00000001C0145F91: mov     edx, 1000h; DesiredAccess
 * 00000001C0145F96: and     [rsp+38h+arg_0], rdi
 * 00000001C0145F9B: mov     rcx, rsi; Handle
 * 00000001C0145F9E: mov     r8, [rax]; ObjectType
 * 00000001C0145FA1: lea     rax, [rsp+38h+arg_0]
 * 00000001C0145FA6: mov     [rsp+38h+Object], rax; Object
 * 00000001C0145FAB: call    cs:__imp_ObReferenceObjectByHandle
 * 00000001C0145FB2: nop     dword ptr [rax+rax+00h]
 * 00000001C0145FB7: mov     rdi, [rsp+38h+arg_0]
 * 00000001C0145FBC: test    eax, eax
 * 00000001C0145FBE: jns     short loc_1C0145FD1
 * 00000001C0145FC0: mov     ecx, 57h ; 'W'
 * 00000001C0145FC5: call    UserSetLastError
 * 00000001C0145FCA: xor     ebx, ebx
 * 00000001C0145FCC: jmp     loc_1C014606D
 * 00000001C0145FD1: call    cs:__imp_SGDGetUserSessionState
 * 00000001C0145FD8: nop     dword ptr [rax+rax+00h]
 * 00000001C0145FDD: mov     rcx, rdi
 * 00000001C0145FE0: mov     ebx, [rax]
 * 00000001C0145FE2: call    cs:__imp_PsGetProcessSessionId
 * 00000001C0145FE9: nop     dword ptr [rax+rax+00h]
 * 00000001C0145FEE: cmp     eax, ebx
 * 00000001C0145FF0: jz      short loc_1C0145FF9
 * 00000001C0145FF2: mov     ecx, 57h ; 'W'
 * 00000001C0145FF7: jmp     short loc_1C0146052
 * 00000001C0145FF9: mov     rcx, rdi
 * 00000001C0145FFC: call    cs:__imp_PsGetProcessWin32Process
 * 00000001C0146003: nop     dword ptr [rax+rax+00h]
 * 00000001C0146008: mov     r8, rax
 * 00000001C014600B: test    rax, rax
 * 00000001C014600E: jz      short loc_1C014603E
 * 00000001C0146010: mov     rcx, [rax]
 * 00000001C0146013: neg     rcx
 * 00000001C0146016: sbb     rdx, rdx
 * 00000001C0146019: and     r8, rdx
 * 00000001C014601C: jmp     short loc_1C014603E
 * 00000001C014601E: call    cs:__imp_PsGetCurrentProcessWin32Process
 * 00000001C0146025: nop     dword ptr [rax+rax+00h]
 * 00000001C014602A: mov     r8, rax
 * 00000001C014602D: test    rax, rax
 * 00000001C0146030: jz      short loc_1C014603E
 * 00000001C0146032: mov     rax, [rax]
 * 00000001C0146035: neg     rax
 * 00000001C0146038: sbb     rcx, rcx
 * 00000001C014603B: and     r8, rcx
 * 00000001C014603E: test    r8, r8
 * 00000001C0146041: jz      short loc_1C014604D
 * 00000001C0146043: movzx   ebx, word ptr [r8+11Ch]
 * 00000001C014604B: jmp     short loc_1C0146059
 * 00000001C014604D: mov     ecx, 139Fh
 * 00000001C0146052: call    UserSetLastError
 * 00000001C0146057: xor     ebx, ebx
 * 00000001C0146059: test    rdi, rdi
 * 00000001C014605C: jz      short loc_1C014606D
 * 00000001C014605E: mov     rcx, rdi; Object
 * 00000001C0146061: call    cs:__imp_ObfDereferenceObject
 * 00000001C0146068: nop     dword ptr [rax+rax+00h]
 * 00000001C014606D: call    UserSessionSwitchLeaveCrit
 * 00000001C0146072: mov     rsi, [rsp+38h+arg_10]
 * 00000001C0146077: mov     eax, ebx
 * 00000001C0146079: mov     rbx, [rsp+38h+arg_8]
 * 00000001C014607E: add     rsp, 30h
 * 00000001C0146082: pop     rdi
 * 00000001C0146083: retn
 */
