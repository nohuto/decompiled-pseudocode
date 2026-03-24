/*
 * XREFs of WPP_RECORDER_SF_di @ 0x1C001C498
 * Callers:
 *     Controller_PopulateDeviceFlags @ 0x1C00738F4 (Controller_PopulateDeviceFlags.c)
 *     Controller_PopulateDeviceFlagsFromRegistry @ 0x1C00739F8 (Controller_PopulateDeviceFlagsFromRegistry.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0020270 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_di @ 0x1C001C498
 * Reason: Hex-Rays returned no pseudocode for 0x1C001C498
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C001C498: mov     [rsp+arg_0], rbx
 * 00000001C001C49D: mov     [rsp+arg_8], rsi
 * 00000001C001C4A2: push    rdi
 * 00000001C001C4A3: sub     rsp, 50h
 * 00000001C001C4A7: mov     rsi, rcx
 * 00000001C001C4AA: movzx   edi, r9w
 * 00000001C001C4AE: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C001C4B5: movzx   ebx, dl
 * 00000001C001C4B8: mov     eax, [rcx+2Ch]
 * 00000001C001C4BB: test    al, 8
 * 00000001C001C4BD: jnz     loc_1C002E79C
 * 00000001C001C4C3: and     [rsp+58h+var_10], 0
 * 00000001C001C4C9: lea     rax, [rsp+58h+arg_30]
 * 00000001C001C4D1: mov     [rsp+58h+var_18], 8
 * 00000001C001C4DA: lea     r9, WPP_ac07559723993fb37d1c33c002d3118e_Traceguids
 * 00000001C001C4E1: mov     [rsp+58h+var_20], rax
 * 00000001C001C4E6: mov     r8d, 4
 * 00000001C001C4EC: lea     rax, [rsp+58h+arg_28]
 * 00000001C001C4F4: mov     [rsp+58h+var_28], 4
 * 00000001C001C4FD: mov     [rsp+58h+var_30], rax
 * 00000001C001C502: mov     edx, ebx
 * 00000001C001C504: mov     rcx, rsi
 * 00000001C001C507: mov     word ptr [rsp+58h+var_38], di
 * 00000001C001C50C: call    cs:__imp_WppAutoLogTrace
 * 00000001C001C513: nop     dword ptr [rax+rax+00h]
 * 00000001C001C518: mov     rbx, [rsp+58h+arg_0]
 * 00000001C001C51D: mov     rsi, [rsp+58h+arg_8]
 * 00000001C001C522: add     rsp, 50h
 * 00000001C001C526: pop     rdi
 * 00000001C001C527: retn
 * 00000001C002E79C: cmp     [rcx+29h], bl
 * 00000001C002E79F: jb      loc_1C001C4C3
 * 00000001C002E7A5: and     [rsp+58h+var_18], 0
 * 00000001C002E7AB: lea     rdx, [rsp+58h+arg_30]
 * 00000001C002E7B3: mov     rax, cs:pfnWppTraceMessage
 * 00000001C002E7BA: lea     r8, WPP_ac07559723993fb37d1c33c002d3118e_Traceguids
 * 00000001C002E7C1: mov     rcx, [rcx+18h]
 * 00000001C002E7C5: mov     r9d, edi
 * 00000001C002E7C8: mov     [rsp+58h+var_20], 8
 * 00000001C002E7D1: mov     [rsp+58h+var_28], rdx
 * 00000001C002E7D6: lea     rdx, [rsp+58h+arg_28]
 * 00000001C002E7DE: mov     [rsp+58h+var_30], 4
 * 00000001C002E7E7: mov     [rsp+58h+var_38], rdx
 * 00000001C002E7EC: mov     edx, 2Bh ; '+'
 * 00000001C002E7F1: call    cs:__guard_dispatch_icall_fptr
 * 00000001C002E7F7: nop
 * 00000001C002E7F8: jmp     loc_1C001C4C3
 */
