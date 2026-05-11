/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF__guid_d @ 0x1C0005614
 * Callers:
 *     PropertyGetBoolean @ 0x1C0039D40 (PropertyGetBoolean.c)
 *     PropertyGetDbLevel @ 0x1C0039FB0 (PropertyGetDbLevel.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001A000 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF__guid_d @ 0x1C0005614
 * Reason: Hex-Rays returned no pseudocode for 0x1C0005614
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0005614: mov     [rsp+arg_0], rbx
 * 00000001C0005619: mov     [rsp+arg_8], rbp
 * 00000001C000561E: mov     [rsp+arg_10], rsi
 * 00000001C0005623: push    rdi
 * 00000001C0005624: sub     rsp, 50h
 * 00000001C0005628: mov     rbx, [rsp+58h+arg_40]
 * 00000001C0005630: mov     rbp, r9
 * 00000001C0005633: movzx   edi, [rsp+58h+arg_30]
 * 00000001C000563B: mov     sil, r8b
 * 00000001C000563E: test    dl, dl
 * 00000001C0005640: jnz     short loc_1C00056A8
 * 00000001C0005642: test    sil, sil
 * 00000001C0005645: jz      short loc_1C0005692
 * 00000001C0005647: and     [rsp+58h+var_10], 0
 * 00000001C000564D: lea     rax, [rsp+58h+arg_48]
 * 00000001C0005655: mov     [rsp+58h+var_18], 4
 * 00000001C000565E: lea     r9, WPP_b83ba1dee83736acd1729b525419a2d7_Traceguids
 * 00000001C0005665: mov     [rsp+58h+var_20], rax
 * 00000001C000566A: xor     edx, edx
 * 00000001C000566C: mov     [rsp+58h+var_28], 10h
 * 00000001C0005675: mov     rcx, rbp
 * 00000001C0005678: mov     [rsp+58h+var_30], rbx
 * 00000001C000567D: mov     word ptr [rsp+58h+var_38], di
 * 00000001C0005682: lea     r8d, [rdx+0Ah]
 * 00000001C0005686: call    cs:__imp_WppAutoLogTrace
 * 00000001C000568D: nop     dword ptr [rax+rax+00h]
 * 00000001C0005692: mov     rbx, [rsp+58h+arg_0]
 * 00000001C0005697: mov     rbp, [rsp+58h+arg_8]
 * 00000001C000569C: mov     rsi, [rsp+58h+arg_10]
 * 00000001C00056A1: add     rsp, 50h
 * 00000001C00056A5: pop     rdi
 * 00000001C00056A6: retn
 * 00000001C00056A8: and     [rsp+58h+var_18], 0
 * 00000001C00056AE: lea     rdx, [rsp+58h+arg_48]
 * 00000001C00056B6: mov     rax, cs:pfnWppTraceMessage
 * 00000001C00056BD: lea     r8, WPP_b83ba1dee83736acd1729b525419a2d7_Traceguids
 * 00000001C00056C4: mov     [rsp+58h+var_20], 4
 * 00000001C00056CD: mov     r9d, edi
 * 00000001C00056D0: mov     [rsp+58h+var_28], rdx
 * 00000001C00056D5: mov     edx, 2Bh ; '+'
 * 00000001C00056DA: mov     [rsp+58h+var_30], 10h
 * 00000001C00056E3: mov     [rsp+58h+var_38], rbx
 * 00000001C00056E8: call    cs:__guard_dispatch_icall_fptr
 * 00000001C00056EE: jmp     loc_1C0005642
 */
