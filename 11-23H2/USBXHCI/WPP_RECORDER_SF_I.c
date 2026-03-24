/*
 * XREFs of WPP_RECORDER_SF_i @ 0x1C001C5CC
 * Callers:
 *     Interrupter_DeferredWorkProcessor @ 0x1C0008BE0 (Interrupter_DeferredWorkProcessor.c)
 *     Interrupter_UpdateERDP @ 0x1C0014AA0 (Interrupter_UpdateERDP.c)
 *     Interrupter_DeInitializeAfterOffload @ 0x1C003DD2C (Interrupter_DeInitializeAfterOffload.c)
 *     Controller_PopulateHardwareVerifierFlags @ 0x1C0073D3C (Controller_PopulateHardwareVerifierFlags.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00203A0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_i @ 0x1C001C5CC
 * Reason: Hex-Rays returned no pseudocode for 0x1C001C5CC
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C001C5CC: mov     [rsp+arg_0], rbx
 * 00000001C001C5D1: mov     [rsp+arg_8], rbp
 * 00000001C001C5D6: mov     [rsp+arg_10], rsi
 * 00000001C001C5DB: push    rdi
 * 00000001C001C5DC: push    r14
 * 00000001C001C5DE: push    r15
 * 00000001C001C5E0: sub     rsp, 40h
 * 00000001C001C5E4: mov     r14d, r8d
 * 00000001C001C5E7: mov     r15, rcx
 * 00000001C001C5EA: mov     edi, r8d
 * 00000001C001C5ED: shr     rdi, 10h
 * 00000001C001C5F1: movzx   esi, dl
 * 00000001C001C5F4: lea     ebx, [r14-1]
 * 00000001C001C5F8: movzx   ebp, r9w
 * 00000001C001C5FC: mov     r10d, ebx
 * 00000001C001C5FF: and     ebx, 1Fh
 * 00000001C001C602: shr     r10, 5
 * 00000001C001C606: lea     rax, [rdi+rdi*4]
 * 00000001C001C60A: and     r10d, 7FFh
 * 00000001C001C611: mov     edx, ebx
 * 00000001C001C613: mov     ebx, 8
 * 00000001C001C618: lea     r11, [r10+rax*4]
 * 00000001C001C61C: mov     r10, cs:WPP_GLOBAL_Control
 * 00000001C001C623: mov     eax, [r10+r11*4+2Ch]
 * 00000001C001C628: bt      eax, edx
 * 00000001C001C62B: jb      loc_1C002E9A8
 * 00000001C001C631: and     [rsp+58h+var_20], 0
 * 00000001C001C637: lea     rax, [rsp+58h+arg_28]
 * 00000001C001C63F: mov     r9, [rsp+58h+arg_20]
 * 00000001C001C647: mov     r8d, r14d
 * 00000001C001C64A: mov     [rsp+58h+var_28], rbx
 * 00000001C001C64F: mov     edx, esi
 * 00000001C001C651: mov     [rsp+58h+var_30], rax
 * 00000001C001C656: mov     rcx, r15
 * 00000001C001C659: mov     word ptr [rsp+58h+var_38], bp
 * 00000001C001C65E: call    cs:__imp_WppAutoLogTrace
 * 00000001C001C665: nop     dword ptr [rax+rax+00h]
 * 00000001C001C66A: mov     rbx, [rsp+58h+arg_0]
 * 00000001C001C66F: mov     rbp, [rsp+58h+arg_8]
 * 00000001C001C674: mov     rsi, [rsp+58h+arg_10]
 * 00000001C001C679: add     rsp, 40h
 * 00000001C001C67D: pop     r15
 * 00000001C001C67F: pop     r14
 * 00000001C001C681: pop     rdi
 * 00000001C001C682: retn
 * 00000001C002E9A8: lea     rcx, [rdi+rdi*4]
 * 00000001C002E9AC: add     rcx, rcx
 * 00000001C002E9AF: cmp     [r10+rcx*8+29h], sil
 * 00000001C002E9B4: jb      loc_1C001C631
 * 00000001C002E9BA: and     [rsp+58h+var_28], 0
 * 00000001C002E9C0: lea     rdx, [rsp+58h+arg_28]
 * 00000001C002E9C8: mov     rax, cs:pfnWppTraceMessage
 * 00000001C002E9CF: mov     r9d, ebp
 * 00000001C002E9D2: mov     r8, [rsp+58h+arg_20]
 * 00000001C002E9DA: mov     rcx, [r10+rcx*8+18h]
 * 00000001C002E9DF: mov     [rsp+58h+var_30], rbx
 * 00000001C002E9E4: mov     [rsp+58h+var_38], rdx
 * 00000001C002E9E9: mov     edx, 2Bh ; '+'
 * 00000001C002E9EE: call    cs:__guard_dispatch_icall_fptr
 * 00000001C002E9F4: nop
 * 00000001C002E9F5: jmp     loc_1C001C631
 */
