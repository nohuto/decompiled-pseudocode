/*
 * XREFs of WPP_RECORDER_SF_DDL @ 0x1C0046138
 * Callers:
 *     Isoch_ProcessSegment @ 0x1C0044614 (Isoch_ProcessSegment.c)
 *     Isoch_ProcessTransferEventWithED0 @ 0x1C0044BF4 (Isoch_ProcessTransferEventWithED0.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0020270 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_DDL @ 0x1C0046138
 * Reason: Hex-Rays returned no pseudocode for 0x1C0046138
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0046138: mov     r11, rsp
 * 00000001C004613B: mov     [r11+8], rbx
 * 00000001C004613F: mov     [r11+10h], rbp
 * 00000001C0046143: mov     [r11+18h], rsi
 * 00000001C0046147: push    rdi
 * 00000001C0046148: sub     rsp, 60h
 * 00000001C004614C: mov     rsi, rcx
 * 00000001C004614F: movzx   edi, r9w
 * 00000001C0046153: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C004615A: mov     ebp, 4
 * 00000001C004615F: movzx   ebx, dl
 * 00000001C0046162: test    dword ptr [rcx+2Ch], 2000h
 * 00000001C0046169: jz      short loc_1C00461B7
 * 00000001C004616B: cmp     [rcx+29h], bl
 * 00000001C004616E: jb      short loc_1C00461B7
 * 00000001C0046170: and     qword ptr [r11-18h], 0
 * 00000001C0046175: lea     rdx, [r11+40h]
 * 00000001C0046179: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0046180: lea     r8, WPP_393df0ddb70a3b662b6ac53bc5b55086_Traceguids
 * 00000001C0046187: mov     rcx, [rcx+18h]
 * 00000001C004618B: mov     r9d, edi
 * 00000001C004618E: mov     [r11-20h], rbp
 * 00000001C0046192: mov     [r11-28h], rdx
 * 00000001C0046196: lea     rdx, [r11+38h]
 * 00000001C004619A: mov     [r11-30h], rbp
 * 00000001C004619E: mov     [r11-38h], rdx
 * 00000001C00461A2: lea     rdx, [r11+30h]
 * 00000001C00461A6: mov     [r11-40h], rbp
 * 00000001C00461AA: mov     [r11-48h], rdx
 * 00000001C00461AE: lea     edx, [rbp+27h]
 * 00000001C00461B1: call    cs:__guard_dispatch_icall_fptr
 * 00000001C00461B7: and     [rsp+68h+var_10], 0
 * 00000001C00461BD: lea     rax, [rsp+68h+arg_38]
 * 00000001C00461C5: mov     [rsp+68h+var_18], rbp
 * 00000001C00461CA: lea     r9, WPP_393df0ddb70a3b662b6ac53bc5b55086_Traceguids
 * 00000001C00461D1: mov     [rsp+68h+var_20], rax
 * 00000001C00461D6: mov     r8d, 0Eh
 * 00000001C00461DC: mov     [rsp+68h+var_28], rbp
 * 00000001C00461E1: lea     rax, [rsp+68h+arg_30]
 * 00000001C00461E9: mov     [rsp+68h+var_30], rax
 * 00000001C00461EE: mov     edx, ebx
 * 00000001C00461F0: lea     rax, [rsp+68h+arg_28]
 * 00000001C00461F8: mov     [rsp+68h+var_38], rbp
 * 00000001C00461FD: mov     [rsp+68h+var_40], rax
 * 00000001C0046202: mov     rcx, rsi
 * 00000001C0046205: mov     [rsp+68h+var_48], di
 * 00000001C004620A: call    cs:__imp_WppAutoLogTrace
 * 00000001C0046211: nop     dword ptr [rax+rax+00h]
 * 00000001C0046216: lea     r11, [rsp+68h+var_8]
 * 00000001C004621B: mov     rbx, [r11+10h]
 * 00000001C004621F: mov     rbp, [r11+18h]
 * 00000001C0046223: mov     rsi, [r11+20h]
 * 00000001C0046227: mov     rsp, r11
 * 00000001C004622A: pop     rdi
 * 00000001C004622B: retn
 */
