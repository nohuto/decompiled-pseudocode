/*
 * XREFs of WPP_RECORDER_SF_dqLL @ 0x1C004A420
 * Callers:
 *     UsbDevice_DeviceResetCompletion @ 0x1C0048520 (UsbDevice_DeviceResetCompletion.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0020270 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_dqLL @ 0x1C004A420
 * Reason: Hex-Rays returned no pseudocode for 0x1C004A420
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C004A420: mov     r11, rsp
 * 00000001C004A423: mov     [r11+8], rbx
 * 00000001C004A427: mov     [r11+10h], rbp
 * 00000001C004A42B: push    rdi
 * 00000001C004A42C: sub     rsp, 70h
 * 00000001C004A430: mov     rbx, rcx
 * 00000001C004A433: mov     ebp, 41h ; 'A'
 * 00000001C004A438: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C004A43F: lea     edi, [rbp-3Dh]
 * 00000001C004A442: test    dword ptr [rcx+2Ch], 800h
 * 00000001C004A449: jz      short loc_1C004A4A8
 * 00000001C004A44B: cmp     byte ptr [rcx+29h], 2
 * 00000001C004A44F: jb      short loc_1C004A4A8
 * 00000001C004A451: and     qword ptr [r11-18h], 0
 * 00000001C004A456: lea     rdx, [r11+48h]
 * 00000001C004A45A: mov     rax, cs:pfnWppTraceMessage
 * 00000001C004A461: lea     r8, WPP_a3acd40f84823909f7fc3b79b04bc30f_Traceguids
 * 00000001C004A468: mov     rcx, [rcx+18h]
 * 00000001C004A46C: mov     r9d, ebp
 * 00000001C004A46F: mov     [r11-20h], rdi
 * 00000001C004A473: mov     [r11-28h], rdx
 * 00000001C004A477: lea     rdx, [r11+40h]
 * 00000001C004A47B: mov     [r11-30h], rdi
 * 00000001C004A47F: mov     [r11-38h], rdx
 * 00000001C004A483: lea     rdx, [r11+38h]
 * 00000001C004A487: mov     qword ptr [r11-40h], 8
 * 00000001C004A48F: mov     [r11-48h], rdx
 * 00000001C004A493: lea     rdx, [r11+30h]
 * 00000001C004A497: mov     [r11-50h], rdi
 * 00000001C004A49B: mov     [r11-58h], rdx
 * 00000001C004A49F: lea     edx, [rbp-16h]
 * 00000001C004A4A2: call    cs:__guard_dispatch_icall_fptr
 * 00000001C004A4A8: and     [rsp+78h+var_10], 0
 * 00000001C004A4AE: lea     rax, [rsp+78h+arg_40]
 * 00000001C004A4B6: mov     [rsp+78h+var_18], rdi
 * 00000001C004A4BB: lea     r9, WPP_a3acd40f84823909f7fc3b79b04bc30f_Traceguids
 * 00000001C004A4C2: mov     [rsp+78h+var_20], rax
 * 00000001C004A4C7: mov     edx, 2
 * 00000001C004A4CC: mov     [rsp+78h+var_28], rdi
 * 00000001C004A4D1: lea     rax, [rsp+78h+arg_38]
 * 00000001C004A4D9: mov     [rsp+78h+var_30], rax
 * 00000001C004A4DE: mov     rcx, rbx
 * 00000001C004A4E1: mov     [rsp+78h+var_38], 8
 * 00000001C004A4EA: lea     rax, [rsp+78h+arg_30]
 * 00000001C004A4F2: mov     [rsp+78h+var_40], rax
 * 00000001C004A4F7: lea     r8d, [rdx+0Ah]
 * 00000001C004A4FB: lea     rax, [rsp+78h+arg_28]
 * 00000001C004A503: mov     [rsp+78h+var_48], rdi
 * 00000001C004A508: mov     [rsp+78h+var_50], rax
 * 00000001C004A50D: mov     [rsp+78h+var_58], bp
 * 00000001C004A512: call    cs:__imp_WppAutoLogTrace
 * 00000001C004A519: nop     dword ptr [rax+rax+00h]
 * 00000001C004A51E: lea     r11, [rsp+78h+var_8]
 * 00000001C004A523: mov     rbx, [r11+10h]
 * 00000001C004A527: mov     rbp, [r11+18h]
 * 00000001C004A52B: mov     rsp, r11
 * 00000001C004A52E: pop     rdi
 * 00000001C004A52F: retn
 */
