/*
 * XREFs of WPP_RECORDER_SF_qdqddd @ 0x1C0031040
 * Callers:
 *     Command_InternalSendCommand @ 0x1C000A9C8 (Command_InternalSendCommand.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0020270 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qdqddd @ 0x1C0031040
 * Reason: Hex-Rays returned no pseudocode for 0x1C0031040
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0031040: mov     r11, rsp
 * 00000001C0031043: mov     [r11+8], rbx
 * 00000001C0031047: mov     [r11+10h], rsi
 * 00000001C003104B: mov     [r11+18h], rdi
 * 00000001C003104F: mov     [r11+20h], r14
 * 00000001C0031053: push    rbp
 * 00000001C0031054: lea     rbp, [r11-27h]
 * 00000001C0031058: sub     rsp, 90h
 * 00000001C003105F: mov     edi, 4
 * 00000001C0031064: mov     rbx, rcx
 * 00000001C0031067: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C003106E: lea     esi, [rdi+4]
 * 00000001C0031071: mov     eax, [rcx+2Ch]
 * 00000001C0031074: lea     r14d, [rdi+33h]
 * 00000001C0031078: test    al, 40h
 * 00000001C003107A: jz      short loc_1C00310ED
 * 00000001C003107C: cmp     byte ptr [rcx+29h], 5
 * 00000001C0031080: jb      short loc_1C00310ED
 * 00000001C0031082: and     qword ptr [r11-18h], 0
 * 00000001C0031087: lea     rdx, [rbp+1Fh+arg_50]
 * 00000001C003108B: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0031092: lea     r8, WPP_7e0bcb5bda0632cd0b4b69ae4ee19d35_Traceguids
 * 00000001C0031099: mov     rcx, [rcx+18h]
 * 00000001C003109D: mov     r9d, r14d
 * 00000001C00310A0: mov     [r11-20h], rdi
 * 00000001C00310A4: mov     [r11-28h], rdx
 * 00000001C00310A8: lea     rdx, [rbp+1Fh+arg_48]
 * 00000001C00310AC: mov     [r11-30h], rdi
 * 00000001C00310B0: mov     [r11-38h], rdx
 * 00000001C00310B4: lea     rdx, [rbp+1Fh+arg_40]
 * 00000001C00310B8: mov     [r11-40h], rdi
 * 00000001C00310BC: mov     [r11-48h], rdx
 * 00000001C00310C0: lea     rdx, [rbp+1Fh+arg_38]
 * 00000001C00310C4: mov     [r11-50h], rsi
 * 00000001C00310C8: mov     [r11-58h], rdx
 * 00000001C00310CC: lea     rdx, [rbp+1Fh+arg_30]
 * 00000001C00310D0: mov     [r11-60h], rdi
 * 00000001C00310D4: mov     [r11-68h], rdx
 * 00000001C00310D8: lea     rdx, [rbp+1Fh+arg_28]
 * 00000001C00310DC: mov     [r11-70h], rsi
 * 00000001C00310E0: mov     [r11-78h], rdx
 * 00000001C00310E4: lea     edx, [rdi+27h]
 * 00000001C00310E7: call    cs:__guard_dispatch_icall_fptr
 * 00000001C00310ED: and     qword ptr [rsp+90h+var_8], 0
 * 00000001C00310F6: lea     rax, [rbp+1Fh+arg_50]
 * 00000001C00310FA: mov     [rsp+90h+var_10], rdi
 * 00000001C0031102: lea     r9, WPP_7e0bcb5bda0632cd0b4b69ae4ee19d35_Traceguids
 * 00000001C0031109: mov     [rsp+90h+var_18], rax
 * 00000001C003110E: mov     edx, 5
 * 00000001C0031113: mov     [rsp+90h+var_20], rdi
 * 00000001C0031118: lea     rax, [rbp+1Fh+arg_48]
 * 00000001C003111C: mov     [rsp+90h+var_28], rax
 * 00000001C0031121: mov     rcx, rbx
 * 00000001C0031124: mov     [rsp+90h+var_30], rdi
 * 00000001C0031129: lea     rax, [rbp+1Fh+arg_40]
 * 00000001C003112D: mov     [rsp+90h+var_38], rax
 * 00000001C0031132: lea     r8d, [rdx+2]
 * 00000001C0031136: mov     [rsp+90h+var_40], rsi
 * 00000001C003113B: lea     rax, [rbp+1Fh+arg_38]
 * 00000001C003113F: mov     [rsp+90h+var_48], rax
 * 00000001C0031144: lea     rax, [rbp+1Fh+arg_30]
 * 00000001C0031148: mov     [rsp+90h+var_50], rdi
 * 00000001C003114D: mov     [rsp+90h+var_58], rax
 * 00000001C0031152: lea     rax, [rbp+1Fh+arg_28]
 * 00000001C0031156: mov     [rsp+90h+var_60], rsi
 * 00000001C003115B: mov     [rsp+90h+var_68], rax
 * 00000001C0031160: mov     word ptr [rsp+90h+var_70], r14w
 * 00000001C0031166: call    cs:__imp_WppAutoLogTrace
 * 00000001C003116D: nop     dword ptr [rax+rax+00h]
 * 00000001C0031172: lea     r11, [rsp+90h+var_s0]
 * 00000001C003117A: mov     rbx, [r11+10h]
 * 00000001C003117E: mov     rsi, [r11+18h]
 * 00000001C0031182: mov     rdi, [r11+20h]
 * 00000001C0031186: mov     r14, [r11+28h]
 * 00000001C003118A: mov     rsp, r11
 * 00000001C003118D: pop     rbp
 * 00000001C003118E: retn
 */
