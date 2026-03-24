/*
 * XREFs of WPP_RECORDER_SF_qq @ 0x1C00063F4
 * Callers:
 *     MouseClassPower @ 0x1C00013A0 (MouseClassPower.c)
 *     MouseClassRead @ 0x1C0001850 (MouseClassRead.c)
 *     MouseClassCreate @ 0x1C0001C70 (MouseClassCreate.c)
 *     MouseClassReadCopyData @ 0x1C0004D78 (MouseClassReadCopyData.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0002B60 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qq @ 0x1C00063F4
 * Reason: Hex-Rays returned no pseudocode for 0x1C00063F4
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00063F4: mov     [rsp+arg_0], rbx
 * 00000001C00063F9: mov     [rsp+arg_8], rbp
 * 00000001C00063FE: mov     [rsp+arg_10], rsi
 * 00000001C0006403: push    rdi
 * 00000001C0006404: push    r14
 * 00000001C0006406: push    r15
 * 00000001C0006408: sub     rsp, 50h
 * 00000001C000640C: mov     r14d, r8d
 * 00000001C000640F: mov     r15, rcx
 * 00000001C0006412: mov     edi, r8d
 * 00000001C0006415: shr     rdi, 10h
 * 00000001C0006419: movzx   esi, dl
 * 00000001C000641C: lea     ebx, [r14-1]
 * 00000001C0006420: movzx   ebp, r9w
 * 00000001C0006424: mov     r10d, ebx
 * 00000001C0006427: and     ebx, 1Fh
 * 00000001C000642A: shr     r10, 5
 * 00000001C000642E: lea     rax, [rdi+rdi*4]
 * 00000001C0006432: and     r10d, 7FFh
 * 00000001C0006439: mov     edx, ebx
 * 00000001C000643B: mov     ebx, 8
 * 00000001C0006440: lea     r11, [r10+rax*4]
 * 00000001C0006444: mov     r10, cs:WPP_GLOBAL_Control
 * 00000001C000644B: mov     eax, [r10+r11*4+2Ch]
 * 00000001C0006450: bt      eax, edx
 * 00000001C0006453: jnb     short loc_1C00064AC
 * 00000001C0006455: lea     rcx, [rdi+rdi*4]
 * 00000001C0006459: add     rcx, rcx
 * 00000001C000645C: cmp     [r10+rcx*8+29h], sil
 * 00000001C0006461: jb      short loc_1C00064AC
 * 00000001C0006463: and     [rsp+68h+var_28], 0
 * 00000001C0006469: lea     rdx, [rsp+68h+arg_30]
 * 00000001C0006471: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0006478: lea     r8, WPP_d07d70ae1de939905882a75eef030211_Traceguids
 * 00000001C000647F: mov     rcx, [r10+rcx*8+18h]
 * 00000001C0006484: mov     r9d, ebp
 * 00000001C0006487: mov     [rsp+68h+var_30], rbx
 * 00000001C000648C: mov     [rsp+68h+var_38], rdx
 * 00000001C0006491: lea     rdx, [rsp+68h+arg_28]
 * 00000001C0006499: mov     [rsp+68h+var_40], rbx
 * 00000001C000649E: mov     [rsp+68h+var_48], rdx
 * 00000001C00064A3: lea     edx, [rbx+23h]
 * 00000001C00064A6: call    cs:__guard_dispatch_icall_fptr
 * 00000001C00064AC: and     [rsp+68h+var_20], 0
 * 00000001C00064B2: lea     rax, [rsp+68h+arg_30]
 * 00000001C00064BA: mov     [rsp+68h+var_28], rbx
 * 00000001C00064BF: lea     r9, WPP_d07d70ae1de939905882a75eef030211_Traceguids
 * 00000001C00064C6: mov     [rsp+68h+var_30], rax
 * 00000001C00064CB: mov     r8d, r14d
 * 00000001C00064CE: lea     rax, [rsp+68h+arg_28]
 * 00000001C00064D6: mov     [rsp+68h+var_38], rbx
 * 00000001C00064DB: mov     [rsp+68h+var_40], rax
 * 00000001C00064E0: mov     edx, esi
 * 00000001C00064E2: mov     rcx, r15
 * 00000001C00064E5: mov     word ptr [rsp+68h+var_48], bp
 * 00000001C00064EA: call    cs:__imp_WppAutoLogTrace
 * 00000001C00064F1: nop     dword ptr [rax+rax+00h]
 * 00000001C00064F6: lea     r11, [rsp+68h+var_18]
 * 00000001C00064FB: mov     rbx, [r11+20h]
 * 00000001C00064FF: mov     rbp, [r11+28h]
 * 00000001C0006503: mov     rsi, [r11+30h]
 * 00000001C0006507: mov     rsp, r11
 * 00000001C000650A: pop     r15
 * 00000001C000650C: pop     r14
 * 00000001C000650E: pop     rdi
 * 00000001C000650F: retn
 */
