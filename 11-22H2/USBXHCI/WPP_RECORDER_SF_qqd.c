/*
 * XREFs of WPP_RECORDER_SF_qqd @ 0x1C0032338
 * Callers:
 *     CommonBuffer_WorkItem @ 0x1C00078D0 (CommonBuffer_WorkItem.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0020270 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qqd @ 0x1C0032338
 * Reason: Hex-Rays returned no pseudocode for 0x1C0032338
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0032338: mov     r11, rsp
 * 00000001C003233B: mov     [r11+8], rbx
 * 00000001C003233F: mov     [r11+10h], rbp
 * 00000001C0032343: push    rdi
 * 00000001C0032344: sub     rsp, 60h
 * 00000001C0032348: mov     rbx, rcx
 * 00000001C003234B: mov     ebp, 0Eh
 * 00000001C0032350: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0032357: lea     edi, [rbp-6]
 * 00000001C003235A: mov     eax, [rcx+2Ch]
 * 00000001C003235D: test    al, al
 * 00000001C003235F: jns     short loc_1C00323B2
 * 00000001C0032361: cmp     byte ptr [rcx+29h], 5
 * 00000001C0032365: jb      short loc_1C00323B2
 * 00000001C0032367: and     qword ptr [r11-18h], 0
 * 00000001C003236C: lea     rdx, [r11+40h]
 * 00000001C0032370: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0032377: lea     r8, WPP_d7539c7ae1ee350478bc8f7c9543b560_Traceguids
 * 00000001C003237E: mov     rcx, [rcx+18h]
 * 00000001C0032382: mov     r9d, ebp
 * 00000001C0032385: mov     qword ptr [r11-20h], 4
 * 00000001C003238D: mov     [r11-28h], rdx
 * 00000001C0032391: lea     rdx, [r11+38h]
 * 00000001C0032395: mov     [r11-30h], rdi
 * 00000001C0032399: mov     [r11-38h], rdx
 * 00000001C003239D: lea     rdx, [r11+30h]
 * 00000001C00323A1: mov     [r11-40h], rdi
 * 00000001C00323A5: mov     [r11-48h], rdx
 * 00000001C00323A9: lea     edx, [rbp+1Dh]
 * 00000001C00323AC: call    cs:__guard_dispatch_icall_fptr
 * 00000001C00323B2: and     [rsp+68h+var_10], 0
 * 00000001C00323B8: lea     rax, [rsp+68h+arg_38]
 * 00000001C00323C0: mov     [rsp+68h+var_18], 4
 * 00000001C00323C9: lea     r9, WPP_d7539c7ae1ee350478bc8f7c9543b560_Traceguids
 * 00000001C00323D0: mov     [rsp+68h+var_20], rax
 * 00000001C00323D5: mov     r8d, edi
 * 00000001C00323D8: mov     [rsp+68h+var_28], rdi
 * 00000001C00323DD: lea     rax, [rsp+68h+arg_30]
 * 00000001C00323E5: mov     [rsp+68h+var_30], rax
 * 00000001C00323EA: mov     edx, 5
 * 00000001C00323EF: lea     rax, [rsp+68h+arg_28]
 * 00000001C00323F7: mov     [rsp+68h+var_38], rdi
 * 00000001C00323FC: mov     [rsp+68h+var_40], rax
 * 00000001C0032401: mov     rcx, rbx
 * 00000001C0032404: mov     [rsp+68h+var_48], bp
 * 00000001C0032409: call    cs:__imp_WppAutoLogTrace
 * 00000001C0032410: nop     dword ptr [rax+rax+00h]
 * 00000001C0032415: mov     rbx, [rsp+68h+arg_0]
 * 00000001C003241A: mov     rbp, [rsp+68h+arg_8]
 * 00000001C003241F: add     rsp, 60h
 * 00000001C0032423: pop     rdi
 * 00000001C0032424: retn
 */
