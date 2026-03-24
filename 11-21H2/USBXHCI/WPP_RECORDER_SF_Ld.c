/*
 * XREFs of WPP_RECORDER_SF_Ld @ 0x1C005065C
 * Callers:
 *     SecureChannel_SendRequestSynchronously @ 0x1C0050250 (SecureChannel_SendRequestSynchronously.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00199B0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_Ld @ 0x1C005065C
 * Reason: Hex-Rays returned no pseudocode for 0x1C005065C
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C005065C: mov     r11, rsp
 * 00000001C005065F: mov     [r11+8], rbx
 * 00000001C0050663: mov     [r11+10h], rsi
 * 00000001C0050667: push    rdi
 * 00000001C0050668: sub     rsp, 50h
 * 00000001C005066C: mov     rbx, rcx
 * 00000001C005066F: mov     esi, 10h
 * 00000001C0050674: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C005067B: lea     edi, [rsi-0Ch]
 * 00000001C005067E: test    dword ptr [rcx+2Ch], 40000h
 * 00000001C0050685: jz      short loc_1C00506C9
 * 00000001C0050687: cmp     byte ptr [rcx+29h], 2
 * 00000001C005068B: jb      short loc_1C00506C9
 * 00000001C005068D: and     qword ptr [r11-18h], 0
 * 00000001C0050692: lea     rdx, [r11+38h]
 * 00000001C0050696: mov     rax, cs:pfnWppTraceMessage
 * 00000001C005069D: lea     r8, WPP_6c69e57299f2371bca16af19cce5473c_Traceguids
 * 00000001C00506A4: mov     rcx, [rcx+18h]
 * 00000001C00506A8: mov     [r11-20h], rdi
 * 00000001C00506AC: mov     [r11-28h], rdx
 * 00000001C00506B0: lea     rdx, [r11+30h]
 * 00000001C00506B4: mov     [r11-30h], rdi
 * 00000001C00506B8: mov     [r11-38h], rdx
 * 00000001C00506BC: lea     edx, [rsi+1Bh]
 * 00000001C00506BF: movzx   r9d, si
 * 00000001C00506C3: call    cs:__guard_dispatch_icall_fptr
 * 00000001C00506C9: and     [rsp+58h+var_10], 0
 * 00000001C00506CF: lea     rax, [rsp+58h+arg_30]
 * 00000001C00506D7: mov     [rsp+58h+var_18], rdi
 * 00000001C00506DC: lea     r9, WPP_6c69e57299f2371bca16af19cce5473c_Traceguids
 * 00000001C00506E3: mov     [rsp+58h+var_20], rax
 * 00000001C00506E8: mov     edx, 2
 * 00000001C00506ED: lea     rax, [rsp+58h+arg_28]
 * 00000001C00506F5: mov     [rsp+58h+var_28], rdi
 * 00000001C00506FA: mov     [rsp+58h+var_30], rax
 * 00000001C00506FF: mov     rcx, rbx
 * 00000001C0050702: mov     [rsp+58h+var_38], si
 * 00000001C0050707: lea     r8d, [rdx+11h]
 * 00000001C005070B: call    cs:__imp_WppAutoLogTrace
 * 00000001C0050712: nop     dword ptr [rax+rax+00h]
 * 00000001C0050717: mov     rbx, [rsp+58h+arg_0]
 * 00000001C005071C: mov     rsi, [rsp+58h+arg_8]
 * 00000001C0050721: add     rsp, 50h
 * 00000001C0050725: pop     rdi
 * 00000001C0050726: retn
 */
