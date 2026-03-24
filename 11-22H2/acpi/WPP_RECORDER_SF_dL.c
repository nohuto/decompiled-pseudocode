/*
 * XREFs of WPP_RECORDER_SF_dL @ 0x1C003C5E4
 * Callers:
 *     PnpBiosResourcesToNtResources @ 0x1C008EFEC (PnpBiosResourcesToNtResources.c)
 *     PnpiGrowResourceList @ 0x1C0091ECC (PnpiGrowResourceList.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0001DE0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_dL @ 0x1C003C5E4
 * Reason: Hex-Rays returned no pseudocode for 0x1C003C5E4
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C003C5E4: mov     [rsp+arg_0], rbx
 * 00000001C003C5E9: mov     [rsp+arg_8], rbp
 * 00000001C003C5EE: mov     [rsp+arg_10], rsi
 * 00000001C003C5F3: push    rdi
 * 00000001C003C5F4: push    r14
 * 00000001C003C5F6: push    r15
 * 00000001C003C5F8: sub     rsp, 50h
 * 00000001C003C5FC: mov     r14d, r8d
 * 00000001C003C5FF: mov     r15, rcx
 * 00000001C003C602: mov     edi, r8d
 * 00000001C003C605: shr     rdi, 10h
 * 00000001C003C609: movzx   esi, dl
 * 00000001C003C60C: lea     ebx, [r14-1]
 * 00000001C003C610: movzx   ebp, r9w
 * 00000001C003C614: mov     r10d, ebx
 * 00000001C003C617: and     ebx, 1Fh
 * 00000001C003C61A: shr     r10, 5
 * 00000001C003C61E: lea     rax, [rdi+rdi*4]
 * 00000001C003C622: and     r10d, 7FFh
 * 00000001C003C629: mov     edx, ebx
 * 00000001C003C62B: mov     ebx, 4
 * 00000001C003C630: lea     r11, [r10+rax*4]
 * 00000001C003C634: mov     r10, cs:WPP_GLOBAL_Control
 * 00000001C003C63B: mov     eax, [r10+r11*4+2Ch]
 * 00000001C003C640: bt      eax, edx
 * 00000001C003C643: jnb     short loc_1C003C69C
 * 00000001C003C645: lea     rcx, [rdi+rdi*4]
 * 00000001C003C649: add     rcx, rcx
 * 00000001C003C64C: cmp     [r10+rcx*8+29h], sil
 * 00000001C003C651: jb      short loc_1C003C69C
 * 00000001C003C653: and     [rsp+68h+var_28], 0
 * 00000001C003C659: lea     rdx, [rsp+68h+arg_30]
 * 00000001C003C661: mov     rax, cs:pfnWppTraceMessage
 * 00000001C003C668: lea     r8, WPP_acc401d4e49f33dc1a5cdf16911e1587_Traceguids
 * 00000001C003C66F: mov     rcx, [r10+rcx*8+18h]
 * 00000001C003C674: mov     r9d, ebp
 * 00000001C003C677: mov     [rsp+68h+var_30], rbx
 * 00000001C003C67C: mov     [rsp+68h+var_38], rdx
 * 00000001C003C681: lea     rdx, [rsp+68h+arg_28]
 * 00000001C003C689: mov     [rsp+68h+var_40], rbx
 * 00000001C003C68E: mov     [rsp+68h+var_48], rdx
 * 00000001C003C693: lea     edx, [rbx+27h]
 * 00000001C003C696: call    cs:__guard_dispatch_icall_fptr
 * 00000001C003C69C: and     [rsp+68h+var_20], 0
 * 00000001C003C6A2: lea     rax, [rsp+68h+arg_30]
 * 00000001C003C6AA: mov     [rsp+68h+var_28], rbx
 * 00000001C003C6AF: lea     r9, WPP_acc401d4e49f33dc1a5cdf16911e1587_Traceguids
 * 00000001C003C6B6: mov     [rsp+68h+var_30], rax
 * 00000001C003C6BB: mov     r8d, r14d
 * 00000001C003C6BE: lea     rax, [rsp+68h+arg_28]
 * 00000001C003C6C6: mov     [rsp+68h+var_38], rbx
 * 00000001C003C6CB: mov     [rsp+68h+var_40], rax
 * 00000001C003C6D0: mov     edx, esi
 * 00000001C003C6D2: mov     rcx, r15
 * 00000001C003C6D5: mov     word ptr [rsp+68h+var_48], bp
 * 00000001C003C6DA: call    cs:__imp_WppAutoLogTrace
 * 00000001C003C6E1: nop     dword ptr [rax+rax+00h]
 * 00000001C003C6E6: lea     r11, [rsp+68h+var_18]
 * 00000001C003C6EB: mov     rbx, [r11+20h]
 * 00000001C003C6EF: mov     rbp, [r11+28h]
 * 00000001C003C6F3: mov     rsi, [r11+30h]
 * 00000001C003C6F7: mov     rsp, r11
 * 00000001C003C6FA: pop     r15
 * 00000001C003C6FC: pop     r14
 * 00000001C003C6FE: pop     rdi
 * 00000001C003C6FF: retn
 */
