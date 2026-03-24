/*
 * XREFs of WPP_RECORDER_SF_qDD @ 0x1C0038648
 * Callers:
 *     AcpiConvertPackageArgumentToPackageObj @ 0x1C003711C (AcpiConvertPackageArgumentToPackageObj.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0001DE0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qDD @ 0x1C0038648
 * Reason: Hex-Rays returned no pseudocode for 0x1C0038648
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0038648: mov     r11, rsp
 * 00000001C003864B: mov     [r11+8], rbx
 * 00000001C003864F: mov     [r11+10h], rbp
 * 00000001C0038653: push    rdi
 * 00000001C0038654: sub     rsp, 60h
 * 00000001C0038658: mov     rbx, rcx
 * 00000001C003865B: mov     ebp, 1Dh
 * 00000001C0038660: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0038667: lea     edi, [rbp-19h]
 * 00000001C003866A: test    dword ptr [rcx+2Ch], 100000h
 * 00000001C0038671: jz      short loc_1C00386C4
 * 00000001C0038673: cmp     byte ptr [rcx+29h], 2
 * 00000001C0038677: jb      short loc_1C00386C4
 * 00000001C0038679: and     qword ptr [r11-18h], 0
 * 00000001C003867E: lea     rdx, [r11+40h]
 * 00000001C0038682: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0038689: lea     r8, WPP_6b96f8ebb13c3b7665ec42abfcbc7cd5_Traceguids
 * 00000001C0038690: mov     rcx, [rcx+18h]
 * 00000001C0038694: mov     r9d, ebp
 * 00000001C0038697: mov     [r11-20h], rdi
 * 00000001C003869B: mov     [r11-28h], rdx
 * 00000001C003869F: lea     rdx, [r11+38h]
 * 00000001C00386A3: mov     [r11-30h], rdi
 * 00000001C00386A7: mov     [r11-38h], rdx
 * 00000001C00386AB: lea     rdx, [r11+30h]
 * 00000001C00386AF: mov     qword ptr [r11-40h], 8
 * 00000001C00386B7: mov     [r11-48h], rdx
 * 00000001C00386BB: lea     edx, [rbp+0Eh]
 * 00000001C00386BE: call    cs:__guard_dispatch_icall_fptr
 * 00000001C00386C4: and     [rsp+68h+var_10], 0
 * 00000001C00386CA: lea     rax, [rsp+68h+arg_38]
 * 00000001C00386D2: mov     [rsp+68h+var_18], rdi
 * 00000001C00386D7: lea     r9, WPP_6b96f8ebb13c3b7665ec42abfcbc7cd5_Traceguids
 * 00000001C00386DE: mov     [rsp+68h+var_20], rax
 * 00000001C00386E3: mov     edx, 2
 * 00000001C00386E8: mov     [rsp+68h+var_28], rdi
 * 00000001C00386ED: lea     rax, [rsp+68h+arg_30]
 * 00000001C00386F5: mov     [rsp+68h+var_30], rax
 * 00000001C00386FA: mov     rcx, rbx
 * 00000001C00386FD: lea     rax, [rsp+68h+arg_28]
 * 00000001C0038705: mov     [rsp+68h+var_38], 8
 * 00000001C003870E: mov     [rsp+68h+var_40], rax
 * 00000001C0038713: lea     r8d, [rdx+13h]
 * 00000001C0038717: mov     [rsp+68h+var_48], bp
 * 00000001C003871C: call    cs:__imp_WppAutoLogTrace
 * 00000001C0038723: nop     dword ptr [rax+rax+00h]
 * 00000001C0038728: mov     rbx, [rsp+68h+arg_0]
 * 00000001C003872D: mov     rbp, [rsp+68h+arg_8]
 * 00000001C0038732: add     rsp, 60h
 * 00000001C0038736: pop     rdi
 * 00000001C0038737: retn
 */
