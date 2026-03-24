/*
 * XREFs of WPP_RECORDER_SF_dqs @ 0x1C00227E0
 * Callers:
 *     ACPIDevicePowerProcessPhase1DeviceSubPhase4EnumPowerNodes @ 0x1C001F680 (ACPIDevicePowerProcessPhase1DeviceSubPhase4EnumPowerNodes.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0001DE0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_dqs @ 0x1C00227E0
 * Reason: Hex-Rays returned no pseudocode for 0x1C00227E0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00227E0: mov     [rsp+arg_0], rbx
 * 00000001C00227E5: mov     [rsp+arg_8], rsi
 * 00000001C00227EA: mov     [rsp+arg_10], rdi
 * 00000001C00227EF: push    r13
 * 00000001C00227F1: sub     rsp, 60h
 * 00000001C00227F5: mov     rdx, cs:WPP_GLOBAL_Control
 * 00000001C00227FC: lea     r13, aNull; "NULL"
 * 00000001C0022803: mov     rdi, [rsp+68h+arg_38]
 * 00000001C002280B: or      rbx, 0FFFFFFFFFFFFFFFFh
 * 00000001C002280F: mov     rsi, rcx
 * 00000001C0022812: test    dword ptr [rdx+2Ch], 200h
 * 00000001C0022819: lea     r8d, [rbx+3Dh]
 * 00000001C002281D: jz      loc_1C00228BB
 * 00000001C0022823: cmp     byte ptr [rdx+29h], 4
 * 00000001C0022827: jb      loc_1C00228BB
 * 00000001C002282D: test    rdi, rdi
 * 00000001C0022830: jz      short loc_1C0022843
 * 00000001C0022832: mov     rdx, rbx
 * 00000001C0022835: inc     rdx
 * 00000001C0022838: cmp     byte ptr [rdi+rdx], 0
 * 00000001C002283C: jnz     short loc_1C0022835
 * 00000001C002283E: inc     rdx
 * 00000001C0022841: jmp     short loc_1C0022848
 * 00000001C0022843: mov     edx, 5
 * 00000001C0022848: mov     rax, cs:pfnWppTraceMessage
 * 00000001C002284F: test    rdi, rdi
 * 00000001C0022852: mov     r9d, r8d
 * 00000001C0022855: mov     rcx, rdi
 * 00000001C0022858: cmovz   rcx, r13
 * 00000001C002285C: lea     r8, WPP_afb93ce9a898342faba18bc7242ff62e_Traceguids
 * 00000001C0022863: and     [rsp+68h+var_18], 0
 * 00000001C0022869: mov     [rsp+68h+var_20], rdx
 * 00000001C002286E: mov     edx, 2Bh ; '+'
 * 00000001C0022873: mov     [rsp+68h+var_28], rcx
 * 00000001C0022878: lea     rcx, [rsp+68h+arg_30]
 * 00000001C0022880: mov     [rsp+68h+var_30], 8
 * 00000001C0022889: mov     [rsp+68h+var_38], rcx
 * 00000001C002288E: lea     rcx, [rsp+68h+arg_28]
 * 00000001C0022896: mov     [rsp+68h+var_40], 4
 * 00000001C002289F: mov     [rsp+68h+var_48], rcx
 * 00000001C00228A4: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C00228AB: mov     rcx, [rcx+18h]
 * 00000001C00228AF: call    cs:__guard_dispatch_icall_fptr
 * 00000001C00228B5: mov     r8d, 3Ch ; '<'
 * 00000001C00228BB: test    rdi, rdi
 * 00000001C00228BE: jz      short loc_1C00228CE
 * 00000001C00228C0: inc     rbx
 * 00000001C00228C3: cmp     byte ptr [rdi+rbx], 0
 * 00000001C00228C7: jnz     short loc_1C00228C0
 * 00000001C00228C9: inc     rbx
 * 00000001C00228CC: jmp     short loc_1C00228D3
 * 00000001C00228CE: mov     ebx, 5
 * 00000001C00228D3: test    rdi, rdi
 * 00000001C00228D6: lea     rax, [rsp+68h+arg_30]
 * 00000001C00228DE: mov     edx, 4
 * 00000001C00228E3: lea     r9, WPP_afb93ce9a898342faba18bc7242ff62e_Traceguids
 * 00000001C00228EA: cmovz   rdi, r13
 * 00000001C00228EE: mov     rcx, rsi
 * 00000001C00228F1: and     [rsp+68h+var_10], 0
 * 00000001C00228F7: mov     [rsp+68h+var_18], rbx
 * 00000001C00228FC: mov     [rsp+68h+var_20], rdi
 * 00000001C0022901: mov     [rsp+68h+var_28], 8
 * 00000001C002290A: mov     [rsp+68h+var_30], rax
 * 00000001C002290F: lea     rax, [rsp+68h+arg_28]
 * 00000001C0022917: mov     [rsp+68h+var_38], 4
 * 00000001C0022920: mov     [rsp+68h+var_40], rax
 * 00000001C0022925: mov     word ptr [rsp+68h+var_48], r8w
 * 00000001C002292B: lea     r8d, [rdx+6]
 * 00000001C002292F: call    cs:__imp_WppAutoLogTrace
 * 00000001C0022936: nop     dword ptr [rax+rax+00h]
 * 00000001C002293B: lea     r11, [rsp+68h+var_8]
 * 00000001C0022940: mov     rbx, [r11+10h]
 * 00000001C0022944: mov     rsi, [r11+18h]
 * 00000001C0022948: mov     rdi, [r11+20h]
 * 00000001C002294C: mov     rsp, r11
 * 00000001C002294F: pop     r13
 * 00000001C0022951: retn
 */
