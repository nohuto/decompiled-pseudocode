/*
 * XREFs of WPP_RECORDER_SF_ddqL @ 0x1C003D808
 * Callers:
 *     Endpoint_TransferEventHandler @ 0x1C0009BA0 (Endpoint_TransferEventHandler.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00203A0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_ddqL @ 0x1C003D808
 * Reason: Hex-Rays returned no pseudocode for 0x1C003D808
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C003D808: mov     r11, rsp
 * 00000001C003D80B: mov     [r11+8], rbx
 * 00000001C003D80F: mov     [r11+10h], rsi
 * 00000001C003D813: push    rdi
 * 00000001C003D814: sub     rsp, 70h
 * 00000001C003D818: mov     rdi, rcx
 * 00000001C003D81B: movzx   ebx, r9w
 * 00000001C003D81F: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C003D826: mov     esi, 4
 * 00000001C003D82B: test    dword ptr [rcx+2Ch], 1000h
 * 00000001C003D832: jz      short loc_1C003D891
 * 00000001C003D834: cmp     [rcx+29h], sil
 * 00000001C003D838: jb      short loc_1C003D891
 * 00000001C003D83A: and     qword ptr [r11-18h], 0
 * 00000001C003D83F: lea     rdx, [r11+48h]
 * 00000001C003D843: mov     rax, cs:pfnWppTraceMessage
 * 00000001C003D84A: lea     r8, WPP_54015396503830aea6e7f220ba327c55_Traceguids
 * 00000001C003D851: mov     rcx, [rcx+18h]
 * 00000001C003D855: mov     r9d, ebx
 * 00000001C003D858: mov     [r11-20h], rsi
 * 00000001C003D85C: mov     [r11-28h], rdx
 * 00000001C003D860: lea     rdx, [r11+40h]
 * 00000001C003D864: mov     qword ptr [r11-30h], 8
 * 00000001C003D86C: mov     [r11-38h], rdx
 * 00000001C003D870: lea     rdx, [r11+38h]
 * 00000001C003D874: mov     [r11-40h], rsi
 * 00000001C003D878: mov     [r11-48h], rdx
 * 00000001C003D87C: lea     rdx, [r11+30h]
 * 00000001C003D880: mov     [r11-50h], rsi
 * 00000001C003D884: mov     [r11-58h], rdx
 * 00000001C003D888: lea     edx, [rsi+27h]
 * 00000001C003D88B: call    cs:__guard_dispatch_icall_fptr
 * 00000001C003D891: and     [rsp+78h+var_10], 0
 * 00000001C003D897: lea     rax, [rsp+78h+arg_40]
 * 00000001C003D89F: mov     [rsp+78h+var_18], rsi
 * 00000001C003D8A4: lea     r9, WPP_54015396503830aea6e7f220ba327c55_Traceguids
 * 00000001C003D8AB: mov     [rsp+78h+var_20], rax
 * 00000001C003D8B0: mov     r8d, 0Dh
 * 00000001C003D8B6: mov     [rsp+78h+var_28], 8
 * 00000001C003D8BF: lea     rax, [rsp+78h+arg_38]
 * 00000001C003D8C7: mov     [rsp+78h+var_30], rax
 * 00000001C003D8CC: mov     edx, esi
 * 00000001C003D8CE: mov     [rsp+78h+var_38], rsi
 * 00000001C003D8D3: lea     rax, [rsp+78h+arg_30]
 * 00000001C003D8DB: mov     [rsp+78h+var_40], rax
 * 00000001C003D8E0: mov     rcx, rdi
 * 00000001C003D8E3: lea     rax, [rsp+78h+arg_28]
 * 00000001C003D8EB: mov     [rsp+78h+var_48], rsi
 * 00000001C003D8F0: mov     [rsp+78h+var_50], rax
 * 00000001C003D8F5: mov     [rsp+78h+var_58], bx
 * 00000001C003D8FA: call    cs:__imp_WppAutoLogTrace
 * 00000001C003D901: nop     dword ptr [rax+rax+00h]
 * 00000001C003D906: lea     r11, [rsp+78h+var_8]
 * 00000001C003D90B: mov     rbx, [r11+10h]
 * 00000001C003D90F: mov     rsi, [r11+18h]
 * 00000001C003D913: mov     rsp, r11
 * 00000001C003D916: pop     rdi
 * 00000001C003D917: retn
 */
