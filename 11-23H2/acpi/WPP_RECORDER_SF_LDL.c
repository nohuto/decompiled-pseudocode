/*
 * XREFs of WPP_RECORDER_SF_LDL @ 0x1C003381C
 * Callers:
 *     OSNotifyDeviceWakeByGPEEvent @ 0x1C00332A0 (OSNotifyDeviceWakeByGPEEvent.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0001DE0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_LDL @ 0x1C003381C
 * Reason: Hex-Rays returned no pseudocode for 0x1C003381C
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C003381C: mov     r11, rsp
 * 00000001C003381F: mov     [r11+8], rbx
 * 00000001C0033823: mov     [r11+10h], rsi
 * 00000001C0033827: push    rdi
 * 00000001C0033828: sub     rsp, 60h
 * 00000001C003382C: mov     rbx, rcx
 * 00000001C003382F: mov     edi, 4
 * 00000001C0033834: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C003383B: lea     esi, [rdi+1Bh]
 * 00000001C003383E: test    dword ptr [rcx+2Ch], 10000h
 * 00000001C0033845: jz      short loc_1C0033894
 * 00000001C0033847: cmp     [rcx+29h], dil
 * 00000001C003384B: jb      short loc_1C0033894
 * 00000001C003384D: and     qword ptr [r11-18h], 0
 * 00000001C0033852: lea     rdx, [r11+40h]
 * 00000001C0033856: mov     rax, cs:pfnWppTraceMessage
 * 00000001C003385D: lea     r8, WPP_3b815367ceb5375a01194b74e08b1a28_Traceguids
 * 00000001C0033864: mov     rcx, [rcx+18h]
 * 00000001C0033868: mov     r9d, esi
 * 00000001C003386B: mov     [r11-20h], rdi
 * 00000001C003386F: mov     [r11-28h], rdx
 * 00000001C0033873: lea     rdx, [r11+38h]
 * 00000001C0033877: mov     [r11-30h], rdi
 * 00000001C003387B: mov     [r11-38h], rdx
 * 00000001C003387F: lea     rdx, [r11+30h]
 * 00000001C0033883: mov     [r11-40h], rdi
 * 00000001C0033887: mov     [r11-48h], rdx
 * 00000001C003388B: lea     edx, [rdi+27h]
 * 00000001C003388E: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0033894: and     [rsp+68h+var_10], 0
 * 00000001C003389A: lea     rax, [rsp+68h+arg_38]
 * 00000001C00338A2: mov     [rsp+68h+var_18], rdi
 * 00000001C00338A7: lea     r9, WPP_3b815367ceb5375a01194b74e08b1a28_Traceguids
 * 00000001C00338AE: mov     [rsp+68h+var_20], rax
 * 00000001C00338B3: mov     r8d, 11h
 * 00000001C00338B9: mov     [rsp+68h+var_28], rdi
 * 00000001C00338BE: lea     rax, [rsp+68h+arg_30]
 * 00000001C00338C6: mov     [rsp+68h+var_30], rax
 * 00000001C00338CB: mov     edx, edi
 * 00000001C00338CD: lea     rax, [rsp+68h+arg_28]
 * 00000001C00338D5: mov     [rsp+68h+var_38], rdi
 * 00000001C00338DA: mov     [rsp+68h+var_40], rax
 * 00000001C00338DF: mov     rcx, rbx
 * 00000001C00338E2: mov     [rsp+68h+var_48], si
 * 00000001C00338E7: call    cs:__imp_WppAutoLogTrace
 * 00000001C00338EE: nop     dword ptr [rax+rax+00h]
 * 00000001C00338F3: mov     rbx, [rsp+68h+arg_0]
 * 00000001C00338F8: mov     rsi, [rsp+68h+arg_8]
 * 00000001C00338FD: add     rsp, 60h
 * 00000001C0033901: pop     rdi
 * 00000001C0033902: retn
 */
