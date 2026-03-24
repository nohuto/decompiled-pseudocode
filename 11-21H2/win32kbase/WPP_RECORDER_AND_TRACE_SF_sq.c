/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_sq @ 0x1C00998A8
 * Callers:
 *     xxxInitProcessInfo @ 0x1C00C7AC8 (xxxInitProcessInfo.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_sq @ 0x1C00998A8
 * Reason: Hex-Rays returned no pseudocode for 0x1C00998A8
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00998A8: mov     rax, rsp
 * 00000001C00998AB: mov     [rax+8], rbx
 * 00000001C00998AF: mov     [rax+10h], rbp
 * 00000001C00998B3: mov     [rax+18h], rsi
 * 00000001C00998B7: mov     [rax+20h], rdi
 * 00000001C00998BB: push    r13
 * 00000001C00998BD: sub     rsp, 50h
 * 00000001C00998C1: mov     rbp, qword ptr cs:WPP_MAIN_CB.Queue
 * 00000001C00998C8: lea     r13, aNull; "NULL"
 * 00000001C00998CF: mov     rdi, [rsp+58h+arg_40]
 * 00000001C00998D7: or      rbx, 0FFFFFFFFFFFFFFFFh
 * 00000001C00998DB: mov     sil, r8b
 * 00000001C00998DE: mov     r11, rcx
 * 00000001C00998E1: lea     r8d, [rbx+0Fh]
 * 00000001C00998E5: test    dl, dl
 * 00000001C00998E7: jnz     loc_1C0129FAE
 * 00000001C00998ED: test    sil, sil
 * 00000001C00998F0: jz      short loc_1C0099959
 * 00000001C00998F2: test    rdi, rdi
 * 00000001C00998F5: jz      loc_1C012A027
 * 00000001C00998FB: inc     rbx
 * 00000001C00998FE: cmp     byte ptr [rdi+rbx], 0
 * 00000001C0099902: jnz     short loc_1C00998FB
 * 00000001C0099904: inc     rbx
 * 00000001C0099907: test    rdi, rdi
 * 00000001C009990A: lea     rax, [rsp+58h+arg_48]
 * 00000001C0099912: mov     edx, 4
 * 00000001C0099917: lea     r9, WPP_ed79ecbb4a1f3750d196ff03f8980747_Traceguids
 * 00000001C009991E: cmovz   rdi, r13
 * 00000001C0099922: mov     rcx, rbp
 * 00000001C0099925: and     [rsp+58h+var_10], 0
 * 00000001C009992B: mov     [rsp+58h+var_18], 8
 * 00000001C0099934: mov     [rsp+58h+var_20], rax
 * 00000001C0099939: mov     [rsp+58h+var_28], rbx
 * 00000001C009993E: mov     [rsp+58h+var_30], rdi
 * 00000001C0099943: mov     word ptr [rsp+58h+var_38], r8w
 * 00000001C0099949: lea     r8d, [rdx+9]
 * 00000001C009994D: call    cs:__imp_WppAutoLogTrace
 * 00000001C0099954: nop     dword ptr [rax+rax+00h]
 * 00000001C0099959: mov     rbx, [rsp+58h+arg_0]
 * 00000001C009995E: mov     rbp, [rsp+58h+arg_8]
 * 00000001C0099963: mov     rsi, [rsp+58h+arg_10]
 * 00000001C0099968: mov     rdi, [rsp+58h+arg_18]
 * 00000001C009996D: add     rsp, 50h
 * 00000001C0099971: pop     r13
 * 00000001C0099973: retn
 * 00000001C0129FAE: mov     r10, cs:pfnWppTraceMessage
 * 00000001C0129FB5: test    rdi, rdi
 * 00000001C0129FB8: jz      short loc_1C0129FCB
 * 00000001C0129FBA: mov     rax, rbx
 * 00000001C0129FBD: inc     rax
 * 00000001C0129FC0: cmp     byte ptr [rdi+rax], 0
 * 00000001C0129FC4: jnz     short loc_1C0129FBD
 * 00000001C0129FC6: inc     rax
 * 00000001C0129FC9: jmp     short loc_1C0129FD0
 * 00000001C0129FCB: mov     eax, 5
 * 00000001C0129FD0: lea     rdx, [rsp+58h+arg_48]
 * 00000001C0129FD8: movzx   r9d, r8w
 * 00000001C0129FDC: test    rdi, rdi
 * 00000001C0129FDF: lea     r8, WPP_ed79ecbb4a1f3750d196ff03f8980747_Traceguids
 * 00000001C0129FE6: mov     rcx, rdi
 * 00000001C0129FE9: cmovz   rcx, r13
 * 00000001C0129FED: and     [rsp+58h+var_18], 0
 * 00000001C0129FF3: mov     [rsp+58h+var_20], 8
 * 00000001C0129FFC: mov     [rsp+58h+var_28], rdx
 * 00000001C012A001: mov     edx, 2Bh ; '+'
 * 00000001C012A006: mov     [rsp+58h+var_30], rax
 * 00000001C012A00B: mov     rax, r10
 * 00000001C012A00E: mov     [rsp+58h+var_38], rcx
 * 00000001C012A013: mov     rcx, r11
 * 00000001C012A016: call    cs:__guard_dispatch_icall_fptr
 * 00000001C012A01C: mov     r8d, 0Eh
 * 00000001C012A022: jmp     loc_1C00998ED
 * 00000001C012A027: mov     ebx, 5
 * 00000001C012A02C: jmp     loc_1C0099907
 */
