/*
 * XREFs of WPP_RECORDER_SF_Ld @ 0x1C00528BC
 * Callers:
 *     SecureChannel_SendRequestSynchronously @ 0x1C00524B0 (SecureChannel_SendRequestSynchronously.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00203A0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_Ld @ 0x1C00528BC
 * Reason: Hex-Rays returned no pseudocode for 0x1C00528BC
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00528BC: mov     r11, rsp
 * 00000001C00528BF: mov     [r11+8], rbx
 * 00000001C00528C3: mov     [r11+10h], rsi
 * 00000001C00528C7: push    rdi
 * 00000001C00528C8: sub     rsp, 50h
 * 00000001C00528CC: mov     rbx, rcx
 * 00000001C00528CF: mov     esi, 10h
 * 00000001C00528D4: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C00528DB: lea     edi, [rsi-0Ch]
 * 00000001C00528DE: test    dword ptr [rcx+2Ch], 40000h
 * 00000001C00528E5: jz      short loc_1C0052928
 * 00000001C00528E7: cmp     byte ptr [rcx+29h], 2
 * 00000001C00528EB: jb      short loc_1C0052928
 * 00000001C00528ED: and     qword ptr [r11-18h], 0
 * 00000001C00528F2: lea     rdx, [r11+38h]
 * 00000001C00528F6: mov     rax, cs:pfnWppTraceMessage
 * 00000001C00528FD: lea     r8, WPP_6c69e57299f2371bca16af19cce5473c_Traceguids
 * 00000001C0052904: mov     rcx, [rcx+18h]
 * 00000001C0052908: mov     r9d, esi
 * 00000001C005290B: mov     [r11-20h], rdi
 * 00000001C005290F: mov     [r11-28h], rdx
 * 00000001C0052913: lea     rdx, [r11+30h]
 * 00000001C0052917: mov     [r11-30h], rdi
 * 00000001C005291B: mov     [r11-38h], rdx
 * 00000001C005291F: lea     edx, [rsi+1Bh]
 * 00000001C0052922: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0052928: and     [rsp+58h+var_10], 0
 * 00000001C005292E: lea     rax, [rsp+58h+arg_30]
 * 00000001C0052936: mov     [rsp+58h+var_18], rdi
 * 00000001C005293B: lea     r9, WPP_6c69e57299f2371bca16af19cce5473c_Traceguids
 * 00000001C0052942: mov     [rsp+58h+var_20], rax
 * 00000001C0052947: mov     edx, 2
 * 00000001C005294C: lea     rax, [rsp+58h+arg_28]
 * 00000001C0052954: mov     [rsp+58h+var_28], rdi
 * 00000001C0052959: mov     [rsp+58h+var_30], rax
 * 00000001C005295E: mov     rcx, rbx
 * 00000001C0052961: mov     [rsp+58h+var_38], si
 * 00000001C0052966: lea     r8d, [rdx+11h]
 * 00000001C005296A: call    cs:__imp_WppAutoLogTrace
 * 00000001C0052971: nop     dword ptr [rax+rax+00h]
 * 00000001C0052976: mov     rbx, [rsp+58h+arg_0]
 * 00000001C005297B: mov     rsi, [rsp+58h+arg_8]
 * 00000001C0052980: add     rsp, 50h
 * 00000001C0052984: pop     rdi
 * 00000001C0052985: retn
 */
