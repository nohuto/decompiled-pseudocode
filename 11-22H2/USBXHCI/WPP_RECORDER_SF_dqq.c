/*
 * XREFs of WPP_RECORDER_SF_dqq @ 0x1C00192D4
 * Callers:
 *     UsbDevice_InitializeInputContextForAddEndpoints @ 0x1C000BC1C (UsbDevice_InitializeInputContextForAddEndpoints.c)
 *     UsbDevice_EndpointsConfigureCompletion @ 0x1C000D0A0 (UsbDevice_EndpointsConfigureCompletion.c)
 *     UsbDevice_SetAddress @ 0x1C0018F30 (UsbDevice_SetAddress.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0020270 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_dqq @ 0x1C00192D4
 * Reason: Hex-Rays returned no pseudocode for 0x1C00192D4
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00192D4: mov     [rsp+arg_0], rbx
 * 00000001C00192D9: mov     [rsp+arg_8], rbp
 * 00000001C00192DE: push    rdi
 * 00000001C00192DF: sub     rsp, 60h
 * 00000001C00192E3: mov     rdi, rcx
 * 00000001C00192E6: movzx   ebx, r9w
 * 00000001C00192EA: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C00192F1: mov     ebp, 8
 * 00000001C00192F6: test    dword ptr [rcx+2Ch], 800h
 * 00000001C00192FD: jnz     loc_1C002D746
 * 00000001C0019303: and     [rsp+68h+var_10], 0
 * 00000001C0019309: lea     rax, [rsp+68h+arg_38]
 * 00000001C0019311: mov     [rsp+68h+var_18], rbp
 * 00000001C0019316: lea     r9, WPP_a3acd40f84823909f7fc3b79b04bc30f_Traceguids
 * 00000001C001931D: mov     [rsp+68h+var_20], rax
 * 00000001C0019322: mov     edx, 4
 * 00000001C0019327: mov     [rsp+68h+var_28], rbp
 * 00000001C001932C: lea     rax, [rsp+68h+arg_30]
 * 00000001C0019334: mov     [rsp+68h+var_30], rax
 * 00000001C0019339: mov     rcx, rdi
 * 00000001C001933C: lea     rax, [rsp+68h+arg_28]
 * 00000001C0019344: mov     [rsp+68h+var_38], 4
 * 00000001C001934D: mov     [rsp+68h+var_40], rax
 * 00000001C0019352: lea     r8d, [rdx+8]
 * 00000001C0019356: mov     word ptr [rsp+68h+var_48], bx
 * 00000001C001935B: call    cs:__imp_WppAutoLogTrace
 * 00000001C0019362: nop     dword ptr [rax+rax+00h]
 * 00000001C0019367: mov     rbx, [rsp+68h+arg_0]
 * 00000001C001936C: mov     rbp, [rsp+68h+arg_8]
 * 00000001C0019371: add     rsp, 60h
 * 00000001C0019375: pop     rdi
 * 00000001C0019376: retn
 * 00000001C002D746: cmp     byte ptr [rcx+29h], 4
 * 00000001C002D74A: jb      loc_1C0019303
 * 00000001C002D750: and     [rsp+68h+var_18], 0
 * 00000001C002D756: lea     rdx, [rsp+68h+arg_38]
 * 00000001C002D75E: mov     rax, cs:pfnWppTraceMessage
 * 00000001C002D765: lea     r8, WPP_a3acd40f84823909f7fc3b79b04bc30f_Traceguids
 * 00000001C002D76C: mov     rcx, [rcx+18h]
 * 00000001C002D770: mov     r9d, ebx
 * 00000001C002D773: mov     [rsp+68h+var_20], rbp
 * 00000001C002D778: mov     [rsp+68h+var_28], rdx
 * 00000001C002D77D: lea     rdx, [rsp+68h+arg_30]
 * 00000001C002D785: mov     [rsp+68h+var_30], rbp
 * 00000001C002D78A: mov     [rsp+68h+var_38], rdx
 * 00000001C002D78F: lea     rdx, [rsp+68h+arg_28]
 * 00000001C002D797: mov     [rsp+68h+var_40], 4
 * 00000001C002D7A0: mov     [rsp+68h+var_48], rdx
 * 00000001C002D7A5: mov     edx, 2Bh ; '+'
 * 00000001C002D7AA: call    cs:__guard_dispatch_icall_fptr
 * 00000001C002D7B0: nop
 * 00000001C002D7B1: jmp     loc_1C0019303
 */
