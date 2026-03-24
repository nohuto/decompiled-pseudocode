/*
 * XREFs of WPP_RECORDER_SF_DDLi @ 0x1C00464D4
 * Callers:
 *     Isoch_ProcessTransferEventWithED0 @ 0x1C0044D34 (Isoch_ProcessTransferEventWithED0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00203A0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_DDLi @ 0x1C00464D4
 * Reason: Hex-Rays returned no pseudocode for 0x1C00464D4
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00464D4: mov     r11, rsp
 * 00000001C00464D7: mov     [r11+8], rbx
 * 00000001C00464DB: mov     [r11+10h], rbp
 * 00000001C00464DF: push    rdi
 * 00000001C00464E0: sub     rsp, 70h
 * 00000001C00464E4: mov     rbx, rcx
 * 00000001C00464E7: mov     edi, 4
 * 00000001C00464EC: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C00464F3: lea     ebp, [rdi+26h]
 * 00000001C00464F6: test    dword ptr [rcx+2Ch], 2000h
 * 00000001C00464FD: jz      short loc_1C004655C
 * 00000001C00464FF: cmp     [rcx+29h], dil
 * 00000001C0046503: jb      short loc_1C004655C
 * 00000001C0046505: and     qword ptr [r11-18h], 0
 * 00000001C004650A: lea     rdx, [r11+48h]
 * 00000001C004650E: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0046515: lea     r8, WPP_393df0ddb70a3b662b6ac53bc5b55086_Traceguids
 * 00000001C004651C: mov     rcx, [rcx+18h]
 * 00000001C0046520: mov     r9d, ebp
 * 00000001C0046523: mov     qword ptr [r11-20h], 8
 * 00000001C004652B: mov     [r11-28h], rdx
 * 00000001C004652F: lea     rdx, [r11+40h]
 * 00000001C0046533: mov     [r11-30h], rdi
 * 00000001C0046537: mov     [r11-38h], rdx
 * 00000001C004653B: lea     rdx, [r11+38h]
 * 00000001C004653F: mov     [r11-40h], rdi
 * 00000001C0046543: mov     [r11-48h], rdx
 * 00000001C0046547: lea     rdx, [r11+30h]
 * 00000001C004654B: mov     [r11-50h], rdi
 * 00000001C004654F: mov     [r11-58h], rdx
 * 00000001C0046553: lea     edx, [rdi+27h]
 * 00000001C0046556: call    cs:__guard_dispatch_icall_fptr
 * 00000001C004655C: and     [rsp+78h+var_10], 0
 * 00000001C0046562: lea     rax, [rsp+78h+arg_40]
 * 00000001C004656A: mov     [rsp+78h+var_18], 8
 * 00000001C0046573: lea     r9, WPP_393df0ddb70a3b662b6ac53bc5b55086_Traceguids
 * 00000001C004657A: mov     [rsp+78h+var_20], rax
 * 00000001C004657F: mov     r8d, 0Eh
 * 00000001C0046585: mov     [rsp+78h+var_28], rdi
 * 00000001C004658A: lea     rax, [rsp+78h+arg_38]
 * 00000001C0046592: mov     [rsp+78h+var_30], rax
 * 00000001C0046597: mov     edx, edi
 * 00000001C0046599: mov     [rsp+78h+var_38], rdi
 * 00000001C004659E: lea     rax, [rsp+78h+arg_30]
 * 00000001C00465A6: mov     [rsp+78h+var_40], rax
 * 00000001C00465AB: mov     rcx, rbx
 * 00000001C00465AE: lea     rax, [rsp+78h+arg_28]
 * 00000001C00465B6: mov     [rsp+78h+var_48], rdi
 * 00000001C00465BB: mov     [rsp+78h+var_50], rax
 * 00000001C00465C0: mov     [rsp+78h+var_58], bp
 * 00000001C00465C5: call    cs:__imp_WppAutoLogTrace
 * 00000001C00465CC: nop     dword ptr [rax+rax+00h]
 * 00000001C00465D1: lea     r11, [rsp+78h+var_8]
 * 00000001C00465D6: mov     rbx, [r11+10h]
 * 00000001C00465DA: mov     rbp, [r11+18h]
 * 00000001C00465DE: mov     rsp, r11
 * 00000001C00465E1: pop     rdi
 * 00000001C00465E2: retn
 */
