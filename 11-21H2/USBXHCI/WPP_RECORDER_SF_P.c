/*
 * XREFs of WPP_RECORDER_SF_P @ 0x1C00359B4
 * Callers:
 *     Controller_AllocateIrqlTrackingArray @ 0x1C0018D38 (Controller_AllocateIrqlTrackingArray.c)
 *     Controller_ExecuteDSMToSendPORTSCValues @ 0x1C00319B4 (Controller_ExecuteDSMToSendPORTSCValues.c)
 *     Controller_RetrieveUrsData @ 0x1C00764E8 (Controller_RetrieveUrsData.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00199B0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_P @ 0x1C00359B4
 * Reason: Hex-Rays returned no pseudocode for 0x1C00359B4
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00359B4: mov     r11, rsp
 * 00000001C00359B7: mov     [r11+8], rbx
 * 00000001C00359BB: push    rdi
 * 00000001C00359BC: sub     rsp, 40h
 * 00000001C00359C0: mov     rdi, rcx
 * 00000001C00359C3: movzx   ebx, r9w
 * 00000001C00359C7: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C00359CE: mov     eax, [rcx+2Ch]
 * 00000001C00359D1: test    al, 8
 * 00000001C00359D3: jz      short loc_1C0035A10
 * 00000001C00359D5: cmp     byte ptr [rcx+29h], 2
 * 00000001C00359D9: jb      short loc_1C0035A10
 * 00000001C00359DB: and     qword ptr [r11-18h], 0
 * 00000001C00359E0: lea     rdx, [r11+30h]
 * 00000001C00359E4: mov     rax, cs:pfnWppTraceMessage
 * 00000001C00359EB: lea     r8, WPP_ff2e52b0a40430e0f7756a6ff2f45ac0_Traceguids
 * 00000001C00359F2: mov     rcx, [rcx+18h]
 * 00000001C00359F6: mov     r9d, ebx
 * 00000001C00359F9: mov     qword ptr [r11-20h], 8
 * 00000001C0035A01: mov     [r11-28h], rdx
 * 00000001C0035A05: mov     edx, 2Bh ; '+'
 * 00000001C0035A0A: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0035A10: and     [rsp+48h+var_10], 0
 * 00000001C0035A16: lea     rax, [rsp+48h+arg_28]
 * 00000001C0035A1B: mov     edx, 2
 * 00000001C0035A20: mov     [rsp+48h+var_18], 8
 * 00000001C0035A29: mov     [rsp+48h+var_20], rax
 * 00000001C0035A2E: lea     r9, WPP_ff2e52b0a40430e0f7756a6ff2f45ac0_Traceguids
 * 00000001C0035A35: mov     rcx, rdi
 * 00000001C0035A38: mov     [rsp+48h+var_28], bx
 * 00000001C0035A3D: lea     r8d, [rdx+2]
 * 00000001C0035A41: call    cs:__imp_WppAutoLogTrace
 * 00000001C0035A48: nop     dword ptr [rax+rax+00h]
 * 00000001C0035A4D: mov     rbx, [rsp+48h+arg_0]
 * 00000001C0035A52: add     rsp, 40h
 * 00000001C0035A56: pop     rdi
 * 00000001C0035A57: retn
 */
