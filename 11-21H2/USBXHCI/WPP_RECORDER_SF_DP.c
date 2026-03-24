/*
 * XREFs of WPP_RECORDER_SF_DP @ 0x1C0050584
 * Callers:
 *     SecureChannel_SendRequestSynchronously @ 0x1C0050250 (SecureChannel_SendRequestSynchronously.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00199B0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_DP @ 0x1C0050584
 * Reason: Hex-Rays returned no pseudocode for 0x1C0050584
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0050584: mov     r11, rsp
 * 00000001C0050587: mov     [r11+8], rbx
 * 00000001C005058B: push    rbp
 * 00000001C005058C: sub     rsp, 50h
 * 00000001C0050590: mov     rbx, rcx
 * 00000001C0050593: mov     ebp, 0Fh
 * 00000001C0050598: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C005059F: test    dword ptr [rcx+2Ch], 40000h
 * 00000001C00505A6: jz      short loc_1C00505F2
 * 00000001C00505A8: cmp     byte ptr [rcx+29h], 2
 * 00000001C00505AC: jb      short loc_1C00505F2
 * 00000001C00505AE: and     qword ptr [r11-18h], 0
 * 00000001C00505B3: lea     rdx, [r11+38h]
 * 00000001C00505B7: mov     rax, cs:pfnWppTraceMessage
 * 00000001C00505BE: lea     r8, WPP_6c69e57299f2371bca16af19cce5473c_Traceguids
 * 00000001C00505C5: mov     rcx, [rcx+18h]
 * 00000001C00505C9: mov     qword ptr [r11-20h], 8
 * 00000001C00505D1: mov     [r11-28h], rdx
 * 00000001C00505D5: lea     rdx, [r11+30h]
 * 00000001C00505D9: mov     qword ptr [r11-30h], 4
 * 00000001C00505E1: mov     [r11-38h], rdx
 * 00000001C00505E5: lea     edx, [rbp+1Ch]
 * 00000001C00505E8: movzx   r9d, bp
 * 00000001C00505EC: call    cs:__guard_dispatch_icall_fptr
 * 00000001C00505F2: and     [rsp+58h+var_10], 0
 * 00000001C00505F8: lea     rax, [rsp+58h+arg_30]
 * 00000001C0050600: mov     [rsp+58h+var_18], 8
 * 00000001C0050609: lea     r9, WPP_6c69e57299f2371bca16af19cce5473c_Traceguids
 * 00000001C0050610: mov     [rsp+58h+var_20], rax
 * 00000001C0050615: mov     edx, 2
 * 00000001C005061A: lea     rax, [rsp+58h+arg_28]
 * 00000001C0050622: mov     [rsp+58h+var_28], 4
 * 00000001C005062B: mov     [rsp+58h+var_30], rax
 * 00000001C0050630: mov     rcx, rbx
 * 00000001C0050633: mov     [rsp+58h+var_38], bp
 * 00000001C0050638: lea     r8d, [rdx+11h]
 * 00000001C005063C: call    cs:__imp_WppAutoLogTrace
 * 00000001C0050643: nop     dword ptr [rax+rax+00h]
 * 00000001C0050648: mov     rbx, [rsp+58h+arg_0]
 * 00000001C005064D: add     rsp, 50h
 * 00000001C0050651: pop     rbp
 * 00000001C0050652: retn
 */
