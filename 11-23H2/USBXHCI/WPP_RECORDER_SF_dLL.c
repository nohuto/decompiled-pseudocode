/*
 * XREFs of WPP_RECORDER_SF_dLL @ 0x1C004A0F0
 * Callers:
 *     UsbDevice_DeviceResetCompletion @ 0x1C0048660 (UsbDevice_DeviceResetCompletion.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00203A0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_dLL @ 0x1C004A0F0
 * Reason: Hex-Rays returned no pseudocode for 0x1C004A0F0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C004A0F0: mov     r11, rsp
 * 00000001C004A0F3: mov     [r11+8], rbx
 * 00000001C004A0F7: mov     [r11+10h], rsi
 * 00000001C004A0FB: push    rdi
 * 00000001C004A0FC: sub     rsp, 60h
 * 00000001C004A100: mov     rbx, rcx
 * 00000001C004A103: mov     esi, 40h ; '@'
 * 00000001C004A108: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C004A10F: lea     edi, [rsi-3Ch]
 * 00000001C004A112: test    dword ptr [rcx+2Ch], 800h
 * 00000001C004A119: jz      short loc_1C004A168
 * 00000001C004A11B: cmp     byte ptr [rcx+29h], 2
 * 00000001C004A11F: jb      short loc_1C004A168
 * 00000001C004A121: and     qword ptr [r11-18h], 0
 * 00000001C004A126: lea     rdx, [r11+40h]
 * 00000001C004A12A: mov     rax, cs:pfnWppTraceMessage
 * 00000001C004A131: lea     r8, WPP_a3acd40f84823909f7fc3b79b04bc30f_Traceguids
 * 00000001C004A138: mov     rcx, [rcx+18h]
 * 00000001C004A13C: mov     r9d, esi
 * 00000001C004A13F: mov     [r11-20h], rdi
 * 00000001C004A143: mov     [r11-28h], rdx
 * 00000001C004A147: lea     rdx, [r11+38h]
 * 00000001C004A14B: mov     [r11-30h], rdi
 * 00000001C004A14F: mov     [r11-38h], rdx
 * 00000001C004A153: lea     rdx, [r11+30h]
 * 00000001C004A157: mov     [r11-40h], rdi
 * 00000001C004A15B: mov     [r11-48h], rdx
 * 00000001C004A15F: lea     edx, [rsi-15h]
 * 00000001C004A162: call    cs:__guard_dispatch_icall_fptr
 * 00000001C004A168: and     [rsp+68h+var_10], 0
 * 00000001C004A16E: lea     rax, [rsp+68h+arg_38]
 * 00000001C004A176: mov     [rsp+68h+var_18], rdi
 * 00000001C004A17B: lea     r9, WPP_a3acd40f84823909f7fc3b79b04bc30f_Traceguids
 * 00000001C004A182: mov     [rsp+68h+var_20], rax
 * 00000001C004A187: mov     edx, 2
 * 00000001C004A18C: mov     [rsp+68h+var_28], rdi
 * 00000001C004A191: lea     rax, [rsp+68h+arg_30]
 * 00000001C004A199: mov     [rsp+68h+var_30], rax
 * 00000001C004A19E: mov     rcx, rbx
 * 00000001C004A1A1: lea     rax, [rsp+68h+arg_28]
 * 00000001C004A1A9: mov     [rsp+68h+var_38], rdi
 * 00000001C004A1AE: mov     [rsp+68h+var_40], rax
 * 00000001C004A1B3: lea     r8d, [rdx+0Ah]
 * 00000001C004A1B7: mov     [rsp+68h+var_48], si
 * 00000001C004A1BC: call    cs:__imp_WppAutoLogTrace
 * 00000001C004A1C3: nop     dword ptr [rax+rax+00h]
 * 00000001C004A1C8: mov     rbx, [rsp+68h+arg_0]
 * 00000001C004A1CD: mov     rsi, [rsp+68h+arg_8]
 * 00000001C004A1D2: add     rsp, 60h
 * 00000001C004A1D6: pop     rdi
 * 00000001C004A1D7: retn
 */
