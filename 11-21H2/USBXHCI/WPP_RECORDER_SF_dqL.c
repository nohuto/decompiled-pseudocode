/*
 * XREFs of WPP_RECORDER_SF_dqL @ 0x1C0002904
 * Callers:
 *     UsbDevice_EndpointsConfigureCompletion @ 0x1C00020D0 (UsbDevice_EndpointsConfigureCompletion.c)
 *     UsbDevice_UcxEvtReset @ 0x1C0010F60 (UsbDevice_UcxEvtReset.c)
 *     UsbDevice_DisableCompletion @ 0x1C00462A4 (UsbDevice_DisableCompletion.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00199B0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_dqL @ 0x1C0002904
 * Reason: Hex-Rays returned no pseudocode for 0x1C0002904
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0002904: mov     [rsp+arg_0], rbx
 * 00000001C0002909: mov     [rsp+arg_8], rbp
 * 00000001C000290E: mov     [rsp+arg_10], rsi
 * 00000001C0002913: push    rdi
 * 00000001C0002914: sub     rsp, 60h
 * 00000001C0002918: mov     rsi, rcx
 * 00000001C000291B: movzx   edi, r9w
 * 00000001C000291F: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0002926: mov     ebp, 4
 * 00000001C000292B: movzx   ebx, dl
 * 00000001C000292E: test    dword ptr [rcx+2Ch], 800h
 * 00000001C0002935: jnz     loc_1C0020E1A
 * 00000001C000293B: and     [rsp+68h+var_10], 0
 * 00000001C0002941: lea     rax, [rsp+68h+arg_38]
 * 00000001C0002949: mov     [rsp+68h+var_18], rbp
 * 00000001C000294E: lea     r9, WPP_5cc87a4a737631244eec1c43efcd9051_Traceguids
 * 00000001C0002955: mov     [rsp+68h+var_20], rax
 * 00000001C000295A: mov     r8d, 0Ch
 * 00000001C0002960: mov     [rsp+68h+var_28], 8
 * 00000001C0002969: lea     rax, [rsp+68h+arg_30]
 * 00000001C0002971: mov     [rsp+68h+var_30], rax
 * 00000001C0002976: mov     edx, ebx
 * 00000001C0002978: lea     rax, [rsp+68h+arg_28]
 * 00000001C0002980: mov     [rsp+68h+var_38], rbp
 * 00000001C0002985: mov     [rsp+68h+var_40], rax
 * 00000001C000298A: mov     rcx, rsi
 * 00000001C000298D: mov     word ptr [rsp+68h+var_48], di
 * 00000001C0002992: call    cs:__imp_WppAutoLogTrace
 * 00000001C0002999: nop     dword ptr [rax+rax+00h]
 * 00000001C000299E: lea     r11, [rsp+68h+var_8]
 * 00000001C00029A3: mov     rbx, [r11+10h]
 * 00000001C00029A7: mov     rbp, [r11+18h]
 * 00000001C00029AB: mov     rsi, [r11+20h]
 * 00000001C00029AF: mov     rsp, r11
 * 00000001C00029B2: pop     rdi
 * 00000001C00029B3: retn
 * 00000001C0020E1A: cmp     [rcx+29h], bl
 * 00000001C0020E1D: jb      loc_1C000293B
 * 00000001C0020E23: and     [rsp+68h+var_18], 0
 * 00000001C0020E29: lea     rdx, [rsp+68h+arg_38]
 * 00000001C0020E31: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0020E38: lea     r8, WPP_5cc87a4a737631244eec1c43efcd9051_Traceguids
 * 00000001C0020E3F: mov     rcx, [rcx+18h]
 * 00000001C0020E43: mov     r9d, edi
 * 00000001C0020E46: mov     [rsp+68h+var_20], rbp
 * 00000001C0020E4B: mov     [rsp+68h+var_28], rdx
 * 00000001C0020E50: lea     rdx, [rsp+68h+arg_30]
 * 00000001C0020E58: mov     [rsp+68h+var_30], 8
 * 00000001C0020E61: mov     [rsp+68h+var_38], rdx
 * 00000001C0020E66: lea     rdx, [rsp+68h+arg_28]
 * 00000001C0020E6E: mov     [rsp+68h+var_40], rbp
 * 00000001C0020E73: mov     [rsp+68h+var_48], rdx
 * 00000001C0020E78: mov     edx, 2Bh ; '+'
 * 00000001C0020E7D: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0020E83: nop
 * 00000001C0020E84: jmp     loc_1C000293B
 */
