/*
 * XREFs of WPP_RECORDER_SF_qD @ 0x1C00183AC
 * Callers:
 *     RootHub_DumpPortData @ 0x1C0017D90 (RootHub_DumpPortData.c)
 *     IoControl_WdfEvtIoDeviceControl @ 0x1C003E3C0 (IoControl_WdfEvtIoDeviceControl.c)
 *     Register_ParseCapabilityRegister @ 0x1C0071BC8 (Register_ParseCapabilityRegister.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0020270 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qD @ 0x1C00183AC
 * Reason: Hex-Rays returned no pseudocode for 0x1C00183AC
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00183AC: mov     [rsp+arg_0], rbx
 * 00000001C00183B1: mov     [rsp+arg_8], rbp
 * 00000001C00183B6: mov     [rsp+arg_10], rsi
 * 00000001C00183BB: push    rdi
 * 00000001C00183BC: sub     rsp, 50h
 * 00000001C00183C0: mov     esi, r8d
 * 00000001C00183C3: mov     rbp, rcx
 * 00000001C00183C6: mov     ebx, r8d
 * 00000001C00183C9: shr     rbx, 10h
 * 00000001C00183CD: movzx   edi, r9w
 * 00000001C00183D1: lea     r11d, [rsi-1]
 * 00000001C00183D5: mov     edx, r11d
 * 00000001C00183D8: and     r11d, 1Fh
 * 00000001C00183DC: shr     rdx, 5
 * 00000001C00183E0: lea     rax, [rbx+rbx*4]
 * 00000001C00183E4: and     edx, 7FFh
 * 00000001C00183EA: lea     r10, [rdx+rax*4]
 * 00000001C00183EE: mov     edx, r11d
 * 00000001C00183F1: mov     r11, cs:WPP_GLOBAL_Control
 * 00000001C00183F8: mov     eax, [r11+r10*4+2Ch]
 * 00000001C00183FD: bt      eax, edx
 * 00000001C0018400: jb      loc_1C002B0F6
 * 00000001C0018406: and     [rsp+58h+var_10], 0
 * 00000001C001840C: lea     rax, [rsp+58h+arg_30]
 * 00000001C0018414: mov     r9, [rsp+58h+arg_20]
 * 00000001C001841C: mov     r8d, esi
 * 00000001C001841F: mov     [rsp+58h+var_18], 4
 * 00000001C0018428: mov     edx, 4
 * 00000001C001842D: mov     [rsp+58h+var_20], rax
 * 00000001C0018432: mov     rcx, rbp
 * 00000001C0018435: lea     rax, [rsp+58h+arg_28]
 * 00000001C001843D: mov     [rsp+58h+var_28], 8
 * 00000001C0018446: mov     [rsp+58h+var_30], rax
 * 00000001C001844B: mov     word ptr [rsp+58h+var_38], di
 * 00000001C0018450: call    cs:__imp_WppAutoLogTrace
 * 00000001C0018457: nop     dword ptr [rax+rax+00h]
 * 00000001C001845C: mov     rbx, [rsp+58h+arg_0]
 * 00000001C0018461: mov     rbp, [rsp+58h+arg_8]
 * 00000001C0018466: mov     rsi, [rsp+58h+arg_10]
 * 00000001C001846B: add     rsp, 50h
 * 00000001C001846F: pop     rdi
 * 00000001C0018470: retn
 * 00000001C002B0F6: lea     rcx, [rbx+rbx*4]
 * 00000001C002B0FA: add     rcx, rcx
 * 00000001C002B0FD: cmp     byte ptr [r11+rcx*8+29h], 4
 * 00000001C002B103: jb      loc_1C0018406
 * 00000001C002B109: and     [rsp+58h+var_18], 0
 * 00000001C002B10F: lea     rdx, [rsp+58h+arg_30]
 * 00000001C002B117: mov     rax, cs:pfnWppTraceMessage
 * 00000001C002B11E: mov     r9d, edi
 * 00000001C002B121: mov     r8, [rsp+58h+arg_20]
 * 00000001C002B129: mov     rcx, [r11+rcx*8+18h]
 * 00000001C002B12E: mov     [rsp+58h+var_20], 4
 * 00000001C002B137: mov     [rsp+58h+var_28], rdx
 * 00000001C002B13C: lea     rdx, [rsp+58h+arg_28]
 * 00000001C002B144: mov     [rsp+58h+var_30], 8
 * 00000001C002B14D: mov     [rsp+58h+var_38], rdx
 * 00000001C002B152: mov     edx, 2Bh ; '+'
 * 00000001C002B157: call    cs:__guard_dispatch_icall_fptr
 * 00000001C002B15D: nop
 * 00000001C002B15E: jmp     loc_1C0018406
 */
