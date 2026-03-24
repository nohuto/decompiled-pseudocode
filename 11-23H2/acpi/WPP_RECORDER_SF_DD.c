/*
 * XREFs of WPP_RECORDER_SF_Dd @ 0x1C0038380
 * Callers:
 *     AcpiValidatePepDeviceControlResources @ 0x1C008B814 (AcpiValidatePepDeviceControlResources.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0001DE0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_Dd @ 0x1C0038380
 * Reason: Hex-Rays returned no pseudocode for 0x1C0038380
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0038380: mov     r11, rsp
 * 00000001C0038383: mov     [r11+8], rbx
 * 00000001C0038387: mov     [r11+10h], rsi
 * 00000001C003838B: push    rdi
 * 00000001C003838C: sub     rsp, 50h
 * 00000001C0038390: mov     rbx, rcx
 * 00000001C0038393: mov     esi, 28h ; '('
 * 00000001C0038398: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C003839F: lea     edi, [rsi-24h]
 * 00000001C00383A2: test    dword ptr [rcx+2Ch], 100000h
 * 00000001C00383A9: jz      short loc_1C00383EC
 * 00000001C00383AB: cmp     byte ptr [rcx+29h], 2
 * 00000001C00383AF: jb      short loc_1C00383EC
 * 00000001C00383B1: and     qword ptr [r11-18h], 0
 * 00000001C00383B6: lea     rdx, [r11+38h]
 * 00000001C00383BA: mov     rax, cs:pfnWppTraceMessage
 * 00000001C00383C1: lea     r8, WPP_6b96f8ebb13c3b7665ec42abfcbc7cd5_Traceguids
 * 00000001C00383C8: mov     rcx, [rcx+18h]
 * 00000001C00383CC: mov     r9d, esi
 * 00000001C00383CF: mov     [r11-20h], rdi
 * 00000001C00383D3: mov     [r11-28h], rdx
 * 00000001C00383D7: lea     rdx, [r11+30h]
 * 00000001C00383DB: mov     [r11-30h], rdi
 * 00000001C00383DF: mov     [r11-38h], rdx
 * 00000001C00383E3: lea     edx, [rsi+3]
 * 00000001C00383E6: call    cs:__guard_dispatch_icall_fptr
 * 00000001C00383EC: and     [rsp+58h+var_10], 0
 * 00000001C00383F2: lea     rax, [rsp+58h+arg_30]
 * 00000001C00383FA: mov     [rsp+58h+var_18], rdi
 * 00000001C00383FF: lea     r9, WPP_6b96f8ebb13c3b7665ec42abfcbc7cd5_Traceguids
 * 00000001C0038406: mov     [rsp+58h+var_20], rax
 * 00000001C003840B: mov     edx, 2
 * 00000001C0038410: lea     rax, [rsp+58h+arg_28]
 * 00000001C0038418: mov     [rsp+58h+var_28], rdi
 * 00000001C003841D: mov     [rsp+58h+var_30], rax
 * 00000001C0038422: mov     rcx, rbx
 * 00000001C0038425: mov     [rsp+58h+var_38], si
 * 00000001C003842A: lea     r8d, [rdx+13h]
 * 00000001C003842E: call    cs:__imp_WppAutoLogTrace
 * 00000001C0038435: nop     dword ptr [rax+rax+00h]
 * 00000001C003843A: mov     rbx, [rsp+58h+arg_0]
 * 00000001C003843F: mov     rsi, [rsp+58h+arg_8]
 * 00000001C0038444: add     rsp, 50h
 * 00000001C0038448: pop     rdi
 * 00000001C0038449: retn
 */
