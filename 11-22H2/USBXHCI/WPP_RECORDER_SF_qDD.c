/*
 * XREFs of WPP_RECORDER_SF_qdd @ 0x1C001E530
 * Callers:
 *     XilCoreCommonBuffer_AllocateBuffers @ 0x1C0007A54 (XilCoreCommonBuffer_AllocateBuffers.c)
 *     Interrupter_DeferredWorkProcessor @ 0x1C0008C10 (Interrupter_DeferredWorkProcessor.c)
 *     XilCoreCommonBuffer_AcquireBuffersWithSegmenter @ 0x1C000B5D4 (XilCoreCommonBuffer_AcquireBuffersWithSegmenter.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0020270 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qdd @ 0x1C001E530
 * Reason: Hex-Rays returned no pseudocode for 0x1C001E530
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C001E530: mov     [rsp+arg_0], rbx
 * 00000001C001E535: mov     [rsp+arg_8], rbp
 * 00000001C001E53A: mov     [rsp+arg_10], rsi
 * 00000001C001E53F: push    rdi
 * 00000001C001E540: push    r14
 * 00000001C001E542: push    r15
 * 00000001C001E544: sub     rsp, 60h
 * 00000001C001E548: mov     r14d, r8d
 * 00000001C001E54B: mov     r15, rcx
 * 00000001C001E54E: mov     edi, r8d
 * 00000001C001E551: shr     rdi, 10h
 * 00000001C001E555: movzx   esi, dl
 * 00000001C001E558: lea     ebx, [r14-1]
 * 00000001C001E55C: movzx   ebp, r9w
 * 00000001C001E560: mov     r10d, ebx
 * 00000001C001E563: and     ebx, 1Fh
 * 00000001C001E566: shr     r10, 5
 * 00000001C001E56A: lea     rax, [rdi+rdi*4]
 * 00000001C001E56E: and     r10d, 7FFh
 * 00000001C001E575: mov     edx, ebx
 * 00000001C001E577: mov     ebx, 4
 * 00000001C001E57C: lea     r11, [r10+rax*4]
 * 00000001C001E580: mov     r10, cs:WPP_GLOBAL_Control
 * 00000001C001E587: mov     eax, [r10+r11*4+2Ch]
 * 00000001C001E58C: bt      eax, edx
 * 00000001C001E58F: jb      loc_1C002F358
 * 00000001C001E595: and     [rsp+78h+var_20], 0
 * 00000001C001E59B: lea     rax, [rsp+78h+arg_38]
 * 00000001C001E5A3: mov     r9, [rsp+78h+arg_20]
 * 00000001C001E5AB: mov     r8d, r14d
 * 00000001C001E5AE: mov     [rsp+78h+var_28], rbx
 * 00000001C001E5B3: mov     edx, esi
 * 00000001C001E5B5: mov     [rsp+78h+var_30], rax
 * 00000001C001E5BA: mov     rcx, r15
 * 00000001C001E5BD: mov     [rsp+78h+var_38], rbx
 * 00000001C001E5C2: lea     rax, [rsp+78h+arg_30]
 * 00000001C001E5CA: mov     [rsp+78h+var_40], rax
 * 00000001C001E5CF: lea     rax, [rsp+78h+arg_28]
 * 00000001C001E5D7: mov     [rsp+78h+var_48], 8
 * 00000001C001E5E0: mov     [rsp+78h+var_50], rax
 * 00000001C001E5E5: mov     word ptr [rsp+78h+var_58], bp
 * 00000001C001E5EA: call    cs:__imp_WppAutoLogTrace
 * 00000001C001E5F1: nop     dword ptr [rax+rax+00h]
 * 00000001C001E5F6: lea     r11, [rsp+78h+var_18]
 * 00000001C001E5FB: mov     rbx, [r11+20h]
 * 00000001C001E5FF: mov     rbp, [r11+28h]
 * 00000001C001E603: mov     rsi, [r11+30h]
 * 00000001C001E607: mov     rsp, r11
 * 00000001C001E60A: pop     r15
 * 00000001C001E60C: pop     r14
 * 00000001C001E60E: pop     rdi
 * 00000001C001E60F: retn
 * 00000001C002F358: lea     rcx, [rdi+rdi*4]
 * 00000001C002F35C: add     rcx, rcx
 * 00000001C002F35F: cmp     [r10+rcx*8+29h], sil
 * 00000001C002F364: jb      loc_1C001E595
 * 00000001C002F36A: and     [rsp+78h+var_28], 0
 * 00000001C002F370: lea     rdx, [rsp+78h+arg_38]
 * 00000001C002F378: mov     rax, cs:pfnWppTraceMessage
 * 00000001C002F37F: mov     r9d, ebp
 * 00000001C002F382: mov     r8, [rsp+78h+arg_20]
 * 00000001C002F38A: mov     rcx, [r10+rcx*8+18h]
 * 00000001C002F38F: mov     [rsp+78h+var_30], rbx
 * 00000001C002F394: mov     [rsp+78h+var_38], rdx
 * 00000001C002F399: lea     rdx, [rsp+78h+arg_30]
 * 00000001C002F3A1: mov     [rsp+78h+var_40], rbx
 * 00000001C002F3A6: mov     [rsp+78h+var_48], rdx
 * 00000001C002F3AB: lea     rdx, [rsp+78h+arg_28]
 * 00000001C002F3B3: mov     [rsp+78h+var_50], 8
 * 00000001C002F3BC: mov     [rsp+78h+var_58], rdx
 * 00000001C002F3C1: mov     edx, 2Bh ; '+'
 * 00000001C002F3C6: call    cs:__guard_dispatch_icall_fptr
 * 00000001C002F3CC: nop
 * 00000001C002F3CD: jmp     loc_1C001E595
 */
