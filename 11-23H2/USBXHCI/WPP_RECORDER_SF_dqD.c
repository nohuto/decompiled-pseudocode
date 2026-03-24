/*
 * XREFs of WPP_RECORDER_SF_dqd @ 0x1C001E3F8
 * Callers:
 *     UsbDevice_EndpointsConfigureCompletion @ 0x1C000D070 (UsbDevice_EndpointsConfigureCompletion.c)
 *     Controller_UcxEvtStartTrackingForTimeSync @ 0x1C0035BA0 (Controller_UcxEvtStartTrackingForTimeSync.c)
 *     Controller_UcxEvtStopTrackingForTimeSync @ 0x1C0036270 (Controller_UcxEvtStopTrackingForTimeSync.c)
 *     UsbDevice_DeviceNotificationEventHandler @ 0x1C00485BC (UsbDevice_DeviceNotificationEventHandler.c)
 *     UsbDevice_UcxEvtDeviceAdd @ 0x1C0070FD0 (UsbDevice_UcxEvtDeviceAdd.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00203A0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_dqd @ 0x1C001E3F8
 * Reason: Hex-Rays returned no pseudocode for 0x1C001E3F8
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C001E3F8: mov     [rsp+arg_0], rbx
 * 00000001C001E3FD: mov     [rsp+arg_8], rbp
 * 00000001C001E402: mov     [rsp+arg_10], rsi
 * 00000001C001E407: push    rdi
 * 00000001C001E408: push    r14
 * 00000001C001E40A: push    r15
 * 00000001C001E40C: sub     rsp, 60h
 * 00000001C001E410: mov     r14d, r8d
 * 00000001C001E413: mov     r15, rcx
 * 00000001C001E416: mov     edi, r8d
 * 00000001C001E419: shr     rdi, 10h
 * 00000001C001E41D: movzx   esi, dl
 * 00000001C001E420: lea     ebx, [r14-1]
 * 00000001C001E424: movzx   ebp, r9w
 * 00000001C001E428: mov     r10d, ebx
 * 00000001C001E42B: and     ebx, 1Fh
 * 00000001C001E42E: shr     r10, 5
 * 00000001C001E432: lea     rax, [rdi+rdi*4]
 * 00000001C001E436: and     r10d, 7FFh
 * 00000001C001E43D: mov     edx, ebx
 * 00000001C001E43F: mov     ebx, 4
 * 00000001C001E444: lea     r11, [r10+rax*4]
 * 00000001C001E448: mov     r10, cs:WPP_GLOBAL_Control
 * 00000001C001E44F: mov     eax, [r10+r11*4+2Ch]
 * 00000001C001E454: bt      eax, edx
 * 00000001C001E457: jb      loc_1C002F41E
 * 00000001C001E45D: and     [rsp+78h+var_20], 0
 * 00000001C001E463: lea     rax, [rsp+78h+arg_38]
 * 00000001C001E46B: mov     r9, [rsp+78h+arg_20]
 * 00000001C001E473: mov     r8d, r14d
 * 00000001C001E476: mov     [rsp+78h+var_28], rbx
 * 00000001C001E47B: mov     edx, esi
 * 00000001C001E47D: mov     [rsp+78h+var_30], rax
 * 00000001C001E482: mov     rcx, r15
 * 00000001C001E485: mov     [rsp+78h+var_38], 8
 * 00000001C001E48E: lea     rax, [rsp+78h+arg_30]
 * 00000001C001E496: mov     [rsp+78h+var_40], rax
 * 00000001C001E49B: lea     rax, [rsp+78h+arg_28]
 * 00000001C001E4A3: mov     [rsp+78h+var_48], rbx
 * 00000001C001E4A8: mov     [rsp+78h+var_50], rax
 * 00000001C001E4AD: mov     word ptr [rsp+78h+var_58], bp
 * 00000001C001E4B2: call    cs:__imp_WppAutoLogTrace
 * 00000001C001E4B9: nop     dword ptr [rax+rax+00h]
 * 00000001C001E4BE: lea     r11, [rsp+78h+var_18]
 * 00000001C001E4C3: mov     rbx, [r11+20h]
 * 00000001C001E4C7: mov     rbp, [r11+28h]
 * 00000001C001E4CB: mov     rsi, [r11+30h]
 * 00000001C001E4CF: mov     rsp, r11
 * 00000001C001E4D2: pop     r15
 * 00000001C001E4D4: pop     r14
 * 00000001C001E4D6: pop     rdi
 * 00000001C001E4D7: retn
 * 00000001C002F41E: lea     rcx, [rdi+rdi*4]
 * 00000001C002F422: add     rcx, rcx
 * 00000001C002F425: cmp     [r10+rcx*8+29h], sil
 * 00000001C002F42A: jb      loc_1C001E45D
 * 00000001C002F430: and     [rsp+78h+var_28], 0
 * 00000001C002F436: lea     rdx, [rsp+78h+arg_38]
 * 00000001C002F43E: mov     rax, cs:pfnWppTraceMessage
 * 00000001C002F445: mov     r9d, ebp
 * 00000001C002F448: mov     r8, [rsp+78h+arg_20]
 * 00000001C002F450: mov     rcx, [r10+rcx*8+18h]
 * 00000001C002F455: mov     [rsp+78h+var_30], rbx
 * 00000001C002F45A: mov     [rsp+78h+var_38], rdx
 * 00000001C002F45F: lea     rdx, [rsp+78h+arg_30]
 * 00000001C002F467: mov     [rsp+78h+var_40], 8
 * 00000001C002F470: mov     [rsp+78h+var_48], rdx
 * 00000001C002F475: lea     rdx, [rsp+78h+arg_28]
 * 00000001C002F47D: mov     [rsp+78h+var_50], rbx
 * 00000001C002F482: mov     [rsp+78h+var_58], rdx
 * 00000001C002F487: mov     edx, 2Bh ; '+'
 * 00000001C002F48C: call    cs:__guard_dispatch_icall_fptr
 * 00000001C002F492: nop
 * 00000001C002F493: jmp     loc_1C001E45D
 */
