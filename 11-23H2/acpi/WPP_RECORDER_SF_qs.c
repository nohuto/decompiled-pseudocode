/*
 * XREFs of WPP_RECORDER_SF_qs @ 0x1C00152B8
 * Callers:
 *     ACPIBuildIssueNotifyInvalidateRelationsForDockDevice @ 0x1C000D760 (ACPIBuildIssueNotifyInvalidateRelationsForDockDevice.c)
 *     OSNotifyDeviceCheck @ 0x1C0032CA0 (OSNotifyDeviceCheck.c)
 *     OSNotifyDeviceEject @ 0x1C0032E28 (OSNotifyDeviceEject.c)
 *     OSNotifyDeviceEnum @ 0x1C0032EBC (OSNotifyDeviceEnum.c)
 *     AcpiHandleInternalNotify @ 0x1C0037488 (AcpiHandleInternalNotify.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0001DE0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qs @ 0x1C00152B8
 * Reason: Hex-Rays returned no pseudocode for 0x1C00152B8
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00152B8: mov     rax, rsp
 * 00000001C00152BB: mov     [rax+8], rbx
 * 00000001C00152BF: mov     [rax+10h], rbp
 * 00000001C00152C3: mov     [rax+18h], rsi
 * 00000001C00152C7: mov     [rax+20h], rdi
 * 00000001C00152CB: push    r12
 * 00000001C00152CD: push    r14
 * 00000001C00152CF: push    r15
 * 00000001C00152D1: sub     rsp, 50h
 * 00000001C00152D5: mov     rbx, [rsp+68h+arg_30]
 * 00000001C00152DD: mov     r12, rcx
 * 00000001C00152E0: mov     r15d, r8d
 * 00000001C00152E3: or      rdi, 0FFFFFFFFFFFFFFFFh
 * 00000001C00152E7: mov     esi, r8d
 * 00000001C00152EA: shr     rsi, 10h
 * 00000001C00152EE: movzx   r14d, r9w
 * 00000001C00152F2: lea     r11d, [r15-1]
 * 00000001C00152F6: movzx   ebp, dl
 * 00000001C00152F9: mov     r10d, r11d
 * 00000001C00152FC: and     r11d, 1Fh
 * 00000001C0015300: shr     r10, 5
 * 00000001C0015304: lea     rax, [rsi+rsi*4]
 * 00000001C0015308: and     r10d, 7FFh
 * 00000001C001530F: mov     ecx, r11d
 * 00000001C0015312: mov     r11, cs:WPP_GLOBAL_Control
 * 00000001C0015319: lea     r8, [r10+rax*4]
 * 00000001C001531D: mov     eax, [r11+r8*4+2Ch]
 * 00000001C0015322: bt      eax, ecx
 * 00000001C0015325: lea     r8, aNull; "NULL"
 * 00000001C001532C: jnb     loc_1C00153B4
 * 00000001C0015332: lea     r10, [rsi+rsi*4]
 * 00000001C0015336: add     r10, r10
 * 00000001C0015339: cmp     [r11+r10*8+29h], bpl
 * 00000001C001533E: jb      short loc_1C00153B4
 * 00000001C0015340: test    rbx, rbx
 * 00000001C0015343: jz      short loc_1C0015356
 * 00000001C0015345: mov     rdx, rdi
 * 00000001C0015348: inc     rdx
 * 00000001C001534B: cmp     byte ptr [rbx+rdx], 0
 * 00000001C001534F: jnz     short loc_1C0015348
 * 00000001C0015351: inc     rdx
 * 00000001C0015354: jmp     short loc_1C001535B
 * 00000001C0015356: mov     edx, 5
 * 00000001C001535B: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0015362: test    rbx, rbx
 * 00000001C0015365: mov     rcx, rbx
 * 00000001C0015368: mov     r9d, r14d
 * 00000001C001536B: cmovz   rcx, r8
 * 00000001C001536F: and     [rsp+68h+var_28], 0
 * 00000001C0015375: mov     r8, [rsp+68h+arg_20]
 * 00000001C001537D: mov     [rsp+68h+var_30], rdx
 * 00000001C0015382: mov     edx, 2Bh ; '+'
 * 00000001C0015387: mov     [rsp+68h+var_38], rcx
 * 00000001C001538C: lea     rcx, [rsp+68h+arg_28]
 * 00000001C0015394: mov     [rsp+68h+var_40], 8
 * 00000001C001539D: mov     [rsp+68h+var_48], rcx
 * 00000001C00153A2: mov     rcx, [r11+r10*8+18h]
 * 00000001C00153A7: call    cs:__guard_dispatch_icall_fptr
 * 00000001C00153AD: lea     r8, aNull; "NULL"
 * 00000001C00153B4: test    rbx, rbx
 * 00000001C00153B7: jz      short loc_1C00153C7
 * 00000001C00153B9: inc     rdi
 * 00000001C00153BC: cmp     byte ptr [rbx+rdi], 0
 * 00000001C00153C0: jnz     short loc_1C00153B9
 * 00000001C00153C2: inc     rdi
 * 00000001C00153C5: jmp     short loc_1C00153CC
 * 00000001C00153C7: mov     edi, 5
 * 00000001C00153CC: mov     r9, [rsp+68h+arg_20]
 * 00000001C00153D4: lea     rax, [rsp+68h+arg_28]
 * 00000001C00153DC: test    rbx, rbx
 * 00000001C00153DF: mov     edx, ebp
 * 00000001C00153E1: mov     rcx, r12
 * 00000001C00153E4: cmovz   rbx, r8
 * 00000001C00153E8: and     [rsp+68h+var_20], 0
 * 00000001C00153EE: mov     [rsp+68h+var_28], rdi
 * 00000001C00153F3: mov     r8d, r15d
 * 00000001C00153F6: mov     [rsp+68h+var_30], rbx
 * 00000001C00153FB: mov     [rsp+68h+var_38], 8
 * 00000001C0015404: mov     [rsp+68h+var_40], rax
 * 00000001C0015409: mov     word ptr [rsp+68h+var_48], r14w
 * 00000001C001540F: call    cs:__imp_WppAutoLogTrace
 * 00000001C0015416: nop     dword ptr [rax+rax+00h]
 * 00000001C001541B: lea     r11, [rsp+68h+var_18]
 * 00000001C0015420: mov     rbx, [r11+20h]
 * 00000001C0015424: mov     rbp, [r11+28h]
 * 00000001C0015428: mov     rsi, [r11+30h]
 * 00000001C001542C: mov     rdi, [r11+38h]
 * 00000001C0015430: mov     rsp, r11
 * 00000001C0015433: pop     r15
 * 00000001C0015435: pop     r14
 * 00000001C0015437: pop     r12
 * 00000001C0015439: retn
 */
