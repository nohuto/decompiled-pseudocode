/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_i @ 0x1C01F00C4
 * Callers:
 *     ?ClearStaleEntries@@YAXPEAUtagINPUTTRANSFORMLIST@@_K@Z @ 0x1C0004A24 (-ClearStaleEntries@@YAXPEAUtagINPUTTRANSFORMLIST@@_K@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0160250 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_i @ 0x1C01F00C4
 * Reason: Hex-Rays returned no pseudocode for 0x1C01F00C4
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C01F00C4: mov     r11, rsp
 * 00000001C01F00C7: mov     [r11+8], rbx
 * 00000001C01F00CB: mov     [r11+10h], rbp
 * 00000001C01F00CF: push    rdi
 * 00000001C01F00D0: sub     rsp, 40h
 * 00000001C01F00D4: mov     rdi, qword ptr cs:WPP_MAIN_CB.Queue
 * 00000001C01F00DB: mov     bl, r8b
 * 00000001C01F00DE: mov     ebp, 0Ch
 * 00000001C01F00E3: test    dl, dl
 * 00000001C01F00E5: jz      short loc_1C01F0117
 * 00000001C01F00E7: and     qword ptr [r11-18h], 0
 * 00000001C01F00EC: lea     rdx, [r11+48h]
 * 00000001C01F00F0: mov     rax, cs:pfnWppTraceMessage
 * 00000001C01F00F7: lea     r8, WPP_39b29109440736b79d6ba092fd9c72a8_Traceguids
 * 00000001C01F00FE: mov     qword ptr [r11-20h], 8
 * 00000001C01F0106: mov     [r11-28h], rdx
 * 00000001C01F010A: lea     edx, [rbp+1Fh]
 * 00000001C01F010D: movzx   r9d, bp
 * 00000001C01F0111: call    cs:__guard_dispatch_icall_fptr
 * 00000001C01F0117: test    bl, bl
 * 00000001C01F0119: jz      short loc_1C01F015B
 * 00000001C01F011B: and     [rsp+48h+var_10], 0
 * 00000001C01F0121: lea     rax, [rsp+48h+arg_40]
 * 00000001C01F0129: mov     edx, 4
 * 00000001C01F012E: mov     [rsp+48h+var_18], 8
 * 00000001C01F0137: mov     [rsp+48h+var_20], rax
 * 00000001C01F013C: lea     r9, WPP_39b29109440736b79d6ba092fd9c72a8_Traceguids
 * 00000001C01F0143: mov     rcx, rdi
 * 00000001C01F0146: mov     [rsp+48h+var_28], bp
 * 00000001C01F014B: lea     r8d, [rdx+6]
 * 00000001C01F014F: call    cs:__imp_WppAutoLogTrace
 * 00000001C01F0156: nop     dword ptr [rax+rax+00h]
 * 00000001C01F015B: mov     rbx, [rsp+48h+arg_0]
 * 00000001C01F0160: mov     rbp, [rsp+48h+arg_8]
 * 00000001C01F0165: add     rsp, 40h
 * 00000001C01F0169: pop     rdi
 * 00000001C01F016A: retn
 */
