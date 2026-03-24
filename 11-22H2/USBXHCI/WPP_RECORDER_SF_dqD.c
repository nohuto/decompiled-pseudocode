/*
 * XREFs of WPP_RECORDER_SF_dqd @ 0x1C001E448
 * Callers:
 *     UsbDevice_EndpointsConfigureCompletion @ 0x1C000D0A0 (UsbDevice_EndpointsConfigureCompletion.c)
 *     Controller_UcxEvtStartTrackingForTimeSync @ 0x1C0035A60 (Controller_UcxEvtStartTrackingForTimeSync.c)
 *     Controller_UcxEvtStopTrackingForTimeSync @ 0x1C0036130 (Controller_UcxEvtStopTrackingForTimeSync.c)
 *     UsbDevice_DeviceNotificationEventHandler @ 0x1C004847C (UsbDevice_DeviceNotificationEventHandler.c)
 *     UsbDevice_UcxEvtDeviceAdd @ 0x1C0071010 (UsbDevice_UcxEvtDeviceAdd.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0020270 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_dqd @ 0x1C001E448
 * Reason: Hex-Rays returned no pseudocode for 0x1C001E448
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C001E448: mov     [rsp+arg_0], rbx
 * 00000001C001E44D: mov     [rsp+arg_8], rbp
 * 00000001C001E452: mov     [rsp+arg_10], rsi
 * 00000001C001E457: push    rdi
 * 00000001C001E458: push    r14
 * 00000001C001E45A: push    r15
 * 00000001C001E45C: sub     rsp, 60h
 * 00000001C001E460: mov     r14d, r8d
 * 00000001C001E463: mov     r15, rcx
 * 00000001C001E466: mov     edi, r8d
 * 00000001C001E469: shr     rdi, 10h
 * 00000001C001E46D: movzx   esi, dl
 * 00000001C001E470: lea     ebx, [r14-1]
 * 00000001C001E474: movzx   ebp, r9w
 * 00000001C001E478: mov     r10d, ebx
 * 00000001C001E47B: and     ebx, 1Fh
 * 00000001C001E47E: shr     r10, 5
 * 00000001C001E482: lea     rax, [rdi+rdi*4]
 * 00000001C001E486: and     r10d, 7FFh
 * 00000001C001E48D: mov     edx, ebx
 * 00000001C001E48F: mov     ebx, 4
 * 00000001C001E494: lea     r11, [r10+rax*4]
 * 00000001C001E498: mov     r10, cs:WPP_GLOBAL_Control
 * 00000001C001E49F: mov     eax, [r10+r11*4+2Ch]
 * 00000001C001E4A4: bt      eax, edx
 * 00000001C001E4A7: jb      loc_1C002F2DE
 * 00000001C001E4AD: and     [rsp+78h+var_20], 0
 * 00000001C001E4B3: lea     rax, [rsp+78h+arg_38]
 * 00000001C001E4BB: mov     r9, [rsp+78h+arg_20]
 * 00000001C001E4C3: mov     r8d, r14d
 * 00000001C001E4C6: mov     [rsp+78h+var_28], rbx
 * 00000001C001E4CB: mov     edx, esi
 * 00000001C001E4CD: mov     [rsp+78h+var_30], rax
 * 00000001C001E4D2: mov     rcx, r15
 * 00000001C001E4D5: mov     [rsp+78h+var_38], 8
 * 00000001C001E4DE: lea     rax, [rsp+78h+arg_30]
 * 00000001C001E4E6: mov     [rsp+78h+var_40], rax
 * 00000001C001E4EB: lea     rax, [rsp+78h+arg_28]
 * 00000001C001E4F3: mov     [rsp+78h+var_48], rbx
 * 00000001C001E4F8: mov     [rsp+78h+var_50], rax
 * 00000001C001E4FD: mov     word ptr [rsp+78h+var_58], bp
 * 00000001C001E502: call    cs:__imp_WppAutoLogTrace
 * 00000001C001E509: nop     dword ptr [rax+rax+00h]
 * 00000001C001E50E: lea     r11, [rsp+78h+var_18]
 * 00000001C001E513: mov     rbx, [r11+20h]
 * 00000001C001E517: mov     rbp, [r11+28h]
 * 00000001C001E51B: mov     rsi, [r11+30h]
 * 00000001C001E51F: mov     rsp, r11
 * 00000001C001E522: pop     r15
 * 00000001C001E524: pop     r14
 * 00000001C001E526: pop     rdi
 * 00000001C001E527: retn
 * 00000001C002F2DE: lea     rcx, [rdi+rdi*4]
 * 00000001C002F2E2: add     rcx, rcx
 * 00000001C002F2E5: cmp     [r10+rcx*8+29h], sil
 * 00000001C002F2EA: jb      loc_1C001E4AD
 * 00000001C002F2F0: and     [rsp+78h+var_28], 0
 * 00000001C002F2F6: lea     rdx, [rsp+78h+arg_38]
 * 00000001C002F2FE: mov     rax, cs:pfnWppTraceMessage
 * 00000001C002F305: mov     r9d, ebp
 * 00000001C002F308: mov     r8, [rsp+78h+arg_20]
 * 00000001C002F310: mov     rcx, [r10+rcx*8+18h]
 * 00000001C002F315: mov     [rsp+78h+var_30], rbx
 * 00000001C002F31A: mov     [rsp+78h+var_38], rdx
 * 00000001C002F31F: lea     rdx, [rsp+78h+arg_30]
 * 00000001C002F327: mov     [rsp+78h+var_40], 8
 * 00000001C002F330: mov     [rsp+78h+var_48], rdx
 * 00000001C002F335: lea     rdx, [rsp+78h+arg_28]
 * 00000001C002F33D: mov     [rsp+78h+var_50], rbx
 * 00000001C002F342: mov     [rsp+78h+var_58], rdx
 * 00000001C002F347: mov     edx, 2Bh ; '+'
 * 00000001C002F34C: call    cs:__guard_dispatch_icall_fptr
 * 00000001C002F352: nop
 * 00000001C002F353: jmp     loc_1C001E4AD
 */
