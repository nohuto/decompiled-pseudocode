/*
 * XREFs of WPP_RECORDER_SF_di @ 0x1C001C448
 * Callers:
 *     Controller_PopulateDeviceFlags @ 0x1C00738B4 (Controller_PopulateDeviceFlags.c)
 *     Controller_PopulateDeviceFlagsFromRegistry @ 0x1C00739B8 (Controller_PopulateDeviceFlagsFromRegistry.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00203A0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_di @ 0x1C001C448
 * Reason: Hex-Rays returned no pseudocode for 0x1C001C448
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C001C448: mov     [rsp+arg_0], rbx
 * 00000001C001C44D: mov     [rsp+arg_8], rsi
 * 00000001C001C452: push    rdi
 * 00000001C001C453: sub     rsp, 50h
 * 00000001C001C457: mov     rsi, rcx
 * 00000001C001C45A: movzx   edi, r9w
 * 00000001C001C45E: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C001C465: movzx   ebx, dl
 * 00000001C001C468: mov     eax, [rcx+2Ch]
 * 00000001C001C46B: test    al, 8
 * 00000001C001C46D: jnz     loc_1C002E8DC
 * 00000001C001C473: and     [rsp+58h+var_10], 0
 * 00000001C001C479: lea     rax, [rsp+58h+arg_30]
 * 00000001C001C481: mov     [rsp+58h+var_18], 8
 * 00000001C001C48A: lea     r9, WPP_ac07559723993fb37d1c33c002d3118e_Traceguids
 * 00000001C001C491: mov     [rsp+58h+var_20], rax
 * 00000001C001C496: mov     r8d, 4
 * 00000001C001C49C: lea     rax, [rsp+58h+arg_28]
 * 00000001C001C4A4: mov     [rsp+58h+var_28], 4
 * 00000001C001C4AD: mov     [rsp+58h+var_30], rax
 * 00000001C001C4B2: mov     edx, ebx
 * 00000001C001C4B4: mov     rcx, rsi
 * 00000001C001C4B7: mov     word ptr [rsp+58h+var_38], di
 * 00000001C001C4BC: call    cs:__imp_WppAutoLogTrace
 * 00000001C001C4C3: nop     dword ptr [rax+rax+00h]
 * 00000001C001C4C8: mov     rbx, [rsp+58h+arg_0]
 * 00000001C001C4CD: mov     rsi, [rsp+58h+arg_8]
 * 00000001C001C4D2: add     rsp, 50h
 * 00000001C001C4D6: pop     rdi
 * 00000001C001C4D7: retn
 * 00000001C002E8DC: cmp     [rcx+29h], bl
 * 00000001C002E8DF: jb      loc_1C001C473
 * 00000001C002E8E5: and     [rsp+58h+var_18], 0
 * 00000001C002E8EB: lea     rdx, [rsp+58h+arg_30]
 * 00000001C002E8F3: mov     rax, cs:pfnWppTraceMessage
 * 00000001C002E8FA: lea     r8, WPP_ac07559723993fb37d1c33c002d3118e_Traceguids
 * 00000001C002E901: mov     rcx, [rcx+18h]
 * 00000001C002E905: mov     r9d, edi
 * 00000001C002E908: mov     [rsp+58h+var_20], 8
 * 00000001C002E911: mov     [rsp+58h+var_28], rdx
 * 00000001C002E916: lea     rdx, [rsp+58h+arg_28]
 * 00000001C002E91E: mov     [rsp+58h+var_30], 4
 * 00000001C002E927: mov     [rsp+58h+var_38], rdx
 * 00000001C002E92C: mov     edx, 2Bh ; '+'
 * 00000001C002E931: call    cs:__guard_dispatch_icall_fptr
 * 00000001C002E937: nop
 * 00000001C002E938: jmp     loc_1C001C473
 */
