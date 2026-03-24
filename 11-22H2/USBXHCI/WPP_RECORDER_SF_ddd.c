/*
 * XREFs of WPP_RECORDER_SF_dDd @ 0x1C0040D30
 * Callers:
 *     RootHub_DetectAndAcknowledgePortResume @ 0x1C0015680 (RootHub_DetectAndAcknowledgePortResume.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0020270 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_dDd @ 0x1C0040D30
 * Reason: Hex-Rays returned no pseudocode for 0x1C0040D30
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0040D30: mov     r11, rsp
 * 00000001C0040D33: mov     [r11+8], rbx
 * 00000001C0040D37: mov     [r11+10h], rsi
 * 00000001C0040D3B: push    rdi
 * 00000001C0040D3C: sub     rsp, 60h
 * 00000001C0040D40: mov     rbx, rcx
 * 00000001C0040D43: mov     esi, 0CEh
 * 00000001C0040D48: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0040D4F: mov     edi, 4
 * 00000001C0040D54: test    dword ptr [rcx+2Ch], 400h
 * 00000001C0040D5B: jz      short loc_1C0040DAA
 * 00000001C0040D5D: cmp     byte ptr [rcx+29h], 3
 * 00000001C0040D61: jb      short loc_1C0040DAA
 * 00000001C0040D63: and     qword ptr [r11-18h], 0
 * 00000001C0040D68: lea     rdx, [r11+40h]
 * 00000001C0040D6C: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0040D73: lea     r8, WPP_60a997f3b28234a4d1c27687c5bd6445_Traceguids
 * 00000001C0040D7A: mov     rcx, [rcx+18h]
 * 00000001C0040D7E: mov     r9d, esi
 * 00000001C0040D81: mov     [r11-20h], rdi
 * 00000001C0040D85: mov     [r11-28h], rdx
 * 00000001C0040D89: lea     rdx, [r11+38h]
 * 00000001C0040D8D: mov     [r11-30h], rdi
 * 00000001C0040D91: mov     [r11-38h], rdx
 * 00000001C0040D95: lea     rdx, [r11+30h]
 * 00000001C0040D99: mov     [r11-40h], rdi
 * 00000001C0040D9D: mov     [r11-48h], rdx
 * 00000001C0040DA1: lea     edx, [rdi+27h]
 * 00000001C0040DA4: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0040DAA: and     [rsp+68h+var_10], 0
 * 00000001C0040DB0: lea     rax, [rsp+68h+arg_38]
 * 00000001C0040DB8: mov     [rsp+68h+var_18], rdi
 * 00000001C0040DBD: lea     r9, WPP_60a997f3b28234a4d1c27687c5bd6445_Traceguids
 * 00000001C0040DC4: mov     [rsp+68h+var_20], rax
 * 00000001C0040DC9: mov     edx, 3
 * 00000001C0040DCE: mov     [rsp+68h+var_28], rdi
 * 00000001C0040DD3: lea     rax, [rsp+68h+arg_30]
 * 00000001C0040DDB: mov     [rsp+68h+var_30], rax
 * 00000001C0040DE0: mov     rcx, rbx
 * 00000001C0040DE3: lea     rax, [rsp+68h+arg_28]
 * 00000001C0040DEB: mov     [rsp+68h+var_38], rdi
 * 00000001C0040DF0: mov     [rsp+68h+var_40], rax
 * 00000001C0040DF5: lea     r8d, [rdx+8]
 * 00000001C0040DF9: mov     [rsp+68h+var_48], si
 * 00000001C0040DFE: call    cs:__imp_WppAutoLogTrace
 * 00000001C0040E05: nop     dword ptr [rax+rax+00h]
 * 00000001C0040E0A: mov     rbx, [rsp+68h+arg_0]
 * 00000001C0040E0F: mov     rsi, [rsp+68h+arg_8]
 * 00000001C0040E14: add     rsp, 60h
 * 00000001C0040E18: pop     rdi
 * 00000001C0040E19: retn
 */
