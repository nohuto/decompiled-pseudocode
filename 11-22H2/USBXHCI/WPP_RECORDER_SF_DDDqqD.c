/*
 * XREFs of WPP_RECORDER_SF_DDDqqD @ 0x1C0047CC8
 * Callers:
 *     Bulk_PrepareStage @ 0x1C00123CC (Bulk_PrepareStage.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0020270 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_DDDqqD @ 0x1C0047CC8
 * Reason: Hex-Rays returned no pseudocode for 0x1C0047CC8
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0047CC8: mov     r11, rsp
 * 00000001C0047CCB: mov     [r11+8], rbx
 * 00000001C0047CCF: mov     [r11+10h], rsi
 * 00000001C0047CD3: mov     [r11+18h], rdi
 * 00000001C0047CD7: mov     [r11+20h], r14
 * 00000001C0047CDB: push    rbp
 * 00000001C0047CDC: lea     rbp, [r11-27h]
 * 00000001C0047CE0: sub     rsp, 90h
 * 00000001C0047CE7: mov     rdi, rcx
 * 00000001C0047CEA: movzx   ebx, r9w
 * 00000001C0047CEE: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0047CF5: mov     esi, 4
 * 00000001C0047CFA: test    dword ptr [rcx+2Ch], 2000h
 * 00000001C0047D01: lea     r14d, [rsi+4]
 * 00000001C0047D05: jz      short loc_1C0047D78
 * 00000001C0047D07: cmp     [rcx+29h], sil
 * 00000001C0047D0B: jb      short loc_1C0047D78
 * 00000001C0047D0D: and     qword ptr [r11-18h], 0
 * 00000001C0047D12: lea     rdx, [rbp+1Fh+arg_50]
 * 00000001C0047D16: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0047D1D: lea     r8, WPP_92c598da33ef340e00f5370896d293ba_Traceguids
 * 00000001C0047D24: mov     rcx, [rcx+18h]
 * 00000001C0047D28: mov     r9d, ebx
 * 00000001C0047D2B: mov     [r11-20h], rsi
 * 00000001C0047D2F: mov     [r11-28h], rdx
 * 00000001C0047D33: lea     rdx, [rbp+1Fh+arg_48]
 * 00000001C0047D37: mov     [r11-30h], r14
 * 00000001C0047D3B: mov     [r11-38h], rdx
 * 00000001C0047D3F: lea     rdx, [rbp+1Fh+arg_40]
 * 00000001C0047D43: mov     [r11-40h], r14
 * 00000001C0047D47: mov     [r11-48h], rdx
 * 00000001C0047D4B: lea     rdx, [rbp+1Fh+arg_38]
 * 00000001C0047D4F: mov     [r11-50h], rsi
 * 00000001C0047D53: mov     [r11-58h], rdx
 * 00000001C0047D57: lea     rdx, [rbp+1Fh+arg_30]
 * 00000001C0047D5B: mov     [r11-60h], rsi
 * 00000001C0047D5F: mov     [r11-68h], rdx
 * 00000001C0047D63: lea     rdx, [rbp+1Fh+arg_28]
 * 00000001C0047D67: mov     [r11-70h], rsi
 * 00000001C0047D6B: mov     [r11-78h], rdx
 * 00000001C0047D6F: lea     edx, [rsi+27h]
 * 00000001C0047D72: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0047D78: and     qword ptr [rsp+90h+var_8], 0
 * 00000001C0047D81: lea     rax, [rbp+1Fh+arg_50]
 * 00000001C0047D85: mov     [rsp+90h+var_10], rsi
 * 00000001C0047D8D: lea     r9, WPP_92c598da33ef340e00f5370896d293ba_Traceguids
 * 00000001C0047D94: mov     [rsp+90h+var_18], rax
 * 00000001C0047D99: mov     r8d, 0Eh
 * 00000001C0047D9F: mov     [rsp+90h+var_20], r14
 * 00000001C0047DA4: lea     rax, [rbp+1Fh+arg_48]
 * 00000001C0047DA8: mov     [rsp+90h+var_28], rax
 * 00000001C0047DAD: mov     edx, esi
 * 00000001C0047DAF: mov     [rsp+90h+var_30], r14
 * 00000001C0047DB4: lea     rax, [rbp+1Fh+arg_40]
 * 00000001C0047DB8: mov     [rsp+90h+var_38], rax
 * 00000001C0047DBD: mov     rcx, rdi
 * 00000001C0047DC0: mov     [rsp+90h+var_40], rsi
 * 00000001C0047DC5: lea     rax, [rbp+1Fh+arg_38]
 * 00000001C0047DC9: mov     [rsp+90h+var_48], rax
 * 00000001C0047DCE: lea     rax, [rbp+1Fh+arg_30]
 * 00000001C0047DD2: mov     [rsp+90h+var_50], rsi
 * 00000001C0047DD7: mov     [rsp+90h+var_58], rax
 * 00000001C0047DDC: lea     rax, [rbp+1Fh+arg_28]
 * 00000001C0047DE0: mov     [rsp+90h+var_60], rsi
 * 00000001C0047DE5: mov     [rsp+90h+var_68], rax
 * 00000001C0047DEA: mov     word ptr [rsp+90h+var_70], bx
 * 00000001C0047DEF: call    cs:__imp_WppAutoLogTrace
 * 00000001C0047DF6: nop     dword ptr [rax+rax+00h]
 * 00000001C0047DFB: lea     r11, [rsp+90h+var_s0]
 * 00000001C0047E03: mov     rbx, [r11+10h]
 * 00000001C0047E07: mov     rsi, [r11+18h]
 * 00000001C0047E0B: mov     rdi, [r11+20h]
 * 00000001C0047E0F: mov     r14, [r11+28h]
 * 00000001C0047E13: mov     rsp, r11
 * 00000001C0047E16: pop     rbp
 * 00000001C0047E17: retn
 */
