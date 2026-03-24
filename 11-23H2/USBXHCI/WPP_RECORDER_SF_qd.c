/*
 * XREFs of WPP_RECORDER_SF_qD @ 0x1C001835C
 * Callers:
 *     RootHub_DumpPortData @ 0x1C0017D40 (RootHub_DumpPortData.c)
 *     IoControl_WdfEvtIoDeviceControl @ 0x1C003E500 (IoControl_WdfEvtIoDeviceControl.c)
 *     Register_ParseCapabilityRegister @ 0x1C0071B88 (Register_ParseCapabilityRegister.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00203A0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qD @ 0x1C001835C
 * Reason: Hex-Rays returned no pseudocode for 0x1C001835C
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C001835C: mov     [rsp+arg_0], rbx
 * 00000001C0018361: mov     [rsp+arg_8], rbp
 * 00000001C0018366: mov     [rsp+arg_10], rsi
 * 00000001C001836B: push    rdi
 * 00000001C001836C: sub     rsp, 50h
 * 00000001C0018370: mov     esi, r8d
 * 00000001C0018373: mov     rbp, rcx
 * 00000001C0018376: mov     ebx, r8d
 * 00000001C0018379: shr     rbx, 10h
 * 00000001C001837D: movzx   edi, r9w
 * 00000001C0018381: lea     r11d, [rsi-1]
 * 00000001C0018385: mov     edx, r11d
 * 00000001C0018388: and     r11d, 1Fh
 * 00000001C001838C: shr     rdx, 5
 * 00000001C0018390: lea     rax, [rbx+rbx*4]
 * 00000001C0018394: and     edx, 7FFh
 * 00000001C001839A: lea     r10, [rdx+rax*4]
 * 00000001C001839E: mov     edx, r11d
 * 00000001C00183A1: mov     r11, cs:WPP_GLOBAL_Control
 * 00000001C00183A8: mov     eax, [r11+r10*4+2Ch]
 * 00000001C00183AD: bt      eax, edx
 * 00000001C00183B0: jb      loc_1C002B236
 * 00000001C00183B6: and     [rsp+58h+var_10], 0
 * 00000001C00183BC: lea     rax, [rsp+58h+arg_30]
 * 00000001C00183C4: mov     r9, [rsp+58h+arg_20]
 * 00000001C00183CC: mov     r8d, esi
 * 00000001C00183CF: mov     [rsp+58h+var_18], 4
 * 00000001C00183D8: mov     edx, 4
 * 00000001C00183DD: mov     [rsp+58h+var_20], rax
 * 00000001C00183E2: mov     rcx, rbp
 * 00000001C00183E5: lea     rax, [rsp+58h+arg_28]
 * 00000001C00183ED: mov     [rsp+58h+var_28], 8
 * 00000001C00183F6: mov     [rsp+58h+var_30], rax
 * 00000001C00183FB: mov     word ptr [rsp+58h+var_38], di
 * 00000001C0018400: call    cs:__imp_WppAutoLogTrace
 * 00000001C0018407: nop     dword ptr [rax+rax+00h]
 * 00000001C001840C: mov     rbx, [rsp+58h+arg_0]
 * 00000001C0018411: mov     rbp, [rsp+58h+arg_8]
 * 00000001C0018416: mov     rsi, [rsp+58h+arg_10]
 * 00000001C001841B: add     rsp, 50h
 * 00000001C001841F: pop     rdi
 * 00000001C0018420: retn
 * 00000001C002B236: lea     rcx, [rbx+rbx*4]
 * 00000001C002B23A: add     rcx, rcx
 * 00000001C002B23D: cmp     byte ptr [r11+rcx*8+29h], 4
 * 00000001C002B243: jb      loc_1C00183B6
 * 00000001C002B249: and     [rsp+58h+var_18], 0
 * 00000001C002B24F: lea     rdx, [rsp+58h+arg_30]
 * 00000001C002B257: mov     rax, cs:pfnWppTraceMessage
 * 00000001C002B25E: mov     r9d, edi
 * 00000001C002B261: mov     r8, [rsp+58h+arg_20]
 * 00000001C002B269: mov     rcx, [r11+rcx*8+18h]
 * 00000001C002B26E: mov     [rsp+58h+var_20], 4
 * 00000001C002B277: mov     [rsp+58h+var_28], rdx
 * 00000001C002B27C: lea     rdx, [rsp+58h+arg_28]
 * 00000001C002B284: mov     [rsp+58h+var_30], 8
 * 00000001C002B28D: mov     [rsp+58h+var_38], rdx
 * 00000001C002B292: mov     edx, 2Bh ; '+'
 * 00000001C002B297: call    cs:__guard_dispatch_icall_fptr
 * 00000001C002B29D: nop
 * 00000001C002B29E: jmp     loc_1C00183B6
 */
