/*
 * XREFs of WPP_RECORDER_SF_ii @ 0x1C005EB50
 * Callers:
 *     IrqArbGetNextAllocationRange @ 0x1C009D3C0 (IrqArbGetNextAllocationRange.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0001DE0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_ii @ 0x1C005EB50
 * Reason: Hex-Rays returned no pseudocode for 0x1C005EB50
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C005EB50: mov     r11, rsp
 * 00000001C005EB53: mov     [r11+8], rbx
 * 00000001C005EB57: mov     [r11+10h], rsi
 * 00000001C005EB5B: push    rdi
 * 00000001C005EB5C: sub     rsp, 50h
 * 00000001C005EB60: mov     rbx, rcx
 * 00000001C005EB63: mov     esi, 0Ch
 * 00000001C005EB68: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C005EB6F: lea     edi, [rsi-4]
 * 00000001C005EB72: test    dword ptr [rcx+2Ch], 80000h
 * 00000001C005EB79: jz      short loc_1C005EBBC
 * 00000001C005EB7B: cmp     byte ptr [rcx+29h], 4
 * 00000001C005EB7F: jb      short loc_1C005EBBC
 * 00000001C005EB81: and     qword ptr [r11-18h], 0
 * 00000001C005EB86: lea     rdx, [r11+38h]
 * 00000001C005EB8A: mov     rax, cs:pfnWppTraceMessage
 * 00000001C005EB91: lea     r8, WPP_939ab7ce094a3f0c5044c61116540ed5_Traceguids
 * 00000001C005EB98: mov     rcx, [rcx+18h]
 * 00000001C005EB9C: mov     r9d, esi
 * 00000001C005EB9F: mov     [r11-20h], rdi
 * 00000001C005EBA3: mov     [r11-28h], rdx
 * 00000001C005EBA7: lea     rdx, [r11+30h]
 * 00000001C005EBAB: mov     [r11-30h], rdi
 * 00000001C005EBAF: mov     [r11-38h], rdx
 * 00000001C005EBB3: lea     edx, [rsi+1Fh]
 * 00000001C005EBB6: call    cs:__guard_dispatch_icall_fptr
 * 00000001C005EBBC: and     [rsp+58h+var_10], 0
 * 00000001C005EBC2: lea     rax, [rsp+58h+arg_30]
 * 00000001C005EBCA: mov     [rsp+58h+var_18], rdi
 * 00000001C005EBCF: lea     r9, WPP_939ab7ce094a3f0c5044c61116540ed5_Traceguids
 * 00000001C005EBD6: mov     [rsp+58h+var_20], rax
 * 00000001C005EBDB: mov     edx, 4
 * 00000001C005EBE0: lea     rax, [rsp+58h+arg_28]
 * 00000001C005EBE8: mov     [rsp+58h+var_28], rdi
 * 00000001C005EBED: mov     [rsp+58h+var_30], rax
 * 00000001C005EBF2: mov     rcx, rbx
 * 00000001C005EBF5: mov     [rsp+58h+var_38], si
 * 00000001C005EBFA: lea     r8d, [rdx+10h]
 * 00000001C005EBFE: call    cs:__imp_WppAutoLogTrace
 * 00000001C005EC05: nop     dword ptr [rax+rax+00h]
 * 00000001C005EC0A: mov     rbx, [rsp+58h+arg_0]
 * 00000001C005EC0F: mov     rsi, [rsp+58h+arg_8]
 * 00000001C005EC14: add     rsp, 50h
 * 00000001C005EC18: pop     rdi
 * 00000001C005EC19: retn
 */
