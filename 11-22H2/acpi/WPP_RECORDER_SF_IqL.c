/*
 * XREFs of WPP_RECORDER_SF_IqL @ 0x1C0032138
 * Callers:
 *     ACPIMatchHardwareAddress @ 0x1C0088CF8 (ACPIMatchHardwareAddress.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0001DE0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_IqL @ 0x1C0032138
 * Reason: Hex-Rays returned no pseudocode for 0x1C0032138
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0032138: mov     r11, rsp
 * 00000001C003213B: mov     [r11+8], rbx
 * 00000001C003213F: mov     [r11+10h], rbp
 * 00000001C0032143: push    rsi
 * 00000001C0032144: sub     rsp, 60h
 * 00000001C0032148: mov     rbx, rcx
 * 00000001C003214B: mov     ebp, 0Ah
 * 00000001C0032150: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0032157: lea     esi, [rbp-2]
 * 00000001C003215A: mov     eax, [rcx+2Ch]
 * 00000001C003215D: test    al, 20h
 * 00000001C003215F: jz      short loc_1C00321B2
 * 00000001C0032161: cmp     byte ptr [rcx+29h], 4
 * 00000001C0032165: jb      short loc_1C00321B2
 * 00000001C0032167: and     qword ptr [r11-18h], 0
 * 00000001C003216C: lea     rdx, [r11+40h]
 * 00000001C0032170: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0032177: lea     r8, WPP_e31de8e794e03abc169a9744a0587e03_Traceguids
 * 00000001C003217E: mov     rcx, [rcx+18h]
 * 00000001C0032182: mov     r9d, ebp
 * 00000001C0032185: mov     qword ptr [r11-20h], 4
 * 00000001C003218D: mov     [r11-28h], rdx
 * 00000001C0032191: lea     rdx, [r11+38h]
 * 00000001C0032195: mov     [r11-30h], rsi
 * 00000001C0032199: mov     [r11-38h], rdx
 * 00000001C003219D: lea     rdx, [r11+30h]
 * 00000001C00321A1: mov     [r11-40h], rsi
 * 00000001C00321A5: mov     [r11-48h], rdx
 * 00000001C00321A9: lea     edx, [rbp+21h]
 * 00000001C00321AC: call    cs:__guard_dispatch_icall_fptr
 * 00000001C00321B2: and     [rsp+68h+var_10], 0
 * 00000001C00321B8: lea     rax, [rsp+68h+arg_38]
 * 00000001C00321C0: mov     [rsp+68h+var_18], 4
 * 00000001C00321C9: lea     r9, WPP_e31de8e794e03abc169a9744a0587e03_Traceguids
 * 00000001C00321D0: mov     [rsp+68h+var_20], rax
 * 00000001C00321D5: mov     edx, 4
 * 00000001C00321DA: mov     [rsp+68h+var_28], rsi
 * 00000001C00321DF: lea     rax, [rsp+68h+arg_30]
 * 00000001C00321E7: mov     [rsp+68h+var_30], rax
 * 00000001C00321EC: mov     rcx, rbx
 * 00000001C00321EF: lea     rax, [rsp+68h+arg_28]
 * 00000001C00321F7: mov     [rsp+68h+var_38], rsi
 * 00000001C00321FC: mov     [rsp+68h+var_40], rax
 * 00000001C0032201: lea     r8d, [rdx+2]
 * 00000001C0032205: mov     [rsp+68h+var_48], bp
 * 00000001C003220A: call    cs:__imp_WppAutoLogTrace
 * 00000001C0032211: nop     dword ptr [rax+rax+00h]
 * 00000001C0032216: mov     rbx, [rsp+68h+arg_0]
 * 00000001C003221B: mov     rbp, [rsp+68h+arg_8]
 * 00000001C0032220: add     rsp, 60h
 * 00000001C0032224: pop     rsi
 * 00000001C0032225: retn
 */
