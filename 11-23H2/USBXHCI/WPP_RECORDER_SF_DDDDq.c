/*
 * XREFs of WPP_RECORDER_SF_DDDDq @ 0x1C0047720
 * Callers:
 *     Bulk_Stage_MapIntoRing @ 0x1C0012A00 (Bulk_Stage_MapIntoRing.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00203A0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_DDDDq @ 0x1C0047720
 * Reason: Hex-Rays returned no pseudocode for 0x1C0047720
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0047720: mov     r11, rsp
 * 00000001C0047723: mov     [r11+8], rbx
 * 00000001C0047727: mov     [r11+10h], rsi
 * 00000001C004772B: push    rdi
 * 00000001C004772C: sub     rsp, 80h
 * 00000001C0047733: mov     rdi, rcx
 * 00000001C0047736: movzx   ebx, r9w
 * 00000001C004773A: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0047741: mov     esi, 4
 * 00000001C0047746: test    dword ptr [rcx+2Ch], 2000h
 * 00000001C004774D: jz      short loc_1C00477B8
 * 00000001C004774F: cmp     byte ptr [rcx+29h], 5
 * 00000001C0047753: jb      short loc_1C00477B8
 * 00000001C0047755: and     qword ptr [r11-18h], 0
 * 00000001C004775A: lea     rdx, [r11+50h]
 * 00000001C004775E: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0047765: lea     r8, WPP_92c598da33ef340e00f5370896d293ba_Traceguids
 * 00000001C004776C: mov     rcx, [rcx+18h]
 * 00000001C0047770: mov     r9d, ebx
 * 00000001C0047773: mov     qword ptr [r11-20h], 8
 * 00000001C004777B: mov     [r11-28h], rdx
 * 00000001C004777F: lea     rdx, [r11+48h]
 * 00000001C0047783: mov     [r11-30h], rsi
 * 00000001C0047787: mov     [r11-38h], rdx
 * 00000001C004778B: lea     rdx, [r11+40h]
 * 00000001C004778F: mov     [r11-40h], rsi
 * 00000001C0047793: mov     [r11-48h], rdx
 * 00000001C0047797: lea     rdx, [r11+38h]
 * 00000001C004779B: mov     [r11-50h], rsi
 * 00000001C004779F: mov     [r11-58h], rdx
 * 00000001C00477A3: lea     rdx, [r11+30h]
 * 00000001C00477A7: mov     [r11-60h], rsi
 * 00000001C00477AB: mov     [r11-68h], rdx
 * 00000001C00477AF: lea     edx, [rsi+27h]
 * 00000001C00477B2: call    cs:__guard_dispatch_icall_fptr
 * 00000001C00477B8: and     [rsp+88h+var_10], 0
 * 00000001C00477BE: lea     rax, [rsp+88h+arg_48]
 * 00000001C00477C6: mov     [rsp+88h+var_18], 8
 * 00000001C00477CF: lea     r9, WPP_92c598da33ef340e00f5370896d293ba_Traceguids
 * 00000001C00477D6: mov     [rsp+88h+var_20], rax
 * 00000001C00477DB: mov     edx, 5
 * 00000001C00477E0: mov     [rsp+88h+var_28], rsi
 * 00000001C00477E5: lea     rax, [rsp+88h+arg_40]
 * 00000001C00477ED: mov     [rsp+88h+var_30], rax
 * 00000001C00477F2: mov     rcx, rdi
 * 00000001C00477F5: mov     [rsp+88h+var_38], rsi
 * 00000001C00477FA: lea     rax, [rsp+88h+arg_38]
 * 00000001C0047802: mov     [rsp+88h+var_40], rax
 * 00000001C0047807: lea     r8d, [rdx+9]
 * 00000001C004780B: mov     [rsp+88h+var_48], rsi
 * 00000001C0047810: lea     rax, [rsp+88h+arg_30]
 * 00000001C0047818: mov     [rsp+88h+var_50], rax
 * 00000001C004781D: lea     rax, [rsp+88h+arg_28]
 * 00000001C0047825: mov     [rsp+88h+var_58], rsi
 * 00000001C004782A: mov     [rsp+88h+var_60], rax
 * 00000001C004782F: mov     [rsp+88h+var_68], bx
 * 00000001C0047834: call    cs:__imp_WppAutoLogTrace
 * 00000001C004783B: nop     dword ptr [rax+rax+00h]
 * 00000001C0047840: lea     r11, [rsp+88h+var_8]
 * 00000001C0047848: mov     rbx, [r11+10h]
 * 00000001C004784C: mov     rsi, [r11+18h]
 * 00000001C0047850: mov     rsp, r11
 * 00000001C0047853: pop     rdi
 * 00000001C0047854: retn
 */
