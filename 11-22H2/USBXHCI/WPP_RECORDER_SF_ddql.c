/*
 * XREFs of WPP_RECORDER_SF_ddqL @ 0x1C003D6C8
 * Callers:
 *     Endpoint_TransferEventHandler @ 0x1C0009BD0 (Endpoint_TransferEventHandler.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0020270 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_ddqL @ 0x1C003D6C8
 * Reason: Hex-Rays returned no pseudocode for 0x1C003D6C8
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C003D6C8: mov     r11, rsp
 * 00000001C003D6CB: mov     [r11+8], rbx
 * 00000001C003D6CF: mov     [r11+10h], rsi
 * 00000001C003D6D3: push    rdi
 * 00000001C003D6D4: sub     rsp, 70h
 * 00000001C003D6D8: mov     rdi, rcx
 * 00000001C003D6DB: movzx   ebx, r9w
 * 00000001C003D6DF: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C003D6E6: mov     esi, 4
 * 00000001C003D6EB: test    dword ptr [rcx+2Ch], 1000h
 * 00000001C003D6F2: jz      short loc_1C003D751
 * 00000001C003D6F4: cmp     [rcx+29h], sil
 * 00000001C003D6F8: jb      short loc_1C003D751
 * 00000001C003D6FA: and     qword ptr [r11-18h], 0
 * 00000001C003D6FF: lea     rdx, [r11+48h]
 * 00000001C003D703: mov     rax, cs:pfnWppTraceMessage
 * 00000001C003D70A: lea     r8, WPP_54015396503830aea6e7f220ba327c55_Traceguids
 * 00000001C003D711: mov     rcx, [rcx+18h]
 * 00000001C003D715: mov     r9d, ebx
 * 00000001C003D718: mov     [r11-20h], rsi
 * 00000001C003D71C: mov     [r11-28h], rdx
 * 00000001C003D720: lea     rdx, [r11+40h]
 * 00000001C003D724: mov     qword ptr [r11-30h], 8
 * 00000001C003D72C: mov     [r11-38h], rdx
 * 00000001C003D730: lea     rdx, [r11+38h]
 * 00000001C003D734: mov     [r11-40h], rsi
 * 00000001C003D738: mov     [r11-48h], rdx
 * 00000001C003D73C: lea     rdx, [r11+30h]
 * 00000001C003D740: mov     [r11-50h], rsi
 * 00000001C003D744: mov     [r11-58h], rdx
 * 00000001C003D748: lea     edx, [rsi+27h]
 * 00000001C003D74B: call    cs:__guard_dispatch_icall_fptr
 * 00000001C003D751: and     [rsp+78h+var_10], 0
 * 00000001C003D757: lea     rax, [rsp+78h+arg_40]
 * 00000001C003D75F: mov     [rsp+78h+var_18], rsi
 * 00000001C003D764: lea     r9, WPP_54015396503830aea6e7f220ba327c55_Traceguids
 * 00000001C003D76B: mov     [rsp+78h+var_20], rax
 * 00000001C003D770: mov     r8d, 0Dh
 * 00000001C003D776: mov     [rsp+78h+var_28], 8
 * 00000001C003D77F: lea     rax, [rsp+78h+arg_38]
 * 00000001C003D787: mov     [rsp+78h+var_30], rax
 * 00000001C003D78C: mov     edx, esi
 * 00000001C003D78E: mov     [rsp+78h+var_38], rsi
 * 00000001C003D793: lea     rax, [rsp+78h+arg_30]
 * 00000001C003D79B: mov     [rsp+78h+var_40], rax
 * 00000001C003D7A0: mov     rcx, rdi
 * 00000001C003D7A3: lea     rax, [rsp+78h+arg_28]
 * 00000001C003D7AB: mov     [rsp+78h+var_48], rsi
 * 00000001C003D7B0: mov     [rsp+78h+var_50], rax
 * 00000001C003D7B5: mov     [rsp+78h+var_58], bx
 * 00000001C003D7BA: call    cs:__imp_WppAutoLogTrace
 * 00000001C003D7C1: nop     dword ptr [rax+rax+00h]
 * 00000001C003D7C6: lea     r11, [rsp+78h+var_8]
 * 00000001C003D7CB: mov     rbx, [r11+10h]
 * 00000001C003D7CF: mov     rsi, [r11+18h]
 * 00000001C003D7D3: mov     rsp, r11
 * 00000001C003D7D6: pop     rdi
 * 00000001C003D7D7: retn
 */
