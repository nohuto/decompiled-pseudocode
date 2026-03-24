/*
 * XREFs of WPP_RECORDER_SF_dq @ 0x1C0019330
 * Callers:
 *     UsbDevice_ValidateEndpointConfigureRequest @ 0x1C0008B14 (UsbDevice_ValidateEndpointConfigureRequest.c)
 *     UsbDevice_EndpointsConfigureCompletion @ 0x1C000D070 (UsbDevice_EndpointsConfigureCompletion.c)
 *     UsbDevice_SetDeviceDisabled @ 0x1C000FD4C (UsbDevice_SetDeviceDisabled.c)
 *     UsbDevice_UcxEvtReset @ 0x1C0018D30 (UsbDevice_UcxEvtReset.c)
 *     UsbDevice_UcxEvtAddress @ 0x1C0019410 (UsbDevice_UcxEvtAddress.c)
 *     UsbDevice_EnableCompletion @ 0x1C0019560 (UsbDevice_EnableCompletion.c)
 *     UsbDevice_SetAddressCompletion @ 0x1C0019A00 (UsbDevice_SetAddressCompletion.c)
 *     XilCoreDeviceSlot_SetDeviceContext @ 0x1C0019E44 (XilCoreDeviceSlot_SetDeviceContext.c)
 *     UsbDevice_UpdateCompletion @ 0x1C001D310 (UsbDevice_UpdateCompletion.c)
 *     UsbDevice_ConfigureEndpointCompletion @ 0x1C0048390 (UsbDevice_ConfigureEndpointCompletion.c)
 *     UsbDevice_DeviceResetCompletion @ 0x1C0048660 (UsbDevice_DeviceResetCompletion.c)
 *     UsbDevice_DisableCompletion @ 0x1C00488A0 (UsbDevice_DisableCompletion.c)
 *     UsbDevice_DropEndpointsCompletion @ 0x1C0048BE0 (UsbDevice_DropEndpointsCompletion.c)
 *     UsbDevice_UcxEvtDisable @ 0x1C0049DC0 (UsbDevice_UcxEvtDisable.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00203A0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_dq @ 0x1C0019330
 * Reason: Hex-Rays returned no pseudocode for 0x1C0019330
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0019330: mov     [rsp+arg_0], rbx
 * 00000001C0019335: mov     [rsp+arg_8], rbp
 * 00000001C001933A: mov     [rsp+arg_10], rsi
 * 00000001C001933F: push    rdi
 * 00000001C0019340: push    r14
 * 00000001C0019342: push    r15
 * 00000001C0019344: sub     rsp, 50h
 * 00000001C0019348: mov     r14d, r8d
 * 00000001C001934B: mov     r15, rcx
 * 00000001C001934E: mov     edi, r8d
 * 00000001C0019351: shr     rdi, 10h
 * 00000001C0019355: movzx   esi, dl
 * 00000001C0019358: lea     ebx, [r14-1]
 * 00000001C001935C: movzx   ebp, r9w
 * 00000001C0019360: mov     r10d, ebx
 * 00000001C0019363: and     ebx, 1Fh
 * 00000001C0019366: shr     r10, 5
 * 00000001C001936A: lea     rax, [rdi+rdi*4]
 * 00000001C001936E: and     r10d, 7FFh
 * 00000001C0019375: mov     edx, ebx
 * 00000001C0019377: mov     ebx, 8
 * 00000001C001937C: lea     r11, [r10+rax*4]
 * 00000001C0019380: mov     r10, cs:WPP_GLOBAL_Control
 * 00000001C0019387: mov     eax, [r10+r11*4+2Ch]
 * 00000001C001938C: bt      eax, edx
 * 00000001C001938F: jb      loc_1C002DB5E
 * 00000001C0019395: and     [rsp+68h+var_20], 0
 * 00000001C001939B: lea     rax, [rsp+68h+arg_30]
 * 00000001C00193A3: mov     r9, [rsp+68h+arg_20]
 * 00000001C00193AB: mov     r8d, r14d
 * 00000001C00193AE: mov     [rsp+68h+var_28], rbx
 * 00000001C00193B3: mov     edx, esi
 * 00000001C00193B5: mov     [rsp+68h+var_30], rax
 * 00000001C00193BA: mov     rcx, r15
 * 00000001C00193BD: lea     rax, [rsp+68h+arg_28]
 * 00000001C00193C5: mov     [rsp+68h+var_38], 4
 * 00000001C00193CE: mov     [rsp+68h+var_40], rax
 * 00000001C00193D3: mov     word ptr [rsp+68h+var_48], bp
 * 00000001C00193D8: call    cs:__imp_WppAutoLogTrace
 * 00000001C00193DF: nop     dword ptr [rax+rax+00h]
 * 00000001C00193E4: lea     r11, [rsp+68h+var_18]
 * 00000001C00193E9: mov     rbx, [r11+20h]
 * 00000001C00193ED: mov     rbp, [r11+28h]
 * 00000001C00193F1: mov     rsi, [r11+30h]
 * 00000001C00193F5: mov     rsp, r11
 * 00000001C00193F8: pop     r15
 * 00000001C00193FA: pop     r14
 * 00000001C00193FC: pop     rdi
 * 00000001C00193FD: retn
 * 00000001C002DB5E: lea     rcx, [rdi+rdi*4]
 * 00000001C002DB62: add     rcx, rcx
 * 00000001C002DB65: cmp     [r10+rcx*8+29h], sil
 * 00000001C002DB6A: jb      loc_1C0019395
 * 00000001C002DB70: and     [rsp+68h+var_28], 0
 * 00000001C002DB76: lea     rdx, [rsp+68h+arg_30]
 * 00000001C002DB7E: mov     rax, cs:pfnWppTraceMessage
 * 00000001C002DB85: mov     r9d, ebp
 * 00000001C002DB88: mov     r8, [rsp+68h+arg_20]
 * 00000001C002DB90: mov     rcx, [r10+rcx*8+18h]
 * 00000001C002DB95: mov     [rsp+68h+var_30], rbx
 * 00000001C002DB9A: mov     [rsp+68h+var_38], rdx
 * 00000001C002DB9F: lea     rdx, [rsp+68h+arg_28]
 * 00000001C002DBA7: mov     [rsp+68h+var_40], 4
 * 00000001C002DBB0: mov     [rsp+68h+var_48], rdx
 * 00000001C002DBB5: mov     edx, 2Bh ; '+'
 * 00000001C002DBBA: call    cs:__guard_dispatch_icall_fptr
 * 00000001C002DBC0: nop
 * 00000001C002DBC1: jmp     loc_1C0019395
 */
