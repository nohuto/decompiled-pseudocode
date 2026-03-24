/*
 * XREFs of WPP_RECORDER_SF__guid_ @ 0x1C001E27C
 * Callers:
 *     Controller_UcxEvtQueryUsbCapability @ 0x1C001B310 (Controller_UcxEvtQueryUsbCapability.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0020270 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF__guid_ @ 0x1C001E27C
 * Reason: Hex-Rays returned no pseudocode for 0x1C001E27C
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C001E27C: mov     [rsp+arg_0], rbx
 * 00000001C001E281: mov     [rsp+arg_8], rdi
 * 00000001C001E286: push    r14
 * 00000001C001E288: sub     rsp, 40h
 * 00000001C001E28C: mov     rbx, [rsp+48h+arg_28]
 * 00000001C001E291: mov     rdi, rcx
 * 00000001C001E294: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C001E29B: mov     r14d, 0CEh
 * 00000001C001E2A1: mov     eax, [rcx+2Ch]
 * 00000001C001E2A4: test    al, 8
 * 00000001C001E2A6: jnz     loc_1C002F254
 * 00000001C001E2AC: and     [rsp+48h+var_10], 0
 * 00000001C001E2B2: lea     r9, WPP_ac07559723993fb37d1c33c002d3118e_Traceguids
 * 00000001C001E2B9: mov     edx, 4
 * 00000001C001E2BE: mov     [rsp+48h+var_18], 10h
 * 00000001C001E2C7: mov     [rsp+48h+var_20], rbx
 * 00000001C001E2CC: mov     r8d, edx
 * 00000001C001E2CF: mov     rcx, rdi
 * 00000001C001E2D2: mov     word ptr [rsp+48h+var_28], r14w
 * 00000001C001E2D8: call    cs:__imp_WppAutoLogTrace
 * 00000001C001E2DF: nop     dword ptr [rax+rax+00h]
 * 00000001C001E2E4: mov     rbx, [rsp+48h+arg_0]
 * 00000001C001E2E9: mov     rdi, [rsp+48h+arg_8]
 * 00000001C001E2EE: add     rsp, 40h
 * 00000001C001E2F2: pop     r14
 * 00000001C001E2F4: retn
 * 00000001C002F254: cmp     byte ptr [rcx+29h], 4
 * 00000001C002F258: jb      loc_1C001E2AC
 * 00000001C002F25E: and     [rsp+48h+var_18], 0
 * 00000001C002F264: lea     r8, WPP_ac07559723993fb37d1c33c002d3118e_Traceguids
 * 00000001C002F26B: mov     rax, cs:pfnWppTraceMessage
 * 00000001C002F272: mov     r9d, r14d
 * 00000001C002F275: mov     rcx, [rcx+18h]
 * 00000001C002F279: mov     edx, 2Bh ; '+'
 * 00000001C002F27E: mov     [rsp+48h+var_20], 10h
 * 00000001C002F287: mov     [rsp+48h+var_28], rbx
 * 00000001C002F28C: call    cs:__guard_dispatch_icall_fptr
 * 00000001C002F292: nop
 * 00000001C002F293: jmp     loc_1C001E2AC
 */
