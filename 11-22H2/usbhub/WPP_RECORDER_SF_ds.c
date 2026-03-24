/*
 * XREFs of WPP_RECORDER_SF_ds @ 0x1C004B5A8
 * Callers:
 *     UsbhExceptionTrace @ 0x1C004AC64 (UsbhExceptionTrace.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0023500 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_ds @ 0x1C004B5A8
 * Reason: Hex-Rays returned no pseudocode for 0x1C004B5A8
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C004B5A8: mov     rax, rsp
 * 00000001C004B5AB: mov     [rax+8], rbx
 * 00000001C004B5AF: mov     [rax+10h], rsi
 * 00000001C004B5B3: mov     [rax+18h], rdi
 * 00000001C004B5B7: mov     [rax+20h], r12
 * 00000001C004B5BB: push    r13
 * 00000001C004B5BD: sub     rsp, 50h
 * 00000001C004B5C1: mov     rax, cs:WPP_GLOBAL_Control
 * 00000001C004B5C8: lea     r12, aNull; "NULL"
 * 00000001C004B5CF: mov     rdi, [rsp+58h+arg_30]
 * 00000001C004B5D7: or      rbx, 0FFFFFFFFFFFFFFFFh
 * 00000001C004B5DB: mov     rsi, rcx
 * 00000001C004B5DE: mov     edx, [rax+2Ch]
 * 00000001C004B5E1: lea     r13d, [rbx+0Dh]
 * 00000001C004B5E5: test    dl, 1
 * 00000001C004B5E8: jz      short loc_1C004B65C
 * 00000001C004B5EA: test    rdi, rdi
 * 00000001C004B5ED: jz      short loc_1C004B600
 * 00000001C004B5EF: mov     rdx, rbx
 * 00000001C004B5F2: inc     rdx
 * 00000001C004B5F5: cmp     byte ptr [rdi+rdx], 0
 * 00000001C004B5F9: jnz     short loc_1C004B5F2
 * 00000001C004B5FB: inc     rdx
 * 00000001C004B5FE: jmp     short loc_1C004B605
 * 00000001C004B600: mov     edx, 5
 * 00000001C004B605: mov     rax, cs:pfnWppTraceMessage
 * 00000001C004B60C: lea     r8, WPP_5d29ce81e5593e4cedbd7d1112d44f7d_Traceguids
 * 00000001C004B613: test    rdi, rdi
 * 00000001C004B616: mov     rcx, rdi
 * 00000001C004B619: mov     r9d, r13d
 * 00000001C004B61C: cmovz   rcx, r12
 * 00000001C004B620: and     [rsp+58h+var_18], 0
 * 00000001C004B626: mov     [rsp+58h+var_20], rdx
 * 00000001C004B62B: mov     edx, 2Bh ; '+'
 * 00000001C004B630: mov     [rsp+58h+var_28], rcx
 * 00000001C004B635: lea     rcx, [rsp+58h+arg_28]
 * 00000001C004B63D: mov     [rsp+58h+var_30], 4
 * 00000001C004B646: mov     [rsp+58h+var_38], rcx
 * 00000001C004B64B: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C004B652: mov     rcx, [rcx+18h]
 * 00000001C004B656: call    cs:__guard_dispatch_icall_fptr
 * 00000001C004B65C: test    rdi, rdi
 * 00000001C004B65F: jz      short loc_1C004B66F
 * 00000001C004B661: inc     rbx
 * 00000001C004B664: cmp     byte ptr [rdi+rbx], 0
 * 00000001C004B668: jnz     short loc_1C004B661
 * 00000001C004B66A: inc     rbx
 * 00000001C004B66D: jmp     short loc_1C004B674
 * 00000001C004B66F: mov     ebx, 5
 * 00000001C004B674: test    rdi, rdi
 * 00000001C004B677: lea     rax, [rsp+58h+arg_28]
 * 00000001C004B67F: lea     r9, WPP_5d29ce81e5593e4cedbd7d1112d44f7d_Traceguids
 * 00000001C004B686: mov     rcx, rsi
 * 00000001C004B689: cmovz   rdi, r12
 * 00000001C004B68D: and     [rsp+58h+var_10], 0
 * 00000001C004B693: mov     [rsp+58h+var_18], rbx
 * 00000001C004B698: xor     edx, edx
 * 00000001C004B69A: mov     [rsp+58h+var_20], rdi
 * 00000001C004B69F: mov     [rsp+58h+var_28], 4
 * 00000001C004B6A8: mov     [rsp+58h+var_30], rax
 * 00000001C004B6AD: lea     r8d, [rdx+1]
 * 00000001C004B6B1: mov     word ptr [rsp+58h+var_38], r13w
 * 00000001C004B6B7: call    cs:__imp_WppAutoLogTrace
 * 00000001C004B6BE: nop     dword ptr [rax+rax+00h]
 * 00000001C004B6C3: mov     rbx, [rsp+58h+arg_0]
 * 00000001C004B6C8: mov     rsi, [rsp+58h+arg_8]
 * 00000001C004B6CD: mov     rdi, [rsp+58h+arg_10]
 * 00000001C004B6D2: mov     r12, [rsp+58h+arg_18]
 * 00000001C004B6D7: add     rsp, 50h
 * 00000001C004B6DB: pop     r13
 * 00000001C004B6DD: retn
 */
