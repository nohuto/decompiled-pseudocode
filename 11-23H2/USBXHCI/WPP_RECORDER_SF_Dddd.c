/*
 * XREFs of WPP_RECORDER_SF_DDDd @ 0x1C0041FA0
 * Callers:
 *     Bulk_RetrieveNextStage @ 0x1C0011FDC (Bulk_RetrieveNextStage.c)
 *     TR_Create @ 0x1C006DDF8 (TR_Create.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00203A0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_DDDd @ 0x1C0041FA0
 * Reason: Hex-Rays returned no pseudocode for 0x1C0041FA0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0041FA0: mov     r11, rsp
 * 00000001C0041FA3: mov     [r11+8], rbx
 * 00000001C0041FA7: mov     [r11+10h], rbp
 * 00000001C0041FAB: mov     [r11+18h], rsi
 * 00000001C0041FAF: push    rdi
 * 00000001C0041FB0: sub     rsp, 70h
 * 00000001C0041FB4: mov     rsi, rcx
 * 00000001C0041FB7: movzx   edi, r9w
 * 00000001C0041FBB: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0041FC2: mov     ebp, 4
 * 00000001C0041FC7: movzx   ebx, dl
 * 00000001C0041FCA: test    dword ptr [rcx+2Ch], 2000h
 * 00000001C0041FD1: jz      short loc_1C004202C
 * 00000001C0041FD3: cmp     [rcx+29h], bl
 * 00000001C0041FD6: jb      short loc_1C004202C
 * 00000001C0041FD8: and     qword ptr [r11-18h], 0
 * 00000001C0041FDD: lea     rdx, [r11+48h]
 * 00000001C0041FE1: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0041FE8: mov     r9d, edi
 * 00000001C0041FEB: mov     r8, [rsp+78h+arg_20]
 * 00000001C0041FF3: mov     rcx, [rcx+18h]
 * 00000001C0041FF7: mov     [r11-20h], rbp
 * 00000001C0041FFB: mov     [r11-28h], rdx
 * 00000001C0041FFF: lea     rdx, [r11+40h]
 * 00000001C0042003: mov     [r11-30h], rbp
 * 00000001C0042007: mov     [r11-38h], rdx
 * 00000001C004200B: lea     rdx, [r11+38h]
 * 00000001C004200F: mov     [r11-40h], rbp
 * 00000001C0042013: mov     [r11-48h], rdx
 * 00000001C0042017: lea     rdx, [r11+30h]
 * 00000001C004201B: mov     [r11-50h], rbp
 * 00000001C004201F: mov     [r11-58h], rdx
 * 00000001C0042023: lea     edx, [rbp+27h]
 * 00000001C0042026: call    cs:__guard_dispatch_icall_fptr
 * 00000001C004202C: and     [rsp+78h+var_10], 0
 * 00000001C0042032: lea     rax, [rsp+78h+arg_40]
 * 00000001C004203A: mov     r9, [rsp+78h+arg_20]
 * 00000001C0042042: mov     r8d, 0Eh
 * 00000001C0042048: mov     [rsp+78h+var_18], rbp
 * 00000001C004204D: mov     edx, ebx
 * 00000001C004204F: mov     [rsp+78h+var_20], rax
 * 00000001C0042054: mov     rcx, rsi
 * 00000001C0042057: mov     [rsp+78h+var_28], rbp
 * 00000001C004205C: lea     rax, [rsp+78h+arg_38]
 * 00000001C0042064: mov     [rsp+78h+var_30], rax
 * 00000001C0042069: lea     rax, [rsp+78h+arg_30]
 * 00000001C0042071: mov     [rsp+78h+var_38], rbp
 * 00000001C0042076: mov     [rsp+78h+var_40], rax
 * 00000001C004207B: lea     rax, [rsp+78h+arg_28]
 * 00000001C0042083: mov     [rsp+78h+var_48], rbp
 * 00000001C0042088: mov     [rsp+78h+var_50], rax
 * 00000001C004208D: mov     [rsp+78h+var_58], di
 * 00000001C0042092: call    cs:__imp_WppAutoLogTrace
 * 00000001C0042099: nop     dword ptr [rax+rax+00h]
 * 00000001C004209E: lea     r11, [rsp+78h+var_8]
 * 00000001C00420A3: mov     rbx, [r11+10h]
 * 00000001C00420A7: mov     rbp, [r11+18h]
 * 00000001C00420AB: mov     rsi, [r11+20h]
 * 00000001C00420AF: mov     rsp, r11
 * 00000001C00420B2: pop     rdi
 * 00000001C00420B3: retn
 */
