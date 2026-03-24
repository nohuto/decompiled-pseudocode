/*
 * XREFs of WPP_RECORDER_SF_qq @ 0x1C00249A0
 * Callers:
 *     ACPIDispatchIrp @ 0x1C0001010 (ACPIDispatchIrp.c)
 *     ACPIDispatchAddDevice @ 0x1C0023F50 (ACPIDispatchAddDevice.c)
 *     ACPIReleaseGlobalLock @ 0x1C003939C (ACPIReleaseGlobalLock.c)
 *     ACPIStartNextGlobalLockRequest @ 0x1C0039524 (ACPIStartNextGlobalLockRequest.c)
 *     InternalRawAccessOpRegionHandler @ 0x1C0039CE0 (InternalRawAccessOpRegionHandler.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0001DE0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qq @ 0x1C00249A0
 * Reason: Hex-Rays returned no pseudocode for 0x1C00249A0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00249A0: mov     [rsp+arg_0], rbx
 * 00000001C00249A5: mov     [rsp+arg_8], rbp
 * 00000001C00249AA: mov     [rsp+arg_10], rsi
 * 00000001C00249AF: push    rdi
 * 00000001C00249B0: push    r14
 * 00000001C00249B2: push    r15
 * 00000001C00249B4: sub     rsp, 50h
 * 00000001C00249B8: mov     r14d, r8d
 * 00000001C00249BB: mov     r15, rcx
 * 00000001C00249BE: mov     edi, r8d
 * 00000001C00249C1: shr     rdi, 10h
 * 00000001C00249C5: movzx   esi, dl
 * 00000001C00249C8: lea     ebx, [r14-1]
 * 00000001C00249CC: movzx   ebp, r9w
 * 00000001C00249D0: mov     r10d, ebx
 * 00000001C00249D3: and     ebx, 1Fh
 * 00000001C00249D6: shr     r10, 5
 * 00000001C00249DA: lea     rax, [rdi+rdi*4]
 * 00000001C00249DE: and     r10d, 7FFh
 * 00000001C00249E5: mov     edx, ebx
 * 00000001C00249E7: mov     ebx, 8
 * 00000001C00249EC: lea     r11, [r10+rax*4]
 * 00000001C00249F0: mov     r10, cs:WPP_GLOBAL_Control
 * 00000001C00249F7: mov     eax, [r10+r11*4+2Ch]
 * 00000001C00249FC: bt      eax, edx
 * 00000001C00249FF: jnb     short loc_1C0024A59
 * 00000001C0024A01: lea     rcx, [rdi+rdi*4]
 * 00000001C0024A05: add     rcx, rcx
 * 00000001C0024A08: cmp     [r10+rcx*8+29h], sil
 * 00000001C0024A0D: jb      short loc_1C0024A59
 * 00000001C0024A0F: and     [rsp+68h+var_28], 0
 * 00000001C0024A15: lea     rdx, [rsp+68h+arg_30]
 * 00000001C0024A1D: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0024A24: mov     r9d, ebp
 * 00000001C0024A27: mov     r8, [rsp+68h+arg_20]
 * 00000001C0024A2F: mov     rcx, [r10+rcx*8+18h]
 * 00000001C0024A34: mov     [rsp+68h+var_30], rbx
 * 00000001C0024A39: mov     [rsp+68h+var_38], rdx
 * 00000001C0024A3E: lea     rdx, [rsp+68h+arg_28]
 * 00000001C0024A46: mov     [rsp+68h+var_40], rbx
 * 00000001C0024A4B: mov     [rsp+68h+var_48], rdx
 * 00000001C0024A50: lea     edx, [rbx+23h]
 * 00000001C0024A53: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0024A59: and     [rsp+68h+var_20], 0
 * 00000001C0024A5F: lea     rax, [rsp+68h+arg_30]
 * 00000001C0024A67: mov     r9, [rsp+68h+arg_20]
 * 00000001C0024A6F: mov     r8d, r14d
 * 00000001C0024A72: mov     [rsp+68h+var_28], rbx
 * 00000001C0024A77: mov     edx, esi
 * 00000001C0024A79: mov     [rsp+68h+var_30], rax
 * 00000001C0024A7E: mov     rcx, r15
 * 00000001C0024A81: lea     rax, [rsp+68h+arg_28]
 * 00000001C0024A89: mov     [rsp+68h+var_38], rbx
 * 00000001C0024A8E: mov     [rsp+68h+var_40], rax
 * 00000001C0024A93: mov     word ptr [rsp+68h+var_48], bp
 * 00000001C0024A98: call    cs:__imp_WppAutoLogTrace
 * 00000001C0024A9F: nop     dword ptr [rax+rax+00h]
 * 00000001C0024AA4: lea     r11, [rsp+68h+var_18]
 * 00000001C0024AA9: mov     rbx, [r11+20h]
 * 00000001C0024AAD: mov     rbp, [r11+28h]
 * 00000001C0024AB1: mov     rsi, [r11+30h]
 * 00000001C0024AB5: mov     rsp, r11
 * 00000001C0024AB8: pop     r15
 * 00000001C0024ABA: pop     r14
 * 00000001C0024ABC: pop     rdi
 * 00000001C0024ABD: retn
 */
