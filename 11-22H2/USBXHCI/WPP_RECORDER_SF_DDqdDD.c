/*
 * XREFs of WPP_RECORDER_SF_DDqDDD @ 0x1C00464AC
 * Callers:
 *     Isoch_PrepareStage @ 0x1C0004B00 (Isoch_PrepareStage.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0020270 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_DDqDDD @ 0x1C00464AC
 * Reason: Hex-Rays returned no pseudocode for 0x1C00464AC
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00464AC: mov     r11, rsp
 * 00000001C00464AF: mov     [r11+8], rbx
 * 00000001C00464B3: mov     [r11+10h], rdi
 * 00000001C00464B7: mov     [r11+18h], r14
 * 00000001C00464BB: push    rbp
 * 00000001C00464BC: lea     rbp, [r11-27h]
 * 00000001C00464C0: sub     rsp, 90h
 * 00000001C00464C7: mov     rbx, rcx
 * 00000001C00464CA: mov     edi, 4
 * 00000001C00464CF: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C00464D6: lea     r14d, [rdi+2Ah]
 * 00000001C00464DA: test    dword ptr [rcx+2Ch], 2000h
 * 00000001C00464E1: jz      short loc_1C0046558
 * 00000001C00464E3: cmp     byte ptr [rcx+29h], 5
 * 00000001C00464E7: jb      short loc_1C0046558
 * 00000001C00464E9: and     qword ptr [r11-18h], 0
 * 00000001C00464EE: lea     rdx, [rbp+1Fh+arg_50]
 * 00000001C00464F2: mov     rax, cs:pfnWppTraceMessage
 * 00000001C00464F9: lea     r8, WPP_393df0ddb70a3b662b6ac53bc5b55086_Traceguids
 * 00000001C0046500: mov     rcx, [rcx+18h]
 * 00000001C0046504: mov     r9d, r14d
 * 00000001C0046507: mov     [r11-20h], rdi
 * 00000001C004650B: mov     [r11-28h], rdx
 * 00000001C004650F: lea     rdx, [rbp+1Fh+arg_48]
 * 00000001C0046513: mov     [r11-30h], rdi
 * 00000001C0046517: mov     [r11-38h], rdx
 * 00000001C004651B: lea     rdx, [rbp+1Fh+arg_40]
 * 00000001C004651F: mov     [r11-40h], rdi
 * 00000001C0046523: mov     [r11-48h], rdx
 * 00000001C0046527: lea     rdx, [rbp+1Fh+arg_38]
 * 00000001C004652B: mov     qword ptr [r11-50h], 8
 * 00000001C0046533: mov     [r11-58h], rdx
 * 00000001C0046537: lea     rdx, [rbp+1Fh+arg_30]
 * 00000001C004653B: mov     [r11-60h], rdi
 * 00000001C004653F: mov     [r11-68h], rdx
 * 00000001C0046543: lea     rdx, [rbp+1Fh+arg_28]
 * 00000001C0046547: mov     [r11-70h], rdi
 * 00000001C004654B: mov     [r11-78h], rdx
 * 00000001C004654F: lea     edx, [rdi+27h]
 * 00000001C0046552: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0046558: and     qword ptr [rsp+90h+var_8], 0
 * 00000001C0046561: lea     rax, [rbp+1Fh+arg_50]
 * 00000001C0046565: mov     [rsp+90h+var_10], rdi
 * 00000001C004656D: lea     r9, WPP_393df0ddb70a3b662b6ac53bc5b55086_Traceguids
 * 00000001C0046574: mov     [rsp+90h+var_18], rax
 * 00000001C0046579: mov     edx, 5
 * 00000001C004657E: mov     [rsp+90h+var_20], rdi
 * 00000001C0046583: lea     rax, [rbp+1Fh+arg_48]
 * 00000001C0046587: mov     [rsp+90h+var_28], rax
 * 00000001C004658C: mov     rcx, rbx
 * 00000001C004658F: mov     [rsp+90h+var_30], rdi
 * 00000001C0046594: lea     rax, [rbp+1Fh+arg_40]
 * 00000001C0046598: mov     [rsp+90h+var_38], rax
 * 00000001C004659D: lea     r8d, [rdx+9]
 * 00000001C00465A1: mov     [rsp+90h+var_40], 8
 * 00000001C00465AA: lea     rax, [rbp+1Fh+arg_38]
 * 00000001C00465AE: mov     [rsp+90h+var_48], rax
 * 00000001C00465B3: lea     rax, [rbp+1Fh+arg_30]
 * 00000001C00465B7: mov     [rsp+90h+var_50], rdi
 * 00000001C00465BC: mov     [rsp+90h+var_58], rax
 * 00000001C00465C1: lea     rax, [rbp+1Fh+arg_28]
 * 00000001C00465C5: mov     [rsp+90h+var_60], rdi
 * 00000001C00465CA: mov     [rsp+90h+var_68], rax
 * 00000001C00465CF: mov     word ptr [rsp+90h+var_70], r14w
 * 00000001C00465D5: call    cs:__imp_WppAutoLogTrace
 * 00000001C00465DC: nop     dword ptr [rax+rax+00h]
 * 00000001C00465E1: lea     r11, [rsp+90h+var_s0]
 * 00000001C00465E9: mov     rbx, [r11+10h]
 * 00000001C00465ED: mov     rdi, [r11+18h]
 * 00000001C00465F1: mov     r14, [r11+20h]
 * 00000001C00465F5: mov     rsp, r11
 * 00000001C00465F8: pop     rbp
 * 00000001C00465F9: retn
 */
