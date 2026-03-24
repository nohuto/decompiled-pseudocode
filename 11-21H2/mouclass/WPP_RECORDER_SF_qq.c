/*
 * XREFs of WPP_RECORDER_SF_qq @ 0x1C00025C0
 * Callers:
 *     MouseClassCreate @ 0x1C00012F0 (MouseClassCreate.c)
 *     MouseClassRead @ 0x1C0001F40 (MouseClassRead.c)
 *     MouseClassPower @ 0x1C00020F0 (MouseClassPower.c)
 *     MouseClassReadCopyData @ 0x1C0004F58 (MouseClassReadCopyData.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0002F10 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qq @ 0x1C00025C0
 * Reason: Hex-Rays returned no pseudocode for 0x1C00025C0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00025C0: mov     [rsp+arg_0], rbx
 * 00000001C00025C5: mov     [rsp+arg_8], rbp
 * 00000001C00025CA: mov     [rsp+arg_10], rsi
 * 00000001C00025CF: mov     [rsp+arg_18], rdi
 * 00000001C00025D4: push    r14
 * 00000001C00025D6: sub     rsp, 50h
 * 00000001C00025DA: mov     ebx, r8d
 * 00000001C00025DD: mov     r14, rcx
 * 00000001C00025E0: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C00025E7: mov     edi, r8d
 * 00000001C00025EA: shr     rdi, 10h
 * 00000001C00025EE: lea     r11d, [rbx-1]
 * 00000001C00025F2: movzx   ebp, r9w
 * 00000001C00025F6: mov     r8d, r11d
 * 00000001C00025F9: movzx   esi, dl
 * 00000001C00025FC: shr     r8, 5
 * 00000001C0002600: and     r11d, 1Fh
 * 00000001C0002604: and     r8d, 7FFh
 * 00000001C000260B: lea     rax, [rdi+rdi*4]
 * 00000001C000260F: lea     r10, [r8+rax*4]
 * 00000001C0002613: mov     eax, [rcx+r10*4+2Ch]
 * 00000001C0002618: bt      eax, r11d
 * 00000001C000261C: jb      loc_1C00039DA
 * 00000001C0002622: mov     [rsp+58h+var_10], 0
 * 00000001C000262B: lea     rax, [rsp+58h+arg_30]
 * 00000001C0002633: mov     [rsp+58h+var_18], 8
 * 00000001C000263C: lea     r9, WPP_d07d70ae1de939905882a75eef030211_Traceguids
 * 00000001C0002643: mov     [rsp+58h+var_20], rax
 * 00000001C0002648: mov     r8d, ebx
 * 00000001C000264B: lea     rax, [rsp+58h+arg_28]
 * 00000001C0002653: mov     [rsp+58h+var_28], 8
 * 00000001C000265C: mov     [rsp+58h+var_30], rax
 * 00000001C0002661: mov     edx, esi
 * 00000001C0002663: mov     rcx, r14
 * 00000001C0002666: mov     word ptr [rsp+58h+var_38], bp
 * 00000001C000266B: call    cs:__imp_WppAutoLogTrace
 * 00000001C0002672: nop     dword ptr [rax+rax+00h]
 * 00000001C0002677: mov     rbx, [rsp+58h+arg_0]
 * 00000001C000267C: mov     rbp, [rsp+58h+arg_8]
 * 00000001C0002681: mov     rsi, [rsp+58h+arg_10]
 * 00000001C0002686: mov     rdi, [rsp+58h+arg_18]
 * 00000001C000268B: add     rsp, 50h
 * 00000001C000268F: pop     r14
 * 00000001C0002691: retn
 * 00000001C00039DA: lea     rax, [rdi+rdi*4]
 * 00000001C00039DE: shl     rax, 4
 * 00000001C00039E2: add     rcx, rax
 * 00000001C00039E5: cmp     [rcx+29h], sil
 * 00000001C00039E9: jb      loc_1C0002622
 * 00000001C00039EF: mov     rax, cs:pfnWppTraceMessage
 * 00000001C00039F6: lea     rdx, [rsp+58h+arg_30]
 * 00000001C00039FE: mov     rcx, [rcx+18h]
 * 00000001C0003A02: lea     r8, WPP_d07d70ae1de939905882a75eef030211_Traceguids
 * 00000001C0003A09: mov     [rsp+58h+var_18], 0
 * 00000001C0003A12: mov     r9d, ebp
 * 00000001C0003A15: mov     [rsp+58h+var_20], 8
 * 00000001C0003A1E: mov     [rsp+58h+var_28], rdx
 * 00000001C0003A23: lea     rdx, [rsp+58h+arg_28]
 * 00000001C0003A2B: mov     [rsp+58h+var_30], 8
 * 00000001C0003A34: mov     [rsp+58h+var_38], rdx
 * 00000001C0003A39: mov     edx, 2Bh ; '+'
 * 00000001C0003A3E: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0003A44: nop
 * 00000001C0003A45: jmp     loc_1C0002622
 */
