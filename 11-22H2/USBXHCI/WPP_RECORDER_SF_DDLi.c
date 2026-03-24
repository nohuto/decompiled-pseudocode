/*
 * XREFs of WPP_RECORDER_SF_DDLi @ 0x1C0046394
 * Callers:
 *     Isoch_ProcessTransferEventWithED0 @ 0x1C0044BF4 (Isoch_ProcessTransferEventWithED0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0020270 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_DDLi @ 0x1C0046394
 * Reason: Hex-Rays returned no pseudocode for 0x1C0046394
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0046394: mov     r11, rsp
 * 00000001C0046397: mov     [r11+8], rbx
 * 00000001C004639B: mov     [r11+10h], rbp
 * 00000001C004639F: push    rdi
 * 00000001C00463A0: sub     rsp, 70h
 * 00000001C00463A4: mov     rbx, rcx
 * 00000001C00463A7: mov     edi, 4
 * 00000001C00463AC: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C00463B3: lea     ebp, [rdi+26h]
 * 00000001C00463B6: test    dword ptr [rcx+2Ch], 2000h
 * 00000001C00463BD: jz      short loc_1C004641C
 * 00000001C00463BF: cmp     [rcx+29h], dil
 * 00000001C00463C3: jb      short loc_1C004641C
 * 00000001C00463C5: and     qword ptr [r11-18h], 0
 * 00000001C00463CA: lea     rdx, [r11+48h]
 * 00000001C00463CE: mov     rax, cs:pfnWppTraceMessage
 * 00000001C00463D5: lea     r8, WPP_393df0ddb70a3b662b6ac53bc5b55086_Traceguids
 * 00000001C00463DC: mov     rcx, [rcx+18h]
 * 00000001C00463E0: mov     r9d, ebp
 * 00000001C00463E3: mov     qword ptr [r11-20h], 8
 * 00000001C00463EB: mov     [r11-28h], rdx
 * 00000001C00463EF: lea     rdx, [r11+40h]
 * 00000001C00463F3: mov     [r11-30h], rdi
 * 00000001C00463F7: mov     [r11-38h], rdx
 * 00000001C00463FB: lea     rdx, [r11+38h]
 * 00000001C00463FF: mov     [r11-40h], rdi
 * 00000001C0046403: mov     [r11-48h], rdx
 * 00000001C0046407: lea     rdx, [r11+30h]
 * 00000001C004640B: mov     [r11-50h], rdi
 * 00000001C004640F: mov     [r11-58h], rdx
 * 00000001C0046413: lea     edx, [rdi+27h]
 * 00000001C0046416: call    cs:__guard_dispatch_icall_fptr
 * 00000001C004641C: and     [rsp+78h+var_10], 0
 * 00000001C0046422: lea     rax, [rsp+78h+arg_40]
 * 00000001C004642A: mov     [rsp+78h+var_18], 8
 * 00000001C0046433: lea     r9, WPP_393df0ddb70a3b662b6ac53bc5b55086_Traceguids
 * 00000001C004643A: mov     [rsp+78h+var_20], rax
 * 00000001C004643F: mov     r8d, 0Eh
 * 00000001C0046445: mov     [rsp+78h+var_28], rdi
 * 00000001C004644A: lea     rax, [rsp+78h+arg_38]
 * 00000001C0046452: mov     [rsp+78h+var_30], rax
 * 00000001C0046457: mov     edx, edi
 * 00000001C0046459: mov     [rsp+78h+var_38], rdi
 * 00000001C004645E: lea     rax, [rsp+78h+arg_30]
 * 00000001C0046466: mov     [rsp+78h+var_40], rax
 * 00000001C004646B: mov     rcx, rbx
 * 00000001C004646E: lea     rax, [rsp+78h+arg_28]
 * 00000001C0046476: mov     [rsp+78h+var_48], rdi
 * 00000001C004647B: mov     [rsp+78h+var_50], rax
 * 00000001C0046480: mov     [rsp+78h+var_58], bp
 * 00000001C0046485: call    cs:__imp_WppAutoLogTrace
 * 00000001C004648C: nop     dword ptr [rax+rax+00h]
 * 00000001C0046491: lea     r11, [rsp+78h+var_8]
 * 00000001C0046496: mov     rbx, [r11+10h]
 * 00000001C004649A: mov     rbp, [r11+18h]
 * 00000001C004649E: mov     rsp, r11
 * 00000001C00464A1: pop     rdi
 * 00000001C00464A2: retn
 */
