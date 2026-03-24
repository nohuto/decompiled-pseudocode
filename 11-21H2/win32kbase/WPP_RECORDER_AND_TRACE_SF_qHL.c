/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_qHL @ 0x1C01DB120
 * Callers:
 *     ?NotifyCaptureChangedIfCaptured@CTouchProcessor@@QEAAPEAUtagINPUTDEST@@_KPEAU2@@Z @ 0x1C01CEBB0 (-NotifyCaptureChangedIfCaptured@CTouchProcessor@@QEAAPEAUtagINPUTDEST@@_KPEAU2@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00DE650 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_qHL @ 0x1C01DB120
 * Reason: Hex-Rays returned no pseudocode for 0x1C01DB120
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C01DB120: mov     r11, rsp
 * 00000001C01DB123: mov     [r11+8], rbx
 * 00000001C01DB127: mov     [r11+10h], rdi
 * 00000001C01DB12B: push    r15
 * 00000001C01DB12D: sub     rsp, 60h
 * 00000001C01DB131: mov     rdi, r9
 * 00000001C01DB134: mov     bl, r8b
 * 00000001C01DB137: mov     r15d, 12Ch
 * 00000001C01DB13D: test    dl, dl
 * 00000001C01DB13F: jz      short loc_1C01DB193
 * 00000001C01DB141: and     qword ptr [r11-18h], 0
 * 00000001C01DB146: lea     rdx, [r11+58h]
 * 00000001C01DB14A: mov     rax, cs:pfnWppTraceMessage
 * 00000001C01DB151: lea     r8, WPP_d3dee7beffef3928cf2f9a2bdffe19dc_Traceguids
 * 00000001C01DB158: mov     qword ptr [r11-20h], 4
 * 00000001C01DB160: mov     [r11-28h], rdx
 * 00000001C01DB164: lea     rdx, [r11+50h]
 * 00000001C01DB168: mov     qword ptr [r11-30h], 2
 * 00000001C01DB170: mov     [r11-38h], rdx
 * 00000001C01DB174: lea     rdx, [r11+48h]
 * 00000001C01DB178: mov     qword ptr [r11-40h], 8
 * 00000001C01DB180: mov     [r11-48h], rdx
 * 00000001C01DB184: mov     edx, 2Bh ; '+'
 * 00000001C01DB189: movzx   r9d, r15w
 * 00000001C01DB18D: call    cs:__guard_dispatch_icall_fptr
 * 00000001C01DB193: test    bl, bl
 * 00000001C01DB195: jz      short loc_1C01DB204
 * 00000001C01DB197: and     [rsp+68h+var_10], 0
 * 00000001C01DB19D: lea     rax, [rsp+68h+arg_50]
 * 00000001C01DB1A5: mov     [rsp+68h+var_18], 4
 * 00000001C01DB1AE: lea     r9, WPP_d3dee7beffef3928cf2f9a2bdffe19dc_Traceguids
 * 00000001C01DB1B5: mov     [rsp+68h+var_20], rax
 * 00000001C01DB1BA: mov     edx, 4
 * 00000001C01DB1BF: mov     [rsp+68h+var_28], 2
 * 00000001C01DB1C8: lea     rax, [rsp+68h+arg_48]
 * 00000001C01DB1D0: mov     [rsp+68h+var_30], rax
 * 00000001C01DB1D5: mov     rcx, rdi
 * 00000001C01DB1D8: lea     rax, [rsp+68h+arg_40]
 * 00000001C01DB1E0: mov     [rsp+68h+var_38], 8
 * 00000001C01DB1E9: mov     [rsp+68h+var_40], rax
 * 00000001C01DB1EE: lea     r8d, [rdx+3]
 * 00000001C01DB1F2: mov     [rsp+68h+var_48], r15w
 * 00000001C01DB1F8: call    cs:__imp_WppAutoLogTrace
 * 00000001C01DB1FF: nop     dword ptr [rax+rax+00h]
 * 00000001C01DB204: mov     rbx, [rsp+68h+arg_0]
 * 00000001C01DB209: mov     rdi, [rsp+68h+arg_8]
 * 00000001C01DB20E: add     rsp, 60h
 * 00000001C01DB212: pop     r15
 * 00000001C01DB214: retn
 */
