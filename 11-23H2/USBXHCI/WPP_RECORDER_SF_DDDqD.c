/*
 * XREFs of WPP_RECORDER_SF_DDDqd @ 0x1C0047CC0
 * Callers:
 *     Bulk_CompleteTransfers @ 0x1C000E608 (Bulk_CompleteTransfers.c)
 *     Bulk_RetrieveNextStage @ 0x1C0011FDC (Bulk_RetrieveNextStage.c)
 *     Bulk_Transfer_CompleteCancelable @ 0x1C0012F30 (Bulk_Transfer_CompleteCancelable.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00203A0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_DDDqd @ 0x1C0047CC0
 * Reason: Hex-Rays returned no pseudocode for 0x1C0047CC0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0047CC0: mov     r11, rsp
 * 00000001C0047CC3: mov     [r11+8], rbx
 * 00000001C0047CC7: mov     [r11+10h], rbp
 * 00000001C0047CCB: mov     [r11+18h], rsi
 * 00000001C0047CCF: push    rdi
 * 00000001C0047CD0: sub     rsp, 80h
 * 00000001C0047CD7: mov     rsi, rcx
 * 00000001C0047CDA: movzx   edi, r9w
 * 00000001C0047CDE: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0047CE5: mov     ebp, 4
 * 00000001C0047CEA: movzx   ebx, dl
 * 00000001C0047CED: test    dword ptr [rcx+2Ch], 2000h
 * 00000001C0047CF4: jz      short loc_1C0047D5E
 * 00000001C0047CF6: cmp     [rcx+29h], bl
 * 00000001C0047CF9: jb      short loc_1C0047D5E
 * 00000001C0047CFB: and     qword ptr [r11-18h], 0
 * 00000001C0047D00: lea     rdx, [r11+50h]
 * 00000001C0047D04: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0047D0B: lea     r8, WPP_92c598da33ef340e00f5370896d293ba_Traceguids
 * 00000001C0047D12: mov     rcx, [rcx+18h]
 * 00000001C0047D16: mov     r9d, edi
 * 00000001C0047D19: mov     [r11-20h], rbp
 * 00000001C0047D1D: mov     [r11-28h], rdx
 * 00000001C0047D21: lea     rdx, [r11+48h]
 * 00000001C0047D25: mov     qword ptr [r11-30h], 8
 * 00000001C0047D2D: mov     [r11-38h], rdx
 * 00000001C0047D31: lea     rdx, [r11+40h]
 * 00000001C0047D35: mov     [r11-40h], rbp
 * 00000001C0047D39: mov     [r11-48h], rdx
 * 00000001C0047D3D: lea     rdx, [r11+38h]
 * 00000001C0047D41: mov     [r11-50h], rbp
 * 00000001C0047D45: mov     [r11-58h], rdx
 * 00000001C0047D49: lea     rdx, [r11+30h]
 * 00000001C0047D4D: mov     [r11-60h], rbp
 * 00000001C0047D51: mov     [r11-68h], rdx
 * 00000001C0047D55: lea     edx, [rbp+27h]
 * 00000001C0047D58: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0047D5E: and     [rsp+88h+var_10], 0
 * 00000001C0047D64: lea     rax, [rsp+88h+arg_48]
 * 00000001C0047D6C: mov     [rsp+88h+var_18], rbp
 * 00000001C0047D71: lea     r9, WPP_92c598da33ef340e00f5370896d293ba_Traceguids
 * 00000001C0047D78: mov     [rsp+88h+var_20], rax
 * 00000001C0047D7D: mov     r8d, 0Eh
 * 00000001C0047D83: mov     [rsp+88h+var_28], 8
 * 00000001C0047D8C: lea     rax, [rsp+88h+arg_40]
 * 00000001C0047D94: mov     [rsp+88h+var_30], rax
 * 00000001C0047D99: mov     edx, ebx
 * 00000001C0047D9B: mov     [rsp+88h+var_38], rbp
 * 00000001C0047DA0: lea     rax, [rsp+88h+arg_38]
 * 00000001C0047DA8: mov     [rsp+88h+var_40], rax
 * 00000001C0047DAD: mov     rcx, rsi
 * 00000001C0047DB0: mov     [rsp+88h+var_48], rbp
 * 00000001C0047DB5: lea     rax, [rsp+88h+arg_30]
 * 00000001C0047DBD: mov     [rsp+88h+var_50], rax
 * 00000001C0047DC2: lea     rax, [rsp+88h+arg_28]
 * 00000001C0047DCA: mov     [rsp+88h+var_58], rbp
 * 00000001C0047DCF: mov     [rsp+88h+var_60], rax
 * 00000001C0047DD4: mov     [rsp+88h+var_68], di
 * 00000001C0047DD9: call    cs:__imp_WppAutoLogTrace
 * 00000001C0047DE0: nop     dword ptr [rax+rax+00h]
 * 00000001C0047DE5: lea     r11, [rsp+88h+var_8]
 * 00000001C0047DED: mov     rbx, [r11+10h]
 * 00000001C0047DF1: mov     rbp, [r11+18h]
 * 00000001C0047DF5: mov     rsi, [r11+20h]
 * 00000001C0047DF9: mov     rsp, r11
 * 00000001C0047DFC: pop     rdi
 * 00000001C0047DFD: retn
 */
