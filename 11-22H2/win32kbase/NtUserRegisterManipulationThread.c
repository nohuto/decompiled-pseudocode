/*
 * XREFs of NtUserRegisterManipulationThread @ 0x1C00C1790
 * Callers:
 *     <none>
 * Callees:
 *     PrivateAPI::_anonymous_namespace_::EnterCritInternal @ 0x1C0048330 (PrivateAPI--_anonymous_namespace_--EnterCritInternal.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C004CE30 (UserSessionSwitchLeaveCrit.c)
 *     HMUnlockObject @ 0x1C0056D70 (HMUnlockObject.c)
 *     UserSetLastError @ 0x1C005E3B4 (UserSetLastError.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D66B4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

/*
 * Hex-Rays decompilation failed for NtUserRegisterManipulationThread @ 0x1C00C1790
 * Reason: Hex-Rays returned no pseudocode for 0x1C00C1790
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00C1790: mov     [rsp+arg_0], rbx
 * 00000001C00C1795: mov     [rsp+arg_10], rbp
 * 00000001C00C179A: mov     [rsp+arg_18], rsi
 * 00000001C00C179F: push    rdi
 * 00000001C00C17A0: sub     rsp, 20h
 * 00000001C00C17A4: mov     edi, 1
 * 00000001C00C17A9: mov     cl, dil
 * 00000001C00C17AC: call    PrivateAPI___anonymous_namespace___EnterCritInternal
 * 00000001C00C17B1: xor     esi, esi
 * 00000001C00C17B3: mov     cs:gptiCurrent, rax
 * 00000001C00C17BA: lea     ebp, [rdi+1]
 * 00000001C00C17BD: test    rax, rax
 * 00000001C00C17C0: jz      short loc_1C00C1814
 * 00000001C00C17C2: mov     [rax+60Ch], edi
 * 00000001C00C17C8: call    cs:__imp_PsGetCurrentProcessWin32Process
 * 00000001C00C17CF: nop     dword ptr [rax+rax+00h]
 * 00000001C00C17D4: test    rax, rax
 * 00000001C00C17D7: jz      short loc_1C00C1814
 * 00000001C00C17D9: cmp     [rax], rsi
 * 00000001C00C17DC: jz      short loc_1C00C1814
 * 00000001C00C17DE: test    dword ptr [rax+0Ch], 8000h
 * 00000001C00C17E5: jz      short loc_1C00C1814
 * 00000001C00C17E7: mov     rcx, cs:gptiCurrent
 * 00000001C00C17EE: test    dword ptr [rcx+1E8h], 1000000h
 * 00000001C00C17F8: jz      short loc_1C00C1814
 * 00000001C00C17FA: mov     eax, [rcx+4F8h]
 * 00000001C00C1800: test    al, al
 * 00000001C00C1802: js      short loc_1C00C1814
 * 00000001C00C1804: mov     rbx, cs:?gpSharedUserCritDeferredUnlockListHead@@3PEAUtagKERNELHANDLETABLEENTRY@@EA; tagKERNELHANDLETABLEENTRY * gpSharedUserCritDeferredUnlockListHead
 * 00000001C00C180B: test    rbx, rbx
 * 00000001C00C180E: jnz     loc_1C0128FF2
 * 00000001C00C1814: call    cs:__imp_PsGetCurrentProcess
 * 00000001C00C181B: nop     dword ptr [rax+rax+00h]
 * 00000001C00C1820: test    rax, rax
 * 00000001C00C1823: jz      short loc_1C00C182E
 * 00000001C00C1825: cmp     rax, qword ptr cs:WPP_MAIN_CB.Queue+10h
 * 00000001C00C182C: jz      short loc_1C00C183D
 * 00000001C00C182E: mov     ecx, 5
 * 00000001C00C1833: call    UserSetLastError
 * 00000001C00C1838: mov     rdi, rsi
 * 00000001C00C183B: jmp     short loc_1C00C185F
 * 00000001C00C183D: mov     rax, cs:gptiCurrent
 * 00000001C00C1844: mov     cs:gptiManipulationThread, rax
 * 00000001C00C184B: call    cs:__imp_PsGetCurrentThreadWin32Thread
 * 00000001C00C1852: nop     dword ptr [rax+rax+00h]
 * 00000001C00C1857: test    rax, rax
 * 00000001C00C185A: jz      short loc_1C00C185F
 * 00000001C00C185C: or      [rax+2Ch], ebp
 * 00000001C00C185F: call    UserSessionSwitchLeaveCrit
 * 00000001C00C1864: mov     rbx, [rsp+28h+arg_0]
 * 00000001C00C1869: mov     rax, rdi
 * 00000001C00C186C: mov     rbp, [rsp+28h+arg_10]
 * 00000001C00C1871: mov     rsi, [rsp+28h+arg_18]
 * 00000001C00C1876: add     rsp, 20h
 * 00000001C00C187A: pop     rdi
 * 00000001C00C187B: retn
 * 00000001C0128FF2: mov     rax, [rbx+10h]
 * 00000001C0128FF6: mov     cs:?gpSharedUserCritDeferredUnlockListHead@@3PEAUtagKERNELHANDLETABLEENTRY@@EA, rax; tagKERNELHANDLETABLEENTRY * gpSharedUserCritDeferredUnlockListHead
 * 00000001C0128FFD: mov     rax, [rbx]
 * 00000001C0129000: mov     [rbx+10h], rsi
 * 00000001C0129004: cmp     [rax+8], edi
 * 00000001C0129007: jnb     short loc_1C0129027
 * 00000001C0129009: mov     [rsp+28h+arg_8], 20000h
 * 00000001C0129011: lea     rcx, aIxptelassert; "IXPTelAssert"
 * 00000001C0129018: mov     edx, [rsp+28h+arg_8]
 * 00000001C012901C: mov     r8d, 108Dh
 * 00000001C0129022: call    MicrosoftTelemetryAssertTriggeredArgsKM
 * 00000001C0129027: mov     rcx, [rbx]
 * 00000001C012902A: call    HMUnlockObject
 * 00000001C012902F: nop
 * 00000001C0129030: jmp     loc_1C00C1804
 */
