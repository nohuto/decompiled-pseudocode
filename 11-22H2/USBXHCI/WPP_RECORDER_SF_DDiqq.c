/*
 * XREFs of WPP_RECORDER_SF_DDiqq @ 0x1C0043570
 * Callers:
 *     Control_ProcessTransferEventWithED1 @ 0x1C0006870 (Control_ProcessTransferEventWithED1.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0020270 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_DDiqq @ 0x1C0043570
 * Reason: Hex-Rays returned no pseudocode for 0x1C0043570
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0043570: mov     r11, rsp
 * 00000001C0043573: mov     [r11+8], rbx
 * 00000001C0043577: mov     [r11+10h], rbp
 * 00000001C004357B: mov     [r11+18h], rsi
 * 00000001C004357F: push    rdi
 * 00000001C0043580: sub     rsp, 80h
 * 00000001C0043587: mov     rdi, rcx
 * 00000001C004358A: movzx   ebx, r9w
 * 00000001C004358E: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0043595: mov     esi, 8
 * 00000001C004359A: test    dword ptr [rcx+2Ch], 2000h
 * 00000001C00435A1: lea     ebp, [rsi-4]
 * 00000001C00435A4: jz      short loc_1C004360B
 * 00000001C00435A6: cmp     byte ptr [rcx+29h], 2
 * 00000001C00435AA: jb      short loc_1C004360B
 * 00000001C00435AC: and     qword ptr [r11-18h], 0
 * 00000001C00435B1: lea     rdx, [r11+50h]
 * 00000001C00435B5: mov     rax, cs:pfnWppTraceMessage
 * 00000001C00435BC: lea     r8, WPP_1132998d7a983e6252cacd8244985166_Traceguids
 * 00000001C00435C3: mov     rcx, [rcx+18h]
 * 00000001C00435C7: mov     r9d, ebx
 * 00000001C00435CA: mov     [r11-20h], rsi
 * 00000001C00435CE: mov     [r11-28h], rdx
 * 00000001C00435D2: lea     rdx, [r11+48h]
 * 00000001C00435D6: mov     [r11-30h], rsi
 * 00000001C00435DA: mov     [r11-38h], rdx
 * 00000001C00435DE: lea     rdx, [r11+40h]
 * 00000001C00435E2: mov     [r11-40h], rsi
 * 00000001C00435E6: mov     [r11-48h], rdx
 * 00000001C00435EA: lea     rdx, [r11+38h]
 * 00000001C00435EE: mov     [r11-50h], rbp
 * 00000001C00435F2: mov     [r11-58h], rdx
 * 00000001C00435F6: lea     rdx, [r11+30h]
 * 00000001C00435FA: mov     [r11-60h], rbp
 * 00000001C00435FE: mov     [r11-68h], rdx
 * 00000001C0043602: lea     edx, [rsi+23h]
 * 00000001C0043605: call    cs:__guard_dispatch_icall_fptr
 * 00000001C004360B: and     [rsp+88h+var_10], 0
 * 00000001C0043611: lea     rax, [rsp+88h+arg_48]
 * 00000001C0043619: mov     [rsp+88h+var_18], rsi
 * 00000001C004361E: lea     r9, WPP_1132998d7a983e6252cacd8244985166_Traceguids
 * 00000001C0043625: mov     [rsp+88h+var_20], rax
 * 00000001C004362A: mov     edx, 2
 * 00000001C004362F: mov     [rsp+88h+var_28], rsi
 * 00000001C0043634: lea     rax, [rsp+88h+arg_40]
 * 00000001C004363C: mov     [rsp+88h+var_30], rax
 * 00000001C0043641: mov     rcx, rdi
 * 00000001C0043644: mov     [rsp+88h+var_38], rsi
 * 00000001C0043649: lea     rax, [rsp+88h+arg_38]
 * 00000001C0043651: mov     [rsp+88h+var_40], rax
 * 00000001C0043656: lea     r8d, [rdx+0Ch]
 * 00000001C004365A: mov     [rsp+88h+var_48], rbp
 * 00000001C004365F: lea     rax, [rsp+88h+arg_30]
 * 00000001C0043667: mov     [rsp+88h+var_50], rax
 * 00000001C004366C: lea     rax, [rsp+88h+arg_28]
 * 00000001C0043674: mov     [rsp+88h+var_58], rbp
 * 00000001C0043679: mov     [rsp+88h+var_60], rax
 * 00000001C004367E: mov     [rsp+88h+var_68], bx
 * 00000001C0043683: call    cs:__imp_WppAutoLogTrace
 * 00000001C004368A: nop     dword ptr [rax+rax+00h]
 * 00000001C004368F: lea     r11, [rsp+88h+var_8]
 * 00000001C0043697: mov     rbx, [r11+10h]
 * 00000001C004369B: mov     rbp, [r11+18h]
 * 00000001C004369F: mov     rsi, [r11+20h]
 * 00000001C00436A3: mov     rsp, r11
 * 00000001C00436A6: pop     rdi
 * 00000001C00436A7: retn
 */
