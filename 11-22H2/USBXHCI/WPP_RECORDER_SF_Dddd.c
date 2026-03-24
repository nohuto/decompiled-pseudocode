/*
 * XREFs of WPP_RECORDER_SF_DDDd @ 0x1C0041E60
 * Callers:
 *     Bulk_RetrieveNextStage @ 0x1C001200C (Bulk_RetrieveNextStage.c)
 *     TR_Create @ 0x1C006DE38 (TR_Create.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0020270 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_DDDd @ 0x1C0041E60
 * Reason: Hex-Rays returned no pseudocode for 0x1C0041E60
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0041E60: mov     r11, rsp
 * 00000001C0041E63: mov     [r11+8], rbx
 * 00000001C0041E67: mov     [r11+10h], rbp
 * 00000001C0041E6B: mov     [r11+18h], rsi
 * 00000001C0041E6F: push    rdi
 * 00000001C0041E70: sub     rsp, 70h
 * 00000001C0041E74: mov     rsi, rcx
 * 00000001C0041E77: movzx   edi, r9w
 * 00000001C0041E7B: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0041E82: mov     ebp, 4
 * 00000001C0041E87: movzx   ebx, dl
 * 00000001C0041E8A: test    dword ptr [rcx+2Ch], 2000h
 * 00000001C0041E91: jz      short loc_1C0041EEC
 * 00000001C0041E93: cmp     [rcx+29h], bl
 * 00000001C0041E96: jb      short loc_1C0041EEC
 * 00000001C0041E98: and     qword ptr [r11-18h], 0
 * 00000001C0041E9D: lea     rdx, [r11+48h]
 * 00000001C0041EA1: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0041EA8: mov     r9d, edi
 * 00000001C0041EAB: mov     r8, [rsp+78h+arg_20]
 * 00000001C0041EB3: mov     rcx, [rcx+18h]
 * 00000001C0041EB7: mov     [r11-20h], rbp
 * 00000001C0041EBB: mov     [r11-28h], rdx
 * 00000001C0041EBF: lea     rdx, [r11+40h]
 * 00000001C0041EC3: mov     [r11-30h], rbp
 * 00000001C0041EC7: mov     [r11-38h], rdx
 * 00000001C0041ECB: lea     rdx, [r11+38h]
 * 00000001C0041ECF: mov     [r11-40h], rbp
 * 00000001C0041ED3: mov     [r11-48h], rdx
 * 00000001C0041ED7: lea     rdx, [r11+30h]
 * 00000001C0041EDB: mov     [r11-50h], rbp
 * 00000001C0041EDF: mov     [r11-58h], rdx
 * 00000001C0041EE3: lea     edx, [rbp+27h]
 * 00000001C0041EE6: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0041EEC: and     [rsp+78h+var_10], 0
 * 00000001C0041EF2: lea     rax, [rsp+78h+arg_40]
 * 00000001C0041EFA: mov     r9, [rsp+78h+arg_20]
 * 00000001C0041F02: mov     r8d, 0Eh
 * 00000001C0041F08: mov     [rsp+78h+var_18], rbp
 * 00000001C0041F0D: mov     edx, ebx
 * 00000001C0041F0F: mov     [rsp+78h+var_20], rax
 * 00000001C0041F14: mov     rcx, rsi
 * 00000001C0041F17: mov     [rsp+78h+var_28], rbp
 * 00000001C0041F1C: lea     rax, [rsp+78h+arg_38]
 * 00000001C0041F24: mov     [rsp+78h+var_30], rax
 * 00000001C0041F29: lea     rax, [rsp+78h+arg_30]
 * 00000001C0041F31: mov     [rsp+78h+var_38], rbp
 * 00000001C0041F36: mov     [rsp+78h+var_40], rax
 * 00000001C0041F3B: lea     rax, [rsp+78h+arg_28]
 * 00000001C0041F43: mov     [rsp+78h+var_48], rbp
 * 00000001C0041F48: mov     [rsp+78h+var_50], rax
 * 00000001C0041F4D: mov     [rsp+78h+var_58], di
 * 00000001C0041F52: call    cs:__imp_WppAutoLogTrace
 * 00000001C0041F59: nop     dword ptr [rax+rax+00h]
 * 00000001C0041F5E: lea     r11, [rsp+78h+var_8]
 * 00000001C0041F63: mov     rbx, [r11+10h]
 * 00000001C0041F67: mov     rbp, [r11+18h]
 * 00000001C0041F6B: mov     rsi, [r11+20h]
 * 00000001C0041F6F: mov     rsp, r11
 * 00000001C0041F72: pop     rdi
 * 00000001C0041F73: retn
 */
