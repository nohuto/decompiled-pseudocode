/*
 * XREFs of WPP_RECORDER_SF_qLLL @ 0x1C000CB14
 * Callers:
 *     ESM_FindAndSetTargetState @ 0x1C000C7FC (ESM_FindAndSetTargetState.c)
 *     ESM_ExecuteEntryFunctionsAndPushPopStateMachinesForCurrentState @ 0x1C000C9CC (ESM_ExecuteEntryFunctionsAndPushPopStateMachinesForCurrentState.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0020270 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qLLL @ 0x1C000CB14
 * Reason: Hex-Rays returned no pseudocode for 0x1C000CB14
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C000CB14: mov     [rsp+arg_0], rbx
 * 00000001C000CB19: mov     [rsp+arg_8], rbp
 * 00000001C000CB1E: push    rdi
 * 00000001C000CB1F: sub     rsp, 70h
 * 00000001C000CB23: mov     rbx, rcx
 * 00000001C000CB26: mov     edi, 4
 * 00000001C000CB2B: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C000CB32: lea     ebp, [rdi+8]
 * 00000001C000CB35: test    dword ptr [rcx+2Ch], 10000h
 * 00000001C000CB3C: jnz     loc_1C002D4D2
 * 00000001C000CB42: and     [rsp+78h+var_10], 0
 * 00000001C000CB48: lea     rax, [rsp+78h+arg_40]
 * 00000001C000CB50: mov     [rsp+78h+var_18], rdi
 * 00000001C000CB55: lea     r9, WPP_98a83f24598b3525d75ef9dd6ca2eaeb_Traceguids
 * 00000001C000CB5C: mov     [rsp+78h+var_20], rax
 * 00000001C000CB61: mov     r8d, 11h
 * 00000001C000CB67: mov     [rsp+78h+var_28], rdi
 * 00000001C000CB6C: lea     rax, [rsp+78h+arg_38]
 * 00000001C000CB74: mov     [rsp+78h+var_30], rax
 * 00000001C000CB79: mov     edx, edi
 * 00000001C000CB7B: mov     [rsp+78h+var_38], rdi
 * 00000001C000CB80: lea     rax, [rsp+78h+arg_30]
 * 00000001C000CB88: mov     [rsp+78h+var_40], rax
 * 00000001C000CB8D: mov     rcx, rbx
 * 00000001C000CB90: lea     rax, [rsp+78h+arg_28]
 * 00000001C000CB98: mov     [rsp+78h+var_48], 8
 * 00000001C000CBA1: mov     [rsp+78h+var_50], rax
 * 00000001C000CBA6: mov     word ptr [rsp+78h+var_58], bp
 * 00000001C000CBAB: call    cs:__imp_WppAutoLogTrace
 * 00000001C000CBB2: nop     dword ptr [rax+rax+00h]
 * 00000001C000CBB7: lea     r11, [rsp+78h+var_8]
 * 00000001C000CBBC: mov     rbx, [r11+10h]
 * 00000001C000CBC0: mov     rbp, [r11+18h]
 * 00000001C000CBC4: mov     rsp, r11
 * 00000001C000CBC7: pop     rdi
 * 00000001C000CBC8: retn
 * 00000001C002D4D2: cmp     [rcx+29h], dil
 * 00000001C002D4D6: jb      loc_1C000CB42
 * 00000001C002D4DC: and     [rsp+78h+var_18], 0
 * 00000001C002D4E2: lea     rdx, [rsp+78h+arg_40]
 * 00000001C002D4EA: mov     rax, cs:pfnWppTraceMessage
 * 00000001C002D4F1: lea     r8, WPP_98a83f24598b3525d75ef9dd6ca2eaeb_Traceguids
 * 00000001C002D4F8: mov     rcx, [rcx+18h]
 * 00000001C002D4FC: mov     r9d, ebp
 * 00000001C002D4FF: mov     [rsp+78h+var_20], rdi
 * 00000001C002D504: mov     [rsp+78h+var_28], rdx
 * 00000001C002D509: lea     rdx, [rsp+78h+arg_38]
 * 00000001C002D511: mov     [rsp+78h+var_30], rdi
 * 00000001C002D516: mov     [rsp+78h+var_38], rdx
 * 00000001C002D51B: lea     rdx, [rsp+78h+arg_30]
 * 00000001C002D523: mov     [rsp+78h+var_40], rdi
 * 00000001C002D528: mov     [rsp+78h+var_48], rdx
 * 00000001C002D52D: lea     rdx, [rsp+78h+arg_28]
 * 00000001C002D535: mov     [rsp+78h+var_50], 8
 * 00000001C002D53E: mov     [rsp+78h+var_58], rdx
 * 00000001C002D543: mov     edx, 2Bh ; '+'
 * 00000001C002D548: call    cs:__guard_dispatch_icall_fptr
 * 00000001C002D54E: nop
 * 00000001C002D54F: jmp     loc_1C000CB42
 */
