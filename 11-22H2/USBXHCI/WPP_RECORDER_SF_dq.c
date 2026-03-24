/*
 * XREFs of WPP_RECORDER_SF_dq @ 0x1C0019380
 * Callers:
 *     UsbDevice_ValidateEndpointConfigureRequest @ 0x1C0008B44 (UsbDevice_ValidateEndpointConfigureRequest.c)
 *     UsbDevice_EndpointsConfigureCompletion @ 0x1C000D0A0 (UsbDevice_EndpointsConfigureCompletion.c)
 *     UsbDevice_SetDeviceDisabled @ 0x1C000FD7C (UsbDevice_SetDeviceDisabled.c)
 *     UsbDevice_UcxEvtReset @ 0x1C0018D80 (UsbDevice_UcxEvtReset.c)
 *     UsbDevice_UcxEvtAddress @ 0x1C0019460 (UsbDevice_UcxEvtAddress.c)
 *     UsbDevice_EnableCompletion @ 0x1C00195B0 (UsbDevice_EnableCompletion.c)
 *     UsbDevice_SetAddressCompletion @ 0x1C0019A50 (UsbDevice_SetAddressCompletion.c)
 *     XilCoreDeviceSlot_SetDeviceContext @ 0x1C0019E94 (XilCoreDeviceSlot_SetDeviceContext.c)
 *     UsbDevice_UpdateCompletion @ 0x1C001D360 (UsbDevice_UpdateCompletion.c)
 *     UsbDevice_ConfigureEndpointCompletion @ 0x1C0048250 (UsbDevice_ConfigureEndpointCompletion.c)
 *     UsbDevice_DeviceResetCompletion @ 0x1C0048520 (UsbDevice_DeviceResetCompletion.c)
 *     UsbDevice_DisableCompletion @ 0x1C0048760 (UsbDevice_DisableCompletion.c)
 *     UsbDevice_DropEndpointsCompletion @ 0x1C0048AA0 (UsbDevice_DropEndpointsCompletion.c)
 *     UsbDevice_UcxEvtDisable @ 0x1C0049C80 (UsbDevice_UcxEvtDisable.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0020270 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_dq @ 0x1C0019380
 * Reason: Hex-Rays returned no pseudocode for 0x1C0019380
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0019380: mov     [rsp+arg_0], rbx
 * 00000001C0019385: mov     [rsp+arg_8], rbp
 * 00000001C001938A: mov     [rsp+arg_10], rsi
 * 00000001C001938F: push    rdi
 * 00000001C0019390: push    r14
 * 00000001C0019392: push    r15
 * 00000001C0019394: sub     rsp, 50h
 * 00000001C0019398: mov     r14d, r8d
 * 00000001C001939B: mov     r15, rcx
 * 00000001C001939E: mov     edi, r8d
 * 00000001C00193A1: shr     rdi, 10h
 * 00000001C00193A5: movzx   esi, dl
 * 00000001C00193A8: lea     ebx, [r14-1]
 * 00000001C00193AC: movzx   ebp, r9w
 * 00000001C00193B0: mov     r10d, ebx
 * 00000001C00193B3: and     ebx, 1Fh
 * 00000001C00193B6: shr     r10, 5
 * 00000001C00193BA: lea     rax, [rdi+rdi*4]
 * 00000001C00193BE: and     r10d, 7FFh
 * 00000001C00193C5: mov     edx, ebx
 * 00000001C00193C7: mov     ebx, 8
 * 00000001C00193CC: lea     r11, [r10+rax*4]
 * 00000001C00193D0: mov     r10, cs:WPP_GLOBAL_Control
 * 00000001C00193D7: mov     eax, [r10+r11*4+2Ch]
 * 00000001C00193DC: bt      eax, edx
 * 00000001C00193DF: jb      loc_1C002DA1E
 * 00000001C00193E5: and     [rsp+68h+var_20], 0
 * 00000001C00193EB: lea     rax, [rsp+68h+arg_30]
 * 00000001C00193F3: mov     r9, [rsp+68h+arg_20]
 * 00000001C00193FB: mov     r8d, r14d
 * 00000001C00193FE: mov     [rsp+68h+var_28], rbx
 * 00000001C0019403: mov     edx, esi
 * 00000001C0019405: mov     [rsp+68h+var_30], rax
 * 00000001C001940A: mov     rcx, r15
 * 00000001C001940D: lea     rax, [rsp+68h+arg_28]
 * 00000001C0019415: mov     [rsp+68h+var_38], 4
 * 00000001C001941E: mov     [rsp+68h+var_40], rax
 * 00000001C0019423: mov     word ptr [rsp+68h+var_48], bp
 * 00000001C0019428: call    cs:__imp_WppAutoLogTrace
 * 00000001C001942F: nop     dword ptr [rax+rax+00h]
 * 00000001C0019434: lea     r11, [rsp+68h+var_18]
 * 00000001C0019439: mov     rbx, [r11+20h]
 * 00000001C001943D: mov     rbp, [r11+28h]
 * 00000001C0019441: mov     rsi, [r11+30h]
 * 00000001C0019445: mov     rsp, r11
 * 00000001C0019448: pop     r15
 * 00000001C001944A: pop     r14
 * 00000001C001944C: pop     rdi
 * 00000001C001944D: retn
 * 00000001C002DA1E: lea     rcx, [rdi+rdi*4]
 * 00000001C002DA22: add     rcx, rcx
 * 00000001C002DA25: cmp     [r10+rcx*8+29h], sil
 * 00000001C002DA2A: jb      loc_1C00193E5
 * 00000001C002DA30: and     [rsp+68h+var_28], 0
 * 00000001C002DA36: lea     rdx, [rsp+68h+arg_30]
 * 00000001C002DA3E: mov     rax, cs:pfnWppTraceMessage
 * 00000001C002DA45: mov     r9d, ebp
 * 00000001C002DA48: mov     r8, [rsp+68h+arg_20]
 * 00000001C002DA50: mov     rcx, [r10+rcx*8+18h]
 * 00000001C002DA55: mov     [rsp+68h+var_30], rbx
 * 00000001C002DA5A: mov     [rsp+68h+var_38], rdx
 * 00000001C002DA5F: lea     rdx, [rsp+68h+arg_28]
 * 00000001C002DA67: mov     [rsp+68h+var_40], 4
 * 00000001C002DA70: mov     [rsp+68h+var_48], rdx
 * 00000001C002DA75: mov     edx, 2Bh ; '+'
 * 00000001C002DA7A: call    cs:__guard_dispatch_icall_fptr
 * 00000001C002DA80: nop
 * 00000001C002DA81: jmp     loc_1C00193E5
 */
