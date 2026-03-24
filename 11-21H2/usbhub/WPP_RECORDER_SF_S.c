/*
 * XREFs of WPP_RECORDER_SF_S @ 0x1C003ADD0
 * Callers:
 *     UsbhBusConnectPdo @ 0x1C001DE04 (UsbhBusConnectPdo.c)
 *     UsbhSetupDevice @ 0x1C0038CE8 (UsbhSetupDevice.c)
 *     UsbhGetInitRegUsbDeviceFlags @ 0x1C0044570 (UsbhGetInitRegUsbDeviceFlags.c)
 *     UsbhGetRegUsbDeviceFlags @ 0x1C0044F78 (UsbhGetRegUsbDeviceFlags.c)
 *     UsbhGetRegUsbHubFlags @ 0x1C0045268 (UsbhGetRegUsbHubFlags.c)
 *     UsbhQueryGlobalHubValue @ 0x1C0045610 (UsbhQueryGlobalHubValue.c)
 *     UsbhQueryGlobalLegacyDeviceValue @ 0x1C0045820 (UsbhQueryGlobalLegacyDeviceValue.c)
 *     UsbhRegDriverEntry @ 0x1C0045CB0 (UsbhRegDriverEntry.c)
 *     UsbhRegQueryGlobalKey @ 0x1C0046040 (UsbhRegQueryGlobalKey.c)
 *     UsbhRegQueryGlobalLegacyDeviceKeys @ 0x1C00461CC (UsbhRegQueryGlobalLegacyDeviceKeys.c)
 *     UsbhSetPdoRegistryParameter @ 0x1C0046494 (UsbhSetPdoRegistryParameter.c)
 *     Usbh_HUB_NO_CLEAR_TT_BUFFER_ON_CANCEL @ 0x1C0046980 (Usbh_HUB_NO_CLEAR_TT_BUFFER_ON_CANCEL.c)
 *     Usbh_HUB_POWER_ON_OVER_CURRENT @ 0x1C0046A50 (Usbh_HUB_POWER_ON_OVER_CURRENT.c)
 *     Usbh_HUB_RESET_TT_ON_CANCEL @ 0x1C0046B30 (Usbh_HUB_RESET_TT_ON_CANCEL.c)
 *     Usbh_SetFORCE_PORT_POWER @ 0x1C0046C00 (Usbh_SetFORCE_PORT_POWER.c)
 *     Usbh_SetFORCE_SINGLE_TT @ 0x1C0046CE0 (Usbh_SetFORCE_SINGLE_TT.c)
 *     Usbh_SetHUB_OVERCURRENT_DETECTED @ 0x1C0046DB0 (Usbh_SetHUB_OVERCURRENT_DETECTED.c)
 *     Usbh_SetHUB_SELECTIVE_SUSPEND @ 0x1C0046E80 (Usbh_SetHUB_SELECTIVE_SUSPEND.c)
 *     Usbh_SetPdoEXT_PROPERTY_INSTALLED @ 0x1C0046F60 (Usbh_SetPdoEXT_PROPERTY_INSTALLED.c)
 *     Usbh_SetPdoFRIENDLY_NAME @ 0x1C0047030 (Usbh_SetPdoFRIENDLY_NAME.c)
 *     Usbh_SetPdo_ALLOWIDLEIRPIND3_INSTALLED @ 0x1C0047110 (Usbh_SetPdo_ALLOWIDLEIRPIND3_INSTALLED.c)
 *     Usbh_SetPdo_SELECTIVESUSPENDED_INSTALLED @ 0x1C00471E0 (Usbh_SetPdo_SELECTIVESUSPENDED_INSTALLED.c)
 *     Usbh_SetPdo_USBPDO_D3COLDRECONNECTTIMEOUT_INSTALLED @ 0x1C00472B0 (Usbh_SetPdo_USBPDO_D3COLDRECONNECTTIMEOUT_INSTALLED.c)
 *     Usbh_SetWAKE_ON_CONNECT @ 0x1C00473B0 (Usbh_SetWAKE_ON_CONNECT.c)
 *     Usbh_USB_DEVICE_POWER_UP_DELAY @ 0x1C00474C0 (Usbh_USB_DEVICE_POWER_UP_DELAY.c)
 *     Usbh_USB_DISABLE_ON_SOFT_REMOVE @ 0x1C00475A0 (Usbh_USB_DISABLE_ON_SOFT_REMOVE.c)
 *     Usbh_USB_IGNORE_SN @ 0x1C0047670 (Usbh_USB_IGNORE_SN.c)
 *     Usbh_USB_MSOS20_DESCRIPTOR_SET_INFO_QUERY @ 0x1C0047740 (Usbh_USB_MSOS20_DESCRIPTOR_SET_INFO_QUERY.c)
 *     Usbh_USB_OS_VENDOR_CODE @ 0x1C0047810 (Usbh_USB_OS_VENDOR_CODE.c)
 *     Usbh_USB_REQUEST_CONFIG_ON_RESET @ 0x1C0047910 (Usbh_USB_REQUEST_CONFIG_ON_RESET.c)
 *     Usbh_USB_RESET_ON_RESUME @ 0x1C00479E0 (Usbh_USB_RESET_ON_RESUME.c)
 *     Usbh_USB_SKIP_BOS_DESCRIPTOR_QUERY @ 0x1C0047AB0 (Usbh_USB_SKIP_BOS_DESCRIPTOR_QUERY.c)
 *     Usbh_USB_SKIP_CONTAINER_ID_QUERY @ 0x1C0047B80 (Usbh_USB_SKIP_CONTAINER_ID_QUERY.c)
 *     UsbhPdoPnp_QueryDeviceText @ 0x1C0054C70 (UsbhPdoPnp_QueryDeviceText.c)
 *     UsbhDeleteUxdDeviceKey @ 0x1C005919C (UsbhDeleteUxdDeviceKey.c)
 *     UsbhDeleteUxdPortSettings @ 0x1C005925C (UsbhDeleteUxdPortSettings.c)
 *     UsbhDeleteUxdSubKeys @ 0x1C0059444 (UsbhDeleteUxdSubKeys.c)
 *     UsbhGetGlobalUxdSettings @ 0x1C00595D4 (UsbhGetGlobalUxdSettings.c)
 *     UsbhQueryUxdDevice @ 0x1C005A1A0 (UsbhQueryUxdDevice.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C001F4F0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_S @ 0x1C003ADD0
 * Reason: Hex-Rays returned no pseudocode for 0x1C003ADD0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C003ADD0: mov     rax, rsp
 * 00000001C003ADD3: mov     [rax+8], rbx
 * 00000001C003ADD7: mov     [rax+10h], rbp
 * 00000001C003ADDB: mov     [rax+18h], rsi
 * 00000001C003ADDF: mov     [rax+20h], rdi
 * 00000001C003ADE3: push    r12
 * 00000001C003ADE5: push    r14
 * 00000001C003ADE7: push    r15
 * 00000001C003ADE9: sub     rsp, 40h
 * 00000001C003ADED: mov     rax, cs:WPP_GLOBAL_Control
 * 00000001C003ADF4: lea     r12, aNull_0; "NULL"
 * 00000001C003ADFB: mov     rbx, [rsp+58h+arg_28]
 * 00000001C003AE03: or      rdi, 0FFFFFFFFFFFFFFFFh
 * 00000001C003AE07: xor     r15d, r15d
 * 00000001C003AE0A: movzx   ebp, r9w
 * 00000001C003AE0E: mov     r14, rcx
 * 00000001C003AE11: mov     edx, [rax+2Ch]
 * 00000001C003AE14: lea     esi, [rdi+0Bh]
 * 00000001C003AE17: test    dl, 1
 * 00000001C003AE1A: jz      short loc_1C003AE7C
 * 00000001C003AE1C: test    rbx, rbx
 * 00000001C003AE1F: jz      short loc_1C003AE38
 * 00000001C003AE21: mov     rax, rdi
 * 00000001C003AE24: inc     rax
 * 00000001C003AE27: cmp     [rbx+rax*2], r15w
 * 00000001C003AE2C: jnz     short loc_1C003AE24
 * 00000001C003AE2E: lea     rdx, ds:2[rax*2]
 * 00000001C003AE36: jmp     short loc_1C003AE3B
 * 00000001C003AE38: mov     rdx, rsi
 * 00000001C003AE3B: mov     rax, cs:pfnWppTraceMessage
 * 00000001C003AE42: test    rbx, rbx
 * 00000001C003AE45: mov     r8, [rsp+58h+arg_20]
 * 00000001C003AE4D: mov     rcx, rbx
 * 00000001C003AE50: cmovz   rcx, r12
 * 00000001C003AE54: mov     [rsp+58h+var_28], r15
 * 00000001C003AE59: mov     [rsp+58h+var_30], rdx
 * 00000001C003AE5E: mov     r9d, ebp
 * 00000001C003AE61: mov     [rsp+58h+var_38], rcx
 * 00000001C003AE66: mov     edx, 2Bh ; '+'
 * 00000001C003AE6B: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C003AE72: mov     rcx, [rcx+18h]
 * 00000001C003AE76: call    cs:__guard_dispatch_icall_fptr
 * 00000001C003AE7C: test    rbx, rbx
 * 00000001C003AE7F: jz      short loc_1C003AE96
 * 00000001C003AE81: inc     rdi
 * 00000001C003AE84: cmp     [rbx+rdi*2], r15w
 * 00000001C003AE89: jnz     short loc_1C003AE81
 * 00000001C003AE8B: lea     rsi, ds:2[rdi*2]
 * 00000001C003AE93: test    rbx, rbx
 * 00000001C003AE96: mov     r9, [rsp+58h+arg_20]
 * 00000001C003AE9E: cmovz   rbx, r12
 * 00000001C003AEA2: mov     [rsp+58h+var_20], r15
 * 00000001C003AEA7: xor     edx, edx
 * 00000001C003AEA9: mov     [rsp+58h+var_28], rsi
 * 00000001C003AEAE: mov     rcx, r14
 * 00000001C003AEB1: mov     [rsp+58h+var_30], rbx
 * 00000001C003AEB6: mov     word ptr [rsp+58h+var_38], bp
 * 00000001C003AEBB: lea     r8d, [rdx+1]
 * 00000001C003AEBF: call    cs:__imp_WppAutoLogTrace
 * 00000001C003AEC6: nop     dword ptr [rax+rax+00h]
 * 00000001C003AECB: mov     rbx, [rsp+58h+arg_0]
 * 00000001C003AED0: mov     rbp, [rsp+58h+arg_8]
 * 00000001C003AED5: mov     rsi, [rsp+58h+arg_10]
 * 00000001C003AEDA: mov     rdi, [rsp+58h+arg_18]
 * 00000001C003AEDF: add     rsp, 40h
 * 00000001C003AEE3: pop     r15
 * 00000001C003AEE5: pop     r14
 * 00000001C003AEE7: pop     r12
 * 00000001C003AEE9: retn
 */
