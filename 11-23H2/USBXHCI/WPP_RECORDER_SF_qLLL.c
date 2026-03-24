/*
 * XREFs of WPP_RECORDER_SF_qLLL @ 0x1C000CAE4
 * Callers:
 *     ESM_FindAndSetTargetState @ 0x1C000C7CC (ESM_FindAndSetTargetState.c)
 *     ESM_ExecuteEntryFunctionsAndPushPopStateMachinesForCurrentState @ 0x1C000C99C (ESM_ExecuteEntryFunctionsAndPushPopStateMachinesForCurrentState.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00203A0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qLLL @ 0x1C000CAE4
 * Reason: Hex-Rays returned no pseudocode for 0x1C000CAE4
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C000CAE4: mov     [rsp+arg_0], rbx
 * 00000001C000CAE9: mov     [rsp+arg_8], rbp
 * 00000001C000CAEE: push    rdi
 * 00000001C000CAEF: sub     rsp, 70h
 * 00000001C000CAF3: mov     rbx, rcx
 * 00000001C000CAF6: mov     edi, 4
 * 00000001C000CAFB: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C000CB02: lea     ebp, [rdi+8]
 * 00000001C000CB05: test    dword ptr [rcx+2Ch], 10000h
 * 00000001C000CB0C: jnz     loc_1C002D612
 * 00000001C000CB12: and     [rsp+78h+var_10], 0
 * 00000001C000CB18: lea     rax, [rsp+78h+arg_40]
 * 00000001C000CB20: mov     [rsp+78h+var_18], rdi
 * 00000001C000CB25: lea     r9, WPP_98a83f24598b3525d75ef9dd6ca2eaeb_Traceguids
 * 00000001C000CB2C: mov     [rsp+78h+var_20], rax
 * 00000001C000CB31: mov     r8d, 11h
 * 00000001C000CB37: mov     [rsp+78h+var_28], rdi
 * 00000001C000CB3C: lea     rax, [rsp+78h+arg_38]
 * 00000001C000CB44: mov     [rsp+78h+var_30], rax
 * 00000001C000CB49: mov     edx, edi
 * 00000001C000CB4B: mov     [rsp+78h+var_38], rdi
 * 00000001C000CB50: lea     rax, [rsp+78h+arg_30]
 * 00000001C000CB58: mov     [rsp+78h+var_40], rax
 * 00000001C000CB5D: mov     rcx, rbx
 * 00000001C000CB60: lea     rax, [rsp+78h+arg_28]
 * 00000001C000CB68: mov     [rsp+78h+var_48], 8
 * 00000001C000CB71: mov     [rsp+78h+var_50], rax
 * 00000001C000CB76: mov     word ptr [rsp+78h+var_58], bp
 * 00000001C000CB7B: call    cs:__imp_WppAutoLogTrace
 * 00000001C000CB82: nop     dword ptr [rax+rax+00h]
 * 00000001C000CB87: lea     r11, [rsp+78h+var_8]
 * 00000001C000CB8C: mov     rbx, [r11+10h]
 * 00000001C000CB90: mov     rbp, [r11+18h]
 * 00000001C000CB94: mov     rsp, r11
 * 00000001C000CB97: pop     rdi
 * 00000001C000CB98: retn
 * 00000001C002D612: cmp     [rcx+29h], dil
 * 00000001C002D616: jb      loc_1C000CB12
 * 00000001C002D61C: and     [rsp+78h+var_18], 0
 * 00000001C002D622: lea     rdx, [rsp+78h+arg_40]
 * 00000001C002D62A: mov     rax, cs:pfnWppTraceMessage
 * 00000001C002D631: lea     r8, WPP_98a83f24598b3525d75ef9dd6ca2eaeb_Traceguids
 * 00000001C002D638: mov     rcx, [rcx+18h]
 * 00000001C002D63C: mov     r9d, ebp
 * 00000001C002D63F: mov     [rsp+78h+var_20], rdi
 * 00000001C002D644: mov     [rsp+78h+var_28], rdx
 * 00000001C002D649: lea     rdx, [rsp+78h+arg_38]
 * 00000001C002D651: mov     [rsp+78h+var_30], rdi
 * 00000001C002D656: mov     [rsp+78h+var_38], rdx
 * 00000001C002D65B: lea     rdx, [rsp+78h+arg_30]
 * 00000001C002D663: mov     [rsp+78h+var_40], rdi
 * 00000001C002D668: mov     [rsp+78h+var_48], rdx
 * 00000001C002D66D: lea     rdx, [rsp+78h+arg_28]
 * 00000001C002D675: mov     [rsp+78h+var_50], 8
 * 00000001C002D67E: mov     [rsp+78h+var_58], rdx
 * 00000001C002D683: mov     edx, 2Bh ; '+'
 * 00000001C002D688: call    cs:__guard_dispatch_icall_fptr
 * 00000001C002D68E: nop
 * 00000001C002D68F: jmp     loc_1C000CB12
 */
