/*
 * XREFs of WPP_RECORDER_SF_s @ 0x1C0037808
 * Callers:
 *     Controller_HwVerifierBreakIfEnabled @ 0x1C0033674 (Controller_HwVerifierBreakIfEnabled.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0020270 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_s @ 0x1C0037808
 * Reason: Hex-Rays returned no pseudocode for 0x1C0037808
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0037808: mov     rax, rsp
 * 00000001C003780B: mov     [rax+8], rbx
 * 00000001C003780F: mov     [rax+10h], rsi
 * 00000001C0037813: mov     [rax+18h], rdi
 * 00000001C0037817: mov     [rax+20h], r12
 * 00000001C003781B: push    r15
 * 00000001C003781D: sub     rsp, 40h
 * 00000001C0037821: mov     rdx, cs:WPP_GLOBAL_Control
 * 00000001C0037828: lea     r15, aNull; "NULL"
 * 00000001C003782F: mov     rdi, [rsp+48h+arg_28]
 * 00000001C0037834: or      rbx, 0FFFFFFFFFFFFFFFFh
 * 00000001C0037838: mov     rsi, rcx
 * 00000001C003783B: mov     r12d, 0E9h
 * 00000001C0037841: mov     eax, [rdx+2Ch]
 * 00000001C0037844: test    al, 8
 * 00000001C0037846: jz      short loc_1C00378AA
 * 00000001C0037848: cmp     byte ptr [rdx+29h], 2
 * 00000001C003784C: jb      short loc_1C00378AA
 * 00000001C003784E: test    rdi, rdi
 * 00000001C0037851: jz      short loc_1C0037864
 * 00000001C0037853: mov     rdx, rbx
 * 00000001C0037856: inc     rdx
 * 00000001C0037859: cmp     byte ptr [rdi+rdx], 0
 * 00000001C003785D: jnz     short loc_1C0037856
 * 00000001C003785F: inc     rdx
 * 00000001C0037862: jmp     short loc_1C0037869
 * 00000001C0037864: mov     edx, 5
 * 00000001C0037869: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0037870: lea     r8, WPP_ac07559723993fb37d1c33c002d3118e_Traceguids
 * 00000001C0037877: test    rdi, rdi
 * 00000001C003787A: mov     rcx, rdi
 * 00000001C003787D: mov     r9d, r12d
 * 00000001C0037880: cmovz   rcx, r15
 * 00000001C0037884: and     [rsp+48h+var_18], 0
 * 00000001C003788A: mov     [rsp+48h+var_20], rdx
 * 00000001C003788F: mov     edx, 2Bh ; '+'
 * 00000001C0037894: mov     [rsp+48h+var_28], rcx
 * 00000001C0037899: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C00378A0: mov     rcx, [rcx+18h]
 * 00000001C00378A4: call    cs:__guard_dispatch_icall_fptr
 * 00000001C00378AA: test    rdi, rdi
 * 00000001C00378AD: jz      short loc_1C00378BD
 * 00000001C00378AF: inc     rbx
 * 00000001C00378B2: cmp     byte ptr [rdi+rbx], 0
 * 00000001C00378B6: jnz     short loc_1C00378AF
 * 00000001C00378B8: inc     rbx
 * 00000001C00378BB: jmp     short loc_1C00378C2
 * 00000001C00378BD: mov     ebx, 5
 * 00000001C00378C2: test    rdi, rdi
 * 00000001C00378C5: lea     r9, WPP_ac07559723993fb37d1c33c002d3118e_Traceguids
 * 00000001C00378CC: mov     edx, 2
 * 00000001C00378D1: mov     rcx, rsi
 * 00000001C00378D4: cmovz   rdi, r15
 * 00000001C00378D8: and     [rsp+48h+var_10], 0
 * 00000001C00378DE: mov     [rsp+48h+var_18], rbx
 * 00000001C00378E3: mov     [rsp+48h+var_20], rdi
 * 00000001C00378E8: lea     r8d, [rdx+2]
 * 00000001C00378EC: mov     word ptr [rsp+48h+var_28], r12w
 * 00000001C00378F2: call    cs:__imp_WppAutoLogTrace
 * 00000001C00378F9: nop     dword ptr [rax+rax+00h]
 * 00000001C00378FE: mov     rbx, [rsp+48h+arg_0]
 * 00000001C0037903: mov     rsi, [rsp+48h+arg_8]
 * 00000001C0037908: mov     rdi, [rsp+48h+arg_10]
 * 00000001C003790D: mov     r12, [rsp+48h+arg_18]
 * 00000001C0037912: add     rsp, 40h
 * 00000001C0037916: pop     r15
 * 00000001C0037918: retn
 */
