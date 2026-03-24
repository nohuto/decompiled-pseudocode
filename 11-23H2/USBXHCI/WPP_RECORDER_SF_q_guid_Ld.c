/*
 * XREFs of WPP_RECORDER_SF_q_guid_Ld @ 0x1C003770C
 * Callers:
 *     Controller_ExecuteDSM @ 0x1C006E4A4 (Controller_ExecuteDSM.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00203A0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_q_guid_Ld @ 0x1C003770C
 * Reason: Hex-Rays returned no pseudocode for 0x1C003770C
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C003770C: mov     r11, rsp
 * 00000001C003770F: mov     [r11+8], rbx
 * 00000001C0037713: mov     [r11+10h], rsi
 * 00000001C0037717: mov     [r11+18h], rdi
 * 00000001C003771B: push    r15
 * 00000001C003771D: sub     rsp, 70h
 * 00000001C0037721: mov     rbx, [rsp+78h+arg_30]
 * 00000001C0037729: mov     rdi, rcx
 * 00000001C003772C: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0037733: mov     esi, 4
 * 00000001C0037738: mov     r15d, 104h
 * 00000001C003773E: mov     eax, [rcx+2Ch]
 * 00000001C0037741: test    al, 8
 * 00000001C0037743: jz      short loc_1C00377A2
 * 00000001C0037745: cmp     [rcx+29h], sil
 * 00000001C0037749: jb      short loc_1C00377A2
 * 00000001C003774B: and     qword ptr [r11-18h], 0
 * 00000001C0037750: lea     rdx, [r11+48h]
 * 00000001C0037754: mov     rax, cs:pfnWppTraceMessage
 * 00000001C003775B: lea     r8, WPP_ac07559723993fb37d1c33c002d3118e_Traceguids
 * 00000001C0037762: mov     rcx, [rcx+18h]
 * 00000001C0037766: mov     r9d, r15d
 * 00000001C0037769: mov     [r11-20h], rsi
 * 00000001C003776D: mov     [r11-28h], rdx
 * 00000001C0037771: lea     rdx, [r11+40h]
 * 00000001C0037775: mov     [r11-30h], rsi
 * 00000001C0037779: mov     [r11-38h], rdx
 * 00000001C003777D: lea     rdx, [r11+30h]
 * 00000001C0037781: mov     qword ptr [r11-40h], 10h
 * 00000001C0037789: mov     [r11-48h], rbx
 * 00000001C003778D: mov     qword ptr [r11-50h], 8
 * 00000001C0037795: mov     [r11-58h], rdx
 * 00000001C0037799: lea     edx, [rsi+27h]
 * 00000001C003779C: call    cs:__guard_dispatch_icall_fptr
 * 00000001C00377A2: and     [rsp+78h+var_10], 0
 * 00000001C00377A8: lea     rax, [rsp+78h+arg_40]
 * 00000001C00377B0: mov     [rsp+78h+var_18], rsi
 * 00000001C00377B5: lea     r9, WPP_ac07559723993fb37d1c33c002d3118e_Traceguids
 * 00000001C00377BC: mov     [rsp+78h+var_20], rax
 * 00000001C00377C1: mov     r8d, esi
 * 00000001C00377C4: mov     [rsp+78h+var_28], rsi
 * 00000001C00377C9: lea     rax, [rsp+78h+arg_38]
 * 00000001C00377D1: mov     [rsp+78h+var_30], rax
 * 00000001C00377D6: mov     edx, esi
 * 00000001C00377D8: mov     [rsp+78h+var_38], 10h
 * 00000001C00377E1: lea     rax, [rsp+78h+arg_28]
 * 00000001C00377E9: mov     [rsp+78h+var_40], rbx
 * 00000001C00377EE: mov     rcx, rdi
 * 00000001C00377F1: mov     [rsp+78h+var_48], 8
 * 00000001C00377FA: mov     [rsp+78h+var_50], rax
 * 00000001C00377FF: mov     [rsp+78h+var_58], r15w
 * 00000001C0037805: call    cs:__imp_WppAutoLogTrace
 * 00000001C003780C: nop     dword ptr [rax+rax+00h]
 * 00000001C0037811: lea     r11, [rsp+78h+var_8]
 * 00000001C0037816: mov     rbx, [r11+10h]
 * 00000001C003781A: mov     rsi, [r11+18h]
 * 00000001C003781E: mov     rdi, [r11+20h]
 * 00000001C0037822: mov     rsp, r11
 * 00000001C0037825: pop     r15
 * 00000001C0037827: retn
 */
