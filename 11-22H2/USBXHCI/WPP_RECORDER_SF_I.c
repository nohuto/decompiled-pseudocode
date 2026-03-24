/*
 * XREFs of WPP_RECORDER_SF_i @ 0x1C001C61C
 * Callers:
 *     Interrupter_DeferredWorkProcessor @ 0x1C0008C10 (Interrupter_DeferredWorkProcessor.c)
 *     Interrupter_UpdateERDP @ 0x1C0014AF0 (Interrupter_UpdateERDP.c)
 *     Interrupter_DeInitializeAfterOffload @ 0x1C003DBEC (Interrupter_DeInitializeAfterOffload.c)
 *     Controller_PopulateHardwareVerifierFlags @ 0x1C0073D7C (Controller_PopulateHardwareVerifierFlags.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0020270 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_i @ 0x1C001C61C
 * Reason: Hex-Rays returned no pseudocode for 0x1C001C61C
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C001C61C: mov     [rsp+arg_0], rbx
 * 00000001C001C621: mov     [rsp+arg_8], rbp
 * 00000001C001C626: mov     [rsp+arg_10], rsi
 * 00000001C001C62B: push    rdi
 * 00000001C001C62C: push    r14
 * 00000001C001C62E: push    r15
 * 00000001C001C630: sub     rsp, 40h
 * 00000001C001C634: mov     r14d, r8d
 * 00000001C001C637: mov     r15, rcx
 * 00000001C001C63A: mov     edi, r8d
 * 00000001C001C63D: shr     rdi, 10h
 * 00000001C001C641: movzx   esi, dl
 * 00000001C001C644: lea     ebx, [r14-1]
 * 00000001C001C648: movzx   ebp, r9w
 * 00000001C001C64C: mov     r10d, ebx
 * 00000001C001C64F: and     ebx, 1Fh
 * 00000001C001C652: shr     r10, 5
 * 00000001C001C656: lea     rax, [rdi+rdi*4]
 * 00000001C001C65A: and     r10d, 7FFh
 * 00000001C001C661: mov     edx, ebx
 * 00000001C001C663: mov     ebx, 8
 * 00000001C001C668: lea     r11, [r10+rax*4]
 * 00000001C001C66C: mov     r10, cs:WPP_GLOBAL_Control
 * 00000001C001C673: mov     eax, [r10+r11*4+2Ch]
 * 00000001C001C678: bt      eax, edx
 * 00000001C001C67B: jb      loc_1C002E868
 * 00000001C001C681: and     [rsp+58h+var_20], 0
 * 00000001C001C687: lea     rax, [rsp+58h+arg_28]
 * 00000001C001C68F: mov     r9, [rsp+58h+arg_20]
 * 00000001C001C697: mov     r8d, r14d
 * 00000001C001C69A: mov     [rsp+58h+var_28], rbx
 * 00000001C001C69F: mov     edx, esi
 * 00000001C001C6A1: mov     [rsp+58h+var_30], rax
 * 00000001C001C6A6: mov     rcx, r15
 * 00000001C001C6A9: mov     word ptr [rsp+58h+var_38], bp
 * 00000001C001C6AE: call    cs:__imp_WppAutoLogTrace
 * 00000001C001C6B5: nop     dword ptr [rax+rax+00h]
 * 00000001C001C6BA: mov     rbx, [rsp+58h+arg_0]
 * 00000001C001C6BF: mov     rbp, [rsp+58h+arg_8]
 * 00000001C001C6C4: mov     rsi, [rsp+58h+arg_10]
 * 00000001C001C6C9: add     rsp, 40h
 * 00000001C001C6CD: pop     r15
 * 00000001C001C6CF: pop     r14
 * 00000001C001C6D1: pop     rdi
 * 00000001C001C6D2: retn
 * 00000001C002E868: lea     rcx, [rdi+rdi*4]
 * 00000001C002E86C: add     rcx, rcx
 * 00000001C002E86F: cmp     [r10+rcx*8+29h], sil
 * 00000001C002E874: jb      loc_1C001C681
 * 00000001C002E87A: and     [rsp+58h+var_28], 0
 * 00000001C002E880: lea     rdx, [rsp+58h+arg_28]
 * 00000001C002E888: mov     rax, cs:pfnWppTraceMessage
 * 00000001C002E88F: mov     r9d, ebp
 * 00000001C002E892: mov     r8, [rsp+58h+arg_20]
 * 00000001C002E89A: mov     rcx, [r10+rcx*8+18h]
 * 00000001C002E89F: mov     [rsp+58h+var_30], rbx
 * 00000001C002E8A4: mov     [rsp+58h+var_38], rdx
 * 00000001C002E8A9: mov     edx, 2Bh ; '+'
 * 00000001C002E8AE: call    cs:__guard_dispatch_icall_fptr
 * 00000001C002E8B4: nop
 * 00000001C002E8B5: jmp     loc_1C001C681
 */
