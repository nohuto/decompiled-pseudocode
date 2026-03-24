/*
 * XREFs of WPP_RECORDER_SF_DDDqq @ 0x1C00127F0
 * Callers:
 *     Bulk_FindStage @ 0x1C000E218 (Bulk_FindStage.c)
 *     Bulk_RetrieveNextStage @ 0x1C0011FDC (Bulk_RetrieveNextStage.c)
 *     Bulk_Stage_AcquireMdl @ 0x1C002296E (Bulk_Stage_AcquireMdl.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00203A0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_DDDqq @ 0x1C00127F0
 * Reason: Hex-Rays returned no pseudocode for 0x1C00127F0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00127F0: mov     rax, rsp
 * 00000001C00127F3: mov     [rax+8], rbx
 * 00000001C00127F7: mov     [rax+10h], rbp
 * 00000001C00127FB: mov     [rax+18h], rsi
 * 00000001C00127FF: mov     [rax+20h], rdi
 * 00000001C0012803: push    r14
 * 00000001C0012805: sub     rsp, 80h
 * 00000001C001280C: mov     rsi, rcx
 * 00000001C001280F: movzx   edi, r9w
 * 00000001C0012813: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C001281A: mov     ebp, 4
 * 00000001C001281F: movzx   ebx, dl
 * 00000001C0012822: test    dword ptr [rcx+2Ch], 2000h
 * 00000001C0012829: lea     r14d, [rbp+4]
 * 00000001C001282D: jnz     loc_1C0025376
 * 00000001C0012833: and     [rsp+88h+var_10], 0
 * 00000001C0012839: lea     rax, [rsp+88h+arg_48]
 * 00000001C0012841: mov     [rsp+88h+var_18], r14
 * 00000001C0012846: lea     r9, WPP_92c598da33ef340e00f5370896d293ba_Traceguids
 * 00000001C001284D: mov     [rsp+88h+var_20], rax
 * 00000001C0012852: mov     r8d, 0Eh
 * 00000001C0012858: mov     [rsp+88h+var_28], r14
 * 00000001C001285D: lea     rax, [rsp+88h+arg_40]
 * 00000001C0012865: mov     [rsp+88h+var_30], rax
 * 00000001C001286A: mov     edx, ebx
 * 00000001C001286C: mov     [rsp+88h+var_38], rbp
 * 00000001C0012871: lea     rax, [rsp+88h+arg_38]
 * 00000001C0012879: mov     [rsp+88h+var_40], rax
 * 00000001C001287E: mov     rcx, rsi
 * 00000001C0012881: mov     [rsp+88h+var_48], rbp
 * 00000001C0012886: lea     rax, [rsp+88h+arg_30]
 * 00000001C001288E: mov     [rsp+88h+var_50], rax
 * 00000001C0012893: lea     rax, [rsp+88h+arg_28]
 * 00000001C001289B: mov     [rsp+88h+var_58], rbp
 * 00000001C00128A0: mov     [rsp+88h+var_60], rax
 * 00000001C00128A5: mov     word ptr [rsp+88h+var_68], di
 * 00000001C00128AA: call    cs:__imp_WppAutoLogTrace
 * 00000001C00128B1: nop     dword ptr [rax+rax+00h]
 * 00000001C00128B6: lea     r11, [rsp+88h+var_8]
 * 00000001C00128BE: mov     rbx, [r11+10h]
 * 00000001C00128C2: mov     rbp, [r11+18h]
 * 00000001C00128C6: mov     rsi, [r11+20h]
 * 00000001C00128CA: mov     rdi, [r11+28h]
 * 00000001C00128CE: mov     rsp, r11
 * 00000001C00128D1: pop     r14
 * 00000001C00128D3: retn
 * 00000001C0025376: cmp     [rcx+29h], bl
 * 00000001C0025379: jb      loc_1C0012833
 * 00000001C002537F: and     [rsp+88h+var_18], 0
 * 00000001C0025385: lea     rdx, [rsp+88h+arg_48]
 * 00000001C002538D: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0025394: lea     r8, WPP_92c598da33ef340e00f5370896d293ba_Traceguids
 * 00000001C002539B: mov     rcx, [rcx+18h]
 * 00000001C002539F: mov     r9d, edi
 * 00000001C00253A2: mov     [rsp+88h+var_20], r14
 * 00000001C00253A7: mov     [rsp+88h+var_28], rdx
 * 00000001C00253AC: lea     rdx, [rsp+88h+arg_40]
 * 00000001C00253B4: mov     [rsp+88h+var_30], r14
 * 00000001C00253B9: mov     [rsp+88h+var_38], rdx
 * 00000001C00253BE: lea     rdx, [rsp+88h+arg_38]
 * 00000001C00253C6: mov     [rsp+88h+var_40], rbp
 * 00000001C00253CB: mov     [rsp+88h+var_48], rdx
 * 00000001C00253D0: lea     rdx, [rsp+88h+arg_30]
 * 00000001C00253D8: mov     [rsp+88h+var_50], rbp
 * 00000001C00253DD: mov     [rsp+88h+var_58], rdx
 * 00000001C00253E2: lea     rdx, [rsp+88h+arg_28]
 * 00000001C00253EA: mov     [rsp+88h+var_60], rbp
 * 00000001C00253EF: mov     [rsp+88h+var_68], rdx
 * 00000001C00253F4: mov     edx, 2Bh ; '+'
 * 00000001C00253F9: call    cs:__guard_dispatch_icall_fptr
 * 00000001C00253FF: nop
 * 00000001C0025400: jmp     loc_1C0012833
 */
