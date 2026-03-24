/*
 * XREFs of WPP_RECORDER_SF_q_guid_Ld @ 0x1C00375CC
 * Callers:
 *     Controller_ExecuteDSM @ 0x1C006E4E4 (Controller_ExecuteDSM.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0020270 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_q_guid_Ld @ 0x1C00375CC
 * Reason: Hex-Rays returned no pseudocode for 0x1C00375CC
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00375CC: mov     r11, rsp
 * 00000001C00375CF: mov     [r11+8], rbx
 * 00000001C00375D3: mov     [r11+10h], rsi
 * 00000001C00375D7: mov     [r11+18h], rdi
 * 00000001C00375DB: push    r15
 * 00000001C00375DD: sub     rsp, 70h
 * 00000001C00375E1: mov     rbx, [rsp+78h+arg_30]
 * 00000001C00375E9: mov     rdi, rcx
 * 00000001C00375EC: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C00375F3: mov     esi, 4
 * 00000001C00375F8: mov     r15d, 104h
 * 00000001C00375FE: mov     eax, [rcx+2Ch]
 * 00000001C0037601: test    al, 8
 * 00000001C0037603: jz      short loc_1C0037662
 * 00000001C0037605: cmp     [rcx+29h], sil
 * 00000001C0037609: jb      short loc_1C0037662
 * 00000001C003760B: and     qword ptr [r11-18h], 0
 * 00000001C0037610: lea     rdx, [r11+48h]
 * 00000001C0037614: mov     rax, cs:pfnWppTraceMessage
 * 00000001C003761B: lea     r8, WPP_ac07559723993fb37d1c33c002d3118e_Traceguids
 * 00000001C0037622: mov     rcx, [rcx+18h]
 * 00000001C0037626: mov     r9d, r15d
 * 00000001C0037629: mov     [r11-20h], rsi
 * 00000001C003762D: mov     [r11-28h], rdx
 * 00000001C0037631: lea     rdx, [r11+40h]
 * 00000001C0037635: mov     [r11-30h], rsi
 * 00000001C0037639: mov     [r11-38h], rdx
 * 00000001C003763D: lea     rdx, [r11+30h]
 * 00000001C0037641: mov     qword ptr [r11-40h], 10h
 * 00000001C0037649: mov     [r11-48h], rbx
 * 00000001C003764D: mov     qword ptr [r11-50h], 8
 * 00000001C0037655: mov     [r11-58h], rdx
 * 00000001C0037659: lea     edx, [rsi+27h]
 * 00000001C003765C: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0037662: and     [rsp+78h+var_10], 0
 * 00000001C0037668: lea     rax, [rsp+78h+arg_40]
 * 00000001C0037670: mov     [rsp+78h+var_18], rsi
 * 00000001C0037675: lea     r9, WPP_ac07559723993fb37d1c33c002d3118e_Traceguids
 * 00000001C003767C: mov     [rsp+78h+var_20], rax
 * 00000001C0037681: mov     r8d, esi
 * 00000001C0037684: mov     [rsp+78h+var_28], rsi
 * 00000001C0037689: lea     rax, [rsp+78h+arg_38]
 * 00000001C0037691: mov     [rsp+78h+var_30], rax
 * 00000001C0037696: mov     edx, esi
 * 00000001C0037698: mov     [rsp+78h+var_38], 10h
 * 00000001C00376A1: lea     rax, [rsp+78h+arg_28]
 * 00000001C00376A9: mov     [rsp+78h+var_40], rbx
 * 00000001C00376AE: mov     rcx, rdi
 * 00000001C00376B1: mov     [rsp+78h+var_48], 8
 * 00000001C00376BA: mov     [rsp+78h+var_50], rax
 * 00000001C00376BF: mov     [rsp+78h+var_58], r15w
 * 00000001C00376C5: call    cs:__imp_WppAutoLogTrace
 * 00000001C00376CC: nop     dword ptr [rax+rax+00h]
 * 00000001C00376D1: lea     r11, [rsp+78h+var_8]
 * 00000001C00376D6: mov     rbx, [r11+10h]
 * 00000001C00376DA: mov     rsi, [r11+18h]
 * 00000001C00376DE: mov     rdi, [r11+20h]
 * 00000001C00376E2: mov     rsp, r11
 * 00000001C00376E5: pop     r15
 * 00000001C00376E7: retn
 */
