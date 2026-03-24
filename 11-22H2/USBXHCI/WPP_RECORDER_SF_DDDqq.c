/*
 * XREFs of WPP_RECORDER_SF_DDDqq @ 0x1C0012848
 * Callers:
 *     Bulk_FindStage @ 0x1C000E248 (Bulk_FindStage.c)
 *     Bulk_RetrieveNextStage @ 0x1C001200C (Bulk_RetrieveNextStage.c)
 *     Bulk_Stage_AcquireMdl @ 0x1C002282E (Bulk_Stage_AcquireMdl.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0020270 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_DDDqq @ 0x1C0012848
 * Reason: Hex-Rays returned no pseudocode for 0x1C0012848
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0012848: mov     rax, rsp
 * 00000001C001284B: mov     [rax+8], rbx
 * 00000001C001284F: mov     [rax+10h], rbp
 * 00000001C0012853: mov     [rax+18h], rsi
 * 00000001C0012857: mov     [rax+20h], rdi
 * 00000001C001285B: push    r14
 * 00000001C001285D: sub     rsp, 80h
 * 00000001C0012864: mov     rsi, rcx
 * 00000001C0012867: movzx   edi, r9w
 * 00000001C001286B: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0012872: mov     ebp, 4
 * 00000001C0012877: movzx   ebx, dl
 * 00000001C001287A: test    dword ptr [rcx+2Ch], 2000h
 * 00000001C0012881: lea     r14d, [rbp+4]
 * 00000001C0012885: jnz     loc_1C0025236
 * 00000001C001288B: and     [rsp+88h+var_10], 0
 * 00000001C0012891: lea     rax, [rsp+88h+arg_48]
 * 00000001C0012899: mov     [rsp+88h+var_18], r14
 * 00000001C001289E: lea     r9, WPP_92c598da33ef340e00f5370896d293ba_Traceguids
 * 00000001C00128A5: mov     [rsp+88h+var_20], rax
 * 00000001C00128AA: mov     r8d, 0Eh
 * 00000001C00128B0: mov     [rsp+88h+var_28], r14
 * 00000001C00128B5: lea     rax, [rsp+88h+arg_40]
 * 00000001C00128BD: mov     [rsp+88h+var_30], rax
 * 00000001C00128C2: mov     edx, ebx
 * 00000001C00128C4: mov     [rsp+88h+var_38], rbp
 * 00000001C00128C9: lea     rax, [rsp+88h+arg_38]
 * 00000001C00128D1: mov     [rsp+88h+var_40], rax
 * 00000001C00128D6: mov     rcx, rsi
 * 00000001C00128D9: mov     [rsp+88h+var_48], rbp
 * 00000001C00128DE: lea     rax, [rsp+88h+arg_30]
 * 00000001C00128E6: mov     [rsp+88h+var_50], rax
 * 00000001C00128EB: lea     rax, [rsp+88h+arg_28]
 * 00000001C00128F3: mov     [rsp+88h+var_58], rbp
 * 00000001C00128F8: mov     [rsp+88h+var_60], rax
 * 00000001C00128FD: mov     word ptr [rsp+88h+var_68], di
 * 00000001C0012902: call    cs:__imp_WppAutoLogTrace
 * 00000001C0012909: nop     dword ptr [rax+rax+00h]
 * 00000001C001290E: lea     r11, [rsp+88h+var_8]
 * 00000001C0012916: mov     rbx, [r11+10h]
 * 00000001C001291A: mov     rbp, [r11+18h]
 * 00000001C001291E: mov     rsi, [r11+20h]
 * 00000001C0012922: mov     rdi, [r11+28h]
 * 00000001C0012926: mov     rsp, r11
 * 00000001C0012929: pop     r14
 * 00000001C001292B: retn
 * 00000001C0025236: cmp     [rcx+29h], bl
 * 00000001C0025239: jb      loc_1C001288B
 * 00000001C002523F: and     [rsp+88h+var_18], 0
 * 00000001C0025245: lea     rdx, [rsp+88h+arg_48]
 * 00000001C002524D: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0025254: lea     r8, WPP_92c598da33ef340e00f5370896d293ba_Traceguids
 * 00000001C002525B: mov     rcx, [rcx+18h]
 * 00000001C002525F: mov     r9d, edi
 * 00000001C0025262: mov     [rsp+88h+var_20], r14
 * 00000001C0025267: mov     [rsp+88h+var_28], rdx
 * 00000001C002526C: lea     rdx, [rsp+88h+arg_40]
 * 00000001C0025274: mov     [rsp+88h+var_30], r14
 * 00000001C0025279: mov     [rsp+88h+var_38], rdx
 * 00000001C002527E: lea     rdx, [rsp+88h+arg_38]
 * 00000001C0025286: mov     [rsp+88h+var_40], rbp
 * 00000001C002528B: mov     [rsp+88h+var_48], rdx
 * 00000001C0025290: lea     rdx, [rsp+88h+arg_30]
 * 00000001C0025298: mov     [rsp+88h+var_50], rbp
 * 00000001C002529D: mov     [rsp+88h+var_58], rdx
 * 00000001C00252A2: lea     rdx, [rsp+88h+arg_28]
 * 00000001C00252AA: mov     [rsp+88h+var_60], rbp
 * 00000001C00252AF: mov     [rsp+88h+var_68], rdx
 * 00000001C00252B4: mov     edx, 2Bh ; '+'
 * 00000001C00252B9: call    cs:__guard_dispatch_icall_fptr
 * 00000001C00252BF: nop
 * 00000001C00252C0: jmp     loc_1C001288B
 */
