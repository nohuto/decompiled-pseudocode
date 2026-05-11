/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_di @ 0x1C000AD14
 * Callers:
 *     USBType1RenderBytePosition @ 0x1C0001600 (USBType1RenderBytePosition.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001A000 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_di @ 0x1C000AD14
 * Reason: Hex-Rays returned no pseudocode for 0x1C000AD14
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C000AD14: mov     r11, rsp
 * 00000001C000AD17: mov     [r11+8], rbx
 * 00000001C000AD1B: mov     [r11+10h], rdi
 * 00000001C000AD1F: push    r14
 * 00000001C000AD21: sub     rsp, 50h
 * 00000001C000AD25: mov     rdi, r9
 * 00000001C000AD28: mov     bl, r8b
 * 00000001C000AD2B: mov     r14d, 0Bh
 * 00000001C000AD31: test    dl, dl
 * 00000001C000AD33: jz      short loc_1C000AD75
 * 00000001C000AD35: and     qword ptr [r11-18h], 0
 * 00000001C000AD3A: lea     rdx, [r11+50h]
 * 00000001C000AD3E: mov     rax, cs:pfnWppTraceMessage
 * 00000001C000AD45: lea     r8, WPP_1518cd3ab610380295f9683503cbea4d_Traceguids
 * 00000001C000AD4C: mov     qword ptr [r11-20h], 8
 * 00000001C000AD54: mov     r9d, r14d
 * 00000001C000AD57: mov     [r11-28h], rdx
 * 00000001C000AD5B: lea     rdx, [r11+48h]
 * 00000001C000AD5F: mov     qword ptr [r11-30h], 4
 * 00000001C000AD67: mov     [r11-38h], rdx
 * 00000001C000AD6B: lea     edx, [r14+20h]
 * 00000001C000AD6F: call    cs:__guard_dispatch_icall_fptr
 * 00000001C000AD75: test    bl, bl
 * 00000001C000AD77: jz      short loc_1C000ADCD
 * 00000001C000AD79: and     [rsp+58h+var_10], 0
 * 00000001C000AD7F: lea     rax, [rsp+58h+arg_48]
 * 00000001C000AD87: mov     [rsp+58h+var_18], 8
 * 00000001C000AD90: lea     r9, WPP_1518cd3ab610380295f9683503cbea4d_Traceguids
 * 00000001C000AD97: mov     [rsp+58h+var_20], rax
 * 00000001C000AD9C: xor     edx, edx
 * 00000001C000AD9E: lea     rax, [rsp+58h+arg_40]
 * 00000001C000ADA6: mov     [rsp+58h+var_28], 4
 * 00000001C000ADAF: mov     [rsp+58h+var_30], rax
 * 00000001C000ADB4: mov     rcx, rdi
 * 00000001C000ADB7: mov     [rsp+58h+var_38], r14w
 * 00000001C000ADBD: lea     r8d, [rdx+3]
 * 00000001C000ADC1: call    cs:__imp_WppAutoLogTrace
 * 00000001C000ADC8: nop     dword ptr [rax+rax+00h]
 * 00000001C000ADCD: mov     rbx, [rsp+58h+arg_0]
 * 00000001C000ADD2: mov     rdi, [rsp+58h+arg_8]
 * 00000001C000ADD7: add     rsp, 50h
 * 00000001C000ADDB: pop     r14
 * 00000001C000ADDD: retn
 */
