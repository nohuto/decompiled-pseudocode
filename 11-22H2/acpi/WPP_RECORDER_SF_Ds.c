/*
 * XREFs of WPP_RECORDER_SF_Ds @ 0x1C004E750
 * Callers:
 *     LogError @ 0x1C004E244 (LogError.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0001DE0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_Ds @ 0x1C004E750
 * Reason: Hex-Rays returned no pseudocode for 0x1C004E750
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C004E750: mov     rax, rsp
 * 00000001C004E753: mov     [rax+8], rbx
 * 00000001C004E757: mov     [rax+10h], rsi
 * 00000001C004E75B: mov     [rax+18h], rdi
 * 00000001C004E75F: mov     [rax+20h], r12
 * 00000001C004E763: push    r13
 * 00000001C004E765: sub     rsp, 50h
 * 00000001C004E769: mov     rdx, cs:WPP_GLOBAL_Control
 * 00000001C004E770: lea     r12, aNull; "NULL"
 * 00000001C004E777: mov     rdi, [rsp+58h+arg_30]
 * 00000001C004E77F: or      rbx, 0FFFFFFFFFFFFFFFFh
 * 00000001C004E783: mov     rsi, rcx
 * 00000001C004E786: test    dword ptr [rdx+2Ch], 100000h
 * 00000001C004E78D: lea     r13d, [rbx+0Bh]
 * 00000001C004E791: jz      short loc_1C004E80B
 * 00000001C004E793: cmp     byte ptr [rdx+29h], 2
 * 00000001C004E797: jb      short loc_1C004E80B
 * 00000001C004E799: test    rdi, rdi
 * 00000001C004E79C: jz      short loc_1C004E7AF
 * 00000001C004E79E: mov     rdx, rbx
 * 00000001C004E7A1: inc     rdx
 * 00000001C004E7A4: cmp     byte ptr [rdi+rdx], 0
 * 00000001C004E7A8: jnz     short loc_1C004E7A1
 * 00000001C004E7AA: inc     rdx
 * 00000001C004E7AD: jmp     short loc_1C004E7B4
 * 00000001C004E7AF: mov     edx, 5
 * 00000001C004E7B4: mov     rax, cs:pfnWppTraceMessage
 * 00000001C004E7BB: lea     r8, WPP_3f854a48a7fd3e8a088f2c9698da0c76_Traceguids
 * 00000001C004E7C2: test    rdi, rdi
 * 00000001C004E7C5: mov     rcx, rdi
 * 00000001C004E7C8: mov     r9d, r13d
 * 00000001C004E7CB: cmovz   rcx, r12
 * 00000001C004E7CF: and     [rsp+58h+var_18], 0
 * 00000001C004E7D5: mov     [rsp+58h+var_20], rdx
 * 00000001C004E7DA: mov     edx, 2Bh ; '+'
 * 00000001C004E7DF: mov     [rsp+58h+var_28], rcx
 * 00000001C004E7E4: lea     rcx, [rsp+58h+arg_28]
 * 00000001C004E7EC: mov     [rsp+58h+var_30], 4
 * 00000001C004E7F5: mov     [rsp+58h+var_38], rcx
 * 00000001C004E7FA: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C004E801: mov     rcx, [rcx+18h]
 * 00000001C004E805: call    cs:__guard_dispatch_icall_fptr
 * 00000001C004E80B: test    rdi, rdi
 * 00000001C004E80E: jz      short loc_1C004E81E
 * 00000001C004E810: inc     rbx
 * 00000001C004E813: cmp     byte ptr [rdi+rbx], 0
 * 00000001C004E817: jnz     short loc_1C004E810
 * 00000001C004E819: inc     rbx
 * 00000001C004E81C: jmp     short loc_1C004E823
 * 00000001C004E81E: mov     ebx, 5
 * 00000001C004E823: test    rdi, rdi
 * 00000001C004E826: lea     rax, [rsp+58h+arg_28]
 * 00000001C004E82E: mov     edx, 2
 * 00000001C004E833: lea     r9, WPP_3f854a48a7fd3e8a088f2c9698da0c76_Traceguids
 * 00000001C004E83A: cmovz   rdi, r12
 * 00000001C004E83E: mov     rcx, rsi
 * 00000001C004E841: and     [rsp+58h+var_10], 0
 * 00000001C004E847: mov     [rsp+58h+var_18], rbx
 * 00000001C004E84C: mov     [rsp+58h+var_20], rdi
 * 00000001C004E851: lea     r8d, [rdx+13h]
 * 00000001C004E855: mov     [rsp+58h+var_28], 4
 * 00000001C004E85E: mov     [rsp+58h+var_30], rax
 * 00000001C004E863: mov     word ptr [rsp+58h+var_38], r13w
 * 00000001C004E869: call    cs:__imp_WppAutoLogTrace
 * 00000001C004E870: nop     dword ptr [rax+rax+00h]
 * 00000001C004E875: mov     rbx, [rsp+58h+arg_0]
 * 00000001C004E87A: mov     rsi, [rsp+58h+arg_8]
 * 00000001C004E87F: mov     rdi, [rsp+58h+arg_10]
 * 00000001C004E884: mov     r12, [rsp+58h+arg_18]
 * 00000001C004E889: add     rsp, 50h
 * 00000001C004E88D: pop     r13
 * 00000001C004E88F: retn
 */
