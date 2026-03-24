/*
 * XREFs of WPP_RECORDER_SF_dqdL @ 0x1C004A538
 * Callers:
 *     UsbDevice_SetAddressCompletion @ 0x1C0019A50 (UsbDevice_SetAddressCompletion.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0020270 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_dqdL @ 0x1C004A538
 * Reason: Hex-Rays returned no pseudocode for 0x1C004A538
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C004A538: mov     r11, rsp
 * 00000001C004A53B: mov     [r11+8], rbx
 * 00000001C004A53F: mov     [r11+10h], rbp
 * 00000001C004A543: push    rdi
 * 00000001C004A544: sub     rsp, 70h
 * 00000001C004A548: mov     rbx, rcx
 * 00000001C004A54B: mov     ebp, 19h
 * 00000001C004A550: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C004A557: lea     edi, [rbp-15h]
 * 00000001C004A55A: test    dword ptr [rcx+2Ch], 800h
 * 00000001C004A561: jz      short loc_1C004A5C0
 * 00000001C004A563: cmp     byte ptr [rcx+29h], 2
 * 00000001C004A567: jb      short loc_1C004A5C0
 * 00000001C004A569: and     qword ptr [r11-18h], 0
 * 00000001C004A56E: lea     rdx, [r11+48h]
 * 00000001C004A572: mov     rax, cs:pfnWppTraceMessage
 * 00000001C004A579: lea     r8, WPP_a3acd40f84823909f7fc3b79b04bc30f_Traceguids
 * 00000001C004A580: mov     rcx, [rcx+18h]
 * 00000001C004A584: mov     r9d, ebp
 * 00000001C004A587: mov     [r11-20h], rdi
 * 00000001C004A58B: mov     [r11-28h], rdx
 * 00000001C004A58F: lea     rdx, [r11+40h]
 * 00000001C004A593: mov     [r11-30h], rdi
 * 00000001C004A597: mov     [r11-38h], rdx
 * 00000001C004A59B: lea     rdx, [r11+38h]
 * 00000001C004A59F: mov     qword ptr [r11-40h], 8
 * 00000001C004A5A7: mov     [r11-48h], rdx
 * 00000001C004A5AB: lea     rdx, [r11+30h]
 * 00000001C004A5AF: mov     [r11-50h], rdi
 * 00000001C004A5B3: mov     [r11-58h], rdx
 * 00000001C004A5B7: lea     edx, [rbp+12h]
 * 00000001C004A5BA: call    cs:__guard_dispatch_icall_fptr
 * 00000001C004A5C0: and     [rsp+78h+var_10], 0
 * 00000001C004A5C6: lea     rax, [rsp+78h+arg_40]
 * 00000001C004A5CE: mov     [rsp+78h+var_18], rdi
 * 00000001C004A5D3: lea     r9, WPP_a3acd40f84823909f7fc3b79b04bc30f_Traceguids
 * 00000001C004A5DA: mov     [rsp+78h+var_20], rax
 * 00000001C004A5DF: mov     edx, 2
 * 00000001C004A5E4: mov     [rsp+78h+var_28], rdi
 * 00000001C004A5E9: lea     rax, [rsp+78h+arg_38]
 * 00000001C004A5F1: mov     [rsp+78h+var_30], rax
 * 00000001C004A5F6: mov     rcx, rbx
 * 00000001C004A5F9: mov     [rsp+78h+var_38], 8
 * 00000001C004A602: lea     rax, [rsp+78h+arg_30]
 * 00000001C004A60A: mov     [rsp+78h+var_40], rax
 * 00000001C004A60F: lea     r8d, [rdx+0Ah]
 * 00000001C004A613: lea     rax, [rsp+78h+arg_28]
 * 00000001C004A61B: mov     [rsp+78h+var_48], rdi
 * 00000001C004A620: mov     [rsp+78h+var_50], rax
 * 00000001C004A625: mov     [rsp+78h+var_58], bp
 * 00000001C004A62A: call    cs:__imp_WppAutoLogTrace
 * 00000001C004A631: nop     dword ptr [rax+rax+00h]
 * 00000001C004A636: lea     r11, [rsp+78h+var_8]
 * 00000001C004A63B: mov     rbx, [r11+10h]
 * 00000001C004A63F: mov     rbp, [r11+18h]
 * 00000001C004A643: mov     rsp, r11
 * 00000001C004A646: pop     rdi
 * 00000001C004A647: retn
 */
