/*
 * XREFs of WPP_RECORDER_SF_qqqd @ 0x1C00376F0
 * Callers:
 *     Controller_UcxEvtGetFrameNumberAndQpcForTimeSync @ 0x1C0035520 (Controller_UcxEvtGetFrameNumberAndQpcForTimeSync.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0020270 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qqqd @ 0x1C00376F0
 * Reason: Hex-Rays returned no pseudocode for 0x1C00376F0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00376F0: mov     r11, rsp
 * 00000001C00376F3: mov     [r11+8], rbx
 * 00000001C00376F7: mov     [r11+10h], rbp
 * 00000001C00376FB: push    rdi
 * 00000001C00376FC: sub     rsp, 70h
 * 00000001C0037700: mov     rbx, rcx
 * 00000001C0037703: mov     edi, 8
 * 00000001C0037708: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C003770F: mov     ebp, 138h
 * 00000001C0037714: mov     eax, [rcx+2Ch]
 * 00000001C0037717: test    dil, al
 * 00000001C003771A: jz      short loc_1C0037779
 * 00000001C003771C: cmp     byte ptr [rcx+29h], 5
 * 00000001C0037720: jb      short loc_1C0037779
 * 00000001C0037722: and     qword ptr [r11-18h], 0
 * 00000001C0037727: lea     rdx, [r11+48h]
 * 00000001C003772B: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0037732: lea     r8, WPP_ac07559723993fb37d1c33c002d3118e_Traceguids
 * 00000001C0037739: mov     rcx, [rcx+18h]
 * 00000001C003773D: mov     r9d, ebp
 * 00000001C0037740: mov     qword ptr [r11-20h], 4
 * 00000001C0037748: mov     [r11-28h], rdx
 * 00000001C003774C: lea     rdx, [r11+40h]
 * 00000001C0037750: mov     [r11-30h], rdi
 * 00000001C0037754: mov     [r11-38h], rdx
 * 00000001C0037758: lea     rdx, [r11+38h]
 * 00000001C003775C: mov     [r11-40h], rdi
 * 00000001C0037760: mov     [r11-48h], rdx
 * 00000001C0037764: lea     rdx, [r11+30h]
 * 00000001C0037768: mov     [r11-50h], rdi
 * 00000001C003776C: mov     [r11-58h], rdx
 * 00000001C0037770: lea     edx, [rdi+23h]
 * 00000001C0037773: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0037779: and     [rsp+78h+var_10], 0
 * 00000001C003777F: lea     rax, [rsp+78h+arg_40]
 * 00000001C0037787: mov     [rsp+78h+var_18], 4
 * 00000001C0037790: lea     r9, WPP_ac07559723993fb37d1c33c002d3118e_Traceguids
 * 00000001C0037797: mov     [rsp+78h+var_20], rax
 * 00000001C003779C: mov     edx, 5
 * 00000001C00377A1: mov     [rsp+78h+var_28], rdi
 * 00000001C00377A6: lea     rax, [rsp+78h+arg_38]
 * 00000001C00377AE: mov     [rsp+78h+var_30], rax
 * 00000001C00377B3: mov     rcx, rbx
 * 00000001C00377B6: mov     [rsp+78h+var_38], rdi
 * 00000001C00377BB: lea     rax, [rsp+78h+arg_30]
 * 00000001C00377C3: mov     [rsp+78h+var_40], rax
 * 00000001C00377C8: lea     r8d, [rdx-1]
 * 00000001C00377CC: lea     rax, [rsp+78h+arg_28]
 * 00000001C00377D4: mov     [rsp+78h+var_48], rdi
 * 00000001C00377D9: mov     [rsp+78h+var_50], rax
 * 00000001C00377DE: mov     [rsp+78h+var_58], bp
 * 00000001C00377E3: call    cs:__imp_WppAutoLogTrace
 * 00000001C00377EA: nop     dword ptr [rax+rax+00h]
 * 00000001C00377EF: lea     r11, [rsp+78h+var_8]
 * 00000001C00377F4: mov     rbx, [r11+10h]
 * 00000001C00377F8: mov     rbp, [r11+18h]
 * 00000001C00377FC: mov     rsp, r11
 * 00000001C00377FF: pop     rdi
 * 00000001C0037800: retn
 */
