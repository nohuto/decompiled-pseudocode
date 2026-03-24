/*
 * XREFs of WPP_RECORDER_SF_DP @ 0x1C00526A4
 * Callers:
 *     SecureChannel_SendRequestSynchronously @ 0x1C0052370 (SecureChannel_SendRequestSynchronously.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0020270 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_DP @ 0x1C00526A4
 * Reason: Hex-Rays returned no pseudocode for 0x1C00526A4
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00526A4: mov     r11, rsp
 * 00000001C00526A7: mov     [r11+8], rbx
 * 00000001C00526AB: push    rbp
 * 00000001C00526AC: sub     rsp, 50h
 * 00000001C00526B0: mov     rbx, rcx
 * 00000001C00526B3: mov     ebp, 0Fh
 * 00000001C00526B8: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C00526BF: test    dword ptr [rcx+2Ch], 40000h
 * 00000001C00526C6: jz      short loc_1C0052711
 * 00000001C00526C8: cmp     byte ptr [rcx+29h], 2
 * 00000001C00526CC: jb      short loc_1C0052711
 * 00000001C00526CE: and     qword ptr [r11-18h], 0
 * 00000001C00526D3: lea     rdx, [r11+38h]
 * 00000001C00526D7: mov     rax, cs:pfnWppTraceMessage
 * 00000001C00526DE: lea     r8, WPP_6c69e57299f2371bca16af19cce5473c_Traceguids
 * 00000001C00526E5: mov     rcx, [rcx+18h]
 * 00000001C00526E9: mov     r9d, ebp
 * 00000001C00526EC: mov     qword ptr [r11-20h], 8
 * 00000001C00526F4: mov     [r11-28h], rdx
 * 00000001C00526F8: lea     rdx, [r11+30h]
 * 00000001C00526FC: mov     qword ptr [r11-30h], 4
 * 00000001C0052704: mov     [r11-38h], rdx
 * 00000001C0052708: lea     edx, [rbp+1Ch]
 * 00000001C005270B: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0052711: and     [rsp+58h+var_10], 0
 * 00000001C0052717: lea     rax, [rsp+58h+arg_30]
 * 00000001C005271F: mov     [rsp+58h+var_18], 8
 * 00000001C0052728: lea     r9, WPP_6c69e57299f2371bca16af19cce5473c_Traceguids
 * 00000001C005272F: mov     [rsp+58h+var_20], rax
 * 00000001C0052734: mov     edx, 2
 * 00000001C0052739: lea     rax, [rsp+58h+arg_28]
 * 00000001C0052741: mov     [rsp+58h+var_28], 4
 * 00000001C005274A: mov     [rsp+58h+var_30], rax
 * 00000001C005274F: mov     rcx, rbx
 * 00000001C0052752: mov     [rsp+58h+var_38], bp
 * 00000001C0052757: lea     r8d, [rdx+11h]
 * 00000001C005275B: call    cs:__imp_WppAutoLogTrace
 * 00000001C0052762: nop     dword ptr [rax+rax+00h]
 * 00000001C0052767: mov     rbx, [rsp+58h+arg_0]
 * 00000001C005276C: add     rsp, 50h
 * 00000001C0052770: pop     rbp
 * 00000001C0052771: retn
 */
