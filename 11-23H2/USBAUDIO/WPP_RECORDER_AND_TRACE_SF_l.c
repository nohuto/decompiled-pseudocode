/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_l @ 0x1C00099DC
 * Callers:
 *     DeviceStart @ 0x1C002A450 (DeviceStart.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001A000 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_AND_TRACE_SF_l @ 0x1C00099DC
 * Reason: Hex-Rays returned no pseudocode for 0x1C00099DC
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00099DC: mov     r11, rsp
 * 00000001C00099DF: mov     [r11+8], rbx
 * 00000001C00099E3: mov     [r11+10h], rbp
 * 00000001C00099E7: push    rdi
 * 00000001C00099E8: sub     rsp, 40h
 * 00000001C00099EC: mov     rdi, r9
 * 00000001C00099EF: mov     bl, r8b
 * 00000001C00099F2: mov     ebp, 15h
 * 00000001C00099F7: test    dl, dl
 * 00000001C00099F9: jz      short loc_1C0009A2A
 * 00000001C00099FB: and     qword ptr [r11-18h], 0
 * 00000001C0009A00: lea     rdx, [r11+48h]
 * 00000001C0009A04: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0009A0B: lea     r8, WPP_04fd23808a1e3b5e5b845c20a8f4823b_Traceguids
 * 00000001C0009A12: mov     qword ptr [r11-20h], 4
 * 00000001C0009A1A: mov     r9d, ebp
 * 00000001C0009A1D: mov     [r11-28h], rdx
 * 00000001C0009A21: lea     edx, [rbp+16h]
 * 00000001C0009A24: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0009A2A: test    bl, bl
 * 00000001C0009A2C: jz      short loc_1C0009A6B
 * 00000001C0009A2E: and     [rsp+48h+var_10], 0
 * 00000001C0009A34: lea     rax, [rsp+48h+arg_40]
 * 00000001C0009A3C: xor     edx, edx
 * 00000001C0009A3E: mov     [rsp+48h+var_18], 4
 * 00000001C0009A47: mov     [rsp+48h+var_20], rax
 * 00000001C0009A4C: lea     r9, WPP_04fd23808a1e3b5e5b845c20a8f4823b_Traceguids
 * 00000001C0009A53: mov     rcx, rdi
 * 00000001C0009A56: mov     [rsp+48h+var_28], bp
 * 00000001C0009A5B: lea     r8d, [rdx+9]
 * 00000001C0009A5F: call    cs:__imp_WppAutoLogTrace
 * 00000001C0009A66: nop     dword ptr [rax+rax+00h]
 * 00000001C0009A6B: mov     rbx, [rsp+48h+arg_0]
 * 00000001C0009A70: mov     rbp, [rsp+48h+arg_8]
 * 00000001C0009A75: add     rsp, 40h
 * 00000001C0009A79: pop     rdi
 * 00000001C0009A7A: retn
 */
