/*
 * XREFs of WPP_RECORDER_SF_S @ 0x1C00023A0
 * Callers:
 *     MouseAddDeviceEx @ 0x1C000D540 (MouseAddDeviceEx.c)
 *     MouCreateClassObject @ 0x1C000D790 (MouCreateClassObject.c)
 *     MouConfiguration @ 0x1C0011080 (MouConfiguration.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0002B60 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_S @ 0x1C00023A0
 * Reason: Hex-Rays returned no pseudocode for 0x1C00023A0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00023A0: mov     [rsp+arg_0], rbx
 * 00000001C00023A5: mov     [rsp+arg_8], rbp
 * 00000001C00023AA: mov     [rsp+arg_10], rsi
 * 00000001C00023AF: push    rdi
 * 00000001C00023B0: push    r12
 * 00000001C00023B2: push    r13
 * 00000001C00023B4: push    r14
 * 00000001C00023B6: push    r15
 * 00000001C00023B8: sub     rsp, 40h
 * 00000001C00023BC: mov     rdi, [rsp+68h+arg_28]
 * 00000001C00023C4: mov     rbx, 0FFFFFFFFFFFFFFFFh
 * 00000001C00023CB: mov     ebp, r8d
 * 00000001C00023CE: mov     r13, rcx
 * 00000001C00023D1: mov     r14d, r8d
 * 00000001C00023D4: shr     r14, 10h
 * 00000001C00023D8: movzx   r15d, dl
 * 00000001C00023DC: lea     esi, [rbx+0Bh]
 * 00000001C00023DF: mov     rdx, cs:WPP_GLOBAL_Control
 * 00000001C00023E6: lea     r11d, [rbp-1]
 * 00000001C00023EA: mov     r10d, r11d
 * 00000001C00023ED: movzx   r12d, r9w
 * 00000001C00023F1: shr     r10, 5
 * 00000001C00023F5: lea     rax, [r14+r14*4]
 * 00000001C00023F9: and     r10d, 7FFh
 * 00000001C0002400: and     r11d, 1Fh
 * 00000001C0002404: lea     r8, [r10+rax*4]
 * 00000001C0002408: mov     eax, [rdx+r8*4+2Ch]
 * 00000001C000240D: bt      eax, r11d
 * 00000001C0002411: lea     r8, aNull_0; "NULL"
 * 00000001C0002418: jb      loc_1C0003776
 * 00000001C000241E: test    rdi, rdi
 * 00000001C0002421: jz      short loc_1C000248D
 * 00000001C0002423: cmp     word ptr [rdi+rbx*2+2], 0
 * 00000001C0002429: lea     rbx, [rbx+1]
 * 00000001C000242D: jnz     short loc_1C0002423
 * 00000001C000242F: lea     rsi, ds:2[rbx*2]
 * 00000001C0002437: mov     [rsp+68h+var_30], 0
 * 00000001C0002440: lea     r9, WPP_d07d70ae1de939905882a75eef030211_Traceguids
 * 00000001C0002447: mov     [rsp+68h+var_38], rsi
 * 00000001C000244C: mov     r8d, ebp
 * 00000001C000244F: mov     [rsp+68h+var_40], rdi
 * 00000001C0002454: mov     edx, r15d
 * 00000001C0002457: mov     rcx, r13
 * 00000001C000245A: mov     word ptr [rsp+68h+var_48], r12w
 * 00000001C0002460: call    cs:__imp_WppAutoLogTrace
 * 00000001C0002467: nop     dword ptr [rax+rax+00h]
 * 00000001C000246C: mov     rbx, [rsp+68h+arg_0]
 * 00000001C0002471: mov     rbp, [rsp+68h+arg_8]
 * 00000001C0002476: mov     rsi, [rsp+68h+arg_10]
 * 00000001C000247E: add     rsp, 40h
 * 00000001C0002482: pop     r15
 * 00000001C0002484: pop     r14
 * 00000001C0002486: pop     r13
 * 00000001C0002488: pop     r12
 * 00000001C000248A: pop     rdi
 * 00000001C000248B: retn
 * 00000001C000248D: mov     rdi, r8
 * 00000001C0002490: jmp     short loc_1C0002437
 * 00000001C0003776: lea     r10, [r14+r14*4]
 * 00000001C000377A: shl     r10, 4
 * 00000001C000377E: add     r10, rdx
 * 00000001C0003781: cmp     [r10+29h], r15b
 * 00000001C0003785: jb      loc_1C000241E
 * 00000001C000378B: test    rdi, rdi
 * 00000001C000378E: jz      short loc_1C00037A9
 * 00000001C0003790: mov     rax, rbx
 * 00000001C0003793: cmp     word ptr [rdi+rax*2+2], 0
 * 00000001C0003799: lea     rax, [rax+1]
 * 00000001C000379D: jnz     short loc_1C0003793
 * 00000001C000379F: lea     rcx, ds:2[rax*2]
 * 00000001C00037A7: jmp     short loc_1C00037AC
 * 00000001C00037A9: mov     rcx, rsi
 * 00000001C00037AC: mov     rax, cs:pfnWppTraceMessage
 * 00000001C00037B3: test    rdi, rdi
 * 00000001C00037B6: mov     [rsp+68h+var_38], 0
 * 00000001C00037BF: mov     rdx, rdi
 * 00000001C00037C2: cmovz   rdx, r8
 * 00000001C00037C6: mov     [rsp+68h+var_40], rcx
 * 00000001C00037CB: mov     rcx, [r10+18h]
 * 00000001C00037CF: lea     r8, WPP_d07d70ae1de939905882a75eef030211_Traceguids
 * 00000001C00037D6: mov     [rsp+68h+var_48], rdx
 * 00000001C00037DB: mov     r9d, r12d
 * 00000001C00037DE: mov     edx, 2Bh ; '+'
 * 00000001C00037E3: call    cs:__guard_dispatch_icall_fptr
 * 00000001C00037E9: lea     r8, aNull_0; "NULL"
 * 00000001C00037F0: jmp     loc_1C000241E
 */
