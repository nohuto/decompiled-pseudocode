/*
 * XREFs of WPP_RECORDER_SF_DDDL @ 0x1C0046168
 * Callers:
 *     Isoch_ProcessTransferRingEmptyEvent @ 0x1C004507C (Isoch_ProcessTransferRingEmptyEvent.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00203A0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_DDDL @ 0x1C0046168
 * Reason: Hex-Rays returned no pseudocode for 0x1C0046168
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0046168: mov     r11, rsp
 * 00000001C004616B: mov     [r11+8], rbx
 * 00000001C004616F: mov     [r11+10h], rsi
 * 00000001C0046173: push    rdi
 * 00000001C0046174: sub     rsp, 70h
 * 00000001C0046178: mov     rbx, rcx
 * 00000001C004617B: mov     edi, 4
 * 00000001C0046180: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0046187: lea     esi, [rdi+22h]
 * 00000001C004618A: test    dword ptr [rcx+2Ch], 2000h
 * 00000001C0046191: jz      short loc_1C00461EC
 * 00000001C0046193: cmp     [rcx+29h], dil
 * 00000001C0046197: jb      short loc_1C00461EC
 * 00000001C0046199: and     qword ptr [r11-18h], 0
 * 00000001C004619E: lea     rdx, [r11+48h]
 * 00000001C00461A2: mov     rax, cs:pfnWppTraceMessage
 * 00000001C00461A9: lea     r8, WPP_393df0ddb70a3b662b6ac53bc5b55086_Traceguids
 * 00000001C00461B0: mov     rcx, [rcx+18h]
 * 00000001C00461B4: mov     r9d, esi
 * 00000001C00461B7: mov     [r11-20h], rdi
 * 00000001C00461BB: mov     [r11-28h], rdx
 * 00000001C00461BF: lea     rdx, [r11+40h]
 * 00000001C00461C3: mov     [r11-30h], rdi
 * 00000001C00461C7: mov     [r11-38h], rdx
 * 00000001C00461CB: lea     rdx, [r11+38h]
 * 00000001C00461CF: mov     [r11-40h], rdi
 * 00000001C00461D3: mov     [r11-48h], rdx
 * 00000001C00461D7: lea     rdx, [r11+30h]
 * 00000001C00461DB: mov     [r11-50h], rdi
 * 00000001C00461DF: mov     [r11-58h], rdx
 * 00000001C00461E3: lea     edx, [rdi+27h]
 * 00000001C00461E6: call    cs:__guard_dispatch_icall_fptr
 * 00000001C00461EC: and     [rsp+78h+var_10], 0
 * 00000001C00461F2: lea     rax, [rsp+78h+arg_40]
 * 00000001C00461FA: mov     [rsp+78h+var_18], rdi
 * 00000001C00461FF: lea     r9, WPP_393df0ddb70a3b662b6ac53bc5b55086_Traceguids
 * 00000001C0046206: mov     [rsp+78h+var_20], rax
 * 00000001C004620B: mov     r8d, 0Eh
 * 00000001C0046211: mov     [rsp+78h+var_28], rdi
 * 00000001C0046216: lea     rax, [rsp+78h+arg_38]
 * 00000001C004621E: mov     [rsp+78h+var_30], rax
 * 00000001C0046223: mov     edx, edi
 * 00000001C0046225: mov     [rsp+78h+var_38], rdi
 * 00000001C004622A: lea     rax, [rsp+78h+arg_30]
 * 00000001C0046232: mov     [rsp+78h+var_40], rax
 * 00000001C0046237: mov     rcx, rbx
 * 00000001C004623A: lea     rax, [rsp+78h+arg_28]
 * 00000001C0046242: mov     [rsp+78h+var_48], rdi
 * 00000001C0046247: mov     [rsp+78h+var_50], rax
 * 00000001C004624C: mov     [rsp+78h+var_58], si
 * 00000001C0046251: call    cs:__imp_WppAutoLogTrace
 * 00000001C0046258: nop     dword ptr [rax+rax+00h]
 * 00000001C004625D: lea     r11, [rsp+78h+var_8]
 * 00000001C0046262: mov     rbx, [r11+10h]
 * 00000001C0046266: mov     rsi, [r11+18h]
 * 00000001C004626A: mov     rsp, r11
 * 00000001C004626D: pop     rdi
 * 00000001C004626E: retn
 */
