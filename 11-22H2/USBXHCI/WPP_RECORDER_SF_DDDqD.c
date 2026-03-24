/*
 * XREFs of WPP_RECORDER_SF_DDDqd @ 0x1C0047B80
 * Callers:
 *     Bulk_CompleteTransfers @ 0x1C000E638 (Bulk_CompleteTransfers.c)
 *     Bulk_RetrieveNextStage @ 0x1C001200C (Bulk_RetrieveNextStage.c)
 *     Bulk_Transfer_CompleteCancelable @ 0x1C0012F88 (Bulk_Transfer_CompleteCancelable.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0020270 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_DDDqd @ 0x1C0047B80
 * Reason: Hex-Rays returned no pseudocode for 0x1C0047B80
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0047B80: mov     r11, rsp
 * 00000001C0047B83: mov     [r11+8], rbx
 * 00000001C0047B87: mov     [r11+10h], rbp
 * 00000001C0047B8B: mov     [r11+18h], rsi
 * 00000001C0047B8F: push    rdi
 * 00000001C0047B90: sub     rsp, 80h
 * 00000001C0047B97: mov     rsi, rcx
 * 00000001C0047B9A: movzx   edi, r9w
 * 00000001C0047B9E: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0047BA5: mov     ebp, 4
 * 00000001C0047BAA: movzx   ebx, dl
 * 00000001C0047BAD: test    dword ptr [rcx+2Ch], 2000h
 * 00000001C0047BB4: jz      short loc_1C0047C1E
 * 00000001C0047BB6: cmp     [rcx+29h], bl
 * 00000001C0047BB9: jb      short loc_1C0047C1E
 * 00000001C0047BBB: and     qword ptr [r11-18h], 0
 * 00000001C0047BC0: lea     rdx, [r11+50h]
 * 00000001C0047BC4: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0047BCB: lea     r8, WPP_92c598da33ef340e00f5370896d293ba_Traceguids
 * 00000001C0047BD2: mov     rcx, [rcx+18h]
 * 00000001C0047BD6: mov     r9d, edi
 * 00000001C0047BD9: mov     [r11-20h], rbp
 * 00000001C0047BDD: mov     [r11-28h], rdx
 * 00000001C0047BE1: lea     rdx, [r11+48h]
 * 00000001C0047BE5: mov     qword ptr [r11-30h], 8
 * 00000001C0047BED: mov     [r11-38h], rdx
 * 00000001C0047BF1: lea     rdx, [r11+40h]
 * 00000001C0047BF5: mov     [r11-40h], rbp
 * 00000001C0047BF9: mov     [r11-48h], rdx
 * 00000001C0047BFD: lea     rdx, [r11+38h]
 * 00000001C0047C01: mov     [r11-50h], rbp
 * 00000001C0047C05: mov     [r11-58h], rdx
 * 00000001C0047C09: lea     rdx, [r11+30h]
 * 00000001C0047C0D: mov     [r11-60h], rbp
 * 00000001C0047C11: mov     [r11-68h], rdx
 * 00000001C0047C15: lea     edx, [rbp+27h]
 * 00000001C0047C18: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0047C1E: and     [rsp+88h+var_10], 0
 * 00000001C0047C24: lea     rax, [rsp+88h+arg_48]
 * 00000001C0047C2C: mov     [rsp+88h+var_18], rbp
 * 00000001C0047C31: lea     r9, WPP_92c598da33ef340e00f5370896d293ba_Traceguids
 * 00000001C0047C38: mov     [rsp+88h+var_20], rax
 * 00000001C0047C3D: mov     r8d, 0Eh
 * 00000001C0047C43: mov     [rsp+88h+var_28], 8
 * 00000001C0047C4C: lea     rax, [rsp+88h+arg_40]
 * 00000001C0047C54: mov     [rsp+88h+var_30], rax
 * 00000001C0047C59: mov     edx, ebx
 * 00000001C0047C5B: mov     [rsp+88h+var_38], rbp
 * 00000001C0047C60: lea     rax, [rsp+88h+arg_38]
 * 00000001C0047C68: mov     [rsp+88h+var_40], rax
 * 00000001C0047C6D: mov     rcx, rsi
 * 00000001C0047C70: mov     [rsp+88h+var_48], rbp
 * 00000001C0047C75: lea     rax, [rsp+88h+arg_30]
 * 00000001C0047C7D: mov     [rsp+88h+var_50], rax
 * 00000001C0047C82: lea     rax, [rsp+88h+arg_28]
 * 00000001C0047C8A: mov     [rsp+88h+var_58], rbp
 * 00000001C0047C8F: mov     [rsp+88h+var_60], rax
 * 00000001C0047C94: mov     [rsp+88h+var_68], di
 * 00000001C0047C99: call    cs:__imp_WppAutoLogTrace
 * 00000001C0047CA0: nop     dword ptr [rax+rax+00h]
 * 00000001C0047CA5: lea     r11, [rsp+88h+var_8]
 * 00000001C0047CAD: mov     rbx, [r11+10h]
 * 00000001C0047CB1: mov     rbp, [r11+18h]
 * 00000001C0047CB5: mov     rsi, [r11+20h]
 * 00000001C0047CB9: mov     rsp, r11
 * 00000001C0047CBC: pop     rdi
 * 00000001C0047CBD: retn
 */
