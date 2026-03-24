/*
 * XREFs of WPP_RECORDER_SF_PP @ 0x1C003E9AC
 * Callers:
 *     IoControl_WdfEvtIoDeviceControl @ 0x1C003E3C0 (IoControl_WdfEvtIoDeviceControl.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0020270 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_PP @ 0x1C003E9AC
 * Reason: Hex-Rays returned no pseudocode for 0x1C003E9AC
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C003E9AC: mov     r11, rsp
 * 00000001C003E9AF: mov     [r11+8], rbx
 * 00000001C003E9B3: mov     [r11+10h], rsi
 * 00000001C003E9B7: push    rdi
 * 00000001C003E9B8: sub     rsp, 50h
 * 00000001C003E9BC: mov     rbx, rcx
 * 00000001C003E9BF: mov     esi, 0Ch
 * 00000001C003E9C4: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C003E9CB: lea     edi, [rsi-4]
 * 00000001C003E9CE: mov     eax, [rcx+2Ch]
 * 00000001C003E9D1: test    al, 10h
 * 00000001C003E9D3: jz      short loc_1C003EA16
 * 00000001C003E9D5: cmp     byte ptr [rcx+29h], 3
 * 00000001C003E9D9: jb      short loc_1C003EA16
 * 00000001C003E9DB: and     qword ptr [r11-18h], 0
 * 00000001C003E9E0: lea     rdx, [r11+38h]
 * 00000001C003E9E4: mov     rax, cs:pfnWppTraceMessage
 * 00000001C003E9EB: lea     r8, WPP_f5d171e210703c9bf22dbf511a7fd9e0_Traceguids
 * 00000001C003E9F2: mov     rcx, [rcx+18h]
 * 00000001C003E9F6: mov     r9d, esi
 * 00000001C003E9F9: mov     [r11-20h], rdi
 * 00000001C003E9FD: mov     [r11-28h], rdx
 * 00000001C003EA01: lea     rdx, [r11+30h]
 * 00000001C003EA05: mov     [r11-30h], rdi
 * 00000001C003EA09: mov     [r11-38h], rdx
 * 00000001C003EA0D: lea     edx, [rsi+1Fh]
 * 00000001C003EA10: call    cs:__guard_dispatch_icall_fptr
 * 00000001C003EA16: and     [rsp+58h+var_10], 0
 * 00000001C003EA1C: lea     rax, [rsp+58h+arg_30]
 * 00000001C003EA24: mov     [rsp+58h+var_18], rdi
 * 00000001C003EA29: lea     r9, WPP_f5d171e210703c9bf22dbf511a7fd9e0_Traceguids
 * 00000001C003EA30: mov     [rsp+58h+var_20], rax
 * 00000001C003EA35: mov     edx, 3
 * 00000001C003EA3A: lea     rax, [rsp+58h+arg_28]
 * 00000001C003EA42: mov     [rsp+58h+var_28], rdi
 * 00000001C003EA47: mov     [rsp+58h+var_30], rax
 * 00000001C003EA4C: mov     rcx, rbx
 * 00000001C003EA4F: mov     [rsp+58h+var_38], si
 * 00000001C003EA54: lea     r8d, [rdx+2]
 * 00000001C003EA58: call    cs:__imp_WppAutoLogTrace
 * 00000001C003EA5F: nop     dword ptr [rax+rax+00h]
 * 00000001C003EA64: mov     rbx, [rsp+58h+arg_0]
 * 00000001C003EA69: mov     rsi, [rsp+58h+arg_8]
 * 00000001C003EA6E: add     rsp, 50h
 * 00000001C003EA72: pop     rdi
 * 00000001C003EA73: retn
 */
