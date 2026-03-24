/*
 * XREFs of ?DxgkEngEnterUserCrit@@YAXH@Z @ 0x1C00B44F0
 * Callers:
 *     <none>
 * Callees:
 *     PrivateAPI::_anonymous_namespace_::EnterCritInternal @ 0x1C0048330 (PrivateAPI--_anonymous_namespace_--EnterCritInternal.c)
 *     EtwTraceAcquiredSharedUserCrit @ 0x1C0053C40 (EtwTraceAcquiredSharedUserCrit.c)
 *     IsEtwUserCritEnabled @ 0x1C0053DF0 (IsEtwUserCritEnabled.c)
 *     HMUnlockObject @ 0x1C0056D70 (HMUnlockObject.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D66B4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

/*
 * Hex-Rays decompilation failed for ?DxgkEngEnterUserCrit@@YAXH@Z @ 0x1C00B44F0
 * Reason: Hex-Rays returned no pseudocode for 0x1C00B44F0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00B44F0: mov     [rsp+arg_8], rbx
 * 00000001C00B44F5: push    rdi
 * 00000001C00B44F6: sub     rsp, 20h
 * 00000001C00B44FA: xor     edi, edi
 * 00000001C00B44FC: test    ecx, ecx
 * 00000001C00B44FE: jz      loc_1C00B45C3
 * 00000001C00B4504: xor     ecx, ecx
 * 00000001C00B4506: call    PrivateAPI___anonymous_namespace___EnterCritInternal
 * 00000001C00B450B: mov     cs:gptiCurrent, rax
 * 00000001C00B4512: test    rax, rax
 * 00000001C00B4515: jz      loc_1C00B4613
 * 00000001C00B451B: mov     dword ptr [rax+60Ch], 1
 * 00000001C00B4525: call    cs:__imp_PsGetCurrentProcessWin32Process
 * 00000001C00B452C: nop     dword ptr [rax+rax+00h]
 * 00000001C00B4531: test    rax, rax
 * 00000001C00B4534: jz      loc_1C00B4613
 * 00000001C00B453A: cmp     [rax], rdi
 * 00000001C00B453D: jz      loc_1C00B4613
 * 00000001C00B4543: test    dword ptr [rax+0Ch], 8000h
 * 00000001C00B454A: jz      loc_1C00B4613
 * 00000001C00B4550: mov     rcx, cs:gptiCurrent
 * 00000001C00B4557: test    dword ptr [rcx+1E8h], 1000000h
 * 00000001C00B4561: jz      loc_1C00B4613
 * 00000001C00B4567: mov     eax, [rcx+4F8h]
 * 00000001C00B456D: test    al, al
 * 00000001C00B456F: js      loc_1C00B4613
 * 00000001C00B4575: jmp     short loc_1C00B45B5
 * 00000001C00B4577: mov     rax, [rbx+10h]
 * 00000001C00B457B: mov     cs:?gpSharedUserCritDeferredUnlockListHead@@3PEAUtagKERNELHANDLETABLEENTRY@@EA, rax; tagKERNELHANDLETABLEENTRY * gpSharedUserCritDeferredUnlockListHead
 * 00000001C00B4582: mov     rax, [rbx]
 * 00000001C00B4585: mov     [rbx+10h], rdi
 * 00000001C00B4589: cmp     dword ptr [rax+8], 1
 * 00000001C00B458D: jnb     short loc_1C00B45AD
 * 00000001C00B458F: mov     [rsp+28h+arg_0], 20000h
 * 00000001C00B4597: lea     rcx, aIxptelassert; "IXPTelAssert"
 * 00000001C00B459E: mov     edx, [rsp+28h+arg_0]
 * 00000001C00B45A2: mov     r8d, 108Dh
 * 00000001C00B45A8: call    MicrosoftTelemetryAssertTriggeredArgsKM
 * 00000001C00B45AD: mov     rcx, [rbx]
 * 00000001C00B45B0: call    HMUnlockObject
 * 00000001C00B45B5: mov     rbx, cs:?gpSharedUserCritDeferredUnlockListHead@@3PEAUtagKERNELHANDLETABLEENTRY@@EA; tagKERNELHANDLETABLEENTRY * gpSharedUserCritDeferredUnlockListHead
 * 00000001C00B45BC: test    rbx, rbx
 * 00000001C00B45BF: jnz     short loc_1C00B4577
 * 00000001C00B45C1: jmp     short loc_1C00B4613
 * 00000001C00B45C3: call    IsEtwUserCritEnabled
 * 00000001C00B45C8: test    eax, eax
 * 00000001C00B45CA: jz      short loc_1C00B45F2
 * 00000001C00B45CC: call    cs:__imp_PsGetCurrentThreadWin32Thread
 * 00000001C00B45D3: nop     dword ptr [rax+rax+00h]
 * 00000001C00B45D8: mov     rbx, rax
 * 00000001C00B45DB: test    rax, rax
 * 00000001C00B45DE: jz      short loc_1C00B45F2
 * 00000001C00B45E0: xor     ecx, ecx; PerformanceFrequency
 * 00000001C00B45E2: call    cs:__imp_KeQueryPerformanceCounter
 * 00000001C00B45E9: nop     dword ptr [rax+rax+00h]
 * 00000001C00B45EE: mov     [rbx+8], rax
 * 00000001C00B45F2: call    cs:__imp_SGDGetUserSessionState
 * 00000001C00B45F9: nop     dword ptr [rax+rax+00h]
 * 00000001C00B45FE: mov     rcx, [rax+8]; Resource
 * 00000001C00B4602: call    cs:__imp_ExEnterCriticalRegionAndAcquireResourceShared
 * 00000001C00B4609: nop     dword ptr [rax+rax+00h]
 * 00000001C00B460E: call    EtwTraceAcquiredSharedUserCrit
 * 00000001C00B4613: mov     rbx, [rsp+28h+arg_8]
 * 00000001C00B4618: add     rsp, 20h
 * 00000001C00B461C: pop     rdi
 * 00000001C00B461D: retn
 */
