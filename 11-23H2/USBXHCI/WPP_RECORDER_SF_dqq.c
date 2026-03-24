/*
 * XREFs of WPP_RECORDER_SF_dqq @ 0x1C0019284
 * Callers:
 *     UsbDevice_InitializeInputContextForAddEndpoints @ 0x1C000BBEC (UsbDevice_InitializeInputContextForAddEndpoints.c)
 *     UsbDevice_EndpointsConfigureCompletion @ 0x1C000D070 (UsbDevice_EndpointsConfigureCompletion.c)
 *     UsbDevice_SetAddress @ 0x1C0018EE0 (UsbDevice_SetAddress.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00203A0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_dqq @ 0x1C0019284
 * Reason: Hex-Rays returned no pseudocode for 0x1C0019284
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0019284: mov     [rsp+arg_0], rbx
 * 00000001C0019289: mov     [rsp+arg_8], rbp
 * 00000001C001928E: push    rdi
 * 00000001C001928F: sub     rsp, 60h
 * 00000001C0019293: mov     rdi, rcx
 * 00000001C0019296: movzx   ebx, r9w
 * 00000001C001929A: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C00192A1: mov     ebp, 8
 * 00000001C00192A6: test    dword ptr [rcx+2Ch], 800h
 * 00000001C00192AD: jnz     loc_1C002D886
 * 00000001C00192B3: and     [rsp+68h+var_10], 0
 * 00000001C00192B9: lea     rax, [rsp+68h+arg_38]
 * 00000001C00192C1: mov     [rsp+68h+var_18], rbp
 * 00000001C00192C6: lea     r9, WPP_a3acd40f84823909f7fc3b79b04bc30f_Traceguids
 * 00000001C00192CD: mov     [rsp+68h+var_20], rax
 * 00000001C00192D2: mov     edx, 4
 * 00000001C00192D7: mov     [rsp+68h+var_28], rbp
 * 00000001C00192DC: lea     rax, [rsp+68h+arg_30]
 * 00000001C00192E4: mov     [rsp+68h+var_30], rax
 * 00000001C00192E9: mov     rcx, rdi
 * 00000001C00192EC: lea     rax, [rsp+68h+arg_28]
 * 00000001C00192F4: mov     [rsp+68h+var_38], 4
 * 00000001C00192FD: mov     [rsp+68h+var_40], rax
 * 00000001C0019302: lea     r8d, [rdx+8]
 * 00000001C0019306: mov     word ptr [rsp+68h+var_48], bx
 * 00000001C001930B: call    cs:__imp_WppAutoLogTrace
 * 00000001C0019312: nop     dword ptr [rax+rax+00h]
 * 00000001C0019317: mov     rbx, [rsp+68h+arg_0]
 * 00000001C001931C: mov     rbp, [rsp+68h+arg_8]
 * 00000001C0019321: add     rsp, 60h
 * 00000001C0019325: pop     rdi
 * 00000001C0019326: retn
 * 00000001C002D886: cmp     byte ptr [rcx+29h], 4
 * 00000001C002D88A: jb      loc_1C00192B3
 * 00000001C002D890: and     [rsp+68h+var_18], 0
 * 00000001C002D896: lea     rdx, [rsp+68h+arg_38]
 * 00000001C002D89E: mov     rax, cs:pfnWppTraceMessage
 * 00000001C002D8A5: lea     r8, WPP_a3acd40f84823909f7fc3b79b04bc30f_Traceguids
 * 00000001C002D8AC: mov     rcx, [rcx+18h]
 * 00000001C002D8B0: mov     r9d, ebx
 * 00000001C002D8B3: mov     [rsp+68h+var_20], rbp
 * 00000001C002D8B8: mov     [rsp+68h+var_28], rdx
 * 00000001C002D8BD: lea     rdx, [rsp+68h+arg_30]
 * 00000001C002D8C5: mov     [rsp+68h+var_30], rbp
 * 00000001C002D8CA: mov     [rsp+68h+var_38], rdx
 * 00000001C002D8CF: lea     rdx, [rsp+68h+arg_28]
 * 00000001C002D8D7: mov     [rsp+68h+var_40], 4
 * 00000001C002D8E0: mov     [rsp+68h+var_48], rdx
 * 00000001C002D8E5: mov     edx, 2Bh ; '+'
 * 00000001C002D8EA: call    cs:__guard_dispatch_icall_fptr
 * 00000001C002D8F0: nop
 * 00000001C002D8F1: jmp     loc_1C00192B3
 */
