/*
 * XREFs of WPP_RECORDER_SF_Dd @ 0x1C00021B0
 * Callers:
 *     MouConfiguration @ 0x1C0011080 (MouConfiguration.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0002B60 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_Dd @ 0x1C00021B0
 * Reason: Hex-Rays returned no pseudocode for 0x1C00021B0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00021B0: mov     [rsp+arg_0], rbx
 * 00000001C00021B5: push    rsi
 * 00000001C00021B6: sub     rsp, 50h
 * 00000001C00021BA: mov     rbx, rcx
 * 00000001C00021BD: mov     esi, 42h ; 'B'
 * 00000001C00021C2: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C00021C9: mov     eax, [rcx+2Ch]
 * 00000001C00021CC: test    al, 1
 * 00000001C00021CE: jnz     loc_1C00036C2
 * 00000001C00021D4: mov     [rsp+58h+var_10], 0
 * 00000001C00021DD: lea     rax, [rsp+58h+arg_30]
 * 00000001C00021E5: mov     [rsp+58h+var_18], 4
 * 00000001C00021EE: lea     r9, WPP_d07d70ae1de939905882a75eef030211_Traceguids
 * 00000001C00021F5: mov     [rsp+58h+var_20], rax
 * 00000001C00021FA: mov     edx, 4
 * 00000001C00021FF: lea     rax, [rsp+58h+arg_28]
 * 00000001C0002207: mov     [rsp+58h+var_28], 4
 * 00000001C0002210: mov     [rsp+58h+var_30], rax
 * 00000001C0002215: mov     rcx, rbx
 * 00000001C0002218: mov     word ptr [rsp+58h+var_38], si
 * 00000001C000221D: lea     r8d, [rdx-3]
 * 00000001C0002221: call    cs:__imp_WppAutoLogTrace
 * 00000001C0002228: nop     dword ptr [rax+rax+00h]
 * 00000001C000222D: mov     rbx, [rsp+58h+arg_0]
 * 00000001C0002232: add     rsp, 50h
 * 00000001C0002236: pop     rsi
 * 00000001C0002237: retn
 * 00000001C00036C2: cmp     byte ptr [rcx+29h], 4
 * 00000001C00036C6: jb      loc_1C00021D4
 * 00000001C00036CC: mov     rax, cs:pfnWppTraceMessage
 * 00000001C00036D3: lea     rdx, [rsp+58h+arg_30]
 * 00000001C00036DB: mov     rcx, [rcx+18h]
 * 00000001C00036DF: lea     r8, WPP_d07d70ae1de939905882a75eef030211_Traceguids
 * 00000001C00036E6: mov     [rsp+58h+var_18], 0
 * 00000001C00036EF: mov     r9d, esi
 * 00000001C00036F2: mov     [rsp+58h+var_20], 4
 * 00000001C00036FB: mov     [rsp+58h+var_28], rdx
 * 00000001C0003700: lea     rdx, [rsp+58h+arg_28]
 * 00000001C0003708: mov     [rsp+58h+var_30], 4
 * 00000001C0003711: mov     [rsp+58h+var_38], rdx
 * 00000001C0003716: mov     edx, 2Bh ; '+'
 * 00000001C000371B: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0003721: nop
 * 00000001C0003722: jmp     loc_1C00021D4
 */
