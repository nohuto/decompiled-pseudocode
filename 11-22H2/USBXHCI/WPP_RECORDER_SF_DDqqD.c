/*
 * XREFs of WPP_RECORDER_SF_ddqqD @ 0x1C003D904
 * Callers:
 *     Endpoint_SM_ShouldReconfigureEndpointOnResetWhenNotHalted @ 0x1C003BBF0 (Endpoint_SM_ShouldReconfigureEndpointOnResetWhenNotHalted.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0020270 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_ddqqD @ 0x1C003D904
 * Reason: Hex-Rays returned no pseudocode for 0x1C003D904
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C003D904: mov     r11, rsp
 * 00000001C003D907: mov     [r11+8], rbx
 * 00000001C003D90B: mov     [r11+10h], rbp
 * 00000001C003D90F: mov     [r11+18h], rsi
 * 00000001C003D913: push    rdi
 * 00000001C003D914: sub     rsp, 80h
 * 00000001C003D91B: mov     edi, 4
 * 00000001C003D920: mov     rbx, rcx
 * 00000001C003D923: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C003D92A: lea     ebp, [rdi+71h]
 * 00000001C003D92D: test    dword ptr [rcx+2Ch], 1000h
 * 00000001C003D934: lea     esi, [rdi+4]
 * 00000001C003D937: jz      short loc_1C003D99E
 * 00000001C003D939: cmp     [rcx+29h], dil
 * 00000001C003D93D: jb      short loc_1C003D99E
 * 00000001C003D93F: and     qword ptr [r11-18h], 0
 * 00000001C003D944: lea     rdx, [r11+50h]
 * 00000001C003D948: mov     rax, cs:pfnWppTraceMessage
 * 00000001C003D94F: lea     r8, WPP_54015396503830aea6e7f220ba327c55_Traceguids
 * 00000001C003D956: mov     rcx, [rcx+18h]
 * 00000001C003D95A: mov     r9d, ebp
 * 00000001C003D95D: mov     [r11-20h], rdi
 * 00000001C003D961: mov     [r11-28h], rdx
 * 00000001C003D965: lea     rdx, [r11+48h]
 * 00000001C003D969: mov     [r11-30h], rsi
 * 00000001C003D96D: mov     [r11-38h], rdx
 * 00000001C003D971: lea     rdx, [r11+40h]
 * 00000001C003D975: mov     [r11-40h], rsi
 * 00000001C003D979: mov     [r11-48h], rdx
 * 00000001C003D97D: lea     rdx, [r11+38h]
 * 00000001C003D981: mov     [r11-50h], rdi
 * 00000001C003D985: mov     [r11-58h], rdx
 * 00000001C003D989: lea     rdx, [r11+30h]
 * 00000001C003D98D: mov     [r11-60h], rdi
 * 00000001C003D991: mov     [r11-68h], rdx
 * 00000001C003D995: lea     edx, [rdi+27h]
 * 00000001C003D998: call    cs:__guard_dispatch_icall_fptr
 * 00000001C003D99E: and     [rsp+88h+var_10], 0
 * 00000001C003D9A4: lea     rax, [rsp+88h+arg_48]
 * 00000001C003D9AC: mov     [rsp+88h+var_18], rdi
 * 00000001C003D9B1: lea     r9, WPP_54015396503830aea6e7f220ba327c55_Traceguids
 * 00000001C003D9B8: mov     [rsp+88h+var_20], rax
 * 00000001C003D9BD: mov     r8d, 0Dh
 * 00000001C003D9C3: mov     [rsp+88h+var_28], rsi
 * 00000001C003D9C8: lea     rax, [rsp+88h+arg_40]
 * 00000001C003D9D0: mov     [rsp+88h+var_30], rax
 * 00000001C003D9D5: mov     edx, edi
 * 00000001C003D9D7: mov     [rsp+88h+var_38], rsi
 * 00000001C003D9DC: lea     rax, [rsp+88h+arg_38]
 * 00000001C003D9E4: mov     [rsp+88h+var_40], rax
 * 00000001C003D9E9: mov     rcx, rbx
 * 00000001C003D9EC: mov     [rsp+88h+var_48], rdi
 * 00000001C003D9F1: lea     rax, [rsp+88h+arg_30]
 * 00000001C003D9F9: mov     [rsp+88h+var_50], rax
 * 00000001C003D9FE: lea     rax, [rsp+88h+arg_28]
 * 00000001C003DA06: mov     [rsp+88h+var_58], rdi
 * 00000001C003DA0B: mov     [rsp+88h+var_60], rax
 * 00000001C003DA10: mov     [rsp+88h+var_68], bp
 * 00000001C003DA15: call    cs:__imp_WppAutoLogTrace
 * 00000001C003DA1C: nop     dword ptr [rax+rax+00h]
 * 00000001C003DA21: lea     r11, [rsp+88h+var_8]
 * 00000001C003DA29: mov     rbx, [r11+10h]
 * 00000001C003DA2D: mov     rbp, [r11+18h]
 * 00000001C003DA31: mov     rsi, [r11+20h]
 * 00000001C003DA35: mov     rsp, r11
 * 00000001C003DA38: pop     rdi
 * 00000001C003DA39: retn
 */
