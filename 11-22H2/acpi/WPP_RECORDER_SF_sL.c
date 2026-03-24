/*
 * XREFs of WPP_RECORDER_SF_SL @ 0x1C003BFCC
 * Callers:
 *     OSReadAcpiConfigurationData @ 0x1C00AA304 (OSReadAcpiConfigurationData.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0001DE0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_SL @ 0x1C003BFCC
 * Reason: Hex-Rays returned no pseudocode for 0x1C003BFCC
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C003BFCC: mov     rax, rsp
 * 00000001C003BFCF: mov     [rax+8], rbx
 * 00000001C003BFD3: mov     [rax+10h], rbp
 * 00000001C003BFD7: mov     [rax+18h], rsi
 * 00000001C003BFDB: mov     [rax+20h], rdi
 * 00000001C003BFDF: push    r12
 * 00000001C003BFE1: push    r13
 * 00000001C003BFE3: push    r14
 * 00000001C003BFE5: sub     rsp, 50h
 * 00000001C003BFE9: mov     rdx, cs:WPP_GLOBAL_Control
 * 00000001C003BFF0: lea     r12, aNull_0; "NULL"
 * 00000001C003BFF7: mov     rbx, [rsp+68h+arg_28]
 * 00000001C003BFFF: xor     r14d, r14d
 * 00000001C003C002: or      rdi, 0FFFFFFFFFFFFFFFFh
 * 00000001C003C006: mov     rbp, rcx
 * 00000001C003C009: test    dword ptr [rdx+2Ch], 200000h
 * 00000001C003C010: lea     r13d, [r14+11h]
 * 00000001C003C014: lea     esi, [rdi+0Bh]
 * 00000001C003C017: jz      short loc_1C003C094
 * 00000001C003C019: cmp     byte ptr [rdx+29h], 2
 * 00000001C003C01D: jb      short loc_1C003C094
 * 00000001C003C01F: test    rbx, rbx
 * 00000001C003C022: jz      short loc_1C003C03B
 * 00000001C003C024: mov     rax, rdi
 * 00000001C003C027: inc     rax
 * 00000001C003C02A: cmp     [rbx+rax*2], r14w
 * 00000001C003C02F: jnz     short loc_1C003C027
 * 00000001C003C031: lea     rdx, ds:2[rax*2]
 * 00000001C003C039: jmp     short loc_1C003C03E
 * 00000001C003C03B: mov     rdx, rsi
 * 00000001C003C03E: mov     rax, cs:pfnWppTraceMessage
 * 00000001C003C045: lea     r8, [rsp+68h+arg_30]
 * 00000001C003C04D: mov     [rsp+68h+var_28], r14
 * 00000001C003C052: test    rbx, rbx
 * 00000001C003C055: mov     [rsp+68h+var_30], 4
 * 00000001C003C05E: mov     rcx, rbx
 * 00000001C003C061: cmovz   rcx, r12
 * 00000001C003C065: mov     [rsp+68h+var_38], r8
 * 00000001C003C06A: mov     [rsp+68h+var_40], rdx
 * 00000001C003C06F: lea     r8, WPP_0ff02685c5363f18e09d8afa1fc83b4b_Traceguids
 * 00000001C003C076: mov     [rsp+68h+var_48], rcx
 * 00000001C003C07B: mov     r9d, r13d
 * 00000001C003C07E: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C003C085: mov     edx, 2Bh ; '+'
 * 00000001C003C08A: mov     rcx, [rcx+18h]
 * 00000001C003C08E: call    cs:__guard_dispatch_icall_fptr
 * 00000001C003C094: test    rbx, rbx
 * 00000001C003C097: jz      short loc_1C003C0AE
 * 00000001C003C099: inc     rdi
 * 00000001C003C09C: cmp     [rbx+rdi*2], r14w
 * 00000001C003C0A1: jnz     short loc_1C003C099
 * 00000001C003C0A3: lea     rsi, ds:2[rdi*2]
 * 00000001C003C0AB: test    rbx, rbx
 * 00000001C003C0AE: mov     [rsp+68h+var_20], r14
 * 00000001C003C0B3: lea     rax, [rsp+68h+arg_30]
 * 00000001C003C0BB: mov     [rsp+68h+var_28], 4
 * 00000001C003C0C4: lea     r9, WPP_0ff02685c5363f18e09d8afa1fc83b4b_Traceguids
 * 00000001C003C0CB: mov     [rsp+68h+var_30], rax
 * 00000001C003C0D0: mov     edx, 2
 * 00000001C003C0D5: cmovz   rbx, r12
 * 00000001C003C0D9: mov     [rsp+68h+var_38], rsi
 * 00000001C003C0DE: mov     [rsp+68h+var_40], rbx
 * 00000001C003C0E3: mov     rcx, rbp
 * 00000001C003C0E6: mov     word ptr [rsp+68h+var_48], r13w
 * 00000001C003C0EC: lea     r8d, [rdx+14h]
 * 00000001C003C0F0: call    cs:__imp_WppAutoLogTrace
 * 00000001C003C0F7: nop     dword ptr [rax+rax+00h]
 * 00000001C003C0FC: lea     r11, [rsp+68h+var_18]
 * 00000001C003C101: mov     rbx, [r11+20h]
 * 00000001C003C105: mov     rbp, [r11+28h]
 * 00000001C003C109: mov     rsi, [r11+30h]
 * 00000001C003C10D: mov     rdi, [r11+38h]
 * 00000001C003C111: mov     rsp, r11
 * 00000001C003C114: pop     r14
 * 00000001C003C116: pop     r13
 * 00000001C003C118: pop     r12
 * 00000001C003C11A: retn
 */
