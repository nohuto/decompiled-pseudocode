/*
 * XREFs of WPP_RECORDER_SF_PD @ 0x1C0038454
 * Callers:
 *     AcpiConvertObjDataToMethodArguments @ 0x1C0036F14 (AcpiConvertObjDataToMethodArguments.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0001DE0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_PD @ 0x1C0038454
 * Reason: Hex-Rays returned no pseudocode for 0x1C0038454
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0038454: mov     r11, rsp
 * 00000001C0038457: mov     [r11+8], rbx
 * 00000001C003845B: push    rbp
 * 00000001C003845C: sub     rsp, 60h
 * 00000001C0038460: mov     rbx, rcx
 * 00000001C0038463: mov     [rsp+68h+var_18], 0C000009Ah
 * 00000001C003846B: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0038472: mov     ebp, 16h
 * 00000001C0038477: test    dword ptr [rcx+2Ch], 100000h
 * 00000001C003847E: jz      short loc_1C00384C9
 * 00000001C0038480: cmp     byte ptr [rcx+29h], 2
 * 00000001C0038484: jb      short loc_1C00384C9
 * 00000001C0038486: and     qword ptr [r11-28h], 0
 * 00000001C003848B: lea     rdx, [r11-18h]
 * 00000001C003848F: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0038496: lea     r8, WPP_6b96f8ebb13c3b7665ec42abfcbc7cd5_Traceguids
 * 00000001C003849D: mov     rcx, [rcx+18h]
 * 00000001C00384A1: mov     r9d, ebp
 * 00000001C00384A4: mov     qword ptr [r11-30h], 4
 * 00000001C00384AC: mov     [r11-38h], rdx
 * 00000001C00384B0: lea     rdx, [r11+30h]
 * 00000001C00384B4: mov     qword ptr [r11-40h], 8
 * 00000001C00384BC: mov     [r11-48h], rdx
 * 00000001C00384C0: lea     edx, [rbp+15h]
 * 00000001C00384C3: call    cs:__guard_dispatch_icall_fptr
 * 00000001C00384C9: and     [rsp+68h+var_20], 0
 * 00000001C00384CF: lea     rax, [rsp+68h+var_18]
 * 00000001C00384D4: mov     [rsp+68h+var_28], 4
 * 00000001C00384DD: lea     r9, WPP_6b96f8ebb13c3b7665ec42abfcbc7cd5_Traceguids
 * 00000001C00384E4: mov     [rsp+68h+var_30], rax
 * 00000001C00384E9: mov     edx, 2
 * 00000001C00384EE: lea     rax, [rsp+68h+arg_28]
 * 00000001C00384F6: mov     [rsp+68h+var_38], 8
 * 00000001C00384FF: mov     [rsp+68h+var_40], rax
 * 00000001C0038504: mov     rcx, rbx
 * 00000001C0038507: mov     [rsp+68h+var_48], bp
 * 00000001C003850C: lea     r8d, [rdx+13h]
 * 00000001C0038510: call    cs:__imp_WppAutoLogTrace
 * 00000001C0038517: nop     dword ptr [rax+rax+00h]
 * 00000001C003851C: mov     rbx, [rsp+68h+arg_0]
 * 00000001C0038521: add     rsp, 60h
 * 00000001C0038525: pop     rbp
 * 00000001C0038526: retn
 */
