/*
 * XREFs of WPP_RECORDER_SF_Lqs @ 0x1C0014F2C
 * Callers:
 *     ACPIBuildProcessPowerResourcePhasePep @ 0x1C0010FD0 (ACPIBuildProcessPowerResourcePhasePep.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0001DE0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_Lqs @ 0x1C0014F2C
 * Reason: Hex-Rays returned no pseudocode for 0x1C0014F2C
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0014F2C: mov     rax, rsp
 * 00000001C0014F2F: mov     [rax+8], rbx
 * 00000001C0014F33: mov     [rax+10h], rbp
 * 00000001C0014F37: mov     [rax+18h], rsi
 * 00000001C0014F3B: mov     [rax+20h], rdi
 * 00000001C0014F3F: push    r14
 * 00000001C0014F41: sub     rsp, 60h
 * 00000001C0014F45: mov     r10, cs:WPP_GLOBAL_Control
 * 00000001C0014F4C: lea     r8, aNull; "NULL"
 * 00000001C0014F53: mov     rdi, [rsp+68h+arg_38]
 * 00000001C0014F5B: or      rbx, 0FFFFFFFFFFFFFFFFh
 * 00000001C0014F5F: movzx   ebp, r9w
 * 00000001C0014F63: mov     r14, rcx
 * 00000001C0014F66: movzx   esi, dl
 * 00000001C0014F69: mov     eax, [r10+2Ch]
 * 00000001C0014F6D: test    al, 1
 * 00000001C0014F6F: jz      loc_1C0015007
 * 00000001C0014F75: cmp     [r10+29h], sil
 * 00000001C0014F79: jb      loc_1C0015007
 * 00000001C0014F7F: test    rdi, rdi
 * 00000001C0014F82: jz      short loc_1C0014F95
 * 00000001C0014F84: mov     rcx, rbx
 * 00000001C0014F87: inc     rcx
 * 00000001C0014F8A: cmp     byte ptr [rdi+rcx], 0
 * 00000001C0014F8E: jnz     short loc_1C0014F87
 * 00000001C0014F90: inc     rcx
 * 00000001C0014F93: jmp     short loc_1C0014F9A
 * 00000001C0014F95: mov     ecx, 5
 * 00000001C0014F9A: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0014FA1: test    rdi, rdi
 * 00000001C0014FA4: mov     rdx, rdi
 * 00000001C0014FA7: mov     r9d, ebp
 * 00000001C0014FAA: cmovz   rdx, r8
 * 00000001C0014FAE: and     [rsp+68h+var_18], 0
 * 00000001C0014FB4: mov     [rsp+68h+var_20], rcx
 * 00000001C0014FB9: lea     r8, WPP_a0f908b75b693eaadb9088735086d97e_Traceguids
 * 00000001C0014FC0: mov     [rsp+68h+var_28], rdx
 * 00000001C0014FC5: lea     rcx, [rsp+68h+arg_30]
 * 00000001C0014FCD: mov     [rsp+68h+var_30], 8
 * 00000001C0014FD6: mov     edx, 2Bh ; '+'
 * 00000001C0014FDB: mov     [rsp+68h+var_38], rcx
 * 00000001C0014FE0: lea     rcx, [rsp+68h+arg_28]
 * 00000001C0014FE8: mov     [rsp+68h+var_40], 4
 * 00000001C0014FF1: mov     [rsp+68h+var_48], rcx
 * 00000001C0014FF6: mov     rcx, [r10+18h]
 * 00000001C0014FFA: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0015000: lea     r8, aNull; "NULL"
 * 00000001C0015007: test    rdi, rdi
 * 00000001C001500A: jz      short loc_1C001501A
 * 00000001C001500C: inc     rbx
 * 00000001C001500F: cmp     byte ptr [rdi+rbx], 0
 * 00000001C0015013: jnz     short loc_1C001500C
 * 00000001C0015015: inc     rbx
 * 00000001C0015018: jmp     short loc_1C001501F
 * 00000001C001501A: mov     ebx, 5
 * 00000001C001501F: test    rdi, rdi
 * 00000001C0015022: lea     rax, [rsp+68h+arg_30]
 * 00000001C001502A: lea     r9, WPP_a0f908b75b693eaadb9088735086d97e_Traceguids
 * 00000001C0015031: mov     edx, esi
 * 00000001C0015033: cmovz   rdi, r8
 * 00000001C0015037: mov     rcx, r14
 * 00000001C001503A: and     [rsp+68h+var_10], 0
 * 00000001C0015040: mov     r8d, 1
 * 00000001C0015046: mov     [rsp+68h+var_18], rbx
 * 00000001C001504B: mov     [rsp+68h+var_20], rdi
 * 00000001C0015050: mov     [rsp+68h+var_28], 8
 * 00000001C0015059: mov     [rsp+68h+var_30], rax
 * 00000001C001505E: lea     rax, [rsp+68h+arg_28]
 * 00000001C0015066: mov     [rsp+68h+var_38], 4
 * 00000001C001506F: mov     [rsp+68h+var_40], rax
 * 00000001C0015074: mov     word ptr [rsp+68h+var_48], bp
 * 00000001C0015079: call    cs:__imp_WppAutoLogTrace
 * 00000001C0015080: nop     dword ptr [rax+rax+00h]
 * 00000001C0015085: lea     r11, [rsp+68h+var_8]
 * 00000001C001508A: mov     rbx, [r11+10h]
 * 00000001C001508E: mov     rbp, [r11+18h]
 * 00000001C0015092: mov     rsi, [r11+20h]
 * 00000001C0015096: mov     rdi, [r11+28h]
 * 00000001C001509A: mov     rsp, r11
 * 00000001C001509D: pop     r14
 * 00000001C001509F: retn
 */
