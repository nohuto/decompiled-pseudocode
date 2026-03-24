/*
 * XREFs of WPP_RECORDER_SF_D @ 0x1C0002880
 * Callers:
 *     KbdConfiguration @ 0x1C0010560 (KbdConfiguration.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0002EE0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_D @ 0x1C0002880
 * Reason: Hex-Rays returned no pseudocode for 0x1C0002880
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0002880: mov     [rsp+arg_0], rbx
 * 00000001C0002885: push    rdi
 * 00000001C0002886: sub     rsp, 40h
 * 00000001C000288A: mov     rdi, rcx
 * 00000001C000288D: movzx   ebx, r9w
 * 00000001C0002891: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0002898: mov     eax, [rcx+2Ch]
 * 00000001C000289B: test    al, 1
 * 00000001C000289D: jnz     loc_1C00048BE
 * 00000001C00028A3: mov     [rsp+48h+var_10], 0
 * 00000001C00028AC: lea     rax, [rsp+48h+arg_28]
 * 00000001C00028B1: mov     edx, 4
 * 00000001C00028B6: mov     [rsp+48h+var_18], 4
 * 00000001C00028BF: mov     [rsp+48h+var_20], rax
 * 00000001C00028C4: lea     r9, WPP_1b6d0084df9f3ca48f318fdd34bf6db2_Traceguids
 * 00000001C00028CB: mov     rcx, rdi
 * 00000001C00028CE: mov     word ptr [rsp+48h+var_28], bx
 * 00000001C00028D3: lea     r8d, [rdx-3]
 * 00000001C00028D7: call    cs:__imp_WppAutoLogTrace
 * 00000001C00028DE: nop     dword ptr [rax+rax+00h]
 * 00000001C00028E3: mov     rbx, [rsp+48h+arg_0]
 * 00000001C00028E8: add     rsp, 40h
 * 00000001C00028EC: pop     rdi
 * 00000001C00028ED: retn
 * 00000001C00048BE: cmp     byte ptr [rcx+29h], 4
 * 00000001C00048C2: jb      loc_1C00028A3
 * 00000001C00048C8: mov     rax, cs:pfnWppTraceMessage
 * 00000001C00048CF: lea     rdx, [rsp+48h+arg_28]
 * 00000001C00048D4: mov     rcx, [rcx+18h]
 * 00000001C00048D8: lea     r8, WPP_1b6d0084df9f3ca48f318fdd34bf6db2_Traceguids
 * 00000001C00048DF: mov     [rsp+48h+var_18], 0
 * 00000001C00048E8: mov     r9d, ebx
 * 00000001C00048EB: mov     [rsp+48h+var_20], 4
 * 00000001C00048F4: mov     [rsp+48h+var_28], rdx
 * 00000001C00048F9: mov     edx, 2Bh ; '+'
 * 00000001C00048FE: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0004904: nop
 * 00000001C0004905: jmp     loc_1C00028A3
 */
