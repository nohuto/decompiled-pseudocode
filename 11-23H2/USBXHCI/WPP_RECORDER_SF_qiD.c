/*
 * XREFs of WPP_RECORDER_SF_qiD @ 0x1C00421C4
 * Callers:
 *     TR_AddTRBRangeToSecureTransferRing @ 0x1C0007070 (TR_AddTRBRangeToSecureTransferRing.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00203A0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qiD @ 0x1C00421C4
 * Reason: Hex-Rays returned no pseudocode for 0x1C00421C4
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00421C4: mov     r11, rsp
 * 00000001C00421C7: mov     [r11+8], rbx
 * 00000001C00421CB: mov     [r11+10h], rsi
 * 00000001C00421CF: push    rdi
 * 00000001C00421D0: sub     rsp, 60h
 * 00000001C00421D4: mov     rdi, rcx
 * 00000001C00421D7: movzx   ebx, r9w
 * 00000001C00421DB: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C00421E2: mov     esi, 8
 * 00000001C00421E7: test    dword ptr [rcx+2Ch], 2000h
 * 00000001C00421EE: jz      short loc_1C0042241
 * 00000001C00421F0: cmp     byte ptr [rcx+29h], 5
 * 00000001C00421F4: jb      short loc_1C0042241
 * 00000001C00421F6: and     qword ptr [r11-18h], 0
 * 00000001C00421FB: lea     rdx, [r11+40h]
 * 00000001C00421FF: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0042206: lea     r8, WPP_9ff532af533633cb75752ac9b9d63831_Traceguids
 * 00000001C004220D: mov     rcx, [rcx+18h]
 * 00000001C0042211: mov     r9d, ebx
 * 00000001C0042214: mov     qword ptr [r11-20h], 4
 * 00000001C004221C: mov     [r11-28h], rdx
 * 00000001C0042220: lea     rdx, [r11+38h]
 * 00000001C0042224: mov     [r11-30h], rsi
 * 00000001C0042228: mov     [r11-38h], rdx
 * 00000001C004222C: lea     rdx, [r11+30h]
 * 00000001C0042230: mov     [r11-40h], rsi
 * 00000001C0042234: mov     [r11-48h], rdx
 * 00000001C0042238: lea     edx, [rsi+23h]
 * 00000001C004223B: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0042241: and     [rsp+68h+var_10], 0
 * 00000001C0042247: lea     rax, [rsp+68h+arg_38]
 * 00000001C004224F: mov     [rsp+68h+var_18], 4
 * 00000001C0042258: lea     r9, WPP_9ff532af533633cb75752ac9b9d63831_Traceguids
 * 00000001C004225F: mov     [rsp+68h+var_20], rax
 * 00000001C0042264: mov     edx, 5
 * 00000001C0042269: mov     [rsp+68h+var_28], rsi
 * 00000001C004226E: lea     rax, [rsp+68h+arg_30]
 * 00000001C0042276: mov     [rsp+68h+var_30], rax
 * 00000001C004227B: mov     rcx, rdi
 * 00000001C004227E: lea     rax, [rsp+68h+arg_28]
 * 00000001C0042286: mov     [rsp+68h+var_38], rsi
 * 00000001C004228B: mov     [rsp+68h+var_40], rax
 * 00000001C0042290: lea     r8d, [rdx+9]
 * 00000001C0042294: mov     [rsp+68h+var_48], bx
 * 00000001C0042299: call    cs:__imp_WppAutoLogTrace
 * 00000001C00422A0: nop     dword ptr [rax+rax+00h]
 * 00000001C00422A5: mov     rbx, [rsp+68h+arg_0]
 * 00000001C00422AA: mov     rsi, [rsp+68h+arg_8]
 * 00000001C00422AF: add     rsp, 60h
 * 00000001C00422B3: pop     rdi
 * 00000001C00422B4: retn
 */
