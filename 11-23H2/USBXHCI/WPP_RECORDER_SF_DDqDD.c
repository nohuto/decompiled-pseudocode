/*
 * XREFs of WPP_RECORDER_SF_DDqDD @ 0x1C0043914
 * Callers:
 *     Isoch_Stage_Find @ 0x1C0002870 (Isoch_Stage_Find.c)
 *     Control_Transfer_ValidateBuffer @ 0x1C00072C0 (Control_Transfer_ValidateBuffer.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00203A0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_DDqDD @ 0x1C0043914
 * Reason: Hex-Rays returned no pseudocode for 0x1C0043914
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0043914: mov     r11, rsp
 * 00000001C0043917: mov     [r11+8], rbx
 * 00000001C004391B: mov     [r11+10h], rsi
 * 00000001C004391F: push    rdi
 * 00000001C0043920: sub     rsp, 80h
 * 00000001C0043927: mov     rdi, rcx
 * 00000001C004392A: movzx   ebx, r9w
 * 00000001C004392E: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0043935: mov     esi, 4
 * 00000001C004393A: test    dword ptr [rcx+2Ch], 2000h
 * 00000001C0043941: jz      short loc_1C00439AD
 * 00000001C0043943: cmp     byte ptr [rcx+29h], 2
 * 00000001C0043947: jb      short loc_1C00439AD
 * 00000001C0043949: and     qword ptr [r11-18h], 0
 * 00000001C004394E: lea     rdx, [r11+50h]
 * 00000001C0043952: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0043959: mov     r9d, ebx
 * 00000001C004395C: mov     r8, [rsp+88h+arg_20]
 * 00000001C0043964: mov     rcx, [rcx+18h]
 * 00000001C0043968: mov     [r11-20h], rsi
 * 00000001C004396C: mov     [r11-28h], rdx
 * 00000001C0043970: lea     rdx, [r11+48h]
 * 00000001C0043974: mov     [r11-30h], rsi
 * 00000001C0043978: mov     [r11-38h], rdx
 * 00000001C004397C: lea     rdx, [r11+40h]
 * 00000001C0043980: mov     qword ptr [r11-40h], 8
 * 00000001C0043988: mov     [r11-48h], rdx
 * 00000001C004398C: lea     rdx, [r11+38h]
 * 00000001C0043990: mov     [r11-50h], rsi
 * 00000001C0043994: mov     [r11-58h], rdx
 * 00000001C0043998: lea     rdx, [r11+30h]
 * 00000001C004399C: mov     [r11-60h], rsi
 * 00000001C00439A0: mov     [r11-68h], rdx
 * 00000001C00439A4: lea     edx, [rsi+27h]
 * 00000001C00439A7: call    cs:__guard_dispatch_icall_fptr
 * 00000001C00439AD: and     [rsp+88h+var_10], 0
 * 00000001C00439B3: lea     rax, [rsp+88h+arg_48]
 * 00000001C00439BB: mov     r9, [rsp+88h+arg_20]
 * 00000001C00439C3: mov     edx, 2
 * 00000001C00439C8: mov     [rsp+88h+var_18], rsi
 * 00000001C00439CD: mov     rcx, rdi
 * 00000001C00439D0: mov     [rsp+88h+var_20], rax
 * 00000001C00439D5: lea     rax, [rsp+88h+arg_40]
 * 00000001C00439DD: mov     [rsp+88h+var_28], rsi
 * 00000001C00439E2: mov     [rsp+88h+var_30], rax
 * 00000001C00439E7: lea     r8d, [rdx+0Ch]
 * 00000001C00439EB: mov     [rsp+88h+var_38], 8
 * 00000001C00439F4: lea     rax, [rsp+88h+arg_38]
 * 00000001C00439FC: mov     [rsp+88h+var_40], rax
 * 00000001C0043A01: lea     rax, [rsp+88h+arg_30]
 * 00000001C0043A09: mov     [rsp+88h+var_48], rsi
 * 00000001C0043A0E: mov     [rsp+88h+var_50], rax
 * 00000001C0043A13: lea     rax, [rsp+88h+arg_28]
 * 00000001C0043A1B: mov     [rsp+88h+var_58], rsi
 * 00000001C0043A20: mov     [rsp+88h+var_60], rax
 * 00000001C0043A25: mov     [rsp+88h+var_68], bx
 * 00000001C0043A2A: call    cs:__imp_WppAutoLogTrace
 * 00000001C0043A31: nop     dword ptr [rax+rax+00h]
 * 00000001C0043A36: lea     r11, [rsp+88h+var_8]
 * 00000001C0043A3E: mov     rbx, [r11+10h]
 * 00000001C0043A42: mov     rsi, [r11+18h]
 * 00000001C0043A46: mov     rsp, r11
 * 00000001C0043A49: pop     rdi
 * 00000001C0043A4A: retn
 */
