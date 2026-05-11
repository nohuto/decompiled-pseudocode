/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_sd @ 0x1C000A650
 * Callers:
 *     USBHwLogStartFailure @ 0x1C003D448 (USBHwLogStartFailure.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001A000 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_sd @ 0x1C000A650
 * Reason: Hex-Rays returned no pseudocode for 0x1C000A650
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C000A650: mov     rax, rsp
 * 00000001C000A653: mov     [rax+8], rbx
 * 00000001C000A657: mov     [rax+10h], rbp
 * 00000001C000A65B: mov     [rax+18h], rsi
 * 00000001C000A65F: mov     [rax+20h], rdi
 * 00000001C000A663: push    r13
 * 00000001C000A665: sub     rsp, 50h
 * 00000001C000A669: mov     rdi, [rsp+58h+arg_40]
 * 00000001C000A671: lea     r13, aNull; "NULL"
 * 00000001C000A678: or      rbx, 0FFFFFFFFFFFFFFFFh
 * 00000001C000A67C: mov     rbp, r9
 * 00000001C000A67F: mov     sil, r8b
 * 00000001C000A682: mov     r10, rcx
 * 00000001C000A685: lea     r9d, [rbx+2Dh]
 * 00000001C000A689: test    dl, dl
 * 00000001C000A68B: jz      short loc_1C000A6FA
 * 00000001C000A68D: test    rdi, rdi
 * 00000001C000A690: jz      short loc_1C000A6A3
 * 00000001C000A692: mov     rdx, rbx
 * 00000001C000A695: inc     rdx
 * 00000001C000A698: cmp     byte ptr [rdi+rdx], 0
 * 00000001C000A69C: jnz     short loc_1C000A695
 * 00000001C000A69E: inc     rdx
 * 00000001C000A6A1: jmp     short loc_1C000A6A8
 * 00000001C000A6A3: mov     edx, 5
 * 00000001C000A6A8: mov     rax, cs:pfnWppTraceMessage
 * 00000001C000A6AF: lea     r8, [rsp+58h+arg_48]
 * 00000001C000A6B7: test    rdi, rdi
 * 00000001C000A6BA: mov     rcx, rdi
 * 00000001C000A6BD: cmovz   rcx, r13
 * 00000001C000A6C1: and     [rsp+58h+var_18], 0
 * 00000001C000A6C7: mov     [rsp+58h+var_20], 4
 * 00000001C000A6D0: mov     [rsp+58h+var_28], r8
 * 00000001C000A6D5: lea     r8, WPP_7d0eb062dabd3bbfcf0e7e4187f7f511_Traceguids
 * 00000001C000A6DC: mov     [rsp+58h+var_30], rdx
 * 00000001C000A6E1: mov     edx, 2Bh ; '+'
 * 00000001C000A6E6: mov     [rsp+58h+var_38], rcx
 * 00000001C000A6EB: mov     rcx, r10
 * 00000001C000A6EE: call    cs:__guard_dispatch_icall_fptr
 * 00000001C000A6F4: mov     r9d, 2Ch ; ','
 * 00000001C000A6FA: test    sil, sil
 * 00000001C000A6FD: jz      short loc_1C000A766
 * 00000001C000A6FF: test    rdi, rdi
 * 00000001C000A702: jz      short loc_1C000A712
 * 00000001C000A704: inc     rbx
 * 00000001C000A707: cmp     byte ptr [rdi+rbx], 0
 * 00000001C000A70B: jnz     short loc_1C000A704
 * 00000001C000A70D: inc     rbx
 * 00000001C000A710: jmp     short loc_1C000A717
 * 00000001C000A712: mov     ebx, 5
 * 00000001C000A717: test    rdi, rdi
 * 00000001C000A71A: lea     rax, [rsp+58h+arg_48]
 * 00000001C000A722: mov     rcx, rbp
 * 00000001C000A725: cmovz   rdi, r13
 * 00000001C000A729: and     [rsp+58h+var_10], 0
 * 00000001C000A72F: mov     [rsp+58h+var_18], 4
 * 00000001C000A738: xor     edx, edx
 * 00000001C000A73A: mov     [rsp+58h+var_20], rax
 * 00000001C000A73F: mov     [rsp+58h+var_28], rbx
 * 00000001C000A744: mov     [rsp+58h+var_30], rdi
 * 00000001C000A749: mov     word ptr [rsp+58h+var_38], r9w
 * 00000001C000A74F: lea     r8d, [rdx+8]
 * 00000001C000A753: lea     r9, WPP_7d0eb062dabd3bbfcf0e7e4187f7f511_Traceguids
 * 00000001C000A75A: call    cs:__imp_WppAutoLogTrace
 * 00000001C000A761: nop     dword ptr [rax+rax+00h]
 * 00000001C000A766: mov     rbx, [rsp+58h+arg_0]
 * 00000001C000A76B: mov     rbp, [rsp+58h+arg_8]
 * 00000001C000A770: mov     rsi, [rsp+58h+arg_10]
 * 00000001C000A775: mov     rdi, [rsp+58h+arg_18]
 * 00000001C000A77A: add     rsp, 50h
 * 00000001C000A77E: pop     r13
 * 00000001C000A780: retn
 */
