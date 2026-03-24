/*
 * XREFs of WPP_RECORDER_SF_DDDDqDD @ 0x1C004771C
 * Callers:
 *     Bulk_Stage_MapIntoRing @ 0x1C0012A58 (Bulk_Stage_MapIntoRing.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0020270 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_DDDDqDD @ 0x1C004771C
 * Reason: Hex-Rays returned no pseudocode for 0x1C004771C
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C004771C: mov     r11, rsp
 * 00000001C004771F: mov     [r11+8], rbx
 * 00000001C0047723: mov     [r11+10h], rdi
 * 00000001C0047727: mov     [r11+18h], r14
 * 00000001C004772B: push    rbp
 * 00000001C004772C: lea     rbp, [r11-1Fh]
 * 00000001C0047730: sub     rsp, 0A0h
 * 00000001C0047737: mov     rbx, rcx
 * 00000001C004773A: mov     edi, 4
 * 00000001C004773F: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0047746: lea     r14d, [rdi+0Fh]
 * 00000001C004774A: test    dword ptr [rcx+2Ch], 2000h
 * 00000001C0047751: jz      loc_1C00477D9
 * 00000001C0047757: cmp     byte ptr [rcx+29h], 5
 * 00000001C004775B: jb      short loc_1C00477D9
 * 00000001C004775D: and     qword ptr [r11-18h], 0
 * 00000001C0047762: lea     rdx, [rbp+17h+arg_58]
 * 00000001C0047766: mov     rax, cs:pfnWppTraceMessage
 * 00000001C004776D: lea     r8, WPP_92c598da33ef340e00f5370896d293ba_Traceguids
 * 00000001C0047774: mov     rcx, [rcx+18h]
 * 00000001C0047778: mov     r9d, r14d
 * 00000001C004777B: mov     [r11-20h], rdi
 * 00000001C004777F: mov     [r11-28h], rdx
 * 00000001C0047783: lea     rdx, [rbp+17h+arg_50]
 * 00000001C0047787: mov     [r11-30h], rdi
 * 00000001C004778B: mov     [r11-38h], rdx
 * 00000001C004778F: lea     rdx, [rbp+17h+arg_48]
 * 00000001C0047793: mov     qword ptr [r11-40h], 8
 * 00000001C004779B: mov     [r11-48h], rdx
 * 00000001C004779F: lea     rdx, [rbp+17h+arg_40]
 * 00000001C00477A3: mov     [r11-50h], rdi
 * 00000001C00477A7: mov     [r11-58h], rdx
 * 00000001C00477AB: lea     rdx, [rbp+17h+arg_38]
 * 00000001C00477AF: mov     [r11-60h], rdi
 * 00000001C00477B3: mov     [r11-68h], rdx
 * 00000001C00477B7: lea     rdx, [rbp+17h+arg_30]
 * 00000001C00477BB: mov     [r11-70h], rdi
 * 00000001C00477BF: mov     [r11-78h], rdx
 * 00000001C00477C3: lea     rdx, [rbp+17h+arg_28]
 * 00000001C00477C7: mov     [r11-80h], rdi
 * 00000001C00477CB: mov     [rsp+0A0h+var_80], rdx
 * 00000001C00477D0: lea     edx, [rdi+27h]
 * 00000001C00477D3: call    cs:__guard_dispatch_icall_fptr
 * 00000001C00477D9: and     qword ptr [rsp+0A0h+var_8], 0
 * 00000001C00477E2: lea     rax, [rbp+17h+arg_58]
 * 00000001C00477E6: mov     [rsp+0A0h+var_10], rdi
 * 00000001C00477EE: lea     r9, WPP_92c598da33ef340e00f5370896d293ba_Traceguids
 * 00000001C00477F5: mov     [rsp+0A0h+var_18], rax
 * 00000001C00477FD: mov     edx, 5
 * 00000001C0047802: mov     [rsp+0A0h+var_20], rdi
 * 00000001C004780A: lea     rax, [rbp+17h+arg_50]
 * 00000001C004780E: mov     [rsp+0A0h+var_28], rax
 * 00000001C0047813: mov     rcx, rbx
 * 00000001C0047816: mov     [rsp+0A0h+var_30], 8
 * 00000001C004781F: lea     rax, [rbp+17h+arg_48]
 * 00000001C0047823: mov     [rsp+0A0h+var_38], rax
 * 00000001C0047828: lea     r8d, [rdx+9]
 * 00000001C004782C: mov     [rsp+0A0h+var_40], rdi
 * 00000001C0047831: lea     rax, [rbp+17h+arg_40]
 * 00000001C0047835: mov     [rsp+0A0h+var_48], rax
 * 00000001C004783A: lea     rax, [rbp+17h+arg_38]
 * 00000001C004783E: mov     [rsp+0A0h+var_50], rdi
 * 00000001C0047843: mov     [rsp+0A0h+var_58], rax
 * 00000001C0047848: lea     rax, [rbp+17h+arg_30]
 * 00000001C004784C: mov     [rsp+0A0h+var_60], rdi
 * 00000001C0047851: mov     [rsp+0A0h+var_68], rax
 * 00000001C0047856: lea     rax, [rbp+17h+arg_28]
 * 00000001C004785A: mov     [rsp+0A0h+var_70], rdi
 * 00000001C004785F: mov     [rsp+0A0h+var_78], rax
 * 00000001C0047864: mov     word ptr [rsp+0A0h+var_80], r14w
 * 00000001C004786A: call    cs:__imp_WppAutoLogTrace
 * 00000001C0047871: nop     dword ptr [rax+rax+00h]
 * 00000001C0047876: lea     r11, [rsp+0A0h+var_s0]
 * 00000001C004787E: mov     rbx, [r11+10h]
 * 00000001C0047882: mov     rdi, [r11+18h]
 * 00000001C0047886: mov     r14, [r11+20h]
 * 00000001C004788A: mov     rsp, r11
 * 00000001C004788D: pop     rbp
 * 00000001C004788E: retn
 */
