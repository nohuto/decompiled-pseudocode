/*
 * XREFs of WPP_RECORDER_SF__guid_ @ 0x1C001E22C
 * Callers:
 *     Controller_UcxEvtQueryUsbCapability @ 0x1C001B2C0 (Controller_UcxEvtQueryUsbCapability.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00203A0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF__guid_ @ 0x1C001E22C
 * Reason: Hex-Rays returned no pseudocode for 0x1C001E22C
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C001E22C: mov     [rsp+arg_0], rbx
 * 00000001C001E231: mov     [rsp+arg_8], rdi
 * 00000001C001E236: push    r14
 * 00000001C001E238: sub     rsp, 40h
 * 00000001C001E23C: mov     rbx, [rsp+48h+arg_28]
 * 00000001C001E241: mov     rdi, rcx
 * 00000001C001E244: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C001E24B: mov     r14d, 0CEh
 * 00000001C001E251: mov     eax, [rcx+2Ch]
 * 00000001C001E254: test    al, 8
 * 00000001C001E256: jnz     loc_1C002F394
 * 00000001C001E25C: and     [rsp+48h+var_10], 0
 * 00000001C001E262: lea     r9, WPP_ac07559723993fb37d1c33c002d3118e_Traceguids
 * 00000001C001E269: mov     edx, 4
 * 00000001C001E26E: mov     [rsp+48h+var_18], 10h
 * 00000001C001E277: mov     [rsp+48h+var_20], rbx
 * 00000001C001E27C: mov     r8d, edx
 * 00000001C001E27F: mov     rcx, rdi
 * 00000001C001E282: mov     word ptr [rsp+48h+var_28], r14w
 * 00000001C001E288: call    cs:__imp_WppAutoLogTrace
 * 00000001C001E28F: nop     dword ptr [rax+rax+00h]
 * 00000001C001E294: mov     rbx, [rsp+48h+arg_0]
 * 00000001C001E299: mov     rdi, [rsp+48h+arg_8]
 * 00000001C001E29E: add     rsp, 40h
 * 00000001C001E2A2: pop     r14
 * 00000001C001E2A4: retn
 * 00000001C002F394: cmp     byte ptr [rcx+29h], 4
 * 00000001C002F398: jb      loc_1C001E25C
 * 00000001C002F39E: and     [rsp+48h+var_18], 0
 * 00000001C002F3A4: lea     r8, WPP_ac07559723993fb37d1c33c002d3118e_Traceguids
 * 00000001C002F3AB: mov     rax, cs:pfnWppTraceMessage
 * 00000001C002F3B2: mov     r9d, r14d
 * 00000001C002F3B5: mov     rcx, [rcx+18h]
 * 00000001C002F3B9: mov     edx, 2Bh ; '+'
 * 00000001C002F3BE: mov     [rsp+48h+var_20], 10h
 * 00000001C002F3C7: mov     [rsp+48h+var_28], rbx
 * 00000001C002F3CC: call    cs:__guard_dispatch_icall_fptr
 * 00000001C002F3D2: nop
 * 00000001C002F3D3: jmp     loc_1C001E25C
 */
