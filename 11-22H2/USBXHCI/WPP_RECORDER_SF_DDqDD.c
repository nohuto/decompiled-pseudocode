/*
 * XREFs of WPP_RECORDER_SF_DDqDD @ 0x1C00437D4
 * Callers:
 *     Isoch_Stage_Find @ 0x1C0002870 (Isoch_Stage_Find.c)
 *     Control_Transfer_ValidateBuffer @ 0x1C00072F0 (Control_Transfer_ValidateBuffer.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0020270 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_DDqDD @ 0x1C00437D4
 * Reason: Hex-Rays returned no pseudocode for 0x1C00437D4
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00437D4: mov     r11, rsp
 * 00000001C00437D7: mov     [r11+8], rbx
 * 00000001C00437DB: mov     [r11+10h], rsi
 * 00000001C00437DF: push    rdi
 * 00000001C00437E0: sub     rsp, 80h
 * 00000001C00437E7: mov     rdi, rcx
 * 00000001C00437EA: movzx   ebx, r9w
 * 00000001C00437EE: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C00437F5: mov     esi, 4
 * 00000001C00437FA: test    dword ptr [rcx+2Ch], 2000h
 * 00000001C0043801: jz      short loc_1C004386D
 * 00000001C0043803: cmp     byte ptr [rcx+29h], 2
 * 00000001C0043807: jb      short loc_1C004386D
 * 00000001C0043809: and     qword ptr [r11-18h], 0
 * 00000001C004380E: lea     rdx, [r11+50h]
 * 00000001C0043812: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0043819: mov     r9d, ebx
 * 00000001C004381C: mov     r8, [rsp+88h+arg_20]
 * 00000001C0043824: mov     rcx, [rcx+18h]
 * 00000001C0043828: mov     [r11-20h], rsi
 * 00000001C004382C: mov     [r11-28h], rdx
 * 00000001C0043830: lea     rdx, [r11+48h]
 * 00000001C0043834: mov     [r11-30h], rsi
 * 00000001C0043838: mov     [r11-38h], rdx
 * 00000001C004383C: lea     rdx, [r11+40h]
 * 00000001C0043840: mov     qword ptr [r11-40h], 8
 * 00000001C0043848: mov     [r11-48h], rdx
 * 00000001C004384C: lea     rdx, [r11+38h]
 * 00000001C0043850: mov     [r11-50h], rsi
 * 00000001C0043854: mov     [r11-58h], rdx
 * 00000001C0043858: lea     rdx, [r11+30h]
 * 00000001C004385C: mov     [r11-60h], rsi
 * 00000001C0043860: mov     [r11-68h], rdx
 * 00000001C0043864: lea     edx, [rsi+27h]
 * 00000001C0043867: call    cs:__guard_dispatch_icall_fptr
 * 00000001C004386D: and     [rsp+88h+var_10], 0
 * 00000001C0043873: lea     rax, [rsp+88h+arg_48]
 * 00000001C004387B: mov     r9, [rsp+88h+arg_20]
 * 00000001C0043883: mov     edx, 2
 * 00000001C0043888: mov     [rsp+88h+var_18], rsi
 * 00000001C004388D: mov     rcx, rdi
 * 00000001C0043890: mov     [rsp+88h+var_20], rax
 * 00000001C0043895: lea     rax, [rsp+88h+arg_40]
 * 00000001C004389D: mov     [rsp+88h+var_28], rsi
 * 00000001C00438A2: mov     [rsp+88h+var_30], rax
 * 00000001C00438A7: lea     r8d, [rdx+0Ch]
 * 00000001C00438AB: mov     [rsp+88h+var_38], 8
 * 00000001C00438B4: lea     rax, [rsp+88h+arg_38]
 * 00000001C00438BC: mov     [rsp+88h+var_40], rax
 * 00000001C00438C1: lea     rax, [rsp+88h+arg_30]
 * 00000001C00438C9: mov     [rsp+88h+var_48], rsi
 * 00000001C00438CE: mov     [rsp+88h+var_50], rax
 * 00000001C00438D3: lea     rax, [rsp+88h+arg_28]
 * 00000001C00438DB: mov     [rsp+88h+var_58], rsi
 * 00000001C00438E0: mov     [rsp+88h+var_60], rax
 * 00000001C00438E5: mov     [rsp+88h+var_68], bx
 * 00000001C00438EA: call    cs:__imp_WppAutoLogTrace
 * 00000001C00438F1: nop     dword ptr [rax+rax+00h]
 * 00000001C00438F6: lea     r11, [rsp+88h+var_8]
 * 00000001C00438FE: mov     rbx, [r11+10h]
 * 00000001C0043902: mov     rsi, [r11+18h]
 * 00000001C0043906: mov     rsp, r11
 * 00000001C0043909: pop     rdi
 * 00000001C004390A: retn
 */
