/*
 * XREFs of WPP_RECORDER_SF_qdd @ 0x1C001E4E0
 * Callers:
 *     XilCoreCommonBuffer_AllocateBuffers @ 0x1C0007A24 (XilCoreCommonBuffer_AllocateBuffers.c)
 *     Interrupter_DeferredWorkProcessor @ 0x1C0008BE0 (Interrupter_DeferredWorkProcessor.c)
 *     XilCoreCommonBuffer_AcquireBuffersWithSegmenter @ 0x1C000B5A4 (XilCoreCommonBuffer_AcquireBuffersWithSegmenter.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00203A0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qdd @ 0x1C001E4E0
 * Reason: Hex-Rays returned no pseudocode for 0x1C001E4E0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C001E4E0: mov     [rsp+arg_0], rbx
 * 00000001C001E4E5: mov     [rsp+arg_8], rbp
 * 00000001C001E4EA: mov     [rsp+arg_10], rsi
 * 00000001C001E4EF: push    rdi
 * 00000001C001E4F0: push    r14
 * 00000001C001E4F2: push    r15
 * 00000001C001E4F4: sub     rsp, 60h
 * 00000001C001E4F8: mov     r14d, r8d
 * 00000001C001E4FB: mov     r15, rcx
 * 00000001C001E4FE: mov     edi, r8d
 * 00000001C001E501: shr     rdi, 10h
 * 00000001C001E505: movzx   esi, dl
 * 00000001C001E508: lea     ebx, [r14-1]
 * 00000001C001E50C: movzx   ebp, r9w
 * 00000001C001E510: mov     r10d, ebx
 * 00000001C001E513: and     ebx, 1Fh
 * 00000001C001E516: shr     r10, 5
 * 00000001C001E51A: lea     rax, [rdi+rdi*4]
 * 00000001C001E51E: and     r10d, 7FFh
 * 00000001C001E525: mov     edx, ebx
 * 00000001C001E527: mov     ebx, 4
 * 00000001C001E52C: lea     r11, [r10+rax*4]
 * 00000001C001E530: mov     r10, cs:WPP_GLOBAL_Control
 * 00000001C001E537: mov     eax, [r10+r11*4+2Ch]
 * 00000001C001E53C: bt      eax, edx
 * 00000001C001E53F: jb      loc_1C002F498
 * 00000001C001E545: and     [rsp+78h+var_20], 0
 * 00000001C001E54B: lea     rax, [rsp+78h+arg_38]
 * 00000001C001E553: mov     r9, [rsp+78h+arg_20]
 * 00000001C001E55B: mov     r8d, r14d
 * 00000001C001E55E: mov     [rsp+78h+var_28], rbx
 * 00000001C001E563: mov     edx, esi
 * 00000001C001E565: mov     [rsp+78h+var_30], rax
 * 00000001C001E56A: mov     rcx, r15
 * 00000001C001E56D: mov     [rsp+78h+var_38], rbx
 * 00000001C001E572: lea     rax, [rsp+78h+arg_30]
 * 00000001C001E57A: mov     [rsp+78h+var_40], rax
 * 00000001C001E57F: lea     rax, [rsp+78h+arg_28]
 * 00000001C001E587: mov     [rsp+78h+var_48], 8
 * 00000001C001E590: mov     [rsp+78h+var_50], rax
 * 00000001C001E595: mov     word ptr [rsp+78h+var_58], bp
 * 00000001C001E59A: call    cs:__imp_WppAutoLogTrace
 * 00000001C001E5A1: nop     dword ptr [rax+rax+00h]
 * 00000001C001E5A6: lea     r11, [rsp+78h+var_18]
 * 00000001C001E5AB: mov     rbx, [r11+20h]
 * 00000001C001E5AF: mov     rbp, [r11+28h]
 * 00000001C001E5B3: mov     rsi, [r11+30h]
 * 00000001C001E5B7: mov     rsp, r11
 * 00000001C001E5BA: pop     r15
 * 00000001C001E5BC: pop     r14
 * 00000001C001E5BE: pop     rdi
 * 00000001C001E5BF: retn
 * 00000001C002F498: lea     rcx, [rdi+rdi*4]
 * 00000001C002F49C: add     rcx, rcx
 * 00000001C002F49F: cmp     [r10+rcx*8+29h], sil
 * 00000001C002F4A4: jb      loc_1C001E545
 * 00000001C002F4AA: and     [rsp+78h+var_28], 0
 * 00000001C002F4B0: lea     rdx, [rsp+78h+arg_38]
 * 00000001C002F4B8: mov     rax, cs:pfnWppTraceMessage
 * 00000001C002F4BF: mov     r9d, ebp
 * 00000001C002F4C2: mov     r8, [rsp+78h+arg_20]
 * 00000001C002F4CA: mov     rcx, [r10+rcx*8+18h]
 * 00000001C002F4CF: mov     [rsp+78h+var_30], rbx
 * 00000001C002F4D4: mov     [rsp+78h+var_38], rdx
 * 00000001C002F4D9: lea     rdx, [rsp+78h+arg_30]
 * 00000001C002F4E1: mov     [rsp+78h+var_40], rbx
 * 00000001C002F4E6: mov     [rsp+78h+var_48], rdx
 * 00000001C002F4EB: lea     rdx, [rsp+78h+arg_28]
 * 00000001C002F4F3: mov     [rsp+78h+var_50], 8
 * 00000001C002F4FC: mov     [rsp+78h+var_58], rdx
 * 00000001C002F501: mov     edx, 2Bh ; '+'
 * 00000001C002F506: call    cs:__guard_dispatch_icall_fptr
 * 00000001C002F50C: nop
 * 00000001C002F50D: jmp     loc_1C001E545
 */
