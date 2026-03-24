/*
 * XREFs of WPP_RECORDER_SF_DDDDDDD @ 0x1C0047474
 * Callers:
 *     Bulk_Stage_EstimateRequiredSegments @ 0x1C001278C (Bulk_Stage_EstimateRequiredSegments.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0020270 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_DDDDDDD @ 0x1C0047474
 * Reason: Hex-Rays returned no pseudocode for 0x1C0047474
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0047474: mov     r11, rsp
 * 00000001C0047477: mov     [r11+8], rbx
 * 00000001C004747B: mov     [r11+10h], rsi
 * 00000001C004747F: mov     [r11+18h], rdi
 * 00000001C0047483: push    rbp
 * 00000001C0047484: lea     rbp, [r11-1Fh]
 * 00000001C0047488: sub     rsp, 0A0h
 * 00000001C004748F: mov     rbx, rcx
 * 00000001C0047492: mov     esi, 20h ; ' '
 * 00000001C0047497: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C004749E: lea     edi, [rsi-1Ch]
 * 00000001C00474A1: test    dword ptr [rcx+2Ch], 2000h
 * 00000001C00474A8: jz      short loc_1C0047528
 * 00000001C00474AA: cmp     byte ptr [rcx+29h], 5
 * 00000001C00474AE: jb      short loc_1C0047528
 * 00000001C00474B0: and     qword ptr [r11-18h], 0
 * 00000001C00474B5: lea     rdx, [rbp+17h+arg_58]
 * 00000001C00474B9: mov     rax, cs:pfnWppTraceMessage
 * 00000001C00474C0: lea     r8, WPP_92c598da33ef340e00f5370896d293ba_Traceguids
 * 00000001C00474C7: mov     rcx, [rcx+18h]
 * 00000001C00474CB: mov     r9d, esi
 * 00000001C00474CE: mov     [r11-20h], rdi
 * 00000001C00474D2: mov     [r11-28h], rdx
 * 00000001C00474D6: lea     rdx, [rbp+17h+arg_50]
 * 00000001C00474DA: mov     [r11-30h], rdi
 * 00000001C00474DE: mov     [r11-38h], rdx
 * 00000001C00474E2: lea     rdx, [rbp+17h+arg_48]
 * 00000001C00474E6: mov     [r11-40h], rdi
 * 00000001C00474EA: mov     [r11-48h], rdx
 * 00000001C00474EE: lea     rdx, [rbp+17h+arg_40]
 * 00000001C00474F2: mov     [r11-50h], rdi
 * 00000001C00474F6: mov     [r11-58h], rdx
 * 00000001C00474FA: lea     rdx, [rbp+17h+arg_38]
 * 00000001C00474FE: mov     [r11-60h], rdi
 * 00000001C0047502: mov     [r11-68h], rdx
 * 00000001C0047506: lea     rdx, [rbp+17h+arg_30]
 * 00000001C004750A: mov     [r11-70h], rdi
 * 00000001C004750E: mov     [r11-78h], rdx
 * 00000001C0047512: lea     rdx, [rbp+17h+arg_28]
 * 00000001C0047516: mov     [r11-80h], rdi
 * 00000001C004751A: mov     [rsp+0A0h+var_80], rdx
 * 00000001C004751F: lea     edx, [rsi+0Bh]
 * 00000001C0047522: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0047528: and     qword ptr [rsp+0A0h+var_8], 0
 * 00000001C0047531: lea     rax, [rbp+17h+arg_58]
 * 00000001C0047535: mov     [rsp+0A0h+var_10], rdi
 * 00000001C004753D: lea     r9, WPP_92c598da33ef340e00f5370896d293ba_Traceguids
 * 00000001C0047544: mov     [rsp+0A0h+var_18], rax
 * 00000001C004754C: mov     edx, 5
 * 00000001C0047551: mov     [rsp+0A0h+var_20], rdi
 * 00000001C0047559: lea     rax, [rbp+17h+arg_50]
 * 00000001C004755D: mov     [rsp+0A0h+var_28], rax
 * 00000001C0047562: mov     rcx, rbx
 * 00000001C0047565: mov     [rsp+0A0h+var_30], rdi
 * 00000001C004756A: lea     rax, [rbp+17h+arg_48]
 * 00000001C004756E: mov     [rsp+0A0h+var_38], rax
 * 00000001C0047573: lea     r8d, [rdx+9]
 * 00000001C0047577: mov     [rsp+0A0h+var_40], rdi
 * 00000001C004757C: lea     rax, [rbp+17h+arg_40]
 * 00000001C0047580: mov     [rsp+0A0h+var_48], rax
 * 00000001C0047585: lea     rax, [rbp+17h+arg_38]
 * 00000001C0047589: mov     [rsp+0A0h+var_50], rdi
 * 00000001C004758E: mov     [rsp+0A0h+var_58], rax
 * 00000001C0047593: lea     rax, [rbp+17h+arg_30]
 * 00000001C0047597: mov     [rsp+0A0h+var_60], rdi
 * 00000001C004759C: mov     [rsp+0A0h+var_68], rax
 * 00000001C00475A1: lea     rax, [rbp+17h+arg_28]
 * 00000001C00475A5: mov     [rsp+0A0h+var_70], rdi
 * 00000001C00475AA: mov     [rsp+0A0h+var_78], rax
 * 00000001C00475AF: mov     word ptr [rsp+0A0h+var_80], si
 * 00000001C00475B4: call    cs:__imp_WppAutoLogTrace
 * 00000001C00475BB: nop     dword ptr [rax+rax+00h]
 * 00000001C00475C0: lea     r11, [rsp+0A0h+var_s0]
 * 00000001C00475C8: mov     rbx, [r11+10h]
 * 00000001C00475CC: mov     rsi, [r11+18h]
 * 00000001C00475D0: mov     rdi, [r11+20h]
 * 00000001C00475D4: mov     rsp, r11
 * 00000001C00475D7: pop     rbp
 * 00000001C00475D8: retn
 */
