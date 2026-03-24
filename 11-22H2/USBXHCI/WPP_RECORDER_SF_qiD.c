/*
 * XREFs of WPP_RECORDER_SF_qiD @ 0x1C0042084
 * Callers:
 *     TR_AddTRBRangeToSecureTransferRing @ 0x1C00070A0 (TR_AddTRBRangeToSecureTransferRing.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0020270 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qiD @ 0x1C0042084
 * Reason: Hex-Rays returned no pseudocode for 0x1C0042084
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0042084: mov     r11, rsp
 * 00000001C0042087: mov     [r11+8], rbx
 * 00000001C004208B: mov     [r11+10h], rsi
 * 00000001C004208F: push    rdi
 * 00000001C0042090: sub     rsp, 60h
 * 00000001C0042094: mov     rdi, rcx
 * 00000001C0042097: movzx   ebx, r9w
 * 00000001C004209B: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C00420A2: mov     esi, 8
 * 00000001C00420A7: test    dword ptr [rcx+2Ch], 2000h
 * 00000001C00420AE: jz      short loc_1C0042101
 * 00000001C00420B0: cmp     byte ptr [rcx+29h], 5
 * 00000001C00420B4: jb      short loc_1C0042101
 * 00000001C00420B6: and     qword ptr [r11-18h], 0
 * 00000001C00420BB: lea     rdx, [r11+40h]
 * 00000001C00420BF: mov     rax, cs:pfnWppTraceMessage
 * 00000001C00420C6: lea     r8, WPP_9ff532af533633cb75752ac9b9d63831_Traceguids
 * 00000001C00420CD: mov     rcx, [rcx+18h]
 * 00000001C00420D1: mov     r9d, ebx
 * 00000001C00420D4: mov     qword ptr [r11-20h], 4
 * 00000001C00420DC: mov     [r11-28h], rdx
 * 00000001C00420E0: lea     rdx, [r11+38h]
 * 00000001C00420E4: mov     [r11-30h], rsi
 * 00000001C00420E8: mov     [r11-38h], rdx
 * 00000001C00420EC: lea     rdx, [r11+30h]
 * 00000001C00420F0: mov     [r11-40h], rsi
 * 00000001C00420F4: mov     [r11-48h], rdx
 * 00000001C00420F8: lea     edx, [rsi+23h]
 * 00000001C00420FB: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0042101: and     [rsp+68h+var_10], 0
 * 00000001C0042107: lea     rax, [rsp+68h+arg_38]
 * 00000001C004210F: mov     [rsp+68h+var_18], 4
 * 00000001C0042118: lea     r9, WPP_9ff532af533633cb75752ac9b9d63831_Traceguids
 * 00000001C004211F: mov     [rsp+68h+var_20], rax
 * 00000001C0042124: mov     edx, 5
 * 00000001C0042129: mov     [rsp+68h+var_28], rsi
 * 00000001C004212E: lea     rax, [rsp+68h+arg_30]
 * 00000001C0042136: mov     [rsp+68h+var_30], rax
 * 00000001C004213B: mov     rcx, rdi
 * 00000001C004213E: lea     rax, [rsp+68h+arg_28]
 * 00000001C0042146: mov     [rsp+68h+var_38], rsi
 * 00000001C004214B: mov     [rsp+68h+var_40], rax
 * 00000001C0042150: lea     r8d, [rdx+9]
 * 00000001C0042154: mov     [rsp+68h+var_48], bx
 * 00000001C0042159: call    cs:__imp_WppAutoLogTrace
 * 00000001C0042160: nop     dword ptr [rax+rax+00h]
 * 00000001C0042165: mov     rbx, [rsp+68h+arg_0]
 * 00000001C004216A: mov     rsi, [rsp+68h+arg_8]
 * 00000001C004216F: add     rsp, 60h
 * 00000001C0042173: pop     rdi
 * 00000001C0042174: retn
 */
