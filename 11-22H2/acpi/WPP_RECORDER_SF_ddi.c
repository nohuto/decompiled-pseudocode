/*
 * XREFs of WPP_RECORDER_SF_ddi @ 0x1C003B864
 * Callers:
 *     ACPIRangeValidatePciMemoryResource @ 0x1C003B10C (ACPIRangeValidatePciMemoryResource.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0001DE0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_ddi @ 0x1C003B864
 * Reason: Hex-Rays returned no pseudocode for 0x1C003B864
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C003B864: mov     r11, rsp
 * 00000001C003B867: mov     [r11+8], rbx
 * 00000001C003B86B: mov     [r11+10h], rbp
 * 00000001C003B86F: push    rdi
 * 00000001C003B870: sub     rsp, 60h
 * 00000001C003B874: mov     rbx, rcx
 * 00000001C003B877: mov     ebp, 0Ah
 * 00000001C003B87C: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C003B883: lea     edi, [rbp-6]
 * 00000001C003B886: test    dword ptr [rcx+2Ch], 1000h
 * 00000001C003B88D: jz      short loc_1C003B8E0
 * 00000001C003B88F: cmp     byte ptr [rcx+29h], 2
 * 00000001C003B893: jb      short loc_1C003B8E0
 * 00000001C003B895: and     qword ptr [r11-18h], 0
 * 00000001C003B89A: lea     rdx, [r11+40h]
 * 00000001C003B89E: mov     rax, cs:pfnWppTraceMessage
 * 00000001C003B8A5: lea     r8, WPP_1fd0c010928a3334a25fba642ba00601_Traceguids
 * 00000001C003B8AC: mov     rcx, [rcx+18h]
 * 00000001C003B8B0: mov     r9d, ebp
 * 00000001C003B8B3: mov     qword ptr [r11-20h], 8
 * 00000001C003B8BB: mov     [r11-28h], rdx
 * 00000001C003B8BF: lea     rdx, [r11+38h]
 * 00000001C003B8C3: mov     [r11-30h], rdi
 * 00000001C003B8C7: mov     [r11-38h], rdx
 * 00000001C003B8CB: lea     rdx, [r11+30h]
 * 00000001C003B8CF: mov     [r11-40h], rdi
 * 00000001C003B8D3: mov     [r11-48h], rdx
 * 00000001C003B8D7: lea     edx, [rbp+21h]
 * 00000001C003B8DA: call    cs:__guard_dispatch_icall_fptr
 * 00000001C003B8E0: and     [rsp+68h+var_10], 0
 * 00000001C003B8E6: lea     rax, [rsp+68h+arg_38]
 * 00000001C003B8EE: mov     [rsp+68h+var_18], 8
 * 00000001C003B8F7: lea     r9, WPP_1fd0c010928a3334a25fba642ba00601_Traceguids
 * 00000001C003B8FE: mov     [rsp+68h+var_20], rax
 * 00000001C003B903: mov     edx, 2
 * 00000001C003B908: mov     [rsp+68h+var_28], rdi
 * 00000001C003B90D: lea     rax, [rsp+68h+arg_30]
 * 00000001C003B915: mov     [rsp+68h+var_30], rax
 * 00000001C003B91A: mov     rcx, rbx
 * 00000001C003B91D: lea     rax, [rsp+68h+arg_28]
 * 00000001C003B925: mov     [rsp+68h+var_38], rdi
 * 00000001C003B92A: mov     [rsp+68h+var_40], rax
 * 00000001C003B92F: lea     r8d, [rdx+0Bh]
 * 00000001C003B933: mov     [rsp+68h+var_48], bp
 * 00000001C003B938: call    cs:__imp_WppAutoLogTrace
 * 00000001C003B93F: nop     dword ptr [rax+rax+00h]
 * 00000001C003B944: mov     rbx, [rsp+68h+arg_0]
 * 00000001C003B949: mov     rbp, [rsp+68h+arg_8]
 * 00000001C003B94E: add     rsp, 60h
 * 00000001C003B952: pop     rdi
 * 00000001C003B953: retn
 */
