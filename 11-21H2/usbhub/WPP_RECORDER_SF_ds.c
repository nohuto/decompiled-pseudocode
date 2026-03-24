/*
 * XREFs of WPP_RECORDER_SF_ds @ 0x1C004ACC8
 * Callers:
 *     UsbhExceptionTrace @ 0x1C004A388 (UsbhExceptionTrace.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001F4F0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_ds @ 0x1C004ACC8
 * Reason: Hex-Rays returned no pseudocode for 0x1C004ACC8
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C004ACC8: mov     rax, rsp
 * 00000001C004ACCB: mov     [rax+8], rbx
 * 00000001C004ACCF: mov     [rax+10h], rsi
 * 00000001C004ACD3: mov     [rax+18h], rdi
 * 00000001C004ACD7: mov     [rax+20h], r12
 * 00000001C004ACDB: push    r13
 * 00000001C004ACDD: sub     rsp, 50h
 * 00000001C004ACE1: mov     rax, cs:WPP_GLOBAL_Control
 * 00000001C004ACE8: lea     r12, aNull; "NULL"
 * 00000001C004ACEF: mov     rdi, [rsp+58h+arg_30]
 * 00000001C004ACF7: or      rbx, 0FFFFFFFFFFFFFFFFh
 * 00000001C004ACFB: mov     rsi, rcx
 * 00000001C004ACFE: mov     edx, [rax+2Ch]
 * 00000001C004AD01: lea     r13d, [rbx+0Dh]
 * 00000001C004AD05: test    dl, 1
 * 00000001C004AD08: jz      short loc_1C004AD7D
 * 00000001C004AD0A: test    rdi, rdi
 * 00000001C004AD0D: jz      short loc_1C004AD20
 * 00000001C004AD0F: mov     rdx, rbx
 * 00000001C004AD12: inc     rdx
 * 00000001C004AD15: cmp     byte ptr [rdi+rdx], 0
 * 00000001C004AD19: jnz     short loc_1C004AD12
 * 00000001C004AD1B: inc     rdx
 * 00000001C004AD1E: jmp     short loc_1C004AD25
 * 00000001C004AD20: mov     edx, 5
 * 00000001C004AD25: mov     rax, cs:pfnWppTraceMessage
 * 00000001C004AD2C: lea     r8, WPP_5d29ce81e5593e4cedbd7d1112d44f7d_Traceguids
 * 00000001C004AD33: test    rdi, rdi
 * 00000001C004AD36: movzx   r9d, r13w
 * 00000001C004AD3A: mov     rcx, rdi
 * 00000001C004AD3D: cmovz   rcx, r12
 * 00000001C004AD41: and     [rsp+58h+var_18], 0
 * 00000001C004AD47: mov     [rsp+58h+var_20], rdx
 * 00000001C004AD4C: mov     edx, 2Bh ; '+'
 * 00000001C004AD51: mov     [rsp+58h+var_28], rcx
 * 00000001C004AD56: lea     rcx, [rsp+58h+arg_28]
 * 00000001C004AD5E: mov     [rsp+58h+var_30], 4
 * 00000001C004AD67: mov     [rsp+58h+var_38], rcx
 * 00000001C004AD6C: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C004AD73: mov     rcx, [rcx+18h]
 * 00000001C004AD77: call    cs:__guard_dispatch_icall_fptr
 * 00000001C004AD7D: test    rdi, rdi
 * 00000001C004AD80: jz      short loc_1C004AD90
 * 00000001C004AD82: inc     rbx
 * 00000001C004AD85: cmp     byte ptr [rdi+rbx], 0
 * 00000001C004AD89: jnz     short loc_1C004AD82
 * 00000001C004AD8B: inc     rbx
 * 00000001C004AD8E: jmp     short loc_1C004AD95
 * 00000001C004AD90: mov     ebx, 5
 * 00000001C004AD95: test    rdi, rdi
 * 00000001C004AD98: lea     rax, [rsp+58h+arg_28]
 * 00000001C004ADA0: lea     r9, WPP_5d29ce81e5593e4cedbd7d1112d44f7d_Traceguids
 * 00000001C004ADA7: mov     rcx, rsi
 * 00000001C004ADAA: cmovz   rdi, r12
 * 00000001C004ADAE: and     [rsp+58h+var_10], 0
 * 00000001C004ADB4: mov     [rsp+58h+var_18], rbx
 * 00000001C004ADB9: xor     edx, edx
 * 00000001C004ADBB: mov     [rsp+58h+var_20], rdi
 * 00000001C004ADC0: mov     [rsp+58h+var_28], 4
 * 00000001C004ADC9: mov     [rsp+58h+var_30], rax
 * 00000001C004ADCE: lea     r8d, [rdx+1]
 * 00000001C004ADD2: mov     word ptr [rsp+58h+var_38], r13w
 * 00000001C004ADD8: call    cs:__imp_WppAutoLogTrace
 * 00000001C004ADDF: nop     dword ptr [rax+rax+00h]
 * 00000001C004ADE4: mov     rbx, [rsp+58h+arg_0]
 * 00000001C004ADE9: mov     rsi, [rsp+58h+arg_8]
 * 00000001C004ADEE: mov     rdi, [rsp+58h+arg_10]
 * 00000001C004ADF3: mov     r12, [rsp+58h+arg_18]
 * 00000001C004ADF8: add     rsp, 50h
 * 00000001C004ADFC: pop     r13
 * 00000001C004ADFE: retn
 */
