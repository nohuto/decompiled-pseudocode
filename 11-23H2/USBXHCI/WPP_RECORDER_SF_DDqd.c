/*
 * XREFs of WPP_RECORDER_SF_DDqD @ 0x1C00437F0
 * Callers:
 *     Isoch_ProcessTransferEventWithED1 @ 0x1C0001EC0 (Isoch_ProcessTransferEventWithED1.c)
 *     Control_Transfer_ValidateBuffer @ 0x1C00072C0 (Control_Transfer_ValidateBuffer.c)
 *     Isoch_CompleteStaleTransfers @ 0x1C0043BD4 (Isoch_CompleteStaleTransfers.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00203A0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_DDqD @ 0x1C00437F0
 * Reason: Hex-Rays returned no pseudocode for 0x1C00437F0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00437F0: mov     r11, rsp
 * 00000001C00437F3: mov     [r11+8], rbx
 * 00000001C00437F7: mov     [r11+10h], rbp
 * 00000001C00437FB: mov     [r11+18h], rsi
 * 00000001C00437FF: push    rdi
 * 00000001C0043800: sub     rsp, 70h
 * 00000001C0043804: mov     rsi, rcx
 * 00000001C0043807: movzx   edi, r9w
 * 00000001C004380B: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0043812: mov     ebp, 4
 * 00000001C0043817: movzx   ebx, dl
 * 00000001C004381A: test    dword ptr [rcx+2Ch], 2000h
 * 00000001C0043821: jz      short loc_1C0043880
 * 00000001C0043823: cmp     [rcx+29h], bl
 * 00000001C0043826: jb      short loc_1C0043880
 * 00000001C0043828: and     qword ptr [r11-18h], 0
 * 00000001C004382D: lea     rdx, [r11+48h]
 * 00000001C0043831: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0043838: mov     r9d, edi
 * 00000001C004383B: mov     r8, [rsp+78h+arg_20]
 * 00000001C0043843: mov     rcx, [rcx+18h]
 * 00000001C0043847: mov     [r11-20h], rbp
 * 00000001C004384B: mov     [r11-28h], rdx
 * 00000001C004384F: lea     rdx, [r11+40h]
 * 00000001C0043853: mov     qword ptr [r11-30h], 8
 * 00000001C004385B: mov     [r11-38h], rdx
 * 00000001C004385F: lea     rdx, [r11+38h]
 * 00000001C0043863: mov     [r11-40h], rbp
 * 00000001C0043867: mov     [r11-48h], rdx
 * 00000001C004386B: lea     rdx, [r11+30h]
 * 00000001C004386F: mov     [r11-50h], rbp
 * 00000001C0043873: mov     [r11-58h], rdx
 * 00000001C0043877: lea     edx, [rbp+27h]
 * 00000001C004387A: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0043880: and     [rsp+78h+var_10], 0
 * 00000001C0043886: lea     rax, [rsp+78h+arg_40]
 * 00000001C004388E: mov     r9, [rsp+78h+arg_20]
 * 00000001C0043896: mov     r8d, 0Eh
 * 00000001C004389C: mov     [rsp+78h+var_18], rbp
 * 00000001C00438A1: mov     edx, ebx
 * 00000001C00438A3: mov     [rsp+78h+var_20], rax
 * 00000001C00438A8: mov     rcx, rsi
 * 00000001C00438AB: mov     [rsp+78h+var_28], 8
 * 00000001C00438B4: lea     rax, [rsp+78h+arg_38]
 * 00000001C00438BC: mov     [rsp+78h+var_30], rax
 * 00000001C00438C1: lea     rax, [rsp+78h+arg_30]
 * 00000001C00438C9: mov     [rsp+78h+var_38], rbp
 * 00000001C00438CE: mov     [rsp+78h+var_40], rax
 * 00000001C00438D3: lea     rax, [rsp+78h+arg_28]
 * 00000001C00438DB: mov     [rsp+78h+var_48], rbp
 * 00000001C00438E0: mov     [rsp+78h+var_50], rax
 * 00000001C00438E5: mov     [rsp+78h+var_58], di
 * 00000001C00438EA: call    cs:__imp_WppAutoLogTrace
 * 00000001C00438F1: nop     dword ptr [rax+rax+00h]
 * 00000001C00438F6: lea     r11, [rsp+78h+var_8]
 * 00000001C00438FB: mov     rbx, [r11+10h]
 * 00000001C00438FF: mov     rbp, [r11+18h]
 * 00000001C0043903: mov     rsi, [r11+20h]
 * 00000001C0043907: mov     rsp, r11
 * 00000001C004390A: pop     rdi
 * 00000001C004390B: retn
 */
