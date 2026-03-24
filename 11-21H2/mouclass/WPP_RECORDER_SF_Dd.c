/*
 * XREFs of WPP_RECORDER_SF_Dd @ 0x1C0002990
 * Callers:
 *     MouConfiguration @ 0x1C000F080 (MouConfiguration.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0002F10 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_Dd @ 0x1C0002990
 * Reason: Hex-Rays returned no pseudocode for 0x1C0002990
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0002990: mov     [rsp+arg_0], rbx
 * 00000001C0002995: push    rsi
 * 00000001C0002996: sub     rsp, 50h
 * 00000001C000299A: mov     rbx, rcx
 * 00000001C000299D: mov     esi, 42h ; 'B'
 * 00000001C00029A2: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C00029A9: mov     eax, [rcx+2Ch]
 * 00000001C00029AC: test    al, 1
 * 00000001C00029AE: jnz     loc_1C00048F6
 * 00000001C00029B4: mov     [rsp+58h+var_10], 0
 * 00000001C00029BD: lea     rax, [rsp+58h+arg_30]
 * 00000001C00029C5: mov     [rsp+58h+var_18], 4
 * 00000001C00029CE: lea     r9, WPP_d07d70ae1de939905882a75eef030211_Traceguids
 * 00000001C00029D5: mov     [rsp+58h+var_20], rax
 * 00000001C00029DA: mov     edx, 4
 * 00000001C00029DF: lea     rax, [rsp+58h+arg_28]
 * 00000001C00029E7: mov     [rsp+58h+var_28], 4
 * 00000001C00029F0: mov     [rsp+58h+var_30], rax
 * 00000001C00029F5: mov     rcx, rbx
 * 00000001C00029F8: mov     word ptr [rsp+58h+var_38], si
 * 00000001C00029FD: lea     r8d, [rdx-3]
 * 00000001C0002A01: call    cs:__imp_WppAutoLogTrace
 * 00000001C0002A08: nop     dword ptr [rax+rax+00h]
 * 00000001C0002A0D: mov     rbx, [rsp+58h+arg_0]
 * 00000001C0002A12: add     rsp, 50h
 * 00000001C0002A16: pop     rsi
 * 00000001C0002A17: retn
 * 00000001C00048F6: cmp     byte ptr [rcx+29h], 4
 * 00000001C00048FA: jb      loc_1C00029B4
 * 00000001C0004900: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0004907: lea     rdx, [rsp+58h+arg_30]
 * 00000001C000490F: mov     rcx, [rcx+18h]
 * 00000001C0004913: lea     r8, WPP_d07d70ae1de939905882a75eef030211_Traceguids
 * 00000001C000491A: mov     [rsp+58h+var_18], 0
 * 00000001C0004923: mov     [rsp+58h+var_20], 4
 * 00000001C000492C: mov     [rsp+58h+var_28], rdx
 * 00000001C0004931: lea     rdx, [rsp+58h+arg_28]
 * 00000001C0004939: mov     [rsp+58h+var_30], 4
 * 00000001C0004942: mov     [rsp+58h+var_38], rdx
 * 00000001C0004947: mov     edx, 2Bh ; '+'
 * 00000001C000494C: movzx   r9d, si
 * 00000001C0004950: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0004956: nop
 * 00000001C0004957: jmp     loc_1C00029B4
 */
