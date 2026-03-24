/*
 * XREFs of WPP_RECORDER_SF_qqD @ 0x1C0038740
 * Callers:
 *     AcpiNotifyPlExtDeleteDeviceAsync @ 0x1C0037810 (AcpiNotifyPlExtDeleteDeviceAsync.c)
 *     AcpiSetupNativeMethodContext @ 0x1C0037EC0 (AcpiSetupNativeMethodContext.c)
 *     AcpiTranslatePepDeviceControlResourcesInternal @ 0x1C008B630 (AcpiTranslatePepDeviceControlResourcesInternal.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0001DE0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qqD @ 0x1C0038740
 * Reason: Hex-Rays returned no pseudocode for 0x1C0038740
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0038740: mov     rax, rsp
 * 00000001C0038743: mov     [rax+8], rbx
 * 00000001C0038747: mov     [rax+10h], rbp
 * 00000001C003874B: mov     [rax+18h], rsi
 * 00000001C003874F: mov     [rax+20h], rdi
 * 00000001C0038753: push    r14
 * 00000001C0038755: sub     rsp, 60h
 * 00000001C0038759: mov     esi, r8d
 * 00000001C003875C: mov     rbp, rcx
 * 00000001C003875F: mov     ebx, r8d
 * 00000001C0038762: mov     r14d, 8
 * 00000001C0038768: shr     rbx, 10h
 * 00000001C003876C: movzx   edi, r9w
 * 00000001C0038770: lea     r11d, [rsi-1]
 * 00000001C0038774: mov     edx, r11d
 * 00000001C0038777: and     r11d, 1Fh
 * 00000001C003877B: shr     rdx, 5
 * 00000001C003877F: lea     rax, [rbx+rbx*4]
 * 00000001C0038783: and     edx, 7FFh
 * 00000001C0038789: lea     r10, [rdx+rax*4]
 * 00000001C003878D: mov     edx, r11d
 * 00000001C0038790: mov     r11, cs:WPP_GLOBAL_Control
 * 00000001C0038797: mov     eax, [r11+r10*4+2Ch]
 * 00000001C003879C: bt      eax, edx
 * 00000001C003879F: jnb     short loc_1C0038810
 * 00000001C00387A1: lea     rcx, [rbx+rbx*4]
 * 00000001C00387A5: add     rcx, rcx
 * 00000001C00387A8: cmp     byte ptr [r11+rcx*8+29h], 2
 * 00000001C00387AE: jb      short loc_1C0038810
 * 00000001C00387B0: and     [rsp+68h+var_18], 0
 * 00000001C00387B6: lea     rdx, [rsp+68h+arg_38]
 * 00000001C00387BE: mov     rax, cs:pfnWppTraceMessage
 * 00000001C00387C5: lea     r8, WPP_6b96f8ebb13c3b7665ec42abfcbc7cd5_Traceguids
 * 00000001C00387CC: mov     rcx, [r11+rcx*8+18h]
 * 00000001C00387D1: mov     r9d, edi
 * 00000001C00387D4: mov     [rsp+68h+var_20], 4
 * 00000001C00387DD: mov     [rsp+68h+var_28], rdx
 * 00000001C00387E2: lea     rdx, [rsp+68h+arg_30]
 * 00000001C00387EA: mov     [rsp+68h+var_30], r14
 * 00000001C00387EF: mov     [rsp+68h+var_38], rdx
 * 00000001C00387F4: lea     rdx, [rsp+68h+arg_28]
 * 00000001C00387FC: mov     [rsp+68h+var_40], r14
 * 00000001C0038801: mov     [rsp+68h+var_48], rdx
 * 00000001C0038806: lea     edx, [r14+23h]
 * 00000001C003880A: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0038810: and     [rsp+68h+var_10], 0
 * 00000001C0038816: lea     rax, [rsp+68h+arg_38]
 * 00000001C003881E: mov     [rsp+68h+var_18], 4
 * 00000001C0038827: lea     r9, WPP_6b96f8ebb13c3b7665ec42abfcbc7cd5_Traceguids
 * 00000001C003882E: mov     [rsp+68h+var_20], rax
 * 00000001C0038833: mov     r8d, esi
 * 00000001C0038836: mov     [rsp+68h+var_28], r14
 * 00000001C003883B: lea     rax, [rsp+68h+arg_30]
 * 00000001C0038843: mov     [rsp+68h+var_30], rax
 * 00000001C0038848: mov     edx, 2
 * 00000001C003884D: lea     rax, [rsp+68h+arg_28]
 * 00000001C0038855: mov     [rsp+68h+var_38], r14
 * 00000001C003885A: mov     [rsp+68h+var_40], rax
 * 00000001C003885F: mov     rcx, rbp
 * 00000001C0038862: mov     word ptr [rsp+68h+var_48], di
 * 00000001C0038867: call    cs:__imp_WppAutoLogTrace
 * 00000001C003886E: nop     dword ptr [rax+rax+00h]
 * 00000001C0038873: lea     r11, [rsp+68h+var_8]
 * 00000001C0038878: mov     rbx, [r11+10h]
 * 00000001C003887C: mov     rbp, [r11+18h]
 * 00000001C0038880: mov     rsi, [r11+20h]
 * 00000001C0038884: mov     rdi, [r11+28h]
 * 00000001C0038888: mov     rsp, r11
 * 00000001C003888B: pop     r14
 * 00000001C003888D: retn
 */
