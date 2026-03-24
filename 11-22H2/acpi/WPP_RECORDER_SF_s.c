/*
 * XREFs of WPP_RECORDER_SF_s @ 0x1C000AEC4
 * Callers:
 *     ACPIVerifyAndCopyFirmwareDependencies @ 0x1C00146C0 (ACPIVerifyAndCopyFirmwareDependencies.c)
 *     LinkNodeCrackPrt @ 0x1C005CEBC (LinkNodeCrackPrt.c)
 *     ACPIRegGetTableFromSimulatorRegistryEntry @ 0x1C008D16C (ACPIRegGetTableFromSimulatorRegistryEntry.c)
 *     ACPIRegReadAMLRegistryEntry @ 0x1C008D3EC (ACPIRegReadAMLRegistryEntry.c)
 *     NotifyHalWithMachineStatesAndRetrieveInterruptModel @ 0x1C00A7C0C (NotifyHalWithMachineStatesAndRetrieveInterruptModel.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0001DE0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_s @ 0x1C000AEC4
 * Reason: Hex-Rays returned no pseudocode for 0x1C000AEC4
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C000AEC4: mov     rax, rsp
 * 00000001C000AEC7: mov     [rax+8], rbx
 * 00000001C000AECB: mov     [rax+10h], rbp
 * 00000001C000AECF: mov     [rax+18h], rsi
 * 00000001C000AED3: mov     [rax+20h], rdi
 * 00000001C000AED7: push    r12
 * 00000001C000AED9: push    r14
 * 00000001C000AEDB: push    r15
 * 00000001C000AEDD: sub     rsp, 40h
 * 00000001C000AEE1: mov     rbx, [rsp+58h+arg_28]
 * 00000001C000AEE9: mov     r12, rcx
 * 00000001C000AEEC: mov     r15d, r8d
 * 00000001C000AEEF: or      rdi, 0FFFFFFFFFFFFFFFFh
 * 00000001C000AEF3: mov     esi, r8d
 * 00000001C000AEF6: shr     rsi, 10h
 * 00000001C000AEFA: movzx   r14d, r9w
 * 00000001C000AEFE: lea     r11d, [r15-1]
 * 00000001C000AF02: movzx   ebp, dl
 * 00000001C000AF05: mov     r10d, r11d
 * 00000001C000AF08: and     r11d, 1Fh
 * 00000001C000AF0C: shr     r10, 5
 * 00000001C000AF10: lea     rax, [rsi+rsi*4]
 * 00000001C000AF14: and     r10d, 7FFh
 * 00000001C000AF1B: mov     ecx, r11d
 * 00000001C000AF1E: mov     r11, cs:WPP_GLOBAL_Control
 * 00000001C000AF25: lea     r8, [r10+rax*4]
 * 00000001C000AF29: mov     eax, [r11+r8*4+2Ch]
 * 00000001C000AF2E: bt      eax, ecx
 * 00000001C000AF31: lea     r8, aNull; "NULL"
 * 00000001C000AF38: jnb     short loc_1C000AFA6
 * 00000001C000AF3A: lea     r10, [rsi+rsi*4]
 * 00000001C000AF3E: add     r10, r10
 * 00000001C000AF41: cmp     [r11+r10*8+29h], bpl
 * 00000001C000AF46: jb      short loc_1C000AFA6
 * 00000001C000AF48: test    rbx, rbx
 * 00000001C000AF4B: jz      short loc_1C000AF5E
 * 00000001C000AF4D: mov     rdx, rdi
 * 00000001C000AF50: inc     rdx
 * 00000001C000AF53: cmp     byte ptr [rbx+rdx], 0
 * 00000001C000AF57: jnz     short loc_1C000AF50
 * 00000001C000AF59: inc     rdx
 * 00000001C000AF5C: jmp     short loc_1C000AF63
 * 00000001C000AF5E: mov     edx, 5
 * 00000001C000AF63: mov     rax, cs:pfnWppTraceMessage
 * 00000001C000AF6A: test    rbx, rbx
 * 00000001C000AF6D: mov     rcx, rbx
 * 00000001C000AF70: mov     r9d, r14d
 * 00000001C000AF73: cmovz   rcx, r8
 * 00000001C000AF77: and     [rsp+58h+var_28], 0
 * 00000001C000AF7D: mov     r8, [rsp+58h+arg_20]
 * 00000001C000AF85: mov     [rsp+58h+var_30], rdx
 * 00000001C000AF8A: mov     edx, 2Bh ; '+'
 * 00000001C000AF8F: mov     [rsp+58h+var_38], rcx
 * 00000001C000AF94: mov     rcx, [r11+r10*8+18h]
 * 00000001C000AF99: call    cs:__guard_dispatch_icall_fptr
 * 00000001C000AF9F: lea     r8, aNull; "NULL"
 * 00000001C000AFA6: test    rbx, rbx
 * 00000001C000AFA9: jz      short loc_1C000AFB9
 * 00000001C000AFAB: inc     rdi
 * 00000001C000AFAE: cmp     byte ptr [rbx+rdi], 0
 * 00000001C000AFB2: jnz     short loc_1C000AFAB
 * 00000001C000AFB4: inc     rdi
 * 00000001C000AFB7: jmp     short loc_1C000AFBE
 * 00000001C000AFB9: mov     edi, 5
 * 00000001C000AFBE: mov     r9, [rsp+58h+arg_20]
 * 00000001C000AFC6: test    rbx, rbx
 * 00000001C000AFC9: mov     edx, ebp
 * 00000001C000AFCB: mov     rcx, r12
 * 00000001C000AFCE: cmovz   rbx, r8
 * 00000001C000AFD2: and     [rsp+58h+var_20], 0
 * 00000001C000AFD8: mov     [rsp+58h+var_28], rdi
 * 00000001C000AFDD: mov     r8d, r15d
 * 00000001C000AFE0: mov     [rsp+58h+var_30], rbx
 * 00000001C000AFE5: mov     word ptr [rsp+58h+var_38], r14w
 * 00000001C000AFEB: call    cs:__imp_WppAutoLogTrace
 * 00000001C000AFF2: nop     dword ptr [rax+rax+00h]
 * 00000001C000AFF7: mov     rbx, [rsp+58h+arg_0]
 * 00000001C000AFFC: mov     rbp, [rsp+58h+arg_8]
 * 00000001C000B001: mov     rsi, [rsp+58h+arg_10]
 * 00000001C000B006: mov     rdi, [rsp+58h+arg_18]
 * 00000001C000B00B: add     rsp, 40h
 * 00000001C000B00F: pop     r15
 * 00000001C000B011: pop     r14
 * 00000001C000B013: pop     r12
 * 00000001C000B015: retn
 */
