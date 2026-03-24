/*
 * XREFs of WPP_RECORDER_SF_ddL @ 0x1C003C708
 * Callers:
 *     PnpiGrowResourceDescriptor @ 0x1C0091DC0 (PnpiGrowResourceDescriptor.c)
 *     PnpiGrowResourceList @ 0x1C0091ECC (PnpiGrowResourceList.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0001DE0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_ddL @ 0x1C003C708
 * Reason: Hex-Rays returned no pseudocode for 0x1C003C708
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C003C708: mov     r11, rsp
 * 00000001C003C70B: mov     [r11+8], rbx
 * 00000001C003C70F: mov     [r11+10h], rbp
 * 00000001C003C713: mov     [r11+18h], rsi
 * 00000001C003C717: push    rdi
 * 00000001C003C718: sub     rsp, 60h
 * 00000001C003C71C: mov     rsi, rcx
 * 00000001C003C71F: movzx   edi, r9w
 * 00000001C003C723: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C003C72A: mov     ebp, 4
 * 00000001C003C72F: movzx   ebx, dl
 * 00000001C003C732: test    dword ptr [rcx+2Ch], 2000h
 * 00000001C003C739: jz      short loc_1C003C787
 * 00000001C003C73B: cmp     [rcx+29h], bl
 * 00000001C003C73E: jb      short loc_1C003C787
 * 00000001C003C740: and     qword ptr [r11-18h], 0
 * 00000001C003C745: lea     rdx, [r11+40h]
 * 00000001C003C749: mov     rax, cs:pfnWppTraceMessage
 * 00000001C003C750: lea     r8, WPP_acc401d4e49f33dc1a5cdf16911e1587_Traceguids
 * 00000001C003C757: mov     rcx, [rcx+18h]
 * 00000001C003C75B: mov     r9d, edi
 * 00000001C003C75E: mov     [r11-20h], rbp
 * 00000001C003C762: mov     [r11-28h], rdx
 * 00000001C003C766: lea     rdx, [r11+38h]
 * 00000001C003C76A: mov     [r11-30h], rbp
 * 00000001C003C76E: mov     [r11-38h], rdx
 * 00000001C003C772: lea     rdx, [r11+30h]
 * 00000001C003C776: mov     [r11-40h], rbp
 * 00000001C003C77A: mov     [r11-48h], rdx
 * 00000001C003C77E: lea     edx, [rbp+27h]
 * 00000001C003C781: call    cs:__guard_dispatch_icall_fptr
 * 00000001C003C787: and     [rsp+68h+var_10], 0
 * 00000001C003C78D: lea     rax, [rsp+68h+arg_38]
 * 00000001C003C795: mov     [rsp+68h+var_18], rbp
 * 00000001C003C79A: lea     r9, WPP_acc401d4e49f33dc1a5cdf16911e1587_Traceguids
 * 00000001C003C7A1: mov     [rsp+68h+var_20], rax
 * 00000001C003C7A6: mov     r8d, 0Eh
 * 00000001C003C7AC: mov     [rsp+68h+var_28], rbp
 * 00000001C003C7B1: lea     rax, [rsp+68h+arg_30]
 * 00000001C003C7B9: mov     [rsp+68h+var_30], rax
 * 00000001C003C7BE: mov     edx, ebx
 * 00000001C003C7C0: lea     rax, [rsp+68h+arg_28]
 * 00000001C003C7C8: mov     [rsp+68h+var_38], rbp
 * 00000001C003C7CD: mov     [rsp+68h+var_40], rax
 * 00000001C003C7D2: mov     rcx, rsi
 * 00000001C003C7D5: mov     [rsp+68h+var_48], di
 * 00000001C003C7DA: call    cs:__imp_WppAutoLogTrace
 * 00000001C003C7E1: nop     dword ptr [rax+rax+00h]
 * 00000001C003C7E6: lea     r11, [rsp+68h+var_8]
 * 00000001C003C7EB: mov     rbx, [r11+10h]
 * 00000001C003C7EF: mov     rbp, [r11+18h]
 * 00000001C003C7F3: mov     rsi, [r11+20h]
 * 00000001C003C7F7: mov     rsp, r11
 * 00000001C003C7FA: pop     rdi
 * 00000001C003C7FB: retn
 */
