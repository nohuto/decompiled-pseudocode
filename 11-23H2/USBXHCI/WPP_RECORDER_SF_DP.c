/*
 * XREFs of WPP_RECORDER_SF_DP @ 0x1C00527E4
 * Callers:
 *     SecureChannel_SendRequestSynchronously @ 0x1C00524B0 (SecureChannel_SendRequestSynchronously.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00203A0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_DP @ 0x1C00527E4
 * Reason: Hex-Rays returned no pseudocode for 0x1C00527E4
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00527E4: mov     r11, rsp
 * 00000001C00527E7: mov     [r11+8], rbx
 * 00000001C00527EB: push    rbp
 * 00000001C00527EC: sub     rsp, 50h
 * 00000001C00527F0: mov     rbx, rcx
 * 00000001C00527F3: mov     ebp, 0Fh
 * 00000001C00527F8: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C00527FF: test    dword ptr [rcx+2Ch], 40000h
 * 00000001C0052806: jz      short loc_1C0052851
 * 00000001C0052808: cmp     byte ptr [rcx+29h], 2
 * 00000001C005280C: jb      short loc_1C0052851
 * 00000001C005280E: and     qword ptr [r11-18h], 0
 * 00000001C0052813: lea     rdx, [r11+38h]
 * 00000001C0052817: mov     rax, cs:pfnWppTraceMessage
 * 00000001C005281E: lea     r8, WPP_6c69e57299f2371bca16af19cce5473c_Traceguids
 * 00000001C0052825: mov     rcx, [rcx+18h]
 * 00000001C0052829: mov     r9d, ebp
 * 00000001C005282C: mov     qword ptr [r11-20h], 8
 * 00000001C0052834: mov     [r11-28h], rdx
 * 00000001C0052838: lea     rdx, [r11+30h]
 * 00000001C005283C: mov     qword ptr [r11-30h], 4
 * 00000001C0052844: mov     [r11-38h], rdx
 * 00000001C0052848: lea     edx, [rbp+1Ch]
 * 00000001C005284B: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0052851: and     [rsp+58h+var_10], 0
 * 00000001C0052857: lea     rax, [rsp+58h+arg_30]
 * 00000001C005285F: mov     [rsp+58h+var_18], 8
 * 00000001C0052868: lea     r9, WPP_6c69e57299f2371bca16af19cce5473c_Traceguids
 * 00000001C005286F: mov     [rsp+58h+var_20], rax
 * 00000001C0052874: mov     edx, 2
 * 00000001C0052879: lea     rax, [rsp+58h+arg_28]
 * 00000001C0052881: mov     [rsp+58h+var_28], 4
 * 00000001C005288A: mov     [rsp+58h+var_30], rax
 * 00000001C005288F: mov     rcx, rbx
 * 00000001C0052892: mov     [rsp+58h+var_38], bp
 * 00000001C0052897: lea     r8d, [rdx+11h]
 * 00000001C005289B: call    cs:__imp_WppAutoLogTrace
 * 00000001C00528A2: nop     dword ptr [rax+rax+00h]
 * 00000001C00528A7: mov     rbx, [rsp+58h+arg_0]
 * 00000001C00528AC: add     rsp, 50h
 * 00000001C00528B0: pop     rbp
 * 00000001C00528B1: retn
 */
