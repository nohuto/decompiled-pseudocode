/*
 * XREFs of WPP_RECORDER_SF_dL @ 0x1C003EC94
 * Callers:
 *     IoControl_WdfEvtIoDeviceControl @ 0x1C003E500 (IoControl_WdfEvtIoDeviceControl.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00203A0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_dL @ 0x1C003EC94
 * Reason: Hex-Rays returned no pseudocode for 0x1C003EC94
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C003EC94: mov     r11, rsp
 * 00000001C003EC97: mov     [r11+8], rbx
 * 00000001C003EC9B: mov     [r11+10h], rsi
 * 00000001C003EC9F: push    rdi
 * 00000001C003ECA0: sub     rsp, 50h
 * 00000001C003ECA4: mov     rbx, rcx
 * 00000001C003ECA7: mov     esi, 0Eh
 * 00000001C003ECAC: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C003ECB3: lea     edi, [rsi-0Ah]
 * 00000001C003ECB6: mov     eax, [rcx+2Ch]
 * 00000001C003ECB9: test    al, 10h
 * 00000001C003ECBB: jz      short loc_1C003ECFE
 * 00000001C003ECBD: cmp     byte ptr [rcx+29h], 3
 * 00000001C003ECC1: jb      short loc_1C003ECFE
 * 00000001C003ECC3: and     qword ptr [r11-18h], 0
 * 00000001C003ECC8: lea     rdx, [r11+38h]
 * 00000001C003ECCC: mov     rax, cs:pfnWppTraceMessage
 * 00000001C003ECD3: lea     r8, WPP_f5d171e210703c9bf22dbf511a7fd9e0_Traceguids
 * 00000001C003ECDA: mov     rcx, [rcx+18h]
 * 00000001C003ECDE: mov     r9d, esi
 * 00000001C003ECE1: mov     [r11-20h], rdi
 * 00000001C003ECE5: mov     [r11-28h], rdx
 * 00000001C003ECE9: lea     rdx, [r11+30h]
 * 00000001C003ECED: mov     [r11-30h], rdi
 * 00000001C003ECF1: mov     [r11-38h], rdx
 * 00000001C003ECF5: lea     edx, [rsi+1Dh]
 * 00000001C003ECF8: call    cs:__guard_dispatch_icall_fptr
 * 00000001C003ECFE: and     [rsp+58h+var_10], 0
 * 00000001C003ED04: lea     rax, [rsp+58h+arg_30]
 * 00000001C003ED0C: mov     [rsp+58h+var_18], rdi
 * 00000001C003ED11: lea     r9, WPP_f5d171e210703c9bf22dbf511a7fd9e0_Traceguids
 * 00000001C003ED18: mov     [rsp+58h+var_20], rax
 * 00000001C003ED1D: mov     edx, 3
 * 00000001C003ED22: lea     rax, [rsp+58h+arg_28]
 * 00000001C003ED2A: mov     [rsp+58h+var_28], rdi
 * 00000001C003ED2F: mov     [rsp+58h+var_30], rax
 * 00000001C003ED34: mov     rcx, rbx
 * 00000001C003ED37: mov     [rsp+58h+var_38], si
 * 00000001C003ED3C: lea     r8d, [rdx+2]
 * 00000001C003ED40: call    cs:__imp_WppAutoLogTrace
 * 00000001C003ED47: nop     dword ptr [rax+rax+00h]
 * 00000001C003ED4C: mov     rbx, [rsp+58h+arg_0]
 * 00000001C003ED51: mov     rsi, [rsp+58h+arg_8]
 * 00000001C003ED56: add     rsp, 50h
 * 00000001C003ED5A: pop     rdi
 * 00000001C003ED5B: retn
 */
