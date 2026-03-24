/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_dD @ 0x1C01AE51C
 * Callers:
 *     rimProcessMissingPointerDeviceContacts @ 0x1C01B198C (rimProcessMissingPointerDeviceContacts.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_dD @ 0x1C01AE51C
 * Reason: Hex-Rays returned no pseudocode for 0x1C01AE51C
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C01AE51C: mov     r11, rsp
 * 00000001C01AE51F: mov     [r11+8], rbx
 * 00000001C01AE523: mov     [r11+10h], rbp
 * 00000001C01AE527: mov     [r11+18h], rsi
 * 00000001C01AE52B: push    rdi
 * 00000001C01AE52C: sub     rsp, 50h
 * 00000001C01AE530: mov     rsi, cs:?gRimLog@@3PEAURECORDER_LOG__@@EA; RECORDER_LOG__ * gRimLog
 * 00000001C01AE537: mov     dil, r8b
 * 00000001C01AE53A: movzx   ebx, [rsp+58h+arg_30]
 * 00000001C01AE542: mov     ebp, 4
 * 00000001C01AE547: test    dl, dl
 * 00000001C01AE549: jz      short loc_1C01AE582
 * 00000001C01AE54B: and     qword ptr [r11-18h], 0
 * 00000001C01AE550: lea     rdx, [r11+50h]
 * 00000001C01AE554: mov     rax, cs:pfnWppTraceMessage
 * 00000001C01AE55B: lea     r8, WPP_1efb6e2ef4cb3417e9748b712cab1da4_Traceguids
 * 00000001C01AE562: mov     [r11-20h], rbp
 * 00000001C01AE566: mov     r9d, ebx
 * 00000001C01AE569: mov     [r11-28h], rdx
 * 00000001C01AE56D: lea     rdx, [r11+48h]
 * 00000001C01AE571: mov     [r11-30h], rbp
 * 00000001C01AE575: mov     [r11-38h], rdx
 * 00000001C01AE579: lea     edx, [rbp+27h]
 * 00000001C01AE57C: call    cs:__guard_dispatch_icall_fptr
 * 00000001C01AE582: test    dil, dil
 * 00000001C01AE585: jz      short loc_1C01AE5D4
 * 00000001C01AE587: and     [rsp+58h+var_10], 0
 * 00000001C01AE58D: lea     rax, [rsp+58h+arg_48]
 * 00000001C01AE595: mov     [rsp+58h+var_18], rbp
 * 00000001C01AE59A: lea     r9, WPP_1efb6e2ef4cb3417e9748b712cab1da4_Traceguids
 * 00000001C01AE5A1: mov     [rsp+58h+var_20], rax
 * 00000001C01AE5A6: mov     r8d, 1
 * 00000001C01AE5AC: lea     rax, [rsp+58h+arg_40]
 * 00000001C01AE5B4: mov     [rsp+58h+var_28], rbp
 * 00000001C01AE5B9: mov     [rsp+58h+var_30], rax
 * 00000001C01AE5BE: mov     edx, ebp
 * 00000001C01AE5C0: mov     rcx, rsi
 * 00000001C01AE5C3: mov     [rsp+58h+var_38], bx
 * 00000001C01AE5C8: call    cs:__imp_WppAutoLogTrace
 * 00000001C01AE5CF: nop     dword ptr [rax+rax+00h]
 * 00000001C01AE5D4: mov     rbx, [rsp+58h+arg_0]
 * 00000001C01AE5D9: mov     rbp, [rsp+58h+arg_8]
 * 00000001C01AE5DE: mov     rsi, [rsp+58h+arg_10]
 * 00000001C01AE5E3: add     rsp, 50h
 * 00000001C01AE5E7: pop     rdi
 * 00000001C01AE5E8: retn
 */
