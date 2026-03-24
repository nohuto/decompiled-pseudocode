/*
 * XREFs of WPP_RECORDER_SF_dqLL @ 0x1C004A560
 * Callers:
 *     UsbDevice_DeviceResetCompletion @ 0x1C0048660 (UsbDevice_DeviceResetCompletion.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00203A0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_dqLL @ 0x1C004A560
 * Reason: Hex-Rays returned no pseudocode for 0x1C004A560
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C004A560: mov     r11, rsp
 * 00000001C004A563: mov     [r11+8], rbx
 * 00000001C004A567: mov     [r11+10h], rbp
 * 00000001C004A56B: push    rdi
 * 00000001C004A56C: sub     rsp, 70h
 * 00000001C004A570: mov     rbx, rcx
 * 00000001C004A573: mov     ebp, 41h ; 'A'
 * 00000001C004A578: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C004A57F: lea     edi, [rbp-3Dh]
 * 00000001C004A582: test    dword ptr [rcx+2Ch], 800h
 * 00000001C004A589: jz      short loc_1C004A5E8
 * 00000001C004A58B: cmp     byte ptr [rcx+29h], 2
 * 00000001C004A58F: jb      short loc_1C004A5E8
 * 00000001C004A591: and     qword ptr [r11-18h], 0
 * 00000001C004A596: lea     rdx, [r11+48h]
 * 00000001C004A59A: mov     rax, cs:pfnWppTraceMessage
 * 00000001C004A5A1: lea     r8, WPP_a3acd40f84823909f7fc3b79b04bc30f_Traceguids
 * 00000001C004A5A8: mov     rcx, [rcx+18h]
 * 00000001C004A5AC: mov     r9d, ebp
 * 00000001C004A5AF: mov     [r11-20h], rdi
 * 00000001C004A5B3: mov     [r11-28h], rdx
 * 00000001C004A5B7: lea     rdx, [r11+40h]
 * 00000001C004A5BB: mov     [r11-30h], rdi
 * 00000001C004A5BF: mov     [r11-38h], rdx
 * 00000001C004A5C3: lea     rdx, [r11+38h]
 * 00000001C004A5C7: mov     qword ptr [r11-40h], 8
 * 00000001C004A5CF: mov     [r11-48h], rdx
 * 00000001C004A5D3: lea     rdx, [r11+30h]
 * 00000001C004A5D7: mov     [r11-50h], rdi
 * 00000001C004A5DB: mov     [r11-58h], rdx
 * 00000001C004A5DF: lea     edx, [rbp-16h]
 * 00000001C004A5E2: call    cs:__guard_dispatch_icall_fptr
 * 00000001C004A5E8: and     [rsp+78h+var_10], 0
 * 00000001C004A5EE: lea     rax, [rsp+78h+arg_40]
 * 00000001C004A5F6: mov     [rsp+78h+var_18], rdi
 * 00000001C004A5FB: lea     r9, WPP_a3acd40f84823909f7fc3b79b04bc30f_Traceguids
 * 00000001C004A602: mov     [rsp+78h+var_20], rax
 * 00000001C004A607: mov     edx, 2
 * 00000001C004A60C: mov     [rsp+78h+var_28], rdi
 * 00000001C004A611: lea     rax, [rsp+78h+arg_38]
 * 00000001C004A619: mov     [rsp+78h+var_30], rax
 * 00000001C004A61E: mov     rcx, rbx
 * 00000001C004A621: mov     [rsp+78h+var_38], 8
 * 00000001C004A62A: lea     rax, [rsp+78h+arg_30]
 * 00000001C004A632: mov     [rsp+78h+var_40], rax
 * 00000001C004A637: lea     r8d, [rdx+0Ah]
 * 00000001C004A63B: lea     rax, [rsp+78h+arg_28]
 * 00000001C004A643: mov     [rsp+78h+var_48], rdi
 * 00000001C004A648: mov     [rsp+78h+var_50], rax
 * 00000001C004A64D: mov     [rsp+78h+var_58], bp
 * 00000001C004A652: call    cs:__imp_WppAutoLogTrace
 * 00000001C004A659: nop     dword ptr [rax+rax+00h]
 * 00000001C004A65E: lea     r11, [rsp+78h+var_8]
 * 00000001C004A663: mov     rbx, [r11+10h]
 * 00000001C004A667: mov     rbp, [r11+18h]
 * 00000001C004A66B: mov     rsp, r11
 * 00000001C004A66E: pop     rdi
 * 00000001C004A66F: retn
 */
