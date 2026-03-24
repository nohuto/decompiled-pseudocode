/*
 * XREFs of WPP_RECORDER_SF_dL @ 0x1C003CE94
 * Callers:
 *     IoControl_WdfEvtIoDeviceControl @ 0x1C003C700 (IoControl_WdfEvtIoDeviceControl.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00199B0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_dL @ 0x1C003CE94
 * Reason: Hex-Rays returned no pseudocode for 0x1C003CE94
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C003CE94: mov     r11, rsp
 * 00000001C003CE97: mov     [r11+8], rbx
 * 00000001C003CE9B: mov     [r11+10h], rsi
 * 00000001C003CE9F: push    rdi
 * 00000001C003CEA0: sub     rsp, 50h
 * 00000001C003CEA4: mov     rbx, rcx
 * 00000001C003CEA7: mov     esi, 0Eh
 * 00000001C003CEAC: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C003CEB3: lea     edi, [rsi-0Ah]
 * 00000001C003CEB6: mov     eax, [rcx+2Ch]
 * 00000001C003CEB9: test    al, 10h
 * 00000001C003CEBB: jz      short loc_1C003CEFF
 * 00000001C003CEBD: cmp     byte ptr [rcx+29h], 3
 * 00000001C003CEC1: jb      short loc_1C003CEFF
 * 00000001C003CEC3: and     qword ptr [r11-18h], 0
 * 00000001C003CEC8: lea     rdx, [r11+38h]
 * 00000001C003CECC: mov     rax, cs:pfnWppTraceMessage
 * 00000001C003CED3: lea     r8, WPP_f5d171e210703c9bf22dbf511a7fd9e0_Traceguids
 * 00000001C003CEDA: mov     rcx, [rcx+18h]
 * 00000001C003CEDE: mov     [r11-20h], rdi
 * 00000001C003CEE2: mov     [r11-28h], rdx
 * 00000001C003CEE6: lea     rdx, [r11+30h]
 * 00000001C003CEEA: mov     [r11-30h], rdi
 * 00000001C003CEEE: mov     [r11-38h], rdx
 * 00000001C003CEF2: lea     edx, [rsi+1Dh]
 * 00000001C003CEF5: movzx   r9d, si
 * 00000001C003CEF9: call    cs:__guard_dispatch_icall_fptr
 * 00000001C003CEFF: and     [rsp+58h+var_10], 0
 * 00000001C003CF05: lea     rax, [rsp+58h+arg_30]
 * 00000001C003CF0D: mov     [rsp+58h+var_18], rdi
 * 00000001C003CF12: lea     r9, WPP_f5d171e210703c9bf22dbf511a7fd9e0_Traceguids
 * 00000001C003CF19: mov     [rsp+58h+var_20], rax
 * 00000001C003CF1E: mov     edx, 3
 * 00000001C003CF23: lea     rax, [rsp+58h+arg_28]
 * 00000001C003CF2B: mov     [rsp+58h+var_28], rdi
 * 00000001C003CF30: mov     [rsp+58h+var_30], rax
 * 00000001C003CF35: mov     rcx, rbx
 * 00000001C003CF38: mov     [rsp+58h+var_38], si
 * 00000001C003CF3D: lea     r8d, [rdx+2]
 * 00000001C003CF41: call    cs:__imp_WppAutoLogTrace
 * 00000001C003CF48: nop     dword ptr [rax+rax+00h]
 * 00000001C003CF4D: mov     rbx, [rsp+58h+arg_0]
 * 00000001C003CF52: mov     rsi, [rsp+58h+arg_8]
 * 00000001C003CF57: add     rsp, 50h
 * 00000001C003CF5B: pop     rdi
 * 00000001C003CF5C: retn
 */
