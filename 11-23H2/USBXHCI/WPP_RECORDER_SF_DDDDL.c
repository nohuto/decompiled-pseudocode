/*
 * XREFs of WPP_RECORDER_SF_DDDDL @ 0x1C0046034
 * Callers:
 *     Isoch_ProcessSegment @ 0x1C0044754 (Isoch_ProcessSegment.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00203A0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_DDDDL @ 0x1C0046034
 * Reason: Hex-Rays returned no pseudocode for 0x1C0046034
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0046034: mov     r11, rsp
 * 00000001C0046037: mov     [r11+8], rbx
 * 00000001C004603B: mov     [r11+10h], rsi
 * 00000001C004603F: push    rdi
 * 00000001C0046040: sub     rsp, 80h
 * 00000001C0046047: mov     rbx, rcx
 * 00000001C004604A: mov     esi, 1Dh
 * 00000001C004604F: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0046056: lea     edi, [rsi-19h]
 * 00000001C0046059: test    dword ptr [rcx+2Ch], 2000h
 * 00000001C0046060: jz      short loc_1C00460C7
 * 00000001C0046062: cmp     byte ptr [rcx+29h], 2
 * 00000001C0046066: jb      short loc_1C00460C7
 * 00000001C0046068: and     qword ptr [r11-18h], 0
 * 00000001C004606D: lea     rdx, [r11+50h]
 * 00000001C0046071: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0046078: lea     r8, WPP_393df0ddb70a3b662b6ac53bc5b55086_Traceguids
 * 00000001C004607F: mov     rcx, [rcx+18h]
 * 00000001C0046083: mov     r9d, esi
 * 00000001C0046086: mov     [r11-20h], rdi
 * 00000001C004608A: mov     [r11-28h], rdx
 * 00000001C004608E: lea     rdx, [r11+48h]
 * 00000001C0046092: mov     [r11-30h], rdi
 * 00000001C0046096: mov     [r11-38h], rdx
 * 00000001C004609A: lea     rdx, [r11+40h]
 * 00000001C004609E: mov     [r11-40h], rdi
 * 00000001C00460A2: mov     [r11-48h], rdx
 * 00000001C00460A6: lea     rdx, [r11+38h]
 * 00000001C00460AA: mov     [r11-50h], rdi
 * 00000001C00460AE: mov     [r11-58h], rdx
 * 00000001C00460B2: lea     rdx, [r11+30h]
 * 00000001C00460B6: mov     [r11-60h], rdi
 * 00000001C00460BA: mov     [r11-68h], rdx
 * 00000001C00460BE: lea     edx, [rsi+0Eh]
 * 00000001C00460C1: call    cs:__guard_dispatch_icall_fptr
 * 00000001C00460C7: and     [rsp+88h+var_10], 0
 * 00000001C00460CD: lea     rax, [rsp+88h+arg_48]
 * 00000001C00460D5: mov     [rsp+88h+var_18], rdi
 * 00000001C00460DA: lea     r9, WPP_393df0ddb70a3b662b6ac53bc5b55086_Traceguids
 * 00000001C00460E1: mov     [rsp+88h+var_20], rax
 * 00000001C00460E6: mov     edx, 2
 * 00000001C00460EB: mov     [rsp+88h+var_28], rdi
 * 00000001C00460F0: lea     rax, [rsp+88h+arg_40]
 * 00000001C00460F8: mov     [rsp+88h+var_30], rax
 * 00000001C00460FD: mov     rcx, rbx
 * 00000001C0046100: mov     [rsp+88h+var_38], rdi
 * 00000001C0046105: lea     rax, [rsp+88h+arg_38]
 * 00000001C004610D: mov     [rsp+88h+var_40], rax
 * 00000001C0046112: lea     r8d, [rdx+0Ch]
 * 00000001C0046116: mov     [rsp+88h+var_48], rdi
 * 00000001C004611B: lea     rax, [rsp+88h+arg_30]
 * 00000001C0046123: mov     [rsp+88h+var_50], rax
 * 00000001C0046128: lea     rax, [rsp+88h+arg_28]
 * 00000001C0046130: mov     [rsp+88h+var_58], rdi
 * 00000001C0046135: mov     [rsp+88h+var_60], rax
 * 00000001C004613A: mov     [rsp+88h+var_68], si
 * 00000001C004613F: call    cs:__imp_WppAutoLogTrace
 * 00000001C0046146: nop     dword ptr [rax+rax+00h]
 * 00000001C004614B: lea     r11, [rsp+88h+var_8]
 * 00000001C0046153: mov     rbx, [r11+10h]
 * 00000001C0046157: mov     rsi, [r11+18h]
 * 00000001C004615B: mov     rsp, r11
 * 00000001C004615E: pop     rdi
 * 00000001C004615F: retn
 */
