/*
 * XREFs of WPP_RECORDER_SF_S @ 0x1C0002610
 * Callers:
 *     KeyboardAddDeviceEx @ 0x1C000D9F0 (KeyboardAddDeviceEx.c)
 *     KbdCreateClassObject @ 0x1C000DD20 (KbdCreateClassObject.c)
 *     KbdConfiguration @ 0x1C0010560 (KbdConfiguration.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0002EE0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_S @ 0x1C0002610
 * Reason: Hex-Rays returned no pseudocode for 0x1C0002610
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0002610: mov     [rsp+arg_0], rbx
 * 00000001C0002615: mov     [rsp+arg_8], rbp
 * 00000001C000261A: mov     [rsp+arg_10], rsi
 * 00000001C000261F: mov     [rsp+arg_18], rdi
 * 00000001C0002624: push    r12
 * 00000001C0002626: push    r14
 * 00000001C0002628: push    r15
 * 00000001C000262A: sub     rsp, 40h
 * 00000001C000262E: mov     r8, cs:WPP_GLOBAL_Control
 * 00000001C0002635: lea     r12, aNull_0; "NULL"
 * 00000001C000263C: mov     rdi, [rsp+58h+arg_28]
 * 00000001C0002644: mov     rbx, 0FFFFFFFFFFFFFFFFh
 * 00000001C000264B: movzx   r14d, r9w
 * 00000001C000264F: mov     r15, rcx
 * 00000001C0002652: movzx   ebp, dl
 * 00000001C0002655: mov     eax, [r8+2Ch]
 * 00000001C0002659: lea     esi, [rbx+0Bh]
 * 00000001C000265C: test    al, 1
 * 00000001C000265E: jnz     loc_1C0003958
 * 00000001C0002664: test    rdi, rdi
 * 00000001C0002667: jz      short loc_1C00026DB
 * 00000001C0002669: nop     dword ptr [rax+00000000h]
 * 00000001C0002670: cmp     word ptr [rdi+rbx*2+2], 0
 * 00000001C0002676: lea     rbx, [rbx+1]
 * 00000001C000267A: jnz     short loc_1C0002670
 * 00000001C000267C: lea     rsi, ds:2[rbx*2]
 * 00000001C0002684: mov     [rsp+58h+var_20], 0
 * 00000001C000268D: lea     r9, WPP_1b6d0084df9f3ca48f318fdd34bf6db2_Traceguids
 * 00000001C0002694: mov     [rsp+58h+var_28], rsi
 * 00000001C0002699: mov     r8d, 1
 * 00000001C000269F: mov     [rsp+58h+var_30], rdi
 * 00000001C00026A4: mov     edx, ebp
 * 00000001C00026A6: mov     rcx, r15
 * 00000001C00026A9: mov     word ptr [rsp+58h+var_38], r14w
 * 00000001C00026AF: call    cs:__imp_WppAutoLogTrace
 * 00000001C00026B6: nop     dword ptr [rax+rax+00h]
 * 00000001C00026BB: mov     rbx, [rsp+58h+arg_0]
 * 00000001C00026C0: mov     rbp, [rsp+58h+arg_8]
 * 00000001C00026C5: mov     rsi, [rsp+58h+arg_10]
 * 00000001C00026CA: mov     rdi, [rsp+58h+arg_18]
 * 00000001C00026CF: add     rsp, 40h
 * 00000001C00026D3: pop     r15
 * 00000001C00026D5: pop     r14
 * 00000001C00026D7: pop     r12
 * 00000001C00026D9: retn
 * 00000001C00026DB: mov     rdi, r12
 * 00000001C00026DE: jmp     short loc_1C0002684
 * 00000001C0003958: cmp     [r8+29h], bpl
 * 00000001C000395C: jb      loc_1C0002664
 * 00000001C0003962: test    rdi, rdi
 * 00000001C0003965: jz      short loc_1C0003980
 * 00000001C0003967: mov     rax, rbx
 * 00000001C000396A: cmp     word ptr [rdi+rax*2+2], 0
 * 00000001C0003970: lea     rax, [rax+1]
 * 00000001C0003974: jnz     short loc_1C000396A
 * 00000001C0003976: lea     rdx, ds:2[rax*2]
 * 00000001C000397E: jmp     short loc_1C0003983
 * 00000001C0003980: mov     rdx, rsi
 * 00000001C0003983: mov     rax, cs:pfnWppTraceMessage
 * 00000001C000398A: lea     r8, WPP_1b6d0084df9f3ca48f318fdd34bf6db2_Traceguids
 * 00000001C0003991: test    rdi, rdi
 * 00000001C0003994: mov     [rsp+58h+var_28], 0
 * 00000001C000399D: mov     [rsp+58h+var_30], rdx
 * 00000001C00039A2: mov     rcx, rdi
 * 00000001C00039A5: cmovz   rcx, r12
 * 00000001C00039A9: mov     r9d, r14d
 * 00000001C00039AC: mov     [rsp+58h+var_38], rcx
 * 00000001C00039B1: mov     edx, 2Bh ; '+'
 * 00000001C00039B6: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C00039BD: mov     rcx, [rcx+18h]
 * 00000001C00039C1: call    cs:__guard_dispatch_icall_fptr
 * 00000001C00039C7: nop
 * 00000001C00039C8: jmp     loc_1C0002664
 */
