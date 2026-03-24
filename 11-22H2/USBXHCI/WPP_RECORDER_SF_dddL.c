/*
 * XREFs of WPP_RECORDER_SF_DDDL @ 0x1C0046028
 * Callers:
 *     Isoch_ProcessTransferRingEmptyEvent @ 0x1C0044F3C (Isoch_ProcessTransferRingEmptyEvent.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0020270 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_DDDL @ 0x1C0046028
 * Reason: Hex-Rays returned no pseudocode for 0x1C0046028
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0046028: mov     r11, rsp
 * 00000001C004602B: mov     [r11+8], rbx
 * 00000001C004602F: mov     [r11+10h], rsi
 * 00000001C0046033: push    rdi
 * 00000001C0046034: sub     rsp, 70h
 * 00000001C0046038: mov     rbx, rcx
 * 00000001C004603B: mov     edi, 4
 * 00000001C0046040: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0046047: lea     esi, [rdi+22h]
 * 00000001C004604A: test    dword ptr [rcx+2Ch], 2000h
 * 00000001C0046051: jz      short loc_1C00460AC
 * 00000001C0046053: cmp     [rcx+29h], dil
 * 00000001C0046057: jb      short loc_1C00460AC
 * 00000001C0046059: and     qword ptr [r11-18h], 0
 * 00000001C004605E: lea     rdx, [r11+48h]
 * 00000001C0046062: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0046069: lea     r8, WPP_393df0ddb70a3b662b6ac53bc5b55086_Traceguids
 * 00000001C0046070: mov     rcx, [rcx+18h]
 * 00000001C0046074: mov     r9d, esi
 * 00000001C0046077: mov     [r11-20h], rdi
 * 00000001C004607B: mov     [r11-28h], rdx
 * 00000001C004607F: lea     rdx, [r11+40h]
 * 00000001C0046083: mov     [r11-30h], rdi
 * 00000001C0046087: mov     [r11-38h], rdx
 * 00000001C004608B: lea     rdx, [r11+38h]
 * 00000001C004608F: mov     [r11-40h], rdi
 * 00000001C0046093: mov     [r11-48h], rdx
 * 00000001C0046097: lea     rdx, [r11+30h]
 * 00000001C004609B: mov     [r11-50h], rdi
 * 00000001C004609F: mov     [r11-58h], rdx
 * 00000001C00460A3: lea     edx, [rdi+27h]
 * 00000001C00460A6: call    cs:__guard_dispatch_icall_fptr
 * 00000001C00460AC: and     [rsp+78h+var_10], 0
 * 00000001C00460B2: lea     rax, [rsp+78h+arg_40]
 * 00000001C00460BA: mov     [rsp+78h+var_18], rdi
 * 00000001C00460BF: lea     r9, WPP_393df0ddb70a3b662b6ac53bc5b55086_Traceguids
 * 00000001C00460C6: mov     [rsp+78h+var_20], rax
 * 00000001C00460CB: mov     r8d, 0Eh
 * 00000001C00460D1: mov     [rsp+78h+var_28], rdi
 * 00000001C00460D6: lea     rax, [rsp+78h+arg_38]
 * 00000001C00460DE: mov     [rsp+78h+var_30], rax
 * 00000001C00460E3: mov     edx, edi
 * 00000001C00460E5: mov     [rsp+78h+var_38], rdi
 * 00000001C00460EA: lea     rax, [rsp+78h+arg_30]
 * 00000001C00460F2: mov     [rsp+78h+var_40], rax
 * 00000001C00460F7: mov     rcx, rbx
 * 00000001C00460FA: lea     rax, [rsp+78h+arg_28]
 * 00000001C0046102: mov     [rsp+78h+var_48], rdi
 * 00000001C0046107: mov     [rsp+78h+var_50], rax
 * 00000001C004610C: mov     [rsp+78h+var_58], si
 * 00000001C0046111: call    cs:__imp_WppAutoLogTrace
 * 00000001C0046118: nop     dword ptr [rax+rax+00h]
 * 00000001C004611D: lea     r11, [rsp+78h+var_8]
 * 00000001C0046122: mov     rbx, [r11+10h]
 * 00000001C0046126: mov     rsi, [r11+18h]
 * 00000001C004612A: mov     rsp, r11
 * 00000001C004612D: pop     rdi
 * 00000001C004612E: retn
 */
