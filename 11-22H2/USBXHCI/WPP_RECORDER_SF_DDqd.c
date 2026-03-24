/*
 * XREFs of WPP_RECORDER_SF_DDqD @ 0x1C00436B0
 * Callers:
 *     Isoch_ProcessTransferEventWithED1 @ 0x1C0001EC0 (Isoch_ProcessTransferEventWithED1.c)
 *     Control_Transfer_ValidateBuffer @ 0x1C00072F0 (Control_Transfer_ValidateBuffer.c)
 *     Isoch_CompleteStaleTransfers @ 0x1C0043A94 (Isoch_CompleteStaleTransfers.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0020270 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_DDqD @ 0x1C00436B0
 * Reason: Hex-Rays returned no pseudocode for 0x1C00436B0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00436B0: mov     r11, rsp
 * 00000001C00436B3: mov     [r11+8], rbx
 * 00000001C00436B7: mov     [r11+10h], rbp
 * 00000001C00436BB: mov     [r11+18h], rsi
 * 00000001C00436BF: push    rdi
 * 00000001C00436C0: sub     rsp, 70h
 * 00000001C00436C4: mov     rsi, rcx
 * 00000001C00436C7: movzx   edi, r9w
 * 00000001C00436CB: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C00436D2: mov     ebp, 4
 * 00000001C00436D7: movzx   ebx, dl
 * 00000001C00436DA: test    dword ptr [rcx+2Ch], 2000h
 * 00000001C00436E1: jz      short loc_1C0043740
 * 00000001C00436E3: cmp     [rcx+29h], bl
 * 00000001C00436E6: jb      short loc_1C0043740
 * 00000001C00436E8: and     qword ptr [r11-18h], 0
 * 00000001C00436ED: lea     rdx, [r11+48h]
 * 00000001C00436F1: mov     rax, cs:pfnWppTraceMessage
 * 00000001C00436F8: mov     r9d, edi
 * 00000001C00436FB: mov     r8, [rsp+78h+arg_20]
 * 00000001C0043703: mov     rcx, [rcx+18h]
 * 00000001C0043707: mov     [r11-20h], rbp
 * 00000001C004370B: mov     [r11-28h], rdx
 * 00000001C004370F: lea     rdx, [r11+40h]
 * 00000001C0043713: mov     qword ptr [r11-30h], 8
 * 00000001C004371B: mov     [r11-38h], rdx
 * 00000001C004371F: lea     rdx, [r11+38h]
 * 00000001C0043723: mov     [r11-40h], rbp
 * 00000001C0043727: mov     [r11-48h], rdx
 * 00000001C004372B: lea     rdx, [r11+30h]
 * 00000001C004372F: mov     [r11-50h], rbp
 * 00000001C0043733: mov     [r11-58h], rdx
 * 00000001C0043737: lea     edx, [rbp+27h]
 * 00000001C004373A: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0043740: and     [rsp+78h+var_10], 0
 * 00000001C0043746: lea     rax, [rsp+78h+arg_40]
 * 00000001C004374E: mov     r9, [rsp+78h+arg_20]
 * 00000001C0043756: mov     r8d, 0Eh
 * 00000001C004375C: mov     [rsp+78h+var_18], rbp
 * 00000001C0043761: mov     edx, ebx
 * 00000001C0043763: mov     [rsp+78h+var_20], rax
 * 00000001C0043768: mov     rcx, rsi
 * 00000001C004376B: mov     [rsp+78h+var_28], 8
 * 00000001C0043774: lea     rax, [rsp+78h+arg_38]
 * 00000001C004377C: mov     [rsp+78h+var_30], rax
 * 00000001C0043781: lea     rax, [rsp+78h+arg_30]
 * 00000001C0043789: mov     [rsp+78h+var_38], rbp
 * 00000001C004378E: mov     [rsp+78h+var_40], rax
 * 00000001C0043793: lea     rax, [rsp+78h+arg_28]
 * 00000001C004379B: mov     [rsp+78h+var_48], rbp
 * 00000001C00437A0: mov     [rsp+78h+var_50], rax
 * 00000001C00437A5: mov     [rsp+78h+var_58], di
 * 00000001C00437AA: call    cs:__imp_WppAutoLogTrace
 * 00000001C00437B1: nop     dword ptr [rax+rax+00h]
 * 00000001C00437B6: lea     r11, [rsp+78h+var_8]
 * 00000001C00437BB: mov     rbx, [r11+10h]
 * 00000001C00437BF: mov     rbp, [r11+18h]
 * 00000001C00437C3: mov     rsi, [r11+20h]
 * 00000001C00437C7: mov     rsp, r11
 * 00000001C00437CA: pop     rdi
 * 00000001C00437CB: retn
 */
