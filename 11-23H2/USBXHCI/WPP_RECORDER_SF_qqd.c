/*
 * XREFs of WPP_RECORDER_SF_qqd @ 0x1C0032478
 * Callers:
 *     CommonBuffer_WorkItem @ 0x1C00078A0 (CommonBuffer_WorkItem.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00203A0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qqd @ 0x1C0032478
 * Reason: Hex-Rays returned no pseudocode for 0x1C0032478
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0032478: mov     r11, rsp
 * 00000001C003247B: mov     [r11+8], rbx
 * 00000001C003247F: mov     [r11+10h], rbp
 * 00000001C0032483: push    rdi
 * 00000001C0032484: sub     rsp, 60h
 * 00000001C0032488: mov     rbx, rcx
 * 00000001C003248B: mov     ebp, 0Eh
 * 00000001C0032490: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0032497: lea     edi, [rbp-6]
 * 00000001C003249A: mov     eax, [rcx+2Ch]
 * 00000001C003249D: test    al, al
 * 00000001C003249F: jns     short loc_1C00324F2
 * 00000001C00324A1: cmp     byte ptr [rcx+29h], 5
 * 00000001C00324A5: jb      short loc_1C00324F2
 * 00000001C00324A7: and     qword ptr [r11-18h], 0
 * 00000001C00324AC: lea     rdx, [r11+40h]
 * 00000001C00324B0: mov     rax, cs:pfnWppTraceMessage
 * 00000001C00324B7: lea     r8, WPP_d7539c7ae1ee350478bc8f7c9543b560_Traceguids
 * 00000001C00324BE: mov     rcx, [rcx+18h]
 * 00000001C00324C2: mov     r9d, ebp
 * 00000001C00324C5: mov     qword ptr [r11-20h], 4
 * 00000001C00324CD: mov     [r11-28h], rdx
 * 00000001C00324D1: lea     rdx, [r11+38h]
 * 00000001C00324D5: mov     [r11-30h], rdi
 * 00000001C00324D9: mov     [r11-38h], rdx
 * 00000001C00324DD: lea     rdx, [r11+30h]
 * 00000001C00324E1: mov     [r11-40h], rdi
 * 00000001C00324E5: mov     [r11-48h], rdx
 * 00000001C00324E9: lea     edx, [rbp+1Dh]
 * 00000001C00324EC: call    cs:__guard_dispatch_icall_fptr
 * 00000001C00324F2: and     [rsp+68h+var_10], 0
 * 00000001C00324F8: lea     rax, [rsp+68h+arg_38]
 * 00000001C0032500: mov     [rsp+68h+var_18], 4
 * 00000001C0032509: lea     r9, WPP_d7539c7ae1ee350478bc8f7c9543b560_Traceguids
 * 00000001C0032510: mov     [rsp+68h+var_20], rax
 * 00000001C0032515: mov     r8d, edi
 * 00000001C0032518: mov     [rsp+68h+var_28], rdi
 * 00000001C003251D: lea     rax, [rsp+68h+arg_30]
 * 00000001C0032525: mov     [rsp+68h+var_30], rax
 * 00000001C003252A: mov     edx, 5
 * 00000001C003252F: lea     rax, [rsp+68h+arg_28]
 * 00000001C0032537: mov     [rsp+68h+var_38], rdi
 * 00000001C003253C: mov     [rsp+68h+var_40], rax
 * 00000001C0032541: mov     rcx, rbx
 * 00000001C0032544: mov     [rsp+68h+var_48], bp
 * 00000001C0032549: call    cs:__imp_WppAutoLogTrace
 * 00000001C0032550: nop     dword ptr [rax+rax+00h]
 * 00000001C0032555: mov     rbx, [rsp+68h+arg_0]
 * 00000001C003255A: mov     rbp, [rsp+68h+arg_8]
 * 00000001C003255F: add     rsp, 60h
 * 00000001C0032563: pop     rdi
 * 00000001C0032564: retn
 */
