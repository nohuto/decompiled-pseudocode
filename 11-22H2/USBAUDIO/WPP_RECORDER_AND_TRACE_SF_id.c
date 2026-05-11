/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_id @ 0x1C000ADE8
 * Callers:
 *     USBType1RenderBytePosition @ 0x1C0001600 (USBType1RenderBytePosition.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001A000 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_id @ 0x1C000ADE8
 * Reason: Hex-Rays returned no pseudocode for 0x1C000ADE8
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C000ADE8: mov     r11, rsp
 * 00000001C000ADEB: mov     [r11+8], rbx
 * 00000001C000ADEF: mov     [r11+10h], rdi
 * 00000001C000ADF3: push    r14
 * 00000001C000ADF5: sub     rsp, 50h
 * 00000001C000ADF9: mov     rdi, r9
 * 00000001C000ADFC: mov     bl, r8b
 * 00000001C000ADFF: mov     r14d, 0Ch
 * 00000001C000AE05: test    dl, dl
 * 00000001C000AE07: jz      short loc_1C000AE49
 * 00000001C000AE09: and     qword ptr [r11-18h], 0
 * 00000001C000AE0E: lea     rdx, [r11+50h]
 * 00000001C000AE12: mov     rax, cs:pfnWppTraceMessage
 * 00000001C000AE19: lea     r8, WPP_1518cd3ab610380295f9683503cbea4d_Traceguids
 * 00000001C000AE20: mov     qword ptr [r11-20h], 4
 * 00000001C000AE28: mov     r9d, r14d
 * 00000001C000AE2B: mov     [r11-28h], rdx
 * 00000001C000AE2F: lea     rdx, [r11+48h]
 * 00000001C000AE33: mov     qword ptr [r11-30h], 8
 * 00000001C000AE3B: mov     [r11-38h], rdx
 * 00000001C000AE3F: lea     edx, [r14+1Fh]
 * 00000001C000AE43: call    cs:__guard_dispatch_icall_fptr
 * 00000001C000AE49: test    bl, bl
 * 00000001C000AE4B: jz      short loc_1C000AEA1
 * 00000001C000AE4D: and     [rsp+58h+var_10], 0
 * 00000001C000AE53: lea     rax, [rsp+58h+arg_48]
 * 00000001C000AE5B: mov     [rsp+58h+var_18], 4
 * 00000001C000AE64: lea     r9, WPP_1518cd3ab610380295f9683503cbea4d_Traceguids
 * 00000001C000AE6B: mov     [rsp+58h+var_20], rax
 * 00000001C000AE70: xor     edx, edx
 * 00000001C000AE72: lea     rax, [rsp+58h+arg_40]
 * 00000001C000AE7A: mov     [rsp+58h+var_28], 8
 * 00000001C000AE83: mov     [rsp+58h+var_30], rax
 * 00000001C000AE88: mov     rcx, rdi
 * 00000001C000AE8B: mov     [rsp+58h+var_38], r14w
 * 00000001C000AE91: lea     r8d, [rdx+3]
 * 00000001C000AE95: call    cs:__imp_WppAutoLogTrace
 * 00000001C000AE9C: nop     dword ptr [rax+rax+00h]
 * 00000001C000AEA1: mov     rbx, [rsp+58h+arg_0]
 * 00000001C000AEA6: mov     rdi, [rsp+58h+arg_8]
 * 00000001C000AEAB: add     rsp, 50h
 * 00000001C000AEAF: pop     r14
 * 00000001C000AEB1: retn
 */
