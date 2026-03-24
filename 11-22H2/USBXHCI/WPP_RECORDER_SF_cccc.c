/*
 * XREFs of WPP_RECORDER_SF_cccc @ 0x1C0040B30
 * Callers:
 *     RootHub_PrepareHardware @ 0x1C0070700 (RootHub_PrepareHardware.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0020270 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_cccc @ 0x1C0040B30
 * Reason: Hex-Rays returned no pseudocode for 0x1C0040B30
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0040B30: mov     r11, rsp
 * 00000001C0040B33: mov     [r11+8], rbx
 * 00000001C0040B37: mov     [r11+10h], rsi
 * 00000001C0040B3B: push    rdi
 * 00000001C0040B3C: sub     rsp, 70h
 * 00000001C0040B40: mov     rbx, rcx
 * 00000001C0040B43: mov     esi, 19h
 * 00000001C0040B48: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0040B4F: lea     edi, [rsi-18h]
 * 00000001C0040B52: test    dword ptr [rcx+2Ch], 400h
 * 00000001C0040B59: jz      short loc_1C0040BB4
 * 00000001C0040B5B: cmp     byte ptr [rcx+29h], 2
 * 00000001C0040B5F: jb      short loc_1C0040BB4
 * 00000001C0040B61: and     qword ptr [r11-18h], 0
 * 00000001C0040B66: lea     rdx, [r11+48h]
 * 00000001C0040B6A: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0040B71: lea     r8, WPP_60a997f3b28234a4d1c27687c5bd6445_Traceguids
 * 00000001C0040B78: mov     rcx, [rcx+18h]
 * 00000001C0040B7C: mov     r9d, esi
 * 00000001C0040B7F: mov     [r11-20h], rdi
 * 00000001C0040B83: mov     [r11-28h], rdx
 * 00000001C0040B87: lea     rdx, [r11+40h]
 * 00000001C0040B8B: mov     [r11-30h], rdi
 * 00000001C0040B8F: mov     [r11-38h], rdx
 * 00000001C0040B93: lea     rdx, [r11+38h]
 * 00000001C0040B97: mov     [r11-40h], rdi
 * 00000001C0040B9B: mov     [r11-48h], rdx
 * 00000001C0040B9F: lea     rdx, [r11+30h]
 * 00000001C0040BA3: mov     [r11-50h], rdi
 * 00000001C0040BA7: mov     [r11-58h], rdx
 * 00000001C0040BAB: lea     edx, [rsi+12h]
 * 00000001C0040BAE: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0040BB4: and     [rsp+78h+var_10], 0
 * 00000001C0040BBA: lea     rax, [rsp+78h+arg_40]
 * 00000001C0040BC2: mov     [rsp+78h+var_18], rdi
 * 00000001C0040BC7: lea     r9, WPP_60a997f3b28234a4d1c27687c5bd6445_Traceguids
 * 00000001C0040BCE: mov     [rsp+78h+var_20], rax
 * 00000001C0040BD3: mov     edx, 2
 * 00000001C0040BD8: mov     [rsp+78h+var_28], rdi
 * 00000001C0040BDD: lea     rax, [rsp+78h+arg_38]
 * 00000001C0040BE5: mov     [rsp+78h+var_30], rax
 * 00000001C0040BEA: mov     rcx, rbx
 * 00000001C0040BED: mov     [rsp+78h+var_38], rdi
 * 00000001C0040BF2: lea     rax, [rsp+78h+arg_30]
 * 00000001C0040BFA: mov     [rsp+78h+var_40], rax
 * 00000001C0040BFF: lea     r8d, [rdx+9]
 * 00000001C0040C03: lea     rax, [rsp+78h+arg_28]
 * 00000001C0040C0B: mov     [rsp+78h+var_48], rdi
 * 00000001C0040C10: mov     [rsp+78h+var_50], rax
 * 00000001C0040C15: mov     [rsp+78h+var_58], si
 * 00000001C0040C1A: call    cs:__imp_WppAutoLogTrace
 * 00000001C0040C21: nop     dword ptr [rax+rax+00h]
 * 00000001C0040C26: lea     r11, [rsp+78h+var_8]
 * 00000001C0040C2B: mov     rbx, [r11+10h]
 * 00000001C0040C2F: mov     rsi, [r11+18h]
 * 00000001C0040C33: mov     rsp, r11
 * 00000001C0040C36: pop     rdi
 * 00000001C0040C37: retn
 */
