/*
 * XREFs of WPP_RECORDER_SF_DDDDqDD @ 0x1C004785C
 * Callers:
 *     Bulk_Stage_MapIntoRing @ 0x1C0012A00 (Bulk_Stage_MapIntoRing.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00203A0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_DDDDqDD @ 0x1C004785C
 * Reason: Hex-Rays returned no pseudocode for 0x1C004785C
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C004785C: mov     r11, rsp
 * 00000001C004785F: mov     [r11+8], rbx
 * 00000001C0047863: mov     [r11+10h], rdi
 * 00000001C0047867: mov     [r11+18h], r14
 * 00000001C004786B: push    rbp
 * 00000001C004786C: lea     rbp, [r11-1Fh]
 * 00000001C0047870: sub     rsp, 0A0h
 * 00000001C0047877: mov     rbx, rcx
 * 00000001C004787A: mov     edi, 4
 * 00000001C004787F: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0047886: lea     r14d, [rdi+0Fh]
 * 00000001C004788A: test    dword ptr [rcx+2Ch], 2000h
 * 00000001C0047891: jz      loc_1C0047919
 * 00000001C0047897: cmp     byte ptr [rcx+29h], 5
 * 00000001C004789B: jb      short loc_1C0047919
 * 00000001C004789D: and     qword ptr [r11-18h], 0
 * 00000001C00478A2: lea     rdx, [rbp+17h+arg_58]
 * 00000001C00478A6: mov     rax, cs:pfnWppTraceMessage
 * 00000001C00478AD: lea     r8, WPP_92c598da33ef340e00f5370896d293ba_Traceguids
 * 00000001C00478B4: mov     rcx, [rcx+18h]
 * 00000001C00478B8: mov     r9d, r14d
 * 00000001C00478BB: mov     [r11-20h], rdi
 * 00000001C00478BF: mov     [r11-28h], rdx
 * 00000001C00478C3: lea     rdx, [rbp+17h+arg_50]
 * 00000001C00478C7: mov     [r11-30h], rdi
 * 00000001C00478CB: mov     [r11-38h], rdx
 * 00000001C00478CF: lea     rdx, [rbp+17h+arg_48]
 * 00000001C00478D3: mov     qword ptr [r11-40h], 8
 * 00000001C00478DB: mov     [r11-48h], rdx
 * 00000001C00478DF: lea     rdx, [rbp+17h+arg_40]
 * 00000001C00478E3: mov     [r11-50h], rdi
 * 00000001C00478E7: mov     [r11-58h], rdx
 * 00000001C00478EB: lea     rdx, [rbp+17h+arg_38]
 * 00000001C00478EF: mov     [r11-60h], rdi
 * 00000001C00478F3: mov     [r11-68h], rdx
 * 00000001C00478F7: lea     rdx, [rbp+17h+arg_30]
 * 00000001C00478FB: mov     [r11-70h], rdi
 * 00000001C00478FF: mov     [r11-78h], rdx
 * 00000001C0047903: lea     rdx, [rbp+17h+arg_28]
 * 00000001C0047907: mov     [r11-80h], rdi
 * 00000001C004790B: mov     [rsp+0A0h+var_80], rdx
 * 00000001C0047910: lea     edx, [rdi+27h]
 * 00000001C0047913: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0047919: and     qword ptr [rsp+0A0h+var_8], 0
 * 00000001C0047922: lea     rax, [rbp+17h+arg_58]
 * 00000001C0047926: mov     [rsp+0A0h+var_10], rdi
 * 00000001C004792E: lea     r9, WPP_92c598da33ef340e00f5370896d293ba_Traceguids
 * 00000001C0047935: mov     [rsp+0A0h+var_18], rax
 * 00000001C004793D: mov     edx, 5
 * 00000001C0047942: mov     [rsp+0A0h+var_20], rdi
 * 00000001C004794A: lea     rax, [rbp+17h+arg_50]
 * 00000001C004794E: mov     [rsp+0A0h+var_28], rax
 * 00000001C0047953: mov     rcx, rbx
 * 00000001C0047956: mov     [rsp+0A0h+var_30], 8
 * 00000001C004795F: lea     rax, [rbp+17h+arg_48]
 * 00000001C0047963: mov     [rsp+0A0h+var_38], rax
 * 00000001C0047968: lea     r8d, [rdx+9]
 * 00000001C004796C: mov     [rsp+0A0h+var_40], rdi
 * 00000001C0047971: lea     rax, [rbp+17h+arg_40]
 * 00000001C0047975: mov     [rsp+0A0h+var_48], rax
 * 00000001C004797A: lea     rax, [rbp+17h+arg_38]
 * 00000001C004797E: mov     [rsp+0A0h+var_50], rdi
 * 00000001C0047983: mov     [rsp+0A0h+var_58], rax
 * 00000001C0047988: lea     rax, [rbp+17h+arg_30]
 * 00000001C004798C: mov     [rsp+0A0h+var_60], rdi
 * 00000001C0047991: mov     [rsp+0A0h+var_68], rax
 * 00000001C0047996: lea     rax, [rbp+17h+arg_28]
 * 00000001C004799A: mov     [rsp+0A0h+var_70], rdi
 * 00000001C004799F: mov     [rsp+0A0h+var_78], rax
 * 00000001C00479A4: mov     word ptr [rsp+0A0h+var_80], r14w
 * 00000001C00479AA: call    cs:__imp_WppAutoLogTrace
 * 00000001C00479B1: nop     dword ptr [rax+rax+00h]
 * 00000001C00479B6: lea     r11, [rsp+0A0h+var_s0]
 * 00000001C00479BE: mov     rbx, [r11+10h]
 * 00000001C00479C2: mov     rdi, [r11+18h]
 * 00000001C00479C6: mov     r14, [r11+20h]
 * 00000001C00479CA: mov     rsp, r11
 * 00000001C00479CD: pop     rbp
 * 00000001C00479CE: retn
 */
