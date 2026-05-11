/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_s @ 0x1C0012BA8
 * Callers:
 *     ?GetDeviceContainerId@CSidebandDevice@@AEAAJPEAU_GUID@@@Z @ 0x1C000D220 (-GetDeviceContainerId@CSidebandDevice@@AEAAJPEAU_GUID@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001A000 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_s @ 0x1C0012BA8
 * Reason: Hex-Rays returned no pseudocode for 0x1C0012BA8
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0012BA8: mov     [rsp+arg_0], rbx
 * 00000001C0012BAD: mov     [rsp+arg_8], rbp
 * 00000001C0012BB2: mov     [rsp+arg_10], rsi
 * 00000001C0012BB7: push    rdi
 * 00000001C0012BB8: push    r12
 * 00000001C0012BBA: push    r13
 * 00000001C0012BBC: sub     rsp, 40h
 * 00000001C0012BC0: mov     rdi, [rsp+58h+arg_40]
 * 00000001C0012BC8: lea     r12, aNull; "NULL"
 * 00000001C0012BCF: or      rbx, 0FFFFFFFFFFFFFFFFh
 * 00000001C0012BD3: mov     rbp, r9
 * 00000001C0012BD6: mov     sil, r8b
 * 00000001C0012BD9: mov     r11, rcx
 * 00000001C0012BDC: lea     r13d, [rbx+21h]
 * 00000001C0012BE0: test    dl, dl
 * 00000001C0012BE2: jz      short loc_1C0012C3B
 * 00000001C0012BE4: mov     r10, cs:pfnWppTraceMessage
 * 00000001C0012BEB: test    rdi, rdi
 * 00000001C0012BEE: jz      short loc_1C0012C01
 * 00000001C0012BF0: mov     rax, rbx
 * 00000001C0012BF3: inc     rax
 * 00000001C0012BF6: cmp     byte ptr [rdi+rax], 0
 * 00000001C0012BFA: jnz     short loc_1C0012BF3
 * 00000001C0012BFC: inc     rax
 * 00000001C0012BFF: jmp     short loc_1C0012C06
 * 00000001C0012C01: mov     eax, 5
 * 00000001C0012C06: test    rdi, rdi
 * 00000001C0012C09: lea     r8, WPP_5cf7f5f4678035f653938f327e8524e9_Traceguids
 * 00000001C0012C10: mov     rcx, rdi
 * 00000001C0012C13: mov     r9d, r13d
 * 00000001C0012C16: cmovz   rcx, r12
 * 00000001C0012C1A: mov     edx, 2Bh ; '+'
 * 00000001C0012C1F: and     [rsp+58h+var_28], 0
 * 00000001C0012C25: mov     [rsp+58h+var_30], rax
 * 00000001C0012C2A: mov     rax, r10
 * 00000001C0012C2D: mov     [rsp+58h+var_38], rcx
 * 00000001C0012C32: mov     rcx, r11
 * 00000001C0012C35: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0012C3B: test    sil, sil
 * 00000001C0012C3E: jz      short loc_1C0012C91
 * 00000001C0012C40: test    rdi, rdi
 * 00000001C0012C43: jz      short loc_1C0012C53
 * 00000001C0012C45: inc     rbx
 * 00000001C0012C48: cmp     byte ptr [rdi+rbx], 0
 * 00000001C0012C4C: jnz     short loc_1C0012C45
 * 00000001C0012C4E: inc     rbx
 * 00000001C0012C51: jmp     short loc_1C0012C58
 * 00000001C0012C53: mov     ebx, 5
 * 00000001C0012C58: test    rdi, rdi
 * 00000001C0012C5B: lea     r9, WPP_5cf7f5f4678035f653938f327e8524e9_Traceguids
 * 00000001C0012C62: mov     rcx, rbp
 * 00000001C0012C65: cmovz   rdi, r12
 * 00000001C0012C69: and     [rsp+58h+var_20], 0
 * 00000001C0012C6F: xor     edx, edx
 * 00000001C0012C71: mov     [rsp+58h+var_28], rbx
 * 00000001C0012C76: mov     [rsp+58h+var_30], rdi
 * 00000001C0012C7B: mov     word ptr [rsp+58h+var_38], r13w
 * 00000001C0012C81: lea     r8d, [rdx+9]
 * 00000001C0012C85: call    cs:__imp_WppAutoLogTrace
 * 00000001C0012C8C: nop     dword ptr [rax+rax+00h]
 * 00000001C0012C91: mov     rbx, [rsp+58h+arg_0]
 * 00000001C0012C96: mov     rbp, [rsp+58h+arg_8]
 * 00000001C0012C9B: mov     rsi, [rsp+58h+arg_10]
 * 00000001C0012CA0: add     rsp, 40h
 * 00000001C0012CA4: pop     r13
 * 00000001C0012CA6: pop     r12
 * 00000001C0012CA8: pop     rdi
 * 00000001C0012CA9: retn
 */
